// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 1462470c0

EAutomationTestFlags __thiscall
FMovieScenePlaybackCapabilitiesSharedTest::GetTestFlags
          (FMovieScenePlaybackCapabilitiesSharedTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1462470d0

bool __thiscall
FMovieScenePlaybackCapabilitiesSharedTest::IsStressTest
          (FMovieScenePlaybackCapabilitiesSharedTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1462470e0

uint __thiscall
FMovieScenePlaybackCapabilitiesSharedTest::GetRequiredDeviceNum
          (FMovieScenePlaybackCapabilitiesSharedTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1462470f0

FString * __thiscall
FMovieScenePlaybackCapabilitiesSharedTest::GetTestSourceFileName
          (FMovieScenePlaybackCapabilitiesSharedTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackCapabilitiesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146247120

int __thiscall
FMovieScenePlaybackCapabilitiesSharedTest::GetTestSourceFileLine
          (FMovieScenePlaybackCapabilitiesSharedTest *this)

{
  return 0xe2;
}

// GetTests @ 146247130

/* WARNING: Removing unreachable block (ram,0x00014624721d) */
/* WARNING: Removing unreachable block (ram,0x0001462472e8) */

void __thiscall
FMovieScenePlaybackCapabilitiesSharedTest::GetTests
          (FMovieScenePlaybackCapabilitiesSharedTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Capabilities.Shared");
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

// RunTest @ 146247310

bool __thiscall
FMovieScenePlaybackCapabilitiesSharedTest::RunTest
          (FMovieScenePlaybackCapabilitiesSharedTest *this,FString *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  int *piVar7;
  FTestSimpleCapability *pFVar8;
  ForAnyElementType FVar9;
  atomic<int> aVar10;
  TReferenceControllerBase<1> *pTVar11;
  atomic<int> aVar12;
  atomic<int> aVar13;
  FTestSimpleCapability *pFVar14;
  FTestSimpleCapability *local_res18;
  TSharedRef<UE::MovieScene::Tests::FTestSimpleCapability,1> local_158;
  FPlaybackCapabilitiesImpl local_148;
  FPlaybackCapabilityPtr local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  aVar12 = (atomic<int>)0x0;
  aVar13 = (atomic<int>)0x0;
  UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed = 0;
  pTVar6 = ::operator_new(0x28);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    local_res18 = (FTestSimpleCapability *)&DAT_00000010;
    aVar10 = aVar13;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFTestSimpleCapability_Tests_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    local_res18 = (FTestSimpleCapability *)(pTVar6 + 1);
    *(undefined4 *)&pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    if ((local_res18 == (FTestSimpleCapability *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pTVar11 = pTVar6;
    aVar10 = pTVar6->SharedReferenceCount;
  }
  ::FString::FString(&local_110,"Ref count");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_110.Data.ArrayNum != 0) {
    FVar9.Data = local_110.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,(int)aVar10,1);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    local_148.Memory = (uchar *)0x0;
    local_148.Alignment = 0;
    local_148.Capacity = 0;
    piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    local_148.Num = '\0';
    local_148.AllCapabilities = 0;
    local_148.Helpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Helpers.ArrayNum = 0;
    local_148.Helpers.ArrayMax = 0;
    if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
    uVar1 = local_148.AllCapabilities >> ((uint)::StaticID & 0x1f);
    ::FString::FString(&local_100,"No capability");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar9.Data = local_100.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestFalse
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,(uVar1 & 1) != 0);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_158.Object = local_res18;
      local_158.SharedReferenceCount.ReferenceController = pTVar11;
      if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                     UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
        _Init_thread_footer(&::_TSS0);
      }
      UE::MovieScene::FPlaybackCapabilitiesImpl::
      AddCapability<TSharedPtr<UE::MovieScene::Tests::FTestSimpleCapability,1>,UE::MovieScene::Tests::FTestSimpleCapability,TSharedRef<UE::MovieScene::Tests::FTestSimpleCapability,1>_>
                (&local_148,&local_120,1 << (::StaticID._0_1_ & 0x1f),&local_158);
      if ((local_120.Ptr == (FTestSimpleCapability *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x3a,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar14 = local_120.Ptr;
      if (local_120.StorageMode != Inline) {
        if ((local_120.StorageMode == RawPointer) || (local_120.StorageMode == SharedPointer)) {
          pFVar14 = *(FTestSimpleCapability **)local_120.Ptr;
        }
        else {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x44,L"Unexpected playback capability storage mode");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                     UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
        _Init_thread_footer(&::_TSS0);
      }
      uVar1 = local_148.AllCapabilities >> ((uint)::StaticID & 0x1f);
      ::FString::FString(&local_f0,"Found capability");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_f0.Data.ArrayNum != 0) {
        FVar9.Data = local_f0.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,(uVar1 & 1) != 0);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          aVar13 = pTVar11->SharedReferenceCount;
        }
        ::FString::FString(&local_e0,"Ref count");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_e0.Data.ArrayNum != 0) {
          FVar9.Data = local_e0.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,(int)aVar13,2);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pFVar8 = UE::MovieScene::FPlaybackCapabilities::
                   FindCapability<UE::MovieScene::Tests::FTestSimpleCapability>
                             ((FPlaybackCapabilities *)&local_148);
          ::FString::FString(&local_d0,"Retrived test capacity");
          if (pFVar8 == (FTestSimpleCapability *)0x0) {
            pcVar2 = *(code **)(*(longlong *)this + 0x28);
            ::FString::PrintfImpl(&local_70,L"Expected \'%s\' to be not null.");
            (*pcVar2)(this,&local_70,0);
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (!bVar4) {
            ::FString::FString(&local_c0,"Same capacity?");
            if (pFVar8 == pFVar14) {
              bVar4 = false;
            }
            else {
              pcVar2 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_60,L"%s: The two values are not equal.");
              (*pcVar2)(this,&local_60,0);
              if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
            }
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            if (!bVar4) {
              if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar11->SharedReferenceCount =
                     (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
                UNLOCK();
              }
              ::FString::FString(&local_b0,"Same capacity?");
              if (pFVar8 == local_res18) {
                bVar4 = false;
              }
              else {
                pcVar2 = *(code **)(*(longlong *)this + 0x28);
                ::FString::PrintfImpl(&local_50,L"%s: The two values are not equal.");
                (*pcVar2)(this,&local_50,0);
                if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_50.Data.AllocatorInstance.Data);
                }
                bVar4 = true;
              }
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar11);
              if (!bVar4) {
                UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities
                          ((FPlaybackCapabilities *)&local_148);
                iVar3 = UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed;
                ::FString::FString(&local_a0,"Not destroyed");
                FVar9.Data = (FScriptContainerElement *)L"";
                if (local_a0.Data.ArrayNum != 0) {
                  FVar9.Data = local_a0.Data.AllocatorInstance.Data;
                }
                bVar4 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar3,0);
                if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                }
                if (bVar4) {
                  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                    aVar12 = pTVar11->SharedReferenceCount;
                  }
                  ::FString::FString(&local_90,"Ref count");
                  FVar9.Data = (FScriptContainerElement *)L"";
                  if (local_90.Data.ArrayNum != 0) {
                    FVar9.Data = local_90.Data.AllocatorInstance.Data;
                  }
                  bVar4 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,(int)aVar12,1
                                    );
                  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_90.Data.AllocatorInstance.Data);
                  }
                  if (bVar4) {
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar11);
                    iVar3 = UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed;
                    ::FString::FString(&local_80,"Destroyed");
                    FVar9.Data = (FScriptContainerElement *)L"";
                    if (local_80.Data.ArrayNum != 0) {
                      FVar9.Data = local_80.Data.AllocatorInstance.Data;
                    }
                    bVar4 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar3,1);
                    if (local_80.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                      return bVar4;
                    }
                    FMemory::Free(local_80.Data.AllocatorInstance.Data);
                    return bVar4;
                  }
                }
                goto LAB_146247977;
              }
            }
          }
        }
      }
    }
    UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities
              ((FPlaybackCapabilities *)&local_148);
  }
LAB_146247977:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return false;
}

// GetBeautifiedTestName @ 1462479b0

FString * __thiscall
FMovieScenePlaybackCapabilitiesSharedTest::GetBeautifiedTestName
          (FMovieScenePlaybackCapabilitiesSharedTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Capabilities.Shared");
  return __return_storage_ptr__;
}

