// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146247b10

EAutomationTestFlags __thiscall
FMovieScenePlaybackCapabilitiesInvalidateTest::GetTestFlags
          (FMovieScenePlaybackCapabilitiesInvalidateTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146247b50

bool __thiscall
FMovieScenePlaybackCapabilitiesInvalidateTest::IsStressTest
          (FMovieScenePlaybackCapabilitiesInvalidateTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146247b70

uint __thiscall
FMovieScenePlaybackCapabilitiesInvalidateTest::GetRequiredDeviceNum
          (FMovieScenePlaybackCapabilitiesInvalidateTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146247b80

FString * __thiscall
FMovieScenePlaybackCapabilitiesInvalidateTest::GetTestSourceFileName
          (FMovieScenePlaybackCapabilitiesInvalidateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackCapabilitiesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146247bc0

int __thiscall
FMovieScenePlaybackCapabilitiesInvalidateTest::GetTestSourceFileLine
          (FMovieScenePlaybackCapabilitiesInvalidateTest *this)

{
  return 0x103;
}

// GetTests @ 1462486c0

/* WARNING: Removing unreachable block (ram,0x0001462487ad) */
/* WARNING: Removing unreachable block (ram,0x000146248878) */

void __thiscall
FMovieScenePlaybackCapabilitiesInvalidateTest::GetTests
          (FMovieScenePlaybackCapabilitiesInvalidateTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Capabilities.Invalidate");
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

// RunTest @ 1462488e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieScenePlaybackCapabilitiesInvalidateTest::RunTest
          (FMovieScenePlaybackCapabilitiesInvalidateTest *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  FPlaybackCapabilitiesImpl *this_00;
  ForAnyElementType FVar6;
  undefined8 *puVar7;
  FTestInvalidatableCapability *local_res18 [2];
  FPlaybackCapabilityPtr local_1b8;
  FPlaybackCapabilityPtr local_1a8;
  FTestInvalidatableCapability local_198;
  FPlaybackCapabilities local_188;
  FPlaybackCapabilitiesImpl local_160;
  FPlaybackCapabilitiesImpl local_138;
  FPlaybackCapabilitiesImpl local_110;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FPlaybackCapabilityPtr local_68;
  TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1> local_58;
  TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1> local_48 [2];
  
  local_110.Memory = (uchar *)0x0;
  local_110.Alignment = 0;
  local_110.Capacity = 0;
  local_110.Num = '\0';
  local_110.AllCapabilities = 0;
  local_110.Helpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.Helpers.ArrayNum = 0;
  local_110.Helpers.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestInvalidatableCapability>)
                 UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestInvalidatableCapability");
    _Init_thread_footer(&::_TSS0);
  }
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<UE::MovieScene::Tests::FTestInvalidatableCapability,UE::MovieScene::Tests::FTestInvalidatableCapability>
            (&local_110,&local_1b8,1 << (::StaticID._0_1_ & 0x1f));
  if ((local_1b8.Ptr == (undefined8 *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x3a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  puVar5 = local_1b8.Ptr;
  if (local_1b8.StorageMode != Inline) {
    if ((local_1b8.StorageMode == RawPointer) || (local_1b8.StorageMode == SharedPointer)) {
      puVar5 = *(undefined8 **)local_1b8.Ptr;
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  iVar1 = *(int *)(puVar5 + 1);
  ::FString::FString(&local_e8,"Not invalidated");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar6.Data = local_e8.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar1,0);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    UE::MovieScene::FPlaybackCapabilities::InvalidateCachedData
              ((FPlaybackCapabilities *)&local_110,(UMovieSceneEntitySystemLinker *)0x0);
    iVar1 = *(int *)(puVar5 + 1);
    ::FString::FString(&local_d8,"Invalidated");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar6.Data = local_d8.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar1,1);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities
                ((FPlaybackCapabilities *)&local_110);
      local_138.Memory = (uchar *)0x0;
      local_138.Alignment = 0;
      local_138.Capacity = 0;
      local_138.Num = '\0';
      local_138.AllCapabilities = 0;
      local_138.Helpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Helpers.ArrayNum = 0;
      local_138.Helpers.ArrayMax = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                     UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
        _Init_thread_footer(&::_TSS0);
      }
      UE::MovieScene::FPlaybackCapabilitiesImpl::
      AddCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerivedWithInterface,UE::MovieScene::Tests::FTestSimpleCapability>
                (&local_138,&local_1a8,1 << (::StaticID._0_1_ & 0x1f));
      if ((local_1a8.Ptr == (undefined8 *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x3a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (local_1a8.StorageMode != Inline) {
        if ((local_1a8.StorageMode == RawPointer) || (local_1a8.StorageMode == SharedPointer)) {
          local_1a8.Ptr = *(void **)local_1a8.Ptr;
        }
        else {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x44,L"Unexpected playback capability storage mode");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
      }
      puVar5 = (undefined8 *)((longlong)local_1a8.Ptr + -8);
      if (local_1a8.Ptr == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      puVar7 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
        puVar7 = puVar5;
      }
      iVar1 = *(int *)(puVar7 + 4);
      ::FString::FString(&local_c8,"Not invalidated");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar6.Data = local_c8.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar1,0);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        UE::MovieScene::FPlaybackCapabilities::InvalidateCachedData
                  ((FPlaybackCapabilities *)&local_138,(UMovieSceneEntitySystemLinker *)0x0);
        iVar1 = *(int *)(puVar7 + 4);
        ::FString::FString(&local_b8,"Invalidated");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_b8.Data.ArrayNum != 0) {
          FVar6.Data = local_b8.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar1,1);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities
                    ((FPlaybackCapabilities *)&local_138);
          local_198._padding_ = (longlong)&___7FTestInvalidatableCapability_Tests_MovieScene_UE__6B_
          ;
          local_res18[0] = &local_198;
          local_198.TimesInvalidated = 0;
          local_160.Memory = (uchar *)0x0;
          local_160.Alignment = 0;
          local_160.Capacity = 0;
          local_160.Num = '\0';
          local_160.AllCapabilities = 0;
          local_160.Helpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_160.Helpers.ArrayNum = 0;
          local_160.Helpers.ArrayMax = 0;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestInvalidatableCapability>
                         )UE::MovieScene::FPlaybackCapabilityID::Register
                                    (L"FTestInvalidatableCapability");
            _Init_thread_footer(&::_TSS0);
          }
          UE::MovieScene::FPlaybackCapabilitiesImpl::
          AddCapability<UE::MovieScene::Tests::FTestInvalidatableCapability_*,UE::MovieScene::Tests::FTestInvalidatableCapability,UE::MovieScene::Tests::FTestInvalidatableCapability_*>
                    (&local_160,&local_68,1 << (::StaticID._0_1_ & 0x1f),local_res18);
          if ((local_68.Ptr == (void *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                                 ,0x3a,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if ((((local_68.StorageMode != Inline) && (local_68.StorageMode != RawPointer)) &&
              (local_68.StorageMode != SharedPointer)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                                 ,0x44,L"Unexpected playback capability storage mode"), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          ::FString::FString(&local_a8,"Not invalidated");
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_a8.Data.ArrayNum != 0) {
            FVar6.Data = local_a8.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,
                             local_198.TimesInvalidated,0);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            UE::MovieScene::FPlaybackCapabilities::InvalidateCachedData
                      ((FPlaybackCapabilities *)&local_160,(UMovieSceneEntitySystemLinker *)0x0);
            ::FString::FString(&local_98,"Invalidated");
            FVar6.Data = (FScriptContainerElement *)L"";
            if (local_98.Data.ArrayNum != 0) {
              FVar6.Data = local_98.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,
                               local_198.TimesInvalidated,1);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (bVar3) {
              UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities
                        ((FPlaybackCapabilities *)&local_160);
              MakeShared<UE::MovieScene::Tests::FTestInvalidatableCapability,1>(&local_58);
              local_188._0_8_ = 0;
              local_188._8_4_ = 0;
              local_188._12_1_ = 0;
              local_188._16_4_ = 0;
              local_188._24_8_ = 0;
              local_188._32_8_ = 0;
              local_48[0].Object = local_58.Object;
              local_48[0].SharedReferenceCount.ReferenceController =
                   local_58.SharedReferenceCount.ReferenceController;
              if (local_58.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
              UE::MovieScene::FPlaybackCapabilities::
              AddCapabilityShared<UE::MovieScene::Tests::FTestInvalidatableCapability>
                        (&local_188,local_48);
              iVar1 = (local_58.Object)->TimesInvalidated;
              ::FString::FString(&local_88,"Not invalidated");
              FVar6.Data = (FScriptContainerElement *)L"";
              if (local_88.Data.ArrayNum != 0) {
                FVar6.Data = local_88.Data.AllocatorInstance.Data;
              }
              bVar3 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar1,0);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              if (bVar3) {
                UE::MovieScene::FPlaybackCapabilities::InvalidateCachedData
                          (&local_188,(UMovieSceneEntitySystemLinker *)0x0);
                iVar1 = (local_58.Object)->TimesInvalidated;
                ::FString::FString(&local_78,"Invalidated");
                FVar6.Data = (FScriptContainerElement *)L"";
                if (local_78.Data.ArrayNum != 0) {
                  FVar6.Data = local_78.Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar1,1);
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
                if (bVar3) {
                  UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities(&local_188);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_58.SharedReferenceCount.ReferenceController);
                  return true;
                }
              }
              UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities(&local_188);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_58.SharedReferenceCount.ReferenceController);
              return false;
            }
          }
          this_00 = &local_160;
          goto LAB_146248f62;
        }
      }
      this_00 = &local_138;
      goto LAB_146248f62;
    }
  }
  this_00 = &local_110;
LAB_146248f62:
  UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities((FPlaybackCapabilities *)this_00);
  return false;
}

// GetBeautifiedTestName @ 146248f90

FString * __thiscall
FMovieScenePlaybackCapabilitiesInvalidateTest::GetBeautifiedTestName
          (FMovieScenePlaybackCapabilitiesInvalidateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Capabilities.Invalidate");
  return __return_storage_ptr__;
}

