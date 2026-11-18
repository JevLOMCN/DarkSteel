// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 10

// ~FBufferCaptureFrame @ 14d78c390

void __thiscall
UE::MediaCaptureData::FBufferCaptureFrame::~FBufferCaptureFrame(FBufferCaptureFrame *this)

{
  TRefCountPtr<FRHIStagingBuffer> *pTVar1;
  int *piVar2;
  int iVar3;
  FRHIGPUBufferReadback *pFVar4;
  FRHIStagingBuffer *this_00;
  longlong *plVar5;
  longlong lVar6;
  FRHIGPUBufferReadback *pFVar7;
  TRefCountPtr<FRHIStagingBuffer> *pTVar8;
  longlong lVar9;
  
  lVar9 = 8;
  pTVar8 = (TRefCountPtr<FRHIStagingBuffer> *)&this->LastCopyGPUMask;
  lVar6 = 8;
  do {
    pTVar1 = pTVar8 + -1;
    pTVar8 = pTVar8 + -1;
    lVar6 = lVar6 + -1;
    if (pTVar1->Reference != (FRHIStagingBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pTVar1->Reference);
    }
  } while (lVar6 != 0);
  pFVar4 = (this->ReadbackBuffer).Ptr;
  if (pFVar4 != (FRHIGPUBufferReadback *)0x0) {
    pFVar7 = pFVar4 + 1;
    do {
      this_00 = pFVar7[-1].DestinationStagingBuffers[7].Reference;
      pFVar7 = (FRHIGPUBufferReadback *)(pFVar7[-1].DestinationStagingBuffers + 7);
      lVar9 = lVar9 + -1;
      if (this_00 != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    } while (lVar9 != 0);
    pFVar4->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar4->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4->_padding_);
    }
    ::operator_delete(pFVar4,0x58);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  FCaptureFrame::~FCaptureFrame((FCaptureFrame *)this);
  return;
}

// operator() @ 14d78fa60

