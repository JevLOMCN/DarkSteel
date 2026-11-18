// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 14624cc50

EAutomationTestFlags __thiscall
FMovieScenePlaybackCapabilitiesOverwriteTest::GetTestFlags
          (FMovieScenePlaybackCapabilitiesOverwriteTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14624cc60

bool __thiscall
FMovieScenePlaybackCapabilitiesOverwriteTest::IsStressTest
          (FMovieScenePlaybackCapabilitiesOverwriteTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14624cc70

uint __thiscall
FMovieScenePlaybackCapabilitiesOverwriteTest::GetRequiredDeviceNum
          (FMovieScenePlaybackCapabilitiesOverwriteTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14624cc80

FString * __thiscall
FMovieScenePlaybackCapabilitiesOverwriteTest::GetTestSourceFileName
          (FMovieScenePlaybackCapabilitiesOverwriteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackCapabilitiesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14624ccb0

int __thiscall
FMovieScenePlaybackCapabilitiesOverwriteTest::GetTestSourceFileLine
          (FMovieScenePlaybackCapabilitiesOverwriteTest *this)

{
  return 0x185;
}

// GetTests @ 14624ccc0

/* WARNING: Removing unreachable block (ram,0x00014624cdad) */
/* WARNING: Removing unreachable block (ram,0x00014624ce78) */

void __thiscall
FMovieScenePlaybackCapabilitiesOverwriteTest::GetTests
          (FMovieScenePlaybackCapabilitiesOverwriteTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Capabilities.Overwrite");
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

// RunTest @ 14624cea0

bool __thiscall
FMovieScenePlaybackCapabilitiesOverwriteTest::RunTest
          (FMovieScenePlaybackCapabilitiesOverwriteTest *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  FTestSimpleCapability *pFVar7;
  int iVar8;
  FPlaybackCapabilitiesImpl *this_00;
  ForAnyElementType FVar9;
  int *piVar10;
  int local_res18 [2];
  int local_res20 [2];
  int local_4d8 [2];
  FPlaybackCapabilitiesImpl local_4d0;
  FTestSimpleCapability local_4a8;
  FTestSimpleCapability local_490;
  FPlaybackCapabilitiesImpl local_478;
  FPlaybackCapabilitiesImpl local_450;
  FTestSimpleCapability *local_428;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FScriptContainerElement *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  FPlaybackCapabilityPtr local_228;
  FString local_218;
  wchar_t *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FScriptContainerElement *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FString local_1e8;
  wchar_t *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FPlaybackCapabilityPtr local_1b8;
  FString local_1a8;
  wchar_t *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FString local_178;
  wchar_t *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FString local_148;
  wchar_t *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FString local_118;
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  ::FString::FString(&local_420,"First");
  FVar9.Data = local_420.Data.AllocatorInstance.Data;
  local_4a8.IntValue = 1;
  local_4a8.StringValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_420.Data.ArrayNum == 0) {
    local_4a8.StringValue.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_420.Data.ArrayNum,0,(ForAnyElementType *)&local_4a8.StringValue,
               local_420.Data.ArrayNum,&local_4a8.StringValue.Data.ArrayMax);
    memcpy(local_4a8.StringValue.Data.AllocatorInstance.Data,FVar9.Data,
           (longlong)local_420.Data.ArrayNum * 2);
  }
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_410,"Second");
  FVar9.Data = local_410.Data.AllocatorInstance.Data;
  local_490.IntValue = 2;
  local_490.StringValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_410.Data.ArrayNum == 0) {
    local_490.StringValue.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_410.Data.ArrayNum,0,(ForAnyElementType *)&local_490.StringValue,
               local_410.Data.ArrayNum,&local_490.StringValue.Data.ArrayMax);
    memcpy(local_490.StringValue.Data.AllocatorInstance.Data,FVar9.Data,
           (longlong)local_410.Data.ArrayNum * 2);
  }
  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data.AllocatorInstance.Data);
  }
  local_4d0.Memory = (uchar *)0x0;
  local_4d0.Alignment = 0;
  local_4d0.Capacity = 0;
  local_4d0.Num = '\0';
  local_4d0.AllCapabilities = 0;
  local_4d0.Helpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4d0.Helpers.ArrayNum = 0;
  local_4d0.Helpers.ArrayMax = 0;
  UE::MovieScene::FPlaybackCapabilities::
  AddCapabilityRaw<UE::MovieScene::Tests::FTestSimpleCapability>
            ((FPlaybackCapabilities *)&local_4d0,&local_4a8);
  pFVar7 = UE::MovieScene::FPlaybackCapabilities::
           FindCapability<UE::MovieScene::Tests::FTestSimpleCapability>
                     ((FPlaybackCapabilities *)&local_4d0);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                 UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
    _Init_thread_footer(&::_TSS0);
  }
  uVar4 = local_4d0.AllCapabilities >> ((uint)::StaticID & 0x1f);
  ::FString::FString(&local_400,"Found capability");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_400.Data.ArrayNum != 0) {
    FVar9.Data = local_400.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,(uVar4 & 1) != 0);
  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    ::FString::FString(&local_3f0,"Same capability pointer");
    if (pFVar7 == &local_4a8) {
      bVar5 = false;
    }
    else {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
    }
    if (bVar5) goto LAB_14624e079;
    iVar1 = pFVar7->IntValue;
    ::FString::FString(&local_3e0,"Checking IntValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_3e0.Data.ArrayNum != 0) {
      FVar9.Data = local_3e0.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,1);
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_14624e079;
    iStack_130 = 5;
    local_138 = L"First";
    local_128 = (pFVar7->StringValue).Data.AllocatorInstance.Data;
    iVar1 = (pFVar7->StringValue).Data.ArrayNum;
    iStack_120 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_120 = 0;
    }
    ::FString::FString(&local_3d0,"Checking StringValue");
    local_c8._12_4_ = uStack_12c;
    local_c8.Size = iStack_130;
    local_88._12_4_ = uStack_11c;
    local_88.Size = iStack_120;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_3d0.Data.ArrayNum != 0) {
      FVar9.Data = local_3d0.Data.AllocatorInstance.Data;
    }
    local_c8.DataPtr = local_138;
    local_88.DataPtr = (wchar_t *)local_128;
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,&local_88,&local_c8);
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_14624e079;
    local_428 = &local_490;
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*>
              (&local_4d0,1 << (::StaticID._0_1_ & 0x1f),&local_428);
    UE::MovieScene::FPlaybackCapabilities::
    GetCapabilityChecked<UE::MovieScene::Tests::FTestSimpleCapability>
              ((FPlaybackCapabilities *)&local_4d0);
    pFVar7 = UE::MovieScene::FPlaybackCapabilities::
             FindCapability<UE::MovieScene::Tests::FTestSimpleCapability>
                       ((FPlaybackCapabilities *)&local_4d0);
    bVar5 = UE::MovieScene::FPlaybackCapabilities::
            HasCapability<UE::MovieScene::Tests::FTestSimpleCapability>
                      ((FPlaybackCapabilities *)&local_4d0);
    ::FString::FString(&local_3c0,"Found capability");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_3c0.Data.ArrayNum != 0) {
      FVar9.Data = local_3c0.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,bVar5);
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_14624e079;
    ::FString::FString(&local_3b0,"Same capability pointer");
    if (pFVar7 == &local_490) {
      bVar5 = false;
    }
    else {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_118,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_118,0);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
    }
    if (bVar5) goto LAB_14624e079;
    iVar1 = pFVar7->IntValue;
    ::FString::FString(&local_3a0,"Checking IntValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_3a0.Data.ArrayNum != 0) {
      FVar9.Data = local_3a0.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,2);
    if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_14624e079;
    iStack_100 = 6;
    local_108 = L"Second";
    local_238 = (pFVar7->StringValue).Data.AllocatorInstance.Data;
    iVar1 = (pFVar7->StringValue).Data.ArrayNum;
    iVar8 = 0;
    iStack_230 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_230 = iVar8;
    }
    ::FString::FString(&local_390,"Checking StringValue");
    local_78._12_4_ = uStack_fc;
    local_78.Size = iStack_100;
    local_68._12_4_ = uStack_22c;
    local_68.Size = iStack_230;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_390.Data.ArrayNum != 0) {
      FVar9.Data = local_390.Data.AllocatorInstance.Data;
    }
    local_78.DataPtr = local_108;
    local_68.DataPtr = (wchar_t *)local_238;
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,&local_68,&local_78);
    if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_14624e079;
    UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities
              ((FPlaybackCapabilities *)&local_4d0);
    UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed = 0;
    UE::MovieScene::Tests::FTestSimpleCapabilityDerived::TimesDestroyedDerived = 0;
    local_450.Memory = (uchar *)0x0;
    local_450.Alignment = 0;
    local_450.Capacity = 0;
    local_450.Num = '\0';
    local_450.AllCapabilities = 0;
    local_450.Helpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_450.Helpers.ArrayNum = 0;
    local_450.Helpers.ArrayMax = 0;
    local_res18[0] = 1;
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    AddCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]>
              (&local_450,&local_228,1 << (::StaticID._0_1_ & 0x1f),local_res18,
               (wchar_t (*) [5])L"Base");
    if ((local_228.Ptr == (void *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((((local_228.StorageMode != Inline) && (local_228.StorageMode != RawPointer)) &&
        (local_228.StorageMode != SharedPointer)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x44,L"Unexpected playback capability storage mode"), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar7 = UE::MovieScene::FPlaybackCapabilities::
             FindCapability<UE::MovieScene::Tests::FTestSimpleCapability>
                       ((FPlaybackCapabilities *)&local_450);
    ::FString::FString(&local_380,"Found capabality");
    if (pFVar7 == (FTestSimpleCapability *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_218,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_218,0);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
LAB_14624e073:
      this_00 = &local_450;
      goto LAB_14624e07e;
    }
    iVar1 = pFVar7->IntValue;
    ::FString::FString(&local_370,"Checking IntValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_370.Data.ArrayNum != 0) {
      FVar9.Data = local_370.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,1);
    if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_14624e073;
    local_1f8 = (pFVar7->StringValue).Data.AllocatorInstance.Data;
    iVar1 = (pFVar7->StringValue).Data.ArrayNum;
    local_208 = L"Base";
    iStack_200 = 4;
    iStack_1f0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_1f0 = iVar8;
    }
    ::FString::FString(&local_360,"Checking StringValue");
    local_58._12_4_ = uStack_1fc;
    local_58.Size = iStack_200;
    local_f8._12_4_ = uStack_1ec;
    local_f8.Size = iStack_1f0;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_360.Data.ArrayNum != 0) {
      FVar9.Data = local_360.Data.AllocatorInstance.Data;
    }
    local_58.DataPtr = local_208;
    local_f8.DataPtr = (wchar_t *)local_1f8;
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,&local_f8,&local_58);
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_14624e073;
    local_res20[0] = 2;
    piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]>
              (&local_450,1 << (::StaticID._0_1_ & 0x1f),local_res20,(wchar_t (*) [8])L"Derived");
    UE::MovieScene::FPlaybackCapabilities::
    GetCapabilityChecked<UE::MovieScene::Tests::FTestSimpleCapability>
              ((FPlaybackCapabilities *)&local_450);
    iVar1 = UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed;
    ::FString::FString(&local_260,"Times destroyed");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_260.Data.ArrayNum != 0) {
      FVar9.Data = local_260.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,1);
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
    iVar1 = UE::MovieScene::Tests::FTestSimpleCapabilityDerived::TimesDestroyedDerived;
    if (!bVar5) goto LAB_14624e073;
    ::FString::FString(&local_270,"Times destroyed");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_270.Data.ArrayNum != 0) {
      FVar9.Data = local_270.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,0);
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_14624e073;
    pFVar7 = UE::MovieScene::FPlaybackCapabilities::
             FindCapability<UE::MovieScene::Tests::FTestSimpleCapability>
                       ((FPlaybackCapabilities *)&local_450);
    ::FString::FString(&local_280,"Found capabality");
    if (pFVar7 == (FTestSimpleCapability *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_1e8,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_1e8,0);
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    if (bVar5) goto LAB_14624e073;
    iVar1 = pFVar7->IntValue;
    ::FString::FString(&local_250,"Checking IntValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_250.Data.ArrayNum != 0) {
      FVar9.Data = local_250.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,2);
    if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_14624e073;
    local_1c8 = (pFVar7->StringValue).Data.AllocatorInstance.Data;
    iVar1 = (pFVar7->StringValue).Data.ArrayNum;
    local_1d8 = L"Derived";
    iStack_1d0 = 7;
    iStack_1c0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_1c0 = iVar8;
    }
    ::FString::FString(&local_290,"Checking StringValue");
    local_e8._12_4_ = uStack_1cc;
    local_e8.Size = iStack_1d0;
    local_d8._12_4_ = uStack_1bc;
    local_d8.Size = iStack_1c0;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_290.Data.ArrayNum != 0) {
      FVar9.Data = local_290.Data.AllocatorInstance.Data;
    }
    local_e8.DataPtr = local_1d8;
    local_d8.DataPtr = (wchar_t *)local_1c8;
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,&local_d8,&local_e8);
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_14624e073;
    UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities
              ((FPlaybackCapabilities *)&local_450);
    iVar1 = UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed;
    ::FString::FString(&local_350,"Times destroyed");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_350.Data.ArrayNum != 0) {
      FVar9.Data = local_350.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,2);
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    iVar1 = UE::MovieScene::Tests::FTestSimpleCapabilityDerived::TimesDestroyedDerived;
    if (bVar5) {
      ::FString::FString(&local_340,"Times destroyed");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_340.Data.ArrayNum != 0) {
        FVar9.Data = local_340.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,1);
      if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data.AllocatorInstance.Data);
      }
      if (!bVar5) goto LAB_14624e083;
      UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed = 0;
      UE::MovieScene::Tests::FTestSimpleCapabilityDerived::TimesDestroyedDerived = 0;
      local_478.Memory = (uchar *)0x0;
      local_478.Alignment = 0;
      local_478.Capacity = 0;
      local_478.Num = '\0';
      local_478.AllCapabilities = 0;
      local_478.Helpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_478.Helpers.ArrayNum = 0;
      local_478.Helpers.ArrayMax = 0;
      local_4d8[0] = 2;
      if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                     UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
        _Init_thread_footer(&::_TSS0);
      }
      UE::MovieScene::FPlaybackCapabilitiesImpl::
      AddCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]>
                (&local_478,&local_1b8,1 << (::StaticID._0_1_ & 0x1f),local_4d8,
                 (wchar_t (*) [8])L"Derived");
      if ((local_1b8.Ptr == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x3a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((((local_1b8.StorageMode != Inline) && (local_1b8.StorageMode != RawPointer)) &&
          (local_1b8.StorageMode != SharedPointer)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x44,L"Unexpected playback capability storage mode"), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar7 = UE::MovieScene::FPlaybackCapabilities::
               FindCapability<UE::MovieScene::Tests::FTestSimpleCapability>
                         ((FPlaybackCapabilities *)&local_478);
      ::FString::FString(&local_330,"Found capabality");
      if (pFVar7 == (FTestSimpleCapability *)0x0) {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_1a8,L"Expected \'%s\' to be not null.");
        (*pcVar3)(this,&local_1a8,0);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        iVar1 = pFVar7->IntValue;
        ::FString::FString(&local_320,"Checking IntValue");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_320.Data.ArrayNum != 0) {
          FVar9.Data = local_320.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,2);
        if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          local_188 = (pFVar7->StringValue).Data.AllocatorInstance.Data;
          iVar1 = (pFVar7->StringValue).Data.ArrayNum;
          local_198 = L"Derived";
          iStack_190 = 7;
          iStack_180 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_180 = iVar8;
          }
          ::FString::FString(&local_310,"Checking StringValue");
          local_48._12_4_ = uStack_18c;
          local_48.Size = iStack_190;
          local_b8._12_4_ = uStack_17c;
          local_b8.Size = iStack_180;
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_310.Data.ArrayNum != 0) {
            FVar9.Data = local_310.Data.AllocatorInstance.Data;
          }
          local_48.DataPtr = local_198;
          local_b8.DataPtr = (wchar_t *)local_188;
          bVar5 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,&local_b8,&local_48);
          if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_310.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            local_4d8[1] = 1;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                           UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestSimpleCapability")
              ;
              _Init_thread_footer(&::_TSS0);
            }
            UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]>
                      (&local_478,1 << (::StaticID._0_1_ & 0x1f),local_4d8 + 1,
                       (wchar_t (*) [5])L"Base");
            UE::MovieScene::FPlaybackCapabilities::
            GetCapabilityChecked<UE::MovieScene::Tests::FTestSimpleCapability>
                      ((FPlaybackCapabilities *)&local_478);
            iVar1 = UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed;
            ::FString::FString(&local_300,"Times destroyed");
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_300.Data.ArrayNum != 0) {
              FVar9.Data = local_300.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,1);
            if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_300.Data.AllocatorInstance.Data);
            }
            iVar1 = UE::MovieScene::Tests::FTestSimpleCapabilityDerived::TimesDestroyedDerived;
            if (bVar5) {
              ::FString::FString(&local_2f0,"Times destroyed");
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_2f0.Data.ArrayNum != 0) {
                FVar9.Data = local_2f0.Data.AllocatorInstance.Data;
              }
              bVar5 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,1);
              if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
              }
              if (bVar5) {
                pFVar7 = UE::MovieScene::FPlaybackCapabilities::
                         FindCapability<UE::MovieScene::Tests::FTestSimpleCapability>
                                   ((FPlaybackCapabilities *)&local_478);
                ::FString::FString(&local_2e0,"Found capabality");
                if (pFVar7 == (FTestSimpleCapability *)0x0) {
                  pcVar3 = *(code **)(*(longlong *)this + 0x28);
                  ::FString::PrintfImpl(&local_178,L"Expected \'%s\' to be not null.");
                  (*pcVar3)(this,&local_178,0);
                  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_178.Data.AllocatorInstance.Data);
                  }
                  bVar5 = true;
                }
                else {
                  bVar5 = false;
                }
                if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
                }
                if (!bVar5) {
                  iVar1 = pFVar7->IntValue;
                  ::FString::FString(&local_2d0,"Checking IntValue");
                  FVar9.Data = (FScriptContainerElement *)L"";
                  if (local_2d0.Data.ArrayNum != 0) {
                    FVar9.Data = local_2d0.Data.AllocatorInstance.Data;
                  }
                  bVar5 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,1);
                  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
                  }
                  if (bVar5) {
                    local_158 = (pFVar7->StringValue).Data.AllocatorInstance.Data;
                    iVar1 = (pFVar7->StringValue).Data.ArrayNum;
                    local_168 = L"Base";
                    iStack_160 = 4;
                    iStack_150 = iVar1 + -1;
                    if (iVar1 == 0) {
                      iStack_150 = iVar8;
                    }
                    ::FString::FString(&local_2c0,"Checking StringValue");
                    local_a8._12_4_ = uStack_15c;
                    local_a8.Size = iStack_160;
                    local_98._12_4_ = uStack_14c;
                    local_98.Size = iStack_150;
                    FVar9.Data = (FScriptContainerElement *)L"";
                    if (local_2c0.Data.ArrayNum != 0) {
                      FVar9.Data = local_2c0.Data.AllocatorInstance.Data;
                    }
                    local_a8.DataPtr = local_168;
                    local_98.DataPtr = (wchar_t *)local_158;
                    bVar5 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,&local_98,
                                       &local_a8);
                    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
                    }
                    if (bVar5) {
                      UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities
                                ((FPlaybackCapabilities *)&local_478);
                      iVar1 = UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed;
                      ::FString::FString(&local_2b0,"Times destroyed");
                      FVar9.Data = (FScriptContainerElement *)L"";
                      if (local_2b0.Data.ArrayNum != 0) {
                        FVar9.Data = local_2b0.Data.AllocatorInstance.Data;
                      }
                      bVar5 = FAutomationTestBase::TestEqual
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,2);
                      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
                      }
                      iVar1 = UE::MovieScene::Tests::FTestSimpleCapabilityDerived::
                              TimesDestroyedDerived;
                      if (bVar5) {
                        ::FString::FString(&local_2a0,"Times destroyed");
                        FVar9.Data = (FScriptContainerElement *)L"";
                        if (local_2a0.Data.ArrayNum != 0) {
                          FVar9.Data = local_2a0.Data.AllocatorInstance.Data;
                        }
                        bVar5 = FAutomationTestBase::TestEqual
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,1
                                          );
                        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
                        }
                        if (bVar5) {
                          bVar5 = true;
                          goto LAB_14624e085;
                        }
                      }
                      goto LAB_14624e083;
                    }
                  }
                }
              }
            }
          }
        }
      }
      this_00 = &local_478;
      goto LAB_14624e07e;
    }
  }
  else {
LAB_14624e079:
    this_00 = &local_4d0;
LAB_14624e07e:
    UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities((FPlaybackCapabilities *)this_00);
  }
LAB_14624e083:
  bVar5 = false;
LAB_14624e085:
  UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed =
       UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed + 1;
  if (local_490.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_490.StringValue.Data.AllocatorInstance.Data);
  }
  UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed =
       UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed + 1;
  if (local_4a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.StringValue.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetBeautifiedTestName @ 14624e0f0

FString * __thiscall
FMovieScenePlaybackCapabilitiesOverwriteTest::GetBeautifiedTestName
          (FMovieScenePlaybackCapabilitiesOverwriteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Capabilities.Overwrite");
  return __return_storage_ptr__;
}

