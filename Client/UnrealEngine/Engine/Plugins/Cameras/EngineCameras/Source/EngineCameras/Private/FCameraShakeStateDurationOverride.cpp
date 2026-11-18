// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 8

// GetTestFlags @ 14ad14af0

EAutomationTestFlags __thiscall
FCameraShakeStateDurationOverride::GetTestFlags(FCameraShakeStateDurationOverride *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ad14b00

bool __thiscall
FCameraShakeStateDurationOverride::IsStressTest(FCameraShakeStateDurationOverride *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ad14b10

uint __thiscall
FCameraShakeStateDurationOverride::GetRequiredDeviceNum(FCameraShakeStateDurationOverride *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ad14b20

FString * __thiscall
FCameraShakeStateDurationOverride::GetTestSourceFileName
          (FCameraShakeStateDurationOverride *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Tests\\CameraShakeStateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ad14b50

int __thiscall
FCameraShakeStateDurationOverride::GetTestSourceFileLine(FCameraShakeStateDurationOverride *this)

{
  return 0x68;
}

// GetTests @ 14ad14b60

/* WARNING: Removing unreachable block (ram,0x00014ad14c4d) */
/* WARNING: Removing unreachable block (ram,0x00014ad14d18) */

void __thiscall
FCameraShakeStateDurationOverride::GetTests
          (FCameraShakeStateDurationOverride *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Cameras.ShakeStateDurationOverride");
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

// RunTest @ 14ad14d40

bool __thiscall
FCameraShakeStateDurationOverride::RunTest(FCameraShakeStateDurationOverride *this,FString *param_1)

{
  float fVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  float fVar4;
  float fVar5;
  undefined4 local_res18;
  uint uStackX_1c;
  FCameraShakeInfo local_78;
  FString local_68;
  FCameraShakeState local_58 [2];
  
  local_res18 = 0x3f800000;
  uStackX_1c = uStackX_1c & 0xffffff00;
  local_78.Duration._4_4_ = uStackX_1c;
  local_78.Duration.Duration = 1.0;
  local_78.BlendIn = 0.2;
  local_78.BlendOut = 0.2;
  FCameraShakeState::FCameraShakeState(local_58);
  local_res18 = 0x3f000000;
  uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
  FCameraShakeState::Start(local_58,&local_78,(TOptional<float>)&local_res18);
  fVar5 = __real_3dcccccd;
  fVar4 = FCameraShakeState::Update(local_58,__real_3dcccccd);
  ::FString::FString(&local_68,"Update 1");
  fVar1 = __real_38d1b717;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar3.Data = local_68.Data.AllocatorInstance.Data;
  }
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,fVar4,__real_3f000000,
                     __real_38d1b717);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    bVar2 = ZPULL(local_58[0],2,1);
    ::FString::FString(&local_68,"Update 1");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar3.Data = local_68.Data.AllocatorInstance.Data;
    }
    bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,bVar2);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      fVar4 = FCameraShakeState::Update(local_58,fVar5);
      ::FString::FString(&local_68,"Update 2");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar3.Data = local_68.Data.AllocatorInstance.Data;
      }
      bVar2 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,fVar4,__real_3f800000,
                         fVar1);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        bVar2 = ZPULL(local_58[0],2,1);
        ::FString::FString(&local_68,"Update 2");
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar3.Data = local_68.Data.AllocatorInstance.Data;
        }
        bVar2 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,bVar2);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          fVar4 = FCameraShakeState::Update(local_58,fVar5);
          ::FString::FString(&local_68,"Update 3");
          FVar3.Data = (FScriptContainerElement *)L"";
          if (local_68.Data.ArrayNum != 0) {
            FVar3.Data = local_68.Data.AllocatorInstance.Data;
          }
          bVar2 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,fVar4,__real_3f800000
                             ,fVar1);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (bVar2) {
            bVar2 = ZPULL(local_58[0],2,1);
            ::FString::FString(&local_68,"Update 3");
            FVar3.Data = (FScriptContainerElement *)L"";
            if (local_68.Data.ArrayNum != 0) {
              FVar3.Data = local_68.Data.AllocatorInstance.Data;
            }
            bVar2 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,bVar2);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            if (bVar2) {
              fVar4 = FCameraShakeState::Update(local_58,fVar5);
              ::FString::FString(&local_68,"Update 4");
              FVar3.Data = (FScriptContainerElement *)L"";
              if (local_68.Data.ArrayNum != 0) {
                FVar3.Data = local_68.Data.AllocatorInstance.Data;
              }
              bVar2 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,fVar4,
                                 __real_3f000000,fVar1);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (bVar2) {
                bVar2 = ZPULL(local_58[0],2,1);
                ::FString::FString(&local_68,"Update 4");
                FVar3.Data = (FScriptContainerElement *)L"";
                if (local_68.Data.ArrayNum != 0) {
                  FVar3.Data = local_68.Data.AllocatorInstance.Data;
                }
                bVar2 = FAutomationTestBase::TestTrue
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,bVar2);
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
                if (bVar2) {
                  fVar5 = FCameraShakeState::Update(local_58,fVar5);
                  ::FString::FString(&local_68,"Update 5");
                  FVar3.Data = (FScriptContainerElement *)L"";
                  if (local_68.Data.ArrayNum != 0) {
                    FVar3.Data = local_68.Data.AllocatorInstance.Data;
                  }
                  bVar2 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,fVar5,0.0,
                                     fVar1);
                  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_68.Data.AllocatorInstance.Data);
                  }
                  if (bVar2) {
                    ::FString::FString(&local_68,"Update 5");
                    FVar3.Data = (FScriptContainerElement *)L"";
                    if (local_68.Data.ArrayNum != 0) {
                      FVar3.Data = local_68.Data.AllocatorInstance.Data;
                    }
                    bVar2 = FAutomationTestBase::TestFalse
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,
                                       ZPULL(local_58[0],2,1));
                    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                      return bVar2;
                    }
                    FMemory::Free(local_68.Data.AllocatorInstance.Data);
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
  return false;
}

// GetBeautifiedTestName @ 14ad15140

FString * __thiscall
FCameraShakeStateDurationOverride::GetBeautifiedTestName
          (FCameraShakeStateDurationOverride *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Cameras.ShakeStateDurationOverride");
  return __return_storage_ptr__;
}

