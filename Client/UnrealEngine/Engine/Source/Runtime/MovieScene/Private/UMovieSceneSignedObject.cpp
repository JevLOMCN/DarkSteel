// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 15

// StaticClass @ 14605ced0

UClass * __cdecl UMovieSceneSignedObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSignedObject.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSignedObject",
               &Z_Registration_Info_UClass_UMovieSceneSignedObject.InnerSingleton,
               StaticRegisterNativesUMovieSceneSignedObject,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSignedObject>,
               InternalVTableHelperCtorCaller<UMovieSceneSignedObject>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSignedObject.InnerSingleton;
}

// UMovieSceneSignedObject @ 1461fe6e0

UMovieSceneSignedObject * __thiscall
UMovieSceneSignedObject::UMovieSceneSignedObject
          (UMovieSceneSignedObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneSignedObject__6B_;
  (this->Signature).A = 0;
  (this->Signature).B = 0;
  (this->Signature).C = 0;
  (this->Signature).D = 0;
  *(undefined8 *)&this->OnSignatureChangedEvent = 0;
  *(undefined8 *)&(this->OnSignatureChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnSignatureChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnSignatureChangedEvent).field_0x18 = 2;
  return this;
}

// UMovieSceneSignedObject @ 1461fe730

UMovieSceneSignedObject * __thiscall
UMovieSceneSignedObject::UMovieSceneSignedObject
          (UMovieSceneSignedObject *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  UMovieSceneSignedObject *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  FWeakReferencer<1> FVar6;
  FWeakReferencer<1> FVar7;
  bool bVar8;
  
  UObject::UObject((UObject *)this,param_1);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UMovieSceneSignedObject__6B_;
  (this->Signature).A = 0;
  (this->Signature).B = 0;
  (this->Signature).C = 0;
  (this->Signature).D = 0;
  *(undefined8 *)&this->OnSignatureChangedEvent = 0;
  *(undefined8 *)&(this->OnSignatureChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnSignatureChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnSignatureChangedEvent).field_0x18 = 2;
  FVar7 = UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount;
  if ((this->_padding_ & 8) == 0) {
    return this;
  }
  if (UE::MovieScene::GDeferredSignedObjectChangeHandler.Object ==
      (IDeferredSignedObjectChangeHandler *)0x0) {
    return this;
  }
  if (UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    return this;
  }
  if ((int)(UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.
           ReferenceController)->SharedReferenceCount < 1) {
    return this;
  }
  FVar6 = FVar7;
  if (UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.
            ReferenceController)->SharedReferenceCount;
    do {
      FVar6.ReferenceController = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1461fe7c1;
      LOCK();
      aVar3 = (FVar7.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar5 = (TReferenceControllerBase<1> *)
             UE::MovieScene::GDeferredSignedObjectChangeHandler.Object;
    FVar6 = FVar7;
    if (UE::MovieScene::GDeferredSignedObjectChangeHandler.Object !=
        (IDeferredSignedObjectChangeHandler *)0x0) goto LAB_1461fe7e7;
  }
LAB_1461fe7c1:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  FVar7.ReferenceController = FVar6.ReferenceController;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UMovieSceneSignedObject *)(*pcVar1)();
    return pUVar4;
  }
LAB_1461fe7e7:
  (**(code **)(pTVar5->_padding_ + 0x10))(pTVar5,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// ~UMovieSceneSignedObject @ 1462000d0

void __thiscall UMovieSceneSignedObject::~UMovieSceneSignedObject(UMovieSceneSignedObject *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneSignedObject__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSignatureChangedEvent).field_0x8,
             *(int *)&(this->OnSignatureChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnSignatureChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSignatureChangedEvent);
  UObject::~UObject((UObject *)this);
  return;
}

// AddFlushSignal @ 146204f20

