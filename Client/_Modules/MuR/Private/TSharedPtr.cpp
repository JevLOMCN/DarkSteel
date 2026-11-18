// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 43

// TSharedPtr<UE::Mutable::Private::FResource_const_,1><UE::Mutable::Private::FLayout_const_> @ 14a94e400

TSharedPtr<UE::Mutable::Private::FResource_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FResource_const_,1>::
TSharedPtr<UE::Mutable::Private::FResource_const_,1><UE::Mutable::Private::FLayout_const_>
          (TSharedPtr<UE::Mutable::Private::FResource_const_,1> *this,
          TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (FResource *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<UE::Mutable::Private::FResource_const_,1><UE::Mutable::Private::FMesh_const_> @ 14a94e430

TSharedPtr<UE::Mutable::Private::FResource_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FResource_const_,1>::
TSharedPtr<UE::Mutable::Private::FResource_const_,1><UE::Mutable::Private::FMesh_const_>
          (TSharedPtr<UE::Mutable::Private::FResource_const_,1> *this,
          TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (FResource *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<UE::Mutable::Private::FResource,1><UE::Mutable::Private::FResource_const_> @ 14a94e460

TSharedPtr<UE::Mutable::Private::FResource,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FResource,1>::
TSharedPtr<UE::Mutable::Private::FResource,1><UE::Mutable::Private::FResource_const_>
          (TSharedPtr<UE::Mutable::Private::FResource,1> *this,
          TSharedPtr<UE::Mutable::Private::FResource_const_,1> *param_1,FConstCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<UE::Mutable::Private::FImage_const_,1><UE::Mutable::Private::FImage> @ 14a94e670

TSharedPtr<UE::Mutable::Private::FImage_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FImage_const_,1>::
TSharedPtr<UE::Mutable::Private::FImage_const_,1><UE::Mutable::Private::FImage>
          (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *this,
          TSharedPtr<UE::Mutable::Private::FImage,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<UE::Mutable::Private::FMesh_const_,1><UE::Mutable::Private::FMesh> @ 14a94e6a0

TSharedPtr<UE::Mutable::Private::FMesh_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FMesh_const_,1>::
TSharedPtr<UE::Mutable::Private::FMesh_const_,1><UE::Mutable::Private::FMesh>
          (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *this,
          TSharedPtr<UE::Mutable::Private::FMesh,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<UE::Mutable::Private::FMesh,1><UE::Mutable::Private::FResource> @ 14a94e6d0

TSharedPtr<UE::Mutable::Private::FMesh,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FMesh,1>::
TSharedPtr<UE::Mutable::Private::FMesh,1><UE::Mutable::Private::FResource>
          (TSharedPtr<UE::Mutable::Private::FMesh,1> *this,
          TSharedPtr<UE::Mutable::Private::FResource,1> *param_1,FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (FMesh *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator*<UE::Mutable::Private::FLayout_const_> @ 14a94ee10

FLayout * __thiscall
TSharedPtr<UE::Mutable::Private::FLayout_const_,1>::operator*<UE::Mutable::Private::FLayout_const_>
          (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLayout *pFVar3;
  
  if (this->Object != (FLayout *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLayout *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<UE::Mutable::Private::FMesh_const_> @ 14a94ee60

FMesh * __thiscall
TSharedPtr<UE::Mutable::Private::FMesh_const_,1>::operator*<UE::Mutable::Private::FMesh_const_>
          (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMesh *pFVar3;
  
  if (this->Object != (FMesh *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMesh *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<UE::Mutable::Private::FSkeleton_const_> @ 14a94eeb0

FSkeleton * __thiscall
TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>::
operator*<UE::Mutable::Private::FSkeleton_const_>
          (TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSkeleton *pFVar3;
  
  if (this->Object != (FSkeleton *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSkeleton *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<UE::Mutable::Private::FMesh> @ 14a94efe0

FMesh * __thiscall
TSharedPtr<UE::Mutable::Private::FMesh,1>::operator*<UE::Mutable::Private::FMesh>
          (TSharedPtr<UE::Mutable::Private::FMesh,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMesh *pFVar3;
  
  if (this->Object != (FMesh *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMesh *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<UE::Mutable::Private::FImage_const_,1> @ 14a975940

TSharedPtr<UE::Mutable::Private::FImage_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FImage_const_,1>::TSharedPtr<UE::Mutable::Private::FImage_const_,1>
          (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *this,
          TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<UE::Mutable::Private::FMesh_const_,1> @ 14a975970

TSharedPtr<UE::Mutable::Private::FMesh_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FMesh_const_,1>::TSharedPtr<UE::Mutable::Private::FMesh_const_,1>
          (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *this,
          TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator= @ 14a9789e0

TSharedPtr<UE::Mutable::Private::FImage_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *this,
          TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 14a978a20

TSharedPtr<UE::Mutable::Private::FImage_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *this,FNullTag *param_1)

{
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_18;
  
  local_18.Object = (FImage *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14a978a70

TSharedPtr<UE::Mutable::Private::FMesh_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FMesh_const_,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *this,FNullTag *param_1)

{
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_18;
  
  local_18.Object = (FMesh *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (FMesh *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14a978ac0

TSharedPtr<UE::Mutable::Private::FResource_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FResource_const_,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FResource_const_,1> *this,
          TSharedPtr<UE::Mutable::Private::FResource_const_,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FResource *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 14a978b00

TSharedPtr<UE::Mutable::Private::FResource_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FResource_const_,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FResource_const_,1> *this,FNullTag *param_1)

{
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_18;
  
  local_18.Object = (FResource *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (FResource *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14a978b50

TSharedPtr<UE::Mutable::Private::FImage,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FImage,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FImage,1> *this,
          TSharedPtr<UE::Mutable::Private::FImage,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 14a978b90

TSharedPtr<UE::Mutable::Private::FImage,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FImage,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FImage,1> *this,
          TSharedPtr<UE::Mutable::Private::FImage,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FImage *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 14a978be0

TSharedPtr<UE::Mutable::Private::FMesh,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FMesh,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FMesh,1> *this,
          TSharedPtr<UE::Mutable::Private::FMesh,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FMesh *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14a979570

FImage * __thiscall
TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FImage *pFVar3;
  
  if (this->Object != (FImage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImage *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a9795c0

FInstance * __thiscall
TSharedPtr<UE::Mutable::Private::FInstance_const_,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FInstance *pFVar3;
  
  if (this->Object != (FInstance *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstance *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a979610

FLayout * __thiscall
TSharedPtr<UE::Mutable::Private::FLayout_const_,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLayout *pFVar3;
  
  if (this->Object != (FLayout *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLayout *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a979660

FMaterial * __thiscall
TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMaterial *pFVar3;
  
  if (this->Object != (FMaterial *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMaterial *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a9796b0

FMesh * __thiscall
TSharedPtr<UE::Mutable::Private::FMesh_const_,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMesh *pFVar3;
  
  if (this->Object != (FMesh *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMesh *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a979700

FModel * __thiscall
TSharedPtr<UE::Mutable::Private::FModel_const_,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FModel_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FModel *pFVar3;
  
  if (this->Object != (FModel *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FModel *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a979750

FPhysicsBody * __thiscall
TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPhysicsBody *pFVar3;
  
  if (this->Object != (FPhysicsBody *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPhysicsBody *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a9797a0

FSkeleton * __thiscall
TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSkeleton *pFVar3;
  
  if (this->Object != (FSkeleton *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSkeleton *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a9797f0

FImage * __thiscall
TSharedPtr<UE::Mutable::Private::FImage,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FImage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FImage *pFVar3;
  
  if (this->Object != (FImage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImage *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a979840

FMaterial * __thiscall
TSharedPtr<UE::Mutable::Private::FMaterial,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FMaterial,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMaterial *pFVar3;
  
  if (this->Object != (FMaterial *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMaterial *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a979890

FMesh * __thiscall
TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FMesh,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMesh *pFVar3;
  
  if (this->Object != (FMesh *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMesh *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a9798e0

FProgramCache * __thiscall
TSharedPtr<UE::Mutable::Private::FProgramCache,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FProgramCache *pFVar3;
  
  if (this->Object != (FProgramCache *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FProgramCache *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1><UE::Mutable::Private::FExtensionData> @ 14a9fb430

TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>::
TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1><UE::Mutable::Private::FExtensionData>
          (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *this,
          TSharedRef<UE::Mutable::Private::FExtensionData,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<UE::Mutable::Private::FInstance,1><UE::Mutable::Private::FInstance> @ 14a9fb460

TSharedPtr<UE::Mutable::Private::FInstance,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FInstance,1>::
TSharedPtr<UE::Mutable::Private::FInstance,1><UE::Mutable::Private::FInstance>
          (TSharedPtr<UE::Mutable::Private::FInstance,1> *this,
          TSharedRef<UE::Mutable::Private::FInstance,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator*<UE::Mutable::Private::FParameters_const_> @ 14aa04310

FParameters * __thiscall
TSharedPtr<UE::Mutable::Private::FParameters_const_,1>::
operator*<UE::Mutable::Private::FParameters_const_>
          (TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FParameters *pFVar3;
  
  if (this->Object != (FParameters *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FParameters *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<UE::Mutable::Private::FPhysicsBody_const_> @ 14aa04360

FPhysicsBody * __thiscall
TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>::
operator*<UE::Mutable::Private::FPhysicsBody_const_>
          (TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPhysicsBody *pFVar3;
  
  if (this->Object != (FPhysicsBody *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPhysicsBody *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ~TSharedPtr<UE::Mutable::Private::FImage_const_,1> @ 14aa93520

void __thiscall
TSharedPtr<UE::Mutable::Private::FImage_const_,1>::
~TSharedPtr<UE::Mutable::Private::FImage_const_,1>
          (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator= @ 14aa94130

TSharedPtr<UE::Mutable::Private::FInstance,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FInstance,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FInstance,1> *this,
          TSharedPtr<UE::Mutable::Private::FInstance,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14aa94fa0

FParameters * __thiscall
TSharedPtr<UE::Mutable::Private::FParameters_const_,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FParameters *pFVar3;
  
  if (this->Object != (FParameters *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FParameters *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14aa94ff0

FInstance * __thiscall
TSharedPtr<UE::Mutable::Private::FInstance,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FInstance,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FInstance *pFVar3;
  
  if (this->Object != (FInstance *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstance *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14aa95040

FIssuedTask * __thiscall
TSharedPtr<UE::Mutable::Private::CodeRunner::FIssuedTask,1>::operator->
          (TSharedPtr<UE::Mutable::Private::CodeRunner::FIssuedTask,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FIssuedTask *pFVar3;
  
  if (this->Object != (FIssuedTask *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIssuedTask *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14aa95090

FParameters * __thiscall
TSharedPtr<UE::Mutable::Private::FParameters,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FParameters,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FParameters *pFVar3;
  
  if (this->Object != (FParameters *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FParameters *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator= @ 14ab60e90

TSharedPtr<UE::Mutable::Private::FInstance_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FInstance_const_,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *this,FNullTag *param_1)

{
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> local_18;
  
  local_18.Object = (FInstance *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (FInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

