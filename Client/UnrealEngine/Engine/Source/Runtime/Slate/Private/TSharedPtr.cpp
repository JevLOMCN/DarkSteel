// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 134

// TSharedPtr<ISlateSoundDevice,1><FNullSlateSoundDevice> @ 14269c570

TSharedPtr<ISlateSoundDevice,1> * __thiscall
TSharedPtr<ISlateSoundDevice,1>::TSharedPtr<ISlateSoundDevice,1><FNullSlateSoundDevice>
          (TSharedPtr<ISlateSoundDevice,1> *this,TRawPtrProxy<FNullSlateSoundDevice> *param_1)

{
  FNullSlateSoundDevice *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (ISlateSoundDevice *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFNullSlateSoundDevice__U__DefaultDeleter_VFNullSlateSoundDevice___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FSlateApplication> @ 14269c720

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FSlateApplication,1> * __thiscall
TSharedPtr<FSlateApplication,1>::operator=<FSlateApplication>
          (TSharedPtr<FSlateApplication,1> *this,TRawPtrProxy<FSlateApplication> *param_1)

{
  FSlateApplication *pFVar1;
  TSharedPtr<FSlateApplication,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateApplication__U__DefaultDeleter_VFSlateApplication___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FSlateApplication *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FSlateVirtualUserHandle> @ 14269c7b0

TSharedPtr<FSlateVirtualUserHandle,1> * __thiscall
TSharedPtr<FSlateVirtualUserHandle,1>::operator=<FSlateVirtualUserHandle>
          (TSharedPtr<FSlateVirtualUserHandle,1> *this,
          TRawPtrProxy<FSlateVirtualUserHandle> *param_1)

{
  FSlateVirtualUserHandle *pFVar1;
  TSharedPtr<FSlateVirtualUserHandle,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateVirtualUserHandle__U__DefaultDeleter_VFSlateVirtualUserHandle___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FSlateVirtualUserHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 1426ac8a0

FPopupLayer * __thiscall TSharedPtr<FPopupLayer,1>::operator->(TSharedPtr<FPopupLayer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPopupLayer *pFVar3;
  
  if (this->Object != (FPopupLayer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPopupLayer *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1426ac8f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateRenderer * __thiscall
TSharedPtr<FSlateRenderer,1>::operator->(TSharedPtr<FSlateRenderer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateRenderer *pFVar3;
  
  if (this->Object != (FSlateRenderer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSlateRenderer *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1426ac940

GenericApplication * __thiscall
TSharedPtr<GenericApplication,1>::operator->(TSharedPtr<GenericApplication,1> *this)

{
  code *pcVar1;
  bool bVar2;
  GenericApplication *pGVar3;
  
  if (this->Object != (GenericApplication *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pGVar3 = (GenericApplication *)(*pcVar1)();
    return pGVar3;
  }
  return this->Object;
}

// operator-> @ 1426ac990

ICursor * __thiscall TSharedPtr<ICursor,1>::operator->(TSharedPtr<ICursor,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ICursor *pIVar3;
  
  if (this->Object != (ICursor *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ICursor *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 1426ac9e0

/* WARNING: Enum "Type": Some values do not have unique names */

SWindow * __thiscall TSharedPtr<SWindow,1>::operator->(TSharedPtr<SWindow,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SWindow *pSVar3;
  
  if (this->Object != (SWindow *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWindow *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 1426e1c90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FDragDropOperation,1> * __thiscall
TSharedPtr<FDragDropOperation,1>::ToSharedRef
          (TSharedPtr<FDragDropOperation,1> *this,
          TSharedRef<FDragDropOperation,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FDragDropOperation,1> *pTVar3;
  
  if (this->Object == (FDragDropOperation *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FDragDropOperation,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Object = (FDragDropOperation *)0x0;
  if (__return_storage_ptr__->Object == (FDragDropOperation *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FDragDropOperation,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 1426e1d30

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateApplication,1> * __thiscall
TSharedPtr<FSlateApplication,1>::ToSharedRef
          (TSharedPtr<FSlateApplication,1> *this,
          TSharedRef<FSlateApplication,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FSlateApplication,1> *pTVar4;
  
  if (this->Object == (FSlateApplication *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateApplication,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FSlateApplication *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateApplication,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 1426e1dd0

TSharedRef<FSlateVirtualUserHandle,1> * __thiscall
TSharedPtr<FSlateVirtualUserHandle,1>::ToSharedRef
          (TSharedPtr<FSlateVirtualUserHandle,1> *this,
          TSharedRef<FSlateVirtualUserHandle,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FSlateVirtualUserHandle,1> *pTVar4;
  
  if (this->Object == (FSlateVirtualUserHandle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateVirtualUserHandle,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FSlateVirtualUserHandle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateVirtualUserHandle,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<FJsonValue,1><FJsonValueBoolean> @ 1426e6e10

TSharedPtr<FJsonValue,1> * __thiscall
TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueBoolean>
          (TSharedPtr<FJsonValue,1> *this,TRawPtrProxy<FJsonValueBoolean> *param_1)

{
  FJsonValueBoolean *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (FJsonValue *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFJsonValueBoolean__U__DefaultDeleter_VFJsonValueBoolean___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FJsonValue,1><FJsonValueNumber> @ 1426e6e80

TSharedPtr<FJsonValue,1> * __thiscall
TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>
          (TSharedPtr<FJsonValue,1> *this,TRawPtrProxy<FJsonValueNumber> *param_1)

{
  FJsonValueNumber *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (FJsonValue *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFJsonValueNumber__U__DefaultDeleter_VFJsonValueNumber___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FJsonValueObject,1><FJsonValueObject> @ 1426e6ef0

TSharedPtr<FJsonValueObject,1> * __thiscall
TSharedPtr<FJsonValueObject,1>::TSharedPtr<FJsonValueObject,1><FJsonValueObject>
          (TSharedPtr<FJsonValueObject,1> *this,TRawPtrProxy<FJsonValueObject> *param_1)

{
  FJsonValueObject *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFJsonValueObject__U__DefaultDeleter_VFJsonValueObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_> @ 1426e7e20

TSharedPtr<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,1>
* __thiscall
TSharedPtr<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,1>
::
operator=<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>
          (TSharedPtr<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,1>
           *this,TRawPtrProxy<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>
                 *param_1)

{
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *pTVar1;
  TSharedPtr<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,1>
  local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TMap_UFUserDefinedChordKey__UFInputChord__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_UFUserDefinedChordKey__UFInputChord___0A_____U__DefaultDeleter_V__TMap_UFUserDefinedChordKey__UFInputChord__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_UFUserDefinedChordKey__UFInputChord___0A______SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = pTVar1;
    local_18.Object =
         (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
          *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FUICommandInfo> @ 1426e7f20

TSharedPtr<FUICommandInfo,1> * __thiscall
TSharedPtr<FUICommandInfo,1>::operator=<FUICommandInfo>
          (TSharedPtr<FUICommandInfo,1> *this,TRawPtrProxy<FUICommandInfo> *param_1)

{
  FUICommandInfo *pFVar1;
  TSharedPtr<FUICommandInfo,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFUICommandInfo__U__DefaultDeleter_VFUICommandInfo___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FUICommandInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FUICommandList> @ 1426e7fb0

TSharedPtr<FUICommandList,1> * __thiscall
TSharedPtr<FUICommandList,1>::operator=<FUICommandList>
          (TSharedPtr<FUICommandList,1> *this,TRawPtrProxy<FUICommandList> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FUICommandList *pFVar4;
  FUICommandList *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FUICommandList,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFUICommandList__U__DefaultDeleter_VFUICommandList___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FUICommandList *)0x0) &&
     (((plVar1 = &pFVar5->_padding_, pFVar5->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)*plVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar1 = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = pFVar4;
    local_18.Object = (FUICommandList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// operator=<FUserDefinedChords> @ 1426e80d0

TSharedPtr<FUserDefinedChords,1> * __thiscall
TSharedPtr<FUserDefinedChords,1>::operator=<FUserDefinedChords>
          (TSharedPtr<FUserDefinedChords,1> *this,TRawPtrProxy<FUserDefinedChords> *param_1)

{
  FUserDefinedChords *pFVar1;
  TSharedPtr<FUserDefinedChords,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFUserDefinedChords__U__DefaultDeleter_VFUserDefinedChords___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FUserDefinedChords *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 142702d50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> * __thiscall
TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator=
          (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *this,
          TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FPanelDrawerData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 142703510

/* WARNING: Enum "Type": Some values do not have unique names */

FPanelDrawerData * __thiscall
TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->
          (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPanelDrawerData *pFVar3;
  
  if (this->Object != (FPanelDrawerData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPanelDrawerData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142703560

/* WARNING: Enum "Type": Some values do not have unique names */

FTabSpawnerEntry * __thiscall
TSharedPtr<FTabSpawnerEntry,1>::operator->(TSharedPtr<FTabSpawnerEntry,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FTabSpawnerEntry *pFVar3;
  
  if (this->Object != (FTabSpawnerEntry *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTabSpawnerEntry *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1427035b0

FArea * __thiscall
TSharedPtr<FTabManager::FArea,1>::operator->(TSharedPtr<FTabManager::FArea,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FArea *pFVar3;
  
  if (this->Object != (FArea *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FArea *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142703600

/* WARNING: Enum "Type": Some values do not have unique names */

FDragDropOperation * __thiscall
TSharedPtr<FDragDropOperation,1>::operator->(TSharedPtr<FDragDropOperation,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FDragDropOperation *pFVar3;
  
  if (this->Object != (FDragDropOperation *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDragDropOperation *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142703650

/* WARNING: Enum "Type": Some values do not have unique names */

FProxyTabmanager * __thiscall
TSharedPtr<FProxyTabmanager,1>::operator->(TSharedPtr<FProxyTabmanager,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FProxyTabmanager *pFVar3;
  
  if (this->Object != (FProxyTabmanager *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FProxyTabmanager *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1427036a0

/* WARNING: Enum "Type": Some values do not have unique names */

FTabManager * __thiscall TSharedPtr<FTabManager,1>::operator->(TSharedPtr<FTabManager,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FTabManager *pFVar3;
  
  if (this->Object != (FTabManager *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTabManager *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1427036f0

SAppIconWidget * __thiscall
TSharedPtr<SAppIconWidget,1>::operator->(TSharedPtr<SAppIconWidget,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SAppIconWidget *pSVar3;
  
  if (this->Object != (SAppIconWidget *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SAppIconWidget *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142703740

SBorder * __thiscall TSharedPtr<SBorder,1>::operator->(TSharedPtr<SBorder,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SBorder *pSVar3;
  
  if (this->Object != (SBorder *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SBorder *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142703790

SButton * __thiscall TSharedPtr<SButton,1>::operator->(TSharedPtr<SButton,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SButton *pSVar3;
  
  if (this->Object != (SButton *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SButton *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427037e0

SCheckBox * __thiscall TSharedPtr<SCheckBox,1>::operator->(TSharedPtr<SCheckBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SCheckBox *pSVar3;
  
  if (this->Object != (SCheckBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SCheckBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142703830

/* WARNING: Enum "Type": Some values do not have unique names */

SDockTab * __thiscall TSharedPtr<SDockTab,1>::operator->(TSharedPtr<SDockTab,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SDockTab *pSVar3;
  
  if (this->Object != (SDockTab *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SDockTab *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142703880

/* WARNING: Enum "Type": Some values do not have unique names */

SDockingArea * __thiscall TSharedPtr<SDockingArea,1>::operator->(TSharedPtr<SDockingArea,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SDockingArea *pSVar3;
  
  if (this->Object != (SDockingArea *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SDockingArea *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427038d0

/* WARNING: Enum "Type": Some values do not have unique names */

SDockingTabStack * __thiscall
TSharedPtr<SDockingTabStack,1>::operator->(TSharedPtr<SDockingTabStack,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SDockingTabStack *pSVar3;
  
  if (this->Object != (SDockingTabStack *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SDockingTabStack *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142703920

/* WARNING: Enum "Type": Some values do not have unique names */

SDockingTabWell * __thiscall
TSharedPtr<SDockingTabWell,1>::operator->(TSharedPtr<SDockingTabWell,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SDockingTabWell *pSVar3;
  
  if (this->Object != (SDockingTabWell *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SDockingTabWell *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142703970

STabDrawerTextBlock * __thiscall
TSharedPtr<STabDrawerTextBlock,1>::operator->(TSharedPtr<STabDrawerTextBlock,1> *this)

{
  code *pcVar1;
  bool bVar2;
  STabDrawerTextBlock *pSVar3;
  
  if (this->Object != (STabDrawerTextBlock *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (STabDrawerTextBlock *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14278d2a0

TSharedRef<FTabManager::FArea,1> * __thiscall
TSharedPtr<FTabManager::FArea,1>::ToSharedRef
          (TSharedPtr<FTabManager::FArea,1> *this,
          TSharedRef<FTabManager::FArea,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FTabManager::FArea,1> *pTVar4;
  
  if (this->Object == (FArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FTabManager::FArea,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FTabManager::FArea,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14278d340

TSharedRef<FTabManager::FSplitter,1> * __thiscall
TSharedPtr<FTabManager::FSplitter,1>::ToSharedRef
          (TSharedPtr<FTabManager::FSplitter,1> *this,
          TSharedRef<FTabManager::FSplitter,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FTabManager::FSplitter,1> *pTVar4;
  
  if (this->Object == (FSplitter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FTabManager::FSplitter,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FSplitter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FTabManager::FSplitter,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14278d3e0

TSharedRef<FUICommandInfo,1> * __thiscall
TSharedPtr<FUICommandInfo,1>::ToSharedRef
          (TSharedPtr<FUICommandInfo,1> *this,TSharedRef<FUICommandInfo,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FUICommandInfo,1> *pTVar4;
  
  if (this->Object == (FUICommandInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FUICommandInfo,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FUICommandInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FUICommandInfo,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14278d480

TSharedRef<FWorkspaceItem,1> * __thiscall
TSharedPtr<FWorkspaceItem,1>::ToSharedRef
          (TSharedPtr<FWorkspaceItem,1> *this,TSharedRef<FWorkspaceItem,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FWorkspaceItem,1> *pTVar4;
  
  if (this->Object == (FWorkspaceItem *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FWorkspaceItem,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FWorkspaceItem *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FWorkspaceItem,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14278d520

TSharedRef<SButton,1> * __thiscall
TSharedPtr<SButton,1>::ToSharedRef
          (TSharedPtr<SButton,1> *this,TSharedRef<SButton,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SButton,1> *pTVar4;
  
  if (this->Object == (SButton *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SButton,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SButton *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SButton,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14278d5c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TSharedPtr<SDockTab,1>::ToSharedRef
          (TSharedPtr<SDockTab,1> *this,TSharedRef<SDockTab,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SDockTab,1> *pTVar4;
  
  if (this->Object == (SDockTab *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SDockTab *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14278d660

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TSharedPtr<SDockTab,1>::ToSharedRef
          (TSharedPtr<SDockTab,1> *this,TSharedRef<SDockTab,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SDockTab,1> *pTVar3;
  
  if (this->Object == (SDockTab *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<SDockTab,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Object = (SDockTab *)0x0;
  if (__return_storage_ptr__->Object == (SDockTab *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<SDockTab,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14278d700

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockingArea,1> * __thiscall
TSharedPtr<SDockingArea,1>::ToSharedRef
          (TSharedPtr<SDockingArea,1> *this,TSharedRef<SDockingArea,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SDockingArea,1> *pTVar4;
  
  if (this->Object == (SDockingArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SDockingArea,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SDockingArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SDockingArea,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14278d7a0

TSharedRef<SDockingNode,1> * __thiscall
TSharedPtr<SDockingNode,1>::ToSharedRef
          (TSharedPtr<SDockingNode,1> *this,TSharedRef<SDockingNode,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SDockingNode,1> *pTVar4;
  
  if (this->Object == (SDockingNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SDockingNode,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SDockingNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SDockingNode,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14278d840

TSharedRef<STextBlock,1> * __thiscall
TSharedPtr<STextBlock,1>::ToSharedRef
          (TSharedPtr<STextBlock,1> *this,TSharedRef<STextBlock,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<STextBlock,1> *pTVar4;
  
  if (this->Object == (STextBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<STextBlock,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (STextBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<STextBlock,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<FMultiBlock_const_,1><FMultiBlock_const_> @ 1427946d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<FMultiBlock_const_,1> * __thiscall
TSharedPtr<FMultiBlock_const_,1>::TSharedPtr<FMultiBlock_const_,1><FMultiBlock_const_>
          (TSharedPtr<FMultiBlock_const_,1> *this,TSharedRef<FMultiBlock_const_,1> *param_1)

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

// TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo_const_> @ 142794700

TSharedPtr<FUICommandInfo_const_,1> * __thiscall
TSharedPtr<FUICommandInfo_const_,1>::TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo_const_>
          (TSharedPtr<FUICommandInfo_const_,1> *this,TWeakPtr<FUICommandInfo_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  this->Object = (FUICommandInfo *)0x0;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((this->SharedReferenceCount).ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    this->Object = param_1->Object;
  }
  return this;
}

// TSharedPtr<FToolBarButtonBlock,1><FToolBarButtonBlock> @ 1427961f0

TSharedPtr<FToolBarButtonBlock,1> * __thiscall
TSharedPtr<FToolBarButtonBlock,1>::TSharedPtr<FToolBarButtonBlock,1><FToolBarButtonBlock>
          (TSharedPtr<FToolBarButtonBlock,1> *this,FToolBarButtonBlock *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFToolBarButtonBlock__U__DefaultDeleter_VFToolBarButtonBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1 != (FToolBarButtonBlock *)0x0) {
    if (((param_1->_padding_ != 0) && (param_1->_padding_ != 0)) &&
       (0 < *(int *)(param_1->_padding_ + 8))) {
      return this;
    }
    pTVar4 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar4 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return this;
  }
  return this;
}

// TSharedPtr<SWidget,1><SCheckBox> @ 142796620

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SCheckBox>
          (TSharedPtr<SWidget,1> *this,TSharedRef<SCheckBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SClippingVerticalBox,1><SClippingVerticalBox> @ 142796650

TSharedPtr<SClippingVerticalBox,1> * __thiscall
TSharedPtr<SClippingVerticalBox,1>::TSharedPtr<SClippingVerticalBox,1><SClippingVerticalBox>
          (TSharedPtr<SClippingVerticalBox,1> *this,TSharedRef<SClippingVerticalBox,1> *param_1)

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

// TSharedPtr<SVerticalBox,1><SClippingVerticalBox> @ 142796680

TSharedPtr<SVerticalBox,1> * __thiscall
TSharedPtr<SVerticalBox,1>::TSharedPtr<SVerticalBox,1><SClippingVerticalBox>
          (TSharedPtr<SVerticalBox,1> *this,TSharedPtr<SClippingVerticalBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SVerticalBox *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SWidget,1><SHorizontalBox> @ 1427966b0

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SHorizontalBox>
          (TSharedPtr<SWidget,1> *this,TSharedRef<SHorizontalBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SMultiBoxWidget,1><SMultiBoxWidget> @ 142796910

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<SMultiBoxWidget,1> * __thiscall
TSharedPtr<SMultiBoxWidget,1>::TSharedPtr<SMultiBoxWidget,1><SMultiBoxWidget>
          (TSharedPtr<SMultiBoxWidget,1> *this,TWeakPtr<SMultiBoxWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  this->Object = (SMultiBoxWidget *)0x0;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((this->SharedReferenceCount).ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    this->Object = param_1->Object;
  }
  return this;
}

// TSharedPtr<SPrioritizedWrapBox,1><SPanel> @ 142796960

TSharedPtr<SPrioritizedWrapBox,1> * __thiscall
TSharedPtr<SPrioritizedWrapBox,1>::TSharedPtr<SPrioritizedWrapBox,1><SPanel>
          (TSharedPtr<SPrioritizedWrapBox,1> *this,TSharedPtr<SPanel,1> *param_1,
          FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SPrioritizedWrapBox *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SWidget,1><SPanel> @ 142796990

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SPanel>
          (TSharedPtr<SWidget,1> *this,TSharedPtr<SPanel,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SPanel,1><SPrioritizedWrapBox> @ 1427969c0

TSharedPtr<SPanel,1> * __thiscall
TSharedPtr<SPanel,1>::TSharedPtr<SPanel,1><SPrioritizedWrapBox>
          (TSharedPtr<SPanel,1> *this,TSharedRef<SPrioritizedWrapBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SPanel *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SWidget,1><SScrollBox> @ 1427969f0

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SScrollBox>
          (TSharedPtr<SWidget,1> *this,TSharedRef<SScrollBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SVerticalBox,1><SVerticalBox> @ 142796c20

TSharedPtr<SVerticalBox,1> * __thiscall
TSharedPtr<SVerticalBox,1>::TSharedPtr<SVerticalBox,1><SVerticalBox>
          (TSharedPtr<SVerticalBox,1> *this,TSharedRef<SVerticalBox,1> *param_1)

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

// TSharedPtr<SWidget,1><SVerticalBox> @ 142796c50

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SVerticalBox>
          (TSharedPtr<SWidget,1> *this,TSharedPtr<SVerticalBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SWidget,1><SVerticalBox> @ 142796c80

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SVerticalBox>
          (TSharedPtr<SWidget,1> *this,TSharedRef<SVerticalBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SWidget,1><SWidget> @ 142796cb0

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SWidget>
          (TSharedPtr<SWidget,1> *this,TSharedRef<SWidget,1> *param_1)

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

// operator=<FDropPreviewBlock> @ 142796dd0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<FDropPreviewBlock,1> * __thiscall
TSharedPtr<FDropPreviewBlock,1>::operator=<FDropPreviewBlock>
          (TSharedPtr<FDropPreviewBlock,1> *this,TRawPtrProxy<FDropPreviewBlock> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FDropPreviewBlock *pFVar4;
  FDropPreviewBlock *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FDropPreviewBlock,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDropPreviewBlock__U__DefaultDeleter_VFDropPreviewBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FDropPreviewBlock *)0x0) &&
     (((plVar1 = &pFVar5->_padding_, pFVar5->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)*plVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar1 = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = pFVar4;
    local_18.Object = (FDropPreviewBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// operator=<FMenuEntryBlock> @ 142796ef0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<FMultiBlock,1> * __thiscall
TSharedPtr<FMultiBlock,1>::operator=<FMenuEntryBlock>
          (TSharedPtr<FMultiBlock,1> *this,TRawPtrProxy<FMenuEntryBlock> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FMenuEntryBlock *pFVar4;
  FMenuEntryBlock *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FMultiBlock,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = (FMultiBlock *)pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuEntryBlock__U__DefaultDeleter_VFMenuEntryBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FMenuEntryBlock *)0x0) &&
     (((plVar1 = &pFVar5->_padding_, pFVar5->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)*plVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar1 = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = (FMultiBlock *)pFVar4;
    local_18.Object = (FMultiBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// operator=<FToolBarButtonBlock> @ 142797010

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<FMultiBlock,1> * __thiscall
TSharedPtr<FMultiBlock,1>::operator=<FToolBarButtonBlock>
          (TSharedPtr<FMultiBlock,1> *this,TRawPtrProxy<FToolBarButtonBlock> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FToolBarButtonBlock *pFVar4;
  FToolBarButtonBlock *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FMultiBlock,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = (FMultiBlock *)pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFToolBarButtonBlock__U__DefaultDeleter_VFToolBarButtonBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FToolBarButtonBlock *)0x0) &&
     (((plVar1 = &pFVar5->_padding_, pFVar5->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)*plVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar1 = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = (FMultiBlock *)pFVar4;
    local_18.Object = (FMultiBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// operator= @ 1427bb6d0

TSharedPtr<SClippingVerticalBox,1> * __thiscall
TSharedPtr<SClippingVerticalBox,1>::operator=
          (TSharedPtr<SClippingVerticalBox,1> *this,TSharedPtr<SClippingVerticalBox,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SClippingVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 1427bb710

TSharedPtr<SPanel,1> * __thiscall
TSharedPtr<SPanel,1>::operator=(TSharedPtr<SPanel,1> *this,TSharedPtr<SPanel,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 1427bb750

TSharedPtr<SVerticalBox,1> * __thiscall
TSharedPtr<SVerticalBox,1>::operator=
          (TSharedPtr<SVerticalBox,1> *this,TSharedPtr<SVerticalBox,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 1427bb790

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::operator=(TSharedPtr<SWidget,1> *this,TSharedPtr<SWidget,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 1427bbd50

FEditableTextBlock * __thiscall
TSharedPtr<FEditableTextBlock_const_,1>::operator->(TSharedPtr<FEditableTextBlock_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FEditableTextBlock *pFVar3;
  
  if (this->Object != (FEditableTextBlock *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FEditableTextBlock *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1427bbda0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMultiBlock * __thiscall
TSharedPtr<FMultiBlock_const_,1>::operator->(TSharedPtr<FMultiBlock_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMultiBlock *pFVar3;
  
  if (this->Object != (FMultiBlock *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMultiBlock *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1427bbdf0

FMultiBox * __thiscall
TSharedPtr<FMultiBox_const_,1>::operator->(TSharedPtr<FMultiBox_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMultiBox *pFVar3;
  
  if (this->Object != (FMultiBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMultiBox *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1427bbe40

FToolBarComboButtonBlock * __thiscall
TSharedPtr<FToolBarComboButtonBlock_const_,1>::operator->
          (TSharedPtr<FToolBarComboButtonBlock_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FToolBarComboButtonBlock *pFVar3;
  
  if (this->Object != (FToolBarComboButtonBlock *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FToolBarComboButtonBlock *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1427bbe90

FUICommandInfo * __thiscall
TSharedPtr<FUICommandInfo_const_,1>::operator->(TSharedPtr<FUICommandInfo_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FUICommandInfo *pFVar3;
  
  if (this->Object != (FUICommandInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUICommandInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1427bbee0

FFlattenSearchableBlockInfo * __thiscall
TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>::operator->
          (TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FFlattenSearchableBlockInfo *pFVar3;
  
  if (this->Object != (FFlattenSearchableBlockInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFlattenSearchableBlockInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1427bbf30

STileView<TSharedPtr<SWidget,1>_> * __thiscall
TSharedPtr<STileView<TSharedPtr<SWidget,1>_>,1>::operator->
          (TSharedPtr<STileView<TSharedPtr<SWidget,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  STileView<TSharedPtr<SWidget,1>_> *pSVar3;
  
  if (this->Object != (STileView<TSharedPtr<SWidget,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (STileView<TSharedPtr<SWidget,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bbf80

FExtender * __thiscall TSharedPtr<FExtender,1>::operator->(TSharedPtr<FExtender,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FExtender *pFVar3;
  
  if (this->Object != (FExtender *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FExtender *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1427bbfd0

FMultiBox * __thiscall TSharedPtr<FMultiBox,1>::operator->(TSharedPtr<FMultiBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMultiBox *pFVar3;
  
  if (this->Object != (FMultiBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMultiBox *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc020

SCheckBoxStack * __thiscall
TSharedPtr<SCheckBoxStack,1>::operator->(TSharedPtr<SCheckBoxStack,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SCheckBoxStack *pSVar3;
  
  if (this->Object != (SCheckBoxStack *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SCheckBoxStack *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc070

SColorBlock * __thiscall TSharedPtr<SColorBlock,1>::operator->(TSharedPtr<SColorBlock,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SColorBlock *pSVar3;
  
  if (this->Object != (SColorBlock *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SColorBlock *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc0c0

SComboButton * __thiscall TSharedPtr<SComboButton,1>::operator->(TSharedPtr<SComboButton,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SComboButton *pSVar3;
  
  if (this->Object != (SComboButton *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SComboButton *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc110

/* WARNING: Enum "Type": Some values do not have unique names */

SEditableTextBox * __thiscall
TSharedPtr<SEditableTextBox,1>::operator->(TSharedPtr<SEditableTextBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SEditableTextBox *pSVar3;
  
  if (this->Object != (SEditableTextBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SEditableTextBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc160

SHorizontalBox * __thiscall
TSharedPtr<SHorizontalBox,1>::operator->(TSharedPtr<SHorizontalBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SHorizontalBox *pSVar3;
  
  if (this->Object != (SHorizontalBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SHorizontalBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc1b0

/* WARNING: Enum "Type": Some values do not have unique names */

SMenuEntryBlock * __thiscall
TSharedPtr<SMenuEntryBlock,1>::operator->(TSharedPtr<SMenuEntryBlock,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SMenuEntryBlock *pSVar3;
  
  if (this->Object != (SMenuEntryBlock *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SMenuEntryBlock *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc200

SMenuEntryButton * __thiscall
TSharedPtr<SMenuEntryButton,1>::operator->(TSharedPtr<SMenuEntryButton,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SMenuEntryButton *pSVar3;
  
  if (this->Object != (SMenuEntryButton *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SMenuEntryButton *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc250

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

SMultiBoxWidget * __thiscall
TSharedPtr<SMultiBoxWidget,1>::operator->(TSharedPtr<SMultiBoxWidget,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SMultiBoxWidget *pSVar3;
  
  if (this->Object != (SMultiBoxWidget *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SMultiBoxWidget *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc2a0

SPrioritizedWrapBox * __thiscall
TSharedPtr<SPrioritizedWrapBox,1>::operator->(TSharedPtr<SPrioritizedWrapBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SPrioritizedWrapBox *pSVar3;
  
  if (this->Object != (SPrioritizedWrapBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SPrioritizedWrapBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc2f0

SScrollBar * __thiscall TSharedPtr<SScrollBar,1>::operator->(TSharedPtr<SScrollBar,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SScrollBar *pSVar3;
  
  if (this->Object != (SScrollBar *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SScrollBar *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc340

SSearchBox * __thiscall TSharedPtr<SSearchBox,1>::operator->(TSharedPtr<SSearchBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSearchBox *pSVar3;
  
  if (this->Object != (SSearchBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSearchBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc390

SSpacer * __thiscall TSharedPtr<SSpacer,1>::operator->(TSharedPtr<SSpacer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSpacer *pSVar3;
  
  if (this->Object != (SSpacer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSpacer *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc3e0

SSubMenuButton * __thiscall
TSharedPtr<SSubMenuButton,1>::operator->(TSharedPtr<SSubMenuButton,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSubMenuButton *pSVar3;
  
  if (this->Object != (SSubMenuButton *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSubMenuButton *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc430

SUniformWrapPanel * __thiscall
TSharedPtr<SUniformWrapPanel,1>::operator->(TSharedPtr<SUniformWrapPanel,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SUniformWrapPanel *pSVar3;
  
  if (this->Object != (SUniformWrapPanel *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SUniformWrapPanel *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1427bc480

SVerticalBox * __thiscall TSharedPtr<SVerticalBox,1>::operator->(TSharedPtr<SVerticalBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SVerticalBox *pSVar3;
  
  if (this->Object != (SVerticalBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SVerticalBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 142837560

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<FMultiBlock_const_,1> * __thiscall
TSharedPtr<FMultiBlock_const_,1>::ToSharedRef
          (TSharedPtr<FMultiBlock_const_,1> *this,
          TSharedRef<FMultiBlock_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FMultiBlock_const_,1> *pTVar4;
  
  if (this->Object == (FMultiBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMultiBlock_const_,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FMultiBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMultiBlock_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142837600

TSharedRef<FUICommandInfo_const_,1> * __thiscall
TSharedPtr<FUICommandInfo_const_,1>::ToSharedRef
          (TSharedPtr<FUICommandInfo_const_,1> *this,
          TSharedRef<FUICommandInfo_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FUICommandInfo_const_,1> *pTVar4;
  
  if (this->Object == (FUICommandInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FUICommandInfo_const_,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FUICommandInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FUICommandInfo_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 1428376a0

TSharedRef<FUICommandInfo_const_,1> * __thiscall
TSharedPtr<FUICommandInfo_const_,1>::ToSharedRef
          (TSharedPtr<FUICommandInfo_const_,1> *this,
          TSharedRef<FUICommandInfo_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FUICommandInfo_const_,1> *pTVar3;
  
  if (this->Object == (FUICommandInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FUICommandInfo_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Object = (FUICommandInfo *)0x0;
  if (__return_storage_ptr__->Object == (FUICommandInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FUICommandInfo_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142837740

TSharedRef<SSearchBox,1> * __thiscall
TSharedPtr<SSearchBox,1>::ToSharedRef
          (TSharedPtr<SSearchBox,1> *this,TSharedRef<SSearchBox,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SSearchBox,1> *pTVar4;
  
  if (this->Object == (SSearchBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSearchBox,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SSearchBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSearchBox,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// operator=<FExtender> @ 14283dd30

TSharedPtr<FExtender,1> * __thiscall
TSharedPtr<FExtender,1>::operator=<FExtender>
          (TSharedPtr<FExtender,1> *this,TRawPtrProxy<FExtender> *param_1)

{
  FExtender *pFVar1;
  TSharedPtr<FExtender,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFExtender__U__DefaultDeleter_VFExtender___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FExtender *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 14284c2e0

IErrorReportingWidget * __thiscall
TSharedPtr<IErrorReportingWidget,1>::operator->(TSharedPtr<IErrorReportingWidget,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IErrorReportingWidget *pIVar3;
  
  if (this->Object != (IErrorReportingWidget *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IErrorReportingWidget *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14284c330

SBox * __thiscall TSharedPtr<SBox,1>::operator->(TSharedPtr<SBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SBox *pSVar3;
  
  if (this->Object != (SBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14289d7c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SEditableText,1> * __thiscall
TSharedPtr<SEditableText,1>::ToSharedRef
          (TSharedPtr<SEditableText,1> *this,TSharedRef<SEditableText,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SEditableText,1> *pTVar4;
  
  if (this->Object == (SEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SEditableText,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SEditableText,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<IMenu,1><FMenuInHostWidget> @ 1428a0e70

TSharedPtr<IMenu,1> * __thiscall
TSharedPtr<IMenu,1>::TSharedPtr<IMenu,1><FMenuInHostWidget>
          (TSharedPtr<IMenu,1> *this,TRawPtrProxy<FMenuInHostWidget> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FMenuInHostWidget *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = (IMenu *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuInHostWidget__U__DefaultDeleter_VFMenuInHostWidget___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FMenuInHostWidget *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
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
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<IMenu,1><FMenuInWindow> @ 1428a0f50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMenu,1> * __thiscall
TSharedPtr<IMenu,1>::TSharedPtr<IMenu,1><FMenuInWindow>
          (TSharedPtr<IMenu,1> *this,TRawPtrProxy<FMenuInWindow> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FMenuInWindow *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = (IMenu *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuInWindow__U__DefaultDeleter_VFMenuInWindow___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FMenuInWindow *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
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
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<FString,1><FString> @ 1428a1030

TSharedPtr<FString,1> * __thiscall
TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
          (TSharedPtr<FString,1> *this,TRawPtrProxy<FString> *param_1)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFString__U__DefaultDeleter_VFString___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<SScrollBar,1><SScrollBar> @ 1428a1120

TSharedPtr<SScrollBar,1> * __thiscall
TSharedPtr<SScrollBar,1>::TSharedPtr<SScrollBar,1><SScrollBar>
          (TSharedPtr<SScrollBar,1> *this,TSharedRef<SScrollBar,1> *param_1)

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

// operator*<FString> @ 1428a1230

FString * __thiscall TSharedPtr<FString,1>::operator*<FString>(TSharedPtr<FString,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (this->Object != (FString *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator= @ 1428c5f90

TSharedPtr<FString,1> * __thiscall
TSharedPtr<FString,1>::operator=(TSharedPtr<FString,1> *this,TSharedPtr<FString,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FString *pFVar2;
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

// operator= @ 1428c5fe0

TSharedPtr<SBorder,1> * __thiscall
TSharedPtr<SBorder,1>::operator=(TSharedPtr<SBorder,1> *this,TSharedPtr<SBorder,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SBorder *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pSVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 1428c6030

TSharedPtr<SScrollBar,1> * __thiscall
TSharedPtr<SScrollBar,1>::operator=
          (TSharedPtr<SScrollBar,1> *this,TSharedPtr<SScrollBar,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SScrollBar *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 1428c6070

TSharedPtr<SScrollBar,1> * __thiscall
TSharedPtr<SScrollBar,1>::operator=
          (TSharedPtr<SScrollBar,1> *this,TSharedPtr<SScrollBar,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SScrollBar *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pSVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator-> @ 1428c6750

SComboBox<TSharedPtr<FString,1>_> * __thiscall
TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::operator->
          (TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SComboBox<TSharedPtr<FString,1>_> *pSVar3;
  
  if (this->Object != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SComboBox<TSharedPtr<FString,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1428c67a0

SListView<TSharedPtr<FString,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->
          (TSharedPtr<SListView<TSharedPtr<FString,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<FString,1>_> *pSVar3;
  
  if (this->Object != (SListView<TSharedPtr<FString,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<FString,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1428c67f0

IMenu * __thiscall TSharedPtr<IMenu,1>::operator->(TSharedPtr<IMenu,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IMenu *pIVar3;
  
  if (this->Object != (IMenu *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMenu *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 1428c6840

SCircularThrobber * __thiscall
TSharedPtr<SCircularThrobber,1>::operator->(TSharedPtr<SCircularThrobber,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SCircularThrobber *pSVar3;
  
  if (this->Object != (SCircularThrobber *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SCircularThrobber *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1428c6890

/* WARNING: Enum "Type": Some values do not have unique names */

SEditableText * __thiscall
TSharedPtr<SEditableText,1>::operator->(TSharedPtr<SEditableText,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SEditableText *pSVar3;
  
  if (this->Object != (SEditableText *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SEditableText *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1428c68e0

/* WARNING: Enum "Type": Some values do not have unique names */

SMultiLineEditableText * __thiscall
TSharedPtr<SMultiLineEditableText,1>::operator->(TSharedPtr<SMultiLineEditableText,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SMultiLineEditableText *pSVar3;
  
  if (this->Object != (SMultiLineEditableText *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SMultiLineEditableText *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1428c6930

SScrollBarTrack * __thiscall
TSharedPtr<SScrollBarTrack,1>::operator->(TSharedPtr<SScrollBarTrack,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SScrollBarTrack *pSVar3;
  
  if (this->Object != (SScrollBarTrack *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SScrollBarTrack *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1428c6980

SScrollPanel * __thiscall TSharedPtr<SScrollPanel,1>::operator->(TSharedPtr<SScrollPanel,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SScrollPanel *pSVar3;
  
  if (this->Object != (SScrollPanel *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SScrollPanel *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1428c69d0

SSlider * __thiscall TSharedPtr<SSlider,1>::operator->(TSharedPtr<SSlider,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSlider *pSVar3;
  
  if (this->Object != (SSlider *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSlider *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 1429abc70

TSharedRef<SScrollBar,1> * __thiscall
TSharedPtr<SScrollBar,1>::ToSharedRef
          (TSharedPtr<SScrollBar,1> *this,TSharedRef<SScrollBar,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SScrollBar,1> *pTVar4;
  
  if (this->Object == (SScrollBar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SScrollBar,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SScrollBar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SScrollBar,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 1429abd10

TSharedRef<SScrollBarTrack,1> * __thiscall
TSharedPtr<SScrollBarTrack,1>::ToSharedRef
          (TSharedPtr<SScrollBarTrack,1> *this,TSharedRef<SScrollBarTrack,1> *__return_storage_ptr__
          )

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SScrollBarTrack,1> *pTVar4;
  
  if (this->Object == (SScrollBarTrack *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SScrollBarTrack,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SScrollBarTrack *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SScrollBarTrack,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo> @ 1429b1850

TSharedPtr<FUICommandInfo_const_,1> * __thiscall
TSharedPtr<FUICommandInfo_const_,1>::TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
          (TSharedPtr<FUICommandInfo_const_,1> *this,TSharedPtr<FUICommandInfo,1> *param_1)

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

// operator*<FSlateTextLayout> @ 1429b1c30

FSlateTextLayout * __thiscall
TSharedPtr<FSlateTextLayout,1>::operator*<FSlateTextLayout>(TSharedPtr<FSlateTextLayout,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateTextLayout *pFVar3;
  
  if (this->Object != (FSlateTextLayout *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSlateTextLayout *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1429c0d70

FSlateTextLayout * __thiscall
TSharedPtr<FSlateTextLayout,1>::operator->(TSharedPtr<FSlateTextLayout,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateTextLayout *pFVar3;
  
  if (this->Object != (FSlateTextLayout *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSlateTextLayout *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1429c0dc0

/* WARNING: Enum "Type": Some values do not have unique names */

FTextInputMethodContext * __thiscall
TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1>::operator->
          (TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FTextInputMethodContext *pFVar3;
  
  if (this->Object != (FTextInputMethodContext *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTextInputMethodContext *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1429c0e10

FUICommandList * __thiscall
TSharedPtr<FUICommandList,1>::operator->(TSharedPtr<FUICommandList,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FUICommandList *pFVar3;
  
  if (this->Object != (FUICommandList *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUICommandList *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1429c0e60

ITextInputMethodChangeNotifier * __thiscall
TSharedPtr<ITextInputMethodChangeNotifier,1>::operator->
          (TSharedPtr<ITextInputMethodChangeNotifier,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ITextInputMethodChangeNotifier *pIVar3;
  
  if (this->Object != (ITextInputMethodChangeNotifier *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ITextInputMethodChangeNotifier *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 1429c0eb0

ITextLayoutMarshaller * __thiscall
TSharedPtr<ITextLayoutMarshaller,1>::operator->(TSharedPtr<ITextLayoutMarshaller,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ITextLayoutMarshaller *pIVar3;
  
  if (this->Object != (ITextLayoutMarshaller *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ITextLayoutMarshaller *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 1429c0f00

/* WARNING: Enum "Type": Some values do not have unique names */

SMultiLineEditableTextBox * __thiscall
TSharedPtr<SMultiLineEditableTextBox,1>::operator->(TSharedPtr<SMultiLineEditableTextBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SMultiLineEditableTextBox *pSVar3;
  
  if (this->Object != (SMultiLineEditableTextBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SMultiLineEditableTextBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1429c0f50

STextBlock * __thiscall TSharedPtr<STextBlock,1>::operator->(TSharedPtr<STextBlock,1> *this)

{
  code *pcVar1;
  bool bVar2;
  STextBlock *pSVar3;
  
  if (this->Object != (STextBlock *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (STextBlock *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 142a102a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> * __thiscall
TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1>::ToSharedRef
          (TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1> *this,
          TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> *pTVar4;
  
  if (this->Object == (FTextInputMethodContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FTextInputMethodContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142a10340

TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> * __thiscall
TSharedPtr<SlateEditableTextTypes::FTextSelectionHighlighter,1>::ToSharedRef
          (TSharedPtr<SlateEditableTextTypes::FTextSelectionHighlighter,1> *this,
          TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> *pTVar4;
  
  if (this->Object == (FTextSelectionHighlighter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FTextSelectionHighlighter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142a103e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> * __thiscall
TSharedPtr<FSlateEditableTextLayout::FVirtualKeyboardEntry,1>::ToSharedRef
          (TSharedPtr<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *this,
          TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *pTVar4;
  
  if (this->Object == (FVirtualKeyboardEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FVirtualKeyboardEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// operator-> @ 142a19280

SSplitter * __thiscall TSharedPtr<SSplitter,1>::operator->(TSharedPtr<SSplitter,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSplitter *pSVar3;
  
  if (this->Object != (SSplitter *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSplitter *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142a192d0

/* WARNING: Enum "Type": Some values do not have unique names */

STableColumnHeader * __thiscall
TSharedPtr<STableColumnHeader,1>::operator->(TSharedPtr<STableColumnHeader,1> *this)

{
  code *pcVar1;
  bool bVar2;
  STableColumnHeader *pSVar3;
  
  if (this->Object != (STableColumnHeader *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (STableColumnHeader *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 142a378f0

TSharedRef<SListPanel,1> * __thiscall
TSharedPtr<SListPanel,1>::ToSharedRef
          (TSharedPtr<SListPanel,1> *this,TSharedRef<SListPanel,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SListPanel,1> *pTVar4;
  
  if (this->Object == (SListPanel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SListPanel,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SListPanel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SListPanel,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

