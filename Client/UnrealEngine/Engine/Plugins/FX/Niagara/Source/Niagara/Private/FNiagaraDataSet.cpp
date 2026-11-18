// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 23

// FNiagaraDataSet @ 1492128b0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSet * __thiscall FNiagaraDataSet::FNiagaraDataSet(FNiagaraDataSet *this)

{
  (this->FreeIDsTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeIDsTable).ArrayNum = 0;
  (this->FreeIDsTable).ArrayMax = 0;
  (this->SpawnedIDsTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnedIDsTable).ArrayNum = 0;
  (this->SpawnedIDsTable).ArrayMax = 0;
  (this->GPUFreeIDs).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GPUFreeIDs).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->GPUFreeIDs).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->GPUFreeIDs).NumBytes = 0;
  (this->GPUFreeIDs).ClassName.ComparisonIndex = 0;
  this->NumFreeIDs = 0;
  this->MaxUsedID = 0;
  this->IDAcquireTag = 0;
  *(undefined8 *)&(this->GPUFreeIDs).ClassName.Number = 0;
  (this->GPUFreeIDs).OwnerName.Number = 0;
  this->BufferSizeBytes = (atomic<__int64>)0x0;
  (this->Data).AllocatorInstance.SecondaryData = (ForElementType<FNiagaraDataBuffer_*>)0x0;
  this->GPUNumAllocatedIDs = 0;
  this->CurrentData = (FNiagaraDataBuffer *)0x0;
  this->DestinationData = (FNiagaraDataBuffer *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 2;
  this->bInitialized = false;
  (this->CompiledData).StructPtr = &FNiagaraDataSetCompiledData::DummyCompiledData;
  this->MaxInstanceCount = 0xffffffff;
  this->MaxAllocationCount = 0xffffffff;
  return this;
}

// ~FNiagaraDataSet @ 1492156d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataSet::~FNiagaraDataSet(FNiagaraDataSet *this)

{
  int *piVar1;
  ForElementType<FNiagaraDataBuffer_*> FVar2;
  int iVar3;
  FRHIBuffer *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIShaderResourceView *this_02;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<FNiagaraDataBuffer_*> FVar7;
  undefined1 local_res8 [8];
  
  iVar3 = (this->Data).ArrayNum;
  (this->CompiledData).StructPtr = (FNiagaraDataSetCompiledData *)0x0;
  if (0 < iVar3) {
    FVar7 = (this->Data).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FNiagaraDataBuffer_*>)0x0) {
      FVar7 = (ForElementType<FNiagaraDataBuffer_*>)&this->Data;
    }
    FVar2 = (ForElementType<FNiagaraDataBuffer_*>)((longlong)FVar7 + (longlong)iVar3 * 8);
    while( true ) {
      if ((this->Data).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNiagaraDataBuffer_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar7 == FVar2) break;
      FNiagaraSharedObject::Destroy(*(FNiagaraSharedObject **)FVar7);
      FVar7 = (ForElementType<FNiagaraDataBuffer_*>)((longlong)FVar7 + 8);
    }
    piVar1 = &(this->Data).ArrayMax;
    (this->Data).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraDataBuffer_*>_>
                (8,8,0,&(this->Data).AllocatorInstance,0,piVar1);
    }
  }
  if ((this->GPUFreeIDs).Buffer.Reference != (FRHIBuffer *)0x0) {
    bVar6 = IsInRenderingThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                           ,0x93,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (this->GPUFreeIDs).NumBytes = 0;
    this_00 = (this->GPUFreeIDs).Buffer.Reference;
    if (this_00 != (FRHIBuffer *)0x0) {
      (this->GPUFreeIDs).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    this_01 = (this->GPUFreeIDs).UAV.Reference;
    if (this_01 != (FRHIUnorderedAccessView *)0x0) {
      (this->GPUFreeIDs).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)this_01);
    }
    this_02 = (this->GPUFreeIDs).SRV.Reference;
    if (this_02 != (FRHIShaderResourceView *)0x0) {
      (this->GPUFreeIDs).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)this_02);
    }
  }
  this->GPUNumAllocatedIDs = 0;
  FVar7 = (this->Data).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FNiagaraDataBuffer_*>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  FRWBuffer::~FRWBuffer(&this->GPUFreeIDs);
  pFVar4 = (this->SpawnedIDsTable).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->FreeIDsTable).AllocatorInstance.Data;
  if (pFVar4 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar4);
  return;
}

