// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 6

// FAsyncDynamicMetaSoundBuilder @ 14b2a6180

FAsyncDynamicMetaSoundBuilder * __thiscall
Metasound::FAsyncDynamicMetaSoundBuilder::FAsyncDynamicMetaSoundBuilder
          (FAsyncDynamicMetaSoundBuilder *this,FMetasoundDynamicGraphGenerator *param_1,
          FMetasoundDynamicGraphGeneratorInitParams *param_2,bool param_3)

{
  this->_padding_ = (longlong)param_1;
  this->DynamicGenerator = param_1;
  this->_padding_ = (longlong)&___7FAsyncDynamicMetaSoundBuilder_Metasound__6B_;
  *(bool *)&this->_padding_ = param_3;
  FGeneratorInitParams::FGeneratorInitParams
            ((FGeneratorInitParams *)&this->InitParams,(FGeneratorInitParams *)param_2);
  (this->InitParams).TransformQueue.Object = (param_2->TransformQueue).Object;
  (this->InitParams).TransformQueue.SharedReferenceCount.ReferenceController =
       (param_2->TransformQueue).SharedReferenceCount.ReferenceController;
  (param_2->TransformQueue).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_2->TransformQueue).Object =
       (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
        *)0x0;
  return this;
}

// ~FAsyncDynamicMetaSoundBuilder @ 14b2a7d10

void __thiscall
Metasound::FAsyncDynamicMetaSoundBuilder::~FAsyncDynamicMetaSoundBuilder
          (FAsyncDynamicMetaSoundBuilder *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InitParams).TransformQueue.SharedReferenceCount.ReferenceController);
  FGeneratorInitParams::~FGeneratorInitParams((FGeneratorInitParams *)&this->InitParams);
  return;
}

// operator() @ 14b2a9680

void __thiscall
`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_1>::operator()
          (void *this,FName *param_1,FInputVertexInterfaceData *param_2)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IDataTypeRegistry *pIVar7;
  FAnyDataReference *pFVar8;
  FInputDataVertex *pFVar9;
  FName local_18;
  undefined4 local_10;
  
  lVar2 = *(longlong *)this;
  Metasound::FInputVertexInterfaceData::operator=
            ((FInputVertexInterfaceData *)(lVar2 + 0x140),param_2);
  pIVar7 = Metasound::Frontend::IDataTypeRegistry::Get();
  pFVar8 = Metasound::FInputVertexInterfaceData::FindDataReference
                     ((FInputVertexInterfaceData *)(lVar2 + 0x140),param_1);
  if ((pFVar8 != (FAnyDataReference *)0x0) && (pFVar8->AccessType == Write)) {
    pFVar9 = Metasound::FInputVertexInterfaceData::GetVertex
                       ((FInputVertexInterfaceData *)(lVar2 + 0x140),param_1);
    Metasound::GeneratorBuilder::AddParameterSetter
              (pIVar7,pFVar9,pFVar8,
               (TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
                *)(lVar2 + 0x1d0),
               (TMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>_>
                *)(lVar2 + 0x1e0));
  }
  local_18 = *param_1;
  pFVar1 = (ForAnyElementType *)(lVar2 + 400);
  local_10 = CONCAT22(local_10._2_2_,2);
  if (((FName *)pFVar1->Data <= &local_18) &&
     (&local_18 < (FName *)((longlong)pFVar1->Data + (longlong)*(int *)(lVar2 + 0x19c) * 0xc))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar2 + 0x198);
  if (iVar6 == *(int *)(lVar2 + 0x19c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar1,(int *)(lVar2 + 0x19c));
  }
  *(int *)(lVar2 + 0x198) = iVar6 + 1;
  pFVar3 = pFVar1->Data;
  *(FName *)(pFVar3 + (longlong)iVar6 * 0xc) = local_18;
  *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = local_10;
  LOCK();
  *(undefined1 *)(lVar2 + 0x110) = 1;
  UNLOCK();
  return;
}

// operator() @ 14b2a9d80

void __thiscall
`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_5>::operator()
          (void *this,FName *param_1,FOutputVertexInterfaceData *param_2)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName local_18;
  undefined4 local_10;
  
  lVar2 = *(longlong *)this;
  Metasound::MetasoundGeneratorPrivate::LogErrorIfIsAudioVertex
            (param_1,L"The MetaSound Generator cannot dynamically remove audio outputs");
  Metasound::FOutputVertexInterfaceData::operator=
            ((FOutputVertexInterfaceData *)(lVar2 + 0x168),param_2);
  local_18 = *param_1;
  pFVar1 = (ForAnyElementType *)(lVar2 + 400);
  local_10 = CONCAT22(local_10._2_2_,0x203);
  if (((FName *)pFVar1->Data <= &local_18) &&
     (&local_18 < (FName *)((longlong)pFVar1->Data + (longlong)*(int *)(lVar2 + 0x19c) * 0xc))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar2 + 0x198);
  if (iVar6 == *(int *)(lVar2 + 0x19c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar1,(int *)(lVar2 + 0x19c));
  }
  *(int *)(lVar2 + 0x198) = iVar6 + 1;
  pFVar3 = pFVar1->Data;
  *(FName *)(pFVar3 + (longlong)iVar6 * 0xc) = local_18;
  *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = local_10;
  LOCK();
  *(undefined1 *)(lVar2 + 0x110) = 1;
  UNLOCK();
  return;
}

