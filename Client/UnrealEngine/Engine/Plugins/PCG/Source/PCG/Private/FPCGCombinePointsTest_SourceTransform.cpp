// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fadb90

EAutomationTestFlags __thiscall
FPCGCombinePointsTest_SourceTransform::GetTestFlags(FPCGCombinePointsTest_SourceTransform *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fadba0

bool __thiscall
FPCGCombinePointsTest_SourceTransform::IsStressTest(FPCGCombinePointsTest_SourceTransform *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fadbb0

uint __thiscall
FPCGCombinePointsTest_SourceTransform::GetRequiredDeviceNum
          (FPCGCombinePointsTest_SourceTransform *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fadbc0

FString * __thiscall
FPCGCombinePointsTest_SourceTransform::GetTestSourceFileName
          (FPCGCombinePointsTest_SourceTransform *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGCombinePointsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fadbf0

int __thiscall
FPCGCombinePointsTest_SourceTransform::GetTestSourceFileLine
          (FPCGCombinePointsTest_SourceTransform *this)

{
  return 0x4e;
}

// GetTests @ 149fadc00

/* WARNING: Removing unreachable block (ram,0x000149fadced) */
/* WARNING: Removing unreachable block (ram,0x000149faddb8) */

void __thiscall
FPCGCombinePointsTest_SourceTransform::GetTests
          (FPCGCombinePointsTest_SourceTransform *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.CombinePoints.SourceTransform");
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

// RunTest @ 149fadde0

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
FPCGCombinePointsTest_SourceTransform::RunTest
          (FPCGCombinePointsTest_SourceTransform *this,FString *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UClass *pUVar10;
  ForAnyElementType FVar11;
  FObjectPtr_u_0 FVar12;
  undefined8 in_R8;
  FObjectPtr_u_0 local_3b8;
  undefined8 *local_3b0;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  double local_338;
  double dStack_330;
  double local_328;
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_278 [2];
  double local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  FConstPCGPointValueRanges local_1d8;
  
  local_238 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_230 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_228 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_220 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_208 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_200 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_218._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_218._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_218._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1e8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_1e0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_1f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  CombinePointsCommonTests::GenerateTestDataAndRun
            (SUB81(&local_3b0,0),false,
             (TTransform<double> *)CONCAT71((int7)((ulonglong)in_R8 >> 8),1));
  puVar6 = local_3b0;
  iVar9 = *(int *)(local_3b0 + 8);
  ::FString::FString(&local_3a8,"Output count");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar11.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar9,1)
  ;
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    if ((*(int *)(puVar6 + 8) < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    local_3b8 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar6[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fadf4e:
      if ((UPCGBasePointData *)local_3b8.Handle == (UPCGBasePointData *)0x0) goto LAB_149fadf6e;
      pUVar10 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_3b8,pUVar10);
      FVar12 = local_3b8;
      if (!bVar7) goto LAB_149fadf6e;
    }
    else {
      if ((UPCGBasePointData *)local_3b8.Handle != (UPCGBasePointData *)0x0) {
        UE::GC::MarkAsReachable(local_3b8.Handle);
        goto LAB_149fadf4e;
      }
LAB_149fadf6e:
      FVar12.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_398,"OutputA point data");
    if ((UPCGBasePointData *)FVar12.Handle == (UPCGBasePointData *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_348,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_348,0);
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      iVar9 = (**(code **)(*(longlong *)FVar12.Handle + 0x488))(FVar12.Handle);
      ::FString::FString(&local_388,"OutputA point count");
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_388.Data.ArrayNum != 0) {
        FVar11.Data = local_388.Data.AllocatorInstance.Data;
      }
      bVar7 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar9,1);
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        FConstPCGPointValueRanges::FConstPCGPointValueRanges
                  (&local_1d8,(UPCGBasePointData *)FVar12.Handle);
        if ((local_1d8.TransformRange.NumElements < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        dVar1 = ((local_1d8.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64
                [0];
        dVar3 = ((local_1d8.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64
                [1];
        local_328 = ((local_1d8.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.
                    m128d_f64[0];
        local_338 = dVar1;
        dStack_330 = dVar3;
        ::FString::FString(&local_378,"Output Location");
        fVar5 = __real_38d1b717;
        local_248 = local_328;
        local_318._s_0.X = 0.0;
        local_318._s_0.Y = 0.0;
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_378.Data.ArrayNum != 0) {
          FVar11.Data = local_378.Data.AllocatorInstance.Data;
        }
        local_2f8._s_0.Z = local_328;
        local_318._s_0.Z = 0.0;
        local_2f8._s_0.X = dVar1;
        local_2f8._s_0.Y = dVar3;
        bVar7 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,
                           (TVector<double> *)&local_2f8._s_0,(TVector<double> *)&local_318._s_0,
                           __real_38d1b717);
        if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_378.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          if ((local_1d8.BoundsMinRange.NumElements < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          dVar3 = ((local_1d8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X;
          dVar4 = ((local_1d8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y;
          dVar1 = ((local_1d8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z;
          ::FString::FString(&local_368,"Output Bounds Min");
          local_2d8._s_0.X = ___xmm_bff0000000000000bff0000000000000;
          local_2d8._s_0.Y = _UNK_15076c718;
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_368.Data.ArrayNum != 0) {
            FVar11.Data = local_368.Data.AllocatorInstance.Data;
          }
          local_2d8._s_0.Z = __real_bff0000000000000;
          local_2b8._s_0.X = dVar3;
          local_2b8._s_0.Y = dVar4;
          local_2b8._s_0.Z = dVar1;
          bVar7 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,
                             (TVector<double> *)&local_2b8._s_0,(TVector<double> *)&local_2d8._s_0,
                             fVar5);
          if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_368.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            if ((local_1d8.BoundsMaxRange.NumElements < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < NumElements)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                   ,0x8b,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            dVar3 = ((local_1d8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X;
            dVar4 = ((local_1d8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y;
            dVar1 = ((local_1d8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z;
            ::FString::FString(&local_358,"Output Bounds Max");
            local_298._s_0.X = ___xmm_40468000000000004046800000000000;
            local_298._s_0.Y = _UNK_150b45bc8;
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_358.Data.ArrayNum != 0) {
              FVar11.Data = local_358.Data.AllocatorInstance.Data;
            }
            local_298._s_0.Z = __real_4046800000000000;
            local_278[0]._0_8_ = dVar3;
            local_278[0]._8_8_ = dVar4;
            local_278[0]._16_8_ = dVar1;
            bVar7 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,
                               (TVector<double> *)&local_278[0]._s_0,
                               (TVector<double> *)&local_298._s_0,fVar5);
            if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_358.Data.AllocatorInstance.Data);
            }
            if (bVar7) {
              bVar7 = true;
              goto LAB_149fae299;
            }
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_149fae299:
  if (local_3b0 != (undefined8 *)0x0) {
    (**(code **)*local_3b0)(local_3b0,1);
  }
  return bVar7;
}

// GetBeautifiedTestName @ 149fae300

FString * __thiscall
FPCGCombinePointsTest_SourceTransform::GetBeautifiedTestName
          (FPCGCombinePointsTest_SourceTransform *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.CombinePoints.SourceTransform");
  return __return_storage_ptr__;
}

