// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// GetTestFlags @ 149f7a080

EAutomationTestFlags __thiscall
FPCGIntersectionDataTest::GetTestFlags(FPCGIntersectionDataTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f7a090

bool __thiscall FPCGIntersectionDataTest::IsStressTest(FPCGIntersectionDataTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f7a0a0

uint __thiscall FPCGIntersectionDataTest::GetRequiredDeviceNum(FPCGIntersectionDataTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f7a0b0

FString * __thiscall
FPCGIntersectionDataTest::GetTestSourceFileName
          (FPCGIntersectionDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Data\\PCGIntersectionDataTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f7a0e0

int __thiscall FPCGIntersectionDataTest::GetTestSourceFileLine(FPCGIntersectionDataTest *this)

{
  return 8;
}

// GetTests @ 149f7a0f0

/* WARNING: Removing unreachable block (ram,0x000149f7a1dd) */
/* WARNING: Removing unreachable block (ram,0x000149f7a2a8) */

void __thiscall
FPCGIntersectionDataTest::GetTests
          (FPCGIntersectionDataTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Intersection.Data");
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

// RunTest @ 149f7a2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FPCGIntersectionDataTest::RunTest(FPCGIntersectionDataTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  UPCGBasePointData *pUVar5;
  UPCGBasePointData *pUVar6;
  UPCGVolumeData *pUVar7;
  UPCGIntersectionData *pUVar8;
  UPCGIntersectionData *pUVar9;
  UPCGIntersectionData *pUVar10;
  UPCGIntersectionData *pUVar11;
  undefined1 auStack_d8 [32];
  FPCGIntersectionDataTest *local_b8;
  UPCGBasePointData *local_b0;
  FPCGIntersectionDataTest *local_a8;
  UPCGBasePointData *local_a0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  double local_68;
  double local_60;
  double local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar5 = PCGTestsCommon::CreateBasePointData();
  iVar4 = (**(code **)(pUVar5->_padding_ + 0x488))(pUVar5);
  if (iVar4 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsidePoint->GetNumPoints() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Data\\PCGIntersectionDataTest.cpp"
                       ,0xd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_98._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
       ___xmm_40c388000000000040c3880000000000;
  local_98._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_15201e8f8,0);
  local_98._0_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
       ___xmm_40c388000000000040c3880000000000;
  local_98._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_15201e8f8) >>
            0x20);
  pUVar6 = PCGTestsCommon::CreateBasePointData((TVector<double> *)&local_98._s_0);
  iVar4 = (**(code **)(pUVar6->_padding_ + 0x488))(pUVar6);
  if (iVar4 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutsidePoint->GetNumPoints() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Data\\PCGIntersectionDataTest.cpp"
                       ,0x10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_50 = 1;
  local_80._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_4059000000000000;
  local_60 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_4059000000000000 +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_80._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_4059000000000000;
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_4059000000000000 +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_80._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4059000000000000;
  local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4059000000000000 +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pUVar7 = PCGTestsCommon::CreateVolumeData((TBox<double> *)&local_80._s_0);
  pUVar8 = (UPCGIntersectionData *)(**(code **)(pUVar5->_padding_ + 1000))(pUVar5,0,pUVar7);
  pUVar9 = (UPCGIntersectionData *)(**(code **)(pUVar7->_padding_ + 1000))(pUVar7,0,pUVar5);
  pUVar10 = (UPCGIntersectionData *)(**(code **)(pUVar6->_padding_ + 1000))(pUVar6,0,pUVar7);
  pUVar11 = (UPCGIntersectionData *)(**(code **)(pUVar7->_padding_ + 1000))(pUVar7,0,pUVar6);
  local_b8 = this;
  local_b0 = pUVar5;
  `FPCGIntersectionDataTest::RunTest'::__l2::<lambda_1>::operator()(&local_b8,pUVar8);
  `FPCGIntersectionDataTest::RunTest'::__l2::<lambda_1>::operator()(&local_b8,pUVar9);
  local_a8 = this;
  local_a0 = pUVar6;
  `FPCGIntersectionDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_a8,pUVar10);
  `FPCGIntersectionDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_a8,pUVar11);
  return true;
}

// GetBeautifiedTestName @ 149f7a550

FString * __thiscall
FPCGIntersectionDataTest::GetBeautifiedTestName
          (FPCGIntersectionDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Intersection.Data");
  return __return_storage_ptr__;
}

// operator() @ 149f95a40

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

void __thiscall
`FPCGIntersectionDataTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,UPCGIntersectionData *param_1)

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  UPCGBasePointData *pUVar6;
  FPCGPoint *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_5b8 [32];
  undefined8 local_598;
  FString local_588;
  TVector<double>_u_0 local_578;
  double dStack_560;
  double dStack_558;
  double dStack_550;
  undefined1 local_548;
  undefined4 local_547;
  undefined2 local_543;
  undefined1 local_541;
  FPCGPoint local_538;
  FPCGPoint local_468;
  undefined1 local_398 [64];
  FConstPCGPointValueRanges local_358;
  FConstPCGPointValueRanges local_1c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5b8;
  pFVar1 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_588,"Valid intersection");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_588.Data.ArrayNum != 0) {
    FVar8.Data = local_588.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,param_1 != (UPCGIntersectionData *)0x0)
  ;
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  if (param_1 == (UPCGIntersectionData *)0x0) {
    return;
  }
  pFVar1 = *(FAutomationTestBase **)this;
  iVar3 = (**(code **)(param_1->_padding_ + 0x380))(param_1);
  ::FString::FString(&local_588,"Valid dimension");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_588.Data.ArrayNum != 0) {
    FVar8.Data = local_588.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,iVar3 == 0);
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationTestBase **)this;
  pdVar4 = (double *)(**(code **)(param_1->_padding_ + 0x388))(param_1,&local_578);
  pdVar5 = (double *)
           (**(code **)(**(longlong **)((longlong)this + 8) + 0x388))
                     (*(longlong **)((longlong)this + 8),local_398);
  if (*(char *)(pdVar4 + 6) == '\0') {
    if (*(char *)(pdVar5 + 6) != '\0') goto LAB_149f95b59;
LAB_149f95fc2:
    bVar2 = true;
  }
  else {
    if ((((*(char *)(pdVar5 + 6) != '\0') && (*pdVar5 == *pdVar4)) && (pdVar5[1] == pdVar4[1])) &&
       (((pdVar5[2] == pdVar4[2] && (pdVar5[3] == pdVar4[3])) &&
        ((pdVar5[4] == pdVar4[4] && (pdVar5[5] == pdVar4[5])))))) goto LAB_149f95fc2;
LAB_149f95b59:
    bVar2 = false;
  }
  ::FString::FString(&local_588,"Valid bounds");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_588.Data.ArrayNum != 0) {
    FVar8.Data = local_588.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,bVar2);
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationTestBase **)this;
  pdVar4 = (double *)(**(code **)(param_1->_padding_ + 0x398))(param_1,local_398);
  pdVar5 = (double *)
           (**(code **)(**(longlong **)((longlong)this + 8) + 0x398))
                     (*(longlong **)((longlong)this + 8),&local_578);
  if (*(char *)(pdVar4 + 6) == '\0') {
    if (*(char *)(pdVar5 + 6) == '\0') {
LAB_149f9602f:
      bVar2 = true;
      goto LAB_149f95bdc;
    }
  }
  else if ((((*(char *)(pdVar5 + 6) != '\0') && (*pdVar5 == *pdVar4)) &&
           ((pdVar5[1] == pdVar4[1] &&
            (((pdVar5[2] == pdVar4[2] && (pdVar5[3] == pdVar4[3])) && (pdVar5[4] == pdVar4[4]))))))
          && (pdVar5[5] == pdVar4[5])) goto LAB_149f9602f;
  bVar2 = false;
LAB_149f95bdc:
  ::FString::FString(&local_588,"Valid strict bounds");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_588.Data.ArrayNum != 0) {
    FVar8.Data = local_588.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,bVar2);
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_358,*(UPCGBasePointData **)((longlong)this + 8));
  FConstPCGPointValueRanges::GetPoint(&local_358,&local_468,0);
  pFVar1 = *(FAutomationTestBase **)this;
  local_538.Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_538.Transform.Rotation.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_598 = 0;
  local_538.Density = 1.0;
  local_538.Steepness = 0.5;
  local_538.Seed = 0;
  local_538.MetadataEntry = -1;
  local_548 = 1;
  local_538.Transform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_538.Transform.Rotation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_538.Transform.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_538.Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_538.Transform.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_538.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_538.Transform.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  local_538.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_538.Transform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_538.Transform.Translation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_538.BoundsMin.field0_0x0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                              0x20) ^ uVar10,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar9);
  local_538.Transform.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
  ;
  local_538.Transform.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
  ;
  local_538.BoundsMin.field0_0x0._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                              0x20) ^ uVar10,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar9);
  local_538.BoundsMin.field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar10,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar9);
  local_538.BoundsMax.field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_538.BoundsMax.field0_0x0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_538.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_538.Color.field0_0x0._s_0.Y = _UNK_150689688;
  local_538.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
  local_538.Color.field0_0x0._s_0.W = _UNK_150689688;
  local_578._s_0.Z = local_468.BoundsMin.field0_0x0._s_0.Z;
  local_578._s_0.X = local_468.BoundsMin.field0_0x0._s_0.X;
  local_578._s_0.Y = local_468.BoundsMin.field0_0x0._s_0.Y;
  dStack_560 = local_468.BoundsMax.field0_0x0._s_0.X;
  dStack_558 = local_468.BoundsMax.field0_0x0._s_0.Y;
  local_538.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  dStack_550 = local_468.BoundsMax.field0_0x0._s_0.Z;
  bVar2 = (bool)(**(code **)(param_1->_padding_ + 0x3c0))(param_1,&local_468,&local_578,&local_538);
  ::FString::FString(&local_588,"Successful point sampling");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_588.Data.ArrayNum != 0) {
    FVar8.Data = local_588.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,bVar2);
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationTestBase **)this;
  bVar2 = PCGTestsCommon::PointsAreIdentical(&local_468,&local_538);
  ::FString::FString(&local_588,"Correct sampled point");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_588.Data.ArrayNum != 0) {
    FVar8.Data = local_588.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,bVar2);
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  local_548 = 0;
  local_547 = 0;
  local_543 = 0;
  local_541 = 0;
  local_578._s_0.X = 0.0;
  local_578._s_0.Y = 0.0;
  local_578._s_0.Z = 0.0;
  dStack_560 = 0.0;
  dStack_558 = 0.0;
  dStack_550 = 0.0;
  pUVar6 = UPCGSpatialData::ToBasePointData
                     ((UPCGSpatialData *)param_1,(FPCGContext *)0x0,(TBox<double> *)&local_578._s_0)
  ;
  pFVar1 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_588,"Successful ToPoint");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_588.Data.ArrayNum != 0) {
    FVar8.Data = local_588.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,pUVar6 != (UPCGBasePointData *)0x0);
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  if (pUVar6 != (UPCGBasePointData *)0x0) {
    pFVar1 = *(FAutomationTestBase **)this;
    iVar3 = (**(code **)(pUVar6->_padding_ + 0x488))(pUVar6);
    ::FString::FString(&local_588,"Valid number of points in ToPoint");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_588.Data.ArrayNum != 0) {
      FVar8.Data = local_588.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,iVar3 == 1);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
    iVar3 = (**(code **)(pUVar6->_padding_ + 0x488))(pUVar6);
    if (iVar3 == 1) {
      FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_1c8,pUVar6);
      pFVar1 = *(FAutomationTestBase **)this;
      pFVar7 = FConstPCGPointValueRanges::GetPoint(&local_1c8,(FPCGPoint *)&local_358,0);
      bVar2 = PCGTestsCommon::PointsAreIdentical(&local_468,pFVar7);
      ::FString::FString(&local_588,"Correct point in ToPoint");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_588.Data.ArrayNum != 0) {
        FVar8.Data = local_588.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,bVar2);
      if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_588.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 149f96470

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

void __thiscall
`FPCGIntersectionDataTest::RunTest'::__l2::<lambda_2>::operator()
          (void *this,UPCGIntersectionData *param_1)

{
  FAutomationTestBase *pFVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  UPCGBasePointData *pUVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_3e8 [32];
  undefined8 local_3c8;
  FString local_3b8;
  TVector<double>_u_0 local_3a8;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  undefined1 local_378;
  undefined4 local_377;
  undefined2 local_373;
  undefined1 local_371;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  FPCGPoint local_298;
  FConstPCGPointValueRanges local_1c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  pFVar1 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_3b8,"Valid intersection");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3b8.Data.ArrayNum != 0) {
    FVar6.Data = local_3b8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar6.Data,param_1 != (UPCGIntersectionData *)0x0)
  ;
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if (param_1 != (UPCGIntersectionData *)0x0) {
    pFVar1 = *(FAutomationTestBase **)this;
    iVar3 = (**(code **)(param_1->_padding_ + 0x380))(param_1);
    ::FString::FString(&local_3b8,"Valid dimension");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_3b8.Data.ArrayNum != 0) {
      FVar6.Data = local_3b8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar6.Data,iVar3 == 0);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    pFVar1 = *(FAutomationTestBase **)this;
    lVar4 = (**(code **)(param_1->_padding_ + 0x388))(param_1,&local_3a8);
    cVar2 = *(char *)(lVar4 + 0x30);
    ::FString::FString(&local_3b8,"Null bounds");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_3b8.Data.ArrayNum != 0) {
      FVar6.Data = local_3b8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar6.Data,cVar2 == '\0');
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    pFVar1 = *(FAutomationTestBase **)this;
    lVar4 = (**(code **)(param_1->_padding_ + 0x398))(param_1,&local_3a8);
    cVar2 = *(char *)(lVar4 + 0x30);
    ::FString::FString(&local_3b8,"Null strict bounds");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_3b8.Data.ArrayNum != 0) {
      FVar6.Data = local_3b8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar6.Data,cVar2 == '\0');
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    FConstPCGPointValueRanges::FConstPCGPointValueRanges
              (&local_1c8,*(UPCGBasePointData **)((longlong)this + 8));
    FConstPCGPointValueRanges::GetPoint(&local_1c8,&local_298,0);
    pFVar1 = *(FAutomationTestBase **)this;
    local_368 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dStack_360 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_3c8 = 0;
    local_308 = 0x3f800000;
    local_2a8 = 0x3f000000;
    local_2a0 = 0xffffffffffffffff;
    local_378 = 1;
    local_358 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dStack_350 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_348._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_348._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_348._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_328._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_328._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_328._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_338 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    dStack_330 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    uVar7 = (uint)__xmm_80000000000000008000000000000000;
    uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_300 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                               0x20) ^ uVar8,
                         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar7);
    local_318 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dStack_310 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_2f8 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                               0x20) ^ uVar8,
                         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar7);
    local_2f0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                               0x20) ^ uVar8,
                         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar7);
    local_2e8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_2e0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_2c8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_2c0 = _UNK_150689688;
    local_2b8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_2b0 = _UNK_150689688;
    local_3a8._s_0.Z = local_298.BoundsMin.field0_0x0._s_0.Z;
    local_3a8._s_0.X = local_298.BoundsMin.field0_0x0._s_0.X;
    local_3a8._s_0.Y = local_298.BoundsMin.field0_0x0._s_0.Y;
    dStack_390 = local_298.BoundsMax.field0_0x0._s_0.X;
    dStack_388 = local_298.BoundsMax.field0_0x0._s_0.Y;
    local_2d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dStack_380 = local_298.BoundsMax.field0_0x0._s_0.Z;
    cVar2 = (**(code **)(param_1->_padding_ + 0x3c0))(param_1,&local_298,&local_3a8,&local_368);
    ::FString::FString(&local_3b8,"Unsuccessful point sampling");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_3b8.Data.ArrayNum != 0) {
      FVar6.Data = local_3b8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar6.Data,cVar2 == '\0');
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    local_378 = 0;
    local_377 = 0;
    local_373 = 0;
    local_371 = 0;
    local_3a8._s_0.X = 0.0;
    local_3a8._s_0.Y = 0.0;
    local_3a8._s_0.Z = 0.0;
    dStack_390 = 0.0;
    dStack_388 = 0.0;
    dStack_380 = 0.0;
    pUVar5 = UPCGSpatialData::ToBasePointData
                       ((UPCGSpatialData *)param_1,(FPCGContext *)0x0,
                        (TBox<double> *)&local_3a8._s_0);
    pFVar1 = *(FAutomationTestBase **)this;
    ::FString::FString(&local_3b8,"Successful ToPoint");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_3b8.Data.ArrayNum != 0) {
      FVar6.Data = local_3b8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar6.Data,pUVar5 != (UPCGBasePointData *)0x0);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    if (pUVar5 != (UPCGBasePointData *)0x0) {
      pFVar1 = *(FAutomationTestBase **)this;
      iVar3 = (**(code **)(pUVar5->_padding_ + 0x488))(pUVar5);
      ::FString::FString(&local_3b8,"Empty point data");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_3b8.Data.ArrayNum != 0) {
        FVar6.Data = local_3b8.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar6.Data,iVar3 == 0);
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

