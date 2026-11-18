// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 7

// Call @ 14ea450d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  FStructuredBufferPoolItem *this;
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
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  FScriptContainerElement *pFStackX_20;
  ForAnyElementType FStack_98;
  undefined8 uStack_90;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> TStack_88;
  FRHIBreadcrumbScope FStack_78;
  char cStack_68;
  char *pcStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  wchar_t *pwStack_48;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      uStack_58 = 0x62;
      pcStack_60 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
      ;
      uStack_50 = 0;
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
  pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_2);
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
    bVar4 = RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
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
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&FStack_78,(FRHIComputeCommandList *)param_2,pFVar9);
  cStack_68 = '\x01';
  TStack_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_88.ArrayNum = 0;
  TStack_88.ArrayMax = 0;
  TMapBase<unsigned_int,FStructuredBufferPoolItem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FStructuredBufferPoolItem_*,1>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>(param_1,&TStack_88);
  iVar3 = TStack_88.ArrayNum;
  uVar10 = (ulonglong)TStack_88.ArrayNum;
  pFStackX_20 = TStack_88.AllocatorInstance.Data + uVar10 * 4;
  FVar16.Data = TStack_88.AllocatorInstance.Data;
  do {
    pFVar1 = pFStackX_20;
    uVar15 = 0;
    if ((int)uVar10 != iVar3) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_10);
    }
    if (FVar16.Data == pFVar1) {
      if (TStack_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_88.AllocatorInstance.Data);
      }
      if (cStack_68 != '\0') {
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&FStack_78);
      }
      return;
    }
    FStack_98.Data = (FScriptContainerElement *)0x0;
    iVar14 = *(int *)FVar16.Data;
    uStack_90 = 0;
    if (*(int *)((longlong)param_1 + 0x48) != 0) {
      lVar11 = (longlong)param_1 + 0x38;
      if (*(longlong *)((longlong)param_1 + 0x40) != 0) {
        lVar11 = *(longlong *)((longlong)param_1 + 0x40);
      }
      iVar12 = *(int *)(lVar11 + ((longlong)*(int *)((longlong)param_1 + 0x48) - 1U &
                                 (longlong)iVar14) * 4);
      iVar7 = iVar12;
      if (iVar12 != -1) {
        do {
          iVar12 = *(int *)(*(longlong *)param_1 + 0x10 + (longlong)iVar7 * 0x18);
          if (*(int *)(*(longlong *)param_1 + (longlong)iVar7 * 0x18) == iVar14) break;
          iVar7 = iVar12;
        } while (iVar12 != -1);
      }
      if (iVar7 != -1) {
        while( true ) {
          pFVar1 = (FScriptContainerElement *)(*(longlong *)param_1 + ((longlong)iVar7 * 3 + 1) * 8)
          ;
          iVar7 = (int)uVar15;
          if ((FStack_98.Data <= pFVar1) &&
             (pFVar1 < FStack_98.Data + (longlong)uStack_90._4_4_ * 8)) {
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
            iVar7 = (int)uStack_90;
          }
          if (iVar7 == uStack_90._4_4_) {
            iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&FStack_98,(int *)((longlong)&uStack_90 + 4));
          }
          uVar5 = iVar7 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
          *(undefined8 *)(FStack_98.Data + (longlong)iVar7 * 8) = *(undefined8 *)pFVar1;
          if (iVar12 == -1) break;
          iVar7 = iVar12;
          while (iVar12 = *(int *)(*(longlong *)param_1 + 0x10 + (longlong)iVar7 * 0x18),
                *(int *)(*(longlong *)param_1 + (longlong)iVar7 * 0x18) != iVar14) {
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
    pFVar1 = FStack_98.Data + (longlong)iVar14 * 8;
    FVar13.Data = FStack_98.Data;
    while( true ) {
      if ((int)uVar15 != iVar14) {
        auStackX_18[0] = 0;
        `TCheckedPointerIterator<FStructuredBufferPoolItem_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_18);
        uVar15 = uStack_90 & 0xffffffff;
      }
      if (FVar13.Data == pFVar1) break;
      this = *(FStructuredBufferPoolItem **)FVar13.Data;
      if (this != (FStructuredBufferPoolItem *)0x0) {
        FStructuredBufferPoolItem::~FStructuredBufferPoolItem(this);
        ::operator_delete(this,0x28);
        uVar15 = uStack_90 & 0xffffffff;
      }
      FVar13.Data = FVar13.Data + 8;
    }
    if (FStack_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data);
    }
    uVar10 = TStack_88._8_8_ & 0xffffffff;
    FVar16.Data = FVar16.Data + 4;
  } while( true );
}

// Call @ 14ea450e0

TSharedPtr<FStructuredBufferPoolItem,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FExrImgMediaReaderGpu::ReadMip'::__l2::<lambda_1>,TSharedPtr<FStructuredBufferPoolItem,1>_>
::Call(TSharedPtr<FStructuredBufferPoolItem,1> *__return_storage_ptr__,void *param_1)

{
  (**(code **)(**(longlong **)param_1 + 0x38))
            (*(longlong **)param_1,__return_storage_ptr__,*(undefined4 *)((longlong)param_1 + 8));
  return __return_storage_ptr__;
}

// Call @ 14ea45110

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ea45130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FStructuredBufferPoolItem *this;
  
  this = *(FStructuredBufferPoolItem **)param_1;
  if (this != (FStructuredBufferPoolItem *)0x0) {
    FStructuredBufferPoolItem::~FStructuredBufferPoolItem(this);
    ::operator_delete(this,0x28);
    return;
  }
  return;
}

// Call @ 14ea45170

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

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
  FRHIResource *pFStackX_8;
  FRHIResource *pFStackX_10;
  FRHIResource *pFStackX_18;
  FRHIResource *pFStackX_20;
  FString FStack_128;
  char *pcStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  TGPUStat<TRHIGPUStatNameProvider_ExrImgMediaReaderGpu_AllocateBuffer> *pTStack_108;
  wchar_t *pwStack_100;
  FRHIBreadcrumbScope FStack_f8;
  char cStack_e8;
  FInitializer FStack_e0;
  FInitializer FStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  wchar_t *pwStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  wchar_t *pwStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ::FString::PrintfImpl(&FStack_128,L"ExrReaderGpu.AllocBuffer_RenderThread %d");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (FStack_128.Data.ArrayNum != 0) {
    FVar14.Data = FStack_128.Data.AllocatorInstance.Data;
  }
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar14.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
               ,0x2a6);
  }
  if (FStack_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_128.Data.AllocatorInstance.Data);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pcStack_118 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
    ;
    pTStack_108 = &GPUStat_ExrImgMediaReaderGpu_AllocateBuffer;
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
  pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_2);
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
     (bVar4 = RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar4)) {
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
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&FStack_f8,(FRHIComputeCommandList *)param_2,pFVar9);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x10);
  bVar13 = (byte)GNumExplicitGPUsForRendering;
  cStack_e8 = '\x01';
  EVar7 = RHIGetDefaultResourceState(StructuredBuffer|FastVRAM|ShaderResource|Dynamic,false);
  uStack_c0 = CONCAT44(4,uVar1);
  uStack_b8 = CONCAT44((1 << (bVar13 & 0x1f)) + -1,0x10502);
  uStack_a0 = (ulonglong)EVar7;
  uStack_98 = 0;
  pwStack_b0 = L"ExrReaderGpu.UploadBuffer";
  uStack_a8 = 0;
  uStack_90 = 0;
  TVar10 = FRHICommandListBase::CreateBuffer
                     ((FRHICommandListBase *)param_2,(FRHIBufferCreateDesc *)&pFStackX_8);
  if ((*(longlong *)param_1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar15 = *(FRHIBuffer **)param_1;
  if (pFVar15 != TVar10.Reference) {
    pFVar2 = (FRHIResource *)pFVar15->_padding_;
    pFVar15->_padding_ = (TVar10.Reference)->_padding_;
    (TVar10.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (pFStackX_8 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFStackX_8);
  }
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x10);
  if ((*(longlong *)param_1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar11 = **(undefined8 **)param_1;
  if (((((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) &&
       (param_2->field_0x64 != '\0')) &&
      ((GRHICommandList.bLatchedBypass == false || ((param_2->field_0x29b & 0x20) == 0)))) &&
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
  bVar13 = param_2->field_0x6a;
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
  bVar4 = param_2->field_0x6a == '\0';
  if (bVar4) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_2,Graphics);
  }
  uVar11 = (**(code **)(GDynamicRHI->_padding_ + 0x148))(GDynamicRHI,param_2,uVar11,0,uVar1,1);
  if (bVar4) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_2,None);
  }
  if ((*(longlong *)param_1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined8 *)(*(longlong *)param_1 + 8) = uVar11;
  if (bExrReaderUseUploadHeap == false) {
    FStack_d0._0_8_ = 0;
    FStack_d0._8_8_ = 0;
    if ((*(longlong *)param_1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer
              (&FStack_d0,(FRHIBuffer *)**(undefined8 **)param_1);
    if ((*(longlong *)param_1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar12 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)param_2,(FRHIBuffer *)&pFStackX_20,
                        (FInitializer *)**(undefined8 **)param_1);
    if ((*(longlong *)param_1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar16 = (FRHIShaderResourceView *)(*(longlong *)param_1 + 0x18);
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
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x10);
    bVar13 = (byte)GNumExplicitGPUsForRendering;
    EVar7 = RHIGetDefaultResourceState(StructuredBuffer|FastVRAM|ShaderResource,false);
    uStack_88 = CONCAT44(4,uVar1);
    uStack_80 = CONCAT44((1 << (bVar13 & 0x1f)) + -1,0x10500);
    uStack_68 = (ulonglong)EVar7;
    uStack_60 = 0;
    pwStack_78 = L"ExrReaderGpu.DestBuffer";
    uStack_70 = 0;
    uStack_58 = 0;
    TVar10 = FRHICommandListBase::CreateBuffer
                       ((FRHICommandListBase *)param_2,(FRHIBufferCreateDesc *)&pFStackX_10);
    if ((*(longlong *)param_1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar15 = (FRHIBuffer *)(*(longlong *)param_1 + 0x10);
    if (pFVar15 != TVar10.Reference) {
      pFVar2 = (FRHIResource *)pFVar15->_padding_;
      pFVar15->_padding_ = (TVar10.Reference)->_padding_;
      (TVar10.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    if (pFStackX_10 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFStackX_10);
    }
    FStack_e0._0_8_ = 0;
    FStack_e0._8_8_ = 0;
    if ((*(longlong *)param_1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer
              (&FStack_e0,*(FRHIBuffer **)(*(longlong *)param_1 + 0x10));
    if ((*(longlong *)param_1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar12 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)param_2,(FRHIBuffer *)&pFStackX_18,
                        *(FInitializer **)(*(longlong *)param_1 + 0x10));
    if ((*(longlong *)param_1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar16 = (FRHIShaderResourceView *)(*(longlong *)param_1 + 0x18);
    pFStackX_20 = pFStackX_18;
    if (pFVar16 != TVar12.Reference) {
      pFVar2 = *(FRHIResource **)pFVar16;
      *(undefined8 *)pFVar16 = *(undefined8 *)TVar12.Reference;
      *(undefined8 *)TVar12.Reference = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
        pFStackX_20 = pFStackX_18;
      }
    }
  }
  if (pFStackX_20 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFStackX_20);
  }
  if ((*(longlong *)param_1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x20) + 0x10))();
  if (cStack_e8 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&FStack_f8);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14ea45180

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FExrImgMediaReaderGpu::ReadMip'::__l26::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  uint uVar2;
  FRHIBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRHIBreadcrumbAllocator *this;
  FRHIBreadcrumbNode *pFVar6;
  ulong64 *puVar7;
  ulong64 *puVar8;
  undefined1 auStackX_8 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,int>_const_*,std::tuple<int_const_&>_>
  tStack_78;
  ulong64 uStack_68;
  ulong64 uStack_60;
  FRHIBreadcrumbScope FStack_58;
  char cStack_48;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Desc._padding_._0_4_ = 0xb7;
      uStack_30 = 0x54dc3bf0;
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
  tStack_78._Myfirst._Val = &::Desc;
  tStack_78._padding_ = (longlong)param_1 + 0x30;
  this = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_2);
  pFVar6 = FRHIBreadcrumbAllocator::
           AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,int>,int_const_&>
                     (this,&tStack_78);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&FStack_58,(FRHIComputeCommandList *)param_2,pFVar6);
  iVar1 = *(int *)((longlong)param_1 + 0x28);
  cStack_48 = '\x01';
  if (iVar1 == 0) {
    if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
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
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x10) + 0xd8);
    if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
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
    pFVar3 = (FRHIBuffer *)**(undefined8 **)((longlong)param_1 + 0x10);
    if (*(undefined8 **)((longlong)param_1 + 0x10) == (undefined8 *)0x0) {
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
              ((FRHICommandList *)param_2,
               *(FRHIBuffer **)(*(longlong *)((longlong)param_1 + 0x10) + 0x10),0,pFVar3,0,
               (ulonglong)uVar2);
  }
  else {
    puVar8 = *(ulong64 **)((longlong)param_1 + 0x20);
    puVar7 = puVar8 + (longlong)iVar1 * 2;
    while( true ) {
      if (*(int *)((longlong)param_1 + 0x28) != iVar1) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TIntPoint<__int64>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
      }
      if (puVar8 == puVar7) break;
      uStack_68 = *puVar8;
      uStack_60 = puVar8[1];
      if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
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
      pFVar3 = (FRHIBuffer *)**(undefined8 **)((longlong)param_1 + 0x10);
      if (*(undefined8 **)((longlong)param_1 + 0x10) == (undefined8 *)0x0) {
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
                ((FRHICommandList *)param_2,
                 *(FRHIBuffer **)(*(longlong *)((longlong)param_1 + 0x10) + 0x10),uStack_68,pFVar3,
                 uStack_68,uStack_60);
      puVar8 = puVar8 + 2;
    }
  }
  if (cStack_48 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&FStack_58);
  }
  return;
}

// Call @ 14ea45190

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FImgMediaPlayer::Open'::__l2::<lambda_5>,void>::
Call(void *param_1)

{
  int iVar1;
  FImgMediaLoader *this;
  FScriptContainerElement *_Src;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FString FStack_48;
  TStringView<wchar_t> TStack_38;
  undefined8 uStack_28;
  int iStack_20;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea3f68e;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(FImgMediaLoader **)((longlong)param_1 + 8);
    if (this != (FImgMediaLoader *)0x0) {
      TStack_38.DataPtr = *(wchar_t **)((longlong)param_1 + 0x28);
      TStack_38.Size = *(int *)((longlong)param_1 + 0x30) + -1;
      uStack_28 = *(undefined8 *)((longlong)param_1 + 0x18);
      if (*(int *)((longlong)param_1 + 0x30) == 0) {
        TStack_38.Size = 0;
      }
      iStack_20 = *(int *)((longlong)param_1 + 0x20) + -1;
      if (*(int *)((longlong)param_1 + 0x20) == 0) {
        iStack_20 = 0;
      }
      FPaths::CombineInternal(&FStack_48,&TStack_38,2);
      bVar5 = FPaths::DirectoryExists(&FStack_48);
      if ((!bVar5) && (&FStack_48 != (FString *)((longlong)param_1 + 0x28))) {
        iVar1 = *(int *)((longlong)param_1 + 0x30);
        _Src = (((FString *)((longlong)param_1 + 0x28))->Data).AllocatorInstance.Data;
        FStack_48.Data.ArrayNum = iVar1;
        if ((iVar1 == 0) && (FStack_48.Data.ArrayMax == 0)) {
          FStack_48.Data.ArrayMax = 0;
        }
        else {
          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,FStack_48.Data.ArrayMax,(ForAnyElementType *)&FStack_48,iVar1,
                     &FStack_48.Data.ArrayMax);
          if (iVar1 != 0) {
            memcpy(FStack_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      FImgMediaLoader::Initialize
                (this,&FStack_48,param_1,*(bool *)((longlong)param_1 + 0x38),
                 *(bool *)((longlong)param_1 + 0x39));
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14ea3f68e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

