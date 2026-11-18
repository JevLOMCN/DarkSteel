// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149faf5f0

EAutomationTestFlags __thiscall
FPCGCombinePointsTest_TransformRotation::GetTestFlags(FPCGCombinePointsTest_TransformRotation *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149faf600

bool __thiscall
FPCGCombinePointsTest_TransformRotation::IsStressTest(FPCGCombinePointsTest_TransformRotation *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149faf610

uint __thiscall
FPCGCombinePointsTest_TransformRotation::GetRequiredDeviceNum
          (FPCGCombinePointsTest_TransformRotation *this)

{
  return 1;
}

// GetTestSourceFileName @ 149faf620

FString * __thiscall
FPCGCombinePointsTest_TransformRotation::GetTestSourceFileName
          (FPCGCombinePointsTest_TransformRotation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGCombinePointsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149faf650

int __thiscall
FPCGCombinePointsTest_TransformRotation::GetTestSourceFileLine
          (FPCGCombinePointsTest_TransformRotation *this)

{
  return 0x82;
}

// GetTests @ 149faf660

/* WARNING: Removing unreachable block (ram,0x000149faf74d) */
/* WARNING: Removing unreachable block (ram,0x000149faf818) */

void __thiscall
FPCGCombinePointsTest_TransformRotation::GetTests
          (FPCGCombinePointsTest_TransformRotation *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.CombinePoints.TransformRotation");
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

// RunTest @ 149faf840

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
FPCGCombinePointsTest_TransformRotation::RunTest
          (FPCGCombinePointsTest_TransformRotation *this,FString *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  TQuat<double> *pTVar16;
  UClass *pUVar17;
  ForAnyElementType FVar18;
  FObjectPtr_u_0 FVar19;
  undefined4 uVar20;
  FObjectPtr_u_0 local_448;
  undefined8 *local_440;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  TRotator<double> local_3c8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  TVector<double>_u_0 local_398;
  TVector<double>_u_0 local_378;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_2f8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined8 local_288;
  double dStack_280;
  double local_278;
  undefined8 uStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_218;
  TQuat<double> local_208;
  FConstPCGPointValueRanges local_1e8;
  
  uVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_2d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_2d0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_3c8.Roll = 0.0;
  local_3c8.Pitch = ___xmm_00000000000000004056800000000000;
  local_3c8.Yaw = _UNK_150b45b78;
  pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_3c8,&local_208);
  local_2c8 = (double)uVar11;
  local_298 = pTVar16->Z;
  dStack_290 = pTVar16->W;
  local_2a8 = pTVar16->X;
  dStack_2a0 = pTVar16->Y;
  local_288 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  dStack_280 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_278 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_270 = 0;
  local_258 = (double)uVar11;
  uStack_250 = 0;
  local_268 = (double)uVar9;
  dStack_260 = (double)uVar10;
  local_248 = local_2a8;
  dStack_240 = dStack_2a0;
  local_238 = local_298;
  dStack_230 = dStack_290;
  CombinePointsCommonTests::GenerateTestDataAndRun
            (SUB81(&local_440,0),false,(TTransform<double> *)0x0);
  puVar12 = local_440;
  iVar15 = *(int *)(local_440 + 8);
  ::FString::FString(&local_438,"Output count");
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_438.Data.ArrayNum != 0) {
    FVar18.Data = local_438.Data.AllocatorInstance.Data;
  }
  bVar13 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar15,1);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  if (bVar13) {
    if ((*(int *)(puVar12 + 8) < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    local_448 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar12[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149faf9fa:
      if ((UPCGBasePointData *)local_448.Handle == (UPCGBasePointData *)0x0) goto LAB_149fafa1a;
      pUVar17 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar13 = FObjectPtr::IsA((FObjectPtr *)&local_448,pUVar17);
      FVar19 = local_448;
      if (!bVar13) goto LAB_149fafa1a;
    }
    else {
      if ((UPCGBasePointData *)local_448.Handle != (UPCGBasePointData *)0x0) {
        UE::GC::MarkAsReachable(local_448.Handle);
        goto LAB_149faf9fa;
      }
LAB_149fafa1a:
      FVar19.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_428,"OutputA point data");
    if ((UPCGBasePointData *)FVar19.Handle == (UPCGBasePointData *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_3d8,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_3d8,0);
      if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
      }
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
    if (!bVar13) {
      iVar15 = (**(code **)(*(longlong *)FVar19.Handle + 0x488))(FVar19.Handle);
      ::FString::FString(&local_418,"OutputA point count");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_418.Data.ArrayNum != 0) {
        FVar18.Data = local_418.Data.AllocatorInstance.Data;
      }
      bVar13 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar15,1);
      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.Data.AllocatorInstance.Data);
      }
      if (bVar13) {
        FConstPCGPointValueRanges::FConstPCGPointValueRanges
                  (&local_1e8,(UPCGBasePointData *)FVar19.Handle);
        uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        uVar5 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20;
        if ((local_1e8.TransformRange.NumElements < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar13)) {
          pcVar2 = (code *)swi(3);
          uVar14 = (*pcVar2)();
          return (bool)uVar14;
        }
        dVar1 = ((local_1e8.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64
                [0];
        dVar3 = ((local_1e8.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64
                [1];
        local_3a0 = ((local_1e8.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.
                    m128d_f64[0];
        local_3b0 = dVar1;
        dStack_3a8 = dVar3;
        ::FString::FString(&local_408,"Output Location");
        fVar6 = __real_38d1b717;
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_408.Data.ArrayNum != 0) {
          FVar18.Data = local_408.Data.AllocatorInstance.Data;
        }
        local_2b0 = local_3a0;
        local_398._0_4_ = uVar7;
        local_398._4_4_ = uVar8;
        local_378._s_0.Z = local_3a0;
        local_218 = (double)uVar9;
        local_398._s_0.Z = (double)uVar9;
        local_398._8_4_ = uVar20;
        local_398._12_4_ = (int)uVar5;
        local_378._s_0.X = dVar1;
        local_378._s_0.Y = dVar3;
        bVar13 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,
                            (TVector<double> *)&local_378._s_0,(TVector<double> *)&local_398._s_0,
                            __real_38d1b717);
        if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_408.Data.AllocatorInstance.Data);
        }
        if (bVar13) {
          if ((local_1e8.BoundsMinRange.NumElements < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar2 = (code *)swi(3);
            uVar14 = (*pcVar2)();
            return (bool)uVar14;
          }
          dVar3 = ((local_1e8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X;
          dVar4 = ((local_1e8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y;
          dVar1 = ((local_1e8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z;
          ::FString::FString(&local_3f8,"Output Bounds Min");
          local_358._s_0.X = ___xmm_bff0000000000000bff0000000000000;
          local_358._s_0.Y = _UNK_15076c718;
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_3f8.Data.ArrayNum != 0) {
            FVar18.Data = local_3f8.Data.AllocatorInstance.Data;
          }
          local_358._s_0.Z = __real_c046800000000000;
          local_338._s_0.X = dVar3;
          local_338._s_0.Y = dVar4;
          local_338._s_0.Z = dVar1;
          bVar13 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,
                              (TVector<double> *)&local_338._s_0,(TVector<double> *)&local_358._s_0,
                              fVar6);
          if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
          }
          if (bVar13) {
            if ((local_1e8.BoundsMaxRange.NumElements < 1) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar2 = (code *)swi(3);
              uVar14 = (*pcVar2)();
              return (bool)uVar14;
            }
            dVar3 = ((local_1e8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X;
            dVar4 = ((local_1e8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y;
            dVar1 = ((local_1e8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z;
            ::FString::FString(&local_3e8,"Output Bounds Max");
            local_318._s_0.X = ___xmm_40468000000000004046800000000000;
            local_318._s_0.Y = _UNK_150b45bc8;
            FVar18.Data = (FScriptContainerElement *)L"";
            if (local_3e8.Data.ArrayNum != 0) {
              FVar18.Data = local_3e8.Data.AllocatorInstance.Data;
            }
            local_318._s_0.Z = __real_3ff0000000000000;
            local_2f8._s_0.X = dVar3;
            local_2f8._s_0.Y = dVar4;
            local_2f8._s_0.Z = dVar1;
            bVar13 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,
                                (TVector<double> *)&local_2f8._s_0,
                                (TVector<double> *)&local_318._s_0,fVar6);
            if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
            }
            if (bVar13) {
              bVar13 = true;
              goto LAB_149fafd7f;
            }
          }
        }
      }
    }
  }
  bVar13 = false;
LAB_149fafd7f:
  if (local_440 != (undefined8 *)0x0) {
    (**(code **)*local_440)(local_440,1);
  }
  return bVar13;
}

// GetBeautifiedTestName @ 149fafde0

FString * __thiscall
FPCGCombinePointsTest_TransformRotation::GetBeautifiedTestName
          (FPCGCombinePointsTest_TransformRotation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.CombinePoints.TransformRotation");
  return __return_storage_ptr__;
}

