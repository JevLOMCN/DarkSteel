// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146249710

EAutomationTestFlags __thiscall
FMovieScenePreAnimatedStateEntityTest::GetTestFlags(FMovieScenePreAnimatedStateEntityTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146249720

bool __thiscall
FMovieScenePreAnimatedStateEntityTest::IsStressTest(FMovieScenePreAnimatedStateEntityTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146249730

uint __thiscall
FMovieScenePreAnimatedStateEntityTest::GetRequiredDeviceNum
          (FMovieScenePreAnimatedStateEntityTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146249920

FString * __thiscall
FMovieScenePreAnimatedStateEntityTest::GetTestSourceFileName
          (FMovieScenePreAnimatedStateEntityTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePreAnimatedStateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146249950

int __thiscall
FMovieScenePreAnimatedStateEntityTest::GetTestSourceFileLine
          (FMovieScenePreAnimatedStateEntityTest *this)

{
  return 0xbf;
}

// GetTests @ 14624a1e0

/* WARNING: Removing unreachable block (ram,0x00014624a2cd) */
/* WARNING: Removing unreachable block (ram,0x00014624a398) */

void __thiscall
FMovieScenePreAnimatedStateEntityTest::GetTests
          (FMovieScenePreAnimatedStateEntityTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Pre-Animated State.Entity");
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

// RunTest @ 14624a3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieScenePreAnimatedStateEntityTest::RunTest
          (FMovieScenePreAnimatedStateEntityTest *this,FString *param_1)

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
  FPreAnimatedTemplateCaptureSources *this_01;
  FSharedPlaybackState *pFVar9;
  undefined1 auStack_f8 [32];
  int local_d8;
  IMovieScenePreAnimatedGlobalTokenProducer local_c8;
  int *local_c0;
  int local_b8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FScopedPreAnimatedCaptureSource local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  ::Impl::TestValue1 = -0x21524111;
  ::Impl::TestValue2 = -0x21524111;
  pUVar7 = ::Impl::GetTestLinker();
  pTVar8 = ::operator_new(0x88);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FSharedPlaybackState *)&DAT_00000010;
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
      goto LAB_14624a4e1;
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
LAB_14624a4e1:
  this_00 = &pFVar9->PreAnimatedState;
  FMovieSceneInstancePreAnimatedState::EnableGlobalPreAnimatedStateCapture(this_00);
  local_c8 = (IMovieScenePreAnimatedGlobalTokenProducer)&___7FPreAnimatedTokenProducer_Impl__6B_;
  local_c0 = &::Impl::TestValue1;
  local_b8 = 0;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b0.Object = pFVar9;
  local_b0.SharedReferenceCount.ReferenceController = pTVar8;
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_60,&local_b0,&::Impl::SectionKey1,true);
  FMovieSceneInstancePreAnimatedState::SavePreAnimatedState(this_00,::Impl::AnimType1,&local_c8);
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_60);
  if (local_b8 != 1) {
    local_d8 = local_b8;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_a0,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_a0,0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  if (::Impl::TestValue1 != 0) {
    local_d8 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_90,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  ::Impl::TestValue1 = 0x32;
  this_01 = UE::MovieScene::FPreAnimatedStateExtension::GetTemplateMetaData
                      (&pUVar7->PreAnimatedState);
  if (this_01 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    UE::MovieScene::FPreAnimatedTemplateCaptureSources::StopTrackingCaptureSource
              (this_01,&::Impl::SectionKey1,(FRootInstanceHandle)0xffff);
  }
  if (::Impl::TestValue1 != -0x21524111) {
    local_d8 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_80,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_80,0);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  ::Impl::TestValue1 = 100;
  FMovieSceneInstancePreAnimatedState::RestorePreAnimatedState(this_00);
  if (::Impl::TestValue1 != 100) {
    local_d8 = ::Impl::TestValue1;
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_70,L"%s. Expected %d, actual %d.");
    (*pcVar4)(this,&local_70,0);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  local_c8 = (IMovieScenePreAnimatedGlobalTokenProducer)
             &___7IMovieScenePreAnimatedGlobalTokenProducer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return true;
}

// GetBeautifiedTestName @ 14624a740

FString * __thiscall
FMovieScenePreAnimatedStateEntityTest::GetBeautifiedTestName
          (FMovieScenePreAnimatedStateEntityTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Pre-Animated State.Entity");
  return __return_storage_ptr__;
}

