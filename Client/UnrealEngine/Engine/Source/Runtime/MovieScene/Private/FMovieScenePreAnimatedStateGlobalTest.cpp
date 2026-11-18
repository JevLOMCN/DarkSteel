// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146249120

EAutomationTestFlags __thiscall
FMovieScenePreAnimatedStateGlobalTest::GetTestFlags(FMovieScenePreAnimatedStateGlobalTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146249130

bool __thiscall
FMovieScenePreAnimatedStateGlobalTest::IsStressTest(FMovieScenePreAnimatedStateGlobalTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146249140

uint __thiscall
FMovieScenePreAnimatedStateGlobalTest::GetRequiredDeviceNum
          (FMovieScenePreAnimatedStateGlobalTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146249150

FString * __thiscall
FMovieScenePreAnimatedStateGlobalTest::GetTestSourceFileName
          (FMovieScenePreAnimatedStateGlobalTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePreAnimatedStateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146249180

int __thiscall
FMovieScenePreAnimatedStateGlobalTest::GetTestSourceFileLine
          (FMovieScenePreAnimatedStateGlobalTest *this)

{
  return 0x9d;
}

// GetTests @ 146249190

/* WARNING: Removing unreachable block (ram,0x00014624927d) */
/* WARNING: Removing unreachable block (ram,0x000146249348) */

void __thiscall
FMovieScenePreAnimatedStateGlobalTest::GetTests
          (FMovieScenePreAnimatedStateGlobalTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Pre-Animated State.Global");
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

// RunTest @ 146249370

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieScenePreAnimatedStateGlobalTest::RunTest
          (FMovieScenePreAnimatedStateGlobalTest *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UMovieSceneEntitySystemLinker *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  IMovieScenePreAnimatedGlobalTokenProducer local_28;
  int *local_20;
  int local_18;
  
  pUVar7 = ::Impl::GetTestLinker();
  ::Impl::TestValue1 = -0x21524111;
  ::Impl::TestValue2 = -0x21524111;
  pTVar8 = ::operator_new(0x88);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
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
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      goto LAB_146249482;
    }
  }
  if (((pTVar9->_padding_ == 0) || (*(longlong *)&pTVar9->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9->SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9->_padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9->SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146249482:
  FMovieSceneInstancePreAnimatedState::EnableGlobalPreAnimatedStateCapture
            ((FMovieSceneInstancePreAnimatedState *)(pTVar9 + 6));
  local_28 = (IMovieScenePreAnimatedGlobalTokenProducer)&___7FPreAnimatedTokenProducer_Impl__6B_;
  local_18 = 0;
  local_20 = &::Impl::TestValue1;
  FMovieSceneInstancePreAnimatedState::SavePreAnimatedState
            ((FMovieSceneInstancePreAnimatedState *)(pTVar9 + 6),::Impl::AnimType1,&local_28);
  FMovieSceneInstancePreAnimatedState::SavePreAnimatedState
            ((FMovieSceneInstancePreAnimatedState *)(pTVar9 + 6),::Impl::AnimType1,&local_28);
  FMovieSceneInstancePreAnimatedState::SavePreAnimatedState
            ((FMovieSceneInstancePreAnimatedState *)(pTVar9 + 6),::Impl::AnimType1,&local_28);
  if (local_18 != 1) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_58,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (::Impl::TestValue1 != 0) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  ::Impl::TestValue1 = 0x32;
  FMovieSceneInstancePreAnimatedState::RestorePreAnimatedState
            ((FMovieSceneInstancePreAnimatedState *)(pTVar9 + 6));
  if (::Impl::TestValue1 != -0x21524111) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  local_28 = (IMovieScenePreAnimatedGlobalTokenProducer)
             &___7IMovieScenePreAnimatedGlobalTokenProducer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return true;
}

// GetBeautifiedTestName @ 146249630

FString * __thiscall
FMovieScenePreAnimatedStateGlobalTest::GetBeautifiedTestName
          (FMovieScenePreAnimatedStateGlobalTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Pre-Animated State.Global");
  return __return_storage_ptr__;
}

