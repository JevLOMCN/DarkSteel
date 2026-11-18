// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fc2070

EAutomationTestFlags __thiscall
FPCGCreatePointsGridTest_CellCorner::GetTestFlags(FPCGCreatePointsGridTest_CellCorner *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fc2080

bool __thiscall
FPCGCreatePointsGridTest_CellCorner::IsStressTest(FPCGCreatePointsGridTest_CellCorner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fc2090

uint __thiscall
FPCGCreatePointsGridTest_CellCorner::GetRequiredDeviceNum(FPCGCreatePointsGridTest_CellCorner *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fc20a0

FString * __thiscall
FPCGCreatePointsGridTest_CellCorner::GetTestSourceFileName
          (FPCGCreatePointsGridTest_CellCorner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGCreatePointsGridTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fc20d0

int __thiscall
FPCGCreatePointsGridTest_CellCorner::GetTestSourceFileLine
          (FPCGCreatePointsGridTest_CellCorner *this)

{
  return 0x4a;
}

// GetTests @ 149fc20e0

/* WARNING: Removing unreachable block (ram,0x000149fc21cd) */
/* WARNING: Removing unreachable block (ram,0x000149fc2298) */

void __thiscall
FPCGCreatePointsGridTest_CellCorner::GetTests
          (FPCGCreatePointsGridTest_CellCorner *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.CreatePointsGrid.CellCorner");
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

// RunTest @ 149fc22c0

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
FPCGCreatePointsGridTest_CellCorner::RunTest
          (FPCGCreatePointsGridTest_CellCorner *this,FString *param_1)

{
  double *pdVar1;
  int iVar2;
  code *pcVar3;
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
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 uVar25;
  UClass *pUVar26;
  TQuat<double> *pTVar27;
  longlong lVar28;
  ForAnyElementType FVar29;
  FObjectPtr_u_0 FVar30;
  undefined1 auStackY_7d8 [32];
  FObjectPtr_u_0 local_7a8;
  undefined8 *local_7a0;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  TVector<double>_u_0 local_6e8;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double dStack_690;
  double local_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  double local_628;
  double dStack_620;
  double local_618;
  double local_610;
  double dStack_608;
  double local_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double local_5e0;
  double dStack_5d8;
  double local_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  TTransform<double> local_5a8;
  TTransform<double> local_548;
  TTransform<double> local_4e8;
  TTransform<double> local_488;
  TTransform<double> local_428;
  TTransform<double> local_3c8;
  TTransform<double> local_368;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TQuat<double> local_1e8;
  TQuat<double> local_1c8;
  TQuat<double> local_1a8;
  TQuat<double> local_188;
  TQuat<double> local_168;
  double *local_148;
  int local_140;
  int local_13c;
  int local_138;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  local_708 = ___xmm_40590000000000004059000000000000;
  uStack_700 = _UNK_1512468d8;
  local_6f8 = __real_4059000000000000;
  local_6e8._s_0.Z = __real_4049000000000000;
  local_6e8._s_0.X = ___xmm_407f400000000000407f400000000000;
  local_6e8._s_0.Y = _UNK_15201e8e8;
  CreatePointsGridCommonTests::GenerateTestDataAndRunGrid
            ((EPCGPointPosition)&local_7a0,
             (TVector<double> *)CONCAT71((int7)((ulonglong)param_1 >> 8),1),
             (TVector<double> *)&local_6e8._s_0);
  puVar23 = local_7a0;
  iVar2 = *(int *)(local_7a0 + 8);
  ::FString::FString(&local_798,"Output count");
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_798.Data.ArrayNum != 0) {
    FVar29.Data = local_798.Data.AllocatorInstance.Data;
  }
  bVar24 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,iVar2,1);
  if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_798.Data.AllocatorInstance.Data);
  }
  if (bVar24) {
    if ((*(int *)(puVar23 + 8) < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar3 = (code *)swi(3);
      uVar25 = (*pcVar3)();
      return (bool)uVar25;
    }
    local_7a8 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar23[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fc244d:
      if (local_7a8.Handle == (UObject *)0x0) goto LAB_149fc246f;
      pUVar26 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar24 = FObjectPtr::IsA((FObjectPtr *)&local_7a8,pUVar26);
      FVar30 = local_7a8;
      if (!bVar24) goto LAB_149fc246f;
    }
    else {
      if (local_7a8.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_7a8.Handle);
        goto LAB_149fc244d;
      }
LAB_149fc246f:
      FVar30.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_788,"Output point data");
    if (FVar30.Handle == (UObject *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_718,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_718,0);
      if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_718.Data.AllocatorInstance.Data);
      }
      bVar24 = true;
    }
    else {
      bVar24 = false;
    }
    if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.Data.AllocatorInstance.Data);
    }
    if (!bVar24) {
      (**(code **)(*(longlong *)FVar30.Handle + 0x500))(FVar30.Handle,&local_148);
      iVar2 = local_138;
      ::FString::FString(&local_778,"Output point count");
      FVar29.Data = (FScriptContainerElement *)L"";
      if (local_778.Data.ArrayNum != 0) {
        FVar29.Data = local_778.Data.AllocatorInstance.Data;
      }
      bVar24 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,iVar2,0xf2);
      if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_778.Data.AllocatorInstance.Data);
      }
      uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      uVar20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      if (bVar24) {
        local_628 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_620 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        pTVar27 = UE::Math::TRotator<double>::Quaternion
                            (&UE::Math::TRotator<double>::ZeroRotator,&local_1e8);
        local_618 = (double)uVar22;
        dVar4 = pTVar27->X;
        dVar5 = pTVar27->Y;
        dVar6 = pTVar27->Z;
        dVar7 = pTVar27->W;
        local_6c8 = dVar4;
        dStack_6c0 = dVar5;
        local_6b8 = dVar6;
        dStack_6b0 = dVar7;
        if ((local_138 < 1) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar24)) {
          pcVar3 = (code *)swi(3);
          uVar25 = (*pcVar3)();
          return (bool)uVar25;
        }
        dVar8 = *local_148;
        dVar9 = local_148[1];
        dVar10 = local_148[2];
        dVar11 = local_148[3];
        dVar12 = local_148[4];
        dVar13 = local_148[5];
        dVar14 = local_148[6];
        dVar15 = local_148[7];
        dVar16 = local_148[8];
        dVar17 = local_148[9];
        dVar18 = local_148[10];
        dVar19 = local_148[0xb];
        ::FString::FString(&local_768,"Point 0 has the correct transform,");
        FVar29.Data = (FScriptContainerElement *)L"";
        if (local_768.Data.ArrayNum != 0) {
          FVar29.Data = local_768.Data.AllocatorInstance.Data;
        }
        local_5a8.Translation.XY.m128d_f64[0] = ___xmm_c07f400000000000c07f400000000000;
        local_5a8.Translation.XY.m128d_f64[1] = _UNK_15201e928;
        local_5a8.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c049000000000000;
        local_5a8.Translation.ZW.m128d_f64[1] = _UNK_15202fd38;
        local_5a8.Scale3D.XY.m128d_f64[0] = (double)uVar20;
        local_5a8.Scale3D.XY.m128d_f64[1] = (double)uVar21;
        local_5a8.Scale3D.ZW.m128d_f64[0] = (double)uVar22;
        local_5a8.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_5a8.Rotation.XY.m128d_f64[0] = dVar4;
        local_5a8.Rotation.XY.m128d_f64[1] = dVar5;
        local_5a8.Rotation.ZW.m128d_f64[0] = dVar6;
        local_5a8.Rotation.ZW.m128d_f64[1] = dVar7;
        local_548.Rotation.XY.m128d_f64[0] = dVar8;
        local_548.Rotation.XY.m128d_f64[1] = dVar9;
        local_548.Rotation.ZW.m128d_f64[0] = dVar10;
        local_548.Rotation.ZW.m128d_f64[1] = dVar11;
        local_548.Translation.XY.m128d_f64[0] = dVar12;
        local_548.Translation.XY.m128d_f64[1] = dVar13;
        local_548.Translation.ZW.m128d_f64[0] = dVar14;
        local_548.Translation.ZW.m128d_f64[1] = dVar15;
        local_548.Scale3D.XY.m128d_f64[0] = dVar16;
        local_548.Scale3D.XY.m128d_f64[1] = dVar17;
        local_548.Scale3D.ZW.m128d_f64[0] = dVar18;
        local_548.Scale3D.ZW.m128d_f64[1] = dVar19;
        bVar24 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,&local_548,&local_5a8
                            ,__real_38d1b717);
        if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_768.Data.AllocatorInstance.Data);
        }
        uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        if (bVar24) {
          local_610 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          dStack_608 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          pTVar27 = UE::Math::TRotator<double>::Quaternion
                              (&UE::Math::TRotator<double>::ZeroRotator,&local_1c8);
          local_600 = (double)uVar22;
          dVar4 = pTVar27->X;
          dVar5 = pTVar27->Y;
          dVar6 = pTVar27->Z;
          dVar7 = pTVar27->W;
          local_6a8 = dVar4;
          dStack_6a0 = dVar5;
          local_698 = dVar6;
          dStack_690 = dVar7;
          if ((local_138 < 0x18) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar24)) {
            pcVar3 = (code *)swi(3);
            uVar25 = (*pcVar3)();
            return (bool)uVar25;
          }
          lVar28 = (longlong)(int)(0x17 % (longlong)local_13c) * (longlong)local_140;
          dVar8 = *(double *)(lVar28 + (longlong)local_148);
          dVar9 = ((double *)(lVar28 + (longlong)local_148))[1];
          pdVar1 = (double *)(lVar28 + 0x10 + (longlong)local_148);
          dVar10 = *pdVar1;
          dVar11 = pdVar1[1];
          pdVar1 = (double *)(lVar28 + 0x20 + (longlong)local_148);
          dVar12 = *pdVar1;
          dVar13 = pdVar1[1];
          pdVar1 = (double *)(lVar28 + 0x30 + (longlong)local_148);
          dVar14 = *pdVar1;
          dVar15 = pdVar1[1];
          pdVar1 = (double *)(lVar28 + 0x40 + (longlong)local_148);
          dVar16 = *pdVar1;
          dVar17 = pdVar1[1];
          pdVar1 = (double *)(lVar28 + 0x50 + (longlong)local_148);
          dVar18 = *pdVar1;
          dVar19 = pdVar1[1];
          ::FString::FString(&local_758,"Point 23 has the correct transform,");
          local_4e8.Translation.XY.m128d_f64[0] = ___xmm_c072c00000000000c079000000000000;
          local_4e8.Translation.XY.m128d_f64[1] = _UNK_152030238;
          FVar29.Data = (FScriptContainerElement *)L"";
          if (local_758.Data.ArrayNum != 0) {
            FVar29.Data = local_758.Data.AllocatorInstance.Data;
          }
          local_4e8.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c049000000000000;
          local_4e8.Translation.ZW.m128d_f64[1] = _UNK_15202fd38;
          local_4e8.Scale3D.XY.m128d_f64[0] = (double)uVar20;
          local_4e8.Scale3D.XY.m128d_f64[1] = (double)uVar21;
          local_4e8.Scale3D.ZW.m128d_f64[0] = (double)uVar22;
          local_4e8.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_4e8.Rotation.XY.m128d_f64[0] = dVar4;
          local_4e8.Rotation.XY.m128d_f64[1] = dVar5;
          local_4e8.Rotation.ZW.m128d_f64[0] = dVar6;
          local_4e8.Rotation.ZW.m128d_f64[1] = dVar7;
          local_488.Rotation.XY.m128d_f64[0] = dVar8;
          local_488.Rotation.XY.m128d_f64[1] = dVar9;
          local_488.Rotation.ZW.m128d_f64[0] = dVar10;
          local_488.Rotation.ZW.m128d_f64[1] = dVar11;
          local_488.Translation.XY.m128d_f64[0] = dVar12;
          local_488.Translation.XY.m128d_f64[1] = dVar13;
          local_488.Translation.ZW.m128d_f64[0] = dVar14;
          local_488.Translation.ZW.m128d_f64[1] = dVar15;
          local_488.Scale3D.XY.m128d_f64[0] = dVar16;
          local_488.Scale3D.XY.m128d_f64[1] = dVar17;
          local_488.Scale3D.ZW.m128d_f64[0] = dVar18;
          local_488.Scale3D.ZW.m128d_f64[1] = dVar19;
          bVar24 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,&local_488,
                              &local_4e8,__real_38d1b717);
          if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_758.Data.AllocatorInstance.Data);
          }
          uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          uVar20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          if (bVar24) {
            local_5f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            dStack_5f0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            pTVar27 = UE::Math::TRotator<double>::Quaternion
                                (&UE::Math::TRotator<double>::ZeroRotator,&local_1a8);
            local_5e8 = (double)uVar22;
            dVar4 = pTVar27->X;
            dVar5 = pTVar27->Y;
            dVar6 = pTVar27->Z;
            dVar7 = pTVar27->W;
            local_688 = dVar4;
            dStack_680 = dVar5;
            local_678 = dVar6;
            dStack_670 = dVar7;
            if ((local_138 < 0x42) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar24)) {
              pcVar3 = (code *)swi(3);
              uVar25 = (*pcVar3)();
              return (bool)uVar25;
            }
            lVar28 = (longlong)(int)(0x41 % (longlong)local_13c) * (longlong)local_140;
            dVar8 = *(double *)(lVar28 + (longlong)local_148);
            dVar9 = ((double *)(lVar28 + (longlong)local_148))[1];
            pdVar1 = (double *)(lVar28 + 0x10 + (longlong)local_148);
            dVar10 = *pdVar1;
            dVar11 = pdVar1[1];
            pdVar1 = (double *)(lVar28 + 0x20 + (longlong)local_148);
            dVar12 = *pdVar1;
            dVar13 = pdVar1[1];
            pdVar1 = (double *)(lVar28 + 0x30 + (longlong)local_148);
            dVar14 = *pdVar1;
            dVar15 = pdVar1[1];
            pdVar1 = (double *)(lVar28 + 0x40 + (longlong)local_148);
            dVar16 = *pdVar1;
            dVar17 = pdVar1[1];
            pdVar1 = (double *)(lVar28 + 0x50 + (longlong)local_148);
            dVar18 = *pdVar1;
            dVar19 = pdVar1[1];
            ::FString::FString(&local_748,"Point 65 has the correct transform,");
            local_428.Translation.XY.m128d_f64[0] = ___xmm_0000000000000000407f400000000000;
            local_428.Translation.XY.m128d_f64[1] = _UNK_15202fd08;
            FVar29.Data = (FScriptContainerElement *)L"";
            if (local_748.Data.ArrayNum != 0) {
              FVar29.Data = local_748.Data.AllocatorInstance.Data;
            }
            local_428.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c049000000000000;
            local_428.Translation.ZW.m128d_f64[1] = _UNK_15202fd38;
            local_428.Scale3D.XY.m128d_f64[0] = (double)uVar20;
            local_428.Scale3D.XY.m128d_f64[1] = (double)uVar21;
            local_428.Scale3D.ZW.m128d_f64[0] = (double)uVar22;
            local_428.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_428.Rotation.XY.m128d_f64[0] = dVar4;
            local_428.Rotation.XY.m128d_f64[1] = dVar5;
            local_428.Rotation.ZW.m128d_f64[0] = dVar6;
            local_428.Rotation.ZW.m128d_f64[1] = dVar7;
            local_3c8.Rotation.XY.m128d_f64[0] = dVar8;
            local_3c8.Rotation.XY.m128d_f64[1] = dVar9;
            local_3c8.Rotation.ZW.m128d_f64[0] = dVar10;
            local_3c8.Rotation.ZW.m128d_f64[1] = dVar11;
            local_3c8.Translation.XY.m128d_f64[0] = dVar12;
            local_3c8.Translation.XY.m128d_f64[1] = dVar13;
            local_3c8.Translation.ZW.m128d_f64[0] = dVar14;
            local_3c8.Translation.ZW.m128d_f64[1] = dVar15;
            local_3c8.Scale3D.XY.m128d_f64[0] = dVar16;
            local_3c8.Scale3D.XY.m128d_f64[1] = dVar17;
            local_3c8.Scale3D.ZW.m128d_f64[0] = dVar18;
            local_3c8.Scale3D.ZW.m128d_f64[1] = dVar19;
            bVar24 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,&local_3c8,
                                &local_428,__real_38d1b717);
            if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_748.Data.AllocatorInstance.Data);
            }
            uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            uVar20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            if (bVar24) {
              local_5e0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              dStack_5d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
              pTVar27 = UE::Math::TRotator<double>::Quaternion
                                  (&UE::Math::TRotator<double>::ZeroRotator,&local_188);
              local_5d0 = (double)uVar22;
              dVar4 = pTVar27->X;
              dVar5 = pTVar27->Y;
              dVar6 = pTVar27->Z;
              dVar7 = pTVar27->W;
              local_668 = dVar4;
              dStack_660 = dVar5;
              local_658 = dVar6;
              dStack_650 = dVar7;
              if ((local_138 < 0x5d) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar24)) {
                pcVar3 = (code *)swi(3);
                uVar25 = (*pcVar3)();
                return (bool)uVar25;
              }
              lVar28 = (longlong)(int)(0x5c % (longlong)local_13c) * (longlong)local_140;
              dVar8 = *(double *)(lVar28 + (longlong)local_148);
              dVar9 = ((double *)(lVar28 + (longlong)local_148))[1];
              pdVar1 = (double *)(lVar28 + 0x10 + (longlong)local_148);
              dVar10 = *pdVar1;
              dVar11 = pdVar1[1];
              pdVar1 = (double *)(lVar28 + 0x20 + (longlong)local_148);
              dVar12 = *pdVar1;
              dVar13 = pdVar1[1];
              pdVar1 = (double *)(lVar28 + 0x30 + (longlong)local_148);
              dVar14 = *pdVar1;
              dVar15 = pdVar1[1];
              pdVar1 = (double *)(lVar28 + 0x40 + (longlong)local_148);
              dVar16 = *pdVar1;
              dVar17 = pdVar1[1];
              pdVar1 = (double *)(lVar28 + 0x50 + (longlong)local_148);
              dVar18 = *pdVar1;
              dVar19 = pdVar1[1];
              ::FString::FString(&local_738,"Point 92 has the correct transform,");
              local_368.Translation.XY.m128d_f64[0] = ___xmm_4072c00000000000c059000000000000;
              local_368.Translation.XY.m128d_f64[1] = _UNK_152030118;
              FVar29.Data = (FScriptContainerElement *)L"";
              if (local_738.Data.ArrayNum != 0) {
                FVar29.Data = local_738.Data.AllocatorInstance.Data;
              }
              local_368.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c049000000000000;
              local_368.Translation.ZW.m128d_f64[1] = _UNK_15202fd38;
              local_368.Scale3D.XY.m128d_f64[0] = (double)uVar20;
              local_368.Scale3D.XY.m128d_f64[1] = (double)uVar21;
              local_368.Scale3D.ZW.m128d_f64[0] = (double)uVar22;
              local_368.Scale3D.ZW.m128d_f64[1] = 0.0;
              local_368.Rotation.XY.m128d_f64[0] = dVar4;
              local_368.Rotation.XY.m128d_f64[1] = dVar5;
              local_368.Rotation.ZW.m128d_f64[0] = dVar6;
              local_368.Rotation.ZW.m128d_f64[1] = dVar7;
              local_308.Rotation.XY.m128d_f64[0] = dVar8;
              local_308.Rotation.XY.m128d_f64[1] = dVar9;
              local_308.Rotation.ZW.m128d_f64[0] = dVar10;
              local_308.Rotation.ZW.m128d_f64[1] = dVar11;
              local_308.Translation.XY.m128d_f64[0] = dVar12;
              local_308.Translation.XY.m128d_f64[1] = dVar13;
              local_308.Translation.ZW.m128d_f64[0] = dVar14;
              local_308.Translation.ZW.m128d_f64[1] = dVar15;
              local_308.Scale3D.XY.m128d_f64[0] = dVar16;
              local_308.Scale3D.XY.m128d_f64[1] = dVar17;
              local_308.Scale3D.ZW.m128d_f64[0] = dVar18;
              local_308.Scale3D.ZW.m128d_f64[1] = dVar19;
              bVar24 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,&local_308,
                                  &local_368,__real_38d1b717);
              if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_738.Data.AllocatorInstance.Data);
              }
              uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
              uVar20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              if (bVar24) {
                local_5c8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
                dStack_5c0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
                pTVar27 = UE::Math::TRotator<double>::Quaternion
                                    (&UE::Math::TRotator<double>::ZeroRotator,&local_168);
                local_5b8 = (double)uVar22;
                dVar4 = pTVar27->X;
                dVar5 = pTVar27->Y;
                dVar6 = pTVar27->Z;
                dVar7 = pTVar27->W;
                local_648 = dVar4;
                dStack_640 = dVar5;
                local_638 = dVar6;
                dStack_630 = dVar7;
                if ((local_138 < 0x92) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < NumElements)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                        ,0x8b,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar24)) {
                  pcVar3 = (code *)swi(3);
                  uVar25 = (*pcVar3)();
                  return (bool)uVar25;
                }
                lVar28 = (longlong)(int)(0x91 % (longlong)local_13c) * (longlong)local_140;
                dVar8 = *(double *)(lVar28 + (longlong)local_148);
                dVar9 = ((double *)(lVar28 + (longlong)local_148))[1];
                pdVar1 = (double *)(lVar28 + 0x10 + (longlong)local_148);
                dVar10 = *pdVar1;
                dVar11 = pdVar1[1];
                pdVar1 = (double *)(lVar28 + 0x20 + (longlong)local_148);
                dVar12 = *pdVar1;
                dVar13 = pdVar1[1];
                pdVar1 = (double *)(lVar28 + 0x30 + (longlong)local_148);
                dVar14 = *pdVar1;
                dVar15 = pdVar1[1];
                pdVar1 = (double *)(lVar28 + 0x40 + (longlong)local_148);
                dVar16 = *pdVar1;
                dVar17 = pdVar1[1];
                local_148 = (double *)(lVar28 + 0x50 + (longlong)local_148);
                dVar18 = *local_148;
                dVar19 = local_148[1];
                ::FString::FString(&local_728,"Point 145 has the correct transform,");
                FVar29.Data = (FScriptContainerElement *)L"";
                if (local_728.Data.ArrayNum != 0) {
                  FVar29.Data = local_728.Data.AllocatorInstance.Data;
                }
                local_2a8.Translation.XY.m128d_f64[0] = ___xmm_c072c00000000000c072c00000000000;
                local_2a8.Translation.XY.m128d_f64[1] = _UNK_152030228;
                local_2a8.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000004049000000000000;
                local_2a8.Translation.ZW.m128d_f64[1] = _UNK_15149cb08;
                local_2a8.Scale3D.XY.m128d_f64[0] = (double)uVar20;
                local_2a8.Scale3D.XY.m128d_f64[1] = (double)uVar21;
                local_2a8.Scale3D.ZW.m128d_f64[0] = (double)uVar22;
                local_2a8.Scale3D.ZW.m128d_f64[1] = 0.0;
                local_2a8.Rotation.XY.m128d_f64[0] = dVar4;
                local_2a8.Rotation.XY.m128d_f64[1] = dVar5;
                local_2a8.Rotation.ZW.m128d_f64[0] = dVar6;
                local_2a8.Rotation.ZW.m128d_f64[1] = dVar7;
                local_248.Rotation.XY.m128d_f64[0] = dVar8;
                local_248.Rotation.XY.m128d_f64[1] = dVar9;
                local_248.Rotation.ZW.m128d_f64[0] = dVar10;
                local_248.Rotation.ZW.m128d_f64[1] = dVar11;
                local_248.Translation.XY.m128d_f64[0] = dVar12;
                local_248.Translation.XY.m128d_f64[1] = dVar13;
                local_248.Translation.ZW.m128d_f64[0] = dVar14;
                local_248.Translation.ZW.m128d_f64[1] = dVar15;
                local_248.Scale3D.XY.m128d_f64[0] = dVar16;
                local_248.Scale3D.XY.m128d_f64[1] = dVar17;
                local_248.Scale3D.ZW.m128d_f64[0] = dVar18;
                local_248.Scale3D.ZW.m128d_f64[1] = dVar19;
                bVar24 = FAutomationTestBase::TestEqual
                                   ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,&local_248,
                                    &local_2a8,__real_38d1b717);
                if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_728.Data.AllocatorInstance.Data);
                }
                if (bVar24) {
                  bVar24 = true;
                  goto LAB_149fc2dc1;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar24 = false;
LAB_149fc2dc1:
  if (local_7a0 != (undefined8 *)0x0) {
    (**(code **)*local_7a0)(local_7a0,1);
  }
  return bVar24;
}

// GetBeautifiedTestName @ 149fc2e70

FString * __thiscall
FPCGCreatePointsGridTest_CellCorner::GetBeautifiedTestName
          (FPCGCreatePointsGridTest_CellCorner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.CreatePointsGrid.CellCorner");
  return __return_storage_ptr__;
}

