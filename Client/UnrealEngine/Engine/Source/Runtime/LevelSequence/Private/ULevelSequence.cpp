// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 38

// StaticClass @ 146c43b40

UClass * __cdecl ULevelSequence::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequence",
               &Z_Registration_Info_UClass_ULevelSequence.InnerSingleton,
               StaticRegisterNativesULevelSequence,0xa8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequence>,
               InternalVTableHelperCtorCaller<ULevelSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequence.InnerSingleton;
}

// ULevelSequence @ 146c4e660

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

ULevelSequence * __thiscall
ULevelSequence::ULevelSequence(ULevelSequence *this,FVTableHelper *param_1)

{
  UMovieSceneSequence::UMovieSceneSequence((UMovieSceneSequence *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSequence__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->MovieScene).field0_0x0.DebugPtr = (UMovieScene *)0x0;
  *(undefined8 *)&this->BindingReferences = 0;
  *(undefined8 *)&(this->BindingReferences).field_0x8 = 0;
  (this->DirectorClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  return this;
}

// ULevelSequence @ 146c4e6c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

ULevelSequence * __thiscall
ULevelSequence::ULevelSequence(ULevelSequence *this,FObjectInitializer *param_1)

{
  UMovieSceneSequence::UMovieSceneSequence((UMovieSceneSequence *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSequence__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->MovieScene).field0_0x0.DebugPtr = (UMovieScene *)0x0;
  *(undefined8 *)&this->BindingReferences = 0;
  *(undefined8 *)&(this->BindingReferences).field_0x8 = 0;
  (this->DirectorClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  return this;
}

// ~ULevelSequence @ 146c4f0b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall ULevelSequence::~ULevelSequence(ULevelSequence *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSequence__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneBindingReference,int>
            (*(FMovieSceneBindingReference **)&this->BindingReferences,
             *(int *)&(this->BindingReferences).field_0x8);
  if (*(void **)&this->BindingReferences != (void *)0x0) {
    FMemory::Free(*(void **)&this->BindingReferences);
  }
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UMovieSceneSequence::~UMovieSceneSequence((UMovieSceneSequence *)this);
  return;
}

// AddAssetUserData @ 146c50610

void __thiscall ULevelSequence::AddAssetUserData(ULevelSequence *this,UAssetUserData *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UObject *local_res18 [2];
  UObject *local_48;
  UAssetUserData *local_40;
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res18[0] = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar6 = (UObject *)(*pcVar2)(this,local_res18);
    if (pUVar6 != (UObject *)0x0) {
      local_48 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      if ((((UObject **)this->_padding_ <= &local_48) &&
          (&local_48 < (UObject **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (int)this->_padding_;
      if (iVar5 != 0) {
        iVar10 = 0;
        plVar3 = (longlong *)this->_padding_;
        bVar4 = (UObject *)*plVar3 != local_48;
        lVar7 = 0;
        pUVar6 = local_48;
        iVar8 = 0;
        do {
          iVar9 = iVar8;
          do {
            lVar7 = lVar7 + 1;
            iVar9 = iVar9 + 1;
            if (iVar5 <= lVar7) break;
          } while (bVar4 == ((UObject *)plVar3[lVar7] != pUVar6));
          if (bVar4 != false) {
            if (iVar10 != iVar8) {
              memmove(plVar3 + iVar10,plVar3 + iVar8,(longlong)(iVar9 - iVar8) << 3);
              pUVar6 = local_48;
            }
            iVar10 = iVar10 + (iVar9 - iVar8);
          }
          bVar4 = (bool)(bVar4 ^ 1);
          iVar8 = iVar9;
        } while (lVar7 < iVar5);
        *(int *)&this->_padding_ = iVar10;
      }
    }
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((((UAssetUserData **)this->_padding_ <= &local_40) &&
        (&local_40 < (UAssetUserData **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    *(UAssetUserData **)(this->_padding_ + (longlong)iVar5 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UAssetUserData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_40);
    }
  }
  return;
}

// AllowsCustomBindings @ 146c50d10

bool __thiscall ULevelSequence::AllowsCustomBindings(ULevelSequence *this)

{
  return true;
}

// AllowsSpawnableObjects @ 146c50d20

bool __thiscall ULevelSequence::AllowsSpawnableObjects(ULevelSequence *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UClass *pUVar4;
  ulonglong uVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  TArray<TSubclassOf<UMovieSceneCustomBinding>_const_,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  MovieSceneHelpers::GetPrioritySortedCustomBindingTypes(&local_18);
  iVar3 = local_18.ArrayNum;
  uVar5 = (ulonglong)local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + uVar5 * 8;
  FVar7.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar3) {
      `TCheckedPointerIterator<TSubclassOf<UMovieSceneCustomBinding>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar7.Data == pFVar1) break;
    lVar8 = *(longlong *)FVar7.Data;
    if (lVar8 == 0) {
LAB_146c50db0:
      lVar8 = 0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister();
      if (pUVar4 == (UClass *)0x0) goto LAB_146c50db0;
      iVar2 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar8 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar4->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_146c50db0;
      lVar8 = *(longlong *)FVar7.Data;
    }
    pUVar4 = Z_Construct_UClass_UMovieSceneSpawnableBindingBase_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar2 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar8 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar4->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        bVar6 = true;
LAB_146c50df3:
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
        return bVar6;
      }
    }
    uVar5 = local_18._8_8_ & 0xffffffff;
    FVar7.Data = FVar7.Data + 8;
  }
  bVar6 = false;
  goto LAB_146c50df3;
}

// BindPossessableObject @ 146c51120

void __thiscall
ULevelSequence::BindPossessableObject
          (ULevelSequence *this,FGuid *param_1,UObject *param_2,UObject *param_3)

{
  FUniversalObjectLocator local_18;
  
  if (param_3 != (UObject *)0x0) {
    FUniversalObjectLocator::FUniversalObjectLocator(&local_18,param_2,param_3,(UObject *)0x0);
    if (local_18.Fragments.ArrayNum != 0) {
      FMovieSceneBindingReferences::AddBinding
                ((FMovieSceneBindingReferences *)&this->BindingReferences,param_1,&local_18);
    }
    DestructItems<FUniversalObjectLocatorFragment,int>
              ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data,
               local_18.Fragments.ArrayNum);
    if ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data !=
        (FUniversalObjectLocatorFragment *)0x0) {
      FMemory::Free(local_18.Fragments.AllocatorInstance.Data);
    }
  }
  return;
}

// CanAnimateObject @ 146c511a0

bool __thiscall ULevelSequence::CanAnimateObject(ULevelSequence *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar2->_padding_)) {
    pUVar2 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        return false;
      }
    }
  }
  return true;
}

// CanPossessObject @ 146c51250

bool __thiscall
ULevelSequence::CanPossessObject(ULevelSequence *this,UObject *param_1,UObject *param_2)

{
  return true;
}

// CanRebindPossessable @ 146c51260

bool __thiscall
ULevelSequence::CanRebindPossessable(ULevelSequence *this,FMovieScenePossessable *param_1)

{
  return (((param_1->ParentGuid).D == 0 && (param_1->ParentGuid).C == 0) &&
         (param_1->ParentGuid).B == 0) && (param_1->ParentGuid).A == 0;
}

// CreateDirectorInstance @ 146c51b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
ULevelSequence::CreateDirectorInstance
          (ULevelSequence *this,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneSequenceID param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  IMovieScenePlayer *pIVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UFunction *pUVar9;
  longlong *plVar10;
  undefined1 auStack_108 [32];
  UObject *local_e8;
  undefined8 local_e0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar4 = FWeakObjectPtr::Get(&(param_1->Object->WeakPlaybackContext).WeakPtr);
  local_d8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  local_d8.Object = param_1->Object;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar5 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_d8);
  pUVar8 = (this->DirectorClass).field0_0x0.DebugPtr;
  if (((pUVar8 != (UClass *)0x0) && (pUVar4 != (UObject *)0x0)) &&
     (pUVar6 = ULevelSequenceDirector::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar7 = (UObject *)0x0;
      if (pIVar5 != (IMovieScenePlayer *)0x0) {
        pUVar7 = (UObject *)(**(code **)(pIVar5->_padding_ + 0x28))(pIVar5);
        if (pUVar7 != (UObject *)0x0) {
          pUVar8 = ULevelSequencePlayer::StaticClass();
          iVar1 = (int)pUVar8->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar8->_padding_)) goto LAB_146c51c13;
        }
        pUVar7 = (UObject *)0x0;
      }
LAB_146c51c13:
      pUVar8 = (this->DirectorClass).field0_0x0.DebugPtr;
      local_e8 = (UObject *)0x0;
      local_e0 = 0;
      FObjectInitializer::AssertIfInConstructor
                (pUVar4,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = ULevelSequenceDirector::StaticClass();
      CheckIsClassChildOf_Internal(pUVar6,pUVar8);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar8);
      local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_c8._56_8_ = (UPackage *)0x0;
      local_c8._16_4_ = 0;
      local_c8._20_4_ = 0;
      local_c8._24_4_ = RF_Transient;
      local_c8._40_8_ = (UObject *)0x0;
      local_c8[0x20] = false;
      local_c8._8_8_ = pUVar4;
      pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar10 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      *(uint *)(pUVar4 + 1) = param_2.Value;
      local_e8 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_e8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar4[1].field_0x4,(FObjectPtr)&local_e8);
      *(undefined2 *)&pUVar4[1].field_0xc = *(undefined2 *)&param_1->Object->RootInstanceHandle;
      *(undefined2 *)&pUVar4[1].field_0xe =
           *(undefined2 *)&(param_1->Object->RootInstanceHandle).field_0x2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      *(UObject **)&pUVar4[1].field_0x10 = pUVar7;
      if (pIVar5 == (IMovieScenePlayer *)0x0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (uint)pIVar5->UniqueIndex;
      }
      *(uint *)&pUVar4[1].field_0x18 = uVar3;
      pUVar9 = UObject::FindFunctionChecked(pUVar4,NAME_ULevelSequenceDirector_OnCreated);
      (**(code **)(*(longlong *)pUVar4 + 0x260))(pUVar4,pUVar9,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return pUVar4;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (UObject *)0x0;
}

// FindBindingFromObject @ 146c52ee0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FGuid * __thiscall
ULevelSequence::FindBindingFromObject
          (ULevelSequence *this,FGuid *__return_storage_ptr__,UObject *param_1,UObject *param_2)

{
  UMovieSceneSequence::FindBindingFromObject
            ((UMovieSceneSequence *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// FindBindingFromObject @ 146c52f00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FGuid * __thiscall
ULevelSequence::FindBindingFromObject
          (ULevelSequence *this,FGuid *__return_storage_ptr__,UObject *param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  char cVar1;
  ushort uVar2;
  FSharedPlaybackState *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FGuid *pFVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  FMovieSceneEvaluationState *this_00;
  undefined1 local_res18 [16];
  byte local_48;
  undefined1 local_44 [12];
  TReferenceControllerBase<1> *local_38;
  
  lVar8 = 0;
  if (param_1 != (UObject *)0x0) {
    pFVar3 = param_2->Object;
    bVar6 = IsInGameThread();
    if (!bVar6) {
      local_res18[0] = 0;
      `UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>'::__l2::
      <lambda_1>::operator()(local_res18);
    }
    FMovieSceneEvaluationState::GetPlaybackCapabilityID();
    uVar9 = 1 << (local_48 & 0x1f);
    if ((*(uint *)&(pFVar3->Capabilities).field_0x10 & uVar9) != 0) {
      uVar9 = UE::MovieScene::FPlaybackCapabilitiesImpl::GetCapabilityIndex
                        ((FPlaybackCapabilitiesImpl *)&pFVar3->Capabilities,uVar9);
      if (0xfe < uVar9) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < 255",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0xfd,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FGuid *)(*pcVar5)();
          return pFVar7;
        }
      }
      if ((byte)(pFVar3->Capabilities).field_0xc <= (byte)uVar9) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < Num",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x21b,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FGuid *)(*pcVar5)();
          return pFVar7;
        }
      }
      lVar4 = *(longlong *)&pFVar3->Capabilities;
      uVar10 = (ulonglong)(uVar9 & 0xff);
      uVar2 = *(ushort *)(lVar4 + 8 + uVar10 * 0x10);
      if (uVar2 != 0xffff) {
        lVar8 = lVar4 + (ulonglong)uVar2;
      }
      this_00 = (FMovieSceneEvaluationState *)
                ((ulonglong)*(byte *)(lVar4 + 0xd + uVar10 * 0x10) + lVar8);
      if (this_00 != (FMovieSceneEvaluationState *)0x0) {
        cVar1 = *(char *)(lVar4 + 0xe + uVar10 * 0x10);
        if (cVar1 == '\0') {
LAB_146c53073:
          FMovieSceneEvaluationState::FindSequenceId(this_00,(UMovieSceneSequence *)local_44);
          local_44._4_8_ = param_2->Object;
          local_38 = (param_2->SharedReferenceCount).ReferenceController;
          if (local_38 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
            UNLOCK();
          }
          FMovieSceneEvaluationState::FindCachedObjectId
                    (this_00,__return_storage_ptr__,param_1,(FMovieSceneSequenceID *)local_44,
                     (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(local_44 + 4));
          goto LAB_146c5304a;
        }
        if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
          this_00 = (FMovieSceneEvaluationState *)this_00->_padding_;
          if (this_00 != (FMovieSceneEvaluationState *)0x0) goto LAB_146c53073;
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x30,L"Unexpected playback capability storage mode");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pFVar7 = (FGuid *)(*pcVar5)();
            return pFVar7;
          }
        }
      }
    }
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
LAB_146c5304a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GatherExpiredObjects @ 146c53320

void __thiscall
ULevelSequence::GatherExpiredObjects
          (ULevelSequence *this,FMovieSceneObjectCache *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  FMovieSceneBindingReference *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  TFragmentTypeHandle<FAnimInstanceLocatorFragment> TVar6;
  bool bVar7;
  FFragmentTypeHandle FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined7 extraout_var;
  UAnimInstance *this_00;
  UClass *pUVar12;
  USkeletalMeshComponent *pUVar13;
  UAnimInstance *pUVar14;
  uint *puVar15;
  uint uVar16;
  FWeakObjectPtr *pFVar17;
  longlong lVar18;
  FMovieSceneBindingReference *pFVar19;
  longlong lVar20;
  FWeakObjectPtr local_res20;
  TArrayView<FMovieSceneBindingReference_const_,int> local_60;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_,int> local_50;
  
  FMovieSceneBindingReferences::GetAllReferences
            ((FMovieSceneBindingReferences *)&this->BindingReferences,&local_60);
  uVar16 = 0;
  if (0 < local_60.ArrayNum) {
    lVar20 = 0;
    iVar10 = local_60.ArrayNum;
    do {
      uVar9 = 0;
      if ((int)uVar16 < iVar10) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TVar6 = FAnimInstanceLocatorFragment::FragmentType;
      pFVar19 = local_60.DataPtr + lVar20;
      FVar8 = FUniversalObjectLocator::GetLastFragmentTypeHandle(&pFVar19->Locator);
      iVar10 = local_60.ArrayNum;
      if (*(TFragmentTypeHandle<FAnimInstanceLocatorFragment> *)CONCAT71(extraout_var,FVar8.Handle)
          == TVar6) {
        FMovieSceneObjectCache::IterateBoundObjects(param_1,&local_50,&pFVar19->ID);
        pFVar1 = &local_50.DataPtr[local_50.ArrayNum].WeakPtr;
        iVar10 = local_60.ArrayNum;
        for (pFVar17 = &(local_50.DataPtr)->WeakPtr; local_60.ArrayNum = iVar10, pFVar17 != pFVar1;
            pFVar17 = pFVar17 + 1) {
          local_res20 = *pFVar17;
          this_00 = (UAnimInstance *)FWeakObjectPtr::Get(&local_res20);
          if (this_00 == (UAnimInstance *)0x0) {
LAB_146c53489:
            pFVar3 = (FMovieSceneBindingReference *)(param_2->AllocatorInstance).Data;
            if (((pFVar3 <= pFVar19) &&
                (pFVar19 < (FMovieSceneBindingReference *)(&pFVar3->ID + param_2->ArrayMax))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = param_2->ArrayNum;
            if (iVar10 == param_2->ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar10 + 1;
            uVar5 = *(undefined8 *)&(pFVar19->ID).C;
            pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
            *(undefined8 *)pFVar2 = *(undefined8 *)&pFVar19->ID;
            *(undefined8 *)(pFVar2 + 8) = uVar5;
          }
          else {
            pUVar12 = Z_Construct_UClass_UAnimInstance_NoRegister();
            iVar10 = (int)pUVar12->_padding_;
            if (((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar10) ||
                ((longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar10 * 8)
                 != &pUVar12->_padding_)) ||
               (pUVar13 = UAnimInstance::GetOwningComponent(this_00),
               pUVar13 == (USkeletalMeshComponent *)0x0)) goto LAB_146c53489;
            pUVar13 = UAnimInstance::GetOwningComponent(this_00);
            pUVar14 = USkeletalMeshComponent::GetAnimInstance(pUVar13);
            if (pUVar14 != this_00) goto LAB_146c53489;
          }
          iVar10 = local_60.ArrayNum;
        }
        if ((int)uVar16 < iVar10 + -1) {
          lVar18 = (lVar20 + 1) * 0x30;
          uVar9 = uVar16;
          do {
            uVar9 = uVar9 + 1;
            uVar11 = 0;
            if ((int)uVar9 < iVar10) {
              uVar11 = ~uVar9 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               iVar10 = local_60.ArrayNum, bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            puVar15 = (uint *)((longlong)&((local_60.DataPtr)->ID).A + lVar18);
            if (((puVar15[3] != (pFVar19->ID).D || puVar15[2] != (pFVar19->ID).C) ||
                puVar15[1] != (pFVar19->ID).B) || (pFVar19->ID).A != *puVar15) break;
            uVar16 = uVar16 + 1;
            lVar20 = lVar20 + 1;
            lVar18 = lVar18 + 0x30;
          } while ((int)uVar16 < iVar10 + -1);
        }
      }
      uVar16 = uVar16 + 1;
      lVar20 = lVar20 + 1;
    } while ((int)uVar16 < iVar10);
  }
  return;
}

// GetAssetUserDataArray @ 146c536b0

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
ULevelSequence::GetAssetUserDataArray(ULevelSequence *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetAssetUserDataOfClass @ 146c536c0

UAssetUserData * __thiscall
ULevelSequence::GetAssetUserDataOfClass(ULevelSequence *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (int)this->_padding_) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar9 + this->_padding_);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_146c53766;
LAB_146c53794:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_146c53794;
          UE::GC::MarkAsReachable(pUVar7);
LAB_146c53766:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_146c53794;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_146c53794;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (int)this->_padding_);
  }
  return (UAssetUserData *)0x0;
}

// GetBindingReferences @ 146c537f0

FMovieSceneBindingReferences * __thiscall ULevelSequence::GetBindingReferences(ULevelSequence *this)

{
  return (FMovieSceneBindingReferences *)&this->BindingReferences;
}

// GetMovieScene @ 146c54df0

UMovieScene * __thiscall ULevelSequence::GetMovieScene(ULevelSequence *this)

{
  return (this->MovieScene).field0_0x0.DebugPtr;
}

// GetParentObject @ 146c55200

UObject * __thiscall ULevelSequence::GetParentObject(ULevelSequence *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  USkeletalMeshComponent *pUVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return *(UObject **)&param_1[4].field_0x8;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      lVar3 = (**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      if (lVar3 != 0) {
        pUVar4 = UAnimInstance::GetOwningComponent((UAnimInstance *)param_1);
        return (UObject *)pUVar4;
      }
    }
  }
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 146c55760

UClass * __cdecl ULevelSequence::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequence",
               &Z_Registration_Info_UClass_ULevelSequence.InnerSingleton,
               StaticRegisterNativesULevelSequence,0xa8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequence>,
               InternalVTableHelperCtorCaller<ULevelSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequence.InnerSingleton;
}

// Initialize @ 146c57140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ULevelSequence::Initialize(ULevelSequence *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FFrameRate FVar4;
  FFrameRate FVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<FString> *pTVar7;
  bool bVar8;
  UClass *pUVar9;
  UMovieScene *pUVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  undefined1 auStackY_138 [32];
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  FFrameRate local_d8;
  FFrameRate local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_c8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UMovieScene_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar9);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_Transactional;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  pUVar10 = (UMovieScene *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar11 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UMovieScene *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->MovieScene).field0_0x0.DebugPtr = pUVar10;
  pTVar6 = CVarDefaultLockEngineToDisplayRate.Ref;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = pTVar6->ShadowedValue[0];
  pUVar10 = (this->MovieScene).field0_0x0.DebugPtr;
  pUVar10->EvaluationType = iVar1 == 0;
  if ((iVar1 != 0) && (pUVar10->ClockSource == Tick)) {
    pUVar10->ClockSource = Platform;
  }
  pTVar7 = CVarDefaultTickResolution.Ref;
  local_d8.Numerator = 60000;
  local_d8.Denominator = 1;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = pTVar7->ShadowedValue[0].Data.ArrayNum;
  lVar13 = (longlong)local_f0;
  pFVar2 = pTVar7->ShadowedValue[0].Data.AllocatorInstance.Data;
  if (local_f0 == 0) {
    local_ec = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f0,0,&local_f8,local_f0,&local_ec);
    memcpy(local_f8.Data,pFVar2,lVar13 * 2);
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_f0 != 0) {
    FVar12.Data = local_f8.Data;
  }
  TryParseString(&local_d8,(wchar_t *)FVar12.Data);
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  FVar4.Denominator = local_d8.Denominator;
  FVar4.Numerator = local_d8.Numerator;
  UMovieScene::SetTickResolutionDirectly((this->MovieScene).field0_0x0.DebugPtr,FVar4);
  pTVar7 = CVarDefaultDisplayRate.Ref;
  local_d0.Numerator = 0x1e;
  local_d0.Denominator = 1;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = pTVar7->ShadowedValue[0].Data.ArrayNum;
  lVar13 = (longlong)local_e0;
  pFVar2 = pTVar7->ShadowedValue[0].Data.AllocatorInstance.Data;
  if (local_e0 == 0) {
    local_dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_e0,0,&local_e8,local_e0,&local_dc);
    memcpy(local_e8.Data,pFVar2,lVar13 * 2);
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_e0 != 0) {
    FVar12.Data = local_e8.Data;
  }
  TryParseString(&local_d0,(wchar_t *)FVar12.Data);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  FVar5.Denominator = local_d0.Denominator;
  FVar5.Numerator = local_d0.Numerator;
  ((this->MovieScene).field0_0x0.DebugPtr)->DisplayRate = FVar5;
  pTVar6 = CVarDefaultClockSource.Ref;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UMovieScene::SetClockSource
            ((this->MovieScene).field0_0x0.DebugPtr,(EUpdateClockSource)pTVar6->ShadowedValue[0]);
  return;
}

