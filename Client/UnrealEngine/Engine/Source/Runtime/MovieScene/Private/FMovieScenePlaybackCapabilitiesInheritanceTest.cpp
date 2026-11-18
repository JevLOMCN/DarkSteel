// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 14624b0a0

EAutomationTestFlags __thiscall
FMovieScenePlaybackCapabilitiesInheritanceTest::GetTestFlags
          (FMovieScenePlaybackCapabilitiesInheritanceTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14624b0b0

bool __thiscall
FMovieScenePlaybackCapabilitiesInheritanceTest::IsStressTest
          (FMovieScenePlaybackCapabilitiesInheritanceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14624b0c0

uint __thiscall
FMovieScenePlaybackCapabilitiesInheritanceTest::GetRequiredDeviceNum
          (FMovieScenePlaybackCapabilitiesInheritanceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14624b0d0

FString * __thiscall
FMovieScenePlaybackCapabilitiesInheritanceTest::GetTestSourceFileName
          (FMovieScenePlaybackCapabilitiesInheritanceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackCapabilitiesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14624b100

int __thiscall
FMovieScenePlaybackCapabilitiesInheritanceTest::GetTestSourceFileLine
          (FMovieScenePlaybackCapabilitiesInheritanceTest *this)

{
  return 0x15c;
}

// GetTests @ 14624b110

/* WARNING: Removing unreachable block (ram,0x00014624b1fd) */
/* WARNING: Removing unreachable block (ram,0x00014624b2c8) */

void __thiscall
FMovieScenePlaybackCapabilitiesInheritanceTest::GetTests
          (FMovieScenePlaybackCapabilitiesInheritanceTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Capabilities.Inheritance");
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

// RunTest @ 14624b2f0

bool __thiscall
FMovieScenePlaybackCapabilitiesInheritanceTest::RunTest
          (FMovieScenePlaybackCapabilitiesInheritanceTest *this,FString *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FTestCapabilityBase *pFVar6;
  ForAnyElementType FVar7;
  FTestCapabilityBase *local_res18;
  FPlaybackCapabilitiesImpl local_108;
  undefined **local_e0;
  FTestCapabilityBase local_d8;
  undefined4 local_c8;
  ForAnyElementType local_c0;
  int local_b4;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FPlaybackCapabilityPtr local_50;
  FString local_40;
  FString local_30;
  
  local_e0 = &`FMovieScenePlaybackCapabilitiesInheritanceTest::RunTest'::`2'::FCapabilityAccessor::
              _vftable_;
  ::FString::FString(&local_b0,L"Life, the universe, everything");
  FVar7.Data = local_b0.Data.AllocatorInstance.Data;
  local_d8.FloatValue = 0.0;
  local_d8._padding_ = (longlong)&___7FTestCapabilityDerived_Tests_MovieScene_UE__6B_;
  local_c8 = 0x2a;
  local_c0.Data = (FScriptContainerElement *)0x0;
  if (local_b0.Data.ArrayNum == 0) {
    local_b4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b0.Data.ArrayNum,0,&local_c0,local_b0.Data.ArrayNum,&local_b4);
    memcpy(local_c0.Data,FVar7.Data,(longlong)local_b0.Data.ArrayNum * 2);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  local_res18 = &local_d8;
  local_108.Memory = (uchar *)0x0;
  local_108.Alignment = 0;
  local_108.Capacity = 0;
  local_108.Num = '\0';
  local_108.AllCapabilities = 0;
  local_108.Helpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Helpers.ArrayNum = 0;
  local_108.Helpers.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase>)
                 UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestCapabilityBase");
    _Init_thread_footer(&::_TSS0);
  }
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<UE::MovieScene::Tests::FTestCapabilityBase_*,UE::MovieScene::Tests::FTestCapabilityBase,UE::MovieScene::Tests::FTestCapabilityBase_*>
            (&local_108,&local_50,1 << (::StaticID._0_1_ & 0x1f),&local_res18);
  if ((local_50.Ptr == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x3a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((((local_50.StorageMode != Inline) && (local_50.StorageMode != RawPointer)) &&
      (local_50.StorageMode != SharedPointer)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase>)
                 UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestCapabilityBase");
    _Init_thread_footer(&::_TSS0);
  }
  uVar1 = local_108.AllCapabilities >> ((uint)::StaticID & 0x1f);
  ::FString::FString(&local_a0,"Found capability");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar7.Data = local_a0.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,(uVar1 & 1) != 0);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar6 = UE::MovieScene::FPlaybackCapabilities::
             FindCapability<UE::MovieScene::Tests::FTestCapabilityBase>
                       ((FPlaybackCapabilities *)&local_108);
    ::FString::FString(&local_90,"Got capability pointer");
    if (pFVar6 == (FTestCapabilityBase *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_40,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_40,0);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (!bVar3) {
      ::FString::FString(&local_80,"Same capability pointer");
      if (pFVar6 == &local_d8) {
        bVar3 = false;
      }
      else {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_30,L"%s: The two values are not equal.");
        (*pcVar2)(this,&local_30,0);
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (!bVar3) {
        iVar5 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6);
        ::FString::FString(&local_70,"Checking IntValue");
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_70.Data.ArrayNum != 0) {
          FVar7.Data = local_70.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,iVar5,0x2a);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          (**(code **)(pFVar6->_padding_ + 0x18))(pFVar6);
          iVar5 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6);
          ::FString::FString(&local_60,"Checking IntValue");
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_60.Data.ArrayNum != 0) {
            FVar7.Data = local_60.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,iVar5,0x2b);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            bVar3 = true;
            goto LAB_14624b6f0;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_14624b6f0:
  UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities((FPlaybackCapabilities *)&local_108)
  ;
  UE::MovieScene::Tests::FTestCapabilityDerived::TimesDestroyedDerived =
       UE::MovieScene::Tests::FTestCapabilityDerived::TimesDestroyedDerived + 1;
  local_d8._padding_ = (longlong)&___7FTestCapabilityDerived_Tests_MovieScene_UE__6B_;
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  UE::MovieScene::Tests::FTestCapabilityBase::TimesDestroyedBase =
       UE::MovieScene::Tests::FTestCapabilityBase::TimesDestroyedBase + 1;
  return bVar3;
}

// GetBeautifiedTestName @ 14624b740

FString * __thiscall
FMovieScenePlaybackCapabilitiesInheritanceTest::GetBeautifiedTestName
          (FMovieScenePlaybackCapabilitiesInheritanceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Capabilities.Inheritance");
  return __return_storage_ptr__;
}

