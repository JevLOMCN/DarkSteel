// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 27

// StaticClass @ 146c47ec0

UClass * __cdecl ULevelSequenceDirector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceDirector",
               &Z_Registration_Info_UClass_ULevelSequenceDirector.InnerSingleton,
               StaticRegisterNativesULevelSequenceDirector,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelSequenceDirector>,
               InternalVTableHelperCtorCaller<ULevelSequenceDirector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceDirector.InnerSingleton;
}

// ULevelSequenceDirector @ 146c4e9b0

ULevelSequenceDirector * __thiscall
ULevelSequenceDirector::ULevelSequenceDirector(ULevelSequenceDirector *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->InstanceID = 0xffff;
  this->InstanceSerial = 0;
  this->_padding_ = (longlong)&___7ULevelSequenceDirector__6B_;
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Player).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  return this;
}

// ULevelSequenceDirector @ 146c4e9f0

ULevelSequenceDirector * __thiscall
ULevelSequenceDirector::ULevelSequenceDirector
          (ULevelSequenceDirector *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->InstanceID = 0xffff;
  this->InstanceSerial = 0;
  this->_padding_ = (longlong)&___7ULevelSequenceDirector__6B_;
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Player).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  return this;
}

// ~ULevelSequenceDirector @ 146c4f250

void __thiscall ULevelSequenceDirector::~ULevelSequenceDirector(ULevelSequenceDirector *this)

