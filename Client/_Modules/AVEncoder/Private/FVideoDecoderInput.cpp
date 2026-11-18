// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 2

// ~FVideoDecoderInput @ 148d016a0

void __thiscall AVEncoder::FVideoDecoderInput::~FVideoDecoderInput(FVideoDecoderInput *this)

{
  return;
}

// Create @ 148d056e0

TSharedPtr<AVEncoder::FVideoDecoderInput,1> * __cdecl
AVEncoder::FVideoDecoderInput::Create
          (TSharedPtr<AVEncoder::FVideoDecoderInput,1> *__return_storage_ptr__,FInputData *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<AVEncoder::FVideoDecoderInput,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x40);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FVideoDecoderInput *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFVideoDecoderInputImpl_AVEncoder___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FVideoDecoderInputImpl_AVEncoder__6B_;
    *(void **)&pTVar3[1].SharedReferenceCount = param_1->EncodedData;
    pTVar3[2].SharedReferenceCount = (atomic<int>)param_1->EncodedDataSize;
    pTVar3[2]._padding_ = param_1->PTS;
    pTVar3[2].WeakReferenceCount = (atomic<int>)param_1->Width;
    *(int *)&pTVar3[3]._padding_ = param_1->Height;
    *(int *)((longlong)&pTVar3[3]._padding_ + 4) = param_1->Rotation;
    pTVar3[3].SharedReferenceCount = (atomic<int>)param_1->ContentType;
    *(bool *)&pTVar3[3].WeakReferenceCount = param_1->bIsKeyframe;
    pTVar3[3].WeakReferenceCount.field_0x1 = param_1->bIsComplete;
    pTVar3[3].WeakReferenceCount.field_0x2 = param_1->bMissingFrames;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<AVEncoder::FVideoDecoderInput,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FVideoDecoderInput *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

