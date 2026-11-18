// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateNullRenderer
// Functions: 29

// FSlateNullRenderer @ 146c85560

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateNullRenderer * __thiscall
FSlateNullRenderer::FSlateNullRenderer
          (FSlateNullRenderer *this,TSharedRef<FSlateFontServices,1> *param_1,
          TSharedRef<FSlateShaderResourceManager,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateDrawBuffer *this_00;
  FSlateDrawBuffer *pFVar2;
  
  FSlateRenderer::FSlateRenderer((FSlateRenderer *)this,param_1);
  this->_padding_ = (longlong)&___7FSlateNullRenderer__6B_;
  (this->ResourceManager).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ResourceManager).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0x68);
  pFVar2 = (FSlateDrawBuffer *)0x0;
  if (this_00 != (FSlateDrawBuffer *)0x0) {
    pFVar2 = FSlateDrawBuffer::FSlateDrawBuffer(this_00);
  }
  (this->DrawBuffer).Ptr = pFVar2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ResourceCriticalSection,4000);
  return this;
}

// AcquireDrawBuffer @ 146c85750

FSlateDrawBuffer * __thiscall FSlateNullRenderer::AcquireDrawBuffer(FSlateNullRenderer *this)

{
  undefined1 local_res8 [32];
  
  if (((this->DrawBuffer).Ptr)->bIsLocked != (atomic<bool>)0x0) {
    `FSlateNullRenderer::AcquireDrawBuffer'::__l2::<lambda_1>::operator()(local_res8);
  }
  FSlateDrawBuffer::Lock((this->DrawBuffer).Ptr);
  FSlateDrawBuffer::ClearBuffer((this->DrawBuffer).Ptr);
  return (this->DrawBuffer).Ptr;
}

// ClearScenes @ 146c857a0

void __thiscall FSlateNullRenderer::ClearScenes(FSlateNullRenderer *this)

{
  return;
}

// CreateSharedHandleTexture @ 146c857b0

FSlateUpdatableTexture * __thiscall
FSlateNullRenderer::CreateSharedHandleTexture(FSlateNullRenderer *this,void *param_1)

{
  return (FSlateUpdatableTexture *)0x0;
}

// CreateUpdatableTexture @ 146c857c0

FSlateUpdatableTexture * __thiscall
FSlateNullRenderer::CreateUpdatableTexture(FSlateNullRenderer *this,uint param_1,uint param_2)

{
  return (FSlateUpdatableTexture *)0x0;
}

// CreateViewport @ 146c857d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNullRenderer::CreateViewport(FSlateNullRenderer *this,TSharedRef<SWindow,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Destroy @ 146c857e0

void __thiscall FSlateNullRenderer::Destroy(FSlateNullRenderer *this)

{
  FSlateDrawBuffer *pFVar1;
  
  pFVar1 = (this->DrawBuffer).Ptr;
  if (pFVar1 != (FSlateDrawBuffer *)0x0) {
    (this->DrawBuffer).Ptr = (FSlateDrawBuffer *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000146c85802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DrawWindows @ 146c85810

void __thiscall FSlateNullRenderer::DrawWindows(FSlateNullRenderer *this,FSlateDrawBuffer *param_1)

{
  return;
}

// GenerateDynamicImageResource @ 146c85820

TIntPoint<int> __thiscall
FSlateNullRenderer::GenerateDynamicImageResource(FSlateNullRenderer *this,FName param_1)

{
  *(undefined8 *)param_1 = 0;
  return (TIntPoint<int>)param_1;
}

// GenerateDynamicImageResource @ 146c85830

bool __thiscall
FSlateNullRenderer::GenerateDynamicImageResource
          (FSlateNullRenderer *this,FName param_1,uint param_2,uint param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  return false;
}

// GetCurrentSceneIndex @ 146c85840

int __thiscall FSlateNullRenderer::GetCurrentSceneIndex(FSlateNullRenderer *this)

{
  return -1;
}

// GetResourceCriticalSection @ 146c85850

FWindowsRecursiveMutex * __thiscall
FSlateNullRenderer::GetResourceCriticalSection(FSlateNullRenderer *this)

{
  return &this->ResourceCriticalSection;
}

// GetResourceHandle @ 146c85860

FSlateResourceHandle * __thiscall
FSlateNullRenderer::GetResourceHandle
          (FSlateNullRenderer *this,FSlateResourceHandle *__return_storage_ptr__,
          FSlateBrush *param_1,TVector2<float> param_2,float param_3)

{
  FSlateShaderResourceManager *pFVar1;
  undefined8 *puVar2;
  FSlateResourceHandle *pFVar3;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  FSlateResourceHandle local_18;
  
  pFVar1 = (this->ResourceManager).Object;
  if (pFVar1 != (FSlateShaderResourceManager *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,local_28);
    (__return_storage_ptr__->Data).Object = (FSlateSharedHandleData *)*puVar2;
    (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)puVar2[1];
    puVar2[1] = 0;
    *puVar2 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    return __return_storage_ptr__;
  }
  pFVar3 = FSlateResourceHandle::FSlateResourceHandle(&local_18);
  (__return_storage_ptr__->Data).Object = (pFVar3->Data).Object;
  (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController =
       (pFVar3->Data).SharedReferenceCount.ReferenceController;
  (pFVar3->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar3->Data).Object = (FSlateSharedHandleData *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Data.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Initialize @ 146c858f0

bool __thiscall FSlateNullRenderer::Initialize(FSlateNullRenderer *this)

{
  return true;
}

// OnWindowDestroyed @ 146c85950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNullRenderer::OnWindowDestroyed(FSlateNullRenderer *this,TSharedRef<SWindow,1> *param_1)

{
  return;
}

// PrepareToTakeScreenshot @ 146c85960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNullRenderer::PrepareToTakeScreenshot
          (FSlateNullRenderer *this,TIntRect<int> *param_1,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_2,SWindow *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != (TArray<FColor,TSizedDefaultAllocator<32>_> *)0x0) {
    uVar3 = (*(int *)((longlong)&param_1->field0_0x0 + 0xc) -
            *(int *)((longlong)&param_1->field0_0x0 + 4)) *
            (*(int *)((longlong)&param_1->field0_0x0 + 8) - *(int *)&param_1->field0_0x0);
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (*piVar1 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&param_2->AllocatorInstance,0,piVar1);
    }
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar3,&param_2->AllocatorInstance,&param_2->ArrayNum,piVar1);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar2 * 4,0,(longlong)(int)uVar3 << 2);
  }
  return;
}

// RegisterCurrentScene @ 146c85a20

int __thiscall
FSlateNullRenderer::RegisterCurrentScene(FSlateNullRenderer *this,FSceneInterface *param_1)

{
  return -1;
}

// ReleaseDrawBuffer @ 146c85a30

void __thiscall
FSlateNullRenderer::ReleaseDrawBuffer(FSlateNullRenderer *this,FSlateDrawBuffer *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskHandle local_res8 [4];
  
  if ((this->DrawBuffer).Ptr != param_1) {
    `FSlateNullRenderer::ReleaseDrawBuffer'::__l2::<lambda_1>::operator()(local_res8);
  }
  local_res8[0].Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  FSlateDrawBuffer::Unlock(param_1,local_res8);
  if (local_res8[0].Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_res8[0].Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_res8[0].Pimpl.Reference)(local_res8[0].Pimpl.Reference,1);
    }
  }
  return;
}

