// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 15

// FExrImgMediaReaderGpu @ 14ea37fc0

FExrImgMediaReaderGpu * __thiscall
FExrImgMediaReaderGpu::FExrImgMediaReaderGpu
          (FExrImgMediaReaderGpu *this,TSharedRef<FImgMediaLoader,1> *param_1)

{
  FExrImgMediaReader::FExrImgMediaReader((FExrImgMediaReader *)this,param_1);
  this->_padding_ = (longlong)&___7FExrImgMediaReaderGpu__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->MemoryPoolCriticalSection,4000);
  *(undefined8 *)&this->MemoryPool = 0;
  *(undefined8 *)&(this->MemoryPool).field_0x8 = 0;
  *(undefined8 *)&(this->MemoryPool).field_0x20 = 0;
  *(undefined4 *)&(this->MemoryPool).field_0x28 = 0;
  *(undefined4 *)&(this->MemoryPool).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemoryPool).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MemoryPool).field_0x34 = 0;
  *(undefined8 *)&(this->MemoryPool).field_0x40 = 0;
  *(undefined4 *)&(this->MemoryPool).field_0x48 = 0;
  this->LastTickedFrameCounter = 0xffffffffffffffff;
  this->bIsShuttingDown = false;
  this->bFallBackToCPU = false;
  return this;
}

// ~FExrImgMediaReaderGpu @ 14ea3a420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu(FExrImgMediaReaderGpu *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  <lambda_1> *p<Var7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  ulonglong uVar10;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  code *local_a8 [2];
  undefined1 local_98 [24];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  lpCriticalSection = &this->MemoryPoolCriticalSection;
  this->_padding_ = (longlong)&___7FExrImgMediaReaderGpu__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_cc = 0x80;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  TSet<TTuple<unsigned_int,FStructuredBufferPoolItem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,FStructuredBufferPoolItem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>,FDefaultSetAllocator>
               *)local_f8,
              (TSet<TTuple<unsigned_int,FStructuredBufferPoolItem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>,FDefaultSetAllocator>
               *)&this->MemoryPool);
  local_a8[0] = (code *)0x0;
  local_80 = (code **)0x0;
  p<Var7 = UE::Core::Private::Function::TFunctionStorage<1>::
           Bind<_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu_::__l2::<lambda_1>_>
                     ((TFunctionStorage<1> *)(local_a8 + 2),(<lambda_1> *)local_f8);
  if (p<Var7 != (<lambda_1> *)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu_::__l2::TSTR_DeletePooledBuffers96>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_78._16_8_ = local_98._0_8_;
    local_78._24_8_ = local_98._8_8_;
    local_78._32_8_ = local_98._16_8_;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar8 = (FRenderCommandTag *)
             TRenderCommandTag<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::TSTR_DeletePooledBuffers96>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar8);
    uVar10 = (ulonglong)local_48;
    if (2 < uVar10) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar9 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar9 = local_50;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar9 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar9 = local_80;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  local_b0 = 0;
  if (local_b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  iVar2 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *(undefined4 *)&(this->MemoryPool).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MemoryPool).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructuredBufferPoolItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructuredBufferPoolItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructuredBufferPoolItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MemoryPool);
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FExrImgMediaReader::~FExrImgMediaReader((FExrImgMediaReader *)this);
  return;
}

// operator() @ 14ea3c0b0

