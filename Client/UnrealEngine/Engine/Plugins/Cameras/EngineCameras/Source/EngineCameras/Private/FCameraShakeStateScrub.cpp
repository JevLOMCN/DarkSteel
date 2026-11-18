// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 8

// GetTestFlags @ 14ad14390

EAutomationTestFlags __thiscall FCameraShakeStateScrub::GetTestFlags(FCameraShakeStateScrub *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ad143a0

bool __thiscall FCameraShakeStateScrub::IsStressTest(FCameraShakeStateScrub *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ad143b0

uint __thiscall FCameraShakeStateScrub::GetRequiredDeviceNum(FCameraShakeStateScrub *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ad143c0

FString * __thiscall
FCameraShakeStateScrub::GetTestSourceFileName
          (FCameraShakeStateScrub *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Tests\\CameraShakeStateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ad143f0

int __thiscall FCameraShakeStateScrub::GetTestSourceFileLine(FCameraShakeStateScrub *this)

{
  return 0x46;
}

// GetTests @ 14ad14400

/* WARNING: Removing unreachable block (ram,0x00014ad144ed) */
/* WARNING: Removing unreachable block (ram,0x00014ad145b8) */

void __thiscall
FCameraShakeStateScrub::GetTests
          (FCameraShakeStateScrub *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Cameras.ShakeStateScrub");
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

// RunTest @ 14ad145e0

bool __thiscall FCameraShakeStateScrub::RunTest(FCameraShakeStateScrub *this,FString *param_1)

{
  float fVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  float fVar4;
  uint uStackX_1c;
  FCameraShakeInfo local_68;
  FString local_58;
  FCameraShakeState local_48 [2];
  
  uStackX_1c = uStackX_1c & 0xffffff00;
  local_68.Duration._4_4_ = uStackX_1c;
  local_68.Duration.Duration = 1.0;
  local_68.BlendIn = 0.2;
  local_68.BlendOut = 0.2;
  FCameraShakeState::FCameraShakeState(local_48);
  FCameraShakeState::Start(local_48,&local_68);
  fVar4 = FCameraShakeState::Scrub(local_48,__real_3dcccccd);
  ::FString::FString(&local_58,"Scrub 1");
  fVar1 = __real_38d1b717;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
  }
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,fVar4,__real_3f000000,
                     __real_38d1b717);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    bVar2 = ZPULL(local_48[0],2,1);
    ::FString::FString(&local_58,"Scrub 1");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar3.Data = local_58.Data.AllocatorInstance.Data;
    }
    bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,bVar2);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      fVar4 = FCameraShakeState::Scrub(local_48,__real_3ecccccd);
      ::FString::FString(&local_58,"Scrub 2");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar3.Data = local_58.Data.AllocatorInstance.Data;
      }
      bVar2 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,fVar4,__real_3f800000,
                         fVar1);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        bVar2 = ZPULL(local_48[0],2,1);
        ::FString::FString(&local_58,"Scrub 2");
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar3.Data = local_58.Data.AllocatorInstance.Data;
        }
        bVar2 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,bVar2);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          fVar4 = FCameraShakeState::Scrub(local_48,__real_bf800000);
          ::FString::FString(&local_58,"Scrub 3");
          FVar3.Data = (FScriptContainerElement *)L"";
          if (local_58.Data.ArrayNum != 0) {
            FVar3.Data = local_58.Data.AllocatorInstance.Data;
          }
          bVar2 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,fVar4,0.0,fVar1);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (bVar2) {
            bVar2 = ZPULL(local_48[0],2,1);
            ::FString::FString(&local_58,"Scrub 3");
            FVar3.Data = (FScriptContainerElement *)L"";
            if (local_58.Data.ArrayNum != 0) {
              FVar3.Data = local_58.Data.AllocatorInstance.Data;
            }
            bVar2 = FAutomationTestBase::TestFalse
                              ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,bVar2);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (bVar2) {
              fVar4 = FCameraShakeState::Scrub(local_48,__real_3e4ccccd);
              ::FString::FString(&local_58,"Scrub 4");
              FVar3.Data = (FScriptContainerElement *)L"";
              if (local_58.Data.ArrayNum != 0) {
                FVar3.Data = local_58.Data.AllocatorInstance.Data;
              }
              bVar2 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,fVar4,
                                 __real_3f800000,fVar1);
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (bVar2) {
                bVar2 = ZPULL(local_48[0],2,1);
                ::FString::FString(&local_58,"Scrub 4");
                FVar3.Data = (FScriptContainerElement *)L"";
                if (local_58.Data.ArrayNum != 0) {
                  FVar3.Data = local_58.Data.AllocatorInstance.Data;
                }
                bVar2 = FAutomationTestBase::TestTrue
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,bVar2);
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                if (bVar2) {
                  fVar4 = FCameraShakeState::Scrub(local_48,__real_40000000);
                  ::FString::FString(&local_58,"Scrub 5");
                  FVar3.Data = (FScriptContainerElement *)L"";
                  if (local_58.Data.ArrayNum != 0) {
                    FVar3.Data = local_58.Data.AllocatorInstance.Data;
                  }
                  bVar2 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,fVar4,0.0,
                                     fVar1);
                  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_58.Data.AllocatorInstance.Data);
                  }
                  if (bVar2) {
                    bVar2 = ZPULL(local_48[0],2,1);
                    ::FString::FString(&local_58,"Scrub 5");
                    FVar3.Data = (FScriptContainerElement *)L"";
                    if (local_58.Data.ArrayNum != 0) {
                      FVar3.Data = local_58.Data.AllocatorInstance.Data;
                    }
                    bVar2 = FAutomationTestBase::TestFalse
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,bVar2);
                    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_58.Data.AllocatorInstance.Data);
                    }
                    if (bVar2) {
                      fVar4 = FCameraShakeState::Scrub(local_48,__real_3f666666);
                      ::FString::FString(&local_58,"Scrub 6");
                      FVar3.Data = (FScriptContainerElement *)L"";
                      if (local_58.Data.ArrayNum != 0) {
                        FVar3.Data = local_58.Data.AllocatorInstance.Data;
                      }
                      bVar2 = FAutomationTestBase::TestEqual
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,fVar4,
                                         __real_3f000000,fVar1);
                      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_58.Data.AllocatorInstance.Data);
                      }
                      if (bVar2) {
                        ::FString::FString(&local_58,"Scrub 6");
                        FVar3.Data = (FScriptContainerElement *)L"";
                        if (local_58.Data.ArrayNum != 0) {
                          FVar3.Data = local_58.Data.AllocatorInstance.Data;
                        }
                        bVar2 = FAutomationTestBase::TestTrue
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,
                                           ZPULL(local_48[0],2,1));
                        if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                        {
                          return bVar2;
                        }
                        FMemory::Free(local_58.Data.AllocatorInstance.Data);
                        return bVar2;
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
  }
  return false;
}

// GetBeautifiedTestName @ 14ad14a80

FString * __thiscall
FCameraShakeStateScrub::GetBeautifiedTestName
          (FCameraShakeStateScrub *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Cameras.ShakeStateScrub");
  return __return_storage_ptr__;
}