// Allocate @ 14921d230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataSet::Allocate(FNiagaraDataSet *this,int param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  uint uVar3;
  uint uVar4;
  FNiagaraDataBuffer *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  piVar1 = &(this->FreeIDsTable).ArrayMax;
  LOCK();
  this->BufferSizeBytes =
       (atomic<__int64>)
       ((longlong)this->BufferSizeBytes +
       ((longlong)(this->SpawnedIDsTable).ArrayMax + (longlong)*piVar1) * -4);
  UNLOCK();
  FNiagaraDataBuffer::Allocate(this->DestinationData,param_1,false);
  if (param_2) {
    FNiagaraDataBuffer::CopyTo
              (this->CurrentData,this->DestinationData,0,0,this->CurrentData->NumInstances);
  }
  if (((this->CompiledData).StructPtr)->bRequiresPersistentIDs != 0) {
    uVar11 = this->MaxUsedID + 1;
    pFVar5 = this->DestinationData;
    if ((int)uVar11 < param_1) {
      uVar11 = param_1;
    }
    uVar3 = (this->CurrentData->IDToIndexTable).ArrayNum;
    uVar4 = uVar3;
    if ((int)uVar3 < (int)uVar11) {
      piVar2 = &(this->FreeIDsTable).ArrayNum;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11 - uVar3,&(this->FreeIDsTable).AllocatorInstance,piVar2,piVar1);
      uVar7 = uVar11;
      if (((this->FreeIDsTable).ArrayNum < (int)(this->NumFreeIDs + (uVar11 - uVar3))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumFreeIDs + NewNumIds <= FreeIDsTable.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                             ,0x163,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      while (uVar7 = uVar7 - 1, uVar4 = uVar11, (int)uVar3 <= (int)uVar7) {
        uVar4 = this->NumFreeIDs;
        this->NumFreeIDs = uVar4 + 1;
        uVar9 = 0;
        if ((int)uVar4 < *piVar2) {
          uVar9 = ~uVar4 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(uint *)((this->FreeIDsTable).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) = uVar7;
      }
    }
    iVar10 = (pFVar5->IDToIndexTable).ArrayNum;
    if (iVar10 < (int)uVar4) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4 - iVar10,&(pFVar5->IDToIndexTable).AllocatorInstance,
                 &(pFVar5->IDToIndexTable).ArrayNum,&(pFVar5->IDToIndexTable).ArrayMax);
    }
    else {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if ((int)uVar4 < iVar10) {
        uVar11 = iVar10 - uVar4;
        if (((int)(uVar11 | uVar4) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar11 != 0) {
          _Dst = (pFVar5->IDToIndexTable).AllocatorInstance.Data + (longlong)(int)uVar4 * 4;
          iVar10 = ((pFVar5->IDToIndexTable).ArrayNum - uVar11) - uVar4;
          if (iVar10 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar11 * 4,(longlong)iVar10 << 2);
          }
          iVar10 = (pFVar5->IDToIndexTable).ArrayNum - uVar11;
          (pFVar5->IDToIndexTable).ArrayNum = iVar10;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&(pFVar5->IDToIndexTable).AllocatorInstance,iVar10,
                     &(pFVar5->IDToIndexTable).ArrayMax);
        }
      }
    }
    memset((pFVar5->IDToIndexTable).AllocatorInstance.Data,0xff,(ulonglong)(uVar4 * 4));
    this->MaxUsedID = -1;
  }
  LOCK();
  this->BufferSizeBytes =
       (atomic<__int64>)
       ((longlong)this->BufferSizeBytes +
       ((longlong)(this->FreeIDsTable).ArrayMax + (longlong)(this->SpawnedIDsTable).ArrayMax) * 4);
  UNLOCK();
  return;
}

// AllocateBuffer @ 14921d4f0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataBuffer * __thiscall FNiagaraDataSet::AllocateBuffer(FNiagaraDataSet *this)

{
  int *piVar1;
  TArray<FNiagaraDataBuffer_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraDataBuffer *pFVar6;
  ForElementType<FNiagaraDataBuffer_*> FVar7;
  ForElementType<FNiagaraDataBuffer_*> FVar8;
  undefined1 local_res8 [16];
  FNiagaraDataBuffer *local_38 [2];
  
  FVar8 = (this->Data).AllocatorInstance.SecondaryData;
  iVar5 = (this->Data).ArrayNum;
  if (FVar8 == (ForElementType<FNiagaraDataBuffer_*>)0x0) {
    FVar8 = (ForElementType<FNiagaraDataBuffer_*>)&this->Data;
  }
  FVar7 = (ForElementType<FNiagaraDataBuffer_*>)((longlong)FVar8 + (longlong)iVar5 * 8);
  while( true ) {
    if ((this->Data).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraDataBuffer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar8 == FVar7) break;
    pFVar6 = *(FNiagaraDataBuffer **)FVar8;
    if ((pFVar6 == (FNiagaraDataBuffer *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                           ,0x104,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNiagaraDataBuffer *)(*pcVar3)();
      return pFVar6;
    }
    if (pFVar6 != this->CurrentData) {
      LOCK();
      bVar4 = (int)pFVar6->_padding_ == 0;
      if (bVar4) {
        *(undefined4 *)&pFVar6->_padding_ = 0xffffffff;
      }
      UNLOCK();
      if (bVar4) {
        return pFVar6;
      }
    }
    FVar8 = (ForElementType<FNiagaraDataBuffer_*>)((longlong)FVar8 + 8);
  }
  pTVar2 = &this->Data;
  pFVar6 = ::operator_new(0x160);
  local_38[0] = (FNiagaraDataBuffer *)0x0;
  if (pFVar6 != (FNiagaraDataBuffer *)0x0) {
    local_38[0] = FNiagaraDataBuffer::FNiagaraDataBuffer(pFVar6,this);
  }
  FVar8 = (this->Data).AllocatorInstance.SecondaryData;
  FVar7 = FVar8;
  if (FVar8 == (ForElementType<FNiagaraDataBuffer_*>)0x0) {
    FVar7 = (ForElementType<FNiagaraDataBuffer_*>)pTVar2;
  }
  if ((ulonglong)FVar7 <= local_38) {
    if (FVar8 == (ForElementType<FNiagaraDataBuffer_*>)0x0) {
      FVar8 = (ForElementType<FNiagaraDataBuffer_*>)pTVar2;
    }
    if ((local_38 < (FNiagaraDataBuffer **)((longlong)FVar8 + (longlong)(this->Data).ArrayMax * 8))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNiagaraDataBuffer *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraDataBuffer_*>_>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = local_38[0];
  (this->Data).ArrayNum = iVar5 + 1;
  FVar8 = (this->Data).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FNiagaraDataBuffer_*>)0x0) {
    FVar8 = (ForElementType<FNiagaraDataBuffer_*>)pTVar2;
  }
  *(FNiagaraDataBuffer **)((longlong)FVar8 + (longlong)iVar5 * 8) = local_38[0];
  LOCK();
  bVar4 = (int)local_38[0]->_padding_ == 0;
  if (bVar4) {
    *(undefined4 *)&local_38[0]->_padding_ = 0xffffffff;
  }
  UNLOCK();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer->TryLock()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x10c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FNiagaraDataBuffer *)(*pcVar3)();
    return pFVar6;
  }
  if (((int)pFVar6->_padding_ != -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer->IsBeingWritten()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x10d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FNiagaraDataBuffer *)(*pcVar3)();
    return pFVar6;
  }
  return pFVar6;
}

