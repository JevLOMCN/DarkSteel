// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 52

// StaticClass @ 14c691a60

UClass * __cdecl UMovieSceneBindingExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneBindingExtensions",
               &Z_Registration_Info_UClass_UMovieSceneBindingExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingExtensions.InnerSingleton;
}

// UMovieSceneBindingExtensions @ 14c698640

UMovieSceneBindingExtensions * __thiscall
UMovieSceneBindingExtensions::UMovieSceneBindingExtensions
          (UMovieSceneBindingExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBindingExtensions__6B_;
  return this;
}

// UMovieSceneBindingExtensions @ 14c698670

UMovieSceneBindingExtensions * __thiscall
UMovieSceneBindingExtensions::UMovieSceneBindingExtensions
          (UMovieSceneBindingExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBindingExtensions__6B_;
  return this;
}

// ~UMovieSceneBindingExtensions @ 14c698ce0

void __thiscall
UMovieSceneBindingExtensions::~UMovieSceneBindingExtensions(UMovieSceneBindingExtensions *this)

{
  *(undefined ***)this = &___7UMovieSceneBindingExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddTrack @ 14c69a750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneTrack * __cdecl
UMovieSceneBindingExtensions::AddTrack
          (FMovieSceneBindingProxy *param_1,TSubclassOf<UMovieSceneTrack> param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UMovieScene *this;
  UClass *pUVar4;
  FMovieSceneBinding *pFVar5;
  UClass *pUVar6;
  UMovieSceneTrack *pUVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar2 != 0) &&
     (pUVar4 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar4 = *(UClass **)param_2.Class.field0_0x0;
      goto LAB_14c69a7bc;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14c69a7bc:
  if ((this != (UMovieScene *)0x0) &&
     (pFVar5 = UMovieScene::FindBinding(this,&param_1->BindingID),
     pFVar5 != (FMovieSceneBinding *)0x0)) {
    local_b8 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UMovieSceneTrack_NoRegister();
    CheckIsClassChildOf_Internal(pUVar6,pUVar4);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar4);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transactional;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar7 = (UMovieSceneTrack *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar7 != (UMovieSceneTrack *)0x0) {
      UMovieScene::AddGivenTrack(this,pUVar7,&param_1->BindingID);
      return pUVar7;
    }
  }
  return (UMovieSceneTrack *)0x0;
}

// EqualEqual_MovieSceneBindingProxy @ 14c69af20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
UMovieSceneBindingExtensions::EqualEqual_MovieSceneBindingProxy
          (FMovieSceneBindingProxy *param_1,FMovieSceneBindingProxy *param_2)

{
  if (((((param_1->BindingID).D == (param_2->BindingID).D &&
        (param_1->BindingID).C == (param_2->BindingID).C) &&
       (param_1->BindingID).B == (param_2->BindingID).B) &&
       (param_1->BindingID).A == (param_2->BindingID).A) &&
     ((param_1->Sequence).field0_0x0.DebugPtr == (param_2->Sequence).field0_0x0.DebugPtr)) {
    return true;
  }
  return false;
}

// FindTracksByExactType @ 14c69bc70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneBindingExtensions::FindTracksByExactType
          (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieSceneBindingProxy *param_1,TSubclassOf<UMovieSceneTrack> param_2)