// DoWork @ 14b2af6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014b2af8ac) */
/* WARNING: Removing unreachable block (ram,0x00014b2af8bd) */
/* WARNING: Removing unreachable block (ram,0x00014b2af8c1) */
/* WARNING: Removing unreachable block (ram,0x00014b2af92f) */
/* WARNING: Removing unreachable block (ram,0x00014b2af940) */
/* WARNING: Removing unreachable block (ram,0x00014b2af944) */
/* WARNING: Removing unreachable block (ram,0x00014b2af9b8) */
/* WARNING: Removing unreachable block (ram,0x00014b2af9c9) */
/* WARNING: Removing unreachable block (ram,0x00014b2af9cd) */
/* WARNING: Removing unreachable block (ram,0x00014b2afa41) */
/* WARNING: Removing unreachable block (ram,0x00014b2afa52) */
/* WARNING: Removing unreachable block (ram,0x00014b2afa56) */
/* WARNING: Removing unreachable block (ram,0x00014b2afaca) */
/* WARNING: Removing unreachable block (ram,0x00014b2afadb) */
/* WARNING: Removing unreachable block (ram,0x00014b2afadf) */

void __thiscall
Metasound::FAsyncDynamicMetaSoundBuilder::DoWork(FAsyncDynamicMetaSoundBuilder *this)

