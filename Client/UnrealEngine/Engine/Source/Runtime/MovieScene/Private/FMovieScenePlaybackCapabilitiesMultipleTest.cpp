// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 1462496a0

EAutomationTestFlags __thiscall
FMovieScenePlaybackCapabilitiesMultipleTest::GetTestFlags
          (FMovieScenePlaybackCapabilitiesMultipleTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1462496b0

bool __thiscall
FMovieScenePlaybackCapabilitiesMultipleTest::IsStressTest
          (FMovieScenePlaybackCapabilitiesMultipleTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1462496c0

uint __thiscall
FMovieScenePlaybackCapabilitiesMultipleTest::GetRequiredDeviceNum
          (FMovieScenePlaybackCapabilitiesMultipleTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1462496d0

FString * __thiscall
FMovieScenePlaybackCapabilitiesMultipleTest::GetTestSourceFileName
          (FMovieScenePlaybackCapabilitiesMultipleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackCapabilitiesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146249700

int __thiscall
FMovieScenePlaybackCapabilitiesMultipleTest::GetTestSourceFileLine
          (FMovieScenePlaybackCapabilitiesMultipleTest *this)

{
  return 0x137;
}

// GetTests @ 146249740

/* WARNING: Removing unreachable block (ram,0x00014624982d) */
/* WARNING: Removing unreachable block (ram,0x0001462498f8) */

void __thiscall
FMovieScenePlaybackCapabilitiesMultipleTest::GetTests
          (FMovieScenePlaybackCapabilitiesMultipleTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Capabilities.Multiple");
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

// RunTest @ 146249960

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieScenePlaybackCapabilitiesMultipleTest::RunTest
          (FMovieScenePlaybackCapabilitiesMultipleTest *this,FString *param_1)

{
  atomic<int> aVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForAnyElementType FVar8;
  TReferenceControllerBase<1> *pTVar9;
  FTestOtherSimpleCapability local_res18 [2];
  int local_res20 [2];
  FPlaybackCapabilitiesImpl local_158;
  int local_130 [2];
  FTestOtherSimpleCapability *local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FPlaybackCapabilityPtr local_80;
  TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1> local_70;
  FPlaybackCapabilityPtr local_60;
  FPlaybackCapabilityPtr local_50;
  
  local_res18[0].FloatValue = 0.0;
  pTVar7 = ::operator_new(0x20);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9 = pTVar7 + 1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFTestInvalidatableCapability_Tests_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = (longlong)&___7FTestInvalidatableCapability_Tests_MovieScene_UE__6B_;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
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
    }
  }
  local_128 = local_res18;
  local_158.Memory = (uchar *)0x0;
  local_158.Alignment = 0;
  local_158.Capacity = 0;
  local_158.Num = '\0';
  local_158.AllCapabilities = 0;
  local_158.Helpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Helpers.ArrayNum = 0;
  local_158.Helpers.ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestOtherSimpleCapability>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestOtherSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<UE::MovieScene::Tests::FTestOtherSimpleCapability_*,UE::MovieScene::Tests::FTestOtherSimpleCapability,UE::MovieScene::Tests::FTestOtherSimpleCapability_*>
            (&local_158,&local_80,1 << (::StaticID._0_1_ & 0x1f),&local_128);
  if (local_80.Ptr == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x3a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if (((local_80.StorageMode != Inline) && (local_80.StorageMode != RawPointer)) &&
     (local_80.StorageMode != SharedPointer)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x44,L"Unexpected playback capability storage mode");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70.Object = (FTestInvalidatableCapability *)pTVar9;
  local_70.SharedReferenceCount.ReferenceController = pTVar7;
  UE::MovieScene::FPlaybackCapabilities::
  AddCapabilityShared<UE::MovieScene::Tests::FTestInvalidatableCapability>
            ((FPlaybackCapabilities *)&local_158,&local_70);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar3 = local_158.AllCapabilities >> ((uint)::StaticID & 0x1f);
  ::FString::FString(&local_120,"Found capability");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar8.Data = local_120.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestFalse
                    ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,(uVar3 & 1) != 0);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase>)
                     UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestCapabilityBase");
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar3 = local_158.AllCapabilities >> ((uint)::StaticID & 0x1f);
    ::FString::FString(&local_110,"Found capability");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_110.Data.ArrayNum != 0) {
      FVar8.Data = local_110.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestFalse
                      ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,(uVar3 & 1) != 0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestOtherSimpleCapability>)
                       UE::MovieScene::FPlaybackCapabilityID::Register
                                 (L"FTestOtherSimpleCapability");
          _Init_thread_footer(&::_TSS0);
        }
      }
      uVar3 = local_158.AllCapabilities >> ((uint)::StaticID & 0x1f);
      ::FString::FString(&local_100,"Found capability");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_100.Data.ArrayNum != 0) {
        FVar8.Data = local_100.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,(uVar3 & 1) != 0);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestInvalidatableCapability>
                         )UE::MovieScene::FPlaybackCapabilityID::Register
                                    (L"FTestInvalidatableCapability");
            _Init_thread_footer(&::_TSS0);
          }
        }
        uVar3 = local_158.AllCapabilities >> ((uint)::StaticID & 0x1f);
        ::FString::FString(&local_f0,"Found capability");
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_f0.Data.ArrayNum != 0) {
          FVar8.Data = local_f0.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,(uVar3 & 1) != 0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          local_res20[0] = 8;
          if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
            _Init_thread_header(&::_TSS0);
            if (::_TSS0 == -1) {
              ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                           UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability")
              ;
              _Init_thread_footer(&::_TSS0);
            }
          }
          UE::MovieScene::FPlaybackCapabilitiesImpl::
          AddCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[18]>
                    (&local_158,&local_60,1 << (::StaticID._0_1_ & 0x1f),local_res20,
                     (wchar_t (*) [18])L"Other simple test");
          if (local_60.Ptr == (void *)0x0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                               ,0x3a,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          if (((local_60.StorageMode != Inline) && (local_60.StorageMode != RawPointer)) &&
             (local_60.StorageMode != SharedPointer)) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                               ,0x44,L"Unexpected playback capability storage mode");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          local_130[0] = 0xc;
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
              < ::_TSS0) {
            _Init_thread_header(&::_TSS0);
            if (::_TSS0 == -1) {
              ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase>)
                           UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestCapabilityBase");
              _Init_thread_footer(&::_TSS0);
            }
          }
          UE::MovieScene::FPlaybackCapabilitiesImpl::
          AddCapability<UE::MovieScene::Tests::FTestCapabilityDerived,UE::MovieScene::Tests::FTestCapabilityBase,int,wchar_t_const_(&)[28]>
                    (&local_158,&local_50,1 << (::StaticID._0_1_ & 0x1f),local_130,
                     (wchar_t (*) [28])L"Another implementation test");
          if (local_50.Ptr == (void *)0x0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                               ,0x3a,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          if (((local_50.StorageMode != Inline) && (local_50.StorageMode != RawPointer)) &&
             (local_50.StorageMode != SharedPointer)) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                               ,0x44,L"Unexpected playback capability storage mode");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
              < ::_TSS0) {
            _Init_thread_header(&::_TSS0);
            if (::_TSS0 == -1) {
              ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                           UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability")
              ;
              _Init_thread_footer(&::_TSS0);
            }
          }
          uVar3 = local_158.AllCapabilities >> ((uint)::StaticID & 0x1f);
          ::FString::FString(&local_e0,"Found capability");
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_e0.Data.ArrayNum != 0) {
            FVar8.Data = local_e0.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,(uVar3 & 1) != 0);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            bVar5 = UE::MovieScene::FPlaybackCapabilities::
                    HasCapability<UE::MovieScene::Tests::FTestCapabilityBase>
                              ((FPlaybackCapabilities *)&local_158);
            ::FString::FString(&local_d0,"Found capability");
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_d0.Data.ArrayNum != 0) {
              FVar8.Data = local_d0.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              bVar5 = UE::MovieScene::FPlaybackCapabilities::
                      HasCapability<UE::MovieScene::Tests::FTestOtherSimpleCapability>
                                ((FPlaybackCapabilities *)&local_158);
              ::FString::FString(&local_c0,"Found capability");
              FVar8.Data = (FScriptContainerElement *)L"";
              if (local_c0.Data.ArrayNum != 0) {
                FVar8.Data = local_c0.Data.AllocatorInstance.Data;
              }
              bVar5 = FAutomationTestBase::TestTrue
                                ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
              if (bVar5) {
                bVar5 = UE::MovieScene::FPlaybackCapabilities::
                        HasCapability<UE::MovieScene::Tests::FTestInvalidatableCapability>
                                  ((FPlaybackCapabilities *)&local_158);
                ::FString::FString(&local_b0,"Found capability");
                FVar8.Data = (FScriptContainerElement *)L"";
                if (local_b0.Data.ArrayNum != 0) {
                  FVar8.Data = local_b0.Data.AllocatorInstance.Data;
                }
                bVar5 = FAutomationTestBase::TestTrue
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
                if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                }
                if (bVar5) {
                  aVar1 = pTVar9->SharedReferenceCount;
                  ::FString::FString(&local_a0,"Before invalidation");
                  FVar8.Data = (FScriptContainerElement *)L"";
                  if (local_a0.Data.ArrayNum != 0) {
                    FVar8.Data = local_a0.Data.AllocatorInstance.Data;
                  }
                  bVar5 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,(int)aVar1,0)
                  ;
                  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                  }
                  if (bVar5) {
                    UE::MovieScene::FPlaybackCapabilities::InvalidateCachedData
                              ((FPlaybackCapabilities *)&local_158,
                               (UMovieSceneEntitySystemLinker *)0x0);
                    aVar1 = pTVar9->SharedReferenceCount;
                    ::FString::FString(&local_90,"After invalidation");
                    FVar8.Data = (FScriptContainerElement *)L"";
                    if (local_90.Data.ArrayNum != 0) {
                      FVar8.Data = local_90.Data.AllocatorInstance.Data;
                    }
                    bVar5 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,(int)aVar1,
                                       1);
                    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_90.Data.AllocatorInstance.Data);
                    }
                    if (bVar5) {
                      bVar5 = true;
                      goto LAB_14624a178;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_14624a178:
  UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities((FPlaybackCapabilities *)&local_158)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return bVar5;
}

// GetBeautifiedTestName @ 14624a1b0

FString * __thiscall
FMovieScenePlaybackCapabilitiesMultipleTest::GetBeautifiedTestName
          (FMovieScenePlaybackCapabilitiesMultipleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Capabilities.Multiple");
  return __return_storage_ptr__;
}

