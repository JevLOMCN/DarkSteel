// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 8

// GetTestFlags @ 14ad17540

EAutomationTestFlags __thiscall
FCompositeCameraShakeRunTest::GetTestFlags(FCompositeCameraShakeRunTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ad17550

bool __thiscall FCompositeCameraShakeRunTest::IsStressTest(FCompositeCameraShakeRunTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ad17560

uint __thiscall
FCompositeCameraShakeRunTest::GetRequiredDeviceNum(FCompositeCameraShakeRunTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ad17570

FString * __thiscall
FCompositeCameraShakeRunTest::GetTestSourceFileName
          (FCompositeCameraShakeRunTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Tests\\CameraShakeTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ad175a0

int __thiscall
FCompositeCameraShakeRunTest::GetTestSourceFileLine(FCompositeCameraShakeRunTest *this)

{
  return 0x99;
}

// GetTests @ 14ad175b0

/* WARNING: Removing unreachable block (ram,0x00014ad1769d) */
/* WARNING: Removing unreachable block (ram,0x00014ad17768) */

void __thiscall
FCompositeCameraShakeRunTest::GetTests
          (FCompositeCameraShakeRunTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Cameras.CompositeCameraShakeRunTest");
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

// RunTest @ 14ad17790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FCompositeCameraShakeRunTest::RunTest(FCompositeCameraShakeRunTest *this,FString *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  UObject *pUVar6;
  UCameraShakeBase *this_00;
  UClass *pUVar7;
  UCompositeCameraShakePattern *this_01;
  UConstantCameraShakePattern *pUVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined1 auStackY_a58 [32];
  TRotator<double> local_a28;
  TVector<double>_u_0 local_a08;
  TVector<double>_u_0 local_9e8;
  undefined1 local_9c8 [128];
  TVector<double>_u_0 local_948 [83];
  void *local_170;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_a58;
  pUVar6 = GetTransientPackageAsObject();
  this_00 = (UCameraShakeBase *)NewObject<UTestCameraShake>(pUVar6);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this_00,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UCompositeCameraShakePattern::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_9c8,pUVar7);
  local_9c8._8_8_ = this_00;
  this_01 = (UCompositeCameraShakePattern *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_9c8);
  if (local_9c8._64_8_ != 0) {
    plVar10 = (longlong *)(local_9c8 + 0x50);
    if ((longlong *)local_9c8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_9c8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  UCameraShakeBase::SetRootShakePattern(this_00,(UCameraShakePattern *)this_01);
  pUVar8 = UCompositeCameraShakePattern::AddChildPattern<UConstantCameraShakePattern>(this_01);
  *(undefined4 *)&pUVar8->_padding_ = 0x3f800000;
  *(undefined4 *)&pUVar8->_padding_ = 0x3e4ccccd;
  *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = 0x3e4ccccd;
  (pUVar8->LocationOffset).field0_0x0._s_0.X = 1.0;
  (pUVar8->LocationOffset).field0_0x0._s_0.Y = 0.0;
  (pUVar8->LocationOffset).field0_0x0._s_0.Z = 0.0;
  pUVar8 = UCompositeCameraShakePattern::AddChildPattern<UConstantCameraShakePattern>(this_01);
  *(undefined4 *)&pUVar8->_padding_ = 0x40000000;
  *(undefined4 *)&pUVar8->_padding_ = 0x3e99999a;
  *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = 0x3e99999a;
  (pUVar8->LocationOffset).field0_0x0._s_0.X = 1.0;
  (pUVar8->LocationOffset).field0_0x0._s_0.Y = 0.0;
  (pUVar8->LocationOffset).field0_0x0._s_0.Z = 0.0;
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_948[0]._s_0);
  fVar2 = __real_3f800000;
  local_a28.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_a28.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_a28.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  UCameraShakeBase::StartShake
            (this_00,(APlayerCameraManager *)0x0,__real_3f800000,CameraLocal,&local_a28);
  bVar5 = UCameraShakeBase::IsFinished(this_00);
  ::FString::FString((FString *)&local_a28,"Composite shake is still active");
  pwVar9 = L"";
  if (local_a28.Yaw._0_4_ != 0) {
    pwVar9 = (wchar_t *)local_a28.Pitch;
  }
  bVar5 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar9,bVar5);
  if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
    FMemory::Free((void *)local_a28.Pitch);
  }
  fVar3 = __real_3dcccccd;
  if (bVar5) {
    local_948[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_948[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_948[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    UCameraShakeBase::UpdateAndApplyCameraShake
              (this_00,__real_3dcccccd,fVar2,(FMinimalViewInfo *)&local_948[0]._s_0);
    bVar5 = UCameraShakeBase::IsFinished(this_00);
    ::FString::FString((FString *)&local_a28,"Composite shake is still active");
    pwVar9 = L"";
    if (local_a28.Yaw._0_4_ != 0) {
      pwVar9 = (wchar_t *)local_a28.Pitch;
    }
    bVar5 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar9,bVar5);
    if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
      FMemory::Free((void *)local_a28.Pitch);
    }
    if (bVar5) {
      ::FString::FString((FString *)&local_a28,"Both children patterns are blending in");
      fVar1 = __real_38d1b717;
      pwVar9 = L"";
      if (local_a28.Yaw._0_4_ != 0) {
        pwVar9 = (wchar_t *)local_a28.Pitch;
      }
      local_9e8._s_0.X = ___xmm_00000000000000003feaaaaaaaaaaaaa;
      local_9e8._s_0.Y = _UNK_152319cd8;
      local_a08._s_0.X = (double)local_948[0]._0_8_;
      local_a08._s_0.Y = (double)local_948[0]._8_8_;
      local_9e8._s_0.Z = 0.0;
      local_a08._s_0.Z = (double)local_948[0]._16_8_;
      bVar5 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,pwVar9,(TVector<double> *)&local_a08._s_0,
                         (TVector<double> *)&local_9e8._s_0,__real_38d1b717);
      if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
        FMemory::Free((void *)local_a28.Pitch);
      }
      fVar4 = __real_3ecccccd;
      if (bVar5) {
        local_948[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_948[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_948[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        UCameraShakeBase::UpdateAndApplyCameraShake
                  (this_00,__real_3ecccccd,fVar2,(FMinimalViewInfo *)&local_948[0]._s_0);
        bVar5 = UCameraShakeBase::IsFinished(this_00);
        ::FString::FString((FString *)&local_a28,"Composite shake is still active");
        pwVar9 = L"";
        if (local_a28.Yaw._0_4_ != 0) {
          pwVar9 = (wchar_t *)local_a28.Pitch;
        }
        bVar5 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar9,bVar5);
        if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
          FMemory::Free((void *)local_a28.Pitch);
        }
        if (bVar5) {
          ::FString::FString((FString *)&local_a28,"Both children patterns active");
          pwVar9 = L"";
          if (local_a28.Yaw._0_4_ != 0) {
            pwVar9 = (wchar_t *)local_a28.Pitch;
          }
          local_a08._s_0.X = ___xmm_00000000000000004000000000000000;
          local_a08._s_0.Y = _UNK_15076ace8;
          local_9e8._s_0.X = (double)local_948[0]._0_8_;
          local_9e8._s_0.Y = (double)local_948[0]._8_8_;
          local_a08._s_0.Z = 0.0;
          local_9e8._s_0.Z = (double)local_948[0]._16_8_;
          bVar5 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,pwVar9,(TVector<double> *)&local_9e8._s_0,
                             (TVector<double> *)&local_a08._s_0,fVar1);
          if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
            FMemory::Free((void *)local_a28.Pitch);
          }
          if (bVar5) {
            local_948[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_948[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_948[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            UCameraShakeBase::UpdateAndApplyCameraShake
                      (this_00,fVar4,fVar2,(FMinimalViewInfo *)&local_948[0]._s_0);
            bVar5 = UCameraShakeBase::IsFinished(this_00);
            ::FString::FString((FString *)&local_a28,"Composite shake is still active");
            pwVar9 = L"";
            if (local_a28.Yaw._0_4_ != 0) {
              pwVar9 = (wchar_t *)local_a28.Pitch;
            }
            bVar5 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar9,bVar5);
            if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
              FMemory::Free((void *)local_a28.Pitch);
            }
            if (bVar5) {
              ::FString::FString((FString *)&local_a28,"First child pattern is blending out");
              pwVar9 = L"";
              if (local_a28.Yaw._0_4_ != 0) {
                pwVar9 = (wchar_t *)local_a28.Pitch;
              }
              local_a08._s_0.X = ___xmm_00000000000000003ff8000000000000;
              local_a08._s_0.Y = _UNK_152319d08;
              local_9e8._s_0.X = (double)local_948[0]._0_8_;
              local_9e8._s_0.Y = (double)local_948[0]._8_8_;
              local_a08._s_0.Z = 0.0;
              local_9e8._s_0.Z = (double)local_948[0]._16_8_;
              bVar5 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,pwVar9,
                                 (TVector<double> *)&local_9e8._s_0,
                                 (TVector<double> *)&local_a08._s_0,fVar1);
              if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                FMemory::Free((void *)local_a28.Pitch);
              }
              if (bVar5) {
                local_948[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                local_948[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                local_948[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                UCameraShakeBase::UpdateAndApplyCameraShake
                          (this_00,fVar3,fVar2,(FMinimalViewInfo *)&local_948[0]._s_0);
                bVar5 = UCameraShakeBase::IsFinished(this_00);
                ::FString::FString((FString *)&local_a28,"Composite shake is still active");
                pwVar9 = L"";
                if (local_a28.Yaw._0_4_ != 0) {
                  pwVar9 = (wchar_t *)local_a28.Pitch;
                }
                bVar5 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar9,bVar5);
                if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                  FMemory::Free((void *)local_a28.Pitch);
                }
                if (bVar5) {
                  ::FString::FString((FString *)&local_a28,"First child pattern has ended");
                  pwVar9 = L"";
                  if (local_a28.Yaw._0_4_ != 0) {
                    pwVar9 = (wchar_t *)local_a28.Pitch;
                  }
                  local_a08._s_0.X = ___xmm_00000000000000003ff0000000000000;
                  local_a08._s_0.Y = _UNK_150689518;
                  local_9e8._s_0.X = (double)local_948[0]._0_8_;
                  local_9e8._s_0.Y = (double)local_948[0]._8_8_;
                  local_a08._s_0.Z = 0.0;
                  local_9e8._s_0.Z = (double)local_948[0]._16_8_;
                  bVar5 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,pwVar9,
                                     (TVector<double> *)&local_9e8._s_0,
                                     (TVector<double> *)&local_a08._s_0,fVar1);
                  if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                    FMemory::Free((void *)local_a28.Pitch);
                  }
                  fVar4 = __real_3f59999a;
                  if (bVar5) {
                    local_948[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                    local_948[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    local_948[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    UCameraShakeBase::UpdateAndApplyCameraShake
                              (this_00,__real_3f59999a,fVar2,(FMinimalViewInfo *)&local_948[0]._s_0)
                    ;
                    bVar5 = UCameraShakeBase::IsFinished(this_00);
                    ::FString::FString((FString *)&local_a28,"Composite shake is still active");
                    pwVar9 = L"";
                    if (local_a28.Yaw._0_4_ != 0) {
                      pwVar9 = (wchar_t *)local_a28.Pitch;
                    }
                    bVar5 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar9,bVar5)
                    ;
                    if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                      FMemory::Free((void *)local_a28.Pitch);
                    }
                    if (bVar5) {
                      ::FString::FString((FString *)&local_a28,
                                         "Second child pattern is blending out");
                      pwVar9 = L"";
                      if (local_a28.Yaw._0_4_ != 0) {
                        pwVar9 = (wchar_t *)local_a28.Pitch;
                      }
                      local_a08._s_0.X = ___xmm_00000000000000003fe0000000000000;
                      local_a08._s_0.Y = _UNK_150978bb8;
                      local_9e8._s_0.X = (double)local_948[0]._0_8_;
                      local_9e8._s_0.Y = (double)local_948[0]._8_8_;
                      local_a08._s_0.Z = 0.0;
                      local_9e8._s_0.Z = (double)local_948[0]._16_8_;
                      bVar5 = FAutomationTestBase::TestEqual
                                        ((FAutomationTestBase *)this,pwVar9,
                                         (TVector<double> *)&local_9e8._s_0,
                                         (TVector<double> *)&local_a08._s_0,fVar1);
                      if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                        FMemory::Free((void *)local_a28.Pitch);
                      }
                      if (bVar5) {
                        local_948[0]._s_0.X =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                        local_948[0]._s_0.Y =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                        local_948[0]._s_0.Z =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                        UCameraShakeBase::UpdateAndApplyCameraShake
                                  (this_00,fVar4,fVar2,(FMinimalViewInfo *)&local_948[0]._s_0);
                        bVar5 = UCameraShakeBase::IsFinished(this_00);
                        ::FString::FString((FString *)&local_a28,"Composite shake has ended");
                        pwVar9 = L"";
                        if (local_a28.Yaw._0_4_ != 0) {
                          pwVar9 = (wchar_t *)local_a28.Pitch;
                        }
                        bVar5 = FAutomationTestBase::TestTrue
                                          ((FAutomationTestBase *)this,pwVar9,bVar5);
                        if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                          FMemory::Free((void *)local_a28.Pitch);
                        }
                        if (bVar5) {
                          ::FString::FString((FString *)&local_a28,
                                             "Both children patterns have ended");
                          local_a08._s_0.Z = 0.0;
                          local_a08._s_0.X = 0.0;
                          local_a08._s_0.Y = 0.0;
                          pwVar9 = L"";
                          if (local_a28.Yaw._0_4_ != 0) {
                            pwVar9 = (wchar_t *)local_a28.Pitch;
                          }
                          local_9e8._s_0.Z = (double)local_948[0]._16_8_;
                          local_9e8._s_0.X = (double)local_948[0]._0_8_;
                          local_9e8._s_0.Y = (double)local_948[0]._8_8_;
                          bVar5 = FAutomationTestBase::TestEqual
                                            ((FAutomationTestBase *)this,pwVar9,
                                             (TVector<double> *)&local_9e8._s_0,
                                             (TVector<double> *)&local_a08._s_0,fVar1);
                          if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                            FMemory::Free((void *)local_a28.Pitch);
                          }
                          if (bVar5) {
                            UCameraShakeBase::TeardownShake(this_00);
                            if (local_170 != (void *)0x0) {
                              FMemory::Free(local_170);
                            }
                            FMinimalViewInfo::FMinimalViewInfo
                                      ((FMinimalViewInfo *)&local_948[0]._s_0);
                            local_a08._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Pitch;
                            local_a08._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
                            local_a08._s_0.Z = UE::Math::TRotator<double>::ZeroRotator.Roll;
                            UCameraShakeBase::StartShake
                                      (this_00,(APlayerCameraManager *)0x0,fVar2,CameraLocal,
                                       (TRotator<double> *)&local_a08._s_0);
                            local_948[0]._s_0.X =
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                            local_948[0]._s_0.Y =
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                            local_948[0]._s_0.Z =
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                            UCameraShakeBase::UpdateAndApplyCameraShake
                                      (this_00,__real_3f000000,fVar2,
                                       (FMinimalViewInfo *)&local_948[0]._s_0);
                            UCameraShakeBase::StopShake(this_00,false);
                            local_948[0]._s_0.X =
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                            local_948[0]._s_0.Y =
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                            local_948[0]._s_0.Z =
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                            UCameraShakeBase::UpdateAndApplyCameraShake
                                      (this_00,fVar3,fVar2,(FMinimalViewInfo *)&local_948[0]._s_0);
                            bVar5 = UCameraShakeBase::IsFinished(this_00);
                            ::FString::FString((FString *)&local_a28,
                                               "Composite shake is still active");
                            pwVar9 = L"";
                            if (local_a28.Yaw._0_4_ != 0) {
                              pwVar9 = (wchar_t *)local_a28.Pitch;
                            }
                            bVar5 = FAutomationTestBase::TestFalse
                                              ((FAutomationTestBase *)this,pwVar9,bVar5);
                            if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                              FMemory::Free((void *)local_a28.Pitch);
                            }
                            if (bVar5) {
                              ::FString::FString((FString *)&local_a28,
                                                 "Both patterns are blending out");
                              pwVar9 = L"";
                              if (local_a28.Yaw._0_4_ != 0) {
                                pwVar9 = (wchar_t *)local_a28.Pitch;
                              }
                              local_a08._s_0.X = ___xmm_00000000000000003ff2aaaaaaaaaaaa;
                              local_a08._s_0.Y = _UNK_152319cf8;
                              local_9e8._s_0.X = (double)local_948[0]._0_8_;
                              local_9e8._s_0.Y = (double)local_948[0]._8_8_;
                              local_a08._s_0.Z = 0.0;
                              local_9e8._s_0.Z = (double)local_948[0]._16_8_;
                              bVar5 = FAutomationTestBase::TestEqual
                                                ((FAutomationTestBase *)this,pwVar9,
                                                 (TVector<double> *)&local_9e8._s_0,
                                                 (TVector<double> *)&local_a08._s_0,fVar1);
                              if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                                FMemory::Free((void *)local_a28.Pitch);
                              }
                              if (bVar5) {
                                local_948[0]._s_0.X =
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                                local_948[0]._s_0.Y =
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                                local_948[0]._s_0.Z =
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                                UCameraShakeBase::UpdateAndApplyCameraShake
                                          (this_00,fVar3,fVar2,
                                           (FMinimalViewInfo *)&local_948[0]._s_0);
                                bVar5 = UCameraShakeBase::IsFinished(this_00);
                                ::FString::FString((FString *)&local_a28,
                                                   "Composite shake is still active");
                                pwVar9 = L"";
                                if (local_a28.Yaw._0_4_ != 0) {
                                  pwVar9 = (wchar_t *)local_a28.Pitch;
                                }
                                bVar5 = FAutomationTestBase::TestFalse
                                                  ((FAutomationTestBase *)this,pwVar9,bVar5);
                                if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                                  FMemory::Free((void *)local_a28.Pitch);
                                }
                                if (bVar5) {
                                  ::FString::FString((FString *)&local_a28,
                                                     "Second pattern is blending out");
                                  pwVar9 = L"";
                                  if (local_a28.Yaw._0_4_ != 0) {
                                    pwVar9 = (wchar_t *)local_a28.Pitch;
                                  }
                                  local_a08._s_0.X = ___xmm_00000000000000003fd5555555555555;
                                  local_a08._s_0.Y = _UNK_152319cc8;
                                  local_9e8._s_0.X = (double)local_948[0]._0_8_;
                                  local_9e8._s_0.Y = (double)local_948[0]._8_8_;
                                  local_a08._s_0.Z = 0.0;
                                  local_9e8._s_0.Z = (double)local_948[0]._16_8_;
                                  bVar5 = FAutomationTestBase::TestEqual
                                                    ((FAutomationTestBase *)this,pwVar9,
                                                     (TVector<double> *)&local_9e8._s_0,
                                                     (TVector<double> *)&local_a08._s_0,fVar1);
                                  if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                                    FMemory::Free((void *)local_a28.Pitch);
                                  }
                                  if (bVar5) {
                                    local_948[0]._s_0.X =
                                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                                    local_948[0]._s_0.Y =
                                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                                    local_948[0]._s_0.Z =
                                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                                    UCameraShakeBase::UpdateAndApplyCameraShake
                                              (this_00,fVar3,fVar2,
                                               (FMinimalViewInfo *)&local_948[0]._s_0);
                                    bVar5 = UCameraShakeBase::IsFinished(this_00);
                                    ::FString::FString((FString *)&local_a28,
                                                       "Composite shake has ended");
                                    pwVar9 = L"";
                                    if (local_a28.Yaw._0_4_ != 0) {
                                      pwVar9 = (wchar_t *)local_a28.Pitch;
                                    }
                                    bVar5 = FAutomationTestBase::TestTrue
                                                      ((FAutomationTestBase *)this,pwVar9,bVar5);
                                    if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                                      FMemory::Free((void *)local_a28.Pitch);
                                    }
                                    if (bVar5) {
                                      ::FString::FString((FString *)&local_a28,
                                                         "Both children patterns ended");
                                      local_a08._s_0.Z = 0.0;
                                      local_a08._s_0.X = 0.0;
                                      local_a08._s_0.Y = 0.0;
                                      pwVar9 = L"";
                                      if (local_a28.Yaw._0_4_ != 0) {
                                        pwVar9 = (wchar_t *)local_a28.Pitch;
                                      }
                                      local_9e8._s_0.Z = (double)local_948[0]._16_8_;
                                      local_9e8._s_0.X = (double)local_948[0]._0_8_;
                                      local_9e8._s_0.Y = (double)local_948[0]._8_8_;
                                      bVar5 = FAutomationTestBase::TestEqual
                                                        ((FAutomationTestBase *)this,pwVar9,
                                                         (TVector<double> *)&local_9e8._s_0,
                                                         (TVector<double> *)&local_a08._s_0,fVar1);
                                      if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                                        FMemory::Free((void *)local_a28.Pitch);
                                      }
                                      if (bVar5) {
                                        UCameraShakeBase::TeardownShake(this_00);
                                        if (local_170 != (void *)0x0) {
                                          FMemory::Free(local_170);
                                        }
                                        FMinimalViewInfo::FMinimalViewInfo
                                                  ((FMinimalViewInfo *)&local_948[0]._s_0);
                                        local_a08._s_0.X =
                                             UE::Math::TRotator<double>::ZeroRotator.Pitch;
                                        local_a08._s_0.Y =
                                             UE::Math::TRotator<double>::ZeroRotator.Yaw;
                                        local_a08._s_0.Z =
                                             UE::Math::TRotator<double>::ZeroRotator.Roll;
                                        UCameraShakeBase::StartShake
                                                  (this_00,(APlayerCameraManager *)0x0,fVar2,
                                                   CameraLocal,(TRotator<double> *)&local_a08._s_0);
                                        local_948[0]._s_0.X =
                                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
                                        ;
                                        local_948[0]._s_0.Y =
                                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y
                                        ;
                                        local_948[0]._s_0.Z =
                                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
                                        ;
                                        UCameraShakeBase::UpdateAndApplyCameraShake
                                                  (this_00,fVar4,fVar2,
                                                   (FMinimalViewInfo *)&local_948[0]._s_0);
                                        UCameraShakeBase::StopShake(this_00,false);
                                        local_948[0]._s_0.X =
                                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
                                        ;
                                        local_948[0]._s_0.Y =
                                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y
                                        ;
                                        local_948[0]._s_0.Z =
                                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
                                        ;
                                        UCameraShakeBase::UpdateAndApplyCameraShake
                                                  (this_00,fVar3,fVar2,
                                                   (FMinimalViewInfo *)&local_948[0]._s_0);
                                        bVar5 = UCameraShakeBase::IsFinished(this_00);
                                        ::FString::FString((FString *)&local_a28,
                                                           "Composite shake is still active");
                                        pwVar9 = L"";
                                        if (local_a28.Yaw._0_4_ != 0) {
                                          pwVar9 = (wchar_t *)local_a28.Pitch;
                                        }
                                        bVar5 = FAutomationTestBase::TestFalse
                                                          ((FAutomationTestBase *)this,pwVar9,bVar5)
                                        ;
                                        if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                                          FMemory::Free((void *)local_a28.Pitch);
                                        }
                                        if (bVar5) {
                                          ::FString::FString((FString *)&local_a28,
                                                                                                                          
                                                  "Both children pattern are blending out");
                                          pwVar9 = L"";
                                          if (local_a28.Yaw._0_4_ != 0) {
                                            pwVar9 = (wchar_t *)local_a28.Pitch;
                                          }
                                          local_a08._s_0.X = ___xmm_00000000000000003fed555555555555
                                          ;
                                          local_a08._s_0.Y = _UNK_152319ce8;
                                          local_9e8._s_0.X = (double)local_948[0]._0_8_;
                                          local_9e8._s_0.Y = (double)local_948[0]._8_8_;
                                          local_a08._s_0.Z = 0.0;
                                          local_9e8._s_0.Z = (double)local_948[0]._16_8_;
                                          bVar5 = FAutomationTestBase::TestEqual
                                                            ((FAutomationTestBase *)this,pwVar9,
                                                             (TVector<double> *)&local_9e8._s_0,
                                                             (TVector<double> *)&local_a08._s_0,
                                                             fVar1);
                                          if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                                            FMemory::Free((void *)local_a28.Pitch);
                                          }
                                          if (bVar5) {
                                            local_948[0]._s_0.X =
                                                 UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                 _s_0.X;
                                            local_948[0]._s_0.Y =
                                                 UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                 _s_0.Y;
                                            local_948[0]._s_0.Z =
                                                 UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                 _s_0.Z;
                                            UCameraShakeBase::UpdateAndApplyCameraShake
                                                      (this_00,__real_3d4ccccd,fVar2,
                                                       (FMinimalViewInfo *)&local_948[0]._s_0);
                                            bVar5 = UCameraShakeBase::IsFinished(this_00);
                                            ::FString::FString((FString *)&local_a28,
                                                               "Composite shake is still active");
                                            pwVar9 = L"";
                                            if (local_a28.Yaw._0_4_ != 0) {
                                              pwVar9 = (wchar_t *)local_a28.Pitch;
                                            }
                                            bVar5 = FAutomationTestBase::TestFalse
                                                              ((FAutomationTestBase *)this,pwVar9,
                                                               bVar5);
                                            if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                                              FMemory::Free((void *)local_a28.Pitch);
                                            }
                                            if (bVar5) {
                                              ::FString::FString((FString *)&local_a28,
                                                                                                                                  
                                                  "Second child pattern is blending out");
                                              pwVar9 = L"";
                                              if (local_a28.Yaw._0_4_ != 0) {
                                                pwVar9 = (wchar_t *)local_a28.Pitch;
                                              }
                                              local_a08._s_0.X =
                                                   ___xmm_00000000000000003fe0000000000000;
                                              local_a08._s_0.Y = _UNK_150978bb8;
                                              local_9e8._s_0.X = (double)local_948[0]._0_8_;
                                              local_9e8._s_0.Y = (double)local_948[0]._8_8_;
                                              local_a08._s_0.Z = 0.0;
                                              local_9e8._s_0.Z = (double)local_948[0]._16_8_;
                                              bVar5 = FAutomationTestBase::TestEqual
                                                                ((FAutomationTestBase *)this,pwVar9,
                                                                 (TVector<double> *)&local_9e8._s_0,
                                                                 (TVector<double> *)&local_a08._s_0,
                                                                 fVar1);
                                              if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                                                FMemory::Free((void *)local_a28.Pitch);
                                              }
                                              if (bVar5) {
                                                local_948[0]._s_0.X =
                                                     UE::Math::TVector<double>::ZeroVector.
                                                     field0_0x0._s_0.X;
                                                local_948[0]._s_0.Y =
                                                     UE::Math::TVector<double>::ZeroVector.
                                                     field0_0x0._s_0.Y;
                                                local_948[0]._s_0.Z =
                                                     UE::Math::TVector<double>::ZeroVector.
                                                     field0_0x0._s_0.Z;
                                                UCameraShakeBase::UpdateAndApplyCameraShake
                                                          (this_00,__real_3fc00000,fVar2,
                                                           (FMinimalViewInfo *)&local_948[0]._s_0);
                                                bVar5 = UCameraShakeBase::IsFinished(this_00);
                                                ::FString::FString((FString *)&local_a28,
                                                                   "Composite shake has ended");
                                                pwVar9 = L"";
                                                if (local_a28.Yaw._0_4_ != 0) {
                                                  pwVar9 = (wchar_t *)local_a28.Pitch;
                                                }
                                                bVar5 = FAutomationTestBase::TestTrue
                                                                  ((FAutomationTestBase *)this,
                                                                   pwVar9,bVar5);
                                                if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0) {
                                                  FMemory::Free((void *)local_a28.Pitch);
                                                }
                                                if (bVar5) {
                                                  ::FString::FString((FString *)&local_a28,
                                                                     "Both children patterns ended")
                                                  ;
                                                  local_a08._s_0.Z = 0.0;
                                                  local_a08._s_0.X = 0.0;
                                                  local_a08._s_0.Y = 0.0;
                                                  pwVar9 = L"";
                                                  if (local_a28.Yaw._0_4_ != 0) {
                                                    pwVar9 = (wchar_t *)local_a28.Pitch;
                                                  }
                                                  local_9e8._s_0.Z = (double)local_948[0]._16_8_;
                                                  local_9e8._s_0.X = (double)local_948[0]._0_8_;
                                                  local_9e8._s_0.Y = (double)local_948[0]._8_8_;
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     pwVar9,(TVector<double> *)
                                                                            &local_9e8._s_0,
                                                                     (TVector<double> *)
                                                                     &local_a08._s_0,fVar1);
                                                  if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0)
                                                  {
                                                    FMemory::Free((void *)local_a28.Pitch);
                                                  }
                                                  if (bVar5) {
                                                    UCameraShakeBase::TeardownShake(this_00);
                                                    if (local_170 != (void *)0x0) {
                                                      FMemory::Free(local_170);
                                                    }
                                                    FMinimalViewInfo::FMinimalViewInfo
                                                              ((FMinimalViewInfo *)
                                                               &local_948[0]._s_0);
                                                    local_a08._s_0.X =
                                                         UE::Math::TRotator<double>::ZeroRotator.
                                                         Pitch;
                                                    local_a08._s_0.Y =
                                                         UE::Math::TRotator<double>::ZeroRotator.Yaw
                                                    ;
                                                    local_a08._s_0.Z =
                                                         UE::Math::TRotator<double>::ZeroRotator.
                                                         Roll;
                                                    UCameraShakeBase::StartShake
                                                              (this_00,(APlayerCameraManager *)0x0,
                                                               fVar2,CameraLocal,
                                                               (TRotator<double> *)&local_a08._s_0);
                                                    local_948[0]._s_0.X =
                                                         UE::Math::TVector<double>::ZeroVector.
                                                         field0_0x0._s_0.X;
                                                    local_948[0]._s_0.Y =
                                                         UE::Math::TVector<double>::ZeroVector.
                                                         field0_0x0._s_0.Y;
                                                    local_948[0]._s_0.Z =
                                                         UE::Math::TVector<double>::ZeroVector.
                                                         field0_0x0._s_0.Z;
                                                    UCameraShakeBase::UpdateAndApplyCameraShake
                                                              (this_00,__real_3f8ccccd,fVar2,
                                                               (FMinimalViewInfo *)
                                                               &local_948[0]._s_0);
                                                    UCameraShakeBase::StopShake(this_00,false);
                                                    fVar3 = __real_3e19999a;
                                                    local_948[0]._s_0.X =
                                                         UE::Math::TVector<double>::ZeroVector.
                                                         field0_0x0._s_0.X;
                                                    local_948[0]._s_0.Y =
                                                         UE::Math::TVector<double>::ZeroVector.
                                                         field0_0x0._s_0.Y;
                                                    local_948[0]._s_0.Z =
                                                         UE::Math::TVector<double>::ZeroVector.
                                                         field0_0x0._s_0.Z;
                                                    UCameraShakeBase::UpdateAndApplyCameraShake
                                                              (this_00,__real_3e19999a,fVar2,
                                                               (FMinimalViewInfo *)
                                                               &local_948[0]._s_0);
                                                    bVar5 = UCameraShakeBase::IsFinished(this_00);
                                                    ::FString::FString((FString *)&local_a28,
                                                                                                                                              
                                                  "Composite shake is still active");
                                                  pwVar9 = L"";
                                                  if (local_a28.Yaw._0_4_ != 0) {
                                                    pwVar9 = (wchar_t *)local_a28.Pitch;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     pwVar9,bVar5);
                                                  if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0)
                                                  {
                                                    FMemory::Free((void *)local_a28.Pitch);
                                                  }
                                                  if (bVar5) {
                                                    ::FString::FString((FString *)&local_a28,
                                                                                                                                              
                                                  "Second child pattern is blending out");
                                                  pwVar9 = L"";
                                                  if (local_a28.Yaw._0_4_ != 0) {
                                                    pwVar9 = (wchar_t *)local_a28.Pitch;
                                                  }
                                                  local_a08._s_0.X =
                                                       ___xmm_00000000000000003fe0000000000000;
                                                  local_a08._s_0.Y = _UNK_150978bb8;
                                                  local_9e8._s_0.X = (double)local_948[0]._0_8_;
                                                  local_9e8._s_0.Y = (double)local_948[0]._8_8_;
                                                  local_a08._s_0.Z = 0.0;
                                                  local_9e8._s_0.Z = (double)local_948[0]._16_8_;
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     pwVar9,(TVector<double> *)
                                                                            &local_9e8._s_0,
                                                                     (TVector<double> *)
                                                                     &local_a08._s_0,fVar1);
                                                  if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0)
                                                  {
                                                    FMemory::Free((void *)local_a28.Pitch);
                                                  }
                                                  if (bVar5) {
                                                    local_948[0]._s_0.X =
                                                         UE::Math::TVector<double>::ZeroVector.
                                                         field0_0x0._s_0.X;
                                                    local_948[0]._s_0.Y =
                                                         UE::Math::TVector<double>::ZeroVector.
                                                         field0_0x0._s_0.Y;
                                                    local_948[0]._s_0.Z =
                                                         UE::Math::TVector<double>::ZeroVector.
                                                         field0_0x0._s_0.Z;
                                                    UCameraShakeBase::UpdateAndApplyCameraShake
                                                              (this_00,fVar3,fVar2,
                                                               (FMinimalViewInfo *)
                                                               &local_948[0]._s_0);
                                                    bVar5 = UCameraShakeBase::IsFinished(this_00);
                                                    ::FString::FString((FString *)&local_a28,
                                                                       "Composite shake has ended");
                                                    pwVar9 = L"";
                                                    if (local_a28.Yaw._0_4_ != 0) {
                                                      pwVar9 = (wchar_t *)local_a28.Pitch;
                                                    }
                                                    bVar5 = FAutomationTestBase::TestTrue
                                                                      ((FAutomationTestBase *)this,
                                                                       pwVar9,bVar5);
                                                    if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0
                                                       ) {
                                                      FMemory::Free((void *)local_a28.Pitch);
                                                    }
                                                    if (bVar5) {
                                                      ::FString::FString((FString *)&local_a28,
                                                                                                                                                  
                                                  "Both children patterns ended");
                                                  pwVar9 = L"";
                                                  if (local_a28.Yaw._0_4_ != 0) {
                                                    pwVar9 = (wchar_t *)local_a28.Pitch;
                                                  }
                                                  local_a08._s_0.X = 0.0;
                                                  local_a08._s_0.Y = 0.0;
                                                  local_a08._s_0.Z = 0.0;
                                                  local_9e8._s_0.X = (double)local_948[0]._0_8_;
                                                  local_9e8._s_0.Y = (double)local_948[0]._8_8_;
                                                  local_9e8._s_0.Z = (double)local_948[0]._16_8_;
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     pwVar9,(TVector<double> *)
                                                                            &local_9e8._s_0,
                                                                     (TVector<double> *)
                                                                     &local_a08._s_0,fVar1);
                                                  if ((wchar_t *)local_a28.Pitch != (wchar_t *)0x0)
                                                  {
                                                    FMemory::Free((void *)local_a28.Pitch);
                                                  }
                                                  if (bVar5) {
                                                    UCameraShakeBase::TeardownShake(this_00);
                                                    if (local_170 != (void *)0x0) {
                                                      FMemory::Free(local_170);
                                                    }
                                                    return true;
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
              }
            }
          }
        }
      }
    }
  }
  if (local_170 != (void *)0x0) {
    FMemory::Free(local_170);
  }
  return false;
}

// GetBeautifiedTestName @ 14ad18900

FString * __thiscall
FCompositeCameraShakeRunTest::GetBeautifiedTestName
          (FCompositeCameraShakeRunTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Cameras.CompositeCameraShakeRunTest");
  return __return_storage_ptr__;
}