void __thiscall
`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FScriptContainerElement *pFVar1;
  FStructuredBufferPoolItem *this_00;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  FRHIBreadcrumbAllocator *pFVar8;
  FRHIBreadcrumbNode *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ForAnyElementType FVar13;
  int iVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  ForAnyElementType local_98;
  undefined8 local_90;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_88;
  FRHIBreadcrumbScope local_78;
  char local_68;
  char *local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  wchar_t *pwStack_48;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      uStack_58 = 0x62;
      local_60 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
      ;
      local_50 = 0;
      pwStack_48 = L"FExrImgMediaReaderGpu_ReleaseMemoryPool";
      ::Desc._padding_._0_4_ = 0x52fea450;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x62;
      ::Desc._padding_._4_4_ = uStack_54;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x52fea4d0;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::Desc::operator()'::__l7::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar9 = FMemStackBase::Alloc(&pFVar8->Inner,0x50,8);
  pFVar9->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar9->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar9->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar9->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar9->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar9->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar9->Allocator = pFVar8;
  pFVar9->TraceCpuSpecId = 0;
  pFVar9->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar9->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar9->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar9->ID = uVar5;
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar9[1]._padding_ = (longlong)&::Desc;
  if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar4) {
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
  }
  pFVar9->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_78,(FRHIComputeCommandList *)param_1,pFVar9);
  local_68 = '\x01';
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TMapBase<unsigned_int,FStructuredBufferPoolItem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>(this,&local_88);
  iVar3 = local_88.ArrayNum;
  uVar10 = (ulonglong)local_88.ArrayNum;
  local_res20 = local_88.AllocatorInstance.Data + uVar10 * 4;
  FVar16.Data = local_88.AllocatorInstance.Data;
  do {
    pFVar1 = local_res20;
    uVar15 = 0;
    if ((int)uVar10 != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar16.Data == pFVar1) {
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      if (local_68 != '\0') {
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_78);
      }
      return;
    }
    local_98.Data = (FScriptContainerElement *)0x0;
    iVar14 = *(int *)FVar16.Data;
    local_90 = 0;
    if (*(int *)((longlong)this + 0x48) != 0) {
      lVar11 = (longlong)this + 0x38;
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        lVar11 = *(longlong *)((longlong)this + 0x40);
      }
      iVar12 = *(int *)(lVar11 + ((longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)iVar14)
                                 * 4);
      iVar7 = iVar12;
      if (iVar12 != -1) {
        do {
          iVar12 = *(int *)(*(longlong *)this + 0x10 + (longlong)iVar7 * 0x18);
          if (*(int *)(*(longlong *)this + (longlong)iVar7 * 0x18) == iVar14) break;
          iVar7 = iVar12;
        } while (iVar12 != -1);
      }
      if (iVar7 != -1) {
        while( true ) {
          pFVar1 = (FScriptContainerElement *)(*(longlong *)this + ((longlong)iVar7 * 3 + 1) * 8);
          iVar7 = (int)uVar15;
          if ((local_98.Data <= pFVar1) && (pFVar1 < local_98.Data + (longlong)local_90._4_4_ * 8))
          {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar7 = (int)local_90;
          }
          if (iVar7 == local_90._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_98,(int *)((longlong)&local_90 + 4));
          }
          uVar5 = iVar7 + 1;
          local_90 = CONCAT44(local_90._4_4_,uVar5);
          *(undefined8 *)(local_98.Data + (longlong)iVar7 * 8) = *(undefined8 *)pFVar1;
          if (iVar12 == -1) break;
          iVar7 = iVar12;
          while (iVar12 = *(int *)(*(longlong *)this + 0x10 + (longlong)iVar7 * 0x18),
                *(int *)(*(longlong *)this + (longlong)iVar7 * 0x18) != iVar14) {
            iVar7 = iVar12;
            if (iVar12 == -1) goto LAB_14ea3c369;
          }
          uVar15 = (ulonglong)uVar5;
        }
LAB_14ea3c369:
        uVar15 = (ulonglong)uVar5;
      }
    }
    iVar14 = (int)uVar15;
    pFVar1 = local_98.Data + (longlong)iVar14 * 8;
    FVar13.Data = local_98.Data;
    while( true ) {
      if ((int)uVar15 != iVar14) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FStructuredBufferPoolItem_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
        uVar15 = local_90 & 0xffffffff;
      }
      if (FVar13.Data == pFVar1) break;
      this_00 = *(FStructuredBufferPoolItem **)FVar13.Data;
      if (this_00 != (FStructuredBufferPoolItem *)0x0) {
        FStructuredBufferPoolItem::~FStructuredBufferPoolItem(this_00);
        ::operator_delete(this_00,0x28);
        uVar15 = local_90 & 0xffffffff;
      }
      FVar13.Data = FVar13.Data + 8;
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    uVar10 = local_88._8_8_ & 0xffffffff;
    FVar16.Data = FVar16.Data + 4;
  } while( true );
}

// operator() @ 14ea3c4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()
          (void *this,FStructuredBufferPoolItem *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [2];
  TPairInitializer<unsigned_int_const_&,FStructuredBufferPoolItem_*_const_&> local_b0;
  undefined4 *local_a0;
  FStructuredBufferPoolItem ***local_98;
  code *local_88 [2];
  undefined **local_78;
  FStructuredBufferPoolItem *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FStructuredBufferPoolItem *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  pTVar8 = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14ea3c515;
      LOCK();
      aVar4 = pTVar9->SharedReferenceCount;
      bVar10 = aVar3 == aVar4;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar10);
    lVar1 = *(longlong *)this;
    pTVar8 = pTVar9;
    if (lVar1 != 0) {
      local_b8[0] = *(undefined4 *)((longlong)this + 0x10);
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0xf0);
      local_b0.Value = (FStructuredBufferPoolItem **)param_1;
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      if (CpuChannel->Enabled < 0) {
        local_a0 = local_b8;
        local_98 = &local_b0.Value;
        TSet<TTuple<unsigned_int,FStructuredBufferPoolItem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,FStructuredBufferPoolItem_*_const_&>_>
                  ((TSet<TTuple<unsigned_int,FStructuredBufferPoolItem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>,FDefaultSetAllocator>
                    *)(lVar1 + 0x118),&local_b0,(bool *)&local_a0);
        LeaveCriticalSection(lpCriticalSection);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId718,"ExrReaderGpu.ReturnPoolItem",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
                   ,0x2ce);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId718);
        local_a0 = local_b8;
        local_98 = &local_b0.Value;
        TSet<TTuple<unsigned_int,FStructuredBufferPoolItem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,FStructuredBufferPoolItem_*_const_&>_>
                  ((TSet<TTuple<unsigned_int,FStructuredBufferPoolItem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>,FDefaultSetAllocator>
                    *)(lVar1 + 0x118),&local_b0,(bool *)&local_a0);
        FCpuProfilerTrace::OutputEndEvent();
        LeaveCriticalSection(lpCriticalSection);
      }
      goto LAB_14ea3c6fa;
    }
  }
LAB_14ea3c515:
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::`2'::<lambda_1>::operator()'::`7'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<__FExrImgMediaReaderGpu::AllocateGpuBufferFromPool_::__l2::<lambda_1>::operator()_::__l7::TSTR_DeletePooledBuffers650>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::TSTR_DeletePooledBuffers650>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar5);
    uVar7 = (ulonglong)local_28;
    if ((2 < uVar7) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar6 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar6 = local_30;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_58);
    }
  }
  pTVar9 = pTVar8;
  if (local_88[0] != (code *)0x0) {
    pppuVar6 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar6 = local_60;
    }
    (*(code *)(*pppuVar6)[2])();
  }
LAB_14ea3c6fa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// operator() @ 14ea3c740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1,TRefCountPtr<FRHITexture> param_2,
          TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>
          *param_3,FSampleConverterParameters *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  TReferenceControllerBase<1> *pTVar5;
  FStructuredBufferPoolItem *pFVar6;
  FSampleConverterParameters *this_00;
  bool bVar7;
  uint uVar8;
  atomic<unsigned_int> aVar9;
  FRHIBreadcrumbAllocator *pFVar10;
  FRHIBreadcrumbNode *pFVar11;
  TSharedPtr<FStructuredBufferPoolItem,1> *pTVar12;
  undefined1 *puVar13;
  TIntPoint<int>_u_0 TVar14;
  TIntPoint<int>_u_0 TVar15;
  int iVar16;
  int iVar17;
  FRHIResource *pFVar18;
  TIntPoint<int>_u_0 local_e8;
  undefined1 local_e0 [8];
  _Tuple_val<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,int>_const_*> local_d8;
  int local_d0;
  FStructuredBufferPoolItem *local_c8;
  TIntPoint<int>_u_0 local_c0;
  FRHIResource *local_b8;
  TSharedPtr<FStructuredBufferPoolItem,1> local_b0;
  char *local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *pwStack_88;
  FRHIBreadcrumbScope local_70;
  undefined1 local_60;
  FRHIBreadcrumbScope local_58;
  undefined1 local_48;
  
  this_00 = param_4;
  iVar16 = 0;
  pFVar18 = (FRHIResource *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c
            );
  piVar1 = &param_4->FrameId;
  local_b8 = pFVar18;
  if ((int)pFVar18->_padding_ < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      uStack_90 = 0x54dc3aa0;
      uStack_8c = 1;
      ::Desc._padding_._0_4_ = 0x54dc3aa0;
      ::Desc._padding_._4_4_ = uStack_94;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_ExrReaderGpu_Co;
      ::Desc._padding_ = (longlong)u_ExrReaderGpu_Co;
      ::Desc._padding_._0_4_ = 0x1d7;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::Desc::operator()'::__l7
             ::<lambda_1>::operator()<int_const_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_d8._Val = &::Desc;
  local_e0 = (undefined1  [8])piVar1;
  pFVar10 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar11 = FRHIBreadcrumbAllocator::
            AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,int>,int_const_&>
                      (pFVar10,(tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,int>_const_*,std::tuple<int_const_&>_>
                                *)local_e0);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_58,(FRHIComputeCommandList *)param_1,pFVar11);
  uVar2 = this_00->UpscaleMip;
  local_48 = 1;
  param_4 = (FSampleConverterParameters *)((ulonglong)param_4 & 0xffffffff00000000);
  if (-1 < (int)uVar2) {
    local_d0 = 1 << ((byte)uVar2 & 0x1f);
    do {
      TVar4 = (this_00->FullResolution).field0_0x0._s_0;
      iVar16 = 1 << ((byte)iVar16 & 0x1f);
      local_e8._s_0.Y = TVar4.Y;
      local_e8._s_0.Y = local_e8._s_0.Y / iVar16;
      local_e8._s_0.X =
           (int)((longlong)
                 ((ulonglong)(uint)(TVar4.X >> 0x1f) << 0x20 | (ulonglong)TVar4 & 0xffffffff) /
                (longlong)iVar16);
      TVar14 = local_e8;
      local_c0 = local_e8;
      if ((int)pFVar18->_padding_ < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          uStack_98 = 0x245;
          local_a0 = 
          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
          ;
          uStack_90 = 0x54dc3b80;
          uStack_8c = 1;
          pwStack_88 = L"ExrImgGpu.MipRender.MipUpscale";
          ::Desc._padding_._0_4_ = 0x52fea450;
          ::Desc._padding_._4_4_ = 1;
          ::Desc._padding_._0_4_ = 0x245;
          ::Desc._padding_._4_4_ = uStack_94;
          ::Desc._padding_._0_4_ = 0x54dc3b80;
          ::Desc._padding_._4_4_ = 1;
          ::Desc._padding_._0_4_ = 0x52fe5888;
          ::Desc._padding_._4_4_ = 1;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>::
                 operator()'::__l16::<lambda_3>::operator()<>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      pFVar10 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar11 = FMemStackBase::Alloc(&pFVar10->Inner,0x50,8);
      pFVar11->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
      pFVar11->Parent = FRHIBreadcrumbNode::Sentinel;
      pFVar11->ListLink = (FRHIBreadcrumbNode *)0x0;
      (pFVar11->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
      (pFVar11->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
      pFVar11->TraceCpuSpecId = 0;
      pFVar11->TraceCpuMetadataId = 0;
      pFVar11->Data = (FRHIBreadcrumbData *)&::Desc;
      pFVar11->Allocator = pFVar10;
      LOCK();
      UNLOCK();
      uVar8 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
      FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
      pFVar11->BeginPipes = (atomic<unsigned_char>)0x0;
      pFVar11->EndPipes = (atomic<unsigned_char>)0x0;
      pFVar11->ID = uVar8;
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
      ;
      pFVar11[1]._padding_ = (longlong)&::Desc;
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        bVar7 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
        if (bVar7) {
          EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
          if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
            aVar9 = (atomic<unsigned_int>)
                    FCpuProfilerTrace::OutputEventType
                              ((wchar_t *)
                               CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                               (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                               ,(uint)::Desc._padding_);
            LOCK();
            ::Desc.TraceCpuSpecId = aVar9;
            UNLOCK();
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
        }
      }
      pFVar11->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_70,(FRHIComputeCommandList *)param_1,pFVar11);
      local_60 = 1;
      if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
        puVar13 = &param_3->field_0x38;
        if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
          puVar13 = *(undefined1 **)&param_3->field_0x40;
        }
        iVar16 = *(int *)(puVar13 + (ulonglong)(*(int *)&param_3->field_0x48 - 1U & uVar2) * 4);
        if (iVar16 != -1) {
          do {
            if (*(uint *)((longlong)iVar16 * 0x20 + *(longlong *)param_3) == uVar2)
            goto LAB_14ea3c9b4;
            iVar16 = *(int *)((longlong)iVar16 * 0x20 + 0x18 + *(longlong *)param_3);
          } while (iVar16 != -1);
        }
      }
      if (2 < (byte)LogImgMedia._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
      }
LAB_14ea3c9b4:
      pTVar12 = TMapBase<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>
                ::FindChecked((TMapBase<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>
                               *)param_3,uVar2);
      pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
      local_c8 = pTVar12->Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e0 = (undefined1  [8])0x0;
      local_d8._Val = (TRHIBreadcrumbDesc<24,int> *)0x0;
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)local_e0,(int *)((longlong)&local_d8._Val + 4))
      ;
      local_d8._Val._0_4_ = iVar16 + 1;
      *(undefined8 *)((longlong)local_e0 + (longlong)iVar16 * 0x10) = 0;
      *(TIntPoint<int>_u_0 *)((longlong)local_e0 + (longlong)iVar16 * 0x10 + 8) = TVar14;
      TVar4 = (this_00->FullResolution).field0_0x0._s_0;
      local_e8._s_0.Y = TVar4.Y;
      local_e8._s_0.Y = local_e8._s_0.Y / local_d0;
      local_e8._s_0.X =
           (int)((longlong)
                 ((ulonglong)(uint)(TVar4.X >> 0x1f) << 0x20 | (ulonglong)TVar4 & 0xffffffff) /
                (longlong)local_d0);
      local_b0.Object = local_c8;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c8 = (FStructuredBufferPoolItem *)(param_2.Reference)->_padding_;
      local_b0.SharedReferenceCount.ReferenceController = pTVar5;
      if (local_c8 != (FStructuredBufferPoolItem *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_c8);
      }
      iVar16 = (int)param_4;
      ``FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>::operator()'::__l2::
      <lambda_2>::operator()
                (&param_4,param_1,(FRHITexture *)&local_c8,this_00,uVar2,(int)param_4,&local_b0,
                 (TIntPoint<int> *)&local_e8._s_0,(TIntPoint<int> *)&local_c0._s_0,
                 (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)local_e0);
      if (local_e0 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_e0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_70);
      iVar16 = iVar16 + 1;
      param_4 = (FSampleConverterParameters *)CONCAT44(param_4._4_4_,iVar16);
      pFVar18 = local_b8;
    } while (iVar16 <= (int)uVar2);
  }
  iVar16 = (this_00->Viewports).Pairs.ArrayNum;
  TVar15 = (TIntPoint<int>_u_0)(this_00->Viewports).Pairs.AllocatorInstance.Data;
  TVar14 = (TIntPoint<int>_u_0)((longlong)TVar15 + (longlong)iVar16 * 0x18);
  local_c0 = TVar14;
LAB_14ea3caf5:
  do {
    if ((this_00->Viewports).Pairs.ArrayNum != iVar16) {
      `TCheckedPointerIterator<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&param_4);
    }
    if (TVar15 == TVar14) {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_58);
      if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
      }
      FSampleConverterParameters::~FSampleConverterParameters(this_00);
      return false;
    }
    uVar8 = *(uint *)TVar15;
    if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
      puVar13 = &param_3->field_0x38;
      if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
        puVar13 = *(undefined1 **)&param_3->field_0x40;
      }
      iVar17 = *(int *)(puVar13 + (ulonglong)(*(int *)&param_3->field_0x48 - 1U & uVar8) * 4);
      if (iVar17 != -1) {
        do {
          if (*(uint *)((longlong)iVar17 * 0x20 + *(longlong *)param_3) == uVar8) {
            pTVar12 = TMapBase<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>
                      ::FindChecked((TMapBase<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>
                                     *)param_3,uVar8);
            pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
            pFVar6 = pTVar12->Object;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            TVar4 = (this_00->FullResolution).field0_0x0._s_0;
            iVar17 = 1 << ((byte)uVar8 & 0x1f);
            param_4._4_4_ = TVar4.Y;
            param_4 = (FSampleConverterParameters *)
                      CONCAT44(param_4._4_4_ / iVar17,
                               (int)((longlong)
                                     ((ulonglong)(uint)(TVar4.X >> 0x1f) << 0x20 |
                                     (ulonglong)TVar4 & 0xffffffff) / (longlong)iVar17));
            local_e8 = (TIntPoint<int>_u_0)param_4;
            if ((((pFVar6 != (FStructuredBufferPoolItem *)0x0) &&
                 ((pFVar6->UploadBufferRef).Reference != (FRHIBuffer *)0x0)) &&
                ((bExrReaderUseUploadHeap == false ||
                 ((uVar3 = (uint)((pFVar6->ShaderAccessBufferRef).Reference)->_padding_,
                  (uVar3 >> 0x1e & 1) == 0 && ((uVar3 & 0x3fffffff) != 0)))))) &&
               (*(uint *)TVar15 != uVar2)) {
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_b8 = (FRHIResource *)(param_2.Reference)->_padding_;
              local_b0.Object = pFVar6;
              local_b0.SharedReferenceCount.ReferenceController = pTVar5;
              if (local_b8 != (FRHIResource *)0x0) {
                FRHIResource::AddRef(local_b8);
              }
              ``FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>::operator()'
              ::__l2::<lambda_2>::operator()
                        (&param_4,param_1,(FRHITexture *)&local_b8,this_00,uVar8,uVar8,&local_b0,
                         (TIntPoint<int> *)&local_e8._s_0,(TIntPoint<int> *)&local_e8._s_0,
                         (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)
                         ((longlong)TVar15 + 8));
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            TVar14 = local_c0;
            goto LAB_14ea3cc62;
          }
          iVar17 = *(int *)((longlong)iVar17 * 0x20 + 0x18 + *(longlong *)param_3);
        } while (iVar17 != -1);
        TVar15._s_0 = TVar15._s_0 + 0x18;
        goto LAB_14ea3caf5;
      }
    }
LAB_14ea3cc62:
    TVar15._s_0 = TVar15._s_0 + 0x18;
  } while( true );
}