// LocateBoundObjects @ 146c57ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULevelSequence::LocateBoundObjects
          (ULevelSequence *this,FGuid *param_1,UObject *param_2,FResolveBindingParams *param_3,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_4)

{
  FWorldPartitionResolveData *pFVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FResolveBindingParams *pFVar4;
  undefined1 auStackY_138 [32];
  FParameterTypeHandle local_108 [8];
  undefined1 local_100 [8];
  FGuid local_f8;
  FResolveParameterBuffer local_e8;
  uchar local_d8 [128];
  undefined8 local_58;
  FResolveParameterBuffer *local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_138;
  UE::UniversalObjectLocator::FResolveParameterBuffer::FResolveParameterBuffer(&local_e8);
  local_e8.Memory = local_d8;
  local_e8.bCanFreeMemory = false;
  local_e8.Capacity = 0x80;
  local_50 = &local_e8;
  pFVar1 = param_3->WorldPartitionResolveData;
  local_58 = 0;
  local_48 = 0;
  if (pFVar1 == (FWorldPartitionResolveData *)0x0) {
    local_f8.A = 0;
    local_f8.B = 0;
    local_f8.C = 0;
    local_f8.D = 0;
    pFVar4 = param_3;
  }
  else {
    local_f8.A = (pFVar1->ContainerID).Guid.A;
    local_f8.B = (pFVar1->ContainerID).Guid.B;
    local_f8.C = (pFVar1->ContainerID).Guid.C;
    local_f8.D = (pFVar1->ContainerID).Guid.D;
    pFVar4 = (FResolveBindingParams *)&pFVar1->SourceWorldAssetPath;
  }
  local_108[0].Handle = (uchar)FActorLocatorFragmentResolveParameter::ParameterType;
  pUVar3 = FActorLocatorFragmentResolveParameter::StaticStruct();
  pUVar3 = UE::UniversalObjectLocator::FParameterTypeHandle::Resolve(local_108,pUVar3);
  if (pUVar3 == (UScriptStruct *)0x0) {
    bVar2 = `UE::UniversalObjectLocator::FResolveParameterBuffer::
            AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*_const_&,FActorContainerID_const_,FTopLevelAssetPath_const_&>'
            ::__l3::<lambda_1>::operator()(local_100);
    if (!bVar2) goto LAB_146c57bb2;
  }
  UE::UniversalObjectLocator::FResolveParameterBuffer::
  AddParameterImpl<FActorLocatorFragmentResolveParameter,UWorld_*_const_&,FActorContainerID_const_,FTopLevelAssetPath_const_&>
            (&local_e8,1 << (local_108[0].Handle & 0x1f),&param_3->StreamingWorld,
             (FActorContainerID *)&local_f8,&pFVar4->StreamedLevelAssetPath);
LAB_146c57bb2:
  local_f8.A = 0;
  local_f8.B = 0;
  local_f8.C = 0;
  local_f8.D = 0;
  (**(code **)(this->_padding_ + 0x2d0))(this,param_1,&local_58,&local_f8);
  UE::UniversalObjectLocator::FResolveParameterBuffer::~FResolveParameterBuffer(&local_e8);
  return;
}

// MakeSpawnableTemplateFromInstance @ 146c57c10

UObject * __thiscall
ULevelSequence::MakeSpawnableTemplateFromInstance
          (ULevelSequence *this,UObject *param_1,FName param_2)

{
  UObject *pUVar1;
  
  pUVar1 = MovieSceneHelpers::MakeSpawnableTemplateFromInstance
                     (param_1,(this->MovieScene).field0_0x0.DebugPtr,param_2);
  return pUVar1;
}

// PostDuplicate @ 146c58100

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall ULevelSequence::PostDuplicate(ULevelSequence *this,bool param_1)

{
  UMovieSceneCompiledDataManager *this_00;
  
  if (param_1) {
    this_00 = UMovieSceneCompiledDataManager::GetPrecompiledData();
    UMovieSceneCompiledDataManager::Compile(this_00,(UMovieSceneSequence *)&stack0x00000010);
  }
  return;
}

// PostInitProperties @ 146c58190

void __thiscall ULevelSequence::PostInitProperties(ULevelSequence *this)

{
  UObject *pUVar1;
  undefined8 uVar2;
  UClass *this_00;
  FGuid *pFVar3;
  FGuid FStack_18;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x200430) == 0) {
    this_00 = UMovieSceneSignedObject::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((((int)this->_padding_ == *(int *)&pUVar1[1].field_0x10 &&
         *(int *)((longlong)&this->_padding_ + 4) == *(int *)&pUVar1[1].field_0xc) &&
        (int)this->_padding_ == *(int *)&pUVar1[1].field_0x8) &&
        *(int *)((longlong)&this->_padding_ + 4) == *(int *)&pUVar1[1].field_0x4) {
      pFVar3 = FGuid::NewGuid(&FStack_18);
      uVar2 = *(undefined8 *)&pFVar3->C;
      *(undefined8 *)((longlong)&this->_padding_ + 4) = *(undefined8 *)pFVar3;
      *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
    }
  }
  return;
}

// PostLoad @ 146c58270

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall ULevelSequence::PostLoad(ULevelSequence *this)

{
  FMovieSceneCompiledDataID FVar1;
  UMovieSceneCompiledDataManager *this_00;
  undefined4 extraout_var;
  ULevelSequence *pUStackX_10;
  
  this_00 = UMovieSceneCompiledDataManager::GetPrecompiledData();
  if ((this->_padding_ & 0x10) == 0) {
    UMovieSceneCompiledDataManager::LoadCompiledData(this_00,(UMovieSceneSequence *)this);
    this->_padding_ = 0;
  }
  if (((this->_padding_ & 0x1000000) == 0) && ((this->_padding_ & 0x30) == 0)) {
    FVar1 = UMovieSceneCompiledDataManager::FindDataID
                      (this_00,(UMovieSceneSequence *)&stack0x00000008);
    if (*(int *)CONCAT44(extraout_var,FVar1.Value) == -1) {
      pUStackX_10 = this;
      `UMovieSceneSequence::PostLoad'::__l8::<lambda_1>::operator()(&pUStackX_10);
    }
  }
  UObject::PostLoad((UObject *)this);
  return;
}

