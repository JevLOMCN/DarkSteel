// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 9

// operator*<UE::MediaCaptureData::FCaptureFrame> @ 14d77ef60

FCaptureFrame * __thiscall
TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator*<UE::MediaCaptureData::FCaptureFrame>
          (TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCaptureFrame *pFVar3;
  
  if (this->Object != (FCaptureFrame *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCaptureFrame *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator= @ 14d78d770

TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> * __thiscall
TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator=
          (TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> *this,
          TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FCaptureSource *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14d78dd20

FCaptureFrame * __thiscall
TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->
          (TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCaptureFrame *pFVar3;
  
  if (this->Object != (FCaptureFrame *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCaptureFrame *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d78dd70

FCaptureSource * __thiscall
TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator->
          (TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCaptureSource *pFVar3;
  
  if (this->Object != (FCaptureSource *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCaptureSource *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d78ddc0

FMainMediaIOAudioCapture * __thiscall
TSharedPtr<FMainMediaIOAudioCapture,1>::operator->(TSharedPtr<FMainMediaIOAudioCapture,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMainMediaIOAudioCapture *pFVar3;
  
  if (this->Object != (FMainMediaIOAudioCapture *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMainMediaIOAudioCapture *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d78de10

FMediaIOCoreTextureSampleBase * __thiscall
TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->
          (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMediaIOCoreTextureSampleBase *pFVar3;
  
  if (this->Object != (FMediaIOCoreTextureSampleBase *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMediaIOCoreTextureSampleBase *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d78de60

ITextureTransfer * __thiscall
TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1>::operator->
          (TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ITextureTransfer *pIVar3;
  
  if (this->Object != (ITextureTransfer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ITextureTransfer *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14d7bfce0

TSharedRef<FMediaIOCoreTextureSampleBase,1> * __thiscall
TSharedPtr<FMediaIOCoreTextureSampleBase,1>::ToSharedRef
          (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *this,
          TSharedRef<FMediaIOCoreTextureSampleBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FMediaIOCoreTextureSampleBase,1> *pTVar4;
  
  if (this->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMediaIOCoreTextureSampleBase,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMediaIOCoreTextureSampleBase,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14d7bfd80

TSharedRef<ISubmixBufferListener,1> * __thiscall
TSharedPtr<ISubmixBufferListener,1>::ToSharedRef
          (TSharedPtr<ISubmixBufferListener,1> *this,
          TSharedRef<ISubmixBufferListener,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<ISubmixBufferListener,1> *pTVar4;
  
  if (this->Object == (ISubmixBufferListener *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<ISubmixBufferListener,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (ISubmixBufferListener *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<ISubmixBufferListener,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

