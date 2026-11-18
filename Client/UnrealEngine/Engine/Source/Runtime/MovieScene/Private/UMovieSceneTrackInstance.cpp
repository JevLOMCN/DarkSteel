// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 18

// StaticClass @ 1461635d0

UClass * __cdecl UMovieSceneTrackInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackInstance",
               &Z_Registration_Info_UClass_UMovieSceneTrackInstance.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackInstance,0x50,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTrackInstance>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstance.InnerSingleton;
}

// UMovieSceneTrackInstance @ 1461834a0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneTrackInstance * __thiscall
UMovieSceneTrackInstance::UMovieSceneTrackInstance
          (UMovieSceneTrackInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstance__6B_;
  (this->WeakAnimatedObject).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PrivateLinker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  return this;
}

// UMovieSceneTrackInstance @ 1461834e0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneTrackInstance * __thiscall
UMovieSceneTrackInstance::UMovieSceneTrackInstance
          (UMovieSceneTrackInstance *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstance__6B_;
  (this->WeakAnimatedObject).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PrivateLinker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  return this;
}

// ~UMovieSceneTrackInstance @ 146185e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneTrackInstance::~UMovieSceneTrackInstance(UMovieSceneTrackInstance *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstance__6B_;
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Animate @ 146192980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneTrackInstance::Animate(UMovieSceneTrackInstance *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146192983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))();
  return;
}

// Destroy @ 14619cee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneTrackInstance::Destroy(UMovieSceneTrackInstance *this)

{
  int iVar1;
  TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput> *this_00;
  FPreAnimatedTrackInstanceCaptureSources *pFVar2;
  FPreAnimatedStateExtension *this_01;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  FUObjectItem *pFVar7;
  ForElementType<UE::MovieScene::FPreAnimatedStateMetaData> FVar8;
  ForElementType<UE::MovieScene::FPreAnimatedStateMetaData> FVar9;
  uint uVar10;
  FMovieSceneTrackInstanceInput *pFVar11;
  FMovieSceneTrackInstanceInput *pFVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UMovieSceneTrackInstance *local_res20;
  
  if ((this->bIsRootTrackInstance != false) ||
     (((pUVar6 = FWeakObjectPtr::Get(&(this->WeakAnimatedObject).WeakPtr), pUVar6 != (UObject *)0x0
       && ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) == 0)) &&
      (pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar6->field_0xc),
      ((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)))) {
    (**(code **)(this->_padding_ + 0x2e0))(this);
  }
  this_00 = (TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput> *)
            (((this->PrivateLinker).field0_0x0.DebugPtr)->PreAnimatedState).
            TrackInstanceInputCaptureSource.Ptr;
  if (this_00 != (TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput> *)0x0) {
    iVar1 = (this->Inputs).ArrayNum;
    pFVar12 = (FMovieSceneTrackInstanceInput *)(this->Inputs).AllocatorInstance.Data;
    pFVar11 = pFVar12 + iVar1;
    while( true ) {
      if ((this->Inputs).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMovieSceneTrackInstanceInput,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar12 == pFVar11) break;
      UE::MovieScene::TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput>::
      StopTrackingCaptureSource(this_00,pFVar12);
      pFVar12 = pFVar12 + 1;
    }
  }
  pFVar2 = (((this->PrivateLinker).field0_0x0.DebugPtr)->PreAnimatedState).
           TrackInstanceCaptureSource.Ptr;
  if (pFVar2 != (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    local_res18 = local_res10;
    FVar8 = (ForElementType<UE::MovieScene::FPreAnimatedStateMetaData>)
            TMapBase<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
            ::Find((TMapBase<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                    *)&pFVar2->field_0x8,(FObjectKey *)&local_res18);
    if (FVar8 != (ForElementType<UE::MovieScene::FPreAnimatedStateMetaData>)0x0) {
      uVar10 = *(int *)((longlong)FVar8 + 0x20) - 1;
      if (-1 < (int)uVar10) {
        lVar13 = (longlong)(int)uVar10 * 0x14;
        do {
          this_01 = *(FPreAnimatedStateExtension **)&pFVar2->field_0x58;
          uVar5 = 0;
          if ((int)uVar10 < *(int *)((longlong)FVar8 + 0x20)) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar9 = FVar8;
          if (*(ForElementType<UE::MovieScene::FPreAnimatedStateMetaData> *)((longlong)FVar8 + 0x18)
              != (ForElementType<UE::MovieScene::FPreAnimatedStateMetaData>)0x0) {
            FVar9 = *(ForElementType<UE::MovieScene::FPreAnimatedStateMetaData> *)
                     ((longlong)FVar8 + 0x18);
          }
          UE::MovieScene::FPreAnimatedStateExtension::RemoveMetaData
                    (this_01,(FPreAnimatedStateMetaData *)((longlong)FVar9 + lVar13));
          lVar13 = lVar13 + -0x14;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      TMapBase<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
      ::Remove((TMapBase<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                *)&pFVar2->field_0x8,(FObjectKey *)&local_res18);
    }
  }
  return;
}

// GetPrivateStaticClass @ 1461b30d0

UClass * __cdecl UMovieSceneTrackInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackInstance",
               &Z_Registration_Info_UClass_UMovieSceneTrackInstance.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackInstance,0x50,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTrackInstance>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstance.InnerSingleton;
}

// GetWorld @ 1461b4c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UMovieSceneTrackInstance::GetWorld(UMovieSceneTrackInstance *this)

{
  UObject *pUVar1;
  UWorld *pUVar2;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->WeakAnimatedObject).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001461b4c79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UWorld *)
             (**(code **)(*(longlong *)pUVar1 + 0x180))
                       (pUVar1,*(code **)(*(longlong *)pUVar1 + 0x180));
    return pUVar2;
  }
  pUVar2 = UObject::GetWorld((UObject *)this);
  return pUVar2;
}