// RemoveUserDataOfClass @ 146c58d90

void __thiscall
ULevelSequence::RemoveUserDataOfClass(ULevelSequence *this,TSubclassOf<UAssetUserData> param_1)

{
  void *_Dst;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  
  pUVar10 = (UObject *)0x0;
  pUVar7 = pUVar10;
  pUVar9 = pUVar10;
  if (0 < (int)this->_padding_) {
    do {
      uVar8 = (uint)pUVar7;
      uVar4 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(&pUVar9->field_0x0 + this->_padding_);
      if (lVar1 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_146c58e48;
LAB_146c58e76:
          pUVar7 = pUVar10;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_146c58e76;
          UE::GC::MarkAsReachable(pUVar7);
LAB_146c58e48:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_146c58e76;
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar5 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_146c58e76;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar1 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          uVar4 = 0;
          if ((int)uVar8 < (int)this->_padding_) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Dst = (void *)(this->_padding_ + (longlong)(int)uVar8 * 8);
          iVar5 = ((int)this->_padding_ - uVar8) + -1;
          if (iVar5 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
          }
          iVar5 = (int)this->_padding_ + -1;
          *(int *)&this->_padding_ = iVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)&this->_padding_,iVar5,
                     (int *)((longlong)&this->_padding_ + 4));
          return;
        }
      }
      pUVar7 = (UObject *)(ulonglong)(uVar8 + 1);
      pUVar9 = (UObject *)&pUVar9->field_0x8;
    } while ((int)(uVar8 + 1) < (int)this->_padding_);
  }
  return;
}

