// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fb0350

EAutomationTestFlags __thiscall
FPCGCombinePointsTest_TransformScale::GetTestFlags(FPCGCombinePointsTest_TransformScale *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fb0360

bool __thiscall
FPCGCombinePointsTest_TransformScale::IsStressTest(FPCGCombinePointsTest_TransformScale *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fb0370

uint __thiscall
FPCGCombinePointsTest_TransformScale::GetRequiredDeviceNum
          (FPCGCombinePointsTest_TransformScale *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fb0380

FString * __thiscall
FPCGCombinePointsTest_TransformScale::GetTestSourceFileName
          (FPCGCombinePointsTest_TransformScale *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGCombinePointsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fb03b0

int __thiscall
FPCGCombinePointsTest_TransformScale::GetTestSourceFileLine
          (FPCGCombinePointsTest_TransformScale *this)

{
  return 0x9c;
}

// GetTests @ 149fb03d0

/* WARNING: Removing unreachable block (ram,0x000149fb04bd) */
/* WARNING: Removing unreachable block (ram,0x000149fb0588) */

void __thiscall
FPCGCombinePointsTest_TransformScale::GetTests
          (FPCGCombinePointsTest_TransformScale *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.CombinePoints.TransformScale");
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

// RunTest @ 149fb05b0

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
FPCGCombinePointsTest_TransformScale::RunTest
          (FPCGCombinePointsTest_TransformScale *this,FString *param_1)

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
  undefined8 *puVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  TQuat<double> *pTVar14;
  UClass *pUVar15;
  ForAnyElementType FVar16;
  FObjectPtr_u_0 FVar17;
  undefined4 uVar18;
  FObjectPtr_u_0 local_428;
  undefined8 *local_420;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 local_328;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2e8 [2];
  double local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined8 local_288;
  double dStack_280;
  double local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_218;
  TQuat<double> local_208;
  FConstPCGPointValueRanges local_1e8;
  
  pTVar14 = UE::Math::TRotator<double>::Quaternion
                      (&UE::Math::TRotator<double>::ZeroRotator,&local_208);
  local_298 = pTVar14->Z;
  dStack_290 = pTVar14->W;
  local_2a8 = pTVar14->X;
  dStack_2a0 = pTVar14->Y;
  local_288 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  dStack_280 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_278 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_270 = 0;
  local_268 = ___xmm_40000000000000004000000000000000;
  uStack_260 = _UNK_150689698;
  local_258 = ___xmm_00000000000000004000000000000000;
  uStack_250 = _UNK_15076ace8;
  local_248 = local_2a8;
  dStack_240 = dStack_2a0;
  local_238 = local_298;
  dStack_230 = dStack_290;
  CombinePointsCommonTests::GenerateTestDataAndRun
            (SUB81(&local_420,0),false,(TTransform<double> *)0x0);
  puVar10 = local_420;
  iVar13 = *(int *)(local_420 + 8);
  ::FString::FString(&local_418,"Output count");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_418.Data.ArrayNum != 0) {
    FVar16.Data = local_418.Data.AllocatorInstance.Data;
  }
  bVar11 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar13,1);
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  if (bVar11) {
    if ((*(int *)(puVar10 + 8) < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
    local_428 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar10[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fb0736:
      if ((UPCGBasePointData *)local_428.Handle == (UPCGBasePointData *)0x0) goto LAB_149fb0756;
      pUVar15 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_428,pUVar15);
      FVar17 = local_428;
      if (!bVar11) goto LAB_149fb0756;
    }
    else {
      if ((UPCGBasePointData *)local_428.Handle != (UPCGBasePointData *)0x0) {
        UE::GC::MarkAsReachable(local_428.Handle);
        goto LAB_149fb0736;
      }
LAB_149fb0756:
      FVar17.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_408,"OutputA point data");
    if ((UPCGBasePointData *)FVar17.Handle == (UPCGBasePointData *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_3b8,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_3b8,0);
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      }
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
    if (!bVar11) {
      iVar13 = (**(code **)(*(longlong *)FVar17.Handle + 0x488))(FVar17.Handle);
      ::FString::FString(&local_3f8,"OutputA point count");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_3f8.Data.ArrayNum != 0) {
        FVar16.Data = local_3f8.Data.AllocatorInstance.Data;
      }
      bVar11 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar13,1);
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        FConstPCGPointValueRanges::FConstPCGPointValueRanges
                  (&local_1e8,(UPCGBasePointData *)FVar17.Handle);
        uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        uVar5 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20;
        if ((local_1e8.TransformRange.NumElements < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar11)) {
          pcVar2 = (code *)swi(3);
          uVar12 = (*pcVar2)();
          return (bool)uVar12;
        }
        dVar1 = ((local_1e8.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64
                [0];
        dVar3 = ((local_1e8.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64
                [1];
        local_398 = ((local_1e8.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.
                    m128d_f64[0];
        local_3a8 = dVar1;
        dStack_3a0 = dVar3;
        ::FString::FString(&local_3e8,"Output Location");
        fVar6 = __real_38d1b717;
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_3e8.Data.ArrayNum != 0) {
          FVar16.Data = local_3e8.Data.AllocatorInstance.Data;
        }
        local_2b8 = local_398;
        local_388._0_4_ = uVar7;
        local_388._4_4_ = uVar8;
        local_368._s_0.Z = local_398;
        local_218 = (double)uVar9;
        local_388._s_0.Z = (double)uVar9;
        local_388._8_4_ = uVar18;
        local_388._12_4_ = (int)uVar5;
        local_368._s_0.X = dVar1;
        local_368._s_0.Y = dVar3;
        bVar11 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                            (TVector<double> *)&local_368._s_0,(TVector<double> *)&local_388._s_0,
                            __real_38d1b717);
        if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
          if ((local_1e8.BoundsMinRange.NumElements < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar2 = (code *)swi(3);
            uVar12 = (*pcVar2)();
            return (bool)uVar12;
          }
          dVar3 = ((local_1e8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X;
          dVar4 = ((local_1e8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y;
          dVar1 = ((local_1e8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z;
          ::FString::FString(&local_3d8,"Output Bounds Min");
          local_348._s_0.X = ___xmm_bfe0000000000000bfe0000000000000;
          local_348._s_0.Y = _UNK_150689738;
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_3d8.Data.ArrayNum != 0) {
            FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
          }
          local_348._s_0.Z = __real_bfe0000000000000;
          local_328._s_0.X = dVar3;
          local_328._s_0.Y = dVar4;
          local_328._s_0.Z = dVar1;
          bVar11 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                              (TVector<double> *)&local_328._s_0,(TVector<double> *)&local_348._s_0,
                              fVar6);
          if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
          }
          if (bVar11) {
            if ((local_1e8.BoundsMaxRange.NumElements < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar2 = (code *)swi(3);
              uVar12 = (*pcVar2)();
              return (bool)uVar12;
            }
            dVar3 = ((local_1e8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X;
            dVar4 = ((local_1e8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y;
            dVar1 = ((local_1e8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z;
            ::FString::FString(&local_3c8,"Output Bounds Max");
            local_308._s_0.X = ___xmm_40368000000000004036800000000000;
            local_308._s_0.Y = _UNK_152030028;
            FVar16.Data = (FScriptContainerElement *)L"";
            if (local_3c8.Data.ArrayNum != 0) {
              FVar16.Data = local_3c8.Data.AllocatorInstance.Data;
            }
            local_308._s_0.Z = __real_4036800000000000;
            local_2e8[0]._0_8_ = dVar3;
            local_2e8[0]._8_8_ = dVar4;
            local_2e8[0]._16_8_ = dVar1;
            bVar11 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                                (TVector<double> *)&local_2e8[0]._s_0,
                                (TVector<double> *)&local_308._s_0,fVar6);
            if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
            }
            if (bVar11) {
              bVar11 = true;
              goto LAB_149fb0ab5;
            }
          }
        }
      }
    }
  }
  bVar11 = false;
LAB_149fb0ab5:
  if (local_420 != (undefined8 *)0x0) {
    (**(code **)*local_420)(local_420,1);
  }
  return bVar11;
}

// GetBeautifiedTestName @ 149fb0b20

FString * __thiscall
FPCGCombinePointsTest_TransformScale::GetBeautifiedTestName
          (FPCGCombinePointsTest_TransformScale *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.CombinePoints.TransformScale");
  return __return_storage_ptr__;
}