{
  UMovieSceneTrack **ppUVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieScene *this;
  UClass *pUVar7;
  FMovieSceneBinding *pFVar8;
  TArrayView<UMovieSceneTrack_*_const,int> *pTVar9;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  UMovieSceneTrack **ppUVar12;
  UMovieSceneTrack *local_48;
  TArrayView<UMovieSceneTrack_*_const,int> local_40;
  UMovieSceneTrack **local_28;
  undefined8 uStack_20;
  
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  lVar11 = 0;
  if ((lVar2 != 0) &&
     (pUVar7 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar11 = *(longlong *)param_2.Class.field0_0x0;
    }
  }
  if ((this == (UMovieScene *)0x0) ||
     (pFVar8 = UMovieScene::FindBinding(this,&param_1->BindingID),
     pFVar8 == (FMovieSceneBinding *)0x0)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    pTVar9 = TArrayView<UMovieSceneTrack_*_const,int>::
             TArrayView<UMovieSceneTrack_*_const,int><TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_>
                       (&local_40,
                        (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)&pFVar8->Tracks);
    ppUVar12 = pTVar9->DataPtr;
    uStack_20 = *(undefined8 *)&pTVar9->ArrayNum;
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    ppUVar1 = ppUVar12 + (int)uStack_20;
    if (ppUVar12 != ppUVar1) {
      local_28 = ppUVar12;
      if (lVar11 == 0) {
        do {
          local_48 = *ppUVar12;
          if (local_48->_padding_ == 0) {
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
                ((FScriptContainerElement *)&local_48 <
                 pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar10;
            }
            iVar6 = __return_storage_ptr__->ArrayNum;
            if (iVar6 == __return_storage_ptr__->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            *(UMovieSceneTrack **)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
          }
          ppUVar12 = ppUVar12 + 1;
        } while (ppUVar12 != ppUVar1);
      }
      else {
        do {
          local_48 = *ppUVar12;
          if (local_48->_padding_ == lVar11) {
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
                ((FScriptContainerElement *)&local_48 <
                 pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar10;
            }
            iVar6 = __return_storage_ptr__->ArrayNum;
            if (iVar6 == __return_storage_ptr__->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            *(UMovieSceneTrack **)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
          }
          ppUVar12 = ppUVar12 + 1;
        } while (ppUVar12 != ppUVar1);
      }
    }
  }
  return __return_storage_ptr__;
}

// FindTracksByType @ 14c69c2e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneBindingExtensions::FindTracksByType
          (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieSceneBindingProxy *param_1,TSubclassOf<UMovieSceneTrack> param_2)

{
  UMovieSceneTrack **ppUVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieScene *this;
  UClass *pUVar7;
  FMovieSceneBinding *pFVar8;
  TArrayView<UMovieSceneTrack_*_const,int> *pTVar9;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  UMovieSceneTrack **ppUVar12;
  UMovieSceneTrack *local_48;
  TArrayView<UMovieSceneTrack_*_const,int> local_40;
  UMovieSceneTrack **local_28;
  undefined8 uStack_20;
  
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  lVar11 = 0;
  if ((lVar2 != 0) &&
     (pUVar7 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar11 = *(longlong *)param_2.Class.field0_0x0;
    }
  }
  if ((this == (UMovieScene *)0x0) ||
     (pFVar8 = UMovieScene::FindBinding(this,&param_1->BindingID),
     pFVar8 == (FMovieSceneBinding *)0x0)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    pTVar9 = TArrayView<UMovieSceneTrack_*_const,int>::
             TArrayView<UMovieSceneTrack_*_const,int><TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_>
                       (&local_40,
                        (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)&pFVar8->Tracks);
    ppUVar12 = pTVar9->DataPtr;
    uStack_20 = *(undefined8 *)&pTVar9->ArrayNum;
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    ppUVar1 = ppUVar12 + (int)uStack_20;
    if (ppUVar12 != ppUVar1) {
      local_28 = ppUVar12;
      if (lVar11 == 0) {
        do {
          local_48 = *ppUVar12;
          if (local_48->_padding_ == 0) {
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
                ((FScriptContainerElement *)&local_48 <
                 pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar10;
            }
            iVar6 = __return_storage_ptr__->ArrayNum;
            if (iVar6 == __return_storage_ptr__->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            *(UMovieSceneTrack **)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
          }
          ppUVar12 = ppUVar12 + 1;
        } while (ppUVar12 != ppUVar1);
      }
      else {
        do {
          local_48 = *ppUVar12;
          lVar2 = local_48->_padding_;
          if ((lVar2 == lVar11) ||
             ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar2 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
               lVar11 + 0x30)))) {
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
               (((FScriptContainerElement *)&local_48 <
                 pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
                (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)))) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar10;
            }
            iVar6 = __return_storage_ptr__->ArrayNum;
            if (iVar6 == __return_storage_ptr__->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            *(UMovieSceneTrack **)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
          }
          ppUVar12 = ppUVar12 + 1;
        } while (ppUVar12 != ppUVar1);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetChildPossessables @ 14c69e150

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneBindingExtensions::GetChildPossessables
          (TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieSceneBindingProxy *param_1)

{
  FScriptContainerElement *pFVar1;
  UMovieSceneSequence *pUVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  UMovieScene *this;
  FMovieSceneSpawnable *pFVar7;
  FMovieScenePossessable *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  iVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  if (this != (UMovieScene *)0x0) {
    pFVar7 = UMovieScene::FindSpawnable(this,&param_1->BindingID);
    if (pFVar7 == (FMovieSceneSpawnable *)0x0) {
      iVar5 = UMovieScene::GetPossessableCount(this);
      if (0 < iVar5) {
        do {
          pFVar8 = UMovieScene::GetPossessable(this,iVar10);
          if ((((pFVar8->ParentGuid).C == (param_1->BindingID).C &&
               (pFVar8->ParentGuid).B == (param_1->BindingID).B) &&
              (pFVar8->ParentGuid).A == (param_1->BindingID).A) &&
              (pFVar8->ParentGuid).D == (param_1->BindingID).D) {
            iVar6 = __return_storage_ptr__->ArrayNum;
            if (iVar6 == __return_storage_ptr__->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            uVar4 = *(undefined8 *)&(pFVar8->Guid).C;
            pUVar2 = (param_1->Sequence).field0_0x0.DebugPtr;
            pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
            pFVar11 = pFVar9 + (longlong)iVar6 * 0x18;
            *(undefined8 *)pFVar11 = *(undefined8 *)&pFVar8->Guid;
            *(undefined8 *)(pFVar11 + 8) = uVar4;
            *(UMovieSceneSequence **)(pFVar9 + (longlong)iVar6 * 0x18 + 0x10) = pUVar2;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UMovieSceneSequence *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar5);
      }
    }
    else {
      iVar10 = (pFVar7->ChildPossessables).ArrayNum;
      pFVar11 = (pFVar7->ChildPossessables).AllocatorInstance.Data;
      pFVar9 = pFVar11 + (longlong)iVar10 * 0x10;
      while( true ) {
        if ((pFVar7->ChildPossessables).ArrayNum != iVar10) {
          `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar11 == pFVar9) break;
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        uVar4 = *(undefined8 *)(pFVar11 + 8);
        pUVar2 = (param_1->Sequence).field0_0x0.DebugPtr;
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar1 = pFVar3 + (longlong)iVar5 * 0x18;
        *(undefined8 *)pFVar1 = *(undefined8 *)pFVar11;
        *(undefined8 *)(pFVar1 + 8) = uVar4;
        *(UMovieSceneSequence **)(pFVar3 + (longlong)iVar5 * 0x18 + 0x10) = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 != (UMovieSceneSequence *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        pFVar11 = pFVar11 + 0x10;
      }
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetDisplayName @ 14c69e9b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FText * __cdecl
UMovieSceneBindingExtensions::GetDisplayName
          (FText *__return_storage_ptr__,FMovieSceneBindingProxy *param_1)

{
  UMovieSceneSequence *pUVar1;
  UMovieScene *this;
  
  pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieSceneSequence *)0x0) {
    this = (UMovieScene *)(**(code **)(pUVar1->_padding_ + 0x2f8))();
    if ((this != (UMovieScene *)0x0) &&
       ((((param_1->BindingID).D != 0 || (param_1->BindingID).C != 0) || (param_1->BindingID).B != 0
        ) || (param_1->BindingID).A != 0)) {
      UMovieScene::GetObjectDisplayName(this,__return_storage_ptr__,&param_1->BindingID);
      return __return_storage_ptr__;
    }
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetId @ 14c69ef40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FGuid * __cdecl
UMovieSceneBindingExtensions::GetId(FGuid *__return_storage_ptr__,FMovieSceneBindingProxy *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1->BindingID).B;
  uVar2 = (param_1->BindingID).C;
  uVar3 = (param_1->BindingID).D;
  __return_storage_ptr__->A = (param_1->BindingID).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetName @ 14c6a04c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __cdecl
UMovieSceneBindingExtensions::GetName
          (FString *__return_storage_ptr__,FMovieSceneBindingProxy *param_1)

{
  UMovieSceneSequence *pUVar1;
  UMovieScene *this;
  FMovieSceneSpawnable *pFVar2;
  FMovieScenePossessable *pFVar3;
  
  pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieSceneSequence *)0x0) {
    this = (UMovieScene *)(**(code **)(pUVar1->_padding_ + 0x2f8))();
    if ((this != (UMovieScene *)0x0) &&
       ((((param_1->BindingID).D != 0 || (param_1->BindingID).C != 0) || (param_1->BindingID).B != 0
        ) || (param_1->BindingID).A != 0)) {
      pFVar2 = UMovieScene::FindSpawnable(this,&param_1->BindingID);
      if (pFVar2 != (FMovieSceneSpawnable *)0x0) {
        ::FString::FString(__return_storage_ptr__,&pFVar2->Name);
        return __return_storage_ptr__;
      }
      pFVar3 = UMovieScene::FindPossessable(this,&param_1->BindingID);
      if (pFVar3 != (FMovieScenePossessable *)0x0) {
        ::FString::FString(__return_storage_ptr__,&pFVar3->Name);
        return __return_storage_ptr__;
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetObjectTemplate @ 14c6a05c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl UMovieSceneBindingExtensions::GetObjectTemplate(FMovieSceneBindingProxy *param_1)

{
  UMovieScene *this;
  UClass *pUVar1;
  UMovieSceneSequence *pUVar2;
  UObject *pUVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  if (this != (UMovieScene *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    pUVar2 = (UMovieSceneSequence *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
    MovieSceneHelpers::CreateTransientSharedPlaybackState(&local_28,(UObject *)GWorld.World,pUVar2);
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar1 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    pUVar2 = (UMovieSceneSequence *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
    pUVar3 = MovieSceneHelpers::GetObjectTemplate(pUVar2,&param_1->BindingID,&local_18,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return pUVar3;
  }
  return (UObject *)0x0;
}

// GetParent @ 14c6a0670

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneBindingProxy * __cdecl
UMovieSceneBindingExtensions::GetParent
          (FMovieSceneBindingProxy *__return_storage_ptr__,FMovieSceneBindingProxy *param_1)

{
  UMovieSceneSequence *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  UMovieScene *this;
  FMovieScenePossessable *pFVar5;
  
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  if ((this == (UMovieScene *)0x0) ||
     (pFVar5 = UMovieScene::FindPossessable(this,&param_1->BindingID),
     pFVar5 == (FMovieScenePossessable *)0x0)) {
    (__return_storage_ptr__->BindingID).A = 0;
    (__return_storage_ptr__->BindingID).B = 0;
    (__return_storage_ptr__->BindingID).C = 0;
    (__return_storage_ptr__->BindingID).D = 0;
    (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
    return __return_storage_ptr__;
  }
  uVar2 = (pFVar5->ParentGuid).B;
  uVar3 = (pFVar5->ParentGuid).C;
  uVar4 = (pFVar5->ParentGuid).D;
  pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr;
  (__return_storage_ptr__->BindingID).A = (pFVar5->ParentGuid).A;
  (__return_storage_ptr__->BindingID).B = uVar2;
  (__return_storage_ptr__->BindingID).C = uVar3;
  (__return_storage_ptr__->BindingID).D = uVar4;
  (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = pUVar1;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    return __return_storage_ptr__;
  }
  if (pUVar1 == (UMovieSceneSequence *)0x0) {
    return __return_storage_ptr__;
  }
  UE::GC::MarkAsReachable((UObject *)pUVar1);
  return __return_storage_ptr__;
}

// GetPossessedObjectClass @ 14c6a1960

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UClass * __cdecl
UMovieSceneBindingExtensions::GetPossessedObjectClass(FMovieSceneBindingProxy *param_1)

{
  UMovieScene *this;
  
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  if (this != (UMovieScene *)0x0) {
    UMovieScene::FindPossessable(this,&param_1->BindingID);
  }
  return (UClass *)0x0;
}

// GetPrivateStaticClass @ 14c6a1990

UClass * __cdecl UMovieSceneBindingExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneBindingExtensions",
               &Z_Registration_Info_UClass_UMovieSceneBindingExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingExtensions.InnerSingleton;
}

// GetSortingOrder @ 14c6a27f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UMovieSceneBindingExtensions::GetSortingOrder(FMovieSceneBindingProxy *param_1)

{
  FFrame::KismetExecutionMessage(L"Cannot find requested binding",Error,(FName)0x0);
  return 0;
}

// GetTracks @ 14c6a3620

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneBindingExtensions::GetTracks
          (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieSceneBindingProxy *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  UMovieScene *this;
  FMovieSceneBinding *pFVar2;
  
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  if (this != (UMovieScene *)0x0) {
    pFVar2 = UMovieScene::FindBinding(this,&param_1->BindingID);
    if (pFVar2 != (FMovieSceneBinding *)0x0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar2->Tracks).ArrayNum;
      _Src = (pFVar2->Tracks).AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = iVar1;
      if (iVar1 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
        return __return_storage_ptr__;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsValid @ 14c6a3af0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl UMovieSceneBindingExtensions::IsValid(FMovieSceneBindingProxy *param_1)

{
  UMovieSceneSequence *pUVar1;
  UMovieScene *this;
  FMovieSceneBinding *pFVar2;
  
  pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieSceneSequence *)0x0) {
    this = (UMovieScene *)(**(code **)(pUVar1->_padding_ + 0x2f8))();
    if ((this != (UMovieScene *)0x0) &&
       ((((param_1->BindingID).D != 0 || (param_1->BindingID).C != 0) || (param_1->BindingID).B != 0
        ) || (param_1->BindingID).A != 0)) {
      pFVar2 = UMovieScene::FindBinding(this,&param_1->BindingID);
      return pFVar2 != (FMovieSceneBinding *)0x0;
    }
  }
  return false;
}

// MoveBindingContents @ 14c6a4420

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::MoveBindingContents
          (FMovieSceneBindingProxy *param_1,FMovieSceneBindingProxy *param_2)

{
  UMovieScene *this;
  FMovieScenePossessable *pFVar1;
  FMovieSceneSpawnable *pFVar2;
  FMovieScenePossessable *pFVar3;
  FMovieSceneSpawnable *pFVar4;
  FGuid *pFVar5;
  FGuid *pFVar6;
  
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  if (this == (UMovieScene *)0x0) {
    return;
  }
  pFVar1 = UMovieScene::FindPossessable(this,&param_1->BindingID);
  pFVar2 = UMovieScene::FindSpawnable(this,&param_1->BindingID);
  pFVar3 = UMovieScene::FindPossessable(this,&param_2->BindingID);
  pFVar4 = UMovieScene::FindSpawnable(this,&param_2->BindingID);
  if (pFVar1 == (FMovieScenePossessable *)0x0) {
LAB_14c6a44a5:
    if (pFVar2 == (FMovieSceneSpawnable *)0x0) {
      return;
    }
    if (pFVar3 != (FMovieScenePossessable *)0x0) {
      pFVar6 = &pFVar3->Guid;
      pFVar5 = &pFVar2->Guid;
      goto LAB_14c6a44cf;
    }
    if (pFVar4 == (FMovieSceneSpawnable *)0x0) {
      return;
    }
    pFVar5 = &pFVar2->Guid;
  }
  else {
    if (pFVar3 != (FMovieScenePossessable *)0x0) {
      pFVar6 = &pFVar3->Guid;
      pFVar5 = &pFVar1->Guid;
      goto LAB_14c6a44cf;
    }
    if (pFVar4 == (FMovieSceneSpawnable *)0x0) goto LAB_14c6a44a5;
    pFVar5 = &pFVar1->Guid;
  }
  pFVar6 = &pFVar4->Guid;
LAB_14c6a44cf:
  UMovieScene::MoveBindingContents(this,pFVar5,pFVar6);
  return;
}

// NotEqual_MovieSceneBindingProxy @ 14c6a4500

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
UMovieSceneBindingExtensions::NotEqual_MovieSceneBindingProxy
          (FMovieSceneBindingProxy *param_1,FMovieSceneBindingProxy *param_2)

{
  if (((((param_1->BindingID).D == (param_2->BindingID).D &&
        (param_1->BindingID).C == (param_2->BindingID).C) &&
       (param_1->BindingID).B == (param_2->BindingID).B) &&
       (param_1->BindingID).A == (param_2->BindingID).A) &&
     ((param_1->Sequence).field0_0x0.DebugPtr == (param_2->Sequence).field0_0x0.DebugPtr)) {
    return false;
  }
  return true;
}

// Remove @ 14c6a48d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl UMovieSceneBindingExtensions::Remove(FMovieSceneBindingProxy *param_1)

{
  bool bVar1;
  UMovieScene *this;
  
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  if (this != (UMovieScene *)0x0) {
    bVar1 = UMovieScene::RemovePossessable(this,&param_1->BindingID);
    if (!bVar1) {
      UMovieScene::RemoveSpawnable(this,&param_1->BindingID);
    }
  }
  return;
}

// RemoveTrack @ 14c6a4f00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::RemoveTrack
          (FMovieSceneBindingProxy *param_1,UMovieSceneTrack *param_2)

{
  UMovieScene *this;
  
  if (param_2 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call RemoveTrack on a null track",Error,(FName)0x0);
    return;
  }
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  if (this != (UMovieScene *)0x0) {
    UMovieScene::RemoveTrack(this,param_2);
    return;
  }
  return;
}

// SetDisplayName @ 14c6a53a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::SetDisplayName(FMovieSceneBindingProxy *param_1,FText *param_2)

{
  UMovieSceneSequence *pUVar1;
  
  pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieSceneSequence *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014c6a53ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2f8))();
    return;
  }
  return;
}

// SetName @ 14c6a59c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::SetName(FMovieSceneBindingProxy *param_1,FString *param_2)

{
  UMovieSceneSequence *pUVar1;
  UMovieScene *this;
  FMovieSceneSpawnable *pFVar2;
  FMovieScenePossessable *pFVar3;
  
  pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr;
  if (((pUVar1 != (UMovieSceneSequence *)0x0) &&
      (this = (UMovieScene *)(**(code **)(pUVar1->_padding_ + 0x2f8))(), this != (UMovieScene *)0x0)
      ) && ((((param_1->BindingID).D != 0 || (param_1->BindingID).C != 0) ||
            (param_1->BindingID).B != 0) || (param_1->BindingID).A != 0)) {
    pFVar2 = UMovieScene::FindSpawnable(this,&param_1->BindingID);
    if (pFVar2 != (FMovieSceneSpawnable *)0x0) {
      ::FString::operator=(&pFVar2->Name,param_2);
    }
    pFVar3 = UMovieScene::FindPossessable(this,&param_1->BindingID);
    if (pFVar3 != (FMovieScenePossessable *)0x0) {
      ::FString::operator=(&pFVar3->Name,param_2);
    }
  }
  return;
}

// SetParent @ 14c6a5ac0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::SetParent
          (FMovieSceneBindingProxy *param_1,FMovieSceneBindingProxy *param_2)

{
  UMovieScene *this;
  FMovieScenePossessable *this_00;
  
  this = FMovieSceneBindingProxy::GetMovieScene(param_1);
  if (this != (UMovieScene *)0x0) {
    this_00 = UMovieScene::FindPossessable(this,&param_1->BindingID);
    if (this_00 != (FMovieScenePossessable *)0x0) {
      FMovieScenePossessable::SetParent(this_00,&param_2->BindingID,this);
    }
  }
  return;
}

// SetSortingOrder @ 14c6a6480

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::SetSortingOrder(FMovieSceneBindingProxy *param_1,int param_2)

{
  FFrame::KismetExecutionMessage(L"Cannot find requested binding",Error,(FName)0x0);
  return;
}

// SetSpawnableBindingID @ 14c6a64d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::SetSpawnableBindingID
          (FMovieSceneBindingProxy *param_1,FMovieSceneObjectBindingID *param_2)

{
  UMovieSceneSequence *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  UMovieScene *this;
  FMovieScenePossessable *pFVar6;
  
  pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetSpawnableBindingID with a binding with a null sequence",Error,
               (FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(pUVar1->_padding_ + 0x2f8))();
  pFVar6 = UMovieScene::FindPossessable(this,&param_1->BindingID);
  if (pFVar6 == (FMovieScenePossessable *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetSpawnableBindingID with a null possessable",Error,(FName)0x0);
    return;
  }
  uVar2 = (param_2->Guid).B;
  uVar3 = (param_2->Guid).C;
  uVar4 = (param_2->Guid).D;
  (pFVar6->SpawnableObjectBindingID).Guid.A = (param_2->Guid).A;
  (pFVar6->SpawnableObjectBindingID).Guid.B = uVar2;
  (pFVar6->SpawnableObjectBindingID).Guid.C = uVar3;
  (pFVar6->SpawnableObjectBindingID).Guid.D = uVar4;
  iVar5 = param_2->ResolveParentIndex;
  (pFVar6->SpawnableObjectBindingID).SequenceID = param_2->SequenceID;
  (pFVar6->SpawnableObjectBindingID).ResolveParentIndex = iVar5;
  return;
}

// StaticRegisterNativesUMovieSceneBindingExtensions @ 14c6a7060

void __cdecl UMovieSceneBindingExtensions::StaticRegisterNativesUMovieSceneBindingExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x17;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneBindingExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddTrack @ 14c6a9f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execAddTrack(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  UMovieScene *this;
  UClass *pUVar4;
  FMovieSceneBinding *pFVar5;
  UMovieSceneTrack *pUVar6;
  longlong *plVar7;
  UClass *pUVar8;
  FMovieSceneBindingProxy *this_00;
  undefined1 auStack_108 [32];
  UClass *local_e8;
  undefined8 local_e0;
  FMovieSceneBindingProxy local_d8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d8.BindingID.A = 0;
  local_d8.BindingID.B = 0;
  local_d8.BindingID.C = 0;
  local_d8.BindingID.D = 0;
  local_d8.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e8 = (UClass *)0x0;
  this_00 = &local_d8;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    this_00 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pUVar8 = local_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (local_e8 == (UClass *)0x0)) {
    this = FMovieSceneBindingProxy::GetMovieScene(this_00);
    if (pUVar8 != (UClass *)0x0) goto LAB_14c6aa066;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)local_e8);
    this = FMovieSceneBindingProxy::GetMovieScene(this_00);
LAB_14c6aa066:
    pUVar4 = Z_Construct_UClass_UMovieSceneTrack_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar8->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14c6aa097;
    }
  }
  pUVar8 = (UClass *)0x0;
LAB_14c6aa097:
  if ((this != (UMovieScene *)0x0) &&
     (pFVar5 = UMovieScene::FindBinding(this,&this_00->BindingID),
     pFVar5 != (FMovieSceneBinding *)0x0)) {
    local_e0 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UMovieSceneTrack_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar8);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar8);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_Transactional;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar6 = (UMovieSceneTrack *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar7 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (pUVar6 != (UMovieSceneTrack *)0x0) {
      UMovieScene::AddGivenTrack(this,pUVar6,&this_00->BindingID);
      *(UMovieSceneTrack **)param_3 = pUVar6;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execEqualEqual_MovieSceneBindingProxy @ 14c6aa920

void __cdecl
UMovieSceneBindingExtensions::execEqualEqual_MovieSceneBindingProxy
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  UObject *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  UObject *local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pUVar2 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_88;
  uStack_40 = uStack_80;
  local_20 = local_88;
  uStack_18 = uStack_80;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_78);
  }
  pUVar3 = local_60;
  local_58 = (int)local_70;
  iStack_54 = local_70._4_4_;
  iStack_50 = (int)uStack_68;
  iStack_4c = uStack_68._4_4_;
  local_38 = (int)local_70;
  iStack_34 = local_70._4_4_;
  iStack_30 = (int)uStack_68;
  iStack_2c = uStack_68._4_4_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_60);
    local_70._0_4_ = local_58;
    uStack_68._0_4_ = iStack_50;
  }
  if ((((iStack_2c == uStack_18._4_4_ && (int)uStack_68 == (int)uStack_40) &&
       iStack_34 == local_20._4_4_) && (int)local_70 == (int)local_48) && (pUVar3 == pUVar2)) {
    *(undefined1 *)param_3 = 1;
  }
  else {
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// execFindTracksByExactType @ 14c6ab720

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execFindTracksByExactType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FMovieSceneBindingProxy *pFVar3;
  UObject *local_res10;
  UObject *local_res18 [2];
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> local_48;
  FMovieSceneBindingProxy local_38;
  
  local_38.BindingID.A = 0;
  local_38.BindingID.B = 0;
  local_38.BindingID.C = 0;
  local_38.BindingID.D = 0;
  local_38.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = (UObject *)0x0;
  pFVar3 = &local_38;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    pFVar3 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
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
  local_res18[0] = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pTVar2 = FindTracksByExactType(&local_48,pFVar3,(TSubclassOf<UMovieSceneTrack>)local_res18);
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
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// execFindTracksByType @ 14c6abd40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execFindTracksByType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FMovieSceneBindingProxy *pFVar3;
  UObject *local_res10;
  UObject *local_res18 [2];
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> local_48;
  FMovieSceneBindingProxy local_38;
  
  local_38.BindingID.A = 0;
  local_38.BindingID.B = 0;
  local_38.BindingID.C = 0;
  local_38.BindingID.D = 0;
  local_38.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = (UObject *)0x0;
  pFVar3 = &local_38;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    pFVar3 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
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
  local_res18[0] = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pTVar2 = FindTracksByType(&local_48,pFVar3,(TSubclassOf<UMovieSceneTrack>)local_res18);
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
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// execGetChildPossessables @ 14c6adb40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execGetChildPossessables
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> *pTVar2;
  FMovieSceneBindingProxy *pFVar3;
  TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> local_38;
  FMovieSceneBindingProxy local_28;
  
  local_28.BindingID.A = 0;
  local_28.BindingID.B = 0;
  local_28.BindingID.C = 0;
  local_28.BindingID.D = 0;
  local_28.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    pFVar3 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetChildPossessables(&local_38,pFVar3);
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
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execGetDisplayName @ 14c6ae330

void __cdecl
UMovieSceneBindingExtensions::execGetDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieScene *this;
  FGuid *pFVar2;
  FText local_38;
  FGuid local_28;
  undefined8 local_18;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = &local_28;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar2 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)(pFVar2 + 1) != (longlong *)0x0) {
    this = (UMovieScene *)(**(code **)(**(longlong **)(pFVar2 + 1) + 0x2f8))();
    if ((this != (UMovieScene *)0x0) &&
       (((pFVar2->D != 0 || pFVar2->C != 0) || pFVar2->B != 0) || pFVar2->A != 0)) {
      UMovieScene::GetObjectDisplayName(this,&local_38,pFVar2);
      goto LAB_14c6ae3f6;
    }
  }
  FText::FText(&local_38);
LAB_14c6ae3f6:
  FText::operator=(param_3,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execGetId @ 14c6aec00

void __cdecl UMovieSceneBindingExtensions::execGetId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  uchar local_28 [32];
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  local_28[0x14] = '\0';
  local_28[0x15] = '\0';
  local_28[0x16] = '\0';
  local_28[0x17] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)param_3 = *(undefined8 *)puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  return;
}

// execGetName @ 14c6af9d0

void __cdecl
UMovieSceneBindingExtensions::execGetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieScene *this;
  FMovieSceneSpawnable *pFVar2;
  FMovieScenePossessable *pFVar3;
  FGuid *pFVar4;
  FString local_38;
  FGuid local_28;
  undefined8 local_18;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar4 = &local_28;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar4 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)(pFVar4 + 1) != (longlong *)0x0) {
    this = (UMovieScene *)(**(code **)(**(longlong **)(pFVar4 + 1) + 0x2f8))();
    if ((this != (UMovieScene *)0x0) &&
       (((pFVar4->D != 0 || pFVar4->C != 0) || pFVar4->B != 0) || pFVar4->A != 0)) {
      pFVar2 = UMovieScene::FindSpawnable(this,pFVar4);
      if (pFVar2 != (FMovieSceneSpawnable *)0x0) {
        ::FString::FString(&local_38,&pFVar2->Name);
        goto LAB_14c6afad9;
      }
      pFVar3 = UMovieScene::FindPossessable(this,pFVar4);
      if (pFVar3 != (FMovieScenePossessable *)0x0) {
        ::FString::FString(&local_38,&pFVar3->Name);
        goto LAB_14c6afad9;
      }
    }
  }
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14c6afad9:
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetObjectTemplate @ 14c6afc70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execGetObjectTemplate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieScene *this;
  UClass *pUVar2;
  UMovieSceneSequence *pUVar3;
  UObject *pUVar4;
  FMovieSceneBindingProxy *this_00;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_48;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  FMovieSceneBindingProxy local_28;
  
  local_28.BindingID.A = 0;
  local_28.BindingID.B = 0;
  local_28.BindingID.C = 0;
  local_28.BindingID.D = 0;
  local_28.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this_00 = &local_28;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    this_00 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMovieSceneBindingProxy::GetMovieScene(this_00);
  if (this == (UMovieScene *)0x0) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    pUVar3 = (UMovieSceneSequence *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
    MovieSceneHelpers::CreateTransientSharedPlaybackState(&local_48,(UObject *)GWorld.World,pUVar3);
    local_38.Object = local_48.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar2 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    pUVar3 = (UMovieSceneSequence *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
    pUVar4 = MovieSceneHelpers::GetObjectTemplate(pUVar3,&this_00->BindingID,&local_38,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    *(UObject **)param_3 = pUVar4;
  }
  return;
}

// execGetParent @ 14c6afda0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execGetParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieScene *this;
  FMovieScenePossessable *pFVar2;
  UMovieSceneSequence *pUVar3;
  FMovieSceneBindingProxy *this_00;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  FMovieSceneBindingProxy local_20;
  
  pUVar3 = (UMovieSceneSequence *)0x0;
  local_20.BindingID.A = 0;
  local_20.BindingID.B = 0;
  local_20.BindingID.C = 0;
  local_20.BindingID.D = 0;
  local_20.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  this_00 = &local_20;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    this_00 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMovieSceneBindingProxy::GetMovieScene(this_00);
  if ((this == (UMovieScene *)0x0) ||
     (pFVar2 = UMovieScene::FindPossessable(this,&this_00->BindingID),
     pFVar2 == (FMovieScenePossessable *)0x0)) {
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
  }
  else {
    local_38 = (pFVar2->ParentGuid).A;
    uStack_34 = (pFVar2->ParentGuid).B;
    uStack_30 = (pFVar2->ParentGuid).C;
    uStack_2c = (pFVar2->ParentGuid).D;
    pUVar3 = (this_00->Sequence).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UMovieSceneSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  *(uint *)param_3 = local_38;
  *(uint *)((longlong)param_3 + 4) = uStack_34;
  *(uint *)((longlong)param_3 + 8) = uStack_30;
  *(uint *)((longlong)param_3 + 0xc) = uStack_2c;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneSequence *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(UMovieSceneSequence **)((longlong)param_3 + 0x10) = pUVar3;
  return;
}

// execGetPossessedObjectClass @ 14c6b15c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execGetPossessedObjectClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieScene *this;
  FMovieSceneBindingProxy *this_00;
  FMovieSceneBindingProxy local_28;
  
  local_28.BindingID.A = 0;
  local_28.BindingID.B = 0;
  local_28.BindingID.C = 0;
  local_28.BindingID.D = 0;
  local_28.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this_00 = &local_28;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    this_00 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMovieSceneBindingProxy::GetMovieScene(this_00);
  if (this != (UMovieScene *)0x0) {
    UMovieScene::FindPossessable(this,&this_00->BindingID);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetSortingOrder @ 14c6b1b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execGetSortingOrder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FFrame::KismetExecutionMessage(L"Cannot find requested binding",Error,(FName)0x0);
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetTracks @ 14c6b2740

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execGetTracks(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FScriptContainerElement *_Src;
  UMovieScene *this;
  FMovieSceneBinding *pFVar3;
  FMovieSceneBindingProxy *this_00;
  ForAnyElementType local_38;
  undefined8 local_30;
  FMovieSceneBindingProxy local_28;
  
  local_28.BindingID.A = 0;
  local_28.BindingID.B = 0;
  local_28.BindingID.C = 0;
  local_28.BindingID.D = 0;
  local_28.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this_00 = &local_28;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    this_00 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMovieSceneBindingProxy::GetMovieScene(this_00);
  if (this != (UMovieScene *)0x0) {
    pFVar3 = UMovieScene::FindBinding(this,&this_00->BindingID);
    if (pFVar3 != (FMovieSceneBinding *)0x0) {
      local_38.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar3->Tracks).ArrayNum;
      _Src = (pFVar3->Tracks).AllocatorInstance.Data;
      local_30 = CONCAT44(local_30._4_4_,iVar1);
      if (iVar1 == 0) {
        local_30 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
        memcpy(local_38.Data,_Src,(longlong)iVar1 << 3);
      }
      goto LAB_14c6b2854;
    }
  }
  local_30 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
LAB_14c6b2854:
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_30;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execIsValid @ 14c6b37f0

void __cdecl
UMovieSceneBindingExtensions::execIsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieScene *this;
  FMovieSceneBinding *pFVar2;
  FGuid *pFVar3;
  FGuid local_28;
  undefined8 local_18;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar3 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(longlong **)(pFVar3 + 1) != (longlong *)0x0) &&
      (this = (UMovieScene *)(**(code **)(**(longlong **)(pFVar3 + 1) + 0x2f8))(),
      this != (UMovieScene *)0x0)) &&
     (((pFVar3->D != 0 || pFVar3->C != 0) || pFVar3->B != 0) || pFVar3->A != 0)) {
    pFVar2 = UMovieScene::FindBinding(this,pFVar3);
    *(bool *)param_3 = pFVar2 != (FMovieSceneBinding *)0x0;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execMoveBindingContents @ 14c6b4580

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execMoveBindingContents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieScene *this;
  FMovieScenePossessable *pFVar2;
  FMovieSceneSpawnable *pFVar3;
  FMovieScenePossessable *pFVar4;
  FMovieSceneSpawnable *pFVar5;
  FGuid *pFVar6;
  FMovieSceneBindingProxy *this_00;
  FGuid *pFVar7;
  FMovieSceneBindingProxy local_38;
  FGuid local_20;
  undefined8 local_10;
  
  local_38.BindingID.A = 0;
  local_38.BindingID.B = 0;
  local_38.BindingID.C = 0;
  local_38.BindingID.D = 0;
  local_38.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_20.A = 0;
  local_20.B = 0;
  local_20.C = 0;
  local_20.D = 0;
  this_00 = &local_38;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    this_00 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  pFVar6 = &local_20;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar6 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMovieSceneBindingProxy::GetMovieScene(this_00);
  if (this == (UMovieScene *)0x0) {
    return;
  }
  pFVar2 = UMovieScene::FindPossessable(this,&this_00->BindingID);
  pFVar3 = UMovieScene::FindSpawnable(this,&this_00->BindingID);
  pFVar4 = UMovieScene::FindPossessable(this,pFVar6);
  pFVar5 = UMovieScene::FindSpawnable(this,pFVar6);
  if (pFVar2 == (FMovieScenePossessable *)0x0) {
LAB_14c6b46cd:
    if (pFVar3 == (FMovieSceneSpawnable *)0x0) {
      return;
    }
    if (pFVar4 != (FMovieScenePossessable *)0x0) {
      pFVar7 = &pFVar4->Guid;
      pFVar6 = &pFVar3->Guid;
      goto LAB_14c6b46f7;
    }
    if (pFVar5 == (FMovieSceneSpawnable *)0x0) {
      return;
    }
    pFVar6 = &pFVar3->Guid;
  }
  else {
    if (pFVar4 != (FMovieScenePossessable *)0x0) {
      pFVar7 = &pFVar4->Guid;
      pFVar6 = &pFVar2->Guid;
      goto LAB_14c6b46f7;
    }
    if (pFVar5 == (FMovieSceneSpawnable *)0x0) goto LAB_14c6b46cd;
    pFVar6 = &pFVar2->Guid;
  }
  pFVar7 = &pFVar5->Guid;
LAB_14c6b46f7:
  UMovieScene::MoveBindingContents(this,pFVar6,pFVar7);
  return;
}

// execNotEqual_MovieSceneBindingProxy @ 14c6b4720

void __cdecl
UMovieSceneBindingExtensions::execNotEqual_MovieSceneBindingProxy
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  UObject *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  UObject *local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pUVar2 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_88;
  uStack_40 = uStack_80;
  local_20 = local_88;
  uStack_18 = uStack_80;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_78);
  }
  pUVar3 = local_60;
  local_58 = (int)local_70;
  iStack_54 = local_70._4_4_;
  iStack_50 = (int)uStack_68;
  iStack_4c = uStack_68._4_4_;
  local_38 = (int)local_70;
  iStack_34 = local_70._4_4_;
  iStack_30 = (int)uStack_68;
  iStack_2c = uStack_68._4_4_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_60);
    local_70._0_4_ = local_58;
    uStack_68._0_4_ = iStack_50;
  }
  if ((((iStack_2c == uStack_18._4_4_ && (int)uStack_68 == (int)uStack_40) &&
       iStack_34 == local_20._4_4_) && (int)local_70 == (int)local_48) && (pUVar3 == pUVar2)) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execRemove @ 14c6b48a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execRemove(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UMovieScene *this;
  FMovieSceneBindingProxy *this_00;
  FMovieSceneBindingProxy local_28;
  
  local_28.BindingID.A = 0;
  local_28.BindingID.B = 0;
  local_28.BindingID.C = 0;
  local_28.BindingID.D = 0;
  local_28.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this_00 = &local_28;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    this_00 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMovieSceneBindingProxy::GetMovieScene(this_00);
  if (this != (UMovieScene *)0x0) {
    bVar2 = UMovieScene::RemovePossessable(this,&this_00->BindingID);
    if (!bVar2) {
      UMovieScene::RemoveSpawnable(this,&this_00->BindingID);
    }
  }
  return;
}

// execRemoveTrack @ 14c6b53e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execRemoveTrack(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneTrack *pUVar2;
  UMovieScene *this;
  FMovieSceneBindingProxy *this_00;
  UMovieSceneTrack *local_res10;
  FMovieSceneBindingProxy local_28;
  
  local_28.BindingID.A = 0;
  local_28.BindingID.B = 0;
  local_28.BindingID.C = 0;
  local_28.BindingID.D = 0;
  local_28.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = (UMovieSceneTrack *)0x0;
  this_00 = &local_28;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    this_00 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call RemoveTrack on a null track",Error,(FName)0x0);
    return;
  }
  this = FMovieSceneBindingProxy::GetMovieScene(this_00);
  if (this != (UMovieScene *)0x0) {
    UMovieScene::RemoveTrack(this,pUVar2);
  }
  return;
}

// execSetDisplayName @ 14c6b5ef0

void __cdecl
UMovieSceneBindingExtensions::execSetDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  FText local_38;
  uchar local_28 [32];
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  local_28[0x14] = '\0';
  local_28[0x15] = '\0';
  local_28[0x16] = '\0';
  local_28[0x17] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)(puVar2 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(puVar2 + 0x10) + 0x2f8))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execSetName @ 14c6b7250

void __cdecl
UMovieSceneBindingExtensions::execSetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  FProperty *pFVar4;
  ForAnyElementType FVar5;
  int iVar6;
  UMovieScene *this;
  FMovieSceneSpawnable *pFVar7;
  FMovieScenePossessable *pFVar8;
  longlong lVar9;
  FGuid *pFVar10;
  ForAnyElementType local_48;
  undefined8 local_40;
  FGuid local_38;
  undefined8 local_28;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  local_28 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pFVar10 = &local_38;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar10 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(longlong **)(pFVar10 + 1) != (longlong *)0x0) &&
      (this = (UMovieScene *)(**(code **)(**(longlong **)(pFVar10 + 1) + 0x2f8))(),
      this != (UMovieScene *)0x0)) &&
     (((pFVar10->D != 0 || pFVar10->C != 0) || pFVar10->B != 0) || pFVar10->A != 0)) {
    pFVar7 = UMovieScene::FindSpawnable(this,pFVar10);
    FVar5.Data = local_48.Data;
    if ((pFVar7 != (FMovieSceneSpawnable *)0x0) &&
       (pFVar2 = &pFVar7->Name, pFVar2 != (FString *)&local_48)) {
      iVar6 = (int)local_40;
      lVar9 = (longlong)(int)local_40;
      piVar1 = &(pFVar7->Name).Data.ArrayMax;
      iVar3 = *piVar1;
      (pFVar7->Name).Data.ArrayNum = (int)local_40;
      if (((int)local_40 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_40,iVar3,(ForAnyElementType *)pFVar2,(int)local_40,piVar1);
        if (iVar6 != 0) {
          memcpy((pFVar2->Data).AllocatorInstance.Data,FVar5.Data,lVar9 * 2);
        }
      }
    }
    pFVar8 = UMovieScene::FindPossessable(this,pFVar10);
    FVar5.Data = local_48.Data;
    if ((pFVar8 != (FMovieScenePossessable *)0x0) &&
       (pFVar2 = &pFVar8->Name, pFVar2 != (FString *)&local_48)) {
      iVar6 = (int)local_40;
      lVar9 = (longlong)(int)local_40;
      piVar1 = &(pFVar8->Name).Data.ArrayMax;
      iVar3 = *piVar1;
      (pFVar8->Name).Data.ArrayNum = (int)local_40;
      if (((int)local_40 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_40,iVar3,(ForAnyElementType *)pFVar2,(int)local_40,piVar1);
        if (iVar6 != 0) {
          memcpy((pFVar2->Data).AllocatorInstance.Data,FVar5.Data,lVar9 * 2);
        }
      }
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// execSetParent @ 14c6b75e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execSetParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieScene *this;
  FMovieScenePossessable *this_00;
  FGuid *pFVar2;
  FMovieSceneBindingProxy *this_01;
  FMovieSceneBindingProxy local_38;
  FGuid local_20;
  undefined8 local_10;
  
  local_38.BindingID.A = 0;
  local_38.BindingID.B = 0;
  local_38.BindingID.C = 0;
  local_38.BindingID.D = 0;
  local_38.Sequence.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneSequence>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_20.A = 0;
  local_20.B = 0;
  local_20.C = 0;
  local_20.D = 0;
  this_01 = &local_38;
  if ((FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneBindingProxy *)0x0) {
    this_01 = (FMovieSceneBindingProxy *)param_2->MostRecentPropertyAddress;
  }
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  pFVar2 = &local_20;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar2 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMovieSceneBindingProxy::GetMovieScene(this_01);
  if (this != (UMovieScene *)0x0) {
    this_00 = UMovieScene::FindPossessable(this,&this_01->BindingID);
    if (this_00 != (FMovieScenePossessable *)0x0) {
      FMovieScenePossessable::SetParent(this_00,pFVar2,this);
    }
  }
  return;
}

// execSetSortingOrder @ 14c6b87f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execSetSortingOrder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FFrame::KismetExecutionMessage(L"Cannot find requested binding",Error,(FName)0x0);
  return;
}

// execSetSpawnableBindingID @ 14c6b89a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneBindingExtensions::execSetSpawnableBindingID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  UMovieScene *this;
  FMovieScenePossessable *pFVar4;
  FGuid *pFVar5;
  uchar *puVar6;
  uchar local_38 [24];
  FGuid local_20;
  undefined8 local_10;
  
  local_20.A = 0;
  local_20.B = 0;
  local_20.C = 0;
  local_20.D = 0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  pFVar5 = &local_20;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar5 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  local_38[0x10] = '\0';
  local_38[0x11] = '\0';
  local_38[0x12] = '\0';
  local_38[0x13] = '\0';
  local_38[0x14] = 0xff;
  local_38[0x15] = 0xff;
  local_38[0x16] = 0xff;
  local_38[0x17] = 0xff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar6 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)(pFVar5 + 1) == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetSpawnableBindingID with a binding with a null sequence",Error,
               (FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(**(longlong **)(pFVar5 + 1) + 0x2f8))();
    pFVar4 = UMovieScene::FindPossessable(this,pFVar5);
    if (pFVar4 == (FMovieScenePossessable *)0x0) {
      FFrame::KismetExecutionMessage
                (L"Cannot call SetSpawnableBindingID with a null possessable",Error,(FName)0x0);
    }
    else {
      uVar1 = *(undefined8 *)puVar6;
      uVar3 = *(undefined8 *)(puVar6 + 8);
      (pFVar4->SpawnableObjectBindingID).Guid.A = (int)uVar1;
      (pFVar4->SpawnableObjectBindingID).Guid.B = (int)((ulonglong)uVar1 >> 0x20);
      (pFVar4->SpawnableObjectBindingID).Guid.C = (int)uVar3;
      (pFVar4->SpawnableObjectBindingID).Guid.D = (int)((ulonglong)uVar3 >> 0x20);
      uVar1 = *(undefined8 *)(puVar6 + 0x10);
      (pFVar4->SpawnableObjectBindingID).SequenceID = (int)uVar1;
      (pFVar4->SpawnableObjectBindingID).ResolveParentIndex = (int)((ulonglong)uVar1 >> 0x20);
    }
  }
  return;
}

