// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 8

// GetTestFlags @ 14ad16b40

EAutomationTestFlags __thiscall
FCameraShakeSingleInstanceRestartTest::GetTestFlags(FCameraShakeSingleInstanceRestartTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ad16b50

bool __thiscall
FCameraShakeSingleInstanceRestartTest::IsStressTest(FCameraShakeSingleInstanceRestartTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ad16b60

uint __thiscall
FCameraShakeSingleInstanceRestartTest::GetRequiredDeviceNum
          (FCameraShakeSingleInstanceRestartTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ad16b70

FString * __thiscall
FCameraShakeSingleInstanceRestartTest::GetTestSourceFileName
          (FCameraShakeSingleInstanceRestartTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Tests\\CameraShakeTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ad16ba0

int __thiscall
FCameraShakeSingleInstanceRestartTest::GetTestSourceFileLine
          (FCameraShakeSingleInstanceRestartTest *this)

{
  return 0x53;
}

// GetTests @ 14ad16bb0

/* WARNING: Removing unreachable block (ram,0x00014ad16c9d) */
/* WARNING: Removing unreachable block (ram,0x00014ad16d68) */

void __thiscall
FCameraShakeSingleInstanceRestartTest::GetTests
          (FCameraShakeSingleInstanceRestartTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Cameras.SingleInstanceShakeRestart");
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

// RunTest @ 14ad16d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
FCameraShakeSingleInstanceRestartTest::RunTest
          (FCameraShakeSingleInstanceRestartTest *this,FString *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UCameraShakeBase *this_00;
  wchar_t *pwVar7;
  longlong *plVar8;
  undefined1 auStackY_a78 [32];
  TRotator<double> local_a48;
  undefined1 local_a28 [128];
  undefined1 local_9a8 [128];
  TVector<double>_u_0 local_928;
  double local_910;
  double dStack_908;
  double local_900;
  void *local_150;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_a78;
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UDefaultCameraShakeBase::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a28,pUVar6);
  local_a28._8_8_ = pUVar5;
  this_00 = (UCameraShakeBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a28);
  if (local_a28._64_8_ != 0) {
    plVar8 = (longlong *)(local_a28 + 0x50);
    if ((longlong *)local_a28._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_a28._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this_00,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UWaveOscillatorCameraShakePattern::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_9a8,pUVar6);
  local_9a8._8_8_ = this_00;
  pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_9a8);
  if (local_9a8._64_8_ != 0) {
    plVar8 = (longlong *)(local_9a8 + 0x50);
    if ((longlong *)local_9a8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_9a8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  UCameraShakeBase::SetRootShakePattern(this_00,(UCameraShakePattern *)pUVar5);
  *(undefined4 *)&pUVar5[1].field_0x4 = 0x3f800000;
  *(undefined4 *)&pUVar5[1].field_0x8 = 0x40000000;
  *(undefined4 *)(pUVar5 + 1) = 0x40a00000;
  *(undefined4 *)&pUVar5[2].field_0x10 = 0x41000000;
  *(undefined4 *)&pUVar5[2].field_0x14 = 0x3f800000;
  pUVar5[2].field_0x18 = 1;
  this_00->bSingleInstance = true;
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_928._s_0);
  fVar1 = __real_3f800000;
  local_a48.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_a48.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_a48.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  UCameraShakeBase::StartShake
            (this_00,(APlayerCameraManager *)0x0,__real_3f800000,CameraLocal,&local_a48);
  fVar2 = __real_3e800000;
  local_928._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_928._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_928._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_910 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_908 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_900 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  UCameraShakeBase::UpdateAndApplyCameraShake
            (this_00,__real_3e800000,fVar1,(FMinimalViewInfo *)&local_928._s_0);
  ::FString::FString((FString *)&local_a48,"First update");
  dVar3 = __real_3f1a36e2e0000000;
  pwVar7 = L"";
  if (local_a48.Yaw._0_4_ != 0) {
    pwVar7 = (wchar_t *)local_a48.Pitch;
  }
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,pwVar7,local_928._s_0.X,__real_4000000000000000,
                     __real_3f1a36e2e0000000);
  if ((wchar_t *)local_a48.Pitch != (wchar_t *)0x0) {
    FMemory::Free((void *)local_a48.Pitch);
  }
  if (bVar4) {
    local_928._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_928._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_928._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_910 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_908 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_900 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    UCameraShakeBase::UpdateAndApplyCameraShake
              (this_00,fVar2,fVar1,(FMinimalViewInfo *)&local_928._s_0);
    ::FString::FString((FString *)&local_a48,"Second update");
    pwVar7 = L"";
    if (local_a48.Yaw._0_4_ != 0) {
      pwVar7 = (wchar_t *)local_a48.Pitch;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,pwVar7,local_928._s_0.X,__real_be9777a5c0000000,
                       dVar3);
    if ((wchar_t *)local_a48.Pitch != (wchar_t *)0x0) {
      FMemory::Free((void *)local_a48.Pitch);
    }
    if (bVar4) {
      local_928._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_928._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_928._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_910 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      dStack_908 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_900 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      UCameraShakeBase::UpdateAndApplyCameraShake
                (this_00,__real_3f000000,fVar1,(FMinimalViewInfo *)&local_928._s_0);
      ::FString::FString((FString *)&local_a48,"Third update");
      pwVar7 = L"";
      if (local_a48.Yaw._0_4_ != 0) {
        pwVar7 = (wchar_t *)local_a48.Pitch;
      }
      bVar4 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,pwVar7,local_928._s_0.X,__real_3eb777a5c0000000
                         ,dVar3);
      if ((wchar_t *)local_a48.Pitch != (wchar_t *)0x0) {
        FMemory::Free((void *)local_a48.Pitch);
      }
      if (bVar4) {
        local_928._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_928._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_928._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_910 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        dStack_908 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_900 = UE::Math::TRotator<double>::ZeroRotator.Roll;
        UCameraShakeBase::UpdateAndApplyCameraShake
                  (this_00,__real_40400000,fVar1,(FMinimalViewInfo *)&local_928._s_0);
        ::FString::FString((FString *)&local_a48,"Fourth update");
        pwVar7 = L"";
        if (local_a48.Yaw._0_4_ != 0) {
          pwVar7 = (wchar_t *)local_a48.Pitch;
        }
        bVar4 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,pwVar7,local_928._s_0.X,
                           __real_3ec777a5c0000000,dVar3);
        if ((wchar_t *)local_a48.Pitch != (wchar_t *)0x0) {
          FMemory::Free((void *)local_a48.Pitch);
        }
        if (bVar4) {
          local_a48.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          local_a48.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          local_a48.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
          UCameraShakeBase::StartShake
                    (this_00,(APlayerCameraManager *)0x0,fVar1,CameraLocal,&local_a48);
          local_928._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_928._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_928._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_910 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          dStack_908 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          local_900 = UE::Math::TRotator<double>::ZeroRotator.Roll;
          UCameraShakeBase::UpdateAndApplyCameraShake
                    (this_00,fVar2,fVar1,(FMinimalViewInfo *)&local_928._s_0);
          ::FString::FString((FString *)&local_a48,"Fifth update");
          pwVar7 = L"";
          if (local_a48.Yaw._0_4_ != 0) {
            pwVar7 = (wchar_t *)local_a48.Pitch;
          }
          bVar4 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,pwVar7,local_928._s_0.X,
                             __real_4018000000000000,dVar3);
          if ((wchar_t *)local_a48.Pitch != (wchar_t *)0x0) {
            FMemory::Free((void *)local_a48.Pitch);
          }
          if (bVar4) {
            local_928._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_910 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            dStack_908 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            local_900 = UE::Math::TRotator<double>::ZeroRotator.Roll;
            local_928._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_928._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            UCameraShakeBase::UpdateAndApplyCameraShake
                      (this_00,fVar2,fVar1,(FMinimalViewInfo *)&local_928._s_0);
            ::FString::FString((FString *)&local_a48,"Sixth update");
            pwVar7 = L"";
            if (local_a48.Yaw._0_4_ != 0) {
              pwVar7 = (wchar_t *)local_a48.Pitch;
            }
            bVar4 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,pwVar7,local_928._s_0.X,
                               __real_bea777a5c0000000,dVar3);
            if ((wchar_t *)local_a48.Pitch != (wchar_t *)0x0) {
              FMemory::Free((void *)local_a48.Pitch);
            }
            if (bVar4) {
              bVar4 = true;
              goto LAB_14ad172e3;
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_14ad172e3:
  if (local_150 != (void *)0x0) {
    FMemory::Free(local_150);
  }
  return bVar4;
}

// GetBeautifiedTestName @ 14ad17340

FString * __thiscall
FCameraShakeSingleInstanceRestartTest::GetBeautifiedTestName
          (FCameraShakeSingleInstanceRestartTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Cameras.SingleInstanceShakeRestart");
  return __return_storage_ptr__;
}

