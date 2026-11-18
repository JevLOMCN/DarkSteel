// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 8

// GetTestFlags @ 14ad19520

EAutomationTestFlags __thiscall
FCameraShakeBlendOutInfiniteTest::GetTestFlags(FCameraShakeBlendOutInfiniteTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ad19530

bool __thiscall
FCameraShakeBlendOutInfiniteTest::IsStressTest(FCameraShakeBlendOutInfiniteTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ad19540

uint __thiscall
FCameraShakeBlendOutInfiniteTest::GetRequiredDeviceNum(FCameraShakeBlendOutInfiniteTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ad19550

FString * __thiscall
FCameraShakeBlendOutInfiniteTest::GetTestSourceFileName
          (FCameraShakeBlendOutInfiniteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Tests\\CameraShakeTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ad19580

int __thiscall
FCameraShakeBlendOutInfiniteTest::GetTestSourceFileLine(FCameraShakeBlendOutInfiniteTest *this)

{
  return 0x158;
}

// GetTests @ 14ad19590

/* WARNING: Removing unreachable block (ram,0x00014ad1967d) */
/* WARNING: Removing unreachable block (ram,0x00014ad19748) */

void __thiscall
FCameraShakeBlendOutInfiniteTest::GetTests
          (FCameraShakeBlendOutInfiniteTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Cameras.BlendOutInfiniteCameraShake");
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

// RunTest @ 14ad19770

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
FCameraShakeBlendOutInfiniteTest::RunTest(FCameraShakeBlendOutInfiniteTest *this,FString *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  UObject *pUVar4;
  UCameraShakeBase *this_00;
  UConstantCameraShakePattern *pUVar5;
  wchar_t *pwVar6;
  undefined1 auStackY_9b8 [32];
  TRotator<double> local_988;
  TVector<double>_u_0 local_968;
  TVector<double>_u_0 local_948;
  TVector<double>_u_0 local_928;
  double local_910;
  double dStack_908;
  double local_900;
  void *local_150;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_9b8;
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_928._s_0);
  local_928._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_928._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_928._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_900 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_910 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_908 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  pUVar4 = GetTransientPackageAsObject();
  this_00 = (UCameraShakeBase *)NewObject<UTestCameraShake>(pUVar4);
  pUVar5 = NewObject<UConstantCameraShakePattern>((UObject *)this_00);
  UCameraShakeBase::SetRootShakePattern(this_00,(UCameraShakePattern *)pUVar5);
  *(undefined4 *)&pUVar5->_padding_ = 0xbf800000;
  (pUVar5->LocationOffset).field0_0x0._s_0.X = 10.0;
  (pUVar5->LocationOffset).field0_0x0._s_0.Y = 0.0;
  (pUVar5->LocationOffset).field0_0x0._s_0.Z = 0.0;
  fVar2 = __real_3f800000;
  *(undefined4 *)&pUVar5->_padding_ = 0x3f800000;
  local_988.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_988.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_988.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  UCameraShakeBase::StartShake(this_00,(APlayerCameraManager *)0x0,fVar2,CameraLocal,&local_988);
  bVar3 = UCameraShakeBase::IsFinished(this_00);
  ::FString::FString((FString *)&local_988,"Infinite shake is running");
  pwVar6 = L"";
  if (local_988.Yaw._0_4_ != 0) {
    pwVar6 = (wchar_t *)local_988.Pitch;
  }
  bVar3 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar3);
  if ((wchar_t *)local_988.Pitch != (wchar_t *)0x0) {
    FMemory::Free((void *)local_988.Pitch);
  }
  if (bVar3) {
    bVar3 = this_00->bIsActive;
    ::FString::FString((FString *)&local_988,"Infinite shake is active");
    pwVar6 = L"";
    if (local_988.Yaw._0_4_ != 0) {
      pwVar6 = (wchar_t *)local_988.Pitch;
    }
    bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar3);
    if ((wchar_t *)local_988.Pitch != (wchar_t *)0x0) {
      FMemory::Free((void *)local_988.Pitch);
    }
    if (bVar3) {
      local_928._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_928._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_928._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      UCameraShakeBase::UpdateAndApplyCameraShake
                (this_00,__real_42c60000,fVar2,(FMinimalViewInfo *)&local_928._s_0);
      bVar3 = UCameraShakeBase::IsFinished(this_00);
      ::FString::FString((FString *)&local_988,"Infinite shake is still running");
      pwVar6 = L"";
      if (local_988.Yaw._0_4_ != 0) {
        pwVar6 = (wchar_t *)local_988.Pitch;
      }
      bVar3 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar3);
      if ((wchar_t *)local_988.Pitch != (wchar_t *)0x0) {
        FMemory::Free((void *)local_988.Pitch);
      }
      if (bVar3) {
        bVar3 = this_00->bIsActive;
        ::FString::FString((FString *)&local_988,"Infinite shake is still active");
        pwVar6 = L"";
        if (local_988.Yaw._0_4_ != 0) {
          pwVar6 = (wchar_t *)local_988.Pitch;
        }
        bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar3);
        if ((wchar_t *)local_988.Pitch != (wchar_t *)0x0) {
          FMemory::Free((void *)local_988.Pitch);
        }
        if (bVar3) {
          ::FString::FString((FString *)&local_988,"Location offset");
          fVar1 = __real_38d1b717;
          pwVar6 = L"";
          if (local_988.Yaw._0_4_ != 0) {
            pwVar6 = (wchar_t *)local_988.Pitch;
          }
          local_968._s_0.X = ___xmm_00000000000000004024000000000000;
          local_968._s_0.Y = _UNK_151444f38;
          local_948._s_0.X = local_928._s_0.X;
          local_948._s_0.Y = local_928._s_0.Y;
          local_968._s_0.Z = 0.0;
          local_948._s_0.Z = local_928._s_0.Z;
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,pwVar6,(TVector<double> *)&local_948._s_0,
                             (TVector<double> *)&local_968._s_0,__real_38d1b717);
          if ((wchar_t *)local_988.Pitch != (wchar_t *)0x0) {
            FMemory::Free((void *)local_988.Pitch);
          }
          if (bVar3) {
            local_928._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_928._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_928._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            UCameraShakeBase::StopShake(this_00,false);
            UCameraShakeBase::UpdateAndApplyCameraShake
                      (this_00,__real_3f000000,fVar2,(FMinimalViewInfo *)&local_928._s_0);
            bVar3 = UCameraShakeBase::IsFinished(this_00);
            ::FString::FString((FString *)&local_988,"Infinite shake is still running");
            pwVar6 = L"";
            if (local_988.Yaw._0_4_ != 0) {
              pwVar6 = (wchar_t *)local_988.Pitch;
            }
            bVar3 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar3);
            if ((wchar_t *)local_988.Pitch != (wchar_t *)0x0) {
              FMemory::Free((void *)local_988.Pitch);
            }
            if (bVar3) {
              bVar3 = this_00->bIsActive;
              ::FString::FString((FString *)&local_988,"Infinite shake is still active");
              pwVar6 = L"";
              if (local_988.Yaw._0_4_ != 0) {
                pwVar6 = (wchar_t *)local_988.Pitch;
              }
              bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar3);
              if ((wchar_t *)local_988.Pitch != (wchar_t *)0x0) {
                FMemory::Free((void *)local_988.Pitch);
              }
              if (bVar3) {
                ::FString::FString((FString *)&local_988,"Location offset");
                pwVar6 = L"";
                if (local_988.Yaw._0_4_ != 0) {
                  pwVar6 = (wchar_t *)local_988.Pitch;
                }
                local_948._s_0.X = ___xmm_00000000000000004014000000000000;
                local_948._s_0.Y = _UNK_150925018;
                local_968._s_0.X = local_928._s_0.X;
                local_968._s_0.Y = local_928._s_0.Y;
                local_948._s_0.Z = 0.0;
                local_968._s_0.Z = local_928._s_0.Z;
                bVar3 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,pwVar6,
                                   (TVector<double> *)&local_968._s_0,
                                   (TVector<double> *)&local_948._s_0,fVar1);
                if ((wchar_t *)local_988.Pitch != (wchar_t *)0x0) {
                  FMemory::Free((void *)local_988.Pitch);
                }
                if (bVar3) {
                  local_928._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  local_928._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  local_928._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  UCameraShakeBase::UpdateAndApplyCameraShake
                            (this_00,__real_3f000000,fVar2,(FMinimalViewInfo *)&local_928._s_0);
                  bVar3 = UCameraShakeBase::IsFinished(this_00);
                  ::FString::FString((FString *)&local_988,"Infinite shake is finished");
                  pwVar6 = L"";
                  if (local_988.Yaw._0_4_ != 0) {
                    pwVar6 = (wchar_t *)local_988.Pitch;
                  }
                  bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar3);
                  if ((wchar_t *)local_988.Pitch != (wchar_t *)0x0) {
                    FMemory::Free((void *)local_988.Pitch);
                  }
                  if (bVar3) {
                    ::FString::FString((FString *)&local_988,"Location offset");
                    pwVar6 = L"";
                    if (local_988.Yaw._0_4_ != 0) {
                      pwVar6 = (wchar_t *)local_988.Pitch;
                    }
                    local_948._s_0.X = 0.0;
                    local_948._s_0.Y = 0.0;
                    local_948._s_0.Z = 0.0;
                    local_968._s_0.X = local_928._s_0.X;
                    local_968._s_0.Y = local_928._s_0.Y;
                    local_968._s_0.Z = local_928._s_0.Z;
                    bVar3 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,pwVar6,
                                       (TVector<double> *)&local_968._s_0,
                                       (TVector<double> *)&local_948._s_0,fVar1);
                    if ((wchar_t *)local_988.Pitch != (wchar_t *)0x0) {
                      FMemory::Free((void *)local_988.Pitch);
                    }
                    if (bVar3) {
                      bVar3 = true;
                      goto LAB_14ad19ca9;
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
  bVar3 = false;
LAB_14ad19ca9:
  if (local_150 != (void *)0x0) {
    FMemory::Free(local_150);
  }
  return bVar3;
}

// GetBeautifiedTestName @ 14ad19d10

FString * __thiscall
FCameraShakeBlendOutInfiniteTest::GetBeautifiedTestName
          (FCameraShakeBlendOutInfiniteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Cameras.BlendOutInfiniteCameraShake");
  return __return_storage_ptr__;
}

