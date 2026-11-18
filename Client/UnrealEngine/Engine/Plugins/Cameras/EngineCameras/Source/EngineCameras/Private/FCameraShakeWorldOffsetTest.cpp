// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 8

// GetTestFlags @ 14ad15fb0

EAutomationTestFlags __thiscall
FCameraShakeWorldOffsetTest::GetTestFlags(FCameraShakeWorldOffsetTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ad15fc0

bool __thiscall FCameraShakeWorldOffsetTest::IsStressTest(FCameraShakeWorldOffsetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ad15fd0

uint __thiscall FCameraShakeWorldOffsetTest::GetRequiredDeviceNum(FCameraShakeWorldOffsetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ad15fe0

FString * __thiscall
FCameraShakeWorldOffsetTest::GetTestSourceFileName
          (FCameraShakeWorldOffsetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Tests\\CameraShakeTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ad16010

int __thiscall FCameraShakeWorldOffsetTest::GetTestSourceFileLine(FCameraShakeWorldOffsetTest *this)

{
  return 0x2e;
}

// GetTests @ 14ad16020

/* WARNING: Removing unreachable block (ram,0x00014ad1610d) */
/* WARNING: Removing unreachable block (ram,0x00014ad161d8) */

void __thiscall
FCameraShakeWorldOffsetTest::GetTests
          (FCameraShakeWorldOffsetTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Cameras.WorldOffsetCameraShake");
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

// RunTest @ 14ad16200

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
FCameraShakeWorldOffsetTest::RunTest(FCameraShakeWorldOffsetTest *this,FString *param_1)

{
  float fVar1;
  bool bVar2;
  UObject *pUVar3;
  UCameraShakeBase *this_00;
  UConstantCameraShakePattern *pUVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_988 [32];
  TRotator<double> local_958;
  TVector<double>_u_0 local_938;
  TVector<double>_u_0 local_918;
  TVector<double>_u_0 local_8f8;
  double dStack_8e0;
  double local_8d8;
  double dStack_8d0;
  void *local_120;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_988;
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_8f8._s_0);
  local_8f8._s_0.X = ___xmm_40690000000000004059000000000000;
  local_8f8._s_0.Y = _UNK_1506c8fc8;
  local_8d8 = ___xmm_00000000000000004056800000000000;
  dStack_8d0 = _UNK_150b45b78;
  local_8f8._s_0.Z = ___xmm_00000000000000004049000000000000;
  dStack_8e0 = _UNK_15149cb08;
  pUVar3 = GetTransientPackageAsObject();
  this_00 = (UCameraShakeBase *)NewObject<UTestCameraShake>(pUVar3);
  pUVar4 = NewObject<UConstantCameraShakePattern>((UObject *)this_00);
  UCameraShakeBase::SetRootShakePattern(this_00,(UCameraShakePattern *)pUVar4);
  *(undefined4 *)&pUVar4->_padding_ = 0x40000000;
  (pUVar4->LocationOffset).field0_0x0._s_0.X = 10.0;
  (pUVar4->LocationOffset).field0_0x0._s_0.Y = 0.0;
  (pUVar4->LocationOffset).field0_0x0._s_0.Z = 0.0;
  fVar1 = __real_3f800000;
  local_958.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_958.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_958.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  UCameraShakeBase::StartShake(this_00,(APlayerCameraManager *)0x0,__real_3f800000,World,&local_958)
  ;
  UCameraShakeBase::UpdateAndApplyCameraShake
            (this_00,fVar1,fVar1,(FMinimalViewInfo *)&local_8f8._s_0);
  ::FString::FString((FString *)&local_958,"Location offset");
  fVar1 = __real_38d1b717;
  pwVar5 = L"";
  if (local_958.Yaw._0_4_ != 0) {
    pwVar5 = (wchar_t *)local_958.Pitch;
  }
  local_938._s_0.X = ___xmm_4069000000000000405b800000000000;
  local_938._s_0.Y = _UNK_152319d18;
  local_938._s_0.Z = __real_4049000000000000;
  local_918._s_0.Z = local_8f8._s_0.Z;
  local_918._s_0.X = local_8f8._s_0.X;
  local_918._s_0.Y = local_8f8._s_0.Y;
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,pwVar5,(TVector<double> *)&local_918._s_0,
                     (TVector<double> *)&local_938._s_0,__real_38d1b717);
  if ((wchar_t *)local_958.Pitch != (wchar_t *)0x0) {
    FMemory::Free((void *)local_958.Pitch);
  }
  if (bVar2) {
    ::FString::FString((FString *)&local_958,"Rotation offset");
    pwVar5 = L"";
    if (local_958.Yaw._0_4_ != 0) {
      pwVar5 = (wchar_t *)local_958.Pitch;
    }
    local_918._s_0.X = ___xmm_40568000000000000000000000000000;
    local_918._s_0.Y = _UNK_1513b2f18;
    local_918._s_0.Z = 0.0;
    local_938._s_0.Z = dStack_8d0;
    local_938._s_0.X = dStack_8e0;
    local_938._s_0.Y = local_8d8;
    bVar2 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,pwVar5,(TRotator<double> *)&local_938._s_0,
                       (TRotator<double> *)&local_918._s_0,fVar1);
    if ((wchar_t *)local_958.Pitch != (wchar_t *)0x0) {
      FMemory::Free((void *)local_958.Pitch);
    }
    if (bVar2) {
      bVar2 = true;
      goto LAB_14ad163fd;
    }
  }
  bVar2 = false;
LAB_14ad163fd:
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  return bVar2;
}

// GetBeautifiedTestName @ 14ad16450

FString * __thiscall
FCameraShakeWorldOffsetTest::GetBeautifiedTestName
          (FCameraShakeWorldOffsetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Cameras.WorldOffsetCameraShake");
  return __return_storage_ptr__;
}