// ReleaseDynamicResource @ 146c85aa0

void __thiscall
FSlateNullRenderer::ReleaseDynamicResource(FSlateNullRenderer *this,FSlateBrush *param_1)

{
  return;
}

// ReleaseUpdatableTexture @ 146c85ab0

void __thiscall
FSlateNullRenderer::ReleaseUpdatableTexture
          (FSlateNullRenderer *this,FSlateUpdatableTexture *param_1)

{
  return;
}

// RemoveDynamicBrushResource @ 146c85ac0

void __thiscall
FSlateNullRenderer::RemoveDynamicBrushResource
          (FSlateNullRenderer *this,TSharedPtr<FSlateDynamicImageBrush,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RequestResize @ 146c85ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNullRenderer::RequestResize
          (FSlateNullRenderer *this,TSharedPtr<SWindow,1> *param_1,uint param_2,uint param_3)

{
  return;
}

// RestoreSystemResolution @ 146c85ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNullRenderer::RestoreSystemResolution(FSlateNullRenderer *this,TSharedRef<SWindow,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCurrentSceneIndex @ 146c85af0

void __thiscall FSlateNullRenderer::SetCurrentSceneIndex(FSlateNullRenderer *this,int param_1)

{
  return;
}

// SetSystemResolution @ 146c85b00

void __thiscall
FSlateNullRenderer::SetSystemResolution(FSlateNullRenderer *this,uint param_1,uint param_2)

{
  return;
}

// Sync @ 146c85b10

void __thiscall FSlateNullRenderer::Sync(FSlateNullRenderer *this)

{
  FFrameEndSync::Sync(EndFrame);
  return;
}

// UpdateFullscreenState @ 146c85b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNullRenderer::UpdateFullscreenState
          (FSlateNullRenderer *this,TSharedRef<SWindow,1> *param_1,uint param_2,uint param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 1504fb150

bool __thiscall `FSlateNullRenderer::AcquireDrawBuffer'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4608728173234880543>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4608728173234880543>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fb190

bool __thiscall `FSlateNullRenderer::ReleaseDrawBuffer'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4608728173234880554>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4608728173234880554>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