// operator() @ 14ea3ea60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined4 uVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  ERHIAccess EVar7;
  FRHIBreadcrumbAllocator *pFVar8;
  FRHIBreadcrumbNode *pFVar9;
  TRefCountPtr<FRHIBuffer> TVar10;
  undefined8 uVar11;
  TRefCountPtr<FRHIShaderResourceView> TVar12;
  byte bVar13;
  ForAnyElementType FVar14;
  FRHIBuffer *pFVar15;
  FRHIShaderResourceView *pFVar16;
  bool bVar17;
  FRHIResource *local_res8;
  FRHIResource *local_res10;
  FRHIResource *local_res18;
  FRHIResource *local_res20;
  FString local_128;
  char *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  TGPUStat<TRHIGPUStatNameProvider_ExrImgMediaReaderGpu_AllocateBuffer> *local_108;
  wchar_t *pwStack_100;
  FRHIBreadcrumbScope local_f8;
  char local_e8;
  FInitializer local_e0;
  FInitializer local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  wchar_t *local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  ::FString::PrintfImpl(&local_128,L"ExrReaderGpu.AllocBuffer_RenderThread %d");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar14.Data = local_128.Data.AllocatorInstance.Data;
  }
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar14.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
               ,0x2a6);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_118 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
    ;
    local_108 = &GPUStat_ExrImgMediaReaderGpu_AllocateBuffer;
    uStack_110 = 0x2a8;
    pwStack_100 = L"ExrImgGpu.MipRender.AllocateBuffer";
    ::Desc._padding_._0_4_ = 0x52fea450;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x2a8;
    ::Desc._padding_._4_4_ = uStack_10c;
    ::Desc._padding_._0_4_ = 0x54dc3c60;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x52fe59b0;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(```FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::<lambda_2>::operator()'::__l7
           ::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar9 = FMemStackBase::Alloc(&pFVar8->Inner,0x50,8);
  pFVar9->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar9->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar9->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar9->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar9->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar9->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar9->Allocator = pFVar8;
  pFVar9->TraceCpuSpecId = 0;
  pFVar9->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar9->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar9->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar9->ID = uVar5;
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar9[1]._padding_ = (longlong)&::Desc;
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
  pFVar9->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_f8,(FRHIComputeCommandList *)param_1,pFVar9);
  uVar1 = *(undefined4 *)((longlong)this + 0x10);
  bVar13 = (byte)GNumExplicitGPUsForRendering;
  local_e8 = '\x01';
  EVar7 = RHIGetDefaultResourceState(StructuredBuffer|FastVRAM|ShaderResource|Dynamic,false);
  local_c0 = CONCAT44(4,uVar1);
  uStack_b8 = CONCAT44((1 << (bVar13 & 0x1f)) + -1,0x10502);
  local_a0 = (ulonglong)EVar7;
  uStack_98 = 0;
  local_b0 = L"ExrReaderGpu.UploadBuffer";
  uStack_a8 = 0;
  local_90 = 0;
  TVar10 = FRHICommandListBase::CreateBuffer
                     ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)&local_res8);
  if ((*(longlong *)this == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar15 = *(FRHIBuffer **)this;
  if (pFVar15 != TVar10.Reference) {
    pFVar2 = (FRHIResource *)pFVar15->_padding_;
    pFVar15->_padding_ = (TVar10.Reference)->_padding_;
    (TVar10.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  uVar1 = *(undefined4 *)((longlong)this + 0x10);
  if ((*(longlong *)this == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar11 = **(undefined8 **)this;
  if (((((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 != '\0')) &&
      ((GRHICommandList.bLatchedBypass == false || ((param_1->field_0x29b & 0x20) == 0)))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsTopOfPipe() || Bypass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2ed,
                         L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar13 = param_1->field_0x6a;
  if (((bVar13 != 0) && ((bVar13 & bVar13 - 1) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = param_1->field_0x6a == '\0';
  if (bVar4) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
  }
  uVar11 = (**(code **)(GDynamicRHI->_padding_ + 0x148))(GDynamicRHI,param_1,uVar11,0,uVar1,1);
  if (bVar4) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,None);
  }
  if ((*(longlong *)this == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined8 *)(*(longlong *)this + 8) = uVar11;
  if (bExrReaderUseUploadHeap == false) {
    local_d0._0_8_ = 0;
    local_d0._8_8_ = 0;
    if ((*(longlong *)this == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer
              (&local_d0,(FRHIBuffer *)**(undefined8 **)this);
    if ((*(longlong *)this == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar12 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)param_1,(FRHIBuffer *)&local_res20,
                        (FInitializer *)**(undefined8 **)this);
    if ((*(longlong *)this == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar16 = (FRHIShaderResourceView *)(*(longlong *)this + 0x18);
    if (pFVar16 != TVar12.Reference) {
      pFVar2 = *(FRHIResource **)pFVar16;
      *(undefined8 *)pFVar16 = *(undefined8 *)TVar12.Reference;
      *(undefined8 *)TVar12.Reference = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
  }
  else {
    uVar1 = *(undefined4 *)((longlong)this + 0x10);
    bVar13 = (byte)GNumExplicitGPUsForRendering;
    EVar7 = RHIGetDefaultResourceState(StructuredBuffer|FastVRAM|ShaderResource,false);
    local_88 = CONCAT44(4,uVar1);
    uStack_80 = CONCAT44((1 << (bVar13 & 0x1f)) + -1,0x10500);
    local_68 = (ulonglong)EVar7;
    uStack_60 = 0;
    local_78 = L"ExrReaderGpu.DestBuffer";
    uStack_70 = 0;
    local_58 = 0;
    TVar10 = FRHICommandListBase::CreateBuffer
                       ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)&local_res10);
    if ((*(longlong *)this == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar15 = (FRHIBuffer *)(*(longlong *)this + 0x10);
    if (pFVar15 != TVar10.Reference) {
      pFVar2 = (FRHIResource *)pFVar15->_padding_;
      pFVar15->_padding_ = (TVar10.Reference)->_padding_;
      (TVar10.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    if (local_res10 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res10);
    }
    local_e0._0_8_ = 0;
    local_e0._8_8_ = 0;
    if ((*(longlong *)this == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer
              (&local_e0,*(FRHIBuffer **)(*(longlong *)this + 0x10));
    if ((*(longlong *)this == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar12 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)param_1,(FRHIBuffer *)&local_res18,
                        *(FInitializer **)(*(longlong *)this + 0x10));
    if ((*(longlong *)this == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar16 = (FRHIShaderResourceView *)(*(longlong *)this + 0x18);
    local_res20 = local_res18;
    if (pFVar16 != TVar12.Reference) {
      pFVar2 = *(FRHIResource **)pFVar16;
      *(undefined8 *)pFVar16 = *(undefined8 *)TVar12.Reference;
      *(undefined8 *)TVar12.Reference = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
        local_res20 = local_res18;
      }
    }
  }
  if (local_res20 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res20);
  }
  if ((*(longlong *)this == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))();
  if (local_e8 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_f8);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14ea3f200

void __thiscall
`FExrImgMediaReaderGpu::ReadMip'::__l26::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  uint uVar2;
  FRHIBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRHIBreadcrumbAllocator *this_00;
  FRHIBreadcrumbNode *pFVar6;
  ulong64 *puVar7;
  ulong64 *puVar8;
  undefined1 local_res8 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,int>_const_*,std::tuple<int_const_&>_>
  local_78;
  ulong64 local_68;
  ulong64 uStack_60;
  FRHIBreadcrumbScope local_58;
  char local_48;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Desc._padding_._0_4_ = 0xb7;
      local_30 = 0x54dc3bf0;
      uStack_2c = 1;
      ::Desc._padding_._0_4_ = 0x54dc3bf0;
      ::Desc._padding_._4_4_ = uStack_34;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_ExrReaderGpu_St;
      ::Desc._padding_ = (longlong)u_ExrReaderGpu_St;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FExrImgMediaReaderGpu::ReadMip'::__l26::<lambda_2>::operator()'::__l7::<lambda_1>::
             operator()<int_const_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_78._Myfirst._Val = &::Desc;
  local_78._padding_ = (longlong)this + 0x30;
  this_00 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar6 = FRHIBreadcrumbAllocator::
           AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,int>,int_const_&>
                     (this_00,&local_78);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_58,(FRHIComputeCommandList *)param_1,pFVar6);
  iVar1 = *(int *)((longlong)this + 0x28);
  local_48 = '\x01';
  if (iVar1 == 0) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x10) + 0xd8);
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (FRHIBuffer *)**(undefined8 **)((longlong)this + 0x10);
    if (*(undefined8 **)((longlong)this + 0x10) == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FRHICommandList::CopyBufferRegion
              ((FRHICommandList *)param_1,
               *(FRHIBuffer **)(*(longlong *)((longlong)this + 0x10) + 0x10),0,pFVar3,0,
               (ulonglong)uVar2);
  }
  else {
    puVar8 = *(ulong64 **)((longlong)this + 0x20);
    puVar7 = puVar8 + (longlong)iVar1 * 2;
    while( true ) {
      if (*(int *)((longlong)this + 0x28) != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TIntPoint<__int64>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar8 == puVar7) break;
      local_68 = *puVar8;
      uStack_60 = puVar8[1];
      if (*(longlong *)((longlong)this + 0x10) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (FRHIBuffer *)**(undefined8 **)((longlong)this + 0x10);
      if (*(undefined8 **)((longlong)this + 0x10) == (undefined8 *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FRHICommandList::CopyBufferRegion
                ((FRHICommandList *)param_1,
                 *(FRHIBuffer **)(*(longlong *)((longlong)this + 0x10) + 0x10),local_68,pFVar3,
                 local_68,uStack_60);
      puVar8 = puVar8 + 2;
    }
  }
  if (local_48 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_58);
  }
  return;
}

// AllocateGpuBufferFromPool @ 14ea41a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FStructuredBufferPoolItem,1> * __thiscall
FExrImgMediaReaderGpu::AllocateGpuBufferFromPool
          (FExrImgMediaReaderGpu *this,
          TSharedPtr<FStructuredBufferPoolItem,1> *__return_storage_ptr__,uint param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  atomic<int> aVar7;
  int iVar8;
  longlong *plVar9;
  TSharedPtr<FStructuredBufferPoolItem,1> *pTVar10;
  longlong lVar11;
  FStructuredBufferPoolItem *pFVar12;
  FEvent *pFVar13;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar14;
  ForAnyElementType FVar15;
  code **ppcVar16;
  undefined1 *puVar17;
  FExrImgMediaReaderGpu *pFVar18;
  ulonglong uVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auStack_148 [32];
  uint local_128;
  FExrImgMediaReaderGpu *local_120;
  TSharedPtr<FStructuredBufferPoolItem,1> *local_118;
  FString local_110;
  TRawPtrProxyWithDeleter<FStructuredBufferPoolItem,_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>_>
  local_100;
  TRawPtrProxyWithDeleter<FStructuredBufferPoolItem,_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>_>
  local_e0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128 = param_1;
  local_118 = __return_storage_ptr__;
  ::FString::PrintfImpl(&local_110,L"ExrReaderGpu.AllocBuffer %d");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_110.Data.ArrayNum != 0) {
    FVar15.Data = local_110.Data.AllocatorInstance.Data;
  }
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar15.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
               ,0x27e);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  local_120 = (FExrImgMediaReaderGpu *)this->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14ea41b5b;
      }
      LOCK();
      aVar7 = pTVar3->SharedReferenceCount;
      bVar23 = aVar2 == aVar7;
      if (bVar23) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar23);
  }
  pFVar18 = local_120;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pFVar18 = (FExrImgMediaReaderGpu *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  plVar9 = &pFVar18->_padding_;
  if (pFVar18 == (FExrImgMediaReaderGpu *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  if (plVar9 != &this->_padding_) {
LAB_14ea41b5b:
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result.Pin().Get() == this",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x6c3,L"");
    if (bVar23) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FStructuredBufferPoolItem,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->Object = (FStructuredBufferPoolItem *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  lpCriticalSection = &this->MemoryPoolCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->MemoryPool).field_0x8 != *(int *)&(this->MemoryPool).field_0x34) {
    puVar17 = *(undefined1 **)&(this->MemoryPool).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->MemoryPool).field_0x38;
    }
    iVar8 = *(int *)(puVar17 +
                    (ulonglong)(*(int *)&(this->MemoryPool).field_0x48 - 1U & param_1) * 4);
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&this->MemoryPool;
      do {
        lVar11 = lVar4 + (longlong)iVar8 * 0x18;
        if (*(uint *)(lVar4 + (longlong)iVar8 * 0x18) == param_1) goto LAB_14ea41c02;
        iVar8 = *(int *)(lVar11 + 0x10);
      } while (iVar8 != -1);
    }
  }
  lVar11 = 0;
