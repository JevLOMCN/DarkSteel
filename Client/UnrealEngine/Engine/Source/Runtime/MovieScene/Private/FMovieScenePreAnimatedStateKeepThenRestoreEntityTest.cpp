// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 14624b7b0

EAutomationTestFlags __thiscall
FMovieScenePreAnimatedStateKeepThenRestoreEntityTest::GetTestFlags
          (FMovieScenePreAnimatedStateKeepThenRestoreEntityTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14624b7c0

bool __thiscall
FMovieScenePreAnimatedStateKeepThenRestoreEntityTest::IsStressTest
          (FMovieScenePreAnimatedStateKeepThenRestoreEntityTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14624b7d0

uint __thiscall
FMovieScenePreAnimatedStateKeepThenRestoreEntityTest::GetRequiredDeviceNum
          (FMovieScenePreAnimatedStateKeepThenRestoreEntityTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14624b7e0

FString * __thiscall
FMovieScenePreAnimatedStateKeepThenRestoreEntityTest::GetTestSourceFileName
          (FMovieScenePreAnimatedStateKeepThenRestoreEntityTest *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePreAnimatedStateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14624b810

int __thiscall
FMovieScenePreAnimatedStateKeepThenRestoreEntityTest::GetTestSourceFileLine
          (FMovieScenePreAnimatedStateKeepThenRestoreEntityTest *this)

{
  return 299;
}

// GetTests @ 14624b820

/* WARNING: Removing unreachable block (ram,0x00014624b90d) */
/* WARNING: Removing unreachable block (ram,0x00014624b9d8) */

void __thiscall
FMovieScenePreAnimatedStateKeepThenRestoreEntityTest::GetTests
          (FMovieScenePreAnimatedStateKeepThenRestoreEntityTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Pre-Animated State.Keep Then Restore Entity"
                    );
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

// RunTest @ 14624ba00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieScenePreAnimatedStateKeepThenRestoreEntityTest::RunTest
          (FMovieScenePreAnimatedStateKeepThenRestoreEntityTest *this,FString *param_1)

{
  int *piVar1;
  FMovieSceneInstancePreAnimatedState *this_00;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UMovieSceneEntitySystemLinker *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  FPreAnimatedTemplateCaptureSources *pFVar9;
  FSharedPlaybackState *pFVar10;
  undefined1 auStack_168 [32];
  int local_148;
  IMovieScenePreAnimatedGlobalTokenProducer local_138;
  int *local_130;
  int local_128;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FScopedPreAnimatedCaptureSource local_a0;
  FScopedPreAnimatedCaptureSource local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_168;
  ::Impl::TestValue1 = -0x21524111;
  ::Impl::TestValue2 = -0x21524111;
  pUVar7 = ::Impl::GetTestLinker();
  pTVar8 = ::operator_new(0x88);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pFVar10 = (FSharedPlaybackState *)&DAT_00000010;
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
    pFVar10 = (FSharedPlaybackState *)(pTVar8 + 1);
    if (pFVar10 == (FSharedPlaybackState *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      goto LAB_14624bb23;
    }
  }
  if (((pFVar10->_padding_ == 0) || (*(longlong *)&pFVar10->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar10->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10->_padding_ = (longlong)pFVar10;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pFVar10->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar10->_padding_;
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
      *(TReferenceControllerBase<1> **)&pFVar10->_padding_ = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14624bb23:
  this_00 = &pFVar10->PreAnimatedState;
  FMovieSceneInstancePreAnimatedState::EnableGlobalPreAnimatedStateCapture(this_00);
  local_128 = 0;
  local_138 = (IMovieScenePreAnimatedGlobalTokenProducer)&___7FPreAnimatedTokenProducer_Impl__6B_;
  local_130 = &::Impl::TestValue1;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_120.Object = pFVar10;
  local_120.SharedReferenceCount.ReferenceController = pTVar8;
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_a0,&local_120,&::Impl::SectionKey1,false);
  FMovieSceneInstancePreAnimatedState::SavePreAnimatedState(this_00,::Impl::AnimType1,&local_138);
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_a0);
  if (local_128 != 1) {
    local_148 = local_128;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_110,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_110,0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  if (::Impl::TestValue1 != 0) {
    local_148 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_100,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_100,0);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  ::Impl::TestValue1 = 0x32;
  pFVar9 = UE::MovieScene::FPreAnimatedStateExtension::GetTemplateMetaData
                     (&pUVar7->PreAnimatedState);
  if (pFVar9 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    UE::MovieScene::FPreAnimatedTemplateCaptureSources::StopTrackingCaptureSource
              (pFVar9,&::Impl::SectionKey1,(FRootInstanceHandle)0xffff);
  }
  if (::Impl::TestValue1 != 0x32) {
    local_148 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f0,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_f0,0);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e0.Object = pFVar10;
  local_e0.SharedReferenceCount.ReferenceController = pTVar8;
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_68,&local_e0,&::Impl::SectionKey2,true);
  FMovieSceneInstancePreAnimatedState::SavePreAnimatedState(this_00,::Impl::AnimType1,&local_138);
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_68);
  if (local_128 != 1) {
    local_148 = local_128;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_d0,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_d0,0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  ::Impl::TestValue1 = 100;
  pFVar9 = UE::MovieScene::FPreAnimatedStateExtension::GetTemplateMetaData
                     (&pUVar7->PreAnimatedState);
  if (pFVar9 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    UE::MovieScene::FPreAnimatedTemplateCaptureSources::StopTrackingCaptureSource
              (pFVar9,&::Impl::SectionKey2,(FRootInstanceHandle)0xffff);
  }
  if (::Impl::TestValue1 != 0x32) {
    local_148 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_c0,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_c0,0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  FMovieSceneInstancePreAnimatedState::RestorePreAnimatedState(this_00);
  if (::Impl::TestValue1 != -0x21524111) {
    local_148 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_b0,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_b0,0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  local_138 = (IMovieScenePreAnimatedGlobalTokenProducer)
              &___7IMovieScenePreAnimatedGlobalTokenProducer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return true;
}

// GetBeautifiedTestName @ 14624be70

FString * __thiscall
FMovieScenePreAnimatedStateKeepThenRestoreEntityTest::GetBeautifiedTestName
          (FMovieScenePreAnimatedStateKeepThenRestoreEntityTest *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.Pre-Animated State.Keep Then Restore Entity");
  return __return_storage_ptr__;
}