/* WARNING: Removing unreachable block (ram,0x00014d78fafb) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  FRHIGPUMask FVar3;
  FRHIResource *pFVar4;
  FRDGResource *this_00;
  undefined8 uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  IRHIComputeContext *pIVar10;
  undefined8 *puVar11;
  FRHIResource **ppFVar12;
  FRHIGPUMask FVar13;
  uint uVar14;
  FRHIResource *local_48 [2];
  
  uVar2 = *(undefined4 *)&param_1->field_0x29c;
  if ((*(longlong *)this == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(undefined4 *)(*(longlong *)this + 0x160) = uVar2;
  if ((*(longlong *)this == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar14 = *(uint *)(*(longlong *)this + 0x160);
  uVar6 = 0;
  bVar8 = uVar14 != 0;
  if (bVar8) {
    for (; (uVar14 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  do {
    if (!bVar8) {
      return;
    }
    FVar3.GPUMask = *(uint *)&param_1->field_0x29c;
    FVar13.GPUMask = 1 << ((byte)uVar6 & 0x1f);
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar13);
    if ((*(longlong *)this == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar1 = (ulonglong)uVar6 * 8 + 0x120;
    if (*(longlong *)(lVar1 + *(longlong *)this) == 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,local_48);
      if ((*(longlong *)this == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      ppFVar12 = (FRHIResource **)(*(longlong *)this + lVar1);
      if (ppFVar12 != local_48) {
        pFVar4 = *ppFVar12;
        *ppFVar12 = local_48[0];
        local_48[0] = (FRHIResource *)0x0;
        if (pFVar4 == (FRHIResource *)0x0) goto LAB_14d78fbf1;
        FRHIResource::Release(pFVar4);
      }
      if (local_48[0] != (FRHIResource *)0x0) {
        FRHIResource::Release(local_48[0]);
      }
    }
LAB_14d78fbf1:
    if ((*(longlong *)this == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar9 = (**(code **)(**(longlong **)this + 0x68))();
    uVar2 = *(undefined4 *)(lVar9 + 0xd8);
    if ((*(longlong *)this == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = *(FRDGResource **)((longlong)this + 0x10);
    uVar5 = *(undefined8 *)(lVar1 + *(longlong *)this);
    FRDGResource::ValidateRHIAccess(this_00);
    pFVar4 = this_00->ResourceRHI;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar11;
      *(undefined8 **)&param_1->field_0x30 = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &___7FRHICommandCopyToStagingBuffer__6B_;
      puVar11[2] = pFVar4;
      puVar11[3] = uVar5;
      *(undefined4 *)(puVar11 + 4) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x24) = uVar2;
    }
    else {
      pIVar10 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar10->_padding_ + 0xd8))(pIVar10,pFVar4,uVar5,0,uVar2);
    }
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar3);
    uVar14 = uVar14 & ~FVar13.GPUMask;
    uVar6 = 0;
    bVar8 = uVar14 != 0;
    if (bVar8) {
      for (; (uVar14 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
  } while( true );
}

// EnqueueCopy @ 14d7a3f10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy
          (FBufferCaptureFrame *this,FRDGBuilder *param_1,FRDGViewableResource *param_2,bool param_3
          )

{
  int *piVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  int iVar5;
  atomic<int> aVar6;
  FBufferCaptureFrame *pFVar7;
  FBufferCaptureFrame *pFVar8;
  FRDGEventName *pFVar9;
  longlong lVar10;
  FBufferCaptureFrame *pFVar11;
  FBufferCaptureFrame *pFVar12;
  FBufferCaptureFrame *pFVar13;
  FBufferCaptureFrame *local_78;
  FRDGViewableResource *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  <lambda_1> local_60;
  FRDGEventName local_48;
  
  pFVar13 = (FBufferCaptureFrame *)0x0;
  if (!param_3) {
    lVar10 = (**(code **)(this->_padding_ + 0x68))();
    AddEnqueueCopyPass(param_1,(this->ReadbackBuffer).Ptr,(FRDGBuffer *)param_2,
                       *(uint *)(lVar10 + 0xd8));
    return;
  }
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  if (pFVar7 == (FBufferCaptureFrame *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    pFVar7 = pFVar13;
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TObject_VFEnqueueCopyBufferPass_FBufferCaptureFrame_MediaCaptureData_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)&pFVar7->_padding_ = 0x80;
  }
  local_78 = pFVar7;
  if ((((FBufferCaptureFrame **)param_1->_padding_ <= &local_78) &&
      (&local_78 <
       (FBufferCaptureFrame **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar5 + 1;
  uStack_68 = 0x80;
  *(FBufferCaptureFrame **)(param_1->_padding_ + (longlong)iVar5 * 8) = local_78;
  pFVar7->_padding_ = (longlong)param_2;
  pFVar7->_padding_ = CONCAT44(uStack_64,0x80);
  pFVar8 = (FBufferCaptureFrame *)this->_padding_;
  pFVar11 = pFVar13;
  pFVar12 = pFVar8;
  if (pFVar8 != (FBufferCaptureFrame *)0x0) {
    aVar3 = *(atomic<int> *)&pFVar8->_padding_;
    do {
      pFVar12 = pFVar13;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d7a4098;
      LOCK();
      aVar6 = *(atomic<int> *)&pFVar8->_padding_;
      bVar4 = aVar3 == aVar6;
      if (bVar4) {
        *(atomic<int> *)&pFVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar4);
    pFVar11 = (FBufferCaptureFrame *)this->_padding_;
    pFVar12 = pFVar8;
  }
LAB_14d7a4098:
  pFVar8 = (FBufferCaptureFrame *)&pFVar11->_padding_;
  if (pFVar11 == (FBufferCaptureFrame *)0x0) {
    pFVar8 = pFVar13;
  }
  local_70 = param_2;
  if ((pFVar8 != (FBufferCaptureFrame *)&this->_padding_) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pFVar11 == (FBufferCaptureFrame *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar12 != (FBufferCaptureFrame *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar12->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  if (pFVar12 != (FBufferCaptureFrame *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar12->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
    UNLOCK();
  }
  local_60.CaptureFramePtr.Object = pFVar11;
  local_60.CaptureFramePtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar12;
  local_60.ResourceToReadback = param_2;
  pFVar9 = FRDGEventName::FRDGEventName(&local_48,L"EnqueueCopy(%s)");
  FRDGBuilder::
  AddPass<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,_UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy_::__l5::<lambda_1>_>
            (param_1,pFVar9,(FEnqueueCopyBufferPass *)&pFVar7->_padding_,Readback,&local_60);
  if (local_48.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FormattedEventName.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.CaptureFramePtr.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return;
}

// IsBufferResource @ 14d7b15b0

bool __thiscall
UE::MediaCaptureData::FBufferCaptureFrame::IsBufferResource(FBufferCaptureFrame *this)

{
  return true;
}

// IsReadbackReady @ 14d7b1770

bool __thiscall
UE::MediaCaptureData::FBufferCaptureFrame::IsReadbackReady
          (FBufferCaptureFrame *this,FRHIGPUMask param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = (longlong *)((this->ReadbackBuffer).Ptr)->_padding_;
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x18))();
    if (cVar2 == '\0') {
      return false;
    }
  }
  return true;
}

// IsTextureResource @ 14d7b1960

bool __thiscall
UE::MediaCaptureData::FBufferCaptureFrame::IsTextureResource(FBufferCaptureFrame *this)

{
  return false;
}

// Lock @ 14d7b1e40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MediaCaptureData::FBufferCaptureFrame::Lock
          (FBufferCaptureFrame *this,FRHICommandListImmediate *param_1,int *param_2)

{
  FRHIGPUBufferReadback *pFVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  
  pFVar1 = (this->ReadbackBuffer).Ptr;
  lVar3 = pFVar1->_padding_;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
      cVar2 = (**(code **)(*(longlong *)pFVar1->_padding_ + 0x20))();
      if (cVar2 != '\0') goto LAB_14d7b1ea2;
    }
    if (5 < (byte)LogMediaIOCore._0_1_) {
      Logging::Private::BasicLog<6>
                (&`public:_virtual_void*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::Lock(FRHICommandListImmediate&___ptr64,int&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  }
LAB_14d7b1ea2:
  lVar3 = (**(code **)(this->_padding_ + 0x68))(this);
  *param_2 = *(int *)(lVar3 + 0xdc);
  pFVar1 = (this->ReadbackBuffer).Ptr;
  lVar3 = (**(code **)(this->_padding_ + 0x68))(this);
  pvVar4 = FRHIGPUBufferReadback::Lock(pFVar1,*(uint *)(lVar3 + 0xd8));
  return pvVar4;
}

// Lock_Unsafe @ 14d7b1fc0

void * __thiscall
UE::MediaCaptureData::FBufferCaptureFrame::Lock_Unsafe(FBufferCaptureFrame *this,int *param_1)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  bool bVar6;
  
  pcVar1 = *(code **)(GDynamicRHI->_padding_ + 0xe8);
  lVar3 = (**(code **)(this->_padding_ + 0x68))();
  uVar2 = 0;
  bVar6 = (this->LastCopyGPUMask).GPUMask != 0;
  if (bVar6) {
    for (; ((this->LastCopyGPUMask).GPUMask >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  uVar5 = 0x20;
  if (bVar6) {
    uVar5 = (ulonglong)uVar2;
  }
  pvVar4 = (void *)(*pcVar1)(GDynamicRHI,this->DestinationStagingBuffers[uVar5].Reference,0,0,
                             *(undefined4 *)(lVar3 + 0xd8));
  lVar3 = (**(code **)(this->_padding_ + 0x68))(this);
  *param_1 = *(int *)(lVar3 + 0xdc);
  return pvVar4;
}

// Unlock @ 14d7c20c0

void __thiscall UE::MediaCaptureData::FBufferCaptureFrame::Unlock(FBufferCaptureFrame *this)

{
  FRHIGPUBufferReadback::Unlock((this->ReadbackBuffer).Ptr);
  return;
}

// Unlock_Unsafe @ 14d7c2120

void __thiscall UE::MediaCaptureData::FBufferCaptureFrame::Unlock_Unsafe(FBufferCaptureFrame *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = 0;
  bVar3 = (this->LastCopyGPUMask).GPUMask != 0;
  if (bVar3) {
    for (; ((this->LastCopyGPUMask).GPUMask >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  uVar2 = 0x20;
  if (bVar3) {
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d7c2146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0xf0))
            (GDynamicRHI,this->DestinationStagingBuffers[uVar2].Reference);
  return;
}