// Rename @ 146c58f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
ULevelSequence::Rename(ULevelSequence *this,wchar_t *param_1,UObject *param_2,uint param_3)

{
  FName FVar1;
  longlong lVar2;
  int iVar3;
  UPackage *pUVar4;
  FLinkerLoad *pFVar5;
  FLinkerLoad *pFVar6;
  UPackage *pUVar7;
  size_t sVar8;
  ULevelSequence *this_00;
  UObject *pUVar9;
  FName FVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_80 [8];
  FString FStack_78;
  TStringView<wchar_t> TStack_68;
  FString FStack_58;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId247,"UObject::Rename",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
               ,0xf7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId247);
  }
  pUVar7 = GObjTransientPkg;
  if ((param_2 != (UObject *)0x0) && (param_2 != (UObject *)this->_padding_)) {
    if (((this->_padding_ & 0x30) == 0) &&
       (pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2), pUVar4 != pUVar7)) {
      pUVar9 = *(UObject **)(this->_padding_ + 0xe0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < *(int *)&pUVar9[1].field_0x10) ||
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) +
           (longlong)*(int *)&pUVar9[1].field_0x10 * 8) != &pUVar9[1].field_0x8)) {
        if ((param_3 & 2) != 0) {
          bVar13 = false;
          goto LAB_142109c5c;
        }
        auStack_80 = *(undefined1 (*) [8])(*(longlong *)(this->_padding_ + 0xe0) + 0x18);
        ::FName::ToString((FName *)auStack_80,&FStack_78);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_2,(FString *)&TStack_68,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&FStack_58,(UObject *)0x0,None);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
        if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
        }
        if (TStack_68.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(TStack_68.DataPtr);
        }
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
    pFVar6 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_2);
    if (((param_3 >> 9 & 1) == 0) && (pFVar5 != pFVar6)) {
      if (pFVar6 == (FLinkerLoad *)0x0) {
        pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2);
        pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
        if (pUVar4 == pUVar7) goto LAB_1421099f4;
      }
      if ((pFVar5 != (FLinkerLoad *)0x0) && ((this->_padding_ & 0x1400) != 0)) {
        if (1 < (byte)LogObj._0_1_) {
          auStack_80 = (undefined1  [8])0x150852300;
          if (((uint)this->_padding_ >> 10 & 1) != 0) {
            auStack_80 = (undefined1  [8])0x1508522e8;
          }
          pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar7,&FStack_58,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this,(FString *)&TStack_68,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
          if (TStack_68.DataPtr != (wchar_t *)0x0) {
            FMemory::Free(TStack_68.DataPtr);
          }
          if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
          }
        }
        ::FDebug::DumpStackTraceToLog(Display);
      }
      UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,true);
    }
  }
