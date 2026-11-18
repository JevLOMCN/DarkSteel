// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 8

// GetTestFlags @ 14ad18bf0

EAutomationTestFlags __thiscall
FCameraShakeImmediatelyStopInfiniteTest::GetTestFlags(FCameraShakeImmediatelyStopInfiniteTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ad18c00

bool __thiscall
FCameraShakeImmediatelyStopInfiniteTest::IsStressTest(FCameraShakeImmediatelyStopInfiniteTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ad18c10

uint __thiscall
FCameraShakeImmediatelyStopInfiniteTest::GetRequiredDeviceNum
          (FCameraShakeImmediatelyStopInfiniteTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ad18c20

FString * __thiscall
FCameraShakeImmediatelyStopInfiniteTest::GetTestSourceFileName
          (FCameraShakeImmediatelyStopInfiniteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Tests\\CameraShakeTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ad18c50

int __thiscall
FCameraShakeImmediatelyStopInfiniteTest::GetTestSourceFileLine
          (FCameraShakeImmediatelyStopInfiniteTest *this)

{
  return 0x136;
}

// GetTests @ 14ad18c60

/* WARNING: Removing unreachable block (ram,0x00014ad18d4d) */
/* WARNING: Removing unreachable block (ram,0x00014ad18e18) */

void __thiscall
FCameraShakeImmediatelyStopInfiniteTest::GetTests
          (FCameraShakeImmediatelyStopInfiniteTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Cameras.ImmediatelyStopInfiniteCameraShake");
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

// RunTest @ 14ad18e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FCameraShakeImmediatelyStopInfiniteTest::RunTest
          (FCameraShakeImmediatelyStopInfiniteTest *this,FString *param_1)

{
  float fVar1;
  bool bVar2;
  UObject *pUVar3;
  UCameraShakeBase *this_00;
  UConstantCameraShakePattern *pUVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_9a8 [32];
  TRotator<double> local_978;
  TVector<double>_u_0 local_958;
  TVector<double>_u_0 local_938;
  TVector<double>_u_0 local_918;
  double local_900;
  double dStack_8f8;
  double local_8f0;
  void *local_140;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9a8;
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_918._s_0);
  local_918._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_918._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_918._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_8f0 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_900 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_8f8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  pUVar3 = GetTransientPackageAsObject();
  this_00 = (UCameraShakeBase *)NewObject<UTestCameraShake>(pUVar3);
  pUVar4 = NewObject<UConstantCameraShakePattern>((UObject *)this_00);
  UCameraShakeBase::SetRootShakePattern(this_00,(UCameraShakePattern *)pUVar4);
  *(undefined4 *)&pUVar4->_padding_ = 0xbf800000;
  (pUVar4->LocationOffset).field0_0x0._s_0.X = 10.0;
  (pUVar4->LocationOffset).field0_0x0._s_0.Y = 0.0;
  (pUVar4->LocationOffset).field0_0x0._s_0.Z = 0.0;
  local_978.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_978.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_978.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  UCameraShakeBase::StartShake
            (this_00,(APlayerCameraManager *)0x0,__real_3f800000,CameraLocal,&local_978);
  bVar2 = UCameraShakeBase::IsFinished(this_00);
  ::FString::FString((FString *)&local_978,"Infinite shake is running");
  pwVar5 = L"";
  if (local_978.Yaw._0_4_ != 0) {
    pwVar5 = (wchar_t *)local_978.Pitch;
  }
  bVar2 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar5,bVar2);
  if ((wchar_t *)local_978.Pitch != (wchar_t *)0x0) {
    FMemory::Free((void *)local_978.Pitch);
  }
  if (bVar2) {
    bVar2 = this_00->bIsActive;
    ::FString::FString((FString *)&local_978,"Infinite shake is active");
    pwVar5 = L"";
    if (local_978.Yaw._0_4_ != 0) {
      pwVar5 = (wchar_t *)local_978.Pitch;
    }
    bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar5,bVar2);
    if ((wchar_t *)local_978.Pitch != (wchar_t *)0x0) {
      FMemory::Free((void *)local_978.Pitch);
    }
    if (bVar2) {
      local_918._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_918._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_918._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      UCameraShakeBase::UpdateAndApplyCameraShake
                (this_00,__real_42c60000,__real_3f800000,(FMinimalViewInfo *)&local_918._s_0);
      bVar2 = UCameraShakeBase::IsFinished(this_00);
      ::FString::FString((FString *)&local_978,"Infinite shake is still running");
      pwVar5 = L"";
      if (local_978.Yaw._0_4_ != 0) {
        pwVar5 = (wchar_t *)local_978.Pitch;
      }
      bVar2 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar5,bVar2);
      if ((wchar_t *)local_978.Pitch != (wchar_t *)0x0) {
        FMemory::Free((void *)local_978.Pitch);
      }
      if (bVar2) {
        bVar2 = this_00->bIsActive;
        ::FString::FString((FString *)&local_978,"Infinite shake is still active");
        pwVar5 = L"";
        if (local_978.Yaw._0_4_ != 0) {
          pwVar5 = (wchar_t *)local_978.Pitch;
        }
        bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar5,bVar2);
        if ((wchar_t *)local_978.Pitch != (wchar_t *)0x0) {
          FMemory::Free((void *)local_978.Pitch);
        }
        if (bVar2) {
          ::FString::FString((FString *)&local_978,"Location offset");
          fVar1 = __real_38d1b717;
          pwVar5 = L"";
          if (local_978.Yaw._0_4_ != 0) {
            pwVar5 = (wchar_t *)local_978.Pitch;
          }
          local_958._s_0.X = ___xmm_00000000000000004024000000000000;
          local_958._s_0.Y = _UNK_151444f38;
          local_938._s_0.X = local_918._s_0.X;
          local_938._s_0.Y = local_918._s_0.Y;
          local_958._s_0.Z = 0.0;
          local_938._s_0.Z = local_918._s_0.Z;
          bVar2 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,pwVar5,(TVector<double> *)&local_938._s_0,
                             (TVector<double> *)&local_958._s_0,__real_38d1b717);
          if ((wchar_t *)local_978.Pitch != (wchar_t *)0x0) {
            FMemory::Free((void *)local_978.Pitch);
          }
          if (bVar2) {
            local_918._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_918._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_918._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            UCameraShakeBase::UpdateAndApplyCameraShake
                      (this_00,__real_42c60000,__real_3f800000,(FMinimalViewInfo *)&local_918._s_0);
            bVar2 = UCameraShakeBase::IsFinished(this_00);
            ::FString::FString((FString *)&local_978,"Infinite shake is still running");
            pwVar5 = L"";
            if (local_978.Yaw._0_4_ != 0) {
              pwVar5 = (wchar_t *)local_978.Pitch;
            }
            bVar2 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar5,bVar2);
            if ((wchar_t *)local_978.Pitch != (wchar_t *)0x0) {
              FMemory::Free((void *)local_978.Pitch);
            }
            if (bVar2) {
              bVar2 = this_00->bIsActive;
              ::FString::FString((FString *)&local_978,"Infinite shake is still active");
              pwVar5 = L"";
              if (local_978.Yaw._0_4_ != 0) {
                pwVar5 = (wchar_t *)local_978.Pitch;
              }
              bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar5,bVar2);
              if ((wchar_t *)local_978.Pitch != (wchar_t *)0x0) {
                FMemory::Free((void *)local_978.Pitch);
              }
              if (bVar2) {
                ::FString::FString((FString *)&local_978,"Location offset");
                pwVar5 = L"";
                if (local_978.Yaw._0_4_ != 0) {
                  pwVar5 = (wchar_t *)local_978.Pitch;
                }
                local_938._s_0.X = ___xmm_00000000000000004024000000000000;
                local_938._s_0.Y = _UNK_151444f38;
                local_958._s_0.X = local_918._s_0.X;
                local_958._s_0.Y = local_918._s_0.Y;
                local_938._s_0.Z = 0.0;
                local_958._s_0.Z = local_918._s_0.Z;
                bVar2 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,pwVar5,
                                   (TVector<double> *)&local_958._s_0,
                                   (TVector<double> *)&local_938._s_0,fVar1);
                if ((wchar_t *)local_978.Pitch != (wchar_t *)0x0) {
                  FMemory::Free((void *)local_978.Pitch);
                }
                if (bVar2) {
                  UCameraShakeBase::StopShake(this_00,true);
                  bVar2 = UCameraShakeBase::IsFinished(this_00);
                  ::FString::FString((FString *)&local_978,"Infinite shake is finished");
                  pwVar5 = L"";
                  if (local_978.Yaw._0_4_ != 0) {
                    pwVar5 = (wchar_t *)local_978.Pitch;
                  }
                  bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar5,bVar2);
                  if ((wchar_t *)local_978.Pitch != (wchar_t *)0x0) {
                    FMemory::Free((void *)local_978.Pitch);
                  }
                  if (bVar2) {
                    bVar2 = true;
                    goto LAB_14ad192ce;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_14ad192ce:
  if (local_140 != (void *)0x0) {
    FMemory::Free(local_140);
  }
  return bVar2;
}

// GetBeautifiedTestName @ 14ad19330

FString * __thiscall
FCameraShakeImmediatelyStopInfiniteTest::GetBeautifiedTestName
          (FCameraShakeImmediatelyStopInfiniteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Cameras.ImmediatelyStopInfiniteCameraShake");
  return __return_storage_ptr__;
}

