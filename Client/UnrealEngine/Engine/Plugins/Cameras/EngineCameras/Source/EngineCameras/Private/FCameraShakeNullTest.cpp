// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 8

// GetTestFlags @ 14ad154f0

EAutomationTestFlags __thiscall FCameraShakeNullTest::GetTestFlags(FCameraShakeNullTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ad15500

bool __thiscall FCameraShakeNullTest::IsStressTest(FCameraShakeNullTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ad15510

uint __thiscall FCameraShakeNullTest::GetRequiredDeviceNum(FCameraShakeNullTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ad15520

FString * __thiscall
FCameraShakeNullTest::GetTestSourceFileName
          (FCameraShakeNullTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Tests\\CameraShakeTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ad15550

int __thiscall FCameraShakeNullTest::GetTestSourceFileLine(FCameraShakeNullTest *this)

{
  return 0xd;
}

// GetTests @ 14ad15560

/* WARNING: Removing unreachable block (ram,0x00014ad1564d) */
/* WARNING: Removing unreachable block (ram,0x00014ad15718) */

void __thiscall
FCameraShakeNullTest::GetTests
          (FCameraShakeNullTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Cameras.NullCameraShake");
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

// RunTest @ 14ad15740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FCameraShakeNullTest::RunTest(FCameraShakeNullTest *this,FString *param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  UObject *pUVar9;
  UCameraShakeBase *this_00;
  UConstantCameraShakePattern *pUVar10;
  wchar_t *pwVar11;
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
  pUVar9 = GetTransientPackageAsObject();
  this_00 = (UCameraShakeBase *)NewObject<UTestCameraShake>(pUVar9);
  pUVar10 = NewObject<UConstantCameraShakePattern>((UObject *)this_00);
  UCameraShakeBase::SetRootShakePattern(this_00,(UCameraShakePattern *)pUVar10);
  fVar1 = __real_3f800000;
  *(undefined4 *)&pUVar10->_padding_ = 0x40000000;
  local_978.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_978.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_978.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  UCameraShakeBase::StartShake(this_00,(APlayerCameraManager *)0x0,fVar1,CameraLocal,&local_978);
  UCameraShakeBase::UpdateAndApplyCameraShake
            (this_00,fVar1,fVar1,(FMinimalViewInfo *)&local_918._s_0);
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  ::FString::FString((FString *)&local_978,"Location offset");
  fVar1 = __real_38d1b717;
  pwVar11 = L"";
  if (local_978.Yaw._0_4_ != 0) {
    pwVar11 = (wchar_t *)local_978.Pitch;
  }
  local_958._s_0.X = (double)uVar2;
  local_958._s_0.Y = (double)uVar3;
  local_958._s_0.Z = (double)uVar4;
  local_938._s_0.X = local_918._s_0.X;
  local_938._s_0.Y = local_918._s_0.Y;
  local_938._s_0.Z = local_918._s_0.Z;
  bVar8 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,pwVar11,(TVector<double> *)&local_938._s_0,
                     (TVector<double> *)&local_958._s_0,__real_38d1b717);
  if ((wchar_t *)local_978.Pitch != (wchar_t *)0x0) {
    FMemory::Free((void *)local_978.Pitch);
  }
  dVar7 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar6 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar5 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  if (bVar8) {
    ::FString::FString((FString *)&local_978,"Rotation offset");
    pwVar11 = L"";
    if (local_978.Yaw._0_4_ != 0) {
      pwVar11 = (wchar_t *)local_978.Pitch;
    }
    local_938._s_0.X = dVar5;
    local_938._s_0.Y = dVar6;
    local_938._s_0.Z = dVar7;
    local_958._s_0.X = local_900;
    local_958._s_0.Y = dStack_8f8;
    local_958._s_0.Z = local_8f0;
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,pwVar11,(TRotator<double> *)&local_958._s_0,
                       (TRotator<double> *)&local_938._s_0,fVar1);
    if ((wchar_t *)local_978.Pitch != (wchar_t *)0x0) {
      FMemory::Free((void *)local_978.Pitch);
    }
    if (bVar8) {
      bVar8 = true;
      goto LAB_14ad15910;
    }
  }
  bVar8 = false;
LAB_14ad15910:
  if (local_140 != (void *)0x0) {
    FMemory::Free(local_140);
  }
  return bVar8;
}

// GetBeautifiedTestName @ 14ad15970

FString * __thiscall
FCameraShakeNullTest::GetBeautifiedTestName
          (FCameraShakeNullTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Cameras.NullCameraShake");
  return __return_storage_ptr__;
}