// Initialize @ 1461b6400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTrackInstance::Initialize
          (UMovieSceneTrackInstance *this,UObject *param_1,UMovieSceneEntitySystemLinker *param_2)

{
  UObject *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakAnimatedObject).WeakPtr,(FObjectPtr)&local_res8);
  this->bIsRootTrackInstance = param_1 == (UObject *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->PrivateLinker).field0_0x0.DebugPtr = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001461b6479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this);
  return;
}

// OnAnimate @ 1461bf290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneTrackInstance::OnAnimate(UMovieSceneTrackInstance *this)

{
  return;
}

// OnBeginUpdateInputs @ 1461bf2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneTrackInstance::OnBeginUpdateInputs(UMovieSceneTrackInstance *this)

{
  return;
}

// OnDestroyed @ 1461bf4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneTrackInstance::OnDestroyed(UMovieSceneTrackInstance *this)

{
  return;
}

// OnEndUpdateInputs @ 1461bf4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneTrackInstance::OnEndUpdateInputs(UMovieSceneTrackInstance *this)

{
  return;
}

// OnInitialize @ 1461bf680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneTrackInstance::OnInitialize(UMovieSceneTrackInstance *this)

{
  return;
}

// OnInputAdded @ 1461bf690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTrackInstance::OnInputAdded
          (UMovieSceneTrackInstance *this,FMovieSceneTrackInstanceInput *param_1)

{
  return;
}

// OnInputRemoved @ 1461bf6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTrackInstance::OnInputRemoved
          (UMovieSceneTrackInstance *this,FMovieSceneTrackInstanceInput *param_1)

{
  return;
}

// StaticRegisterNativesUMovieSceneTrackInstance @ 1461d4980

void __cdecl UMovieSceneTrackInstance::StaticRegisterNativesUMovieSceneTrackInstance(void)

{
  return;
}

