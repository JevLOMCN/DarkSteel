// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fcf930

EAutomationTestFlags __thiscall
FPCGCreatePointsGridTest_OversizedCell::GetTestFlags(FPCGCreatePointsGridTest_OversizedCell *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fcf940

bool __thiscall
FPCGCreatePointsGridTest_OversizedCell::IsStressTest(FPCGCreatePointsGridTest_OversizedCell *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fcf950

uint __thiscall
FPCGCreatePointsGridTest_OversizedCell::GetRequiredDeviceNum
          (FPCGCreatePointsGridTest_OversizedCell *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fcf960

FString * __thiscall
FPCGCreatePointsGridTest_OversizedCell::GetTestSourceFileName
          (FPCGCreatePointsGridTest_OversizedCell *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGCreatePointsGridTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fcf990

int __thiscall
FPCGCreatePointsGridTest_OversizedCell::GetTestSourceFileLine
          (FPCGCreatePointsGridTest_OversizedCell *this)

{
  return 0x129;
}

// GetTests @ 149fcf9a0

/* WARNING: Removing unreachable block (ram,0x000149fcfa8d) */
/* WARNING: Removing unreachable block (ram,0x000149fcfb58) */

void __thiscall
FPCGCreatePointsGridTest_OversizedCell::GetTests
          (FPCGCreatePointsGridTest_OversizedCell *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.CreatePointsGrid.OversizedCell");
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

// RunTest @ 149fcfb80

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
FPCGCreatePointsGridTest_OversizedCell::RunTest
          (FPCGCreatePointsGridTest_OversizedCell *this,FString *param_1)

{
  int iVar1;
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
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 uVar24;
  UClass *pUVar25;
  TQuat<double> *pTVar26;
  ForAnyElementType FVar27;
  FObjectPtr_u_0 FVar28;
  undefined1 auStackY_348 [32];
  FObjectPtr_u_0 local_318;
  undefined8 *local_310;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  double local_2b8;
  double dStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  TVector<double>_u_0 local_288;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TQuat<double> local_168;
  double *local_148 [2];
  int local_138;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2a8 = ___xmm_40790000000000004079000000000000;
  uStack_2a0 = _UNK_152030128;
  local_298 = __real_4079000000000000;
  local_288._s_0.Z = __real_4059000000000000;
  local_288._s_0.X = ___xmm_40590000000000004059000000000000;
  local_288._s_0.Y = _UNK_1512468d8;
  CreatePointsGridCommonTests::GenerateTestDataAndRunGrid
            ((EPCGPointPosition)&local_310,(TVector<double> *)0x0,(TVector<double> *)&local_288._s_0
            );
  puVar22 = local_310;
  iVar1 = *(int *)(local_310 + 8);
  ::FString::FString(&local_308,"Output count");
  FVar27.Data = (FScriptContainerElement *)L"";
  if (local_308.Data.ArrayNum != 0) {
    FVar27.Data = local_308.Data.AllocatorInstance.Data;
  }
  bVar23 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,iVar1,1);
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  if (bVar23) {
    if ((*(int *)(puVar22 + 8) < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar2 = (code *)swi(3);
      uVar24 = (*pcVar2)();
      return (bool)uVar24;
    }
    local_318 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar22[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fcfcb5:
      if (local_318.Handle == (UObject *)0x0) goto LAB_149fcfcd7;
      pUVar25 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar23 = FObjectPtr::IsA((FObjectPtr *)&local_318,pUVar25);
      FVar28 = local_318;
      if (!bVar23) goto LAB_149fcfcd7;
    }
    else {
      if (local_318.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_318.Handle);
        goto LAB_149fcfcb5;
      }
LAB_149fcfcd7:
      FVar28.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_2f8,"Output point data");
    if (FVar28.Handle == (UObject *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_2c8,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_2c8,0);
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      bVar23 = true;
    }
    else {
      bVar23 = false;
    }
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (!bVar23) {
      (**(code **)(*(longlong *)FVar28.Handle + 0x500))(FVar28.Handle,local_148);
      iVar1 = local_138;
      ::FString::FString(&local_2e8,"Output point count");
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_2e8.Data.ArrayNum != 0) {
        FVar27.Data = local_2e8.Data.AllocatorInstance.Data;
      }
      bVar23 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,iVar1,1);
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      uVar19 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      if (bVar23) {
        local_248 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_240 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        pTVar26 = UE::Math::TRotator<double>::Quaternion
                            (&UE::Math::TRotator<double>::ZeroRotator,&local_168);
        local_238 = (double)uVar21;
        local_2b8 = 0.0;
        dStack_2b0 = 0.0;
        dVar3 = pTVar26->X;
        dVar4 = pTVar26->Y;
        dVar5 = pTVar26->Z;
        dVar6 = pTVar26->W;
        local_268 = dVar3;
        dStack_260 = dVar4;
        local_258 = dVar5;
        dStack_250 = dVar6;
        if ((local_138 < 1) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar23)) {
          pcVar2 = (code *)swi(3);
          uVar24 = (*pcVar2)();
          return (bool)uVar24;
        }
        dVar7 = *local_148[0];
        dVar8 = local_148[0][1];
        dVar9 = local_148[0][2];
        dVar10 = local_148[0][3];
        dVar11 = local_148[0][4];
        dVar12 = local_148[0][5];
        dVar13 = local_148[0][6];
        dVar14 = local_148[0][7];
        dVar15 = local_148[0][8];
        dVar16 = local_148[0][9];
        dVar17 = local_148[0][10];
        dVar18 = local_148[0][0xb];
        ::FString::FString(&local_2d8,"Point 0 has the correct transform,");
        local_228.Translation.XY.m128d_f64[0] = local_2b8;
        local_228.Translation.XY.m128d_f64[1] = dStack_2b0;
        FVar27.Data = (FScriptContainerElement *)L"";
        if (local_2d8.Data.ArrayNum != 0) {
          FVar27.Data = local_2d8.Data.AllocatorInstance.Data;
        }
        local_228.Translation.ZW.m128d_f64[0] = local_2b8;
        local_228.Translation.ZW.m128d_f64[1] = dStack_2b0;
        local_228.Scale3D.XY.m128d_f64[0] = (double)uVar19;
        local_228.Scale3D.XY.m128d_f64[1] = (double)uVar20;
        local_228.Scale3D.ZW.m128d_f64[0] = (double)uVar21;
        local_228.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_228.Rotation.XY.m128d_f64[0] = dVar3;
        local_228.Rotation.XY.m128d_f64[1] = dVar4;
        local_228.Rotation.ZW.m128d_f64[0] = dVar5;
        local_228.Rotation.ZW.m128d_f64[1] = dVar6;
        local_1c8.Rotation.XY.m128d_f64[0] = dVar7;
        local_1c8.Rotation.XY.m128d_f64[1] = dVar8;
        local_1c8.Rotation.ZW.m128d_f64[0] = dVar9;
        local_1c8.Rotation.ZW.m128d_f64[1] = dVar10;
        local_1c8.Translation.XY.m128d_f64[0] = dVar11;
        local_1c8.Translation.XY.m128d_f64[1] = dVar12;
        local_1c8.Translation.ZW.m128d_f64[0] = dVar13;
        local_1c8.Translation.ZW.m128d_f64[1] = dVar14;
        local_1c8.Scale3D.XY.m128d_f64[0] = dVar15;
        local_1c8.Scale3D.XY.m128d_f64[1] = dVar16;
        local_1c8.Scale3D.ZW.m128d_f64[0] = dVar17;
        local_1c8.Scale3D.ZW.m128d_f64[1] = dVar18;
        bVar23 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,&local_1c8,&local_228
                            ,__real_38d1b717);
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        if (bVar23) {
          bVar23 = true;
          goto LAB_149fcffd9;
        }
      }
    }
  }
  bVar23 = false;
LAB_149fcffd9:
  if (local_310 != (undefined8 *)0x0) {
    (**(code **)*local_310)(local_310,1);
  }
  return bVar23;
}

// GetBeautifiedTestName @ 149fd0030

FString * __thiscall
FPCGCreatePointsGridTest_OversizedCell::GetBeautifiedTestName
          (FPCGCreatePointsGridTest_OversizedCell *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.CreatePointsGrid.OversizedCell");
  return __return_storage_ptr__;
}

