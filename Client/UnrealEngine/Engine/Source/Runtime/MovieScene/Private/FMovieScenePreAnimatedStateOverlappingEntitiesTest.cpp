// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 14624a7f0

EAutomationTestFlags __thiscall
FMovieScenePreAnimatedStateOverlappingEntitiesTest::GetTestFlags
          (FMovieScenePreAnimatedStateOverlappingEntitiesTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14624a800

bool __thiscall
FMovieScenePreAnimatedStateOverlappingEntitiesTest::IsStressTest
          (FMovieScenePreAnimatedStateOverlappingEntitiesTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14624a810

uint __thiscall
FMovieScenePreAnimatedStateOverlappingEntitiesTest::GetRequiredDeviceNum
          (FMovieScenePreAnimatedStateOverlappingEntitiesTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14624a820

FString * __thiscall
FMovieScenePreAnimatedStateOverlappingEntitiesTest::GetTestSourceFileName
          (FMovieScenePreAnimatedStateOverlappingEntitiesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePreAnimatedStateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14624a850

int __thiscall
FMovieScenePreAnimatedStateOverlappingEntitiesTest::GetTestSourceFileLine
          (FMovieScenePreAnimatedStateOverlappingEntitiesTest *this)

{
  return 0xe3;
}

// GetTests @ 14624a860

/* WARNING: Removing unreachable block (ram,0x00014624a94d) */
/* WARNING: Removing unreachable block (ram,0x00014624aa18) */

void __thiscall
FMovieScenePreAnimatedStateOverlappingEntitiesTest::GetTests
          (FMovieScenePreAnimatedStateOverlappingEntitiesTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Pre-Animated State.Overlapping Entities");
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

// RunTest @ 14624aa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieScenePreAnimatedStateOverlappingEntitiesTest::RunTest
          (FMovieScenePreAnimatedStateOverlappingEntitiesTest *this,FString *param_1)

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
  undefined1 auStack_1e8 [32];
  int local_1c8;
  IMovieScenePreAnimatedGlobalTokenProducer local_1b8;
  int *local_1b0;
  int local_1a8;
  FString local_1a0;
  FString local_190;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_180;
  FString local_170;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_160;
  FString local_150;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FScopedPreAnimatedCaptureSource local_e0;
  FScopedPreAnimatedCaptureSource local_a8;
  FScopedPreAnimatedCaptureSource local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
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
      goto LAB_14624ab6d;
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
LAB_14624ab6d:
  this_00 = &pFVar10->PreAnimatedState;
  FMovieSceneInstancePreAnimatedState::EnableGlobalPreAnimatedStateCapture(this_00);
  local_1b8 = (IMovieScenePreAnimatedGlobalTokenProducer)&___7FPreAnimatedTokenProducer_Impl__6B_;
  local_1a8 = 0;
  local_1b0 = &::Impl::TestValue1;
  FMovieSceneInstancePreAnimatedState::SavePreAnimatedState(this_00,::Impl::AnimType1,&local_1b8);
  if (local_1a8 != 1) {
    local_1c8 = local_1a8;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1a0,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_1a0,0);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  if (::Impl::TestValue1 != 0) {
    local_1c8 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_190,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_190,0);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_180.Object = pFVar10;
  local_180.SharedReferenceCount.ReferenceController = pTVar8;
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_e0,&local_180,&::Impl::TrackKey1,true);
  FMovieSceneInstancePreAnimatedState::SavePreAnimatedState(this_00,::Impl::AnimType1,&local_1b8);
  ::Impl::TestValue1 = 0x32;
  if (local_1a8 != 1) {
    local_1c8 = local_1a8;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_170,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_170,0);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
  }
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_e0);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_160.Object = pFVar10;
  local_160.SharedReferenceCount.ReferenceController = pTVar8;
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_a8,&local_160,&::Impl::SectionKey1,true);
  FMovieSceneInstancePreAnimatedState::SavePreAnimatedState(this_00,::Impl::AnimType1,&local_1b8);
  ::Impl::TestValue1 = 100;
  if (local_1a8 != 1) {
    local_1c8 = local_1a8;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_150,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_150,0);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_a8);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_140.Object = pFVar10;
  local_140.SharedReferenceCount.ReferenceController = pTVar8;
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_70,&local_140,&::Impl::SectionKey2,true);
  FMovieSceneInstancePreAnimatedState::SavePreAnimatedState(this_00,::Impl::AnimType1,&local_1b8);
  ::Impl::TestValue1 = 0x96;
  if (local_1a8 != 1) {
    local_1c8 = local_1a8;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_130,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_130,0);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_70);
  pFVar9 = UE::MovieScene::FPreAnimatedStateExtension::GetTemplateMetaData
                     (&pUVar7->PreAnimatedState);
  if (pFVar9 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    UE::MovieScene::FPreAnimatedTemplateCaptureSources::StopTrackingCaptureSource
              (pFVar9,&::Impl::SectionKey1,(FRootInstanceHandle)0xffff);
  }
  if (::Impl::TestValue1 != 0x96) {
    local_1c8 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_120,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_120,0);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = UE::MovieScene::FPreAnimatedStateExtension::GetTemplateMetaData
                     (&pUVar7->PreAnimatedState);
  if (pFVar9 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    UE::MovieScene::FPreAnimatedTemplateCaptureSources::StopTrackingCaptureSource
              (pFVar9,&::Impl::TrackKey1,(FRootInstanceHandle)0xffff);
  }
  if (::Impl::TestValue1 != 0x96) {
    local_1c8 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_110,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_110,0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = UE::MovieScene::FPreAnimatedStateExtension::GetTemplateMetaData
                     (&pUVar7->PreAnimatedState);
  if (pFVar9 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    UE::MovieScene::FPreAnimatedTemplateCaptureSources::StopTrackingCaptureSource
              (pFVar9,&::Impl::SectionKey2,(FRootInstanceHandle)0xffff);
  }
  if (::Impl::TestValue1 != 0) {
    local_1c8 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_100,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_100,0);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  FMovieSceneInstancePreAnimatedState::RestorePreAnimatedState(this_00);
  if (::Impl::TestValue1 != -0x21524111) {
    local_1c8 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f0,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_f0,0);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  local_1b8 = (IMovieScenePreAnimatedGlobalTokenProducer)
              &___7IMovieScenePreAnimatedGlobalTokenProducer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return true;
}

// GetBeautifiedTestName @ 14624b030

FString * __thiscall
FMovieScenePreAnimatedStateOverlappingEntitiesTest::GetBeautifiedTestName
          (FMovieScenePreAnimatedStateOverlappingEntitiesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.Pre-Animated State.Overlapping Entities");
  return __return_storage_ptr__;
}

