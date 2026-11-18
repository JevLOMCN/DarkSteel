// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fb4f20

EAutomationTestFlags __thiscall
FPCGResetPointCenterTest_One::GetTestFlags(FPCGResetPointCenterTest_One *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fb4f30

bool __thiscall FPCGResetPointCenterTest_One::IsStressTest(FPCGResetPointCenterTest_One *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fb4f40

uint __thiscall
FPCGResetPointCenterTest_One::GetRequiredDeviceNum(FPCGResetPointCenterTest_One *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fb4f50

FString * __thiscall
FPCGResetPointCenterTest_One::GetTestSourceFileName
          (FPCGResetPointCenterTest_One *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGResetPointCenterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fb4f80

int __thiscall
FPCGResetPointCenterTest_One::GetTestSourceFileLine(FPCGResetPointCenterTest_One *this)

{
  return 0x60;
}

// GetTests @ 149fb4fb0

/* WARNING: Removing unreachable block (ram,0x000149fb509d) */
/* WARNING: Removing unreachable block (ram,0x000149fb5168) */

void __thiscall
FPCGResetPointCenterTest_One::GetTests
          (FPCGResetPointCenterTest_One *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ResetPointCenter.One");
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

// RunTest @ 149fb51d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGResetPointCenterTest_One::RunTest(FPCGResetPointCenterTest_One *this,FString *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  undefined1 uVar23;
  int iVar24;
  UClass *pUVar25;
  TQuat<double> *pTVar26;
  ForAnyElementType FVar27;
  FObjectPtr_u_0 FVar28;
  undefined1 auStackY_448 [32];
  FObjectPtr_u_0 local_418;
  undefined1 local_410 [24];
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  TVector<double>_u_0 local_388;
  TRotator<double> local_368;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 local_328;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2e8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  TTransform<double> local_288;
  TTransform<double> local_228;
  double *local_1c8 [2];
  int local_1b8;
  double *local_198 [2];
  int local_188;
  TQuat<double> local_168;
  double *local_148 [2];
  int local_138;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_388._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_388._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_388._s_0.Z = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_3a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_3a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_398 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_368.Pitch = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_368.Yaw = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_368.Roll = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  ResetPointCenterCommonTests::GenerateTestDataAndRun
            ((TVector<double> *)local_410,&local_368,(TVector<double> *)&local_388._s_0);
  uVar19 = local_410._0_8_;
  if ((*(int *)(local_410._0_8_ + 0x40) < 1) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar2 = (code *)swi(3);
    uVar23 = (*pcVar2)();
    return (bool)uVar23;
  }
  local_418 = (FObjectPtr_u_0)(*(FObjectPtr_u_0 **)(uVar19 + 0x38))->Handle;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fb52bd:
    if (local_418.Handle == (UObject *)0x0) goto LAB_149fb52dd;
    pUVar25 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    bVar22 = FObjectPtr::IsA((FObjectPtr *)&local_418,pUVar25);
    FVar28 = local_418;
    if (!bVar22) goto LAB_149fb52dd;
  }
  else {
    if (local_418.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_418.Handle);
      goto LAB_149fb52bd;
    }
LAB_149fb52dd:
    FVar28.Handle = (UObject *)0x0;
  }
  ::FString::FString((FString *)(local_410 + 8),"Output point data");
  if (FVar28.Handle == (UObject *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_3b8,L"Expected \'%s\' to be not null.");
    (*pcVar2)(this,&local_3b8,0);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    bVar22 = true;
  }
  else {
    bVar22 = false;
  }
  if ((void *)local_410._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_410._8_8_);
  }
  if (!bVar22) {
    iVar24 = (**(code **)(*(longlong *)FVar28.Handle + 0x488))(FVar28.Handle);
    ::FString::FString(&local_3f8,"Output point count");
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_3f8.Data.ArrayNum != 0) {
      FVar27.Data = local_3f8.Data.AllocatorInstance.Data;
    }
    bVar22 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,iVar24,1);
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    if (bVar22) {
      (**(code **)(*(longlong *)FVar28.Handle + 0x500))(FVar28.Handle,local_148);
      (**(code **)(*(longlong *)FVar28.Handle + 0x510))(FVar28.Handle,local_1c8);
      (**(code **)(*(longlong *)FVar28.Handle + 0x518))(FVar28.Handle,local_198);
      uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      uVar19 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      local_2a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      pTVar26 = UE::Math::TRotator<double>::Quaternion
                          (&UE::Math::TRotator<double>::ZeroRotator,&local_168);
      local_298 = (double)uVar21;
      dVar1 = pTVar26->X;
      dVar3 = pTVar26->Y;
      dVar4 = pTVar26->Z;
      dVar5 = pTVar26->W;
      local_2c8 = dVar1;
      dStack_2c0 = dVar3;
      local_2b8 = dVar4;
      dStack_2b0 = dVar5;
      if ((local_138 < 1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar22)) {
        pcVar2 = (code *)swi(3);
        uVar23 = (*pcVar2)();
        return (bool)uVar23;
      }
      dVar6 = *local_148[0];
      dVar7 = local_148[0][1];
      dVar8 = local_148[0][2];
      dVar9 = local_148[0][3];
      dVar10 = local_148[0][4];
      dVar11 = local_148[0][5];
      dVar12 = local_148[0][6];
      dVar13 = local_148[0][7];
      dVar14 = local_148[0][8];
      dVar15 = local_148[0][9];
      dVar16 = local_148[0][10];
      dVar17 = local_148[0][0xb];
      ::FString::FString(&local_3e8,"Output has the correct transform,");
      fVar18 = __real_38d1b717;
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_3e8.Data.ArrayNum != 0) {
        FVar27.Data = local_3e8.Data.AllocatorInstance.Data;
      }
      local_288.Translation.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_288.Translation.XY.m128d_f64[1] = _UNK_150689688;
      local_288.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_288.Translation.ZW.m128d_f64[1] = _UNK_150689518;
      local_288.Scale3D.XY.m128d_f64[0] = (double)uVar19;
      local_288.Scale3D.XY.m128d_f64[1] = (double)uVar20;
      local_288.Scale3D.ZW.m128d_f64[0] = (double)uVar21;
      local_288.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_288.Rotation.XY.m128d_f64[0] = dVar1;
      local_288.Rotation.XY.m128d_f64[1] = dVar3;
      local_288.Rotation.ZW.m128d_f64[0] = dVar4;
      local_288.Rotation.ZW.m128d_f64[1] = dVar5;
      local_228.Rotation.XY.m128d_f64[0] = dVar6;
      local_228.Rotation.XY.m128d_f64[1] = dVar7;
      local_228.Rotation.ZW.m128d_f64[0] = dVar8;
      local_228.Rotation.ZW.m128d_f64[1] = dVar9;
      local_228.Translation.XY.m128d_f64[0] = dVar10;
      local_228.Translation.XY.m128d_f64[1] = dVar11;
      local_228.Translation.ZW.m128d_f64[0] = dVar12;
      local_228.Translation.ZW.m128d_f64[1] = dVar13;
      local_228.Scale3D.XY.m128d_f64[0] = dVar14;
      local_228.Scale3D.XY.m128d_f64[1] = dVar15;
      local_228.Scale3D.ZW.m128d_f64[0] = dVar16;
      local_228.Scale3D.ZW.m128d_f64[1] = dVar17;
      bVar22 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,&local_228,&local_288,
                          __real_38d1b717);
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
      if (bVar22) {
        if ((local_1b8 < 1) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar22)) {
          pcVar2 = (code *)swi(3);
          uVar23 = (*pcVar2)();
          return (bool)uVar23;
        }
        dVar3 = *local_1c8[0];
        dVar4 = local_1c8[0][1];
        dVar1 = local_1c8[0][2];
        ::FString::FString(&local_3d8,"Output has the correct minimum bounds,");
        local_348._s_0.X = ___xmm_c000000000000000c000000000000000;
        local_348._s_0.Y = _UNK_15097b468;
        FVar27.Data = (FScriptContainerElement *)L"";
        if (local_3d8.Data.ArrayNum != 0) {
          FVar27.Data = local_3d8.Data.AllocatorInstance.Data;
        }
        local_348._s_0.Z = __real_c000000000000000;
        local_328._s_0.X = dVar3;
        local_328._s_0.Y = dVar4;
        local_328._s_0.Z = dVar1;
        bVar22 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,
                            (TVector<double> *)&local_328._s_0,(TVector<double> *)&local_348._s_0,
                            fVar18);
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
        if (bVar22) {
          if ((local_188 < 1) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar22)) {
            pcVar2 = (code *)swi(3);
            uVar23 = (*pcVar2)();
            return (bool)uVar23;
          }
          dVar3 = *local_198[0];
          dVar4 = local_198[0][1];
          dVar1 = local_198[0][2];
          ::FString::FString(&local_3c8,"Output has the correct maximum bounds,");
          FVar27.Data = (FScriptContainerElement *)L"";
          if (local_3c8.Data.ArrayNum != 0) {
            FVar27.Data = local_3c8.Data.AllocatorInstance.Data;
          }
          local_308._s_0.X = 0.0;
          local_308._s_0.Y = 0.0;
          local_308._s_0.Z = 0.0;
          local_2e8._s_0.X = dVar3;
          local_2e8._s_0.Y = dVar4;
          local_2e8._s_0.Z = dVar1;
          bVar22 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,
                              (TVector<double> *)&local_2e8._s_0,(TVector<double> *)&local_308._s_0,
                              fVar18);
          if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
          }
          if (bVar22) {
            bVar22 = true;
            goto LAB_149fb578e;
          }
        }
      }
    }
  }
  bVar22 = false;
LAB_149fb578e:
  if ((undefined8 *)local_410._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_410._0_8_)(local_410._0_8_,1);
  }
  return bVar22;
}

// GetBeautifiedTestName @ 149fb5810

FString * __thiscall
FPCGResetPointCenterTest_One::GetBeautifiedTestName
          (FPCGResetPointCenterTest_One *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ResetPointCenter.One");
  return __return_storage_ptr__;
}