{
  this->_padding_ = (longlong)&___7ULevelSequenceDirector__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// FindSequenceInstance @ 146c53210

/* WARNING: Enum "Type": Some values do not have unique names */

FSequenceInstance * __thiscall
ULevelSequenceDirector::FindSequenceInstance(ULevelSequenceDirector *this)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  FSequenceInstance *pFVar7;
  longlong lVar8;
  
  pUVar6 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  if (pUVar6 != (UObject *)0x0) {
    uVar1 = this->InstanceID;
    uVar2 = this->InstanceSerial;
    if ((*(longlong *)&pUVar6[0x23].field_0x8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSequenceInstance *)(*pcVar4)();
      return pFVar7;
    }
    lVar3 = *(longlong *)&pUVar6[0x23].field_0x8;
    if ((int)(uint)uVar1 < *(int *)(lVar3 + 0x30)) {
      if ((*(int *)(lVar3 + 0x30) <= (int)(uint)uVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FSequenceInstance *)(*pcVar4)();
        return pFVar7;
      }
      lVar8 = *(longlong *)(lVar3 + 0x28);
      if (*(longlong *)(lVar3 + 0x28) == 0) {
        lVar8 = lVar3 + 0x18;
      }
      if (((*(uint *)(lVar8 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) &&
         (pFVar7 = (FSequenceInstance *)(*(longlong *)(lVar3 + 8) + (ulonglong)uVar1 * 0x140),
         (pFVar7->InstanceHandle).InstanceSerial == uVar2)) {
        return pFVar7;
      }
    }
  }
  return (FSequenceInstance *)0x0;
}

// GetBoundActor @ 146c53800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
ULevelSequenceDirector::GetBoundActor
          (ULevelSequenceDirector *this,FMovieSceneObjectBindingID *param_1)

{
  FMovieSceneSequenceID FVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedPlaybackState *pFVar4;
  code *pcVar5;
  bool bVar6;
  FSequenceInstance *pFVar7;
  AActor *pAVar8;
  UClass *pUVar9;
  FWeakObjectPtr *pFVar10;
  FWeakObjectPtr local_res20;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_28;
  
  pFVar7 = FindSequenceInstance(this);
  if (pFVar7 == (FSequenceInstance *)0x0) {
    FFrame::KismetExecutionMessage(L"No player interface available or assigned.",Error,(FName)0x0);
  }
  else {
    pTVar3 = (pFVar7->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    FVar1.Value = this->SubSequenceID;
    pFVar4 = (pFVar7->SharedPlaybackState).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if ((pFVar4 == (FSharedPlaybackState *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pAVar8 = (AActor *)(*pcVar5)();
      return pAVar8;
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pFVar4;
    local_38.SharedReferenceCount.ReferenceController = pTVar3;
    if ((pFVar4 == (FSharedPlaybackState *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pAVar8 = (AActor *)(*pcVar5)();
      return pAVar8;
    }
    FMovieSceneObjectBindingID::ResolveBoundObjects(param_1,&local_28,FVar1,&local_38);
    for (pFVar10 = &(local_28.DataPtr)->WeakPtr;
        pFVar10 != &local_28.DataPtr[local_28.ArrayNum].WeakPtr; pFVar10 = pFVar10 + 1) {
      local_res20 = *pFVar10;
      pAVar8 = (AActor *)FWeakObjectPtr::Get(&local_res20);
      if (pAVar8 != (AActor *)0x0) {
        pUVar9 = Z_Construct_UClass_AActor_NoRegister();
        iVar2 = (int)pUVar9->_padding_;
        if ((iVar2 <= *(int *)(pAVar8->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar9->_padding_)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          return pAVar8;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return (AActor *)0x0;
}

// GetBoundActors @ 146c53970

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __thiscall
ULevelSequenceDirector::GetBoundActors
          (ULevelSequenceDirector *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieSceneObjectBindingID *param_1)

{
  FMovieSceneSequenceID FVar1;
  FSharedPlaybackState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSequenceInstance *pFVar8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  FWeakObjectPtr *pFVar12;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_50;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = FindSequenceInstance(this);
  if (pFVar8 == (FSequenceInstance *)0x0) {
    FFrame::KismetExecutionMessage(L"No player interface available or assigned.",Error,(FName)0x0);
    return __return_storage_ptr__;
  }
  FVar1.Value = this->SubSequenceID;
  pFVar2 = (pFVar8->SharedPlaybackState).Object;
  pTVar3 = (pFVar8->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if ((pFVar2 == (FSharedPlaybackState *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50.Object = pFVar2;
  local_50.SharedReferenceCount.ReferenceController = pTVar3;
  if ((pFVar2 == (FSharedPlaybackState *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  FMovieSceneObjectBindingID::ResolveBoundObjects(param_1,&local_40,FVar1,&local_50);
  pFVar12 = &(local_40.DataPtr)->WeakPtr;
  do {
    if (pFVar12 == &local_40.DataPtr[local_40.ArrayNum].WeakPtr) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return __return_storage_ptr__;
    }
    local_res20 = *pFVar12;
    pUVar10 = FWeakObjectPtr::Get(&local_res20);
    if (pUVar10 == (UObject *)0x0) {
LAB_146c53b6f:
      local_58 = (UObject *)0x0;
    }
    else {
      pUVar11 = Z_Construct_UClass_AActor_NoRegister();
      iVar7 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar11->_padding_)) goto LAB_146c53b6f;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_58 = pUVar10;
      if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           local_58;
    }
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// GetBoundObject @ 146c53bf0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
ULevelSequenceDirector::GetBoundObject
          (ULevelSequenceDirector *this,FMovieSceneObjectBindingID *param_1)

{
  FMovieSceneSequenceID FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSequenceInstance *pFVar6;
  UObject *pUVar7;
  FWeakObjectPtr *pFVar8;
  FWeakObjectPtr local_res20;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_28;
  
  pFVar6 = FindSequenceInstance(this);
  if (pFVar6 == (FSequenceInstance *)0x0) {
    FFrame::KismetExecutionMessage(L"No player interface available or assigned.",Error,(FName)0x0);
  }
  else {
    pTVar2 = (pFVar6->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    FVar1.Value = this->SubSequenceID;
    pFVar3 = (pFVar6->SharedPlaybackState).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((pFVar3 == (FSharedPlaybackState *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UObject *)(*pcVar4)();
      return pUVar7;
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pFVar3;
    local_38.SharedReferenceCount.ReferenceController = pTVar2;
    if ((pFVar3 == (FSharedPlaybackState *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UObject *)(*pcVar4)();
      return pUVar7;
    }
    FMovieSceneObjectBindingID::ResolveBoundObjects(param_1,&local_28,FVar1,&local_38);
    for (pFVar8 = &(local_28.DataPtr)->WeakPtr;
        pFVar8 != &local_28.DataPtr[local_28.ArrayNum].WeakPtr; pFVar8 = pFVar8 + 1) {
      local_res20 = *pFVar8;
      pUVar7 = FWeakObjectPtr::Get(&local_res20);
      if (pUVar7 != (UObject *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        return pUVar7;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return (UObject *)0x0;
}

// GetBoundObjects @ 146c53d50

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
ULevelSequenceDirector::GetBoundObjects
          (ULevelSequenceDirector *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieSceneObjectBindingID *param_1)

{
  FMovieSceneSequenceID FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSequenceInstance *pFVar8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FWeakObjectPtr *pFVar10;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_50;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = FindSequenceInstance(this);
  if (pFVar8 == (FSequenceInstance *)0x0) {
    FFrame::KismetExecutionMessage(L"No player interface available or assigned.",Error,(FName)0x0);
  }
  else {
    pTVar2 = (pFVar8->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    FVar1.Value = this->SubSequenceID;
    pFVar3 = (pFVar8->SharedPlaybackState).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((pFVar3 == (FSharedPlaybackState *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50.Object = pFVar3;
    local_50.SharedReferenceCount.ReferenceController = pTVar2;
    if ((pFVar3 == (FSharedPlaybackState *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    FMovieSceneObjectBindingID::ResolveBoundObjects(param_1,&local_40,FVar1,&local_50);
    for (pFVar10 = &(local_40.DataPtr)->WeakPtr;
        pFVar10 != &local_40.DataPtr[local_40.ArrayNum].WeakPtr; pFVar10 = pFVar10 + 1) {
      local_res20 = *pFVar10;
      local_58 = FWeakObjectPtr::Get(&local_res20);
      if (local_58 != (UObject *)0x0) {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_58;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return __return_storage_ptr__;
}

// GetCurrentTime @ 146c54080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FQualifiedFrameTime * __thiscall
ULevelSequenceDirector::GetCurrentTime
          (ULevelSequenceDirector *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *this_00;
  FFrameRate FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSequenceInstance *pFVar7;
  FQualifiedFrameTime *pFVar8;
  FMovieSceneSubSequenceData *pFVar9;
  FMovieSceneSequenceHierarchy *pFVar10;
  uint *puVar11;
  longlong lVar12;
  FMovieSceneSubSequenceData *this_01;
  undefined1 *puVar13;
  FMovieSceneSubSequenceData *pFVar14;
  FFrameTime local_a0;
  FMovieSceneContext local_98;
  
  pFVar7 = FindSequenceInstance(this);
  if (pFVar7 == (FSequenceInstance *)0x0) {
    (__return_storage_ptr__->Time).FrameNumber = 0;
    (__return_storage_ptr__->Time).SubFrame = 0.0;
    (__return_storage_ptr__->Rate).Numerator = 60000;
    (__return_storage_ptr__->Rate).Denominator = 1;
    return __return_storage_ptr__;
  }
  pTVar2 = (pFVar7->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  this_00 = (pFVar7->SharedPlaybackState).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if ((this_00 == (FSharedPlaybackState *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FQualifiedFrameTime *)(*pcVar4)();
    return pFVar8;
  }
  pFVar9 = (FMovieSceneSubSequenceData *)FWeakObjectPtr::Get(&(this_00->WeakRootSequence).WeakPtr);
  uVar1 = this->SubSequenceID;
  if (uVar1 != 0) {
    if ((this_00 == (FSharedPlaybackState *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FQualifiedFrameTime *)(*pcVar4)();
      return pFVar8;
    }
    pFVar10 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(this_00);
    pFVar14 = (FMovieSceneSubSequenceData *)0x0;
    pFVar9 = pFVar14;
    if (*(int *)&(pFVar10->SubSequences).field_0x8 != *(int *)&(pFVar10->SubSequences).field_0x34) {
      puVar13 = *(undefined1 **)&(pFVar10->SubSequences).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(pFVar10->SubSequences).field_0x38;
      }
      uVar6 = *(uint *)(puVar13 +
                       (ulonglong)(*(int *)&(pFVar10->SubSequences).field_0x48 - 1U & uVar1) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar11 = (uint *)((longlong)(int)uVar6 * 0x120 + *(longlong *)&pFVar10->SubSequences);
          pFVar9 = (FMovieSceneSubSequenceData *)0x0;
          if (*puVar11 == uVar1) {
            this_01 = (FMovieSceneSubSequenceData *)(puVar11 + 2);
            if (puVar11 == (uint *)0x0) {
              this_01 = pFVar14;
            }
            if (this_01 != (FMovieSceneSubSequenceData *)0x0) {
              pFVar9 = (FMovieSceneSubSequenceData *)
                       FMovieSceneSubSequenceData::GetSequence(this_01);
            }
            break;
          }
          uVar6 = puVar11[0x46];
        } while (uVar6 != 0xffffffff);
      }
    }
  }
  lVar12 = (**(code **)((longlong)(pFVar9->Sequence).AssetPath.PackageName + 0x2f8))(pFVar9);
  FVar3 = *(FFrameRate *)(lVar12 + 0x140);
  FMovieSceneContext::FMovieSceneContext(&local_98,&pFVar7->Context);
  if (local_98._padding_._4_4_ == 0x80000000) {
    if ((int)local_98._padding_ == 0) {
      local_98._4_8_ = local_98._padding_;
      if ((local_98._padding_._4_1_ == '\x02') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), local_98._4_8_ = local_98._padding_, bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FQualifiedFrameTime *)(*pcVar4)();
        return pFVar8;
      }
    }
    else if (((char)local_98._padding_ == '\x02') &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FQualifiedFrameTime *)(*pcVar4)();
      return pFVar8;
    }
  }
  else {
    local_98._padding_._0_4_ = 0;
    local_98._padding_._4_4_ = local_98._padding_._4_4_;
  }
  ConvertFrameTime((FFrameTime)&local_a0,(FFrameRate)local_98._4_8_,(FFrameRate)local_98._padding_);
  __return_storage_ptr__->Time = local_a0;
  __return_storage_ptr__->Rate = FVar3;
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_98.RootToSequenceWarpCounter);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_98.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
             local_98.RootToSequenceTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_98.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_98.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146c55b00

UClass * __cdecl ULevelSequenceDirector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceDirector",
               &Z_Registration_Info_UClass_ULevelSequenceDirector.InnerSingleton,
               StaticRegisterNativesULevelSequenceDirector,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelSequenceDirector>,
               InternalVTableHelperCtorCaller<ULevelSequenceDirector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceDirector.InnerSingleton;
}

// GetRootSequenceCustomClock @ 146c55df0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneClock * __thiscall
ULevelSequenceDirector::GetRootSequenceCustomClock(ULevelSequenceDirector *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedPlaybackState *pFVar2;
  code *pcVar3;
  bool bVar4;
  FSequenceInstance *pFVar5;
  UMovieSceneClock *pUVar6;
  UObject *pUVar7;
  UMovieScene *this_00;
  
  pFVar5 = FindSequenceInstance(this);
  if (pFVar5 != (FSequenceInstance *)0x0) {
    pTVar1 = (pFVar5->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    pFVar2 = (pFVar5->SharedPlaybackState).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pFVar2 == (FSharedPlaybackState *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UMovieSceneClock *)(*pcVar3)();
        return pUVar6;
      }
    }
    pUVar7 = FWeakObjectPtr::Get(&(pFVar2->WeakRootSequence).WeakPtr);
    if (pUVar7 != (UObject *)0x0) {
      this_00 = (UMovieScene *)(**(code **)(*(longlong *)pUVar7 + 0x2f8))(pUVar7);
      if (this_00 != (UMovieScene *)0x0) {
        pUVar6 = UMovieScene::GetCustomClock(this_00);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pUVar6;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return (UMovieSceneClock *)0x0;
}

// GetRootSequenceTime @ 146c55ec0

/* WARNING: Enum "Type": Some values do not have unique names */

FQualifiedFrameTime * __thiscall
ULevelSequenceDirector::GetRootSequenceTime
          (ULevelSequenceDirector *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  ushort uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *pFVar3;
  longlong lVar4;
  FFrameRate FVar5;
  code *pcVar6;
  bool bVar7;
  FSequenceInstance *pFVar8;
  FQualifiedFrameTime *pFVar9;
  UObject *pUVar10;
  UMovieSceneEntitySystemLinker *this_00;
  FInstanceRegistry *pFVar11;
  longlong lVar12;
  FFrameTime local_b0;
  FMovieSceneContext local_a8;
  
  pFVar8 = FindSequenceInstance(this);
  if (pFVar8 != (FSequenceInstance *)0x0) {
    pTVar2 = (pFVar8->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar8->SharedPlaybackState).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((pFVar3 == (FSharedPlaybackState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FQualifiedFrameTime *)(*pcVar6)();
      return pFVar9;
    }
    pUVar10 = FWeakObjectPtr::Get(&(pFVar3->WeakRootSequence).WeakPtr);
    if (pUVar10 != (UObject *)0x0) {
      uVar1 = *(ushort *)&pFVar8->RootInstanceHandle;
      if ((pFVar3 == (FSharedPlaybackState *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FQualifiedFrameTime *)(*pcVar6)();
        return pFVar9;
      }
      this_00 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(pFVar3->WeakLinker).WeakPtr);
      pFVar11 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(this_00);
      lVar4 = *(longlong *)&pFVar11->Instances;
      lVar12 = (**(code **)(*(longlong *)pUVar10 + 0x2f8))(pUVar10);
      FVar5 = *(FFrameRate *)(lVar12 + 0x140);
      FMovieSceneContext::FMovieSceneContext
                (&local_a8,(FMovieSceneContext *)(lVar4 + 0x68 + (ulonglong)uVar1 * 0x140));
      if (local_a8._padding_._4_4_ == 0x80000000) {
        if ((int)local_a8._padding_ == 0) {
          local_a8._4_8_ = local_a8._padding_;
          if ((local_a8._padding_._4_1_ == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), local_a8._4_8_ = local_a8._padding_, bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar9 = (FQualifiedFrameTime *)(*pcVar6)();
            return pFVar9;
          }
        }
        else if (((char)local_a8._padding_ == '\x02') &&
                (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FQualifiedFrameTime *)(*pcVar6)();
          return pFVar9;
        }
      }
      else {
        local_a8._padding_._0_4_ = 0;
        local_a8._padding_._4_4_ = local_a8._padding_._4_4_;
      }
      ConvertFrameTime((FFrameTime)&local_b0,(FFrameRate)local_a8._4_8_,
                       (FFrameRate)local_a8._padding_);
      __return_storage_ptr__->Time = local_b0;
      __return_storage_ptr__->Rate = FVar5;
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_a8.RootToSequenceWarpCounter);
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)
                 local_a8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                 local_a8.RootToSequenceTransform.NestedTransforms.ArrayNum);
      if ((FMovieSceneNestedSequenceTransform *)
          local_a8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
          (FMovieSceneNestedSequenceTransform *)0x0) {
        FMemory::Free(local_a8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  (__return_storage_ptr__->Time).FrameNumber = 0;
  (__return_storage_ptr__->Time).SubFrame = 0.0;
  (__return_storage_ptr__->Rate).Numerator = 60000;
  (__return_storage_ptr__->Rate).Denominator = 1;
  return __return_storage_ptr__;
}

// GetSequence @ 146c56110

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneSequence * __thiscall ULevelSequenceDirector::GetSequence(ULevelSequenceDirector *this)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSequenceInstance *pFVar6;
  UMovieSceneSequence *pUVar7;
  FMovieSceneSubSequenceData *pFVar8;
  FMovieSceneSequenceHierarchy *pFVar9;
  uint *puVar10;
  FMovieSceneSubSequenceData *this_01;
  undefined1 *puVar11;
  FMovieSceneSubSequenceData *pFVar12;
  
  pFVar6 = FindSequenceInstance(this);
  if (pFVar6 == (FSequenceInstance *)0x0) {
    FFrame::KismetExecutionMessage(L"No sequence player.",Error,(FName)0x0);
    return (UMovieSceneSequence *)0x0;
  }
  pTVar2 = (pFVar6->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  uVar1 = this->SubSequenceID;
  this_00 = (pFVar6->SharedPlaybackState).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (uVar1 == 0) {
    if ((this_00 == (FSharedPlaybackState *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UMovieSceneSequence *)(*pcVar3)();
      return pUVar7;
    }
    pFVar8 = (FMovieSceneSubSequenceData *)FWeakObjectPtr::Get(&(this_00->WeakRootSequence).WeakPtr)
    ;
  }
  else {
    if ((this_00 == (FSharedPlaybackState *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UMovieSceneSequence *)(*pcVar3)();
      return pUVar7;
    }
    pFVar9 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(this_00);
    pFVar12 = (FMovieSceneSubSequenceData *)0x0;
    pFVar8 = pFVar12;
    if (*(int *)&(pFVar9->SubSequences).field_0x8 != *(int *)&(pFVar9->SubSequences).field_0x34) {
      puVar11 = *(undefined1 **)&(pFVar9->SubSequences).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(pFVar9->SubSequences).field_0x38;
      }
      uVar5 = *(uint *)(puVar11 +
                       (ulonglong)(*(int *)&(pFVar9->SubSequences).field_0x48 - 1U & uVar1) * 4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar5 * 0x120 + *(longlong *)&pFVar9->SubSequences);
          pFVar8 = (FMovieSceneSubSequenceData *)0x0;
          if (*puVar10 == uVar1) {
            this_01 = (FMovieSceneSubSequenceData *)(puVar10 + 2);
            if (puVar10 == (uint *)0x0) {
              this_01 = pFVar12;
            }
            if (this_01 != (FMovieSceneSubSequenceData *)0x0) {
              pFVar8 = (FMovieSceneSubSequenceData *)
                       FMovieSceneSubSequenceData::GetSequence(this_01);
            }
            break;
          }
          uVar5 = puVar10[0x46];
        } while (uVar5 != 0xffffffff);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (UMovieSceneSequence *)pFVar8;
}

// GetSequenceCustomClock @ 146c56290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneClock * __thiscall
ULevelSequenceDirector::GetSequenceCustomClock(ULevelSequenceDirector *this)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSequenceInstance *pFVar6;
  UMovieSceneClock *pUVar7;
  FMovieSceneSubSequenceData *pFVar8;
  FMovieSceneSequenceHierarchy *pFVar9;
  uint *puVar10;
  UMovieScene *this_01;
  FMovieSceneSubSequenceData *this_02;
  undefined1 *puVar11;
  FMovieSceneSubSequenceData *pFVar12;
  
  pFVar6 = FindSequenceInstance(this);
  if (pFVar6 != (FSequenceInstance *)0x0) {
    pTVar2 = (pFVar6->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    this_00 = (pFVar6->SharedPlaybackState).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((this_00 == (FSharedPlaybackState *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UMovieSceneClock *)(*pcVar3)();
      return pUVar7;
    }
    pFVar8 = (FMovieSceneSubSequenceData *)FWeakObjectPtr::Get(&(this_00->WeakRootSequence).WeakPtr)
    ;
    uVar1 = this->SubSequenceID;
    if (uVar1 != 0) {
      if ((this_00 == (FSharedPlaybackState *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UMovieSceneClock *)(*pcVar3)();
        return pUVar7;
      }
      pFVar9 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(this_00);
      pFVar12 = (FMovieSceneSubSequenceData *)0x0;
      pFVar8 = pFVar12;
      if (*(int *)&(pFVar9->SubSequences).field_0x8 != *(int *)&(pFVar9->SubSequences).field_0x34) {
        puVar11 = *(undefined1 **)&(pFVar9->SubSequences).field_0x40;
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = &(pFVar9->SubSequences).field_0x38;
        }
        uVar5 = *(uint *)(puVar11 +
                         (ulonglong)(*(int *)&(pFVar9->SubSequences).field_0x48 - 1U & uVar1) * 4);
        if (uVar5 != 0xffffffff) {
          do {
            puVar10 = (uint *)((longlong)(int)uVar5 * 0x120 + *(longlong *)&pFVar9->SubSequences);
            pFVar8 = (FMovieSceneSubSequenceData *)0x0;
            if (*puVar10 == uVar1) {
              this_02 = (FMovieSceneSubSequenceData *)(puVar10 + 2);
              if (puVar10 == (uint *)0x0) {
                this_02 = pFVar12;
              }
              if (this_02 != (FMovieSceneSubSequenceData *)0x0) {
                pFVar8 = (FMovieSceneSubSequenceData *)
                         FMovieSceneSubSequenceData::GetSequence(this_02);
              }
              break;
            }
            uVar5 = puVar10[0x46];
          } while (uVar5 != 0xffffffff);
        }
      }
    }
    if ((pFVar8 != (FMovieSceneSubSequenceData *)0x0) &&
       (this_01 = (UMovieScene *)
                  (**(code **)((longlong)(pFVar8->Sequence).AssetPath.PackageName + 0x2f8))(pFVar8),
       this_01 != (UMovieScene *)0x0)) {
      pUVar7 = UMovieScene::GetCustomClock(this_01);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return pUVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return (UMovieSceneClock *)0x0;
}

// GetWorld @ 146c56550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall ULevelSequenceDirector::GetWorld(ULevelSequenceDirector *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UWorld *pUVar3;
  
  pUVar1 = Z_Construct_UClass_ULevel_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  if (pUVar2 != (UObject *)0x0) {
    return *(UWorld **)&pUVar2[4].field_0x20;
  }
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar3 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar3;
}

// OnCreated @ 146c57d60

void __thiscall ULevelSequenceDirector::OnCreated(ULevelSequenceDirector *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ULevelSequenceDirector_OnCreated);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146c57d8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// StaticRegisterNativesULevelSequenceDirector @ 146c5c640

void __cdecl ULevelSequenceDirector::StaticRegisterNativesULevelSequenceDirector(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_ULevelSequenceDirector_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBoundActor @ 146c5f280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ULevelSequenceDirector::execGetBoundActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *pAVar2;
  FGuid local_48;
  int local_38;
  int iStack_34;
  FMovieSceneObjectBindingID local_28;
  
  iStack_34 = -1;
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28.ResolveParentIndex = iStack_34;
  local_28.SequenceID = local_38;
  local_28.Guid.A = local_48.A;
  local_28.Guid.B = local_48.B;
  local_28.Guid.C = local_48.C;
  local_28.Guid.D = local_48.D;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar2 = GetBoundActor((ULevelSequenceDirector *)param_1,&local_28);
  *(AActor **)param_3 = pAVar2;
  return;
}

// execGetBoundActors @ 146c5f340

void __cdecl
ULevelSequenceDirector::execGetBoundActors(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48;
  int local_38;
  int iStack_34;
  FMovieSceneObjectBindingID local_28;
  
  iStack_34 = -1;
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28.ResolveParentIndex = iStack_34;
  local_28.SequenceID = local_38;
  local_28.Guid.A = local_48.A;
  local_28.Guid.B = local_48.B;
  local_28.Guid.C = local_48.C;
  local_28.Guid.D = local_48.D;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetBoundActors((ULevelSequenceDirector *)param_1,&local_58,&local_28);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execGetBoundObject @ 146c5f440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ULevelSequenceDirector::execGetBoundObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneSequenceID FVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedPlaybackState *pFVar4;
  code *pcVar5;
  bool bVar6;
  FSequenceInstance *pFVar7;
  UObject *pUVar8;
  FWeakObjectPtr *pFVar9;
  FWeakObjectPtr local_res18 [2];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_88;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_78;
  FGuid local_68;
  int local_58;
  int iStack_54;
  FMovieSceneObjectBindingID local_48;
  
  iStack_54 = -1;
  local_68.A = 0;
  local_68.B = 0;
  local_68.C = 0;
  local_68.D = 0;
  local_58 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_48.ResolveParentIndex = iStack_54;
  local_48.SequenceID = local_58;
  local_48.Guid.A = local_68.A;
  local_48.Guid.B = local_68.B;
  local_48.Guid.C = local_68.C;
  local_48.Guid.D = local_68.D;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar7 = FindSequenceInstance((ULevelSequenceDirector *)param_1);
  if (pFVar7 == (FSequenceInstance *)0x0) {
    FFrame::KismetExecutionMessage(L"No player interface available or assigned.",Error,(FName)0x0);
  }
  else {
    FVar1.Value = *(uint *)(param_1 + 1);
    pTVar3 = (pFVar7->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    pFVar4 = (pFVar7->SharedPlaybackState).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if ((pFVar4 == (FSharedPlaybackState *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88.Object = pFVar4;
    local_88.SharedReferenceCount.ReferenceController = pTVar3;
    if ((pFVar4 == (FSharedPlaybackState *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FMovieSceneObjectBindingID::ResolveBoundObjects(&local_48,&local_78,FVar1,&local_88);
    for (pFVar9 = &(local_78.DataPtr)->WeakPtr;
        pFVar9 != &local_78.DataPtr[local_78.ArrayNum].WeakPtr; pFVar9 = pFVar9 + 1) {
      local_res18[0] = *pFVar9;
      pUVar8 = FWeakObjectPtr::Get(local_res18);
      if (pUVar8 != (UObject *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        *(UObject **)param_3 = pUVar8;
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetBoundObjects @ 146c5f640

void __cdecl
ULevelSequenceDirector::execGetBoundObjects(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48;
  int local_38;
  int iStack_34;
  FMovieSceneObjectBindingID local_28;
  
  iStack_34 = -1;
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28.ResolveParentIndex = iStack_34;
  local_28.SequenceID = local_38;
  local_28.Guid.A = local_48.A;
  local_28.Guid.B = local_48.B;
  local_28.Guid.C = local_48.C;
  local_28.Guid.D = local_48.D;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetBoundObjects((ULevelSequenceDirector *)param_1,&local_58,&local_28);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execGetCurrentTime @ 146c5f740

void __cdecl
ULevelSequenceDirector::execGetCurrentTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FFrameRate FVar1;
  FQualifiedFrameTime *pFVar2;
  FQualifiedFrameTime local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetCurrentTime((ULevelSequenceDirector *)param_1,&local_18);
  FVar1 = pFVar2->Rate;
  *(FFrameTime *)param_3 = pFVar2->Time;
  *(FFrameRate *)((longlong)param_3 + 8) = FVar1;
  return;
}

// execGetRootSequenceCustomClock @ 146c603e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ULevelSequenceDirector::execGetRootSequenceCustomClock
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedPlaybackState *pFVar2;
  code *pcVar3;
  bool bVar4;
  FSequenceInstance *pFVar5;
  UObject *pUVar6;
  UMovieScene *this;
  UMovieSceneClock *pUVar7;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FindSequenceInstance((ULevelSequenceDirector *)param_1);
  if (pFVar5 != (FSequenceInstance *)0x0) {
    pTVar1 = (pFVar5->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    pFVar2 = (pFVar5->SharedPlaybackState).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pFVar2 == (FSharedPlaybackState *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar6 = FWeakObjectPtr::Get(&(pFVar2->WeakRootSequence).WeakPtr);
    if (pUVar6 != (UObject *)0x0) {
      this = (UMovieScene *)(**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6);
      if (this != (UMovieScene *)0x0) {
        pUVar7 = UMovieScene::GetCustomClock(this);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        *(UMovieSceneClock **)param_3 = pUVar7;
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetRootSequenceTime @ 146c604d0

void __cdecl
ULevelSequenceDirector::execGetRootSequenceTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FFrameRate FVar1;
  FQualifiedFrameTime *pFVar2;
  FQualifiedFrameTime local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetRootSequenceTime((ULevelSequenceDirector *)param_1,&local_18);
  FVar1 = pFVar2->Rate;
  *(FFrameTime *)param_3 = pFVar2->Time;
  *(FFrameRate *)((longlong)param_3 + 8) = FVar1;
  return;
}

// execGetSequence @ 146c60570

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl ULevelSequenceDirector::execGetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieSceneSequence *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetSequence((ULevelSequenceDirector *)param_1);
  *(UMovieSceneSequence **)param_3 = pUVar1;
  return;
}

// execGetSequenceCustomClock @ 146c605b0

void __cdecl
ULevelSequenceDirector::execGetSequenceCustomClock(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieSceneClock *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetSequenceCustomClock((ULevelSequenceDirector *)param_1);
  *(UMovieSceneClock **)param_3 = pUVar1;
  return;
}