LAB_14ea41c02:
  pTVar20 = (TReferenceControllerBase<1> *)(lVar11 + 8);
  if (lVar11 == 0) {
    pTVar20 = (TReferenceControllerBase<1> *)0x0;
  }
  pTVar21 = pTVar3;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    local_100.Object = (FStructuredBufferPoolItem *)pTVar20->_padding_;
    local_100.Deleter.WeakReaderPtr.Object = local_120;
    local_120 = (FExrImgMediaReaderGpu *)0x0;
    local_100.Deleter.AllocSize = local_128;
    local_100.Deleter.WeakReaderPtr.WeakReferenceCount.ReferenceController = pTVar3;
    TSharedPtr<FStructuredBufferPoolItem,1>::
    operator=<FStructuredBufferPoolItem,_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool_::__l2::<lambda_1>_>
              (local_118,&local_100);
    if (local_100.Deleter.WeakReaderPtr.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_100.Deleter.WeakReaderPtr.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_100.Deleter.WeakReaderPtr.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_100.Deleter.WeakReaderPtr.WeakReferenceCount.ReferenceController,1);
      }
    }
    TMultiMap<unsigned_int,FStructuredBufferPoolItem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>_>
    ::Remove(&this->MemoryPool,local_128,(FStructuredBufferPoolItem *)pTVar20->_padding_);
    pTVar21 = (TReferenceControllerBase<1> *)0x0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar10 = local_118;
  if (local_118->Object == (FStructuredBufferPoolItem *)0x0) {
    pFVar12 = ::operator_new(0x28);
    if (pFVar12 != (FStructuredBufferPoolItem *)0x0) {
      (pFVar12->UploadBufferRef).Reference = (FRHIBuffer *)0x0;
      (pFVar12->ShaderAccessBufferRef).Reference = (FRHIBuffer *)0x0;
      (pFVar12->ShaderResourceView).Reference = (FRHIShaderResourceView *)0x0;
      pFVar13 = FGenericPlatformProcess::GetSynchEventFromPool(true);
      pFVar12->AllocationReadyEvent = pFVar13;
      if ((pFVar13 == (FEvent *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("AllocationReadyEvent",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
                              ,0x2e5,L""), bVar23)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FStructuredBufferPoolItem,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
    uVar6 = local_128;
    local_e0.Deleter.WeakReaderPtr.Object = local_120;
    local_e0.Deleter.AllocSize = local_128;
    local_e0.Object = pFVar12;
    local_e0.Deleter.WeakReaderPtr.WeakReferenceCount.ReferenceController = pTVar21;
    TSharedPtr<FStructuredBufferPoolItem,1>::
    operator=<FStructuredBufferPoolItem,_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool_::__l2::<lambda_1>_>
              (pTVar10,&local_e0);
    if (local_e0.Deleter.WeakReaderPtr.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.Deleter.WeakReaderPtr.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_e0.Deleter.WeakReaderPtr.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_e0.Deleter.WeakReaderPtr.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar20 = (pTVar10->SharedReferenceCount).ReferenceController;
    pFVar12 = pTVar10->Object;
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x20,8);
    local_90[1] = (code *)pFVar12;
    local_90[2] = (code *)pTVar20;
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::`9'::<lambda_2>,1,1>
                         ::_vftable_;
    *(uint *)(local_90 + 3) = uVar6;
    if (local_90 != (code **)&DAT_fffffffffffffff8) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::<lambda_2>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool_::__l9::TSTR_CreatePooledBuffer675>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88[0] = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_b8[0] = (code *)0x0;
      local_78[0] = local_a8[0];
      local_78[1] = local_a8[1];
      local_78[2] = local_a8[2];
      local_58 = 2;
      pFVar14 = (FRenderCommandTag *)
                TRenderCommandTag<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::TSTR_CreatePooledBuffer675>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar14);
      uVar19 = (ulonglong)local_58;
      if ((2 < uVar19) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar23)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FStructuredBufferPoolItem,1> *)(*pcVar5)();
        return pTVar10;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_88[0] != (code *)0x0) {
          ppcVar16 = local_88 + 2;
          if (local_60 != (code **)0x0) {
            ppcVar16 = local_60;
          }
          (**(code **)(*ppcVar16 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19])();
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar16 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar16 = local_90;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar21->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar21->_padding_ + 8))(pTVar21,1);
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pTVar10;
}

// CreateSampleConverterCallback @ 14ea46530

void __cdecl
FExrImgMediaReaderGpu::CreateSampleConverterCallback
          (TSharedPtr<FExrMediaTextureSampleConverter,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FExrMediaTextureSampleConverter *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  undefined1 local_a0 [8];
  ForAnyElementType local_98;
  int local_90;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  FReadAccessScope local_38;
  
  if (param_1->Object == (FExrMediaTextureSampleConverter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_1->Object;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_58);
  local_40 = &local_b0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_b0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____AEAV__TMap_HV__TSharedPtr_UFStructuredBufferPoolItem___00__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HV__TSharedPtr_UFStructuredBufferPoolItem___00___0A_____UFSampleConverterParameters___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  lpCriticalSection = &pFVar1->ConverterCallbacksCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((TDelegate<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy>
         *)&local_b8 != &pFVar1->ConvertExrBufferCallback) {
      local_a0 = (undefined1  [8])0x0;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_b8,&local_38);
      if ((local_b0.DelegateSize != 0) &&
         (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(*(longlong *)local_b0.DelegateAllocator + 0x50))
                  (local_b0.DelegateAllocator,local_a0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar1->ConvertExrBufferCallback,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
                 (FWriteAccessScope *)&local_88);
      if ((local_90 != 0) && (local_98.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_98.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,0x10);
        local_90 = 0;
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_a0);
    }
    lpCriticalSection_00 = &pFVar1->MipBufferCriticalSection;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (&pFVar1->MipBuffersRenderThread != &pFVar1->MipBuffers) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)&(pFVar1->MipBuffersRenderThread).field_0x38,
                   (int *)&(pFVar1->MipBuffersRenderThread).field_0x48,
                   (ForElementType<FSetElementId> *)&(pFVar1->MipBuffers).field_0x38,
                   *(int *)&(pFVar1->MipBuffers).field_0x48);
        TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FStructuredBufferPoolItem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FStructuredBufferPoolItem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&pFVar1->MipBuffersRenderThread,
                    (TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FStructuredBufferPoolItem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&pFVar1->MipBuffers);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_b8,(FWriteAccessScope *)&local_70);
      if ((local_b0.DelegateSize != 0) &&
         (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_b0,0,0,0x10);
        local_b0.DelegateSize = 0;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_b0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetBufferSize @ 14ea4b1c0

ulong64 __cdecl
FExrImgMediaReaderGpu::GetBufferSize
          (TIntPoint<int> *param_1,int param_2,bool param_3,TIntPoint<int> *param_4)

{
  int iVar1;
  
  if (!param_3) {
    iVar1 = (param_1->field0_0x0)._s_0.Y;
    return (longlong)(iVar1 * 8) +
           (longlong)(iVar1 * (param_1->field0_0x0)._s_0.X) * (longlong)param_2 * 2;
  }
  return (longlong)((param_4->field0_0x0)._s_0.Y * (param_4->field0_0x0)._s_0.X * 0x14) +
         (longlong)((param_1->field0_0x0)._s_0.X * (param_1->field0_0x0)._s_0.Y) * (longlong)param_2
         * 2;
}

// PreAllocateMemoryPool @ 14ea550e0

void __thiscall
FExrImgMediaReaderGpu::PreAllocateMemoryPool
          (FExrImgMediaReaderGpu *this,int param_1,FImgMediaFrameInfo *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  uVar3 = (ulonglong)(uint)param_1;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId372,"ExrReaderGpu.PreAllocateMemoryPool",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
               ,0x174);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId372);
  }
  iVar2 = (int)param_2->NumChannels;
  if (param_2->bHasTiles == false) {
    iVar1 = (param_2->Dim).field0_0x0._s_0.Y;
    iVar2 = iVar1 * 8 + iVar1 * (param_2->Dim).field0_0x0._s_0.X * iVar2 * 2;
  }
  else {
    iVar2 = (param_2->NumTiles).field0_0x0._s_0.Y * (param_2->NumTiles).field0_0x0._s_0.X * 0x14 +
            (param_2->Dim).field0_0x0._s_0.X * (param_2->Dim).field0_0x0._s_0.Y * iVar2 * 2;
  }
  if (0 < param_1) {
    do {
      (**(code **)(this->_padding_ + 0x38))(this,local_18,iVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (!bVar4) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ReadFrame @ 14ea563a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FExrImgMediaReaderGpu::ReadFrame
          (FExrImgMediaReaderGpu *this,int param_1,
          TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *param_2,TSharedPtr<FImgMediaFrame,1> *param_3)

{
  FWindowsRecursiveMutex *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  FImgMediaLoader *this_00;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  atomic<int> aVar9;
  TSharedPtr<FImgMediaFrame,1> *pTVar10;
  TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
  *pTVar11;
  bool bVar12;
  undefined1 uVar13;
  atomic<int> aVar14;
  EReadResult EVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  FString *pFVar19;
  FImgMediaFrame *pFVar20;
  TSharedRef<FExrMediaTextureSampleConverter,1> *pTVar21;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar22;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar23;
  TAtomic<int> TVar24;
  TReferenceControllerBase<1> *pTVar25;
  ForAnyElementType FVar26;
  ForElementType<FSetElementId> FVar27;
  undefined1 *puVar28;
  FScriptContainerElement *pFVar29;
  atomic<unsigned_int> aVar30;
  longlong lVar31;
  FImgMediaTileSelection *pFVar32;
  FScriptContainerElement *pFVar33;
  TSharedPtr<IMediaTextureSampleConverter,1> *pTVar34;
  FImgMediaMipTiles *lpCriticalSection;
  int iVar35;
  ForElementType<unsigned_int> FVar36;
  int iVar37;
  uint *puVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  FExrMediaTextureSampleConverter *pFVar41;
  int iVar42;
  ulonglong uVar43;
  undefined1 auStackY_518 [32];
  undefined1 local_4c8;
  undefined1 local_4c7;
  undefined1 local_4c6 [2];
  uint local_4c4;
  uint local_4c0 [2];
  ForElementType<unsigned_int> local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  FString local_4a0;
  int local_490;
  TAtomic<int> local_48c;
  TIntPoint<int>_u_0 local_488;
  TReferenceControllerBase<1> *local_480;
  TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
  *local_478;
  FExrMediaTextureSampleConverter *local_470;
  TSharedPtr<FImgMediaFrame,1> *local_468;
  FExrImgMediaReaderGpu *local_460;
  TReferenceControllerBase<1> *local_458;
  TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
  *local_450;
  undefined8 uStack_448;
  ForElementType<unsigned_int> FStack_440;
  uint uStack_438;
  uint uStack_434;
  int iStack_430;
  undefined4 uStack_42c;
  int local_428;
  undefined4 uStack_424;
  FExrMediaTextureSampleConverter *local_420;
  FSharedReferencer<1> local_418;
  TIntPoint<int>_u_0 local_410;
  int local_408;
  int iStack_404;
  undefined8 local_400;
  int local_3f8;
  int iStack_3f4;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> local_3f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3e0;
  FImgMediaFrameInfo local_3b8;
  int local_348;
  undefined8 local_340;
  FSharedReferencer<1> local_338;
  int local_330;
  TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
  *local_328;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_320;
  undefined8 uStack_300;
  TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
  *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f0;
  undefined8 uStack_2d0;
  FSampleConverterParameters local_2c8;
  TSharedPtr<FImgMediaFrame,1> local_208;
  TSharedPtr<FExrMediaTextureSampleConverter,1> local_1f8;
  TSharedPtr<FImgMediaFrame,1> local_1e8;
  TSharedPtr<FExrMediaTextureSampleConverter,1> local_1d8;
  TSharedPtr<FImgMediaFrame,1> local_1c8;
  FImgMediaFrameInfo local_1b8;
  TSharedRef<FExrMediaTextureSampleConverter,1> local_148;
  TSharedPtr<FImgMediaFrame,1> local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  FImgMediaTileSelection local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_518;
  local_490 = param_1;
  local_478 = param_2;
  local_468 = param_3;
  local_460 = this;
  if (this->bFallBackToCPU != false) {
    local_208.Object = param_3->Object;
    local_208.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar12 = FExrImgMediaReader::ReadFrame((FExrImgMediaReader *)this,param_1,param_2,&local_208);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    return bVar12;
  }
  pTVar25 = (TReferenceControllerBase<1> *)this->_padding_;
  local_480 = pTVar25;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    aVar9 = pTVar25->SharedReferenceCount;
    do {
      if (aVar9 == (atomic<int>)0x0) {
        pTVar25 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea56464;
      }
      LOCK();
      aVar14 = pTVar25->SharedReferenceCount;
      bVar12 = aVar9 == aVar14;
      if (bVar12) {
        pTVar25->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
        aVar14 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar14;
    } while (!bVar12);
    this_00 = (FImgMediaLoader *)this->_padding_;
    if (this_00 != (FImgMediaLoader *)0x0) {
      pFVar19 = FImgMediaLoader::GetImagePath(this_00,param_1,0);
      local_3b8.FormatName.Data.ArrayNum = ___xmm_000000010000ea600000000000000000;
      local_3b8.FormatName.Data.ArrayMax = _UNK_1528a8c84;
      local_3b8.FrameRate = _UNK_1528a8c88;
      local_3b8.CompressionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b8.CompressionName.Data.ArrayNum = 0;
      local_3b8.CompressionName.Data.ArrayMax = 0;
      local_3b8.FormatName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b8.Srgb = false;
      local_3b8.UncompressedSize = 0;
      local_3b8.NumChannels = 0;
      local_3b8.bHasTiles = false;
      local_3b8.TileBorder = 0;
      local_3b8.NumMipLevels = 0;
      bVar12 = FExrImgMediaReader::GetInfo(pFVar19,&local_3b8,param_3);
      if (!bVar12) {
        if (local_3b8.FormatName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.FormatName.Data.AllocatorInstance.Data);
        }
        if (local_3b8.CompressionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_3b8.CompressionName.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_3->SharedReferenceCount).ReferenceController);
        return false;
      }
      pFVar20 = TSharedPtr<FImgMediaFrame,1>::operator->(param_3);
      pFVar1 = &pFVar20->SampleConverterCriticalSection;
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        pTVar34 = &pFVar20->SampleConverter;
        if (pTVar34->Object == (IMediaTextureSampleConverter *)0x0) {
          pTVar21 = MakeShared<FExrMediaTextureSampleConverter,1>(&local_148);
          local_418.ReferenceController = (pTVar21->SharedReferenceCount).ReferenceController;
          local_420 = pTVar21->Object;
          if (local_418.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_418.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_418.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pTVar34 != (TSharedPtr<IMediaTextureSampleConverter,1> *)&local_420) {
            pTVar34->Object = (IMediaTextureSampleConverter *)local_420;
            local_420 = (FExrMediaTextureSampleConverter *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(pFVar20->SampleConverter).SharedReferenceCount,&local_418);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_418.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_148.SharedReferenceCount.ReferenceController);
        }
        pFVar41 = (FExrMediaTextureSampleConverter *)pTVar34->Object;
        pTVar25 = (pFVar20->SampleConverter).SharedReferenceCount.ReferenceController;
        if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_470 = pFVar41;
        local_458 = pTVar25;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        if ((pFVar41 == (FExrMediaTextureSampleConverter *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
        FExrMediaTextureSampleConverter::GetParams(pFVar41,&local_2c8);
        local_2c8.FullResolution.field0_0x0._s_0.Y = local_3b8.Dim.field0_0x0._s_0.Y;
        local_2c8.FullResolution.field0_0x0._s_0.X = local_3b8.Dim.field0_0x0._s_0.X;
        local_2c8.FrameId = local_490;
        if (local_3b8.Dim.field0_0x0._s_0.X < local_3b8.Dim.field0_0x0._s_0.Y) {
          local_3b8.Dim.field0_0x0._s_0.Y = local_3b8.Dim.field0_0x0._s_0.X;
        }
        if (local_3b8.Dim.field0_0x0._s_0.Y < 1) {
          FSampleConverterParameters::~FSampleConverterParameters(&local_2c8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar25);
          if (local_3b8.FormatName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b8.FormatName.Data.AllocatorInstance.Data);
          }
          if (local_3b8.CompressionName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b8.CompressionName.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_480);
          pTVar25 = (param_3->SharedReferenceCount).ReferenceController;
LAB_14ea56670:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar25);
          return false;
        }
        FImgMediaFrameInfo::operator=(&local_2c8.FrameInfo,&local_3b8);
        local_2c8.PixelSize = (int)local_2c8.FrameInfo.NumChannels * 2;
        local_488._4_4_ = local_3b8.TileDimensions.field0_0x0._4_4_;
        local_488._s_0.Y = local_488._4_4_ + local_3b8.TileBorder * 2;
        local_488._s_0.X = local_3b8.TileDimensions.field0_0x0._0_4_ + local_3b8.TileBorder * 2;
        local_2c8.TileDimWithBorders.field0_0x0 = local_488;
        local_2c8.NumMipLevels = this_00->NumMipLevels;
        local_2c8.bMipsInSeparateFiles = 1 < (this_00->ImagePaths).ArrayNum;
        local_338.ReferenceController =
             (this_00->SourceColorSettings).SharedReferenceCount.ReferenceController;
        local_2c8.SourceColorSettings.Object = (this_00->SourceColorSettings).Object;
        if (local_338.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_338.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_338.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_340 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_2c8.SourceColorSettings.SharedReferenceCount,&local_338);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_338.ReferenceController);
        local_e8._0_8_ = (void *)0x0;
        local_e8._8_8_ = 0;
        local_c8 = (void *)0x0;
        iVar18 = 0;
        local_c0 = 0;
        local_bc = 0x80;
        local_b8 = 0xffffffff;
        local_b4 = 0;
        local_a8 = (ForElementType<FSetElementId>)0x0;
        local_a0 = 0;
        TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                     *)local_e8,
                    (TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                     *)param_2);
        TVar24 = (TAtomic<int>)(local_2c8.NumMipLevels + -1);
        if ((int)this_00->MinimumMipLevelToUpscale < local_2c8.NumMipLevels + -1) {
          TVar24 = this_00->MinimumMipLevelToUpscale;
        }
        local_48c = (TAtomic<int>)0xffffffff;
        if (-1 < (int)TVar24) {
          local_48c = TVar24;
        }
        if ((1 < local_2c8.NumMipLevels) && (-1 < (int)local_48c)) {
          local_2c8.UpscaleMip = (int)local_48c;
          FImgMediaTileSelection::CreateForTargetMipLevel
                    (&local_98,&local_2c8.FullResolution,&local_3b8.TileDimensions,(int)local_48c,
                     true);
          if (local_e8._8_4_ != local_b4) {
            FVar27 = (ForElementType<FSetElementId>)local_b0;
            if (local_a8 != (ForElementType<FSetElementId>)0x0) {
              FVar27 = local_a8;
            }
            for (iVar35 = *(int *)((longlong)FVar27 +
                                  (ulonglong)(local_a0 - 1U & (uint)local_48c) * 4); iVar35 != -1;
                iVar35 = *(int *)(local_e8._0_8_ + (longlong)iVar35 * 0x50 + 0x48)) {
              if (*(TAtomic<int> *)(local_e8._0_8_ + (longlong)iVar35 * 0x50) == local_48c) {
                pFVar32 = TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                          ::FindChecked((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                                         *)local_e8,(int)local_48c);
                if (pFVar32 != &local_98) {
                  TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                            (&pFVar32->Tiles,&local_98.Tiles);
                }
                (pFVar32->Dimensions).field0_0x0 = local_98.Dimensions.field0_0x0;
                (pFVar32->CachedVisibleRegion).field0_0x0._s_0.Min.field0_0x0 =
                     (TIntPoint<int>_u_0)local_98.CachedVisibleRegion.field0_0x0._s_0.Min.field0_0x0
                ;
                (pFVar32->CachedVisibleRegion).field0_0x0._s_0.Max.field0_0x0 =
                     (TIntPoint<int>_u_0)local_98.CachedVisibleRegion.field0_0x0._s_0.Max.field0_0x0
                ;
                pFVar32->bCachedVisibleRegionDirty = local_98.bCachedVisibleRegionDirty;
                goto LAB_14ea56885;
              }
            }
          }
          TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          ::Emplace<int_const_&,FImgMediaTileSelection_const_&>
                    ((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                      *)local_e8,(int *)&local_48c,&local_98);
LAB_14ea56885:
          if (local_98.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_98.Tiles.AllocatorInstance.SecondaryData);
          }
        }
        local_3e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_e8 + 0x10);
        local_3e0.UnvisitedBitMask = 0xffffffff;
        local_3e0._padding_._0_4_ = 0;
        local_3e0._padding_._4_4_ = 1;
        local_3e0.CurrentBitIndex = 0;
        local_3e0.BaseBitIndex = 0;
        if (local_c0 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3e0);
        }
        uStack_448 = CONCAT44(local_3e0._padding_._4_4_,(undefined4)local_3e0._padding_);
        local_450 = (TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                     *)local_e8;
        uStack_434 = local_3e0.CurrentBitIndex;
        uStack_438 = local_3e0.UnvisitedBitMask;
        uStack_42c = local_3e0._28_4_;
        iStack_430 = local_3e0.BaseBitIndex;
        local_428 = local_e8._8_4_ - local_b4;
        FStack_440 = (ForElementType<unsigned_int>)local_3e0.Array;
        uStack_300 = CONCAT44(uStack_424,local_428);
        TStack_320.Array = local_3e0.Array;
        local_328 = local_450;
        TStack_320._padding_ = uStack_448;
        TStack_320._16_8_ = _uStack_438;
        TStack_320._24_8_ = _iStack_430;
        pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_128,(TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),
                             local_c0);
        uStack_448 = pTVar22->_padding_;
        local_4b8 = (ForElementType<unsigned_int>)pTVar22->Array;
        uStack_438 = pTVar22->UnvisitedBitMask;
        uStack_434 = pTVar22->CurrentBitIndex;
        iStack_430 = pTVar22->BaseBitIndex;
        uStack_42c = *(undefined4 *)&pTVar22->field_0x1c;
        local_4c4 = uStack_434;
        FStack_440 = local_4b8;
        while( true ) {
          pTVar11 = local_328;
          uVar16 = local_4c4;
          if (*(int *)&local_328->field_0x8 - *(int *)&local_328->field_0x34 != (int)uStack_300) {
            local_4c8 = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4c8);
          }
          pTVar10 = local_468;
          if (((TStack_320.CurrentBitIndex == uVar16) &&
              ((ForElementType<unsigned_int>)TStack_320.Array == local_4b8)) &&
             (pTVar11 ==
              (TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
               *)local_e8)) break;
          lVar31 = *(longlong *)pTVar11;
          iVar35 = *(int *)((longlong)TStack_320.CurrentBitIndex * 0x50 + lVar31);
          pFVar32 = (FImgMediaTileSelection *)
                    (lVar31 + 8 + (longlong)TStack_320.CurrentBitIndex * 0x50);
          bVar12 = FImgMediaTileSelection::IsAnyVisible(pFVar32);
          if (bVar12) {
            iVar17 = iVar18;
            if (local_2c8.bMipsInSeparateFiles != false) {
              iVar17 = iVar35;
            }
            pFVar19 = FImgMediaLoader::GetImagePath(this_00,local_2c8.FrameId,iVar17);
            local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_4a0.Data.ArrayNum = (pFVar19->Data).ArrayNum;
            lVar31 = (longlong)local_4a0.Data.ArrayNum;
            pFVar33 = (pFVar19->Data).AllocatorInstance.Data;
            if (local_4a0.Data.ArrayNum == 0) {
              local_4a0.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_4a0.Data.ArrayNum,0,(ForAnyElementType *)&local_4a0,
                         local_4a0.Data.ArrayNum,&local_4a0.Data.ArrayMax);
              memcpy(local_4a0.Data.AllocatorInstance.Data,pFVar33,lVar31 * 2);
            }
            pTVar25 = local_458;
            pTVar10 = local_468;
            local_1f8.Object = local_470;
            local_1f8.SharedReferenceCount.ReferenceController = local_458;
            if (local_458 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_458->SharedReferenceCount =
                   (atomic<int>)((int)local_458->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_1e8.Object = local_468->Object;
            local_1e8.SharedReferenceCount.ReferenceController =
                 (local_468->SharedReferenceCount).ReferenceController;
            if (local_1e8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            EVar15 = ReadMip(local_460,iVar35,pFVar32,&local_1e8,&local_2c8,&local_1f8,&local_4a0);
            if (EVar15 == Fail) {
              local_1b8.FormatName.Data.ArrayNum = ___xmm_000000010000ea600000000000000000;
              local_1b8.FormatName.Data.ArrayMax = _UNK_1528a8c84;
              local_1b8.FrameRate = _UNK_1528a8c88;
              local_1b8.CompressionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
              ;
              local_1b8.CompressionName.Data.ArrayNum = 0;
              local_1b8.CompressionName.Data.ArrayMax = 0;
              local_138.Object = (FImgMediaFrame *)0x0;
              local_138.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_1b8.FormatName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1b8.Srgb = false;
              local_1b8.UncompressedSize = 0;
              local_1b8.NumChannels = 0;
              local_1b8.bHasTiles = false;
              local_1b8.TileBorder = 0;
              local_1b8.NumMipLevels = 0;
              bVar12 = FExrImgMediaReader::GetInfo(&local_4a0,&local_1b8,&local_138);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              if (bVar12) {
                FVar26.Data = (FScriptContainerElement *)L"";
                if (local_1b8.CompressionName.Data.ArrayNum != 0) {
                  FVar26.Data = local_1b8.CompressionName.Data.AllocatorInstance.Data;
                }
                iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar26.Data,"Uncompressed");
                if (((iVar18 != 0) && (1 < (byte)LogImgMedia._0_1_)) &&
                   (UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogImgMedia),
                   1 < (byte)LogImgMedia._0_1_)) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
                }
              }
              local_460->bFallBackToCPU = true;
              local_1c8.Object = pTVar10->Object;
              local_1c8.SharedReferenceCount.ReferenceController =
                   (pTVar10->SharedReferenceCount).ReferenceController;
              if (local_1c8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_1c8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              bVar12 = FExrImgMediaReader::ReadFrame
                                 ((FExrImgMediaReader *)local_460,local_2c8.FrameId,local_478,
                                  &local_1c8);
              if (local_1b8.FormatName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_1b8.FormatName.Data.AllocatorInstance.Data);
              }
              if (local_1b8.CompressionName.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.CompressionName.Data.AllocatorInstance.Data);
              }
              if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
              }
              local_a0 = 0;
              if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_a8);
              }
              TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Empty((TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_e8,0);
              if (local_c8 != (void *)0x0) {
                FMemory::Free(local_c8);
              }
              if ((void *)local_e8._0_8_ != (void *)0x0) {
                FMemory::Free((void *)local_e8._0_8_);
              }
              FSampleConverterParameters::~FSampleConverterParameters(&local_2c8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_458);
              if (local_3b8.FormatName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_3b8.FormatName.Data.AllocatorInstance.Data);
              }
              if (local_3b8.CompressionName.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3b8.CompressionName.Data.AllocatorInstance.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_480);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pTVar10->SharedReferenceCount).ReferenceController);
              return bVar12;
            }
            if (EVar15 == Success) {
              pFVar20 = TSharedPtr<FImgMediaFrame,1>::operator->(pTVar10);
              FImgMediaMipTiles::Include(&pFVar20->MipTilesPresent,iVar35,pFVar32);
            }
            else {
              if (EVar15 == Cancelled) {
                if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
                }
                local_a0 = 0;
                if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_a8);
                }
                TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::Empty((TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_e8,0);
                if (local_c8 != (void *)0x0) {
                  FMemory::Free(local_c8);
                }
                if ((void *)local_e8._0_8_ != (void *)0x0) {
                  FMemory::Free((void *)local_e8._0_8_);
                }
                FSampleConverterParameters::~FSampleConverterParameters(&local_2c8);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar25);
                if (local_3b8.FormatName.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3b8.FormatName.Data.AllocatorInstance.Data);
                }
                if (local_3b8.CompressionName.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3b8.CompressionName.Data.AllocatorInstance.Data);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_480);
                pTVar25 = (pTVar10->SharedReferenceCount).ReferenceController;
                goto LAB_14ea56670;
              }
              if ((EVar15 != Skipped) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!\"Enclosing block should never be called\"",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
                                      ,0x13e,L""), bVar12)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
            }
            if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
            }
          }
          TStack_320.UnvisitedBitMask = TStack_320.UnvisitedBitMask & ~TStack_320._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_320);
        }
        if ((local_468->Object == (FImgMediaFrame *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
        lpCriticalSection = &pTVar10->Object->MipTilesPresent;
        if (lpCriticalSection == (FImgMediaMipTiles *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if ((pTVar10->Object == (FImgMediaFrame *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
        pFVar20 = pTVar10->Object;
        uVar16 = 1;
        iVar35 = *(int *)&(pFVar20->MipTilesPresent).MipTiles.field_0x28;
        FStack_440 = (ForElementType<unsigned_int>)&(pFVar20->MipTilesPresent).MipTiles.field_0x10;
        local_478 = &(pFVar20->MipTilesPresent).MipTiles;
        uStack_434 = iVar18;
        iStack_430 = iVar18;
        if (iVar35 != 0) {
          puVar38 = *(uint **)&(pFVar20->MipTilesPresent).MipTiles.field_0x20;
          if (puVar38 == (uint *)0x0) {
            puVar38 = (uint *)FStack_440;
          }
          uVar39 = *puVar38;
          iStack_430 = 0;
          iVar18 = 0;
          while (uVar39 == 0) {
            lVar31 = (longlong)iVar18;
            iStack_430 = iStack_430 + 0x20;
            iVar18 = iVar18 + 1;
            uStack_434 = iVar35;
            if ((int)(iVar35 + -1 + (iVar35 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18)
            goto LAB_14ea56ca3;
            uVar39 = puVar38[lVar31 + 1];
          }
          uVar16 = -uVar39 & uVar39;
          uVar2 = (ulonglong)uVar16 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          local_348 = (int)lVar31;
          uStack_434 = iStack_430 + -1 + local_348;
          if (iVar35 < (int)uStack_434) {
            uStack_434 = iVar35;
          }
        }
LAB_14ea56ca3:
        local_450 = &(pFVar20->MipTilesPresent).MipTiles;
        local_4b8 = (ForElementType<unsigned_int>)&(pFVar20->MipTilesPresent).MipTiles.field_0x10;
        local_428 = *(int *)&(pFVar20->MipTilesPresent).MipTiles.field_0x8 -
                    *(int *)&(pFVar20->MipTilesPresent).MipTiles.field_0x34;
        uVar39 = *(uint *)&(pFVar20->MipTilesPresent).MipTiles.field_0x28;
        uStack_438 = 0xffffffff;
        uStack_448 = CONCAT44(uVar16,iVar18);
        uVar16 = uVar39 & 0xffffffe0;
        uStack_42c = local_ec;
        TStack_2f0._padding_ = uStack_448;
        iVar18 = (int)uVar39 >> 5;
        uStack_2d0 = CONCAT44(uStack_424,local_428);
        TStack_2f0.BaseBitIndex = iStack_430;
        TStack_2f0._28_4_ = local_ec;
        TStack_2f0.UnvisitedBitMask = 0xffffffff;
        TStack_2f0.CurrentBitIndex = uStack_434;
        local_4c4 = uVar39;
        local_2f8 = local_450;
        TStack_2f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FStack_440;
        if ((((int)uVar39 < 0) || (iVar35 < (int)uVar39)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
        uVar3 = *(int *)((longlong)local_4b8 + 0x18);
        pFVar41 = local_470;
        if (uVar39 != uVar3) {
          FVar36 = *(ForElementType<unsigned_int> *)((longlong)local_4b8 + 0x10);
          if (*(ForElementType<unsigned_int> *)((longlong)local_4b8 + 0x10) ==
              (ForElementType<unsigned_int>)0x0) {
            FVar36 = local_4b8;
          }
          uVar39 = -1 << ((byte)uVar39 & 0x1f) & *(uint *)((longlong)FVar36 + (longlong)iVar18 * 4);
          while (uVar39 == 0) {
            lVar31 = (longlong)iVar18;
            uVar16 = uVar16 + 0x20;
            iVar18 = iVar18 + 1;
            uVar39 = uVar3;
            local_4c4 = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
            goto LAB_14ea56de0;
            uVar39 = *(uint *)((longlong)FVar36 + 4 + lVar31 * 4);
          }
          uVar2 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
          lVar31 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          local_330 = (int)lVar31;
          uVar39 = local_330 + -1 + uVar16;
          local_4c4 = uVar39;
          if ((int)uVar3 < (int)uVar39) {
            uVar39 = uVar3;
            local_4c4 = uVar3;
          }
        }
LAB_14ea56de0:
        while( true ) {
          pTVar11 = local_2f8;
          if (*(int *)&local_2f8->field_0x8 - *(int *)&local_2f8->field_0x34 != (int)uStack_2d0) {
            local_4c7 = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4c7);
          }
          lVar31 = (longlong)TStack_2f0.CurrentBitIndex;
          if (((TStack_2f0.CurrentBitIndex == uVar39) &&
              ((ForElementType<unsigned_int>)TStack_2f0.Array == local_4b8)) &&
             (pTVar11 == local_478)) break;
          lVar4 = *(longlong *)pTVar11;
          local_4c0[0] = *(uint *)(lVar4 + lVar31 * 0x50);
          if ((pFVar41 == (FExrMediaTextureSampleConverter *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          uVar16 = local_4c0[0];
          pFVar1 = &pFVar41->MipBufferCriticalSection;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          if (*(int *)&(pFVar41->MipBuffers).field_0x8 != *(int *)&(pFVar41->MipBuffers).field_0x34)
          {
            puVar5 = *(undefined1 **)&(pFVar41->MipBuffers).field_0x40;
            puVar28 = &(pFVar41->MipBuffers).field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar28 = puVar5;
            }
            iVar18 = *(int *)(puVar28 +
                             (ulonglong)(*(int *)&(pFVar41->MipBuffers).field_0x48 - 1U & uVar16) *
                             4);
            if (iVar18 != -1) {
              do {
                if (*(uint *)((longlong)iVar18 * 0x20 + *(longlong *)&pFVar41->MipBuffers) == uVar16
                   ) goto LAB_14ea56efb;
                iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 + *(longlong *)&pFVar41->MipBuffers
                                 );
              } while (iVar18 != -1);
            }
          }
          iVar18 = -1;
LAB_14ea56efb:
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          if (iVar18 != -1) {
            local_410._4_4_ = local_2c8.FullResolution.field0_0x0._4_4_;
            iVar18 = 1 << ((byte)local_4c0[0] & 0x1f);
            lVar6 = (longlong)(int)local_410._4_4_ / (longlong)iVar18;
            iVar35 = (int)lVar6;
            local_410._s_0.Y = iVar35;
            local_410._s_0.X = local_2c8.FullResolution.field0_0x0._s_0.X;
            uVar2 = (longlong)local_2c8.FullResolution.field0_0x0._s_0.X / (longlong)iVar18;
            uVar43 = uVar2 & 0xffffffff | lVar6 << 0x20;
            pTVar23 = TSortedMap<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                      ::Emplace<int_const_&>(&local_2c8.Viewports,(int *)local_4c0);
            FImgMediaTileSelection::GetVisibleRegions
                      ((FImgMediaTileSelection *)(lVar4 + lVar31 * 0x50 + 8),&local_3f0,
                       (FImgMediaTileSelection *)0x0);
            iVar18 = local_3f0.ArrayNum;
            pFVar33 = local_3f0.AllocatorInstance.Data + 8;
            pFVar40 = local_3f0.AllocatorInstance.Data + (longlong)iVar18 * 0x10;
            while( true ) {
              if (local_3f0.ArrayNum != iVar18) {
                local_4c6[0] = 0;
                `TCheckedPointerIterator<UE::Math::TIntRect<int>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_4c6);
              }
              pFVar41 = local_470;
              if (pFVar33 + -8 == pFVar40) break;
              if (local_2c8.FrameInfo.bHasTiles == false) {
                local_400 = 0;
                local_4b0 = 0;
                local_4a8 = uVar43;
              }
              else {
                local_3f8 = local_2c8.TileDimWithBorders.field0_0x0._s_0.X * *(int *)(pFVar33 + -8);
                iStack_3f4 = local_2c8.TileDimWithBorders.field0_0x0._s_0.Y * *(int *)(pFVar33 + -4)
                ;
                iStack_404 = local_2c8.TileDimWithBorders.field0_0x0._s_0.Y * *(int *)(pFVar33 + 4);
                local_408 = local_2c8.TileDimWithBorders.field0_0x0._s_0.X * *(int *)pFVar33;
                iVar17 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._0_4_;
                if (UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._0_4_ < local_3f8) {
                  iVar17 = local_3f8;
                }
                iVar42 = (int)uVar2;
                iVar37 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._4_4_;
                if (UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._4_4_ < iStack_3f4) {
                  iVar37 = iStack_3f4;
                }
                local_4b0 = CONCAT44(iVar37,iVar17);
                if (local_408 < iVar42) {
                  iVar42 = local_408;
                }
                uVar8 = uVar43;
                if (iStack_404 < iVar35) {
                  uVar8 = CONCAT44(iStack_404,local_408);
                }
                if (iVar42 < iVar17) {
                  iVar42 = iVar17;
                }
                iVar17 = (int)(uVar8 >> 0x20);
                if (iVar17 < iVar37) {
                  iVar17 = iVar37;
                }
                local_4a8 = CONCAT44(iVar17,iVar42);
              }
              pFVar29 = (pTVar23->AllocatorInstance).Data;
              if (((pFVar29 <= (FScriptContainerElement *)&local_4b0) &&
                  ((FScriptContainerElement *)&local_4b0 <
                   pFVar29 + (longlong)pTVar23->ArrayMax * 0x10)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              iVar17 = pTVar23->ArrayNum;
              if (iVar17 == pTVar23->ArrayMax) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,&pTVar23->AllocatorInstance,&pTVar23->ArrayMax);
              }
              pTVar23->ArrayNum = iVar17 + 1;
              pFVar29 = (pTVar23->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
              pFVar33 = pFVar33 + 0x10;
              *(undefined8 *)pFVar29 = local_4b0;
              *(ulonglong *)(pFVar29 + 8) = local_4a8;
            }
            if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3f0.AllocatorInstance.Data);
            }
          }
          TStack_2f0.UnvisitedBitMask = TStack_2f0.UnvisitedBitMask & ~TStack_2f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f0);
          uVar39 = local_4c4;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        local_a0 = 0;
        if (local_a8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_a8);
        }
        TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_e8);
        pTVar10 = local_468;
        if ((local_468->Object == (FImgMediaFrame *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
        LOCK();
        pTVar10->Object->Format =
             (atomic<EMediaTextureSampleFormat>)
             ((3 < CONCAT44(local_2c8.FrameInfo.NumChannels._4_4_,
                            (int)local_2c8.FrameInfo.NumChannels)) + 0xc);
        UNLOCK();
        aVar30 = (atomic<unsigned_int>)
                 (local_2c8.FullResolution.field0_0x0._s_0.X * local_2c8.PixelSize);
        if ((pTVar10->Object == (FImgMediaFrame *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
        LOCK();
        pTVar10->Object->Stride = aVar30;
        UNLOCK();
        if ((pFVar41 == (FExrMediaTextureSampleConverter *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
        pFVar1 = &pFVar41->ParamsCriticalSection;
        if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          FSampleConverterParameters::operator=(&pFVar41->ConverterParams,&local_2c8);
          if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          }
          pTVar25 = local_458;
          local_1d8.SharedReferenceCount.ReferenceController = local_458;
          if (local_458 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_458->SharedReferenceCount =
                 (atomic<int>)((int)local_458->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1d8.Object = pFVar41;
          CreateSampleConverterCallback(&local_1d8);
          if (5 < (byte)LogImgMedia._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2c8.SourceColorSettings.SharedReferenceCount.ReferenceController);
          DestructItems<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *)
                     local_2c8.TileInfoPerMipLevel.AllocatorInstance.Data,
                     local_2c8.TileInfoPerMipLevel.ArrayNum);
          if ((TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *)
              local_2c8.TileInfoPerMipLevel.AllocatorInstance.Data !=
              (TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_2c8.TileInfoPerMipLevel.AllocatorInstance.Data);
          }
          DestructItems<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,int>
                    ((TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *)
                     local_2c8.Viewports.Pairs.AllocatorInstance.Data,
                     local_2c8.Viewports.Pairs.ArrayNum);
          if ((TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *)
              local_2c8.Viewports.Pairs.AllocatorInstance.Data !=
              (TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *)0x0) {
            FMemory::Free(local_2c8.Viewports.Pairs.AllocatorInstance.Data);
          }
          if (local_2c8.FrameInfo.FormatName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.FrameInfo.FormatName.Data.AllocatorInstance.Data);
          }
          if (local_2c8.FrameInfo.CompressionName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.FrameInfo.CompressionName.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar25);
          if (local_3b8.FormatName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b8.FormatName.Data.AllocatorInstance.Data);
          }
          if (local_3b8.CompressionName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b8.CompressionName.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_480);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar10->SharedReferenceCount).ReferenceController);
          return true;
        }
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
LAB_14ea56464:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return false;
}

// ReadInChunks @ 14ea58110

/* WARNING: Enum "Type": Some values do not have unique names */

EReadResult __thiscall
FExrImgMediaReaderGpu::ReadInChunks
          (FExrImgMediaReaderGpu *this,ushort *param_1,FString *param_2,int param_3,
          TIntPoint<int> *param_4,int param_5)

{
  longlong *lpCriticalSection;
  int iVar1;
  TIntPoint<int> *pTVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  EReadResult EVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FExrReader local_48;
  
  iVar9 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_48.FileHandle = (_iobuf *)0x0;
  local_48.FileLength = 0;
  local_48.LineOrTileOffsetsPerLevel.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.LineOrTileOffsetsPerLevel.ArrayNum = 0;
  local_48.LineOrTileOffsetsPerLevel.ArrayMax = 0;
  EVar8 = Success;
  iVar7 = param_5 % 16000000;
  iVar1 = ((param_5 / 16000000) * 16000000) / 16000000;
  param_5 = iVar7;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&local_68.AllocatorInstance,&local_68.ArrayMax);
  local_68.ArrayNum = iVar4 + 1;
  *(int *)(local_68.AllocatorInstance.Data + (longlong)iVar4 * 4) = (param_4->field0_0x0)._s_0.Y;
  pFVar5 = ::FString::FString(&local_58,param_2);
  bVar3 = FExrReader::OpenExrAndPrepareForPixelReading(&local_48,pFVar5,&local_68);
  if (bVar3) {
    iVar4 = 0;
    pTVar2 = param_4;
    if (-1 < iVar1) {
      do {
        iVar6 = 16000000;
        if (iVar4 == iVar1) {
          iVar6 = iVar7;
        }
        param_4 = pTVar2;
        if (iVar6 == 0) break;
        lpCriticalSection = &this->_padding_;
        if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        param_4._0_4_ = param_3;
        if (((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) &&
           (iVar7 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                               &this->_padding_,param_3,(int *)&param_4), 0 < iVar7)) {
          if (5 < (byte)LogImgMedia._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
          }
          EVar8 = Cancelled;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        bVar3 = FExrReader::ReadExrImageChunk
                          (&local_48,(void *)((longlong)iVar9 + (longlong)param_1),(longlong)iVar6);
        pTVar2 = (TIntPoint<int> *)CONCAT44(param_4._4_4_,(int)param_4);
        if (!bVar3) {
          EVar8 = Fail;
          param_4 = pTVar2;
          break;
        }
        iVar9 = iVar9 + iVar6;
        iVar4 = iVar4 + 1;
        iVar7 = param_5;
        param_4 = (TIntPoint<int> *)CONCAT44(param_4._4_4_,(int)param_4);
      } while (iVar4 <= iVar1);
    }
    bVar3 = FExrReader::CloseExrFile(&local_48);
    if (bVar3) goto LAB_14ea582d6;
  }
  EVar8 = Fail;
LAB_14ea582d6:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  DestructItems<TArray<__int64,TSizedDefaultAllocator<32>_>,int>
            ((TArray<__int64,TSizedDefaultAllocator<32>_> *)
             local_48.LineOrTileOffsetsPerLevel.AllocatorInstance.Data,
             local_48.LineOrTileOffsetsPerLevel.ArrayNum);
  if ((TArray<__int64,TSizedDefaultAllocator<32>_> *)
      local_48.LineOrTileOffsetsPerLevel.AllocatorInstance.Data !=
      (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48.LineOrTileOffsetsPerLevel.AllocatorInstance.Data);
  }
  return EVar8;
}

// ReadMip @ 14ea58340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ea5873c) */
/* WARNING: Removing unreachable block (ram,0x00014ea5869c) */
/* WARNING: Removing unreachable block (ram,0x00014ea587eb) */
/* WARNING: Enum "Type": Some values do not have unique names */

EReadResult __thiscall
FExrImgMediaReaderGpu::ReadMip
          (FExrImgMediaReaderGpu *this,int param_1,FImgMediaTileSelection *param_2,
          TSharedPtr<FImgMediaFrame,1> *param_3,FSampleConverterParameters *param_4,
          TSharedPtr<FExrMediaTextureSampleConverter,1> *param_5,FString *param_6)

{
  atomic<int> *paVar1;
  int iVar2;
  int iVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  ushort *puVar5;
  FImgMediaFrame *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  EReadResult EVar10;
  int iVar11;
  int *piVar12;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar13;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar14;
  ForAnyElementType FVar15;
  FImgMediaTileSelection *pFVar16;
  code **ppcVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  int iVar21;
  ForAnyElementType FVar22;
  longlong lVar23;
  FImgMediaMipTiles *lpCriticalSection;
  FScriptContainerElement *pFVar24;
  bool bVar25;
  undefined1 auStackY_238 [32];
  EReadResult local_1f4;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> local_1f0;
  TIntPoint<int>_u_0 local_1e0;
  FSampleConverterParameters *local_1d8;
  FExrMediaTextureSampleConverter *local_1d0;
  TReferenceControllerBase<1> *local_1c8;
  FStructuredBufferPoolItem *local_1c0;
  TReferenceControllerBase<1> *local_1b8;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  int local_1a0;
  FImgMediaTileSelection *local_198;
  FExrImgMediaReaderGpu *local_190;
  TSharedPtr<FExrMediaTextureSampleConverter,1> *local_188;
  TSharedPtr<FStructuredBufferPoolItem,1> local_180;
  TArray<UE::Math::TIntPoint<__int64>,TSizedDefaultAllocator<32>_> local_170;
  longlong local_160;
  TIntPoint<int>_u_0_s_0 local_158;
  FString *local_150;
  ushort *local_148;
  TIntPoint<int>_u_0 local_140;
  FString local_138;
  FString local_128;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> local_118;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> local_108;
  code *local_f8 [2];
  undefined **local_e8;
  FExrImgMediaReaderGpu *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  undefined1 local_98 [40];
  code **local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_150 = param_6;
  local_188 = param_5;
  local_1d8 = param_4;
  local_198 = param_2;
  local_190 = this;
  ::FString::PrintfImpl(&local_138,L"ExrReaderGpu.ReadMip %d");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar15.Data = local_138.Data.AllocatorInstance.Data;
  }
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar15.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
               ,0x7a);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  TVar4 = (param_4->FullResolution).field0_0x0._s_0;
  local_158 = (param_4->FrameInfo).NumTiles.field0_0x0._s_0;
  iVar21 = 1 << ((byte)param_1 & 0x1f);
  local_1e0._s_0.X =
       (int)((longlong)((ulonglong)(uint)(TVar4.X >> 0x1f) << 0x20 | (ulonglong)TVar4 & 0xffffffff)
            / (longlong)iVar21);
  local_1e0._4_4_ = TVar4.Y;
  local_1e0._s_0.Y = (int)local_1e0._4_4_ / iVar21;
  local_140 = local_1e0;
  lVar23 = (longlong)(int)(local_1d8->FrameInfo).NumChannels;
  if ((local_1d8->FrameInfo).bHasTiles == false) {
    lVar23 = (longlong)(local_1e0._s_0.Y * 8) + (local_1e0._s_0.X * local_1e0._s_0.Y) * lVar23 * 2;
  }
  else {
    lVar23 = (longlong)
             ((int)((longlong)
                    ((ulonglong)(uint)(local_158.X >> 0x1f) << 0x20 |
                    (ulonglong)local_158 & 0xffffffff) / (longlong)iVar21) * (local_158.Y / iVar21)
             * 0x14) + (local_1e0._s_0.Y * local_1e0._s_0.X) * lVar23 * 2;
  }
  local_160 = lVar23;
  if ((param_5->Object == (FExrMediaTextureSampleConverter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar10 = (*pcVar7)();
    return EVar10;
  }
  local_d0 = 0;
  local_e8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_e0 = local_190;
  local_f8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FExrImgMediaReaderGpu::ReadMip'::__l2::<lambda_1>,TSharedPtr<FStructuredBufferPoolItem,1>_>
                ::Call;
  local_d8 = lVar23;
  FExrMediaTextureSampleConverter::GetOrCreateMipLevelBuffer
            (param_5->Object,&local_180,param_1,
             (TFunction<TSharedPtr<FStructuredBufferPoolItem,1>___cdecl(void)> *)local_f8);
  if ((local_180.Object == (FStructuredBufferPoolItem *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar10 = (*pcVar7)();
    return EVar10;
  }
  puVar5 = (local_180.Object)->UploadBufferMapped;
  local_148 = puVar5;
  bVar8 = FPaths::FileExists(param_6);
  if (bVar8) {
    FVar15.Data = (FScriptContainerElement *)0x0;
    iVar21 = 0;
    local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.ArrayNum = 0;
    local_170.ArrayMax = 0;
    if ((local_1d8->FrameInfo).bHasTiles == false) {
      local_1f4 = ReadInChunks(local_190,puVar5,param_6,local_1d8->FrameId,
                               (TIntPoint<int> *)&local_140._s_0,(int)lVar23);
      if ((param_3->Object == (FImgMediaFrame *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        EVar10 = (*pcVar7)();
        return EVar10;
      }
      LOCK();
      paVar1 = &param_3->Object->NumTilesRead;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    else {
      local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.ArrayNum = 0;
      local_1f0.ArrayMax = 0;
      ::FString::PrintfImpl(&local_128,L"ExrReaderGpu.CalculateRegions %d");
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar22.Data = local_128.Data.AllocatorInstance.Data;
      }
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ((wchar_t *)FVar22.Data,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
                   ,0x96);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if ((param_3->Object == (FImgMediaFrame *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        EVar10 = (*pcVar7)();
        return EVar10;
      }
      pFVar6 = param_3->Object;
      lpCriticalSection = &pFVar6->MipTilesPresent;
      if (lpCriticalSection == (FImgMediaMipTiles *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar6->MipTilesPresent).MipTiles.field_0x8 !=
          *(int *)&(pFVar6->MipTilesPresent).MipTiles.field_0x34) {
        puVar18 = *(undefined1 **)&(pFVar6->MipTilesPresent).MipTiles.field_0x40;
        if (puVar18 == (undefined1 *)0x0) {
          puVar18 = &(pFVar6->MipTilesPresent).MipTiles.field_0x38;
        }
        iVar11 = *(int *)(puVar18 +
                         (ulonglong)
                         (*(int *)&(pFVar6->MipTilesPresent).MipTiles.field_0x48 - 1U & param_1) * 4
                         );
        if (iVar11 != -1) {
          do {
            piVar12 = (int *)((longlong)iVar11 * 0x50 +
                             *(longlong *)&(pFVar6->MipTilesPresent).MipTiles);
            if (*piVar12 == param_1) {
              pFVar16 = (FImgMediaTileSelection *)(piVar12 + 2);
              if (piVar12 == (int *)0x0) {
                pFVar16 = (FImgMediaTileSelection *)0x0;
              }
              if (pFVar16 != (FImgMediaTileSelection *)0x0) {
                pTVar13 = FImgMediaTileSelection::GetVisibleRegions(pFVar16,&local_118,local_198);
                if (&local_1f0 != pTVar13) {
                  FVar15.Data = (pTVar13->AllocatorInstance).Data;
                  (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  iVar21 = pTVar13->ArrayNum;
                  local_1f0.ArrayNum = pTVar13->ArrayNum;
                  local_1f0.ArrayMax = pTVar13->ArrayMax;
                  pTVar13->ArrayNum = 0;
                  pTVar13->ArrayMax = 0;
                  local_1f0.AllocatorInstance.Data = FVar15.Data;
                }
                if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_118.AllocatorInstance.Data);
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                pFVar16 = local_198;
                goto LAB_14ea586d4;
              }
              break;
            }
            iVar11 = piVar12[0x12];
          } while (iVar11 != -1);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar16 = local_198;
      pTVar13 = FImgMediaTileSelection::GetVisibleRegions
                          (local_198,&local_108,(FImgMediaTileSelection *)0x0);
      iVar21 = 0;
      if (&local_1f0 != pTVar13) {
        FVar15.Data = (pTVar13->AllocatorInstance).Data;
        (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar21 = pTVar13->ArrayNum;
        local_1f0.ArrayNum = pTVar13->ArrayNum;
        local_1f0.ArrayMax = pTVar13->ArrayMax;
        pTVar13->ArrayNum = 0;
        pTVar13->ArrayMax = 0;
        local_1f0.AllocatorInstance.Data = FVar15.Data;
      }
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
LAB_14ea586d4:
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((iVar21 == 0) && (bVar8 = FImgMediaTileSelection::IsAnyVisible(pFVar16), bVar8)) {
        local_1f4 = Skipped;
      }
      else {
        local_1f4 = FExrImgMediaReader::ReadTiles
                              ((FExrImgMediaReader *)local_190,local_148,local_160,local_150,
                               &local_1f0,local_1d8,param_1,&local_170);
        pFVar24 = local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayNum * 0x10;
        for (pFVar19 = local_1f0.AllocatorInstance.Data + 0xc;
            FVar15.Data = local_1f0.AllocatorInstance.Data, pFVar19 + -0xc != pFVar24;
            pFVar19 = pFVar19 + 0x10) {
          iVar21 = *(int *)pFVar19;
          iVar11 = *(int *)(pFVar19 + -8);
          iVar2 = *(int *)(pFVar19 + -4);
          iVar3 = *(int *)(pFVar19 + -0xc);
          if ((param_3->Object == (FImgMediaFrame *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            EVar10 = (*pcVar7)();
            return EVar10;
          }
          LOCK();
          paVar1 = &param_3->Object->NumTilesRead;
          *paVar1 = (atomic<int>)((int)*paVar1 + (iVar21 - iVar11) * (iVar2 - iVar3));
          UNLOCK();
        }
      }
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
      }
    }
    FVar15.Data = local_170.AllocatorInstance.Data;
    if ((local_1f4 == Success) && (bExrReaderUseUploadHeap != false)) {
      iVar21 = local_1d8->FrameId;
      local_1d0 = local_188->Object;
      local_1c8 = (local_188->SharedReferenceCount).ReferenceController;
      if (local_1c8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_1c8->SharedReferenceCount = (atomic<int>)((int)local_1c8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1c0 = local_180.Object;
      local_1b8 = local_180.SharedReferenceCount.ReferenceController;
      if (local_180.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar23 = (longlong)local_170.ArrayNum;
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8 = CONCAT44(local_1a8._4_4_,local_170.ArrayNum);
      if (local_170.ArrayNum == 0) {
        local_1a8 = local_170._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_170.ArrayNum,0,&local_1b0,local_170.ArrayNum,
                   (int *)((longlong)&local_1a8 + 4));
        memcpy(local_1b0.Data,FVar15.Data,lVar23 << 4);
      }
      local_c8[0] = (code *)0x0;
      local_1a0 = iVar21;
      local_a0 = FMemory::Malloc(0x40,8);
      *local_a0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::`26'::<lambda_2>,1,1>
                           ::_vftable_;
      local_a0[1] = (code *)local_1d0;
      local_a0[2] = (code *)local_1c8;
      local_1c8 = (TReferenceControllerBase<1> *)0x0;
      local_1d0 = (FExrMediaTextureSampleConverter *)0x0;
      local_a0[3] = (code *)local_1c0;
      local_a0[4] = (code *)local_1b8;
      local_1b8 = (TReferenceControllerBase<1> *)0x0;
      local_1c0 = (FStructuredBufferPoolItem *)0x0;
      local_a0[5] = (code *)0x0;
      local_a0[5] = (code *)local_1b0.Data;
      local_1b0.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(local_a0 + 6) = (undefined4)local_1a8;
      *(undefined4 *)((longlong)local_a0 + 0x34) = local_1a8._4_4_;
      local_1a8 = 0;
      *(int *)(local_a0 + 7) = local_1a0;
      if (local_a0 + 1 != (code **)0x0) {
        local_c8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FExrImgMediaReaderGpu::ReadMip'::__l26::<lambda_2>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FExrImgMediaReaderGpu::ReadMip_::__l26::TSTR_CopyFromUploadBuffer181>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_98._0_8_ = local_c8[0];
        local_70 = local_a0;
        local_a0 = (code **)0x0;
        local_98._16_8_ = local_b8[0];
        local_98._24_8_ = local_b8[1];
        local_98._32_8_ = local_b8[2];
        local_c8[0] = (code *)0x0;
        local_68 = 2;
        pFVar14 = (FRenderCommandTag *)
                  TRenderCommandTag<`FExrImgMediaReaderGpu::ReadMip'::__l26::TSTR_CopyFromUploadBuffer181>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_98,pFVar14);
        uVar20 = (ulonglong)local_68;
        if ((2 < uVar20) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          EVar10 = (*pcVar7)();
          return EVar10;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_98._0_8_ != (code *)0x0) {
            ppcVar17 = (code **)(local_98 + 0x10);
            if (local_70 != (code **)0x0) {
              ppcVar17 = local_70;
            }
            (**(code **)(*ppcVar17 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20])(local_98);
        }
      }
      if (local_c8[0] != (code *)0x0) {
        ppcVar17 = local_c8 + 2;
        if (local_a0 != (code **)0x0) {
          ppcVar17 = local_a0;
        }
        (**(code **)(*ppcVar17 + 0x10))();
      }
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c8)
      ;
    }
    if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
    if (bVar25) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((local_188->SharedReferenceCount).ReferenceController);
  }
  else {
    if (1 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
    if (bVar25) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((local_188->SharedReferenceCount).ReferenceController);
    local_1f4 = Fail;
  }
  return local_1f4;
}

// ReturnGpuBufferToPool @ 14ea5b150

void __thiscall
FExrImgMediaReaderGpu::ReturnGpuBufferToPool
          (FExrImgMediaReaderGpu *this,uint param_1,FStructuredBufferPoolItem *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TPairInitializer<unsigned_int_const_&,FStructuredBufferPoolItem_*_const_&> local_res8;
  FStructuredBufferPoolItem *local_res18;
  FStructuredBufferPoolItem ***local_18;
  FStructuredBufferPoolItem **local_10;
  
  lpCriticalSection = &this->MemoryPoolCriticalSection;
  local_res8.Value._0_4_ = param_1;
  local_res18 = param_2;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (CpuChannel->Enabled < 0) {
      local_18 = &local_res8.Value;
      local_10 = &local_res18;
      TSet<TTuple<unsigned_int,FStructuredBufferPoolItem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FStructuredBufferPoolItem_*_const_&>_>
                ((TSet<TTuple<unsigned_int,FStructuredBufferPoolItem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>,FDefaultSetAllocator>
                  *)&this->MemoryPool,&local_res8,(bool *)&local_18);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId718,"ExrReaderGpu.ReturnPoolItem",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
                 ,0x2ce);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId718);
      local_18 = &local_res8.Value;
      local_10 = &local_res18;
      TSet<TTuple<unsigned_int,FStructuredBufferPoolItem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FStructuredBufferPoolItem_*_const_&>_>
                ((TSet<TTuple<unsigned_int,FStructuredBufferPoolItem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>,FDefaultSetAllocator>
                  *)&this->MemoryPool,&local_res8,(bool *)&local_18);
      FCpuProfilerTrace::OutputEndEvent();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

