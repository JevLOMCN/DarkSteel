// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fc5760

EAutomationTestFlags __thiscall
FPCGCreatePointsGridTest_XYCorner::GetTestFlags(FPCGCreatePointsGridTest_XYCorner *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fc5770

bool __thiscall
FPCGCreatePointsGridTest_XYCorner::IsStressTest(FPCGCreatePointsGridTest_XYCorner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fc5780

uint __thiscall
FPCGCreatePointsGridTest_XYCorner::GetRequiredDeviceNum(FPCGCreatePointsGridTest_XYCorner *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fc5790

FString * __thiscall
FPCGCreatePointsGridTest_XYCorner::GetTestSourceFileName
          (FPCGCreatePointsGridTest_XYCorner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGCreatePointsGridTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fc57c0

int __thiscall
FPCGCreatePointsGridTest_XYCorner::GetTestSourceFileLine(FPCGCreatePointsGridTest_XYCorner *this)

{
  return 0x82;
}

// GetTests @ 149fc57d0

/* WARNING: Removing unreachable block (ram,0x000149fc58bd) */
/* WARNING: Removing unreachable block (ram,0x000149fc5988) */

void __thiscall
FPCGCreatePointsGridTest_XYCorner::GetTests
          (FPCGCreatePointsGridTest_XYCorner *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.CreatePointsGrid.XYCorner");
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

// RunTest @ 149fc59b0

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
FPCGCreatePointsGridTest_XYCorner::RunTest(FPCGCreatePointsGridTest_XYCorner *this,FString *param_1)

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
  double dVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 *puVar26;
  bool bVar27;
  undefined1 uVar28;
  UClass *pUVar29;
  TQuat<double> *pTVar30;
  longlong lVar31;
  ForAnyElementType FVar32;
  FObjectPtr_u_0 FVar33;
  undefined4 uVar34;
  undefined1 auStackY_6c8 [32];
  FObjectPtr_u_0 local_698;
  undefined8 *local_690;
  double local_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  double local_5e8;
  double dStack_5e0;
  undefined8 local_5d8;
  TVector<double>_u_0 local_5c8;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  double local_510;
  double dStack_508;
  double local_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double local_4e0;
  double dStack_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  TTransform<double> local_4c8;
  TTransform<double> local_468;
  TTransform<double> local_408;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TQuat<double> local_1c8;
  TQuat<double> local_1a8;
  TQuat<double> local_188;
  TQuat<double> local_168;
  longlong local_148;
  int local_140;
  int local_13c;
  int local_138;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  local_688 = 0.0;
  local_5c8._s_0.Z = 0.0;
  local_5d8 = __real_4059000000000000;
  local_5e8 = ___xmm_40590000000000004059000000000000;
  dStack_5e0 = _UNK_1512468d8;
  local_5c8._s_0.X = ___xmm_40590000000000004059000000000000;
  local_5c8._s_0.Y = _UNK_1512468d8;
  CreatePointsGridCommonTests::GenerateTestDataAndRunGrid
            ((EPCGPointPosition)&local_690,
             (TVector<double> *)CONCAT71((int7)((ulonglong)param_1 >> 8),1),
             (TVector<double> *)&local_5c8._s_0);
  puVar26 = local_690;
  iVar2 = *(int *)(local_690 + 8);
  ::FString::FString(&local_668,"Output count");
  FVar32.Data = (FScriptContainerElement *)L"";
  if (local_668.Data.ArrayNum != 0) {
    FVar32.Data = local_668.Data.AllocatorInstance.Data;
  }
  bVar27 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar32.Data,iVar2,1);
  if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.Data.AllocatorInstance.Data);
  }
  if (bVar27) {
    FVar33.Handle = (UObject *)0x0;
    if ((*(int *)(puVar26 + 8) < 1) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar27)) {
      pcVar3 = (code *)swi(3);
      uVar28 = (*pcVar3)();
      return (bool)uVar28;
    }
    local_698 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar26[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fc5b3b:
      if (local_698.Handle != (UObject *)0x0) {
        pUVar29 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar27 = FObjectPtr::IsA((FObjectPtr *)&local_698,pUVar29);
        if (bVar27) {
          FVar33 = local_698;
        }
      }
    }
    else if (local_698.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_698.Handle);
      goto LAB_149fc5b3b;
    }
    ::FString::FString(&local_658,"Output point data");
    if (FVar33.Handle == (UObject *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_5f8,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_5f8,0);
      if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
      }
      bVar27 = true;
    }
    else {
      bVar27 = false;
    }
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
    if (!bVar27) {
      (**(code **)(*(longlong *)FVar33.Handle + 0x500))(FVar33.Handle,&local_148);
      iVar2 = local_138;
      ::FString::FString(&local_648,"Output point count");
      FVar32.Data = (FScriptContainerElement *)L"";
      if (local_648.Data.ArrayNum != 0) {
        FVar32.Data = local_648.Data.AllocatorInstance.Data;
      }
      bVar27 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar32.Data,iVar2,9);
      if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_648.Data.AllocatorInstance.Data);
      }
      uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      if (bVar27) {
        dVar20 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._20_4_,
                                  UE::Math::TVector<double>::OneVector.field0_0x0._16_4_);
        local_528 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_520 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        pTVar30 = UE::Math::TRotator<double>::Quaternion
                            (&UE::Math::TRotator<double>::ZeroRotator,&local_1c8);
        local_678 = 0.0;
        dStack_670 = 0.0;
        dVar4 = pTVar30->X;
        dVar5 = pTVar30->Y;
        dVar6 = pTVar30->Z;
        dVar7 = pTVar30->W;
        local_5a8 = dVar4;
        dStack_5a0 = dVar5;
        local_598 = dVar6;
        dStack_590 = dVar7;
        local_518 = dVar20;
        if ((local_138 < 2) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar27)) {
          pcVar3 = (code *)swi(3);
          uVar28 = (*pcVar3)();
          return (bool)uVar28;
        }
        lVar31 = (longlong)(int)(1 % (longlong)local_13c) * (longlong)local_140;
        dVar8 = *(double *)(lVar31 + local_148);
        dVar9 = ((double *)(lVar31 + local_148))[1];
        pdVar1 = (double *)(lVar31 + 0x10 + local_148);
        dVar10 = *pdVar1;
        dVar11 = pdVar1[1];
        pdVar1 = (double *)(lVar31 + 0x20 + local_148);
        dVar12 = *pdVar1;
        dVar13 = pdVar1[1];
        pdVar1 = (double *)(lVar31 + 0x30 + local_148);
        dVar14 = *pdVar1;
        dVar15 = pdVar1[1];
        pdVar1 = (double *)(lVar31 + 0x40 + local_148);
        dVar16 = *pdVar1;
        dVar17 = pdVar1[1];
        pdVar1 = (double *)(lVar31 + 0x50 + local_148);
        dVar18 = *pdVar1;
        dVar19 = pdVar1[1];
        ::FString::FString(&local_638,"Point 1 has the correct transform,");
        FVar32.Data = (FScriptContainerElement *)L"";
        if (local_638.Data.ArrayNum != 0) {
          FVar32.Data = local_638.Data.AllocatorInstance.Data;
        }
        local_4c8.Translation.XY.m128d_f64[0] = ___xmm_c0590000000000000000000000000000;
        local_4c8.Translation.XY.m128d_f64[1] = _UNK_152030208;
        local_4c8.Translation.ZW.m128d_f64[0] = local_678;
        local_4c8.Translation.ZW.m128d_f64[1] = dStack_670;
        local_4c8.Scale3D.XY.m128d_f64[0] = (double)uVar22;
        local_4c8.Scale3D.XY.m128d_f64[1] = (double)uVar23;
        local_4c8.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_4c8.Rotation.XY.m128d_f64[0] = dVar4;
        local_4c8.Rotation.XY.m128d_f64[1] = dVar5;
        local_4c8.Rotation.ZW.m128d_f64[0] = dVar6;
        local_4c8.Rotation.ZW.m128d_f64[1] = dVar7;
        local_4c8.Scale3D.ZW.m128d_f64[0] = dVar20;
        local_468.Rotation.XY.m128d_f64[0] = dVar8;
        local_468.Rotation.XY.m128d_f64[1] = dVar9;
        local_468.Rotation.ZW.m128d_f64[0] = dVar10;
        local_468.Rotation.ZW.m128d_f64[1] = dVar11;
        local_468.Translation.XY.m128d_f64[0] = dVar12;
        local_468.Translation.XY.m128d_f64[1] = dVar13;
        local_468.Translation.ZW.m128d_f64[0] = dVar14;
        local_468.Translation.ZW.m128d_f64[1] = dVar15;
        local_468.Scale3D.XY.m128d_f64[0] = dVar16;
        local_468.Scale3D.XY.m128d_f64[1] = dVar17;
        local_468.Scale3D.ZW.m128d_f64[0] = dVar18;
        local_468.Scale3D.ZW.m128d_f64[1] = dVar19;
        bVar27 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar32.Data,&local_468,&local_4c8
                            ,__real_38d1b717);
        if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_638.Data.AllocatorInstance.Data);
        }
        uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        if (bVar27) {
          dVar20 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._20_4_,
                                    UE::Math::TVector<double>::OneVector.field0_0x0._16_4_);
          local_510 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          dStack_508 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          pTVar30 = UE::Math::TRotator<double>::Quaternion
                              (&UE::Math::TRotator<double>::ZeroRotator,&local_1a8);
          dVar8 = local_688;
          uVar34 = SUB84(local_688,0);
          uVar21 = (ulonglong)local_688 >> 0x20;
          dVar4 = pTVar30->X;
          dVar5 = pTVar30->Y;
          dVar6 = pTVar30->Z;
          dVar7 = pTVar30->W;
          dStack_680 = local_688;
          local_688 = dVar20;
          local_588 = dVar4;
          dStack_580 = dVar5;
          local_578 = dVar6;
          dStack_570 = dVar7;
          local_500 = dVar20;
          if ((local_138 < 4) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar27)) {
            pcVar3 = (code *)swi(3);
            uVar28 = (*pcVar3)();
            return (bool)uVar28;
          }
          lVar31 = (longlong)(int)(3 % (longlong)local_13c) * (longlong)local_140;
          dVar20 = *(double *)(lVar31 + local_148);
          dVar9 = ((double *)(lVar31 + local_148))[1];
          pdVar1 = (double *)(lVar31 + 0x10 + local_148);
          dVar10 = *pdVar1;
          dVar11 = pdVar1[1];
          pdVar1 = (double *)(lVar31 + 0x20 + local_148);
          dVar12 = *pdVar1;
          dVar13 = pdVar1[1];
          pdVar1 = (double *)(lVar31 + 0x30 + local_148);
          dVar14 = *pdVar1;
          dVar15 = pdVar1[1];
          pdVar1 = (double *)(lVar31 + 0x40 + local_148);
          dVar16 = *pdVar1;
          dVar17 = pdVar1[1];
          pdVar1 = (double *)(lVar31 + 0x50 + local_148);
          dVar18 = *pdVar1;
          dVar19 = pdVar1[1];
          ::FString::FString(&local_628,"Point 3 has the correct transform,");
          local_408.Translation.XY.m128d_f64[0] = ___xmm_0000000000000000c059000000000000;
          local_408.Translation.XY.m128d_f64[1] = _UNK_15149cb18;
          FVar32.Data = (FScriptContainerElement *)L"";
          if (local_628.Data.ArrayNum != 0) {
            FVar32.Data = local_628.Data.AllocatorInstance.Data;
          }
          local_408.Translation.ZW.m128d_f64[0] = local_678;
          local_408.Translation.ZW.m128d_f64[1] = dStack_670;
          local_408.Scale3D.ZW.m128d_f64[0] = local_688;
          local_408.Scale3D.ZW.m128d_f64[1] = dStack_680;
          local_408.Scale3D.XY.m128d_f64[0] = (double)uVar22;
          local_408.Scale3D.XY.m128d_f64[1] = (double)uVar23;
          local_408.Rotation.XY.m128d_f64[0] = dVar4;
          local_408.Rotation.XY.m128d_f64[1] = dVar5;
          local_408.Rotation.ZW.m128d_f64[0] = dVar6;
          local_408.Rotation.ZW.m128d_f64[1] = dVar7;
          local_3a8.Rotation.XY.m128d_f64[0] = dVar20;
          local_3a8.Rotation.XY.m128d_f64[1] = dVar9;
          local_3a8.Rotation.ZW.m128d_f64[0] = dVar10;
          local_3a8.Rotation.ZW.m128d_f64[1] = dVar11;
          local_3a8.Translation.XY.m128d_f64[0] = dVar12;
          local_3a8.Translation.XY.m128d_f64[1] = dVar13;
          local_3a8.Translation.ZW.m128d_f64[0] = dVar14;
          local_3a8.Translation.ZW.m128d_f64[1] = dVar15;
          local_3a8.Scale3D.XY.m128d_f64[0] = dVar16;
          local_3a8.Scale3D.XY.m128d_f64[1] = dVar17;
          local_3a8.Scale3D.ZW.m128d_f64[0] = dVar18;
          local_3a8.Scale3D.ZW.m128d_f64[1] = dVar19;
          bVar27 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar32.Data,&local_3a8,
                              &local_408,__real_38d1b717);
          if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_628.Data.AllocatorInstance.Data);
          }
          uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          if (bVar27) {
            dVar20 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._20_4_,
                                      UE::Math::TVector<double>::OneVector.field0_0x0._16_4_);
            local_4f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            dStack_4f0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            pTVar30 = UE::Math::TRotator<double>::Quaternion
                                (&UE::Math::TRotator<double>::ZeroRotator,&local_188);
            dVar4 = pTVar30->X;
            dVar5 = pTVar30->Y;
            dVar6 = pTVar30->Z;
            dVar7 = pTVar30->W;
            dStack_680 = dVar8;
            local_688 = dVar20;
            local_568 = dVar4;
            dStack_560 = dVar5;
            local_558 = dVar6;
            dStack_550 = dVar7;
            local_4e8 = dVar20;
            if ((local_138 < 6) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar27)) {
              pcVar3 = (code *)swi(3);
              uVar28 = (*pcVar3)();
              return (bool)uVar28;
            }
            lVar31 = (longlong)(int)(5 % (longlong)local_13c) * (longlong)local_140;
            dVar20 = *(double *)(lVar31 + local_148);
            dVar8 = ((double *)(lVar31 + local_148))[1];
            pdVar1 = (double *)(lVar31 + 0x10 + local_148);
            dVar9 = *pdVar1;
            dVar10 = pdVar1[1];
            pdVar1 = (double *)(lVar31 + 0x20 + local_148);
            dVar11 = *pdVar1;
            dVar12 = pdVar1[1];
            pdVar1 = (double *)(lVar31 + 0x30 + local_148);
            dVar13 = *pdVar1;
            dVar14 = pdVar1[1];
            pdVar1 = (double *)(lVar31 + 0x40 + local_148);
            dVar15 = *pdVar1;
            dVar16 = pdVar1[1];
            pdVar1 = (double *)(lVar31 + 0x50 + local_148);
            dVar17 = *pdVar1;
            dVar18 = pdVar1[1];
            ::FString::FString(&local_618,"Point 5 has the correct transform,");
            local_348.Translation.XY.m128d_f64[0] = ___xmm_00000000000000004059000000000000;
            local_348.Translation.XY.m128d_f64[1] = _UNK_150f34e18;
            FVar32.Data = (FScriptContainerElement *)L"";
            if (local_618.Data.ArrayNum != 0) {
              FVar32.Data = local_618.Data.AllocatorInstance.Data;
            }
            local_348.Translation.ZW.m128d_f64[0] = local_678;
            local_348.Translation.ZW.m128d_f64[1] = dStack_670;
            local_348.Scale3D.ZW.m128d_f64[0] = local_688;
            local_348.Scale3D.ZW.m128d_f64[1] = dStack_680;
            local_348.Scale3D.XY.m128d_f64[0] = (double)uVar22;
            local_348.Scale3D.XY.m128d_f64[1] = (double)uVar23;
            local_348.Rotation.XY.m128d_f64[0] = dVar4;
            local_348.Rotation.XY.m128d_f64[1] = dVar5;
            local_348.Rotation.ZW.m128d_f64[0] = dVar6;
            local_348.Rotation.ZW.m128d_f64[1] = dVar7;
            local_2e8.Rotation.XY.m128d_f64[0] = dVar20;
            local_2e8.Rotation.XY.m128d_f64[1] = dVar8;
            local_2e8.Rotation.ZW.m128d_f64[0] = dVar9;
            local_2e8.Rotation.ZW.m128d_f64[1] = dVar10;
            local_2e8.Translation.XY.m128d_f64[0] = dVar11;
            local_2e8.Translation.XY.m128d_f64[1] = dVar12;
            local_2e8.Translation.ZW.m128d_f64[0] = dVar13;
            local_2e8.Translation.ZW.m128d_f64[1] = dVar14;
            local_2e8.Scale3D.XY.m128d_f64[0] = dVar15;
            local_2e8.Scale3D.XY.m128d_f64[1] = dVar16;
            local_2e8.Scale3D.ZW.m128d_f64[0] = dVar17;
            local_2e8.Scale3D.ZW.m128d_f64[1] = dVar18;
            bVar27 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar32.Data,&local_2e8,
                                &local_348,__real_38d1b717);
            if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_618.Data.AllocatorInstance.Data);
            }
            uVar25 = UE::Math::TVector<double>::OneVector.field0_0x0._20_4_;
            uVar24 = UE::Math::TVector<double>::OneVector.field0_0x0._16_4_;
            uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            if (bVar27) {
              local_4e0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              dStack_4d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
              pTVar30 = UE::Math::TRotator<double>::Quaternion
                                  (&UE::Math::TRotator<double>::ZeroRotator,&local_168);
              local_4d0 = uVar24;
              uStack_4cc = uVar25;
              dVar4 = pTVar30->X;
              dVar5 = pTVar30->Y;
              dVar6 = pTVar30->Z;
              dVar7 = pTVar30->W;
              local_548 = dVar4;
              dStack_540 = dVar5;
              local_538 = dVar6;
              dStack_530 = dVar7;
              if ((local_138 < 8) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar27)) {
                pcVar3 = (code *)swi(3);
                uVar28 = (*pcVar3)();
                return (bool)uVar28;
              }
              lVar31 = (longlong)(int)(7 % (longlong)local_13c) * (longlong)local_140;
              dVar20 = *(double *)(lVar31 + local_148);
              dVar8 = ((double *)(lVar31 + local_148))[1];
              pdVar1 = (double *)(lVar31 + 0x10 + local_148);
              dVar9 = *pdVar1;
              dVar10 = pdVar1[1];
              pdVar1 = (double *)(lVar31 + 0x20 + local_148);
              dVar11 = *pdVar1;
              dVar12 = pdVar1[1];
              pdVar1 = (double *)(lVar31 + 0x30 + local_148);
              dVar13 = *pdVar1;
              dVar14 = pdVar1[1];
              pdVar1 = (double *)(lVar31 + 0x40 + local_148);
              dVar15 = *pdVar1;
              dVar16 = pdVar1[1];
              pdVar1 = (double *)(lVar31 + 0x50 + local_148);
              dVar17 = *pdVar1;
              dVar18 = pdVar1[1];
              ::FString::FString(&local_608,"Point 7 has the correct transform,");
              local_288.Translation.XY.m128d_f64[0] = ___xmm_40590000000000000000000000000000;
              local_288.Translation.XY.m128d_f64[1] = _UNK_150f34e28;
              FVar32.Data = (FScriptContainerElement *)L"";
              if (local_608.Data.ArrayNum != 0) {
                FVar32.Data = local_608.Data.AllocatorInstance.Data;
              }
              local_288.Translation.ZW.m128d_f64[0] = local_678;
              local_288.Translation.ZW.m128d_f64[1] = dStack_670;
              local_288.Scale3D.XY.m128d_f64[0] = (double)uVar22;
              local_288.Scale3D.XY.m128d_f64[1] = (double)uVar23;
              local_288.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar24;
              local_288.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar25;
              local_288.Rotation.XY.m128d_f64[0] = dVar4;
              local_288.Rotation.XY.m128d_f64[1] = dVar5;
              local_288.Rotation.ZW.m128d_f64[0] = dVar6;
              local_288.Rotation.ZW.m128d_f64[1] = dVar7;
              local_288.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar34;
              local_288.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)uVar21;
              local_228.Rotation.XY.m128d_f64[0] = dVar20;
              local_228.Rotation.XY.m128d_f64[1] = dVar8;
              local_228.Rotation.ZW.m128d_f64[0] = dVar9;
              local_228.Rotation.ZW.m128d_f64[1] = dVar10;
              local_228.Translation.XY.m128d_f64[0] = dVar11;
              local_228.Translation.XY.m128d_f64[1] = dVar12;
              local_228.Translation.ZW.m128d_f64[0] = dVar13;
              local_228.Translation.ZW.m128d_f64[1] = dVar14;
              local_228.Scale3D.XY.m128d_f64[0] = dVar15;
              local_228.Scale3D.XY.m128d_f64[1] = dVar16;
              local_228.Scale3D.ZW.m128d_f64[0] = dVar17;
              local_228.Scale3D.ZW.m128d_f64[1] = dVar18;
              bVar27 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar32.Data,&local_228,
                                  &local_288,__real_38d1b717);
              if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_608.Data.AllocatorInstance.Data);
              }
              if (bVar27) {
                bVar27 = true;
                goto LAB_149fc631d;
              }
            }
          }
        }
      }
    }
  }
  bVar27 = false;
LAB_149fc631d:
  if (local_690 != (undefined8 *)0x0) {
    (**(code **)*local_690)(local_690,1);
  }
  return bVar27;
}

// GetBeautifiedTestName @ 149fc63d0

FString * __thiscall
FPCGCreatePointsGridTest_XYCorner::GetBeautifiedTestName
          (FPCGCreatePointsGridTest_XYCorner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.CreatePointsGrid.XYCorner");
  return __return_storage_ptr__;
}

