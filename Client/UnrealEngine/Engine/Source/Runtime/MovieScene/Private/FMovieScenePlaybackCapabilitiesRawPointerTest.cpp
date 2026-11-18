// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 1462469c0

EAutomationTestFlags __thiscall
FMovieScenePlaybackCapabilitiesRawPointerTest::GetTestFlags
          (FMovieScenePlaybackCapabilitiesRawPointerTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1462469d0

bool __thiscall
FMovieScenePlaybackCapabilitiesRawPointerTest::IsStressTest
          (FMovieScenePlaybackCapabilitiesRawPointerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146246a10

uint __thiscall
FMovieScenePlaybackCapabilitiesRawPointerTest::GetRequiredDeviceNum
          (FMovieScenePlaybackCapabilitiesRawPointerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146246a20

FString * __thiscall
FMovieScenePlaybackCapabilitiesRawPointerTest::GetTestSourceFileName
          (FMovieScenePlaybackCapabilitiesRawPointerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackCapabilitiesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146246a50

int __thiscall
FMovieScenePlaybackCapabilitiesRawPointerTest::GetTestSourceFileLine
          (FMovieScenePlaybackCapabilitiesRawPointerTest *this)

{
  return 0xc4;
}

// GetTests @ 146246a60

/* WARNING: Removing unreachable block (ram,0x000146246b4d) */
/* WARNING: Removing unreachable block (ram,0x000146246c18) */

void __thiscall
FMovieScenePlaybackCapabilitiesRawPointerTest::GetTests
          (FMovieScenePlaybackCapabilitiesRawPointerTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Capabilities.RawPointer");
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

// RunTest @ 146246c40

bool __thiscall
FMovieScenePlaybackCapabilitiesRawPointerTest::RunTest
          (FMovieScenePlaybackCapabilitiesRawPointerTest *this,FString *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  FTestSimpleCapability *pFVar5;
  FTestSimpleCapability *pFVar6;
  ForAnyElementType FVar7;
  int *piVar8;
  FString local_78;
  FString local_68;
  FTestSimpleCapability local_58;
  FPlaybackCapabilities local_40;
  
  UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed = 0;
  local_58.IntValue = 0;
  local_58.StringValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.StringValue.Data.ArrayNum = 0;
  local_58.StringValue.Data.ArrayMax = 0;
  local_40._0_8_ = 0;
  local_40._8_4_ = 0;
  local_40._12_1_ = 0;
  local_40._16_4_ = 0;
  local_40._24_8_ = 0;
  local_40._32_8_ = 0;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar8 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                 UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
    _Init_thread_footer(&::_TSS0);
  }
  uVar2 = (uint)local_40._16_4_ >> ((uint)::StaticID & 0x1f);
  ::FString::FString(&local_78,"No capability");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar7.Data = local_78.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestFalse
                    ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,(uVar2 & 1) != 0);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar5 = UE::MovieScene::FPlaybackCapabilities::
             AddCapabilityRaw<UE::MovieScene::Tests::FTestSimpleCapability>(&local_40,&local_58);
    if ((*piVar8 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
    uVar2 = (uint)local_40._16_4_ >> ((uint)::StaticID & 0x1f);
    ::FString::FString(&local_78,"Found capability");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar7.Data = local_78.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,(uVar2 & 1) != 0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pFVar6 = UE::MovieScene::FPlaybackCapabilities::
               FindCapability<UE::MovieScene::Tests::FTestSimpleCapability>(&local_40);
      ::FString::FString(&local_78,"Retrived test capacity");
      if (pFVar6 == (FTestSimpleCapability *)0x0) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_68,L"Expected \'%s\' to be not null.");
        (*pcVar1)(this,&local_68,0);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        ::FString::FString(&local_78,"Same capacity?");
        if (pFVar6 == pFVar5) {
          bVar4 = false;
        }
        else {
          pcVar1 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
          (*pcVar1)(this,&local_68,0);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          bVar4 = true;
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          ::FString::FString(&local_78,"Same capacity?");
          if (pFVar6 == &local_58) {
            bVar4 = false;
          }
          else {
            pcVar1 = *(code **)(*(longlong *)this + 0x28);
            ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
            (*pcVar1)(this,&local_68,0);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            bVar4 = true;
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (!bVar4) {
            UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities(&local_40);
            iVar3 = UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed;
            ::FString::FString(&local_78,"Not destroyed");
            FVar7.Data = (FScriptContainerElement *)L"";
            if (local_78.Data.ArrayNum != 0) {
              FVar7.Data = local_78.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,iVar3,0);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (bVar4) {
              UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed =
                   UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed + 1;
              if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
              }
              iVar3 = UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed;
              ::FString::FString(&local_78,"Destroyed");
              FVar7.Data = (FScriptContainerElement *)L"";
              if (local_78.Data.ArrayNum != 0) {
                FVar7.Data = local_78.Data.AllocatorInstance.Data;
              }
              bVar4 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,iVar3,1);
              if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return bVar4;
              }
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
              return bVar4;
            }
            goto LAB_146246f9c;
          }
        }
      }
    }
  }
  UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities(&local_40);
LAB_146246f9c:
  UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed =
       UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed + 1;
  if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetBeautifiedTestName @ 146247050

FString * __thiscall
FMovieScenePlaybackCapabilitiesRawPointerTest::GetBeautifiedTestName
          (FMovieScenePlaybackCapabilitiesRawPointerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Capabilities.RawPointer");
  return __return_storage_ptr__;
}