{
  TSharedPtr<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  *pTVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 auStackY_268 [32];
  FName local_238;
  FString local_230;
  undefined8 local_220;
  FSharedReferencer<1> FStack_218;
  FString local_210;
  FOperatorAndInputs local_1f8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [32];
  void *local_158;
  undefined4 local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 local_144;
  void *local_138;
  undefined4 local_130;
  code *local_128 [2];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  code *local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *plStack_d0;
  code *local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *plStack_a0;
  code *local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *plStack_70;
  code *local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_238 = (FName)(this->InitParams)._padding_;
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  ::FName::ToString(&local_238,&local_210);
  ::FString::PrintfImpl(&local_230,L"AsyncMetaSoundBuilder::DoWork %s");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_230.Data.ArrayNum != 0) {
    FVar5.Data = local_230.Data.AllocatorInstance.Data;
  }
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,(wchar_t *)FVar5.Data);
  }
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  local_238 = (FName)(this->InitParams)._padding_;
  ::FName::ToString(&local_238,&local_210);
  ::FString::PrintfImpl(&local_230,L"AsyncMetaSoundBuilder::DoWork %s");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_230.Data.ArrayNum != 0) {
    FVar5.Data = local_230.Data.AllocatorInstance.Data;
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar5.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGeneratorBuilder.cpp"
               ,0x6b);
  }
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  local_68[1] = local_98[1];
  local_98[1] = local_c8[1];
  local_c8[1] = local_f8[1];
  local_f8[1] = local_128[1];
  uStack_1a0 = SUB84(this->DynamicGenerator,0);
  uStack_110 = uStack_1a0;
  uStack_19c = (undefined4)((ulonglong)this->DynamicGenerator >> 0x20);
  uStack_10c = uStack_19c;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_1>,void,FName_const_&,Metasound::FInputVertexInterfaceData_const_&>
                 ::Call;
  local_128[1] = (code *)uStack_1b0;
  local_108 = local_198;
  uStack_104 = uStack_194;
  plStack_100 = (longlong *)0x0;
  local_f8[0] = (code *)0x0;
  plStack_d0 = (longlong *)0x0;
  local_c8[0] = (code *)0x0;
  plStack_a0 = (longlong *)0x0;
  local_98[0] = (code *)0x0;
  plStack_70 = (longlong *)0x0;
  local_68[0] = (code *)0x0;
  plStack_40 = (longlong *)0x0;
  local_118 = 0x523a1348;
  uStack_114 = 1;
  uStack_190 = 0;
  uStack_1a0 = SUB84(this->DynamicGenerator,0);
  uStack_e0 = uStack_1a0;
  uStack_19c = (undefined4)((ulonglong)this->DynamicGenerator >> 0x20);
  uStack_dc = uStack_19c;
  local_f8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_2>,void,FName_const_&,Metasound::FInputVertexInterfaceData_const_&>
                ::Call;
  plStack_d0 = (longlong *)0x0;
  local_e8 = 0x523a1368;
  uStack_e4 = 1;
  uStack_190 = 0;
  uStack_1a0 = SUB84(this->DynamicGenerator,0);
  uStack_b0 = uStack_1a0;
  uStack_19c = (undefined4)((ulonglong)this->DynamicGenerator >> 0x20);
  uStack_ac = uStack_19c;
  local_c8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_3>,void,FName_const_&,Metasound::FOutputVertexInterfaceData_const_&>
                ::Call;
  plStack_a0 = (longlong *)0x0;
  local_b8 = 0x523a1388;
  uStack_b4 = 1;
  uStack_190 = 0;
  uStack_1a0 = SUB84(this->DynamicGenerator,0);
  uStack_80 = uStack_1a0;
  uStack_19c = (undefined4)((ulonglong)this->DynamicGenerator >> 0x20);
  uStack_7c = uStack_19c;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_4>,void,FName_const_&,Metasound::FOutputVertexInterfaceData_const_&>
                ::Call;
  plStack_70 = (longlong *)0x0;
  local_88 = 0x523a13a8;
  uStack_84 = 1;
  uStack_190 = 0;
  uStack_1a0 = SUB84(this->DynamicGenerator,0);
  uStack_19c = (undefined4)((ulonglong)this->DynamicGenerator >> 0x20);
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_5>,void,FName_const_&,Metasound::FOutputVertexInterfaceData_const_&>
                ::Call;
  plStack_40 = (longlong *)0x0;
  local_58 = 0x523a13c8;
  uStack_54 = 1;
  uStack_50 = uStack_1a0;
  uStack_4c = uStack_19c;
  uStack_190 = 0;
  plStack_40 = (longlong *)0x0;
  uStack_54 = 1;
  local_58 = 0x523a13c8;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_5>,void,FName_const_&,Metasound::FOutputVertexInterfaceData_const_&>
                ::Call;
  plStack_70 = (longlong *)0x0;
  uStack_84 = 1;
  local_88 = 0x523a13a8;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_4>,void,FName_const_&,Metasound::FOutputVertexInterfaceData_const_&>
                ::Call;
  plStack_a0 = (longlong *)0x0;
  uStack_b4 = 1;
  local_b8 = 0x523a1388;
  local_c8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_3>,void,FName_const_&,Metasound::FOutputVertexInterfaceData_const_&>
                ::Call;
  plStack_d0 = (longlong *)0x0;
  uStack_e4 = 1;
  local_e8 = 0x523a1368;
  local_f8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_2>,void,FName_const_&,Metasound::FInputVertexInterfaceData_const_&>
                ::Call;
  plStack_100 = (longlong *)0x0;
  uStack_114 = 1;
  local_118 = 0x523a1348;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_1>,void,FName_const_&,Metasound::FInputVertexInterfaceData_const_&>
                 ::Call;
  uStack_190 = 0;
  local_1b8 = 0;
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_4_ = 0;
  local_188._12_4_ = 0;
  local_178._0_8_ = (FScriptContainerElement *)0x0;
  local_178._8_8_ = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_14c = 0x80;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  GeneratorBuilder::BuildDynamicGraphOperator
            (&local_1f8,(FOperatorSettings *)(this->_padding_ + 0x18),&this->InitParams,
             (FDynamicOperatorUpdateCallbacks *)local_128,(FBuildResults *)local_188);
  GeneratorBuilder::LogBuildErrors
            ((FTopLevelAssetPath *)&(this->InitParams)._padding_,(FBuildResults *)local_188);
  FAsyncMetaSoundBuilderBase::SetGraphOnGenerator
            ((FAsyncMetaSoundBuilderBase *)this,&local_1f8,(FBuildResults *)local_188);
  FGeneratorInitParams::Reset((FGeneratorInitParams *)&this->InitParams);
  pTVar1 = &(this->InitParams).TransformQueue;
  local_220 = 0;
  FStack_218.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
                 *)&local_220) {
    pTVar1->Object =
         (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
          *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InitParams).TransformQueue.SharedReferenceCount,&FStack_218);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_218.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.RenderCost.SharedReferenceCount.ReferenceController);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_1f8.Inputs.SubInterfaces.AllocatorInstance.Data,
             local_1f8.Inputs.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_1f8.Inputs.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_1f8.Inputs.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)local_1f8.Inputs.Bindings.AllocatorInstance.Data,
             local_1f8.Inputs.Bindings.ArrayNum);
  if ((FInputBinding *)local_1f8.Inputs.Bindings.AllocatorInstance.Data != (FInputBinding *)0x0) {
    FMemory::Free(local_1f8.Inputs.Bindings.AllocatorInstance.Data);
  }
  if (local_1f8.Operator.Ptr != (IOperator *)0x0) {
    (**(code **)*local_1f8.Operator.Ptr)();
  }
  local_130 = 0;
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_178,0,local_178._8_4_);
  iVar3 = SUB84(local_178._8_8_,4);
  local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)local_178,0,(int *)(local_178 + 0xc));
  }
  local_148 = 0xffffffff;
  local_144 = 0;
  local_150 = 0;
  if (0x80 < local_14c) {
    local_14c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),0);
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  DestructItems<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,int>
            ((TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
              *)local_188._0_8_,local_188._8_4_);
  if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if (local_68[0] != (code *)0x0) {
    plVar4 = (longlong *)&local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar4 = plStack_40;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_98[0] != (code *)0x0) {
    plVar4 = (longlong *)&local_88;
    if (plStack_70 != (longlong *)0x0) {
      plVar4 = plStack_70;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_c8[0] != (code *)0x0) {
    plVar4 = (longlong *)&local_b8;
    if (plStack_a0 != (longlong *)0x0) {
      plVar4 = plStack_a0;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_f8[0] != (code *)0x0) {
    plVar4 = (longlong *)&local_e8;
    if (plStack_d0 != (longlong *)0x0) {
      plVar4 = plStack_d0;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_128[0] != (code *)0x0) {
    plVar4 = (longlong *)&local_118;
    if (plStack_100 != (longlong *)0x0) {
      plVar4 = plStack_100;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// GetGeneratorParams @ 14b2b10f0

FGeneratorInitParams * __thiscall
Metasound::FAsyncDynamicMetaSoundBuilder::GetGeneratorParams(FAsyncDynamicMetaSoundBuilder *this)

{
  return (FGeneratorInitParams *)&this->InitParams;
}

