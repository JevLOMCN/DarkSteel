// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 8

// DestroyObject @ 14ea30b10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FImgMediaSceneViewExtension,SharedPointerInternals::DefaultDeleter<FImgMediaSceneViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FImgMediaSceneViewExtension,SharedPointerInternals::DefaultDeleter<FImgMediaSceneViewExtension>,1>
                *this)

{
  FImgMediaSceneViewExtension *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = this->Object;
  if (this_00 != (FImgMediaSceneViewExtension *)0x0) {
    this_00->_padding_ = (longlong)&___7FImgMediaSceneViewExtension__6B_;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnBeginFrame,(FDelegateHandle)(this_00->OnBeginFrameDelegate).ID);
    DestructItems<FImgMediaViewInfo,int>
              ((FImgMediaViewInfo *)
               (this_00->DisplayResolutionCachedViewInfos).AllocatorInstance.Data,
               (this_00->DisplayResolutionCachedViewInfos).ArrayNum);
    pFVar1 = (this_00->DisplayResolutionCachedViewInfos).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FImgMediaViewInfo,int>
              ((FImgMediaViewInfo *)(this_00->CachedViewInfos).AllocatorInstance.Data,
               (this_00->CachedViewInfos).ArrayNum);
    pFVar1 = (this_00->CachedViewInfos).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this_00);
    ::operator_delete(this_00,0x50);
    return;
  }
  return;
}

// DestroyObject @ 14ea46ec0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FImgMediaFrame,SharedPointerInternals::DefaultDeleter<FImgMediaFrame>,1>
::DestroyObject(TReferenceControllerWithDeleter<FImgMediaFrame,SharedPointerInternals::DefaultDeleter<FImgMediaFrame>,1>
                *this)

{
  FImgMediaFrame *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FImgMediaFrame *)0x0) {
    FImgMediaFrame::~FImgMediaFrame(this_00);
    ::operator_delete(this_00,0x160);
    return;
  }
  return;
}

// DestroyObject @ 14ea46f00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStructuredBufferPoolItem,`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>,1>
::DestroyObject(void *this)

{
  `FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),*(FStructuredBufferPoolItem **)((longlong)this + 0x28))
  ;
  return;
}

// DestroyObject @ 14ea46f20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FExrImgMediaReader,SharedPointerInternals::DefaultDeleter<FExrImgMediaReader>,1>
::DestroyObject(TReferenceControllerWithDeleter<FExrImgMediaReader,SharedPointerInternals::DefaultDeleter<FExrImgMediaReader>,1>
                *this)

{
  FExrImgMediaReader *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FExrImgMediaReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ea46f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ea46f40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericImgMediaReader,SharedPointerInternals::DefaultDeleter<FGenericImgMediaReader>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGenericImgMediaReader,SharedPointerInternals::DefaultDeleter<FGenericImgMediaReader>,1>
                *this)

{
  FGenericImgMediaReader *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGenericImgMediaReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ea46f51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ea46f60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<void,`FExrImgMediaReader::ReadFrame'::__l8::<lambda_1>,1>::
DestroyObject(void *this)

{
  FMemory::Free(*(void **)((longlong)this + 0x18));
  return;
}

// DestroyObject @ 14ea46f70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<void,`FDdsImgMediaReader::ReadFrame'::__l37::<lambda_1>,1>::
DestroyObject(void *this)

{
  FMemory::Free(*(void **)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14ea46f80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<void,`FGenericImgMediaReader::ReadFrame'::__l61::<lambda_2>,1>::
DestroyObject(void *this)

{
  FMemory::Free(*(void **)((longlong)this + 0x10));
  return;
}

