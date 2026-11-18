// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a00b9a0

EAutomationTestFlags __thiscall
FPCGSpatialNoise_CalcLocalCoordinates2D::GetTestFlags(FPCGSpatialNoise_CalcLocalCoordinates2D *this)

{
  return ProductFilter|EditorContext;
}

// IsStressTest @ 14a00b9b0

bool __thiscall
FPCGSpatialNoise_CalcLocalCoordinates2D::IsStressTest(FPCGSpatialNoise_CalcLocalCoordinates2D *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a00b9c0

uint __thiscall
FPCGSpatialNoise_CalcLocalCoordinates2D::GetRequiredDeviceNum
          (FPCGSpatialNoise_CalcLocalCoordinates2D *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a00b9d0

FString * __thiscall
FPCGSpatialNoise_CalcLocalCoordinates2D::GetTestSourceFileName
          (FPCGSpatialNoise_CalcLocalCoordinates2D *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSpatialNoiseTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a00ba00

int __thiscall
FPCGSpatialNoise_CalcLocalCoordinates2D::GetTestSourceFileLine
          (FPCGSpatialNoise_CalcLocalCoordinates2D *this)

{
  return 9;
}

// GetTests @ 14a00ba10

/* WARNING: Removing unreachable block (ram,0x00014a00bafd) */
/* WARNING: Removing unreachable block (ram,0x00014a00bbc8) */

void __thiscall
FPCGSpatialNoise_CalcLocalCoordinates2D::GetTests
          (FPCGSpatialNoise_CalcLocalCoordinates2D *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.Noise.CalcLocalCoordinates2D");
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

// RunTest @ 14a00bbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGSpatialNoise_CalcLocalCoordinates2D::RunTest
          (FPCGSpatialNoise_CalcLocalCoordinates2D *this,FString *param_1)

{
  double dVar1;
  TVector2<double> TVar2;
  bool bVar3;
  FLocalCoordinates2D *pFVar4;
  ForAnyElementType FVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStackY_1b8 [32];
  FString local_188;
  TVector2<double>_u_0 local_178;
  TVector<double>_u_0 local_168;
  FLocalCoordinates2D local_150;
  FLocalCoordinates2D local_120;
  TVector<double>_u_0 local_f0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined1 local_c0;
  FLocalCoordinates2D local_b8;
  FLocalCoordinates2D local_88;
  ulonglong local_58;
  
  TVar2.field0_0x0 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar8 = (uint)__xmm_80000000000000008000000000000000;
  uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_f0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                              0x20) ^ uVar9,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar8);
  local_d0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_c8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_f0._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                              0x20) ^ uVar9,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar8);
  local_c0 = 1;
  local_f0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar9,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar8);
  local_168._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_168._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_168._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_178 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
  pFVar4 = PCGSpatialNoise::CalcLocalCoordinates2D
                     (&local_150,(TBox<double> *)&local_f0._s_0,
                      &UE::Math::TTransform<double>::Identity,(TVector2<double> *)&local_178._s_0,
                      (TVector<double> *)&local_168._s_0);
  local_120.X0 = pFVar4->X0;
  local_120.Y0 = pFVar4->Y0;
  local_120.X1 = pFVar4->X1;
  local_120.Y1 = pFVar4->Y1;
  local_120.FracX = pFVar4->FracX;
  local_120.FracY = pFVar4->FracY;
  dVar6 = PCGSpatialNoise::CalcEdgeBlendAmount2D(&local_120,0.0);
  ::FString::FString(&local_188,"Disabled Edge value");
  dVar1 = __real_3f1a36e2e0000000;
  dVar7 = __real_3ff0000000000000;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_188.Data.ArrayNum != 0) {
    FVar5.Data = local_188.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,dVar6,__real_3ff0000000000000
                     ,__real_3f1a36e2e0000000);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    local_178 = TVar2.field0_0x0;
    local_168._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_168._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_168._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pFVar4 = PCGSpatialNoise::CalcLocalCoordinates2D
                       (&local_150,(TBox<double> *)&local_f0._s_0,
                        &UE::Math::TTransform<double>::Identity,(TVector2<double> *)&local_178._s_0,
                        (TVector<double> *)&local_168._s_0);
    local_120.X0 = pFVar4->X0;
    local_120.Y0 = pFVar4->Y0;
    local_120.X1 = pFVar4->X1;
    local_120.Y1 = pFVar4->Y1;
    local_120.FracX = pFVar4->FracX;
    local_120.FracY = pFVar4->FracY;
    dVar6 = PCGSpatialNoise::CalcEdgeBlendAmount2D(&local_120,0.0);
    ::FString::FString(&local_188,"Disabled Edge value");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_188.Data.ArrayNum != 0) {
      FVar5.Data = local_188.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,dVar6,dVar7,dVar1);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      local_178 = TVar2.field0_0x0;
      local_168._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      local_168._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_168._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      pFVar4 = PCGSpatialNoise::CalcLocalCoordinates2D
                         (&local_150,(TBox<double> *)&local_f0._s_0,
                          &UE::Math::TTransform<double>::Identity,
                          (TVector2<double> *)&local_178._s_0,(TVector<double> *)&local_168._s_0);
      local_b8.X0 = pFVar4->X0;
      local_b8.Y0 = pFVar4->Y0;
      local_b8.X1 = pFVar4->X1;
      local_b8.Y1 = pFVar4->Y1;
      local_b8.FracX = pFVar4->FracX;
      local_b8.FracY = pFVar4->FracY;
      dVar6 = PCGSpatialNoise::CalcEdgeBlendAmount2D(&local_b8,dVar7);
      ::FString::FString(&local_188,"Enabled Edge Value");
      dVar1 = __real_3f50624dd2f1a9fc;
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_188.Data.ArrayNum != 0) {
        FVar5.Data = local_188.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,dVar6,dVar7,
                         __real_3f50624dd2f1a9fc);
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        ::FString::FString(&local_188,"Edge Sample X0");
        dVar6 = __real_4000000000000000;
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_188.Data.ArrayNum != 0) {
          FVar5.Data = local_188.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,local_b8.X0,
                           __real_4000000000000000,dVar1);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          ::FString::FString(&local_188,"Edge Sample Y0");
          FVar5.Data = (FScriptContainerElement *)L"";
          if (local_188.Data.ArrayNum != 0) {
            FVar5.Data = local_188.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,local_b8.Y0,dVar6,
                             dVar1);
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            ::FString::FString(&local_188,"Edge Sample X1");
            FVar5.Data = (FScriptContainerElement *)L"";
            if (local_188.Data.ArrayNum != 0) {
              FVar5.Data = local_188.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,local_b8.X1,0.0,
                               dVar1);
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (bVar3) {
              ::FString::FString(&local_188,"Edge Sample Y1");
              FVar5.Data = (FScriptContainerElement *)L"";
              if (local_188.Data.ArrayNum != 0) {
                FVar5.Data = local_188.Data.AllocatorInstance.Data;
              }
              bVar3 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,local_b8.Y1,0.0,
                                 dVar1);
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
              if (bVar3) {
                local_178 = TVar2.field0_0x0;
                local_168._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                local_168._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                local_168._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                pFVar4 = PCGSpatialNoise::CalcLocalCoordinates2D
                                   (&local_150,(TBox<double> *)&local_f0._s_0,
                                    &UE::Math::TTransform<double>::Identity,
                                    (TVector2<double> *)&local_178._s_0,
                                    (TVector<double> *)&local_168._s_0);
                local_120.X0 = pFVar4->X0;
                local_120.Y0 = pFVar4->Y0;
                local_120.X1 = pFVar4->X1;
                local_120.Y1 = pFVar4->Y1;
                local_120.FracX = pFVar4->FracX;
                local_120.FracY = pFVar4->FracY;
                dVar7 = PCGSpatialNoise::CalcEdgeBlendAmount2D(&local_120,dVar7);
                ::FString::FString(&local_188,"Enabled Edge Value Center");
                FVar5.Data = (FScriptContainerElement *)L"";
                if (local_188.Data.ArrayNum != 0) {
                  FVar5.Data = local_188.Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,dVar7,0.0,dVar1
                                  );
                if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_188.Data.AllocatorInstance.Data);
                }
                if (bVar3) {
                  local_168._s_0.X = ___xmm_3feccccccccccccd3feccccccccccccd;
                  local_168._s_0.Y = _UNK_152038538;
                  local_168._s_0.Z = __real_3feccccccccccccd;
                  local_178 = TVar2.field0_0x0;
                  pFVar4 = PCGSpatialNoise::CalcLocalCoordinates2D
                                     (&local_150,(TBox<double> *)&local_f0._s_0,
                                      &UE::Math::TTransform<double>::Identity,
                                      (TVector2<double> *)&local_178._s_0,
                                      (TVector<double> *)&local_168._s_0);
                  local_88.X0 = pFVar4->X0;
                  local_88.Y0 = pFVar4->Y0;
                  local_88.X1 = pFVar4->X1;
                  local_88.Y1 = pFVar4->Y1;
                  local_88.FracX = pFVar4->FracX;
                  local_88.FracY = pFVar4->FracY;
                  dVar7 = PCGSpatialNoise::CalcEdgeBlendAmount2D(&local_88,__real_3fe0000000000000);
                  ::FString::FString(&local_188,"Blended Edge Value");
                  FVar5.Data = (FScriptContainerElement *)L"";
                  if (local_188.Data.ArrayNum != 0) {
                    FVar5.Data = local_188.Data.AllocatorInstance.Data;
                  }
                  bVar3 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,dVar7,
                                     __real_3fe999999999999a,dVar1);
                  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_188.Data.AllocatorInstance.Data);
                  }
                  if (bVar3) {
                    ::FString::FString(&local_188,"Blended Edge Sample X");
                    dVar7 = __real_3ffe666666666666;
                    FVar5.Data = (FScriptContainerElement *)L"";
                    if (local_188.Data.ArrayNum != 0) {
                      FVar5.Data = local_188.Data.AllocatorInstance.Data;
                    }
                    bVar3 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,local_88.X0
                                       ,__real_3ffe666666666666,dVar1);
                    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_188.Data.AllocatorInstance.Data);
                    }
                    if (bVar3) {
                      ::FString::FString(&local_188,"Blended Edge Sample Y");
                      FVar5.Data = (FScriptContainerElement *)L"";
                      if (local_188.Data.ArrayNum != 0) {
                        FVar5.Data = local_188.Data.AllocatorInstance.Data;
                      }
                      bVar3 = FAutomationTestBase::TestEqual
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,
                                         local_88.Y0,dVar7,dVar1);
                      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_188.Data.AllocatorInstance.Data);
                      }
                      if (bVar3) {
                        ::FString::FString(&local_188,"Blended Edge Sample X");
                        dVar7 = __real_bfb999999999999a;
                        FVar5.Data = (FScriptContainerElement *)L"";
                        if (local_188.Data.ArrayNum != 0) {
                          FVar5.Data = local_188.Data.AllocatorInstance.Data;
                        }
                        bVar3 = FAutomationTestBase::TestEqual
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,
                                           local_88.X1,__real_bfb999999999999a,dVar1);
                        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_188.Data.AllocatorInstance.Data);
                        }
                        if (bVar3) {
                          ::FString::FString(&local_188,"Blended Edge Sample Y");
                          FVar5.Data = (FScriptContainerElement *)L"";
                          if (local_188.Data.ArrayNum != 0) {
                            FVar5.Data = local_188.Data.AllocatorInstance.Data;
                          }
                          bVar3 = FAutomationTestBase::TestEqual
                                            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,
                                             local_88.Y1,dVar7,dVar1);
                          if (local_188.Data.AllocatorInstance.Data ==
                              (FScriptContainerElement *)0x0) {
                            return bVar3;
                          }
                          FMemory::Free(local_188.Data.AllocatorInstance.Data);
                          return bVar3;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// GetBeautifiedTestName @ 14a00c330

FString * __thiscall
FPCGSpatialNoise_CalcLocalCoordinates2D::GetBeautifiedTestName
          (FPCGSpatialNoise_CalcLocalCoordinates2D *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Noise.CalcLocalCoordinates2D");
  return __return_storage_ptr__;
}