void __cdecl
UMovieSceneSignedObject::AddFlushSignal
          (TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1> local_res8 [2];
  
  TSet<TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1>,DefaultKeyFuncs<TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1>,0>,FDefaultSetAllocator>
  ::Emplace<TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1>_const_&>
            (&UE::MovieScene::GDeferredSignedObjectFlushSignals,local_res8,(bool *)param_1);
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000146204f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// BroadcastChanged @ 1462089a0

void __thiscall UMovieSceneSignedObject::BroadcastChanged(UMovieSceneSignedObject *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  UClass *pUVar7;
  int iVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->OnSignatureChangedEvent);
  lVar1 = this->_padding_;
  do {
    if (lVar1 == 0) {
      return;
    }
    pUVar7 = StaticClass();
    iVar8 = (int)pUVar7->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar8 * 8) ==
        &pUVar7->_padding_)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x40),
                 (FWriteAccessScope *)&local_38);
      *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + 1;
      bVar4 = false;
      iVar8 = *(int *)(lVar1 + 0x50) + -1;
      if (-1 < iVar8) {
        lVar9 = (longlong)iVar8 << 4;
        do {
          if ((*(int *)(lVar1 + 0x50) <= iVar8) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(int *)(lVar9 + 8 + *(longlong *)(lVar1 + 0x48)) == 0) ||
              (plVar2 = *(longlong **)(lVar9 + *(longlong *)(lVar1 + 0x48)),
              plVar2 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
            bVar4 = true;
          }
          lVar9 = lVar9 + -0x10;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + -1;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 0x40),false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
  } while( true );
}

// GetDeferredHandler @ 1462177e0

TWeakPtr<UE::MovieScene::IDeferredSignedObjectChangeHandler,1> * __cdecl
UMovieSceneSignedObject::GetDeferredHandler
          (TWeakPtr<UE::MovieScene::IDeferredSignedObjectChangeHandler,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FWeakReferencer<1> FVar2;
  
  __return_storage_ptr__->Object = UE::MovieScene::GDeferredSignedObjectChangeHandler.Object;
  FVar2 = UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
       UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->WeakReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14621bfc0

UClass * __cdecl UMovieSceneSignedObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSignedObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSignedObject",
               &Z_Registration_Info_UClass_UMovieSceneSignedObject.InnerSingleton,
               StaticRegisterNativesUMovieSceneSignedObject,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSignedObject>,
               InternalVTableHelperCtorCaller<UMovieSceneSignedObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSignedObject.InnerSingleton;
}

