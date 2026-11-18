// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 8

// GetTestFlags @ 14ad1c100

EAutomationTestFlags __thiscall
FCameraShakeStateRestart::GetTestFlags(FCameraShakeStateRestart *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ad1c110

bool __thiscall FCameraShakeStateRestart::IsStressTest(FCameraShakeStateRestart *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ad1c120

uint __thiscall FCameraShakeStateRestart::GetRequiredDeviceNum(FCameraShakeStateRestart *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ad1c130

FString * __thiscall
FCameraShakeStateRestart::GetTestSourceFileName
          (FCameraShakeStateRestart *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Tests\\CameraShakeStateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ad1c160

int __thiscall FCameraShakeStateRestart::GetTestSourceFileLine(FCameraShakeStateRestart *this)

{
  return 0x1e;
}

// GetTests @ 14ad1c170

/* WARNING: Removing unreachable block (ram,0x00014ad1c25d) */
/* WARNING: Removing unreachable block (ram,0x00014ad1c328) */

void __thiscall
FCameraShakeStateRestart::GetTests
          (FCameraShakeStateRestart *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Cameras.ShakeStateRestart");
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

// RunTest @ 14ad1c350

bool __thiscall FCameraShakeStateRestart::RunTest(FCameraShakeStateRestart *this,FString *param_1)

{
  code *pcVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  ForAnyElementType FVar7;
  float fVar8;
  uint uStackX_1c;
  FCameraShakeInfo local_f8;
  FCameraShakeInfo local_e8;
  FCameraShakeState local_d8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FCameraShakeState local_58 [2];
  
  fVar4 = __real_3f800000;
  uVar2 = uStackX_1c >> 8;
  uStackX_1c = uVar2 << 8;
  local_f8.Duration._4_4_ = uStackX_1c;
  local_f8.Duration.Duration = 1.0;
  local_f8.BlendIn = 0.0;
  local_f8.BlendOut = 0.0;
  FCameraShakeState::FCameraShakeState(local_58);
  FCameraShakeState::Start(local_58,&local_f8);
  FCameraShakeState::Update(local_58,__real_3f000000);
  FCameraShakeState::Start(local_58,&local_f8);
  ::FString::FString(&local_b8,"ElapsedTime");
  fVar3 = __real_38d1b717;
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar7.Data = local_b8.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,local_58[0].ElapsedTime,0.0,
                     __real_38d1b717);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    uStackX_1c = uVar2 << 8;
    local_e8.Duration._4_4_ = uStackX_1c;
    local_e8.Duration.Duration = 1.0;
    local_e8.BlendIn = 0.2;
    local_e8.BlendOut = 0.3;
    FCameraShakeState::FCameraShakeState(&local_d8);
    FCameraShakeState::Start(&local_d8,&local_e8);
    fVar8 = FCameraShakeState::Update(&local_d8,__real_3f59999a);
    ::FString::FString(&local_a8,"Update");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar7.Data = local_a8.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,fVar8,__real_3f000000,fVar3
                      );
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      FCameraShakeState::Start(&local_d8,&local_e8);
      ::FString::FString(&local_98,"BlendingIn");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar7.Data = local_98.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,local_d8.bIsBlendingIn);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        ::FString::FString(&local_88,"BlendingInTime");
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar7.Data = local_88.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,
                           local_d8.CurrentBlendInTime,__real_3dcccccd,fVar3);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          ::FString::FString(&local_78,"ElapsedTime");
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar7.Data = local_78.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,local_d8.ElapsedTime,
                             0.0,fVar3);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            if (((local_d8.ShakeInfo.Duration.Type & ~Custom) != Fixed) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type == ECameraShakeDurationType::Fixed || Type == ECameraShakeDurationType::Custom"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Camera\\CameraShakeBase.h"
                                   ,0xf1,L""), bVar5)) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
            ::FString::FString(&local_68,"Duration");
            FVar7.Data = (FScriptContainerElement *)L"";
            if (local_68.Data.ArrayNum != 0) {
              FVar7.Data = local_68.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,
                               local_d8.ShakeInfo.Duration.Duration,fVar4,fVar3);
            if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return bVar5;
            }
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
            return bVar5;
          }
        }
      }
    }
  }
  return false;
}

// GetBeautifiedTestName @ 14ad1c680

FString * __thiscall
FCameraShakeStateRestart::GetBeautifiedTestName
          (FCameraShakeStateRestart *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Cameras.ShakeStateRestart");
  return __return_storage_ptr__;
}

