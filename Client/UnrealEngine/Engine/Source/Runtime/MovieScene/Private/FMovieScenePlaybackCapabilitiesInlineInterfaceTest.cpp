// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146245ac0

EAutomationTestFlags __thiscall
FMovieScenePlaybackCapabilitiesInlineInterfaceTest::GetTestFlags
          (FMovieScenePlaybackCapabilitiesInlineInterfaceTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146245ad0

bool __thiscall
FMovieScenePlaybackCapabilitiesInlineInterfaceTest::IsStressTest
          (FMovieScenePlaybackCapabilitiesInlineInterfaceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146245ae0

uint __thiscall
FMovieScenePlaybackCapabilitiesInlineInterfaceTest::GetRequiredDeviceNum
          (FMovieScenePlaybackCapabilitiesInlineInterfaceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146245af0

FString * __thiscall
FMovieScenePlaybackCapabilitiesInlineInterfaceTest::GetTestSourceFileName
          (FMovieScenePlaybackCapabilitiesInlineInterfaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackCapabilitiesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146245b20

int __thiscall
FMovieScenePlaybackCapabilitiesInlineInterfaceTest::GetTestSourceFileLine
          (FMovieScenePlaybackCapabilitiesInlineInterfaceTest *this)

{
  return 0xa6;
}

// GetTests @ 146245b30

/* WARNING: Removing unreachable block (ram,0x000146245c1d) */
/* WARNING: Removing unreachable block (ram,0x000146245ce8) */

void __thiscall
FMovieScenePlaybackCapabilitiesInlineInterfaceTest::GetTests
          (FMovieScenePlaybackCapabilitiesInlineInterfaceTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Capabilities.InlineInterface");
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

// RunTest @ 146245d10

bool __thiscall
FMovieScenePlaybackCapabilitiesInlineInterfaceTest::RunTest
          (FMovieScenePlaybackCapabilitiesInlineInterfaceTest *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  FTestCapabilityBase *pFVar8;
  ForAnyElementType FVar9;
  FTestCapabilityBase *pFVar10;
  int local_res18 [2];
  FPlaybackCapabilitiesImpl local_158;
  FPlaybackCapabilityPtr local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  void *local_38 [2];
  
  UE::MovieScene::Tests::FTestCapabilityBase::TimesDestroyedBase = 0;
  UE::MovieScene::Tests::FTestCapabilityDerived::TimesDestroyedDerived = 0;
  local_158.Memory = (uchar *)0x0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_158.Alignment = 0;
  local_158.Capacity = 0;
  local_158.Num = '\0';
  local_158.AllCapabilities = 0;
  local_158.Helpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Helpers.ArrayNum = 0;
  local_158.Helpers.ArrayMax = 0;
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase>)
                 UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestCapabilityBase");
    _Init_thread_footer(&::_TSS0);
  }
  uVar2 = local_158.AllCapabilities >> ((uint)::StaticID & 0x1f);
  ::FString::FString(&local_120,"No capability");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar9.Data = local_120.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestFalse
                    ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,(uVar2 & 1) != 0);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    local_res18[0] = 0x2a;
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestCapabilityBase");
      _Init_thread_footer(&::_TSS0);
    }
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    AddCapability<UE::MovieScene::Tests::FTestCapabilityDerived,UE::MovieScene::Tests::FTestCapabilityBase,int,wchar_t_const_(&)[12]>
              (&local_158,&local_130,1 << (::StaticID._0_1_ & 0x1f),local_res18,
               (wchar_t (*) [12])L"Just a test");
    if ((local_130.Ptr == (FTestCapabilityBase *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar10 = local_130.Ptr;
    if (local_130.StorageMode != Inline) {
      if ((local_130.StorageMode == RawPointer) || (local_130.StorageMode == SharedPointer)) {
        pFVar10 = *(FTestCapabilityBase **)local_130.Ptr;
      }
      else {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x44,L"Unexpected playback capability storage mode");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
    }
    iVar6 = (**(code **)(pFVar10->_padding_ + 8))(pFVar10);
    ::FString::FString(&local_110,"Int value");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_110.Data.ArrayNum != 0) {
      FVar9.Data = local_110.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar6,0x2a);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      local_98 = L"Just a test";
      iStack_90 = 0xb;
      puVar7 = (undefined8 *)(**(code **)(pFVar10->_padding_ + 0x10))(pFVar10,local_38);
      local_88 = (wchar_t *)*puVar7;
      iStack_80 = *(int *)(puVar7 + 1) + -1;
      if (*(int *)(puVar7 + 1) == 0) {
        iStack_80 = 0;
      }
      ::FString::FString(&local_100,"String value");
      local_58._12_4_ = uStack_8c;
      local_58.Size = iStack_90;
      local_48._12_4_ = uStack_7c;
      local_48.Size = iStack_80;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_100.Data.ArrayNum != 0) {
        FVar9.Data = local_100.Data.AllocatorInstance.Data;
      }
      local_58.DataPtr = local_98;
      local_48.DataPtr = local_88;
      bVar4 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,&local_48,&local_58);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      if (bVar4) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase>)
                       UE::MovieScene::FPlaybackCapabilityID::Register(L"FTestCapabilityBase");
          _Init_thread_footer(&::_TSS0);
        }
        uVar2 = local_158.AllCapabilities >> ((uint)::StaticID & 0x1f);
        ::FString::FString(&local_f0,"Found capability");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_f0.Data.ArrayNum != 0) {
          FVar9.Data = local_f0.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,(uVar2 & 1) != 0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pFVar8 = UE::MovieScene::FPlaybackCapabilities::
                   FindCapability<UE::MovieScene::Tests::FTestCapabilityBase>
                             ((FPlaybackCapabilities *)&local_158);
          ::FString::FString(&local_e0,"Retrived interface capacity");
          if (pFVar8 == (FTestCapabilityBase *)0x0) {
            pcVar3 = *(code **)(*(longlong *)this + 0x28);
            ::FString::PrintfImpl(&local_78,L"Expected \'%s\' to be not null.");
            (*pcVar3)(this,&local_78,0);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (!bVar4) {
            ::FString::FString(&local_d0,"Same capacity?");
            if (pFVar8 == pFVar10) {
              bVar4 = false;
            }
            else {
              pcVar3 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
              (*pcVar3)(this,&local_68,0);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
            }
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
            if (!bVar4) {
              UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities
                        ((FPlaybackCapabilities *)&local_158);
              iVar6 = UE::MovieScene::Tests::FTestCapabilityBase::TimesDestroyedBase;
              ::FString::FString(&local_c0,"Times destroyed");
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_c0.Data.ArrayNum != 0) {
                FVar9.Data = local_c0.Data.AllocatorInstance.Data;
              }
              bVar4 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar6,1);
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
              iVar6 = UE::MovieScene::Tests::FTestCapabilityDerived::TimesDestroyedDerived;
              if (!bVar4) {
                return false;
              }
              ::FString::FString(&local_b0,"Times destroyed");
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_b0.Data.ArrayNum != 0) {
                FVar9.Data = local_b0.Data.AllocatorInstance.Data;
              }
              bVar4 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar6,1);
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                return bVar4;
              }
              return bVar4;
            }
          }
        }
      }
    }
  }
  UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities((FPlaybackCapabilities *)&local_158)
  ;
  return false;
}

// GetBeautifiedTestName @ 146246260

FString * __thiscall
FMovieScenePlaybackCapabilitiesInlineInterfaceTest::GetBeautifiedTestName
          (FMovieScenePlaybackCapabilitiesInlineInterfaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Capabilities.InlineInterface");
  return __return_storage_ptr__;
}

