// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fa58c0

EAutomationTestFlags __thiscall
FPCGPointNeighborhoodTest_AvgPosition::GetTestFlags(FPCGPointNeighborhoodTest_AvgPosition *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa58d0

bool __thiscall
FPCGPointNeighborhoodTest_AvgPosition::IsStressTest(FPCGPointNeighborhoodTest_AvgPosition *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa58e0

uint __thiscall
FPCGPointNeighborhoodTest_AvgPosition::GetRequiredDeviceNum
          (FPCGPointNeighborhoodTest_AvgPosition *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa58f0

FString * __thiscall
FPCGPointNeighborhoodTest_AvgPosition::GetTestSourceFileName
          (FPCGPointNeighborhoodTest_AvgPosition *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGPointNeighborhoodTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa5930

int __thiscall
FPCGPointNeighborhoodTest_AvgPosition::GetTestSourceFileLine
          (FPCGPointNeighborhoodTest_AvgPosition *this)

{
  return 0x102;
}

// GetTests @ 149fa59a0

/* WARNING: Removing unreachable block (ram,0x000149fa5a8d) */
/* WARNING: Removing unreachable block (ram,0x000149fa5b58) */

void __thiscall
FPCGPointNeighborhoodTest_AvgPosition::GetTests
          (FPCGPointNeighborhoodTest_AvgPosition *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.PointNeighborhood.AvgPosition");
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

// RunTest @ 149fa5b80

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
FPCGPointNeighborhoodTest_AvgPosition::RunTest
          (FPCGPointNeighborhoodTest_AvgPosition *this,FString *param_1)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FObjectPtr_u_0 FVar12;
  undefined1 auStackY_258 [32];
  FObjectPtr_u_0 local_228;
  FTestParameters local_220;
  undefined4 local_1f8;
  undefined2 local_1f4;
  undefined1 local_1f2;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0 [2];
  double local_190;
  FString local_188;
  double local_178;
  double dStack_170;
  double local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  longlong local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_220.bPositionToAttr = false;
  local_220._21_3_ = 0;
  local_220.PositionName.ComparisonIndex.Value = 0;
  local_220.PositionName.Number._0_1_ = 0;
  local_220.SetDensity = None;
  local_220.bAvgPosition = false;
  local_220.bAvgColor = false;
  local_220.bUseBounds = false;
  local_220._39_1_ = 0;
  local_1f8 = 0;
  local_220._8_8_ = __real_406c200000000000;
  local_220.DistanceName.Number._0_1_ = 0;
  local_1f4 = 1;
  local_1f2 = 1;
  PCGPointNeighborhoodTestBase::GenerateTestDataAndRun
            ((PCGPointNeighborhoodTestBase *)this,&local_220);
  dVar3 = local_220.SearchDistance;
  iVar8 = *(int *)((longlong)local_220.SearchDistance + 0x40);
  ::FString::FString(&local_1f0,"Output count");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1f0.Data.ArrayNum != 0) {
    FVar11.Data = local_1f0.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar8,1)
  ;
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    if ((*(int *)((longlong)dVar3 + 0x40) < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_228 = (FObjectPtr_u_0)(*(FObjectPtr_u_0 **)((longlong)dVar3 + 0x38))->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fa5ccd:
      if (local_228.Handle == (UObject *)0x0) goto LAB_149fa5ced;
      pUVar9 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_228,pUVar9);
      FVar12 = local_228;
      if (!bVar6) goto LAB_149fa5ced;
    }
    else {
      if (local_228.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_228.Handle);
        goto LAB_149fa5ccd;
      }
LAB_149fa5ced:
      FVar12.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_1e0,"Output point data");
    if (FVar12.Handle == (UObject *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_188,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_188,0);
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      iVar8 = (**(code **)(*(longlong *)FVar12.Handle + 0x488))(FVar12.Handle);
      ::FString::FString(&local_1d0,"Output point count");
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_1d0.Data.ArrayNum != 0) {
        FVar11.Data = local_1d0.Data.AllocatorInstance.Data;
      }
      bVar6 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar8,9);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        (**(code **)(*(longlong *)FVar12.Handle + 0x500))(FVar12.Handle,&local_d8);
        if ((local_c8 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        dVar3 = *(double *)(local_d8 + 0x20);
        dVar4 = *(double *)(local_d8 + 0x28);
        local_168 = *(double *)(local_d8 + 0x30);
        local_178 = dVar3;
        dStack_170 = dVar4;
        ::FString::FString(&local_1c0,"Average Position in Point 0 Location Attribute");
        fVar5 = __real_38d1b717;
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_1c0.Data.ArrayNum != 0) {
          FVar11.Data = local_1c0.Data.AllocatorInstance.Data;
        }
        local_190 = local_168;
        local_158._s_0.X = ___xmm_40590000000000004059000000000000;
        local_158._s_0.Y = _UNK_1512468d8;
        local_138._s_0.Z = local_168;
        local_158._s_0.Z = 0.0;
        local_138._s_0.X = dVar3;
        local_138._s_0.Y = dVar4;
        bVar6 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,
                           (TVector<double> *)&local_138._s_0,(TVector<double> *)&local_158._s_0,
                           __real_38d1b717);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          if ((local_c8 < 5) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          lVar10 = (longlong)(int)(4 % (longlong)local_cc) * (longlong)local_d0;
          local_190 = *(double *)(lVar10 + 0x30 + local_d8);
          pdVar1 = (double *)(lVar10 + 0x20 + local_d8);
          dVar3 = *pdVar1;
          dVar4 = pdVar1[1];
          ::FString::FString(local_1b0,"Average Position in Point 4 Location Attribute");
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_1b0[0].Data.ArrayNum != 0) {
            FVar11.Data = local_1b0[0].Data.AllocatorInstance.Data;
          }
          local_118._s_0.X = ___xmm_40590000000000004059000000000000;
          local_118._s_0.Y = _UNK_1512468d8;
          local_118._s_0.Z = 0.0;
          local_f8._s_0.Z = local_190;
          local_f8._s_0.X = dVar3;
          local_f8._s_0.Y = dVar4;
          bVar6 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,
                             (TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_118._s_0,
                             fVar5);
          if (local_1b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0[0].Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            bVar6 = true;
            goto LAB_149fa5f82;
          }
        }
      }
    }
  }
  bVar6 = false;
LAB_149fa5f82:
  if ((undefined8 *)local_220.SearchDistance != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_220.SearchDistance)(local_220.SearchDistance,1);
  }
  return bVar6;
}

// GetBeautifiedTestName @ 149fa6000

FString * __thiscall
FPCGPointNeighborhoodTest_AvgPosition::GetBeautifiedTestName
          (FPCGPointNeighborhoodTest_AvgPosition *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.PointNeighborhood.AvgPosition");
  return __return_storage_ptr__;
}

