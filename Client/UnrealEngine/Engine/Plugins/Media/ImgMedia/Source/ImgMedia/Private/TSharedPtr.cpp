// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 8

// TSharedPtr<IImgMediaReader,1><FExrImgMediaReader> @ 14ea32260

TSharedPtr<IImgMediaReader,1> * __thiscall
TSharedPtr<IImgMediaReader,1>::TSharedPtr<IImgMediaReader,1><FExrImgMediaReader>
          (TSharedPtr<IImgMediaReader,1> *this,TRawPtrProxy<FExrImgMediaReader> *param_1)

{
  FExrImgMediaReader *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IImgMediaReader *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFExrImgMediaReader__U__DefaultDeleter_VFExrImgMediaReader___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FImgMediaFrame> @ 14ea323d0

TSharedPtr<FImgMediaFrame,1> * __thiscall
TSharedPtr<FImgMediaFrame,1>::operator=<FImgMediaFrame>
          (TSharedPtr<FImgMediaFrame,1> *this,TRawPtrProxy<FImgMediaFrame> *param_1)

{
  FImgMediaFrame *pFVar1;
  TSharedPtr<FImgMediaFrame,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFImgMediaFrame__U__DefaultDeleter_UFImgMediaFrame___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FImgMediaFrame *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FGenericImgMediaReader> @ 14ea32520

TSharedPtr<IImgMediaReader,1> * __thiscall
TSharedPtr<IImgMediaReader,1>::operator=<FGenericImgMediaReader>
          (TSharedPtr<IImgMediaReader,1> *this,TRawPtrProxy<FGenericImgMediaReader> *param_1)

{
  FGenericImgMediaReader *pFVar1;
  TSharedPtr<IImgMediaReader,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (IImgMediaReader *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGenericImgMediaReader__U__DefaultDeleter_VFGenericImgMediaReader___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (IImgMediaReader *)pFVar1;
    local_18.Object = (IImgMediaReader *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 14ea3bf20

FImgMediaFrame * __thiscall
TSharedPtr<FImgMediaFrame,1>::operator->(TSharedPtr<FImgMediaFrame,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FImgMediaFrame *pFVar3;
  
  if (this->Object != (FImgMediaFrame *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImgMediaFrame *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ea3bf70

FImgMediaGlobalCache * __thiscall
TSharedPtr<FImgMediaGlobalCache,1>::operator->(TSharedPtr<FImgMediaGlobalCache,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FImgMediaGlobalCache *pFVar3;
  
  if (this->Object != (FImgMediaGlobalCache *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImgMediaGlobalCache *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ea3bfc0

FImgMediaLoader * __thiscall
TSharedPtr<FImgMediaLoader,1>::operator->(TSharedPtr<FImgMediaLoader,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FImgMediaLoader *pFVar3;
  
  if (this->Object != (FImgMediaLoader *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImgMediaLoader *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ea3c010

FImgMediaMipMapInfo * __thiscall
TSharedPtr<FImgMediaMipMapInfo,1>::operator->(TSharedPtr<FImgMediaMipMapInfo,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FImgMediaMipMapInfo *pFVar3;
  
  if (this->Object != (FImgMediaMipMapInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImgMediaMipMapInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ea3c060

IImgMediaReader * __thiscall
TSharedPtr<IImgMediaReader,1>::operator->(TSharedPtr<IImgMediaReader,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IImgMediaReader *pIVar3;
  
  if (this->Object != (IImgMediaReader *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IImgMediaReader *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

