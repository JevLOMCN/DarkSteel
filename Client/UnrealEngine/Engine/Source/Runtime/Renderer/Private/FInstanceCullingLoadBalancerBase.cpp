// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetWrappedCsGroupCount @ 144bd0230

TIntVector3<int> * __thiscall
FInstanceCullingLoadBalancerBase::GetWrappedCsGroupCount
          (FInstanceCullingLoadBalancerBase *this,TIntVector3<int> *__return_storage_ptr__,
          TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int> *param_1,int param_2
          )

{
  FComputeShaderUtils::GetGroupCountWrapped(__return_storage_ptr__,param_2 * param_1->ArrayNum);
  return __return_storage_ptr__;
}

// SetShaderDefines @ 144be1b50

void __cdecl FInstanceCullingLoadBalancerBase::SetShaderDefines(FShaderCompilerEnvironment *param_1)

{
  FShaderCompilerEnvironment::SetDefine(param_1,L"NUM_THREADS_PER_GROUP",0x40);
  FShaderCompilerEnvironment::SetDefine(param_1,L"NUM_INSTANCES_ITEM_BITS",7);
  FShaderCompilerEnvironment::SetDefine(param_1,L"NUM_INSTANCES_ITEM_MASK",0x7f);
  FShaderCompilerEnvironment::SetDefine(param_1,L"PREFIX_BITS",6);
  FShaderCompilerEnvironment::SetDefine(param_1,L"PREFIX_BIT_MASK",0x3f);
  return;
}

// Upload @ 144beb670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGPUData * __thiscall
FInstanceCullingLoadBalancerBase::Upload
          (FInstanceCullingLoadBalancerBase *this,FGPUData *__return_storage_ptr__,
          FRDGBuilder *param_1,
          TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int> *param_2,
          TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int> *param_3,
          ERDGInitialDataFlags param_4,int param_5)

{
  longlong lVar1;
  void *pvVar2;
  FRDGBuffer *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar6;
  FPackedBatch *pFVar7;
  FPackedItem *pFVar8;
  ulong64 uVar9;
  ERDGInitialDataFlags EVar10;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar4 = (ulonglong)_tls_index;
  pFVar7 = param_2->DataPtr;
  uVar5 = param_2->ArrayNum;
  __return_storage_ptr__->NumBatches = 0;
  __return_storage_ptr__->NumItems = 0;
  __return_storage_ptr__->NumGroupsPerBatch = 1;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar4 * 8);
  __return_storage_ptr__->BatchBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->ItemBuffer = (FRDGBuffer *)0x0;
  piVar6 = (int *)(lVar1 + 0x9d4c);
  if ((*piVar6 < `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
    ::__l2::DummyElement.FirstItem_NumItems = 0;
    _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (uVar5 == 0) {
    uVar9 = 4;
    uVar5 = 1;
    pFVar7 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
              ::__l2::DummyElement;
    EVar10 = NoCopy;
  }
  else {
    uVar9 = (longlong)(int)uVar5 << 2;
    EVar10 = param_4;
  }
  pFVar3 = CreateStructuredBuffer
                     (param_1,L"InstanceCullingLoadBalancer.Batches",4,uVar5,pFVar7,uVar9,EVar10);
  __return_storage_ptr__->BatchBuffer = pFVar3;
  pFVar8 = param_3->DataPtr;
  uVar5 = param_3->ArrayNum;
  if ((*piVar6 < `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
    ::__l2::DummyElement.InstanceDataOffset_NumInstances = 0;
    `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
    ::__l2::DummyElement.Payload_BatchPrefixOffset = 0;
    _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (uVar5 == 0) {
    param_4 = NoCopy;
    uVar9 = 8;
    uVar5 = 1;
    pFVar8 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
              ::__l2::DummyElement;
  }
  else {
    uVar9 = (longlong)(int)uVar5 << 3;
  }
  pFVar3 = CreateStructuredBuffer
                     (param_1,L"InstanceCullingLoadBalancer.Items",8,uVar5,pFVar8,uVar9,param_4);
  __return_storage_ptr__->ItemBuffer = pFVar3;
  __return_storage_ptr__->NumBatches = param_2->ArrayNum;
  __return_storage_ptr__->NumItems = param_3->ArrayNum;
  __return_storage_ptr__->NumGroupsPerBatch = param_5;
  return __return_storage_ptr__;
}

