// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 9

// FCaptureFrame @ 14d789910

FCaptureFrame * __thiscall
UE::MediaCaptureData::FCaptureFrame::FCaptureFrame(FCaptureFrame *this,int param_1)

{
  (this->CaptureBaseData).SourceFrameTimecodeFramerate.Numerator = 60000;
  this->_padding_ = (longlong)&___7FCaptureFrame_MediaCaptureData_UE__6B_;
  (this->CaptureBaseData).SourceFrameTimecode.Hours = 0;
  (this->CaptureBaseData).SourceFrameTimecode.Minutes = 0;
  (this->CaptureBaseData).SourceFrameTimecode.Seconds = 0;
  (this->CaptureBaseData).SourceFrameTimecode.Frames = 0;
  (this->CaptureBaseData).SourceFrameTimecode.Subframe = 0.0;
  (this->CaptureBaseData).SourceFrameTimecode.bDropFrameFormat = false;
  (this->CaptureBaseData).SourceFrameNumberRenderThread = 0;
  (this->CaptureBaseData).SourceFrameNumber = 0;
  this->bReadbackRequested = (atomic<bool>)0x0;
  this->bDoingGPUCopy = (atomic<bool>)0x0;
  (this->UserData).Object = (FMediaCaptureUserData *)0x0;
  (this->UserData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->RenderPassResources).LastRenderPassName.ComparisonIndex = 0;
  (this->RenderPassResources).LastRenderPassName.Number = 0;
  *(undefined8 *)&(this->RenderPassResources).PassTextureOutputs = 0;
  *(undefined8 *)&(this->RenderPassResources).PassTextureOutputs.field_0x8 = 0;
  *(undefined8 *)&(this->RenderPassResources).PassTextureOutputs.field_0x20 = 0;
  (this->CaptureBaseData).SourceFrameTimecodeFramerate.Denominator = 1;
  this->bMediaCaptureActive = (atomic<bool>)0x1;
  this->FrameId = param_1;
  *(undefined4 *)&(this->RenderPassResources).PassTextureOutputs.field_0x28 = 0;
  *(undefined4 *)&(this->RenderPassResources).PassTextureOutputs.field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderPassResources).PassTextureOutputs.field_0x34 = 0;
  *(undefined4 *)&(this->RenderPassResources).PassTextureOutputs.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RenderPassResources).PassTextureOutputs.field_0x40 = 0;
  *(undefined4 *)&(this->RenderPassResources).PassTextureOutputs.field_0x48 = 0;
  *(undefined8 *)&(this->RenderPassResources).PassBufferOutputs = 0;
  *(undefined8 *)&(this->RenderPassResources).PassBufferOutputs.field_0x8 = 0;
  *(undefined8 *)&(this->RenderPassResources).PassBufferOutputs.field_0x20 = 0;
  *(undefined4 *)&(this->RenderPassResources).PassBufferOutputs.field_0x28 = 0;
  *(undefined4 *)&(this->RenderPassResources).PassBufferOutputs.field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderPassResources).PassBufferOutputs.field_0x34 = 0;
  *(undefined4 *)&(this->RenderPassResources).PassBufferOutputs.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RenderPassResources).PassBufferOutputs.field_0x40 = 0;
  *(undefined4 *)&(this->RenderPassResources).PassBufferOutputs.field_0x48 = 0;
  this->bPrerollFrame = true;
  return this;
}

// ~FCaptureFrame @ 14d78c480

void __thiscall UE::MediaCaptureData::FCaptureFrame::~FCaptureFrame(FCaptureFrame *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->RenderPassResources).PassBufferOutputs.field_0x48 = 0;
  pvVar1 = *(void **)&(this->RenderPassResources).PassBufferOutputs.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RenderPassResources).PassBufferOutputs);
  *(undefined4 *)&(this->RenderPassResources).PassTextureOutputs.field_0x48 = 0;
  pvVar1 = *(void **)&(this->RenderPassResources).PassTextureOutputs.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RenderPassResources).PassTextureOutputs);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserData).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FFrame_MediaCaptureData_UE__6B_;
  return;
}

// GetBufferResource @ 14d7a93b0

FRHIBuffer * __thiscall UE::MediaCaptureData::FCaptureFrame::GetBufferResource(FCaptureFrame *this)

{
  int *piVar1;
  int iVar2;
  FRHIBuffer *pFVar3;
  char cVar4;
  TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_> *pTVar5;
  undefined8 *puVar6;
  
  cVar4 = (**(code **)(this->_padding_ + 0x28))();
  if (cVar4 != '\0') {
    pTVar5 = TSet<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<FRDGPooledBuffer>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<FRDGPooledBuffer>,0>,FDefaultSetAllocator>
                     *)&(this->RenderPassResources).PassBufferOutputs,
                    (this->RenderPassResources).LastRenderPassName);
    if (pTVar5 == (TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_> *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = *(undefined8 **)&pTVar5->field_0x8;
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
      }
    }
    pFVar3 = (FRHIBuffer *)puVar6[5];
    piVar1 = (int *)(puVar6 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (piVar1 == (int *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    return pFVar3;
  }
  return (FRHIBuffer *)0x0;
}

// GetId @ 14d7aaef0

int __thiscall UE::MediaCaptureData::FCaptureFrame::GetId(FCaptureFrame *this)

{
  return this->FrameId;
}

// GetTextureResource @ 14d7ae5a0

FRHITexture * __thiscall
UE::MediaCaptureData::FCaptureFrame::GetTextureResource(FCaptureFrame *this)

{
  FRHITexture *pFVar1;
  char cVar2;
  TTuple<FName,TRefCountPtr<IPooledRenderTarget>_> *pTVar3;
  longlong *plVar4;
  
  cVar2 = (**(code **)(this->_padding_ + 0x20))();
  if (cVar2 != '\0') {
    pTVar3 = TSet<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<IPooledRenderTarget>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<IPooledRenderTarget>,0>,FDefaultSetAllocator>
                     *)&(this->RenderPassResources).PassTextureOutputs,
                    (this->RenderPassResources).LastRenderPassName);
    if (pTVar3 == (TTuple<FName,TRefCountPtr<IPooledRenderTarget>_> *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&pTVar3->field_0x8;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4);
      }
    }
    pFVar1 = (FRHITexture *)plVar4[1];
    (**(code **)(*plVar4 + 0x38))(plVar4);
    return pFVar1;
  }
  return (FRHITexture *)0x0;
}

// HasValidResource @ 14d7af040

bool __thiscall UE::MediaCaptureData::FCaptureFrame::HasValidResource(FCaptureFrame *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x60))();
  if (lVar1 == 0) {
    lVar1 = (**(code **)(this->_padding_ + 0x68))(this);
    if (lVar1 == 0) {
      return false;
    }
  }
  return true;
}

// IsPending @ 14d7b1750

bool __thiscall UE::MediaCaptureData::FCaptureFrame::IsPending(FCaptureFrame *this)

{
  if ((this->bReadbackRequested == (atomic<bool>)0x0) && (this->bDoingGPUCopy == (atomic<bool>)0x0))
  {
    return false;
  }
  return true;
}

// Lock_Unsafe @ 14d7b2050

void * __thiscall UE::MediaCaptureData::FCaptureFrame::Lock_Unsafe(FCaptureFrame *this,int *param_1)

{
  return (void *)0x0;
}

// Unlock_Unsafe @ 14d7c2160

void __thiscall UE::MediaCaptureData::FCaptureFrame::Unlock_Unsafe(FCaptureFrame *this)

{
  return;
}