// AllocateGPUFreeIDs @ 14921ded0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014921e31b) */
/* WARNING: Removing unreachable block (ram,0x00014921e330) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataSet::AllocateGPUFreeIDs
          (FNiagaraDataSet *this,uint param_1,FRHICommandList *param_2,Type param_3,wchar_t *param_4
          )

{
  FRWBuffer *pFVar1;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  FRHIBuffer *this_00;
  FRHIUnorderedAccessView *this_01;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  void *pvVar9;
  size_t sVar10;
  FRHIShaderResourceView *pFVar11;
  ulong64 uVar12;
  wchar_t *pwVar13;
  TRefCountPtr<FRHIBuffer> this_02;
  int iVar14;
  TRefCountPtr<FRHIUnorderedAccessView> this_03;
  uint uVar15;
  FRHIBuffer *pFVar16;
  TRefCountPtr<FRHIShaderResourceView> this_04;
  undefined1 auStackY_988 [32];
  TArrayView<FRHITransitionInfo_const_,int> local_938;
  Type local_928;
  FRHITransitionInfo local_920;
  FRWBuffer local_8f0;
  FRHIBreadcrumbScope local_8c0;
  undefined8 local_8b0;
  wchar_t *pwStack_8a8;
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [1035];
  wchar_t local_62 [5];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_988;
  uVar15 = param_1 + 0x3ff & 0xfffffc00;
  if (this->GPUNumAllocatedIDs < uVar15) {
    LOCK();
    this->BufferSizeBytes =
         (atomic<__int64>)((longlong)this->BufferSizeBytes - (ulonglong)(this->GPUFreeIDs).NumBytes)
    ;
    UNLOCK();
    local_928 = param_3;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_8c0.Node._0_4_ = 0x1d8;
      local_8c0.RHICmdList = (FRHIComputeCommandList *)0x151db4360;
      local_8b0 = 0;
      pwStack_8a8 = L"NiagaraGPUComputeInitFreeIDs";
      ::Desc._padding_._0_4_ = 0x51db4360;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x1d8;
      ::Desc._padding_._4_4_ = local_8c0.Node._4_4_;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51db46c0;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FNiagaraDataSet::AllocateGPUFreeIDs'::__l11::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar7 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_2);
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar8->Allocator = pFVar7;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar4)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar6 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar6;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar8->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_8c0,(FRHIComputeCommandList *)param_2,pFVar8);
    local_898.Base = local_878;
    local_8b0 = CONCAT71(local_8b0._1_7_,1);
    local_898.CurPos = local_878;
    local_898.bIsDynamic = false;
    local_898.bIsExternal = false;
    local_898.End = local_62;
    pvVar9 = FGenericPlatformString::Memcpy(local_878,L"NiagaraFreeIDList_",0x24);
    iVar14 = 0;
    pwVar13 = (wchar_t *)((longlong)pvVar9 + 0x24);
    local_898.CurPos = pwVar13;
    if (param_4 != (wchar_t *)0x0) {
      sVar10 = wcslen(param_4);
      iVar14 = (int)sVar10;
    }
    uVar12 = (ulong64)iVar14;
    if (local_898.End < pwVar13 + uVar12) {
      TStringBuilderBase<wchar_t>::Extend(&local_898,uVar12);
      pwVar13 = local_898.CurPos;
    }
    if (iVar14 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(pwVar13,param_4,uVar12 * 2);
      pwVar13 = (wchar_t *)((longlong)pvVar9 + uVar12 * 2);
      local_898.CurPos = pwVar13;
    }
    pFVar16 = (FRHIBuffer *)0x0;
    local_8f0.SRV.Reference = (FRHIShaderResourceView *)0x0;
    local_8f0.Buffer.Reference = (FRHIBuffer *)0x0;
    local_8f0.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    local_8f0.NumBytes = 0;
    local_8f0.ClassName.ComparisonIndex.Value = 0;
    local_8f0.ClassName.Number = 0;
    local_8f0.OwnerName.ComparisonIndex.Value = 0;
    local_8f0.OwnerName.Number = 0;
    if (local_898.End < pwVar13 + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_898,1);
      pwVar13 = local_898.CurPos;
    }
    *pwVar13 = L'\0';
    FRWBuffer::Initialize
              (&local_8f0,(FRHICommandListBase *)param_2,local_898.Base,4,uVar15,PF_R32_SINT,
               UAVCompute,Static,(FResourceArrayUploadInterface *)0x0);
    if (this->GPUNumAllocatedIDs == 0) {
      pFVar11 = FNiagaraRenderer::GetDummyIntBuffer();
    }
    else {
      pFVar11 = (this->GPUFreeIDs).SRV.Reference;
    }
    this_03.Reference = local_8f0.UAV.Reference;
    local_938.DataPtr = &local_920;
    local_938.ArrayNum = 1;
    local_920._padding_._0_4_ = 0xffffffff;
    local_920._padding_._4_2_ = 0xffff;
    local_920.field1_0x8.UAV = local_8f0.UAV.Reference;
    local_920.Type = UAV;
    local_920.AccessBefore = None;
    local_920.AccessAfter = UAVCompute;
    local_920.Flags = None;
    local_920.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&local_938,None);
    NiagaraInitGPUFreeIDList
              (param_2,local_928,this_03.Reference,uVar15,pFVar11,this->GPUNumAllocatedIDs);
    local_938.ArrayNum = 1;
    local_938.DataPtr = &local_920;
    local_920._padding_._0_4_ = 0xffffffff;
    local_920._padding_._4_2_ = 0xffff;
    local_920.field1_0x8.UAV = this_03.Reference;
    local_920.Type = UAV;
    local_920.AccessBefore = UAVCompute;
    local_920.AccessAfter = SRVCompute;
    local_920.Flags = None;
    local_920.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&local_938,None);
    pFVar1 = &this->GPUFreeIDs;
    this_02.Reference = local_8f0.Buffer.Reference;
    if (pFVar1 != &local_8f0) {
      this_00 = (pFVar1->Buffer).Reference;
      (pFVar1->Buffer).Reference = local_8f0.Buffer.Reference;
      this_02.Reference = pFVar16;
      if (this_00 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    pTVar2 = &(this->GPUFreeIDs).UAV;
    if (pTVar2 != &local_8f0.UAV) {
      this_01 = pTVar2->Reference;
      pTVar2->Reference = this_03.Reference;
      this_03.Reference = (FRHIUnorderedAccessView *)pFVar16;
      if (this_01 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
        this_03.Reference = (FRHIUnorderedAccessView *)(FRHIBuffer *)0x0;
      }
    }
    pTVar3 = &(this->GPUFreeIDs).SRV;
    this_04.Reference = local_8f0.SRV.Reference;
    if (pTVar3 != &local_8f0.SRV) {
      pFVar11 = pTVar3->Reference;
      pTVar3->Reference = local_8f0.SRV.Reference;
      this_04.Reference = (FRHIShaderResourceView *)pFVar16;
      if (pFVar11 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar11);
      }
    }
    (this->GPUFreeIDs).NumBytes = local_8f0.NumBytes;
    uVar5 = (this->GPUFreeIDs).NumBytes;
    this->GPUNumAllocatedIDs = uVar15;
    LOCK();
    this->BufferSizeBytes = (atomic<__int64>)((longlong)this->BufferSizeBytes + (ulonglong)uVar5);
    UNLOCK();
    if (this_02.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_02.Reference);
    }
    if ((FRHIBuffer *)this_03.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_03.Reference);
    }
    if ((FRHIBuffer *)this_04.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_04.Reference);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_8c0);
  }
  return;
}

// BeginSimulate @ 14921e780

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataBuffer * __thiscall FNiagaraDataSet::BeginSimulate(FNiagaraDataSet *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataBuffer *pFVar3;
  
  if (this->DestinationData != (FNiagaraDataBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestinationData == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                       ,0x114,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = AllocateBuffer(this);
  this->DestinationData = pFVar3;
  if (param_1) {
    pFVar3->NumInstances = 0;
    pFVar3 = this->DestinationData;
    (pFVar3->IDToIndexTable).ArrayNum = 0;
    if ((pFVar3->IDToIndexTable).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(pFVar3->IDToIndexTable).AllocatorInstance,0,
                 &(pFVar3->IDToIndexTable).ArrayMax);
    }
  }
  if (this->DestinationData == (FNiagaraDataBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestinationData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x15e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->DestinationData;
}

// CheckForNaNs @ 149221cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataSet::CheckForNaNs(FNiagaraDataSet *this)

{
  int iVar1;
  uint uVar2;
  FNiagaraDataBuffer *this_00;
  double _X;
  bool bVar3;
  ForElementType<FNiagaraDataBuffer_*> FVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ForElementType<FNiagaraDataBuffer_*> FVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  ForElementType<FNiagaraDataBuffer_*> local_res18;
  FString local_58 [2];
  
  FVar9 = (this->Data).AllocatorInstance.SecondaryData;
  iVar1 = (this->Data).ArrayNum;
  if (FVar9 == (ForElementType<FNiagaraDataBuffer_*>)0x0) {
    FVar9 = (ForElementType<FNiagaraDataBuffer_*>)&this->Data;
  }
  local_res18 = (ForElementType<FNiagaraDataBuffer_*>)((longlong)FVar9 + (longlong)iVar1 * 8);
  do {
    FVar4 = local_res18;
    if ((this->Data).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraDataBuffer_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar9 == FVar4) {
      return;
    }
    this_00 = *(FNiagaraDataBuffer **)FVar9;
    bVar3 = false;
    iVar8 = 0;
    uVar2 = ((this_00->Owner->CompiledData).StructPtr)->TotalFloatComponents;
    if (0 < (int)uVar2) {
      do {
        if (bVar3) goto LAB_149221d8f;
        uVar7 = 0;
        if (0 < (int)this_00->NumInstances) {
          do {
            if (bVar3) break;
            _X = (double)*(float *)((this_00->FloatData).AllocatorInstance.Data +
                                   (ulonglong)(iVar8 * this_00->FloatStride) + uVar7 * 4);
            iVar5 = _isnan(_X);
            if ((iVar5 == 0) && (iVar5 = _finite(_X), iVar5 != 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while ((int)uVar6 < (int)this_00->NumInstances);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar2);
      if (bVar3) {
LAB_149221d8f:
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
        ::FString::FString(local_58,L"Found Niagara buffer containing NaNs!");
        FNiagaraDataBuffer::Dump(this_00,0,this_00->NumInstances,local_58,&local_res10);
        if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
        }
        `FNiagaraDataSet::CheckForNaNs'::__l9::<lambda_1>::operator()(local_res8);
      }
    }
    FVar9 = (ForElementType<FNiagaraDataBuffer_*>)((longlong)FVar9 + 8);
  } while( true );
}

// CopyFromGPUReadback @ 149222650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataSet::CopyFromGPUReadback
          (FNiagaraDataSet *this,float *param_1,int *param_2,FFloat16 *param_3,int param_4,
          int param_5,uint param_6,uint param_7,uint param_8)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataBuffer *this_00;
  undefined1 local_res8 [8];
  
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x23f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->bInitialized == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x240,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = BeginSimulate(this,true);
  FNiagaraDataBuffer::GPUCopyFrom
            (this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1 = &this->DestinationData->_padding_;
  LOCK();
  bVar3 = (int)*plVar1 == -1;
  if (bVar3) {
    *(undefined4 *)plVar1 = 0;
  }
  UNLOCK();
  if (!bVar3) {
    `FNiagaraSharedObject::Unlock'::__l2::<lambda_1>::operator()(local_res8);
  }
  this->CurrentData = this->DestinationData;
  this->DestinationData = (FNiagaraDataBuffer *)0x0;
  return;
}

// CopyTo @ 1492229c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataSet::CopyTo
          (FNiagaraDataSet *this,FNiagaraDataSet *param_1,int param_2,int param_3,bool param_4)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  FNiagaraDataBuffer *this_00;
  FNiagaraDataBuffer *this_01;
  FNiagaraDataBuffer *this_02;
  bool bVar4;
  
  if (param_4) {
    (param_1->CompiledData).StructPtr = (this->CompiledData).StructPtr;
    ResetBuffers(param_1);
  }
  this_02 = this->DestinationData;
  if ((this_02 != (FNiagaraDataBuffer *)0x0) ||
     (this_02 = this->CurrentData, this_02 != (FNiagaraDataBuffer *)0x0)) {
    uVar2 = this_02->NumInstances;
    this_00 = param_1->CurrentData;
    uVar3 = this_00->NumInstances;
    if (param_2 < (int)uVar2) {
      if ((param_3 == -1) || ((int)uVar2 <= param_2 + param_3)) {
        param_3 = uVar2 - param_2;
      }
      this_01 = BeginSimulate(param_1,true);
      uVar2 = param_3;
      if (param_4 == false) {
        uVar2 = param_3 + uVar3;
      }
      FNiagaraDataBuffer::Allocate(this_01,uVar2,false);
      FNiagaraDataBuffer::SetNumInstances(this_01,uVar2);
      if (param_4 == false) {
        FNiagaraDataBuffer::CopyTo(this_00,this_01,0,0,this_00->NumInstances);
      }
      FNiagaraDataBuffer::CopyTo(this_02,this_01,0,uVar3,param_3);
      plVar1 = &param_1->DestinationData->_padding_;
      LOCK();
      bVar4 = (int)*plVar1 == -1;
      if (bVar4) {
        *(undefined4 *)plVar1 = 0;
      }
      UNLOCK();
      if (!bVar4) {
        `FNiagaraSharedObject::Unlock'::__l2::<lambda_1>::operator()(&param_4);
      }
      param_1->CurrentData = param_1->DestinationData;
      param_1->DestinationData = (FNiagaraDataBuffer *)0x0;
    }
  }
  return;
}

// Dump @ 14922ced0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataSet::Dump(FNiagaraDataSet *this,int param_1,int param_2,FString *param_3,FName *param_4)

{
  FString local_18;
  
  if (this->CurrentData != (FNiagaraDataBuffer *)0x0) {
    FNiagaraDataBuffer::Dump(this->CurrentData,param_1,param_2,param_3,param_4);
  }
  if (this->DestinationData != (FNiagaraDataBuffer *)0x0) {
    ::FString::ConcatFC(&local_18,param_3,L"[Destination]");
    FNiagaraDataBuffer::Dump(this->DestinationData,param_1,param_2,&local_18,param_4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EndSimulate @ 14922d160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataSet::EndSimulate(FNiagaraDataSet *this,bool param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  
  plVar1 = &this->DestinationData->_padding_;
  LOCK();
  bVar2 = (int)*plVar1 == -1;
  if (bVar2) {
    *(undefined4 *)plVar1 = 0;
  }
  UNLOCK();
  if (!bVar2) {
    `FNiagaraSharedObject::Unlock'::__l2::<lambda_1>::operator()(local_res10);
  }
  if (param_1) {
    this->CurrentData = this->DestinationData;
  }
  this->DestinationData = (FNiagaraDataBuffer *)0x0;
  return;
}

// GetCompiledData @ 149235080

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetCompiledData * __thiscall FNiagaraDataSet::GetCompiledData(FNiagaraDataSet *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataSetCompiledData *pFVar3;
  
  if ((this->CompiledData).StructPtr != (FNiagaraDataSetCompiledData *)0x0) {
    return (this->CompiledData).StructPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CompiledData.Get() != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                     ,0x169,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataSetCompiledData *)(*pcVar1)();
    return pFVar3;
  }
  return (this->CompiledData).StructPtr;
}

// GetSizeBytes @ 149237910

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall FNiagaraDataSet::GetSizeBytes(FNiagaraDataSet *this)

{
  return (long64)this->BufferSizeBytes;
}

// GetVariableComponentOffsets @ 14923beb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNiagaraDataSet::GetVariableComponentOffsets
          (FNiagaraDataSet *this,FNiagaraVariableBase *param_1,int *param_2,int *param_3,
          int *param_4)

{
  FName *pFVar1;
  FNiagaraDataSetCompiledData *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FName *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  
  pFVar2 = (this->CompiledData).StructPtr;
  pFVar3 = (FName *)(pFVar2->Variables).AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar3 + (longlong)(pFVar2->Variables).ArrayNum * 0xc);
  if (pFVar3 != pFVar1) {
    pFVar8 = pFVar3;
    do {
      if ((*pFVar8 == param_1->Name) &&
         (pFVar8[1].ComparisonIndex.Value == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
        lVar10 = ((longlong)pFVar8 - (longlong)pFVar3) / 6 +
                 ((longlong)pFVar8 - (longlong)pFVar3 >> 0x3f);
        uVar11 = (int)(lVar10 >> 1) - (int)(lVar10 >> 0x3f);
        if (uVar11 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar11 < (pFVar2->VariableLayouts).ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar9 = (pFVar2->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x20;
          if (pFVar9 != (FScriptContainerElement *)0x0) {
            *param_2 = (uint)*(ushort *)pFVar9;
            *param_3 = (uint)*(ushort *)(pFVar9 + 2);
            *param_4 = (uint)*(ushort *)(pFVar9 + 4);
            return true;
          }
        }
        break;
      }
      pFVar8 = (FName *)&pFVar8[1].Number;
    } while (pFVar8 != pFVar1);
  }
  *param_2 = -1;
  *param_3 = -1;
  *param_4 = -1;
  return false;
}

// GetVariableLayout @ 14923bfe0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraVariableLayoutInfo * __thiscall
FNiagaraDataSet::GetVariableLayout(FNiagaraDataSet *this,FNiagaraVariableBase *param_1)

{
  FName *pFVar1;
  FNiagaraDataSetCompiledData *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNiagaraVariableLayoutInfo *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FName *pFVar10;
  
  pFVar2 = (this->CompiledData).StructPtr;
  pFVar3 = (FName *)(pFVar2->Variables).AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar3 + (longlong)(pFVar2->Variables).ArrayNum * 0xc);
  if (pFVar3 != pFVar1) {
    pFVar10 = pFVar3;
    do {
      if ((*pFVar10 == param_1->Name) &&
         (pFVar10[1].ComparisonIndex.Value == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
        lVar8 = ((longlong)pFVar10 - (longlong)pFVar3) / 6 +
                ((longlong)pFVar10 - (longlong)pFVar3 >> 0x3f);
        uVar9 = (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
        if (uVar9 == 0xffffffff) {
          return (FNiagaraVariableLayoutInfo *)0x0;
        }
        uVar7 = 0;
        if ((int)uVar9 < (pFVar2->VariableLayouts).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FNiagaraVariableLayoutInfo *)(*pcVar4)();
          return pFVar6;
        }
        return (FNiagaraVariableLayoutInfo *)
               ((pFVar2->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20);
      }
      pFVar10 = (FName *)&pFVar10[1].Number;
    } while (pFVar10 != pFVar1);
  }
  return (FNiagaraVariableLayoutInfo *)0x0;
}

// Init @ 14923f080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataSet::Init(FNiagaraDataSet *this,FNiagaraDataSetCompiledData *param_1,int param_2)

{
  TArray<FNiagaraDataBuffer_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  ForElementType<FNiagaraDataBuffer_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraDataSetCompiledData *pFVar6;
  FNiagaraDataBuffer *this_00;
  FNiagaraDataBuffer *pFVar7;
  ForElementType<FNiagaraDataBuffer_*> FVar8;
  FNiagaraDataBuffer *local_18 [2];
  
  pFVar6 = &FNiagaraDataSetCompiledData::DummyCompiledData;
  if (param_1 != (FNiagaraDataSetCompiledData *)0x0) {
    pFVar6 = param_1;
  }
  (this->CompiledData).StructPtr = pFVar6;
  if ((this->Data).ArrayNum < param_2) {
    pTVar1 = &this->Data;
    do {
      this_00 = ::operator_new(0x160);
      pFVar7 = (FNiagaraDataBuffer *)0x0;
      if (this_00 != (FNiagaraDataBuffer *)0x0) {
        pFVar7 = FNiagaraDataBuffer::FNiagaraDataBuffer(this_00,this);
      }
      FVar2 = (this->Data).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FNiagaraDataBuffer_*>)pTVar1;
      if (FVar2 != (ForElementType<FNiagaraDataBuffer_*>)0x0) {
        FVar8 = FVar2;
      }
      local_18[0] = pFVar7;
      if ((ulonglong)FVar8 <= local_18) {
        FVar8 = (ForElementType<FNiagaraDataBuffer_*>)pTVar1;
        if (FVar2 != (ForElementType<FNiagaraDataBuffer_*>)0x0) {
          FVar8 = FVar2;
        }
        if ((local_18 <
             (FNiagaraDataBuffer **)((longlong)FVar8 + (longlong)(this->Data).ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (this->Data).ArrayNum;
      if (iVar5 == (this->Data).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraDataBuffer_*>_>
                          (0x808,&pTVar1->AllocatorInstance,&(this->Data).ArrayMax);
      }
      (this->Data).ArrayNum = iVar5 + 1;
      FVar2 = (this->Data).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FNiagaraDataBuffer_*>)pTVar1;
      if (FVar2 != (ForElementType<FNiagaraDataBuffer_*>)0x0) {
        FVar8 = FVar2;
      }
      *(FNiagaraDataBuffer **)((longlong)FVar8 + (longlong)iVar5 * 8) = local_18[0];
    } while ((this->Data).ArrayNum < param_2);
  }
  if (this->bInitialized != false) {
    ResetBuffers(this);
    return;
  }
  ResetBuffersInternal(this);
  this->bInitialized = true;
  return;
}

// Reset @ 14924bdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataSet::Reset(FNiagaraDataSet *this)

{
  int *piVar1;
  TArray<FNiagaraDataBuffer_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int iVar3;
  ForElementType<FNiagaraDataBuffer_*> FVar4;
  FNiagaraDataBuffer *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar9;
  ForElementType<FNiagaraDataBuffer_*> FVar10;
  undefined ***pppuVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStackY_d8 [32];
  code *apcStack_a8 [2];
  undefined **ppuStack_98;
  FNiagaraDataSet *pFStack_90;
  undefined8 uStack_88;
  undefined ***pppuStack_80;
  undefined1 auStack_78 [16];
  undefined **ppuStack_68;
  FNiagaraDataSet *pFStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  byte bStack_48;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (((this->CompiledData).StructPtr)->SimTarget == CPUSim) {
    ResetBuffersInternal(this);
    if (GNiagaraReleaseBuffersOnReset != false) {
      uVar12 = 0;
      pTVar2 = &this->Data;
      while ((-1 < (int)uVar12 && ((int)uVar12 < (this->Data).ArrayNum))) {
        if (((int)uVar12 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (this->Data).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<FNiagaraDataBuffer_*>)pTVar2;
        if (FVar4 != (ForElementType<FNiagaraDataBuffer_*>)0x0) {
          FVar10 = FVar4;
        }
        this_00 = *(FNiagaraDataBuffer **)((longlong)FVar10 + (longlong)(int)uVar12 * 8);
        if ((int)this_00->_padding_ < 1) {
          FNiagaraDataBuffer::ReleaseCPU(this_00);
          uVar12 = uVar12 + 1;
        }
        else {
          LOCK();
          this->BufferSizeBytes =
               (atomic<__int64>)
               ((longlong)this->BufferSizeBytes -
               ((longlong)(this_00->HalfData).ArrayMax + (longlong)(this_00->Int32Data).ArrayMax +
               (longlong)(this_00->FloatData).ArrayMax));
          UNLOCK();
          FNiagaraSharedObject::Destroy((FNiagaraSharedObject *)this_00);
          uVar7 = 0;
          if ((int)uVar12 < (this->Data).ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar4 = (this->Data).AllocatorInstance.SecondaryData;
          iVar3 = (this->Data).ArrayNum;
          FVar10 = (ForElementType<FNiagaraDataBuffer_*>)pTVar2;
          if (FVar4 != (ForElementType<FNiagaraDataBuffer_*>)0x0) {
            FVar10 = FVar4;
          }
          iVar8 = iVar3 + ~uVar12;
          if (1 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            memmove((void *)((longlong)FVar10 + (longlong)(int)uVar12 * 8),
                    (void *)((longlong)FVar10 + (longlong)(iVar3 - iVar8) * 8),(longlong)iVar8 << 3)
            ;
          }
          piVar1 = &(this->Data).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraDataBuffer_*>_>
                    (8,8,&pTVar2->AllocatorInstance,(this->Data).ArrayNum,&(this->Data).ArrayMax);
        }
      }
    }
  }
  else {
    pppuStack_80 = (undefined ***)0x0;
    ppuStack_98 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FNiagaraDataSet::ResetBuffers'::`17'::<lambda_1>,1,0>::
                   _vftable_;
    apcStack_a8[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDataSet::ResetBuffers'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
         ::Call;
    pFStack_90 = this;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraDataSet::ResetBuffers_::__l17::TSTR_ResetBuffersCommand212>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_a8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      auStack_78._0_8_ = apcStack_a8[0];
      pppuStack_50 = pppuStack_80;
      ppuStack_68 = ppuStack_98;
      pFStack_60 = pFStack_90;
      uStack_58 = uStack_88;
      apcStack_a8[0] = (code *)0x0;
      bStack_48 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`FNiagaraDataSet::ResetBuffers'::__l17::TSTR_ResetBuffersCommand212>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_78,pFVar9);
      uVar13 = (ulonglong)bStack_48;
      if ((2 < uVar13) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)auStack_78._0_8_ != (code *)0x0) {
          pppuVar11 = (undefined ***)(auStack_78 + 0x10);
          if (pppuStack_50 != (undefined ***)0x0) {
            pppuVar11 = pppuStack_50;
          }
          (*(code *)(*pppuVar11)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(auStack_78);
      }
    }
    if (apcStack_a8[0] != (code *)0x0) {
      pppuVar11 = &ppuStack_98;
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar11 = pppuStack_80;
      }
      (*(code *)(*pppuVar11)[2])();
    }
  }
  return;
}

// ResetBuffers @ 14924be00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataSet::ResetBuffers(FNiagaraDataSet *this)

{
  int *piVar1;
  TArray<FNiagaraDataBuffer_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int iVar3;
  ForElementType<FNiagaraDataBuffer_*> FVar4;
  FNiagaraDataBuffer *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar9;
  ForElementType<FNiagaraDataBuffer_*> FVar10;
  undefined ***pppuVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStackY_d8 [32];
  code *local_a8 [2];
  undefined **local_98;
  FNiagaraDataSet *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FNiagaraDataSet *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (((this->CompiledData).StructPtr)->SimTarget == CPUSim) {
    ResetBuffersInternal(this);
    if (GNiagaraReleaseBuffersOnReset != false) {
      uVar12 = 0;
      pTVar2 = &this->Data;
      while ((-1 < (int)uVar12 && ((int)uVar12 < (this->Data).ArrayNum))) {
        if (((int)uVar12 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (this->Data).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<FNiagaraDataBuffer_*>)pTVar2;
        if (FVar4 != (ForElementType<FNiagaraDataBuffer_*>)0x0) {
          FVar10 = FVar4;
        }
        this_00 = *(FNiagaraDataBuffer **)((longlong)FVar10 + (longlong)(int)uVar12 * 8);
        if ((int)this_00->_padding_ < 1) {
          FNiagaraDataBuffer::ReleaseCPU(this_00);
          uVar12 = uVar12 + 1;
        }
        else {
          LOCK();
          this->BufferSizeBytes =
               (atomic<__int64>)
               ((longlong)this->BufferSizeBytes -
               ((longlong)(this_00->HalfData).ArrayMax + (longlong)(this_00->Int32Data).ArrayMax +
               (longlong)(this_00->FloatData).ArrayMax));
          UNLOCK();
          FNiagaraSharedObject::Destroy((FNiagaraSharedObject *)this_00);
          uVar7 = 0;
          if ((int)uVar12 < (this->Data).ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar4 = (this->Data).AllocatorInstance.SecondaryData;
          iVar3 = (this->Data).ArrayNum;
          FVar10 = (ForElementType<FNiagaraDataBuffer_*>)pTVar2;
          if (FVar4 != (ForElementType<FNiagaraDataBuffer_*>)0x0) {
            FVar10 = FVar4;
          }
          iVar8 = iVar3 + ~uVar12;
          if (1 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            memmove((void *)((longlong)FVar10 + (longlong)(int)uVar12 * 8),
                    (void *)((longlong)FVar10 + (longlong)(iVar3 - iVar8) * 8),(longlong)iVar8 << 3)
            ;
          }
          piVar1 = &(this->Data).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraDataBuffer_*>_>
                    (8,8,&pTVar2->AllocatorInstance,(this->Data).ArrayNum,&(this->Data).ArrayMax);
        }
      }
    }
  }
  else {
    local_80 = (undefined ***)0x0;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraDataSet::ResetBuffers'::`17'::<lambda_1>,1,0>::
                _vftable_;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraDataSet::ResetBuffers'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_90 = this;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraDataSet::ResetBuffers_::__l17::TSTR_ResetBuffersCommand212>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_68 = local_98;
      pFStack_60 = pFStack_90;
      local_58 = local_88;
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`FNiagaraDataSet::ResetBuffers'::__l17::TSTR_ResetBuffersCommand212>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar9);
      uVar13 = (ulonglong)local_48;
      if ((2 < uVar13) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar11 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar11 = local_50;
          }
          (*(code *)(*pppuVar11)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar11 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar11 = local_80;
      }
      (*(code *)(*pppuVar11)[2])();
    }
  }
  return;
}

// ResetBuffersInternal @ 14924c120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataSet::ResetBuffersInternal(FNiagaraDataSet *this)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FNiagaraDataBuffer *pFVar6;
  undefined1 local_res8 [8];
  
  piVar1 = &(this->FreeIDsTable).ArrayMax;
  piVar2 = &(this->SpawnedIDsTable).ArrayMax;
  LOCK();
  this->BufferSizeBytes =
       (atomic<__int64>)
       ((longlong)this->BufferSizeBytes +
       ((longlong)(this->SpawnedIDsTable).ArrayMax + (longlong)*piVar1) * -4);
  UNLOCK();
  this->CurrentData = (FNiagaraDataBuffer *)0x0;
  this->DestinationData = (FNiagaraDataBuffer *)0x0;
  (this->FreeIDsTable).ArrayNum = 0;
  if ((this->FreeIDsTable).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeIDsTable).AllocatorInstance,0,piVar1);
  }
  this->NumFreeIDs = 0;
  this->MaxUsedID = -1;
  this->NumSpawnedIDs = 0;
  (this->SpawnedIDsTable).ArrayNum = 0;
  if ((this->SpawnedIDsTable).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedIDsTable).AllocatorInstance,0,piVar2);
  }
  if ((this->DestinationData != (FNiagaraDataBuffer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestinationData == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x114,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = AllocateBuffer(this);
  this->DestinationData = pFVar6;
  pFVar6->NumInstances = 0;
  pFVar6 = this->DestinationData;
  (pFVar6->IDToIndexTable).ArrayNum = 0;
  if ((pFVar6->IDToIndexTable).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(pFVar6->IDToIndexTable).AllocatorInstance,0,
               &(pFVar6->IDToIndexTable).ArrayMax);
  }
  if ((this->DestinationData == (FNiagaraDataBuffer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestinationData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x15e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar3 = &this->DestinationData->_padding_;
  LOCK();
  bVar5 = (int)*plVar3 == -1;
  if (bVar5) {
    *(undefined4 *)plVar3 = 0;
  }
  UNLOCK();
  if (!bVar5) {
    `FNiagaraSharedObject::Unlock'::__l2::<lambda_1>::operator()(local_res8);
  }
  this->CurrentData = this->DestinationData;
  this->DestinationData = (FNiagaraDataBuffer *)0x0;
  LOCK();
  this->BufferSizeBytes =
       (atomic<__int64>)
       ((longlong)this->BufferSizeBytes + ((longlong)*piVar2 + (longlong)*piVar1) * 4);
  UNLOCK();
  return;
}

// SetCurrentData @ 14924d1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataSet::SetCurrentData(FNiagaraDataSet *this,FNiagaraDataBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->DestinationData == (FNiagaraDataBuffer *)0x0) {
    this->CurrentData = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DestinationData == nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                     ,0x132,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->CurrentData = param_1;
  return;
}

// GetCurrentDataChecked @ 1492a1460

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataBuffer * __thiscall FNiagaraDataSet::GetCurrentDataChecked(FNiagaraDataSet *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataBuffer *pFVar3;
  
  if (this->CurrentData != (FNiagaraDataBuffer *)0x0) {
    return this->CurrentData;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                     ,0x158,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return this->CurrentData;
}

// GetDestinationDataChecked @ 1492a1cf0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataBuffer * __thiscall FNiagaraDataSet::GetDestinationDataChecked(FNiagaraDataSet *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataBuffer *pFVar3;
  
  if (this->DestinationData != (FNiagaraDataBuffer *)0x0) {
    return this->DestinationData;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DestinationData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                     ,0x15e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return this->DestinationData;
}

// operator() @ 15053eb30

bool __thiscall `FNiagaraDataSet::CheckForNaNs'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<7288690721152827825>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7288690721152827825>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