// MarkAsChanged @ 146224520

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneSignedObject::MarkAsChanged(UMovieSceneSignedObject *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  atomic<int> aVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  atomic<int> aVar12;
  UClass *pUVar13;
  UMovieSceneCompiledDataManager *this_00;
  FGuid *pFVar14;
  int iVar15;
  FWeakReferencer<1> FVar16;
  FWeakReferencer<1> FVar17;
  TReferenceControllerBase<1> *pTVar18;
  longlong lVar19;
  TReferenceControllerBase<1> *pTVar20;
  UMovieSceneSequence *local_res10;
  UMovieSceneSignedObject *local_68;
  UMovieSceneSequence **local_60;
  FGuid local_58;
  FGuid local_48;
  FDestructionSentinel local_38;
  
  if (UE::MovieScene::GScopedSignedObjectWarnModifyCompiledData != 0) {
    pUVar13 = UMovieSceneSequence::StaticClass();
    local_res10 = (UMovieSceneSequence *)
                  UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar13);
    if (local_res10 != (UMovieSceneSequence *)0x0) {
      this_00 = UMovieSceneCompiledDataManager::GetPrecompiledData();
      if ((this_00 == (UMovieSceneCompiledDataManager *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CompiledDataManager",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSignedObject.cpp"
                             ,0xa9,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar9 = UMovieSceneCompiledDataManager::CanMarkSignedObjectAsChangedDuringCook
                        (this_00,local_res10);
      if (!bVar9) {
        local_60 = &local_res10;
        local_68 = this;
        `UMovieSceneSignedObject::MarkAsChanged'::__l8::<lambda_1>::operator()(&local_68);
      }
    }
  }
  if (UE::MovieScene::GScopedSignedObjectSuppressCount != 0) {
    return;
  }
  pFVar14 = FGuid::NewGuid(&local_58);
  lVar1 = this->_padding_;
  uVar6 = pFVar14->B;
  uVar7 = pFVar14->C;
  uVar8 = pFVar14->D;
  (this->Signature).A = pFVar14->A;
  (this->Signature).B = uVar6;
  (this->Signature).C = uVar7;
  (this->Signature).D = uVar8;
  FVar16 = UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount;
  for (; UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController =
              FVar16.ReferenceController, lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    pUVar13 = StaticClass();
    iVar15 = (int)pUVar13->_padding_;
    if ((iVar15 <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar15 * 8)
        == &pUVar13->_padding_)) {
      pFVar14 = FGuid::NewGuid(&local_48);
      uVar4 = *(undefined8 *)&pFVar14->C;
      *(undefined8 *)(lVar1 + 0x2c) = *(undefined8 *)pFVar14;
      *(undefined8 *)(lVar1 + 0x34) = uVar4;
    }
    FVar16.ReferenceController =
         UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController;
  }
  pTVar20 = (TReferenceControllerBase<1> *)0x0;
  if (UE::MovieScene::GScopedSignedObjectDeferCount == 0) {
    if (((UE::MovieScene::GDeferredSignedObjectChangeHandler.Object !=
          (IDeferredSignedObjectChangeHandler *)0x0) &&
        (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0)) &&
       (0 < (int)(FVar16.ReferenceController)->SharedReferenceCount)) {
      FVar17.ReferenceController = FVar16.ReferenceController;
      pTVar18 = pTVar20;
      if (FVar16.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_146224695:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        FVar16.ReferenceController = FVar17.ReferenceController;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        aVar5 = (FVar16.ReferenceController)->SharedReferenceCount;
        do {
          FVar17.ReferenceController = pTVar20;
          pTVar18 = (TReferenceControllerBase<1> *)0x0;
          if (aVar5 == (atomic<int>)0x0) goto LAB_146224695;
          LOCK();
          aVar12 = (FVar16.ReferenceController)->SharedReferenceCount;
          bVar9 = aVar5 == aVar12;
          if (bVar9) {
            (FVar16.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar12 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar12;
        } while (!bVar9);
        FVar17.ReferenceController = FVar16.ReferenceController;
        pTVar18 = (TReferenceControllerBase<1> *)
                  UE::MovieScene::GDeferredSignedObjectChangeHandler.Object;
        if (UE::MovieScene::GDeferredSignedObjectChangeHandler.Object ==
            (IDeferredSignedObjectChangeHandler *)0x0) goto LAB_146224695;
      }
      (**(code **)(pTVar18->_padding_ + 0x18))(pTVar18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar16.ReferenceController);
    }
    if (UE::MovieScene::GScopedSignedObjectDeferCount == 0) goto LAB_146224786;
  }
  FVar16.ReferenceController =
       UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController;
  if (((UE::MovieScene::GDeferredSignedObjectChangeHandler.Object ==
        (IDeferredSignedObjectChangeHandler *)0x0) ||
      (UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.
           ReferenceController)->SharedReferenceCount < 1)) {
LAB_146224786:
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->OnSignatureChangedEvent);
    lVar1 = this->_padding_;
    do {
      if (lVar1 == 0) {
        UE::MovieScene::SignalScopedSignedObjectModifyFlush();
        return;
      }
      pUVar13 = StaticClass();
      iVar15 = (int)pUVar13->_padding_;
      if ((iVar15 <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar15 * 8)
          == &pUVar13->_padding_)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x40),
                   (FWriteAccessScope *)&local_38);
        *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + 1;
        bVar9 = false;
        iVar15 = *(int *)(lVar1 + 0x50) + -1;
        if (-1 < iVar15) {
          lVar19 = (longlong)iVar15 << 4;
          do {
            if ((*(int *)(lVar1 + 0x50) <= iVar15) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((*(int *)(lVar19 + 8 + *(longlong *)(lVar1 + 0x48)) == 0) ||
                (plVar2 = *(longlong **)(lVar19 + *(longlong *)(lVar1 + 0x48)),
                plVar2 == (longlong *)0x0)) ||
               (cVar11 = (**(code **)(*plVar2 + 0x68))(), cVar11 == '\0')) {
              bVar9 = true;
            }
            lVar19 = lVar19 + -0x10;
            iVar15 = iVar15 + -1;
          } while (-1 < iVar15);
        }
        *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + -1;
        if (bVar9) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 0x40),false);
        }
        if (local_38.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
        }
      }
      lVar1 = *(longlong *)(lVar1 + 0x20);
    } while( true );
  }
  FVar17.ReferenceController = FVar16.ReferenceController;
  if (UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar5 = (UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.
            ReferenceController)->SharedReferenceCount;
    do {
      FVar17.ReferenceController = pTVar20;
      if (aVar5 == (atomic<int>)0x0) goto LAB_146224724;
      LOCK();
      aVar12 = (FVar16.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar5 == aVar12;
      if (bVar9) {
        (FVar16.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar12 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar12;
    } while (!bVar9);
    FVar17.ReferenceController = FVar16.ReferenceController;
    pTVar20 = (TReferenceControllerBase<1> *)
              UE::MovieScene::GDeferredSignedObjectChangeHandler.Object;
    if (UE::MovieScene::GDeferredSignedObjectChangeHandler.Object !=
        (IDeferredSignedObjectChangeHandler *)0x0) goto LAB_14622474a;
  }
LAB_146224724:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  FVar16.ReferenceController = FVar17.ReferenceController;
  if (bVar9) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14622474a:
  (**(code **)(pTVar20->_padding_ + 0x10))(pTVar20,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  return;
}

// PostInitProperties @ 146228700

void __thiscall UMovieSceneSignedObject::PostInitProperties(UMovieSceneSignedObject *this)

{
  UObject *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  UClass *this_00;
  FGuid *pFVar5;
  FGuid local_18;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x200430) == 0) {
    this_00 = StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((((this->Signature).D == *(uint *)&pUVar1[1].field_0x10 &&
         (this->Signature).C == *(uint *)&pUVar1[1].field_0xc) &&
        (this->Signature).B == *(uint *)&pUVar1[1].field_0x8) &&
        (this->Signature).A == *(uint *)&pUVar1[1].field_0x4) {
      pFVar5 = FGuid::NewGuid(&local_18);
      uVar2 = pFVar5->B;
      uVar3 = pFVar5->C;
      uVar4 = pFVar5->D;
      (this->Signature).A = pFVar5->A;
      (this->Signature).B = uVar2;
      (this->Signature).C = uVar3;
      (this->Signature).D = uVar4;
    }
  }
  return;
}

// PostLoad @ 1462289f0

void __thiscall UMovieSceneSignedObject::PostLoad(UMovieSceneSignedObject *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UMovieSceneSignedObject **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// ResetImplicitScopedModifyDefer @ 146230850

void __cdecl UMovieSceneSignedObject::ResetImplicitScopedModifyDefer(void)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWeakReferencer<1> FVar4;
  FWeakReferencer<1> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  FVar5.ReferenceController =
       UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController;
  if (UE::MovieScene::GDeferredSignedObjectChangeHandler.Object ==
      (IDeferredSignedObjectChangeHandler *)0x0) {
    return;
  }
  if (UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)(UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.
           ReferenceController)->SharedReferenceCount < 1) {
    return;
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  FVar4.ReferenceController = FVar5.ReferenceController;
  if (UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.
            ReferenceController)->SharedReferenceCount;
    do {
      FVar4.ReferenceController = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1462308a5;
      LOCK();
      aVar3 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    FVar4.ReferenceController = FVar5.ReferenceController;
    pTVar6 = (TReferenceControllerBase<1> *)
             UE::MovieScene::GDeferredSignedObjectChangeHandler.Object;
    if (UE::MovieScene::GDeferredSignedObjectChangeHandler.Object !=
        (IDeferredSignedObjectChangeHandler *)0x0) goto LAB_1462308cb;
  }
LAB_1462308a5:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  FVar5.ReferenceController = FVar4.ReferenceController;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1462308cb:
  (**(code **)(pTVar6->_padding_ + 0x20))(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// SetDeferredHandler @ 146234930

void __cdecl
UMovieSceneSignedObject::SetDeferredHandler
          (TWeakPtr<UE::MovieScene::IDeferredSignedObjectChangeHandler,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  if (param_1 != &UE::MovieScene::GDeferredSignedObjectChangeHandler) {
    UE::MovieScene::GDeferredSignedObjectChangeHandler.Object = param_1->Object;
    param_1->Object = (IDeferredSignedObjectChangeHandler *)0x0;
    FVar3 = UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount;
    UE::MovieScene::GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController =
         (param_1->WeakReferenceCount).ReferenceController;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar3.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000146234981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
        return;
      }
    }
  }
  return;
}

// StaticRegisterNativesUMovieSceneSignedObject @ 146237d20

void __cdecl UMovieSceneSignedObject::StaticRegisterNativesUMovieSceneSignedObject(void)

{
  return;
}

// operator() @ 1504e7240

bool __thiscall `UMovieSceneSignedObject::MarkAsChanged'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6033651893727657809>);
  if (bVar4) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8),&local_18,(UObject *)0x0)
    ;
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_28,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6033651893727657809>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e72e2;
    }
  }
  bVar4 = false;
LAB_1504e72e2:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

