// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 8

// ~FVideoEncoderInput @ 148d01920

void __thiscall AVEncoder::FVideoEncoderInput::~FVideoEncoderInput(FVideoEncoderInput *this)

{
  return;
}

// CreateDummy @ 148d071b0

TSharedPtr<AVEncoder::FVideoEncoderInput,1> * __cdecl
AVEncoder::FVideoEncoderInput::CreateDummy
          (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *__return_storage_ptr__,bool param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FVideoEncoderInputImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> *pTVar5;
  TSharedPtr<AVEncoder::FVideoEncoderInput,1> *pTVar6;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> local_18;
  
  pTVar5 = MakeShared<AVEncoder::FVideoEncoderInputImpl,1>(&local_18);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FVideoEncoderInputImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(bool *)((longlong)&pFVar2->_padding_ + 4) = param_1;
  *(undefined4 *)&pFVar2->_padding_ = 0;
  __return_storage_ptr__->Object = (FVideoEncoderInput *)pFVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// CreateForCUDA @ 148d07300

TSharedPtr<AVEncoder::FVideoEncoderInput,1> * __cdecl
AVEncoder::FVideoEncoderInput::CreateForCUDA
          (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *__return_storage_ptr__,void *param_1,
          bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FVideoEncoderInputImpl *this;
  code *pcVar2;
  bool bVar3;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> *pTVar4;
  TSharedPtr<AVEncoder::FVideoEncoderInput,1> *pTVar5;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> local_18;
  
  pTVar4 = MakeShared<AVEncoder::FVideoEncoderInputImpl,1>(&local_18);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  this = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (this == (FVideoEncoderInputImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(bool *)((longlong)&this->_padding_ + 4) = param_2;
  (this->FrameInfoCUDA).EncoderContextCUDA = param_1;
  *(undefined4 *)&this->_padding_ = 4;
  FVideoEncoderInputImpl::CollectAvailableEncoders(this);
  __return_storage_ptr__->Object = (FVideoEncoderInput *)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// CreateForD3D11 @ 148d073d0

TSharedPtr<AVEncoder::FVideoEncoderInput,1> * __cdecl
AVEncoder::FVideoEncoderInput::CreateForD3D11
          (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *__return_storage_ptr__,void *param_1,
          bool param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> *pTVar3;
  TSharedPtr<AVEncoder::FVideoEncoderInput,1> *pTVar4;
  FSharedReferencer<1> FVar5;
  FVideoEncoderInputImpl *this;
  FSharedReferencer<1> local_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> local_28;
  
  pTVar3 = MakeShared<AVEncoder::FVideoEncoderInputImpl,1>(&local_28);
  FVar5.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
  this = pTVar3->Object;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50.ReferenceController = FVar5.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (this == (FVideoEncoderInputImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  *(bool *)((longlong)&this->_padding_ + 4) = param_2;
  if (param_3) {
    bVar2 = FVideoEncoderInputImpl::SetupForD3D11Shared(this,param_1);
    if (bVar2) goto LAB_148d074d5;
    local_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_40);
    FVar5.ReferenceController = local_40.ReferenceController;
  }
  else {
    bVar2 = FVideoEncoderInputImpl::SetupForD3D11(this,param_1);
    if (bVar2) goto LAB_148d074d5;
    local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_30);
    FVar5.ReferenceController = local_30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  this = (FVideoEncoderInputImpl *)0x0;
  FVar5.ReferenceController = local_50.ReferenceController;
LAB_148d074d5:
  __return_storage_ptr__->Object = (FVideoEncoderInput *)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return __return_storage_ptr__;
}

// CreateForD3D12 @ 148d07510

TSharedPtr<AVEncoder::FVideoEncoderInput,1> * __cdecl
AVEncoder::FVideoEncoderInput::CreateForD3D12
          (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *__return_storage_ptr__,void *param_1,
          bool param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> *pTVar3;
  TSharedPtr<AVEncoder::FVideoEncoderInput,1> *pTVar4;
  FSharedReferencer<1> FVar5;
  FVideoEncoderInputImpl *this;
  FSharedReferencer<1> local_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> local_28;
  
  pTVar3 = MakeShared<AVEncoder::FVideoEncoderInputImpl,1>(&local_28);
  FVar5.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
  this = pTVar3->Object;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50.ReferenceController = FVar5.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (this == (FVideoEncoderInputImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  *(bool *)((longlong)&this->_padding_ + 4) = param_2;
  if (param_3) {
    bVar2 = FVideoEncoderInputImpl::SetupForD3D12Shared(this,param_1);
    if (bVar2) goto LAB_148d07615;
    local_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_40);
    FVar5.ReferenceController = local_40.ReferenceController;
  }
  else {
    bVar2 = FVideoEncoderInputImpl::SetupForD3D12(this,param_1);
    if (bVar2) goto LAB_148d07615;
    local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_30);
    FVar5.ReferenceController = local_30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  this = (FVideoEncoderInputImpl *)0x0;
  FVar5.ReferenceController = local_50.ReferenceController;
LAB_148d07615:
  __return_storage_ptr__->Object = (FVideoEncoderInput *)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return __return_storage_ptr__;
}

// CreateForVulkan @ 148d07650

TSharedPtr<AVEncoder::FVideoEncoderInput,1> * __cdecl
AVEncoder::FVideoEncoderInput::CreateForVulkan
          (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *__return_storage_ptr__,void *param_1,
          bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FVideoEncoderInputImpl *this;
  VkDevice_T *pVVar2;
  VkPhysicalDevice_T *pVVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> *pTVar6;
  TSharedPtr<AVEncoder::FVideoEncoderInput,1> *pTVar7;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> local_18;
  
  pTVar6 = MakeShared<AVEncoder::FVideoEncoderInputImpl,1>(&local_18);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  this = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (this == (FVideoEncoderInputImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  *(bool *)((longlong)&this->_padding_ + 4) = param_2;
  pVVar2 = *(VkDevice_T **)((longlong)param_1 + 0x10);
  pVVar3 = *(VkPhysicalDevice_T **)((longlong)param_1 + 8);
  (this->FrameInfoVulkan).VulkanInstance = *(VkInstance_T **)param_1;
  (this->FrameInfoVulkan).VulkanPhysicalDevice = pVVar3;
  (this->FrameInfoVulkan).VulkanDevice = pVVar2;
  *(undefined4 *)&this->_padding_ = 5;
  FVideoEncoderInputImpl::CollectAvailableEncoders(this);
  __return_storage_ptr__->Object = (FVideoEncoderInput *)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// CreateForYUV420P @ 148d07730

TSharedPtr<AVEncoder::FVideoEncoderInput,1> * __cdecl
AVEncoder::FVideoEncoderInput::CreateForYUV420P
          (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *__return_storage_ptr__,uint param_1,
          uint param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FVideoEncoderInputImpl *this;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> *pTVar5;
  TSharedPtr<AVEncoder::FVideoEncoderInput,1> *pTVar6;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> local_18;
  
  pTVar5 = MakeShared<AVEncoder::FVideoEncoderInputImpl,1>(&local_18);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (this == (FVideoEncoderInputImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  *(bool *)((longlong)&this->_padding_ + 4) = param_3;
  uVar4 = param_1 + 1 >> 1;
  (this->FrameInfoYUV420P).StrideU = uVar4;
  (this->FrameInfoYUV420P).StrideV = uVar4;
  *(undefined4 *)&this->_padding_ = 1;
  (this->FrameInfoYUV420P).StrideY = param_1;
  FVideoEncoderInputImpl::CollectAvailableEncoders(this);
  __return_storage_ptr__->Object = (FVideoEncoderInput *)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// SetMaxNumBuffers @ 148d12440

void __thiscall
AVEncoder::FVideoEncoderInput::SetMaxNumBuffers(FVideoEncoderInput *this,uint param_1)

{
  this->MaxNumBuffers = param_1;
  return;
}

