// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146253190

EAutomationTestFlags __thiscall
FMovieScenePreAnimatedStatePerformanceTest::GetTestFlags
          (FMovieScenePreAnimatedStatePerformanceTest *this)

{
  return EngineFilter|Disabled|EditorContext;
}

// IsStressTest @ 1462531a0

bool __thiscall
FMovieScenePreAnimatedStatePerformanceTest::IsStressTest
          (FMovieScenePreAnimatedStatePerformanceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1462531b0

uint __thiscall
FMovieScenePreAnimatedStatePerformanceTest::GetRequiredDeviceNum
          (FMovieScenePreAnimatedStatePerformanceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1462531c0

FString * __thiscall
FMovieScenePreAnimatedStatePerformanceTest::GetTestSourceFileName
          (FMovieScenePreAnimatedStatePerformanceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePreAnimatedStateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1462531f0

int __thiscall
FMovieScenePreAnimatedStatePerformanceTest::GetTestSourceFileLine
          (FMovieScenePreAnimatedStatePerformanceTest *this)

{
  return 0x20b;
}

// GetTests @ 1462532c0

/* WARNING: Removing unreachable block (ram,0x0001462533ad) */
/* WARNING: Removing unreachable block (ram,0x000146253478) */

void __thiscall
FMovieScenePreAnimatedStatePerformanceTest::GetTests
          (FMovieScenePreAnimatedStatePerformanceTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Pre-Animated State.Performance");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1462534a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieScenePreAnimatedStatePerformanceTest::RunTest
          (FMovieScenePreAnimatedStatePerformanceTest *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UMovieSceneEntitySystemLinker *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSharedPlaybackState *pFVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  IMovieScenePreAnimatedGlobalTokenProducer local_78;
  int *local_70;
  undefined4 local_68;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_60;
  FScopedPreAnimatedCaptureSource local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  ::Impl::TestValue1 = -0x21524111;
  ::Impl::TestValue2 = -0x21524111;
  pUVar7 = ::Impl::GetTestLinker();
  pTVar8 = ::operator_new(0x88);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FSharedPlaybackState *)&DAT_00000010;
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSharedPlaybackState_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    UE::MovieScene::FSharedPlaybackState::FSharedPlaybackState
              ((FSharedPlaybackState *)(pTVar8 + 1),pUVar7);
    pFVar9 = (FSharedPlaybackState *)(pTVar8 + 1);
    if (pFVar9 == (FSharedPlaybackState *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      goto LAB_1462535fc;
    }
  }
  if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->_padding_;
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
      *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_1462535fc:
  FMovieSceneInstancePreAnimatedState::EnableGlobalPreAnimatedStateCapture
            (&pFVar9->PreAnimatedState);
  local_68 = 0;
  local_78 = (IMovieScenePreAnimatedGlobalTokenProducer)&___7FPreAnimatedTokenProducer_Impl__6B_;
  local_70 = &::Impl::TestValue1;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60.Object = pFVar9;
  local_60.SharedReferenceCount.ReferenceController = pTVar8;
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_50,&local_60,&::Impl::SectionKey1,false);
  lVar10 = 1000000;
  do {
    FMovieSceneInstancePreAnimatedState::SavePreAnimatedState
              (&pFVar9->PreAnimatedState,::Impl::AnimType1,&local_78);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_50);
  local_78 = (IMovieScenePreAnimatedGlobalTokenProducer)
             &___7IMovieScenePreAnimatedGlobalTokenProducer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return true;
}

// GetBeautifiedTestName @ 1462536e0

FString * __thiscall
FMovieScenePreAnimatedStatePerformanceTest::GetBeautifiedTestName
          (FMovieScenePreAnimatedStatePerformanceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Pre-Animated State.Performance"
                    );
  return __return_storage_ptr__;
}