// UpdateInputs @ 1461dffb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTrackInstance::UpdateInputs
          (UMovieSceneTrackInstance *this,
          TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  UMovieSceneEntitySystemLinker *pUVar4;
  UObjectBaseUtility *pUVar5;
  ulonglong uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput> *pTVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  UClass *pUVar17;
  UObject *pUVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  longlong lVar25;
  undefined1 auStackY_198 [32];
  uint local_148;
  FIdentityFunctor local_144 [4];
  int local_140;
  longlong local_138;
  ForAnyElementType local_130;
  undefined8 local_128;
  longlong local_120;
  TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput> *local_118;
  UMovieSceneEntitySystemLinker *local_110;
  UMovieSceneEntitySystemLinker *local_108;
  UMovieSceneEntitySystemLinker *local_100;
  TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *local_f8;
  UObject *local_f0;
  undefined4 local_e8;
  FScriptContainerElement local_e4;
  undefined1 local_e0;
  undefined4 local_d8;
  FWeakObjectPtr local_d4;
  undefined8 local_c8;
  undefined1 local_c0;
  UObject *local_b8;
  undefined4 local_b0;
  FScriptContainerElement local_ac;
  undefined1 local_a8;
  undefined4 local_a0;
  FWeakObjectPtr local_9c;
  undefined8 local_90;
  undefined1 local_88;
  UObject *local_80;
  undefined4 local_78;
  FScriptContainerElement local_74;
  undefined1 local_70;
  undefined4 local_68;
  FWeakObjectPtr local_64;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_f8 = param_1;
  AlgoImpl::IntroSortInternal<FMovieSceneTrackInstanceInput,int,FIdentityFunctor,TLess<void>_>
            ((FMovieSceneTrackInstanceInput *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
             local_144[0],(TLess<void>)local_144[0]);
  iVar16 = (this->Inputs).ArrayNum;
  if ((iVar16 == param_1->ArrayNum) &&
     (bVar13 = CompareItems<FMovieSceneTrackInstanceInput,int>
                         ((FMovieSceneTrackInstanceInput *)(this->Inputs).AllocatorInstance.Data,
                          (FMovieSceneTrackInstanceInput *)(param_1->AllocatorInstance).Data,iVar16)
     , bVar13)) {
    (**(code **)(this->_padding_ + 0x2c0))(this);
    (**(code **)(this->_padding_ + 0x2d8))(this);
  }
  else {
    local_118 = (TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput> *)
                (((this->PrivateLinker).field0_0x0.DebugPtr)->PreAnimatedState).
                TrackInstanceInputCaptureSource.Ptr;
    (**(code **)(this->_padding_ + 0x2c0))(this);
    local_120 = (longlong)param_1->ArrayNum;
    uVar24 = 0;
    local_140 = (this->Inputs).ArrayNum;
    local_148 = 0;
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128 = 0;
    local_138 = 0;
    lVar25 = local_138;
    while ((int)local_148 < local_140) {
      lVar20 = lVar25 << 4;
      while (lVar25 < local_120) {
        lVar19 = (longlong)(int)local_148;
        uVar15 = 0;
        if ((int)local_148 < (this->Inputs).ArrayNum) {
          uVar15 = ~local_148 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar23 = (this->Inputs).AllocatorInstance.Data + lVar19 * 0x10;
        uVar21 = ~uVar24 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar24 < param_1->ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (*(longlong *)pFVar23 != *(longlong *)(pFVar3 + lVar20)) break;
        uVar1 = *(undefined4 *)(pFVar3 + lVar20 + 8);
        uVar2 = *(undefined4 *)(pFVar23 + 8);
        if (((short)uVar2 != (short)uVar1) ||
           ((short)((uint)uVar2 >> 0x10) != (short)((uint)uVar1 >> 0x10))) break;
        uVar15 = 0;
        if ((int)uVar24 < param_1->ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((param_1->AllocatorInstance).Data[lVar20 + 0xc] == (FScriptContainerElement)0x0) {
          lVar25 = (longlong)(int)local_148;
          pcVar7 = *(code **)(this->_padding_ + 0x2d0);
          uVar15 = 0;
          if ((int)local_148 < (this->Inputs).ArrayNum) {
            uVar15 = ~local_148 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (*pcVar7)(this,(this->Inputs).AllocatorInstance.Data + lVar25 * 0x10);
          pTVar12 = local_118;
          if (local_118 != (TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput> *)0x0) {
            lVar25 = (longlong)(int)local_148;
            uVar15 = 0;
            if ((int)local_148 < (this->Inputs).ArrayNum) {
              uVar15 = ~local_148 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            UE::MovieScene::TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput>::
            StopTrackingCaptureSource
                      (pTVar12,(FMovieSceneTrackInstanceInput *)
                               ((this->Inputs).AllocatorInstance.Data + lVar25 * 0x10));
          }
          uVar15 = 0;
          if ((int)uVar24 < param_1->ArrayNum) {
            uVar15 = uVar21;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar23 = (param_1->AllocatorInstance).Data + lVar20;
          pUVar4 = (this->PrivateLinker).field0_0x0.DebugPtr;
          local_f0 = *(UObject **)pFVar23;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_f0);
          }
          local_e8 = *(undefined4 *)(pFVar23 + 8);
          local_e4 = pFVar23[0xc];
          local_e0 = 3;
          local_d8 = 0xffff;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar4 != (UMovieSceneEntitySystemLinker *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          local_d4.ObjectIndex = 0;
          local_d4.ObjectSerialNumber = 0;
          local_110 = pUVar4;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar4 != (UMovieSceneEntitySystemLinker *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          FWeakObjectPtr::operator=(&local_d4,(FObjectPtr)&local_110);
          pUVar5 = *(UObjectBaseUtility **)pFVar23;
          cVar14 = pUVar5[2].field_0x21;
          if (cVar14 == '\x02') {
            pUVar17 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
            pUVar18 = UObjectBaseUtility::GetTypedOuter(pUVar5,pUVar17);
            cVar14 = pUVar18[2].field_0x18;
          }
          local_c0 = cVar14 == '\x01';
          lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          local_c8 = *(undefined8 *)(lVar25 + 0xee8);
          *(UObject ***)(lVar25 + 0xee8) = &local_f0;
          uVar15 = 0;
          if ((int)uVar24 < param_1->ArrayNum) {
            uVar15 = uVar21;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (param_1->AllocatorInstance).Data[lVar20 + 0xc] = (FScriptContainerElement)0x1;
          pcVar7 = *(code **)(this->_padding_ + 0x2c8);
          uVar15 = 0;
          if ((int)uVar24 < param_1->ArrayNum) {
            uVar15 = uVar21;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (*pcVar7)(this,(param_1->AllocatorInstance).Data + lVar20);
          *(undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xee8)
               = local_c8;
          lVar25 = local_138;
        }
        lVar25 = lVar25 + 1;
        local_148 = local_148 + 1;
        uVar24 = uVar24 + 1;
        lVar20 = lVar20 + 0x10;
        local_138 = lVar25;
        if (local_140 <= (int)local_148) break;
      }
LAB_1461e05a9:
      uVar15 = 0;
      if ((int)local_148 < local_140) {
        if (lVar25 < local_120) {
          uVar21 = ~uVar24 >> 0x1f;
          if ((int)uVar24 < param_1->ArrayNum) {
            uVar15 = uVar21;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar20 = (longlong)(int)local_148;
          lVar25 = lVar25 * 0x10;
          uVar6 = *(ulonglong *)((param_1->AllocatorInstance).Data + lVar25);
          uVar15 = 0;
          if ((int)local_148 < (this->Inputs).ArrayNum) {
            uVar15 = ~local_148 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(ulonglong *)((this->Inputs).AllocatorInstance.Data + lVar20 * 0x10) < uVar6) {
            lVar25 = (longlong)(int)local_148;
            pcVar7 = *(code **)(this->_padding_ + 0x2d0);
            uVar15 = 0;
            if ((int)local_148 < (this->Inputs).ArrayNum) {
              uVar15 = ~local_148 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (*pcVar7)(this,(this->Inputs).AllocatorInstance.Data + lVar25 * 0x10);
            if (((local_130.Data <= (FScriptContainerElement *)&local_148) &&
                ((FScriptContainerElement *)&local_148 <
                 local_130.Data + (longlong)local_128._4_4_ * 4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar16 = (int)local_128;
            if ((int)local_128 == local_128._4_4_) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_130,(int *)((longlong)&local_128 + 4));
            }
            local_128 = CONCAT44(local_128._4_4_,iVar16 + 1);
            *(uint *)(local_130.Data + (longlong)iVar16 * 4) = local_148;
            local_148 = local_148 + 1;
            lVar25 = local_138;
          }
          else {
            uVar15 = 0;
            if ((int)uVar24 < param_1->ArrayNum) {
              uVar15 = uVar21;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar23 = (param_1->AllocatorInstance).Data + lVar25;
            pUVar4 = (this->PrivateLinker).field0_0x0.DebugPtr;
            local_80 = *(UObject **)pFVar23;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_80);
            }
            local_78 = *(undefined4 *)(pFVar23 + 8);
            local_74 = pFVar23[0xc];
            local_70 = 3;
            local_68 = 0xffff;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar4 != (UMovieSceneEntitySystemLinker *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar4);
            }
            local_64.ObjectIndex = 0;
            local_64.ObjectSerialNumber = 0;
            local_100 = pUVar4;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar4 != (UMovieSceneEntitySystemLinker *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar4);
            }
            FWeakObjectPtr::operator=(&local_64,(FObjectPtr)&local_100);
            pUVar5 = *(UObjectBaseUtility **)pFVar23;
            cVar14 = pUVar5[2].field_0x21;
            if (cVar14 == '\x02') {
              pUVar17 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
              pUVar18 = UObjectBaseUtility::GetTypedOuter(pUVar5,pUVar17);
              cVar14 = pUVar18[2].field_0x18;
            }
            local_50 = cVar14 == '\x01';
            lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            local_58 = *(undefined8 *)(lVar20 + 0xee8);
            *(UObject ***)(lVar20 + 0xee8) = &local_80;
            uVar15 = 0;
            if ((int)uVar24 < param_1->ArrayNum) {
              uVar15 = uVar21;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (param_1->AllocatorInstance).Data[local_138 * 0x10 + 0xc] = (FScriptContainerElement)0x1
            ;
            pcVar7 = *(code **)(this->_padding_ + 0x2c8);
            uVar15 = 0;
            if ((int)uVar24 < param_1->ArrayNum) {
              uVar15 = uVar21;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (*pcVar7)(this,(param_1->AllocatorInstance).Data + lVar25);
            uVar24 = uVar24 + 1;
            lVar25 = local_138 + 1;
            *(undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xee8
             ) = local_58;
            local_138 = lVar25;
          }
        }
        else {
          lVar20 = (longlong)(int)local_148;
          if ((int)local_148 < local_140) {
            pcVar7 = *(code **)(this->_padding_ + 0x2d0);
            if ((int)local_148 < (this->Inputs).ArrayNum) {
              uVar15 = ~local_148 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (*pcVar7)(this,(this->Inputs).AllocatorInstance.Data + lVar20 * 0x10);
            if (((local_130.Data <= (FScriptContainerElement *)&local_148) &&
                ((FScriptContainerElement *)&local_148 <
                 local_130.Data + (longlong)local_128._4_4_ * 4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar16 = (int)local_128;
            if ((int)local_128 == local_128._4_4_) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_130,(int *)((longlong)&local_128 + 4));
            }
            local_128 = CONCAT44(local_128._4_4_,iVar16 + 1);
            *(uint *)(local_130.Data + (longlong)iVar16 * 4) = local_148;
            local_148 = local_148 + 1;
            lVar25 = local_138;
          }
          else {
            bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_7856082808924536692>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\TrackInstance\\MovieSceneTrackInstance.cpp"
                                ,0x8c,"NewIndex < NewNum");
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
      }
      else {
        if (local_120 <= lVar25) goto LAB_1461e00c3;
        uVar21 = ~uVar24 >> 0x1f;
        if ((int)uVar24 < param_1->ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar4 = (this->PrivateLinker).field0_0x0.DebugPtr;
        pFVar23 = (param_1->AllocatorInstance).Data + lVar25 * 0x10;
        local_b8 = *(UObject **)pFVar23;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_b8);
        }
        local_b0 = *(undefined4 *)(pFVar23 + 8);
        local_ac = pFVar23[0xc];
        local_a8 = 3;
        local_a0 = 0xffff;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UMovieSceneEntitySystemLinker *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        local_9c.ObjectIndex = 0;
        local_9c.ObjectSerialNumber = 0;
        local_108 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UMovieSceneEntitySystemLinker *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        FWeakObjectPtr::operator=(&local_9c,(FObjectPtr)&local_108);
        pUVar5 = *(UObjectBaseUtility **)pFVar23;
        cVar14 = pUVar5[2].field_0x21;
        if (cVar14 == '\x02') {
          pUVar17 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
          pUVar18 = UObjectBaseUtility::GetTypedOuter(pUVar5,pUVar17);
          cVar14 = pUVar18[2].field_0x18;
        }
        lVar25 = local_138;
        local_88 = cVar14 == '\x01';
        lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        local_90 = *(undefined8 *)(lVar20 + 0xee8);
        *(UObject ***)(lVar20 + 0xee8) = &local_b8;
        uVar15 = 0;
        if ((int)uVar24 < param_1->ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (param_1->AllocatorInstance).Data[lVar25 * 0x10 + 0xc] = (FScriptContainerElement)0x1;
        pcVar7 = *(code **)(this->_padding_ + 0x2c8);
        uVar15 = 0;
        if ((int)uVar24 < param_1->ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (*pcVar7)(this,(param_1->AllocatorInstance).Data + (longlong)(int)uVar24 * 0x10);
        lVar25 = lVar25 + 1;
        uVar24 = uVar24 + 1;
        *(undefined8 *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xee8) =
             local_90;
        local_138 = lVar25;
      }
    }
    if (lVar25 < local_120) goto LAB_1461e05a9;
LAB_1461e00c3:
    pTVar12 = local_118;
    if (local_118 != (TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput> *)0x0) {
      iVar16 = (int)local_128;
      pFVar23 = local_130.Data + (longlong)(int)local_128 * 4;
      FVar22.Data = local_130.Data;
      while( true ) {
        if ((int)local_128 != iVar16) {
          local_144[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_144);
        }
        param_1 = local_f8;
        if (FVar22.Data == pFVar23) break;
        uVar24 = *(uint *)FVar22.Data;
        uVar15 = 0;
        if ((int)uVar24 < (this->Inputs).ArrayNum) {
          uVar15 = ~uVar24 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        UE::MovieScene::TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput>::
        StopTrackingCaptureSource
                  (pTVar12,(FMovieSceneTrackInstanceInput *)
                           ((this->Inputs).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x10));
        FVar22.Data = FVar22.Data + 4;
      }
    }
    uVar1 = *(undefined4 *)((longlong)&(param_1->AllocatorInstance).Data + 4);
    iVar16 = param_1->ArrayNum;
    iVar8 = param_1->ArrayMax;
    uVar2 = *(undefined4 *)&(this->Inputs).AllocatorInstance.Data;
    uVar9 = *(undefined4 *)((longlong)&(this->Inputs).AllocatorInstance.Data + 4);
    iVar10 = (this->Inputs).ArrayNum;
    iVar11 = (this->Inputs).ArrayMax;
    *(undefined4 *)&(this->Inputs).AllocatorInstance.Data =
         *(undefined4 *)&(param_1->AllocatorInstance).Data;
    *(undefined4 *)((longlong)&(this->Inputs).AllocatorInstance.Data + 4) = uVar1;
    (this->Inputs).ArrayNum = iVar16;
    (this->Inputs).ArrayMax = iVar8;
    *(undefined4 *)&(param_1->AllocatorInstance).Data = uVar2;
    *(undefined4 *)((longlong)&(param_1->AllocatorInstance).Data + 4) = uVar9;
    param_1->ArrayNum = iVar10;
    param_1->ArrayMax = iVar11;
    (**(code **)(this->_padding_ + 0x2d8))(this);
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
  }
  return;
}