LAB_1421099f4:
  if (param_1 == (wchar_t *)0x0) {
LAB_142109af3:
    if ((param_3 & 2) == 0) {
LAB_142109afd:
      FVar1 = (FName)this->_padding_;
      if ((param_2 != (UObject *)0x0) && ((param_3 & 4) == 0)) {
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)param_2);
      }
      LockUObjectHashTables();
      if (param_1 == (wchar_t *)0x0) {
        if ((param_2 == (UObject *)0x0) ||
           (pUVar9 = StaticFindObjectFastInternal
                               ((UClass *)0x0,param_2,FVar1,None,RF_NoFlags,Borrowed),
           FVar10 = FVar1, pUVar9 != (UObject *)0x0)) {
          pUVar11 = (UClass *)param_2;
          if (param_2 == (UObject *)0x0) {
            pUVar11 = (UClass *)this->_padding_;
          }
          FVar10 = MakeUniqueObjectName((UObject *)auStack_80,pUVar11,(FName)this->_padding_,None);
          goto LAB_142109c21;
        }
      }
      else {
        FVar10 = (FName)::FName::FName((FName *)auStack_80,param_1);
LAB_142109c21:
        FVar10 = *(FName *)FVar10;
      }
      lVar2 = this->_padding_;
      if ((this->_padding_ & 1) != 0) {
        Z_Construct_UClass_UPackage_NoRegister();
      }
      UObjectBase::LowLevelRename((UObjectBase *)this,FVar10,param_2);
      UnlockUObjectHashTables();
      (**(code **)(this->_padding_ + 0xe0))(this,lVar2,FVar1);
    }
  }
  else {
    sVar8 = wcslen(param_1);
    FStack_78.Data.ArrayNum = (int)sVar8;
    FStack_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    TStack_68.DataPtr = param_1;
    if ((param_3 >> 6 & 1) == 0) {
      FStack_78.Data.ArrayMax = TStack_68._12_4_;
      pUVar9 = param_2;
      if (param_2 == (UObject *)0x0) {
        pUVar9 = (UObject *)this->_padding_;
      }
      TStack_68.Size = FStack_78.Data.ArrayNum;
      this_00 = (ULevelSequence *)StaticFindObject((UClass *)0x0,pUVar9,&TStack_68,ExactClass);
    }
    else {
      TStack_68._12_4_ = FStack_78.Data.ArrayMax;
      TStack_68.Size = FStack_78.Data.ArrayNum;
      this_00 = (ULevelSequence *)
                StaticFindFirstObject((UClass *)0x0,&TStack_68,ExactClass,NoLogging,(wchar_t *)0x0);
    }
    if (this_00 != this) {
      if (this_00 == (ULevelSequence *)0x0) goto LAB_142109af3;
      if ((param_3 & 2) != 0) {
        bVar13 = false;
        goto LAB_142109c5c;
      }
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&FStack_58,(UObject *)0x0,None);
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this,(FString *)&TStack_68,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      if (TStack_68.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(TStack_68.DataPtr);
      }
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      goto LAB_142109afd;
    }
    auStack_80 = (undefined1  [8])this_00->_padding_;
    ::FName::ToString((FName *)auStack_80,&FStack_78);
    ::FString::FString(&FStack_58,param_1);
    FVar12.Data = FStack_78.Data.AllocatorInstance.Data;
    if (FStack_78.Data.ArrayNum == FStack_58.Data.ArrayNum) {
      if (FStack_78.Data.ArrayNum < 2) {
        bVar13 = true;
      }
      else {
        iVar3 = wcscmp((wchar_t *)FStack_78.Data.AllocatorInstance.Data,
                       (wchar_t *)FStack_58.Data.AllocatorInstance.Data);
        bVar13 = iVar3 == 0;
      }
    }
    else {
      bVar13 = FStack_78.Data.ArrayNum + FStack_58.Data.ArrayNum == 1;
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      FVar12.Data = FStack_78.Data.AllocatorInstance.Data;
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    if (!bVar13) goto LAB_142109af3;
  }
  bVar13 = true;
