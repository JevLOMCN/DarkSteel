// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fae8c0

EAutomationTestFlags __thiscall
FPCGCombinePointsTest_TransformLocation::GetTestFlags(FPCGCombinePointsTest_TransformLocation *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fae8d0

bool __thiscall
FPCGCombinePointsTest_TransformLocation::IsStressTest(FPCGCombinePointsTest_TransformLocation *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fae8e0

uint __thiscall
FPCGCombinePointsTest_TransformLocation::GetRequiredDeviceNum
          (FPCGCombinePointsTest_TransformLocation *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fae8f0

FString * __thiscall
FPCGCombinePointsTest_TransformLocation::GetTestSourceFileName
          (FPCGCombinePointsTest_TransformLocation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGCombinePointsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fae920

int __thiscall
FPCGCombinePointsTest_TransformLocation::GetTestSourceFileLine
          (FPCGCombinePointsTest_TransformLocation *this)

{
  return 0x67;
}

// GetTests @ 149fae930

/* WARNING: Removing unreachable block (ram,0x000149faea1d) */
/* WARNING: Removing unreachable block (ram,0x000149faeae8) */

void __thiscall
FPCGCombinePointsTest_TransformLocation::GetTests
          (FPCGCombinePointsTest_TransformLocation *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.CombinePoints.TransformLocation");
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

// RunTest @ 149faeb10

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
FPCGCombinePointsTest_TransformLocation::RunTest
          (FPCGCombinePointsTest_TransformLocation *this,FString *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  TQuat<double> *pTVar15;
  UClass *pUVar16;
  ForAnyElementType FVar17;
  FObjectPtr_u_0 FVar18;
  FObjectPtr_u_0 local_408;
  undefined8 *local_400;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  double local_388;
  double dStack_380;
  double local_378;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 local_328;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2c8;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  double local_298;
  double local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  TQuat<double> local_1f8;
  FConstPCGPointValueRanges local_1d8;
  
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  uVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  local_2a8 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_2a4 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  uStack_2a0 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  uStack_29c = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  pTVar15 = UE::Math::TRotator<double>::Quaternion
                      (&UE::Math::TRotator<double>::ZeroRotator,&local_1f8);
  local_298 = (double)uVar10;
  local_268 = pTVar15->Z;
  dStack_260 = pTVar15->W;
  local_278 = pTVar15->X;
  dStack_270 = pTVar15->Y;
  local_258 = ___xmm_40240000000000004024000000000000;
  uStack_250 = _UNK_15104e4d8;
  uStack_24c = _UNK_15104e4dc;
  local_248 = ___xmm_00000000000000004024000000000000;
  uStack_240 = _UNK_151444f38;
  local_238 = uVar6;
  uStack_234 = uVar7;
  uStack_230 = uVar8;
  uStack_22c = uVar9;
  local_228 = (double)uVar10;
  uStack_220 = 0;
  local_218 = local_278;
  dStack_210 = dStack_270;
  local_208 = local_268;
  dStack_200 = dStack_260;
  CombinePointsCommonTests::GenerateTestDataAndRun(false,false,(TTransform<double> *)0x0);
  puVar11 = local_400;
  iVar14 = *(int *)(local_400 + 8);
  ::FString::FString(&local_3f8,"Output count");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_3f8.Data.ArrayNum != 0) {
    FVar17.Data = local_3f8.Data.AllocatorInstance.Data;
  }
  bVar12 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,iVar14,1);
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  if (bVar12) {
    if ((*(int *)(puVar11 + 8) < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar2 = (code *)swi(3);
      uVar13 = (*pcVar2)();
      return (bool)uVar13;
    }
    local_408 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar11[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149faecb7:
      if ((UPCGBasePointData *)local_408.Handle == (UPCGBasePointData *)0x0) goto LAB_149faecd7;
      pUVar16 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar12 = FObjectPtr::IsA((FObjectPtr *)&local_408,pUVar16);
      FVar18 = local_408;
      if (!bVar12) goto LAB_149faecd7;
    }
    else {
      if ((UPCGBasePointData *)local_408.Handle != (UPCGBasePointData *)0x0) {
        UE::GC::MarkAsReachable(local_408.Handle);
        goto LAB_149faecb7;
      }
LAB_149faecd7:
      FVar18.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_3e8,"OutputA point data");
    if ((UPCGBasePointData *)FVar18.Handle == (UPCGBasePointData *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_398,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_398,0);
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    if (!bVar12) {
      iVar14 = (**(code **)(*(longlong *)FVar18.Handle + 0x488))(FVar18.Handle);
      ::FString::FString(&local_3d8,"OutputA point count");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_3d8.Data.ArrayNum != 0) {
        FVar17.Data = local_3d8.Data.AllocatorInstance.Data;
      }
      bVar12 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,iVar14,1);
      if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
      }
      if (bVar12) {
        FConstPCGPointValueRanges::FConstPCGPointValueRanges
                  (&local_1d8,(UPCGBasePointData *)FVar18.Handle);
        if ((local_1d8.TransformRange.NumElements < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar12)) {
          pcVar2 = (code *)swi(3);
          uVar13 = (*pcVar2)();
          return (bool)uVar13;
        }
        dVar1 = ((local_1d8.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64
                [0];
        dVar3 = ((local_1d8.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64
                [1];
        local_378 = ((local_1d8.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.
                    m128d_f64[0];
        local_388 = dVar1;
        dStack_380 = dVar3;
        ::FString::FString(&local_3c8,"Output Location");
        fVar5 = __real_38d1b717;
        local_368._s_0.Y = (double)CONCAT44(_UNK_15104e4dc,_UNK_15104e4d8);
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_3c8.Data.ArrayNum != 0) {
          FVar17.Data = local_3c8.Data.AllocatorInstance.Data;
        }
        local_368._s_0.X = ___xmm_40240000000000004024000000000000;
        local_368._s_0.Z = __real_4024000000000000;
        local_280 = local_378;
        local_348._s_0.Z = local_378;
        local_348._s_0.X = dVar1;
        local_348._s_0.Y = dVar3;
        bVar12 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,
                            (TVector<double> *)&local_348._s_0,(TVector<double> *)&local_368._s_0,
                            __real_38d1b717);
        if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
        }
        if (bVar12) {
          if ((local_1d8.BoundsMinRange.NumElements < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            uVar13 = (*pcVar2)();
            return (bool)uVar13;
          }
          dVar3 = ((local_1d8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X;
          dVar4 = ((local_1d8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y;
          dVar1 = ((local_1d8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z;
          ::FString::FString(&local_3b8,"Output Bounds Min");
          local_328._s_0.X = ___xmm_c026000000000000c026000000000000;
          local_328._s_0.Y = _UNK_1520301c8;
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_3b8.Data.ArrayNum != 0) {
            FVar17.Data = local_3b8.Data.AllocatorInstance.Data;
          }
          local_328._s_0.Z = __real_c026000000000000;
          local_308._s_0.X = dVar3;
          local_308._s_0.Y = dVar4;
          local_308._s_0.Z = dVar1;
          bVar12 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,
                              (TVector<double> *)&local_308._s_0,(TVector<double> *)&local_328._s_0,
                              fVar5);
          if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
          }
          if (bVar12) {
            if ((local_1d8.BoundsMaxRange.NumElements < 1) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar12)) {
              pcVar2 = (code *)swi(3);
              uVar13 = (*pcVar2)();
              return (bool)uVar13;
            }
            dVar3 = ((local_1d8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X;
            dVar4 = ((local_1d8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y;
            dVar1 = ((local_1d8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z;
            ::FString::FString(&local_3a8,"Output Bounds Max");
            local_2e8._s_0.X = ___xmm_40418000000000004041800000000000;
            local_2e8._s_0.Y = _UNK_152030068;
            FVar17.Data = (FScriptContainerElement *)L"";
            if (local_3a8.Data.ArrayNum != 0) {
              FVar17.Data = local_3a8.Data.AllocatorInstance.Data;
            }
            local_2e8._s_0.Z = __real_4041800000000000;
            local_2c8._s_0.X = dVar3;
            local_2c8._s_0.Y = dVar4;
            local_2c8._s_0.Z = dVar1;
            bVar12 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,
                                (TVector<double> *)&local_2c8._s_0,
                                (TVector<double> *)&local_2e8._s_0,fVar5);
            if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              bVar12 = true;
              goto LAB_149faf00c;
            }
          }
        }
      }
    }
  }
  bVar12 = false;
LAB_149faf00c:
  if (local_400 != (undefined8 *)0x0) {
    (**(code **)*local_400)(local_400,1);
  }
  return bVar12;
}

// GetBeautifiedTestName @ 149faf070

FString * __thiscall
FPCGCombinePointsTest_TransformLocation::GetBeautifiedTestName
          (FPCGCombinePointsTest_TransformLocation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.CombinePoints.TransformLocation");
  return __return_storage_ptr__;
}

