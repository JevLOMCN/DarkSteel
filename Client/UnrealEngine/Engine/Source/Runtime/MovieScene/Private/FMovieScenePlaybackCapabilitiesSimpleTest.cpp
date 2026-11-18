// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146244bd0

EAutomationTestFlags __thiscall
FMovieScenePlaybackCapabilitiesSimpleTest::GetTestFlags
          (FMovieScenePlaybackCapabilitiesSimpleTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146244be0

bool __thiscall
FMovieScenePlaybackCapabilitiesSimpleTest::IsStressTest
          (FMovieScenePlaybackCapabilitiesSimpleTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146244bf0

uint __thiscall
FMovieScenePlaybackCapabilitiesSimpleTest::GetRequiredDeviceNum
          (FMovieScenePlaybackCapabilitiesSimpleTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146244c00

FString * __thiscall
FMovieScenePlaybackCapabilitiesSimpleTest::GetTestSourceFileName
          (FMovieScenePlaybackCapabilitiesSimpleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackCapabilitiesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146244c30

int __thiscall
FMovieScenePlaybackCapabilitiesSimpleTest::GetTestSourceFileLine
          (FMovieScenePlaybackCapabilitiesSimpleTest *this)

{
  return 0x8a;
}

// GetTests @ 146244c40

/* WARNING: Removing unreachable block (ram,0x000146244d2d) */
/* WARNING: Removing unreachable block (ram,0x000146244df8) */

void __thiscall
FMovieScenePlaybackCapabilitiesSimpleTest::GetTests
          (FMovieScenePlaybackCapabilitiesSimpleTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Capabilities.Simple");
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

// RunTest @ 146244e20

bool __thiscall
FMovieScenePlaybackCapabilitiesSimpleTest::RunTest
          (FMovieScenePlaybackCapabilitiesSimpleTest *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FTestSimpleCapability *pFVar7;
  ForAnyElementType FVar8;
  FTestSimpleCapability *pFVar9;
  int local_res18 [2];
  FPlaybackCapabilitiesImpl local_138;
  FPlaybackCapabilityPtr local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed = 0;
  local_138.Memory = (uchar *)0x0;
  local_138.Alignment = 0;
  local_138.Capacity = 0;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_138.Num = '\0';
  local_138.AllCapabilities = 0;
  local_138.Helpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Helpers.ArrayNum = 0;
  local_138.Helpers.ArrayMax = 0;
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                 UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
    _Init_thread_footer(&::_TSS0);
  }
  uVar3 = local_138.AllCapabilities >> ((uint)::StaticID & 0x1f);
  ::FString::FString(&local_100,"No capability");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_100.Data.ArrayNum != 0) {
    FVar8.Data = local_100.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestFalse
                    ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,(uVar3 & 1) != 0);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    local_res18[0] = 0x2a;
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    AddCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[12]>
              (&local_138,&local_110,1 << (::StaticID._0_1_ & 0x1f),local_res18,
               (wchar_t (*) [12])L"Just a test");
    if ((local_110.Ptr == (FTestSimpleCapability *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar9 = local_110.Ptr;
    if (local_110.StorageMode != Inline) {
      if ((local_110.StorageMode == RawPointer) || (local_110.StorageMode == SharedPointer)) {
        pFVar9 = *(FTestSimpleCapability **)local_110.Ptr;
      }
      else {
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
    }
    iVar1 = pFVar9->IntValue;
    ::FString::FString(&local_f0,"Int value");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_f0.Data.ArrayNum != 0) {
      FVar8.Data = local_f0.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar1,0x2a);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      local_78 = (pFVar9->StringValue).Data.AllocatorInstance.Data;
      iVar1 = (pFVar9->StringValue).Data.ArrayNum;
      local_88 = L"Just a test";
      iStack_80 = 0xb;
      iStack_70 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_70 = 0;
      }
      ::FString::FString(&local_e0,"String value");
      local_48._12_4_ = uStack_7c;
      local_48.Size = iStack_80;
      local_38._12_4_ = uStack_6c;
      local_38.Size = iStack_70;
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_e0.Data.ArrayNum != 0) {
        FVar8.Data = local_e0.Data.AllocatorInstance.Data;
      }
      local_48.DataPtr = local_88;
      local_38.DataPtr = (wchar_t *)local_78;
      bVar5 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,&local_38,&local_48);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                       UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
          _Init_thread_footer(&::_TSS0);
        }
        uVar3 = local_138.AllCapabilities >> ((uint)::StaticID & 0x1f);
        ::FString::FString(&local_d0,"Found capability");
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_d0.Data.ArrayNum != 0) {
          FVar8.Data = local_d0.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,(uVar3 & 1) != 0);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pFVar7 = UE::MovieScene::FPlaybackCapabilities::
                   FindCapability<UE::MovieScene::Tests::FTestSimpleCapability>
                             ((FPlaybackCapabilities *)&local_138);
          ::FString::FString(&local_c0,"Retrived test capacity");
          if (pFVar7 == (FTestSimpleCapability *)0x0) {
            pcVar4 = *(code **)(*(longlong *)this + 0x28);
            ::FString::PrintfImpl(&local_68,L"Expected \'%s\' to be not null.");
            (*pcVar4)(this,&local_68,0);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          if (!bVar5) {
            ::FString::FString(&local_b0,"Same capacity?");
            if (pFVar7 == pFVar9) {
              bVar5 = false;
            }
            else {
              pcVar4 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
              (*pcVar4)(this,&local_58,0);
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              bVar5 = true;
            }
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            if (!bVar5) {
              UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities
                        ((FPlaybackCapabilities *)&local_138);
              iVar1 = UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed;
              ::FString::FString(&local_a0,"Destroyed");
              FVar8.Data = (FScriptContainerElement *)L"";
              if (local_a0.Data.ArrayNum != 0) {
                FVar8.Data = local_a0.Data.AllocatorInstance.Data;
              }
              bVar5 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar1,1);
              if (local_a0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return bVar5;
              }
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              return bVar5;
            }
          }
        }
      }
    }
  }
  UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities((FPlaybackCapabilities *)&local_138)
  ;
  return false;
}

// GetBeautifiedTestName @ 1462452f0

FString * __thiscall
FMovieScenePlaybackCapabilitiesSimpleTest::GetBeautifiedTestName
          (FMovieScenePlaybackCapabilitiesSimpleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Capabilities.Simple");
  return __return_storage_ptr__;
}