LAB_142109c5c:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

// StaticRegisterNativesULevelSequence @ 146c5c560

void __cdecl ULevelSequence::StaticRegisterNativesULevelSequence(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ULevelSequence_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnbindInvalidObjects @ 146c5d310

void __thiscall
ULevelSequence::UnbindInvalidObjects(ULevelSequence *this,FGuid *param_1,UObject *param_2)

{
  FMovieSceneBindingReferences::RemoveInvalidObjects
            ((FMovieSceneBindingReferences *)&this->BindingReferences,param_1,param_2);
  return;
}

// UnbindObjects @ 146c5d320

void __thiscall
ULevelSequence::UnbindObjects
          (ULevelSequence *this,FGuid *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,UObject *param_3)

{
  FMovieSceneBindingReferences::RemoveObjects
            ((FMovieSceneBindingReferences *)&this->BindingReferences,param_1,param_2,param_3);
  return;
}

// UnbindPossessableObjects @ 146c5d330

void __thiscall ULevelSequence::UnbindPossessableObjects(ULevelSequence *this,FGuid *param_1)

{
  FMovieSceneBindingReferences::RemoveBinding
            ((FMovieSceneBindingReferences *)&this->BindingReferences,param_1);
  return;
}

// _getUObject @ 146c5e450

UObject * __thiscall ULevelSequence::_getUObject(ULevelSequence *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execCopyMetaData @ 146c5e950

void __cdecl ULevelSequence::execCopyMetaData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  return;
}

// execFindMetaDataByClass @ 146c5ee50

void __cdecl ULevelSequence::execFindMetaDataByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execFindOrAddMetaDataByClass @ 146c5f1a0

void __cdecl
ULevelSequence::execFindOrAddMetaDataByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execRemoveMetaDataByClass @ 146c61250

void __cdecl
ULevelSequence::execRemoveMetaDataByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10 [3];
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  return;
}

