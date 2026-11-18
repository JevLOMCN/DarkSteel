// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// GetTestFlags @ 149f796a0

EAutomationTestFlags __thiscall FPCGDifferenceDataTest::GetTestFlags(FPCGDifferenceDataTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f796b0

bool __thiscall FPCGDifferenceDataTest::IsStressTest(FPCGDifferenceDataTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f796c0

uint __thiscall FPCGDifferenceDataTest::GetRequiredDeviceNum(FPCGDifferenceDataTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f796d0

FString * __thiscall
FPCGDifferenceDataTest::GetTestSourceFileName
          (FPCGDifferenceDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Data\\PCGDifferenceDataTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f79700

int __thiscall FPCGDifferenceDataTest::GetTestSourceFileLine(FPCGDifferenceDataTest *this)

{
  return 8;
}

// GetTests @ 149f79710

/* WARNING: Removing unreachable block (ram,0x000149f797fd) */
/* WARNING: Removing unreachable block (ram,0x000149f798c8) */

void __thiscall
FPCGDifferenceDataTest::GetTests
          (FPCGDifferenceDataTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Difference.Data");
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

// RunTest @ 149f798f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FPCGDifferenceDataTest::RunTest(FPCGDifferenceDataTest *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  UPCGVolumeData *pUVar3;
  UPCGVolumeData *pUVar4;
  UPCGVolumeData *pUVar5;
  UPCGBasePointData *pUVar6;
  UPCGBasePointData *pUVar7;
  UPCGBasePointData *pUVar8;
  UPCGDifferenceData *pUVar9;
  UPCGDifferenceData *pUVar10;
  UPCGDifferenceData *pUVar11;
  UPCGDifferenceData *pUVar12;
  undefined1 auStack_198 [32];
  FPCGDifferenceDataTest *local_178;
  FPCGDifferenceDataTest *local_170;
  UPCGBasePointData *local_168;
  UPCGVolumeData *local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined1 local_e0;
  TVector<double>_u_0 local_d8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8;
  TVector<double>_u_0 local_a0;
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_70;
  ulonglong local_68;
  
  dVar2 = _UNK_15201e8e8;
  dVar1 = ___xmm_407f400000000000407f400000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_e0 = 1;
  local_110._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_406f400000000000 -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
       ___xmm_407f400000000000407f400000000000;
  local_110._s_0.Y =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_406f400000000000 -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y *
       ___xmm_407f400000000000407f400000000000;
  local_f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_406f400000000000 +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
             ___xmm_407f400000000000407f400000000000;
  local_f0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_406f400000000000 +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y *
             ___xmm_407f400000000000407f400000000000;
  local_110._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_406f400000000000 -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
       ___xmm_407f400000000000407f400000000000;
  local_e8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_406f400000000000 +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
             ___xmm_407f400000000000407f400000000000;
  pUVar3 = PCGTestsCommon::CreateVolumeData((TBox<double> *)&local_110._s_0);
  local_a8 = 1;
  local_d8._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_c06f400000000000 -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar1;
  local_d8._s_0.Y =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_c06f400000000000 -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar1;
  local_c0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_c06f400000000000 +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar1;
  local_b8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_c06f400000000000 +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar1;
  local_d8._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_c06f400000000000 -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar1;
  local_b0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_c06f400000000000 +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar1;
  local_160 = pUVar3;
  pUVar4 = PCGTestsCommon::CreateVolumeData((TBox<double> *)&local_d8._s_0);
  local_a0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_40c3880000000000 -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar1;
  local_70 = 1;
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_40c3880000000000 +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar1;
  local_a0._s_0.Y =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_40c3880000000000 -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar1;
  local_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_40c3880000000000 +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar1;
  local_a0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_40c3880000000000 -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar1;
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_40c3880000000000 +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar1;
  pUVar5 = PCGTestsCommon::CreateVolumeData((TBox<double> *)&local_a0._s_0);
  local_158._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar2,0);
  local_158._0_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar1;
  local_158._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar2) >> 0x20);
  local_158._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar1;
  local_168 = PCGTestsCommon::CreateBasePointData((TVector<double> *)&local_158._s_0);
  local_140._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
       ___xmm_c07f400000000000c07f400000000000;
  local_140._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_15201e928,0)
  ;
  local_140._0_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
       ___xmm_c07f400000000000c07f400000000000;
  local_140._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_15201e928) >>
            0x20);
  pUVar6 = PCGTestsCommon::CreateBasePointData((TVector<double> *)&local_140._s_0);
  pUVar7 = PCGTestsCommon::CreateBasePointData();
  local_128._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
       ___xmm_c0c3880000000000c0c3880000000000;
  local_128._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_15201e938,0)
  ;
  local_128._0_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
       ___xmm_c0c3880000000000c0c3880000000000;
  local_128._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_15201e938) >>
            0x20);
  pUVar8 = PCGTestsCommon::CreateBasePointData((TVector<double> *)&local_128._s_0);
  local_178 = this;
  local_170 = this;
  pUVar9 = `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_1>::operator()(&local_170,pUVar3,pUVar4)
  ;
  pUVar10 = `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_1>::operator()
                      (&local_170,pUVar4,pUVar3);
  pUVar11 = `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_1>::operator()
                      (&local_170,pUVar3,pUVar5);
  pUVar12 = `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_1>::operator()
                      (&local_170,pUVar5,local_160);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar9,local_168,true);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar9,pUVar6,false);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar9,pUVar7,false);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()
            (&local_178,pUVar10,local_168,false);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar10,pUVar6,true);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar10,pUVar7,false);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar11,local_168,true)
  ;
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar11,pUVar6,false);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar11,pUVar7,true);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()
            (&local_178,pUVar12,local_168,false);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar12,pUVar6,false);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar12,pUVar7,false);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar9,pUVar8,false);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar10,pUVar8,false);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar11,pUVar8,false);
  `FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()(&local_178,pUVar12,pUVar8,false);
  return true;
}

// GetBeautifiedTestName @ 149f79d80

FString * __thiscall
FPCGDifferenceDataTest::GetBeautifiedTestName
          (FPCGDifferenceDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Difference.Data");
  return __return_storage_ptr__;
}

// operator() @ 149f956e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UPCGDifferenceData * __thiscall
`FPCGDifferenceDataTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,UPCGVolumeData *param_1,UPCGVolumeData *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FAutomationTestBase *pFVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  UPCGDifferenceData *pUVar8;
  double *pdVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined1 auStack_118 [40];
  FString local_f0;
  FString local_e0;
  FString local_d0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  char local_88;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  plVar1 = *(longlong **)this;
  ::FString::FString(&local_f0,"OriginalVolume");
  if (param_1 == (UPCGVolumeData *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_e0,L"Expected \'%s\' to be not null.");
    (*pcVar2)(plVar1,&local_e0,0);
    bVar11 = false;
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      bVar11 = false;
    }
LAB_149f957d8:
    bVar4 = true;
    bVar6 = true;
    if (bVar11) goto LAB_149f957e6;
  }
  else {
    plVar1 = *(longlong **)this;
    ::FString::FString(&local_d0,"DifferenceVolume");
    if (param_2 == (UPCGVolumeData *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x28);
      ::FString::PrintfImpl(&local_e0,L"Expected \'%s\' to be not null.");
      (*pcVar2)(plVar1,&local_e0,0);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      bVar11 = true;
      goto LAB_149f957d8;
    }
    bVar6 = false;
LAB_149f957e6:
    bVar4 = bVar6;
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    return (UPCGDifferenceData *)0x0;
  }
  pUVar8 = (UPCGDifferenceData *)(**(code **)(param_1->_padding_ + 0x418))(param_1,0,param_2);
  plVar1 = *(longlong **)this;
  ::FString::FString(&local_f0,"DifferenceData");
  if (pUVar8 == (UPCGDifferenceData *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_e0,L"Expected \'%s\' to be not null.");
    (*pcVar2)(plVar1,&local_e0,0);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (bVar11) {
    return (UPCGDifferenceData *)0x0;
  }
  pFVar3 = *(FAutomationTestBase **)this;
  iVar7 = (**(code **)(pUVar8->_padding_ + 0x380))(pUVar8);
  ::FString::FString(&local_f0,"DifferenceData dimension");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar10.Data = local_f0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(pFVar3,(wchar_t *)FVar10.Data,iVar7,3);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  (**(code **)(pUVar8->_padding_ + 0x388))(pUVar8,&local_b8);
  cVar5 = local_88;
  pFVar3 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_f0,"DifferenceData bounds is valid");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar10.Data = local_f0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar10.Data,cVar5 != '\0');
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  plVar1 = *(longlong **)this;
  pdVar9 = (double *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_80);
  ::FString::FString(&local_d0,"DifferenceData Bounds");
  if (local_88 == '\0') {
    bVar11 = *(char *)(pdVar9 + 6) == '\0';
LAB_149f959c4:
    if (bVar11) goto LAB_149f95a01;
  }
  else if ((((*(char *)(pdVar9 + 6) != '\0') && (local_b8 == *pdVar9)) && (local_b0 == pdVar9[1]))
          && (((local_a8 == pdVar9[2] && (local_a0 == pdVar9[3])) && (local_98 == pdVar9[4])))) {
    bVar11 = local_90 == pdVar9[5];
    goto LAB_149f959c4;
  }
  pcVar2 = *(code **)(*plVar1 + 0x28);
  ::FString::PrintfImpl(&local_e0,L"%s: The two values are not equal.");
  (*pcVar2)(plVar1,&local_e0,0);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
LAB_149f95a01:
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    return pUVar8;
  }
  return pUVar8;
}

// operator() @ 149f96040

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
`FPCGDifferenceDataTest::RunTest'::__l2::<lambda_2>::operator()
          (void *this,UPCGDifferenceData *param_1,UPCGBasePointData *param_2,bool param_3)

{
  longlong *plVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UPCGBasePointData *pUVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  TVector<double>_u_0 local_3f8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8;
  undefined4 local_3c7;
  undefined2 local_3c3;
  undefined1 local_3c1;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  undefined1 local_390;
  FPCGPoint local_388;
  FPCGPoint local_2b8;
  FConstPCGPointValueRanges local_1e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_498;
  if ((param_2 == (UPCGBasePointData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PointData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Data\\PCGDifferenceDataTest.cpp"
                         ,0x3a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar1 = *(longlong **)this;
  ::FString::FString(&local_468,"DifferenceData");
  if (param_1 == (UPCGDifferenceData *)0x0) {
    pcVar3 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_418,L"Expected \'%s\' to be not null.");
    (*pcVar3)(plVar1,&local_418);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    iVar6 = (**(code **)(param_2->_padding_ + 0x488))(param_2);
    if ((iVar6 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PointData->GetNumPoints() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Data\\PCGDifferenceDataTest.cpp"
                           ,0x42,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_1e8,param_2);
    FConstPCGPointValueRanges::GetPoint(&local_1e8,&local_2b8,0);
    local_388.Transform.Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_388.Transform.Rotation.XY.m128d_f64[1] =
         (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_478 = 0;
    local_388.Density = 1.0;
    local_388.Steepness = 0.5;
    local_388.Seed = 0;
    local_388.MetadataEntry = -1;
    local_390 = 1;
    local_388.Transform.Rotation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_388.Transform.Rotation.ZW.m128d_f64[1] =
         (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_388.Transform.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_388.Transform.Translation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_388.Transform.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_388.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_388.Transform.Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_388.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_388.Transform.Translation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_388.Transform.Translation.ZW.m128d_f64[1] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    uVar9 = (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_388.BoundsMin.field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                                0x20) ^ uVar10,
                          SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar9);
    local_388.Transform.Scale3D.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_388.Transform.Scale3D.ZW.m128d_f64[1] =
         (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_388.BoundsMin.field0_0x0._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                                0x20) ^ uVar10,
                          SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar9);
    local_388.BoundsMin.field0_0x0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                >> 0x20) ^ uVar10,
                          SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar9);
    local_388.BoundsMax.field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_388.BoundsMax.field0_0x0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_388.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_388.Color.field0_0x0._s_0.Y = _UNK_150689688;
    local_388.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
    local_388.Color.field0_0x0._s_0.W = _UNK_150689688;
    local_3b0 = local_2b8.BoundsMin.field0_0x0._s_0.Z;
    local_3c0 = local_2b8.BoundsMin.field0_0x0._s_0.X;
    dStack_3b8 = local_2b8.BoundsMin.field0_0x0._s_0.Y;
    local_3a8 = local_2b8.BoundsMax.field0_0x0._s_0.X;
    dStack_3a0 = local_2b8.BoundsMax.field0_0x0._s_0.Y;
    local_388.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_398 = local_2b8.BoundsMax.field0_0x0._s_0.Z;
    cVar5 = (**(code **)(param_1->_padding_ + 0x3c0))(param_1,&local_2b8,&local_3c0,&local_388);
    pFVar2 = *(FAutomationTestBase **)this;
    ::FString::FString(&local_458,"Point sampled");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_458.Data.ArrayNum != 0) {
      FVar8.Data = local_458.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(pFVar2,(wchar_t *)FVar8.Data,(bool)cVar5 == param_3);
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    if ((cVar5 != '\0') && (param_3)) {
      pFVar2 = *(FAutomationTestBase **)this;
      bVar4 = PCGTestsCommon::PointsAreIdentical(&local_2b8,&local_388);
      ::FString::FString(&local_448,"Sampled point identical");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_448.Data.ArrayNum != 0) {
        FVar8.Data = local_448.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue(pFVar2,(wchar_t *)FVar8.Data,bVar4);
      if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.Data.AllocatorInstance.Data);
      }
    }
    local_3c8 = 0;
    local_3c7 = 0;
    local_3c3 = 0;
    local_3c1 = 0;
    local_3f8._s_0.X = 0.0;
    local_3f8._s_0.Y = 0.0;
    local_3f8._s_0.Z = 0.0;
    uStack_3e0 = 0;
    local_3d8 = 0;
    uStack_3d0 = 0;
    pUVar7 = UPCGSpatialData::ToBasePointData
                       ((UPCGSpatialData *)param_1,(FPCGContext *)0x0,
                        (TBox<double> *)&local_3f8._s_0);
    plVar1 = *(longlong **)this;
    ::FString::FString(&local_438,"PointData generated");
    if (pUVar7 == (UPCGBasePointData *)0x0) {
      pcVar3 = *(code **)(*plVar1 + 0x28);
      ::FString::PrintfImpl(&local_408,L"Expected \'%s\' to be not null.");
      (*pcVar3)(plVar1,&local_408,0);
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pFVar2 = *(FAutomationTestBase **)this;
      iVar6 = (**(code **)(pUVar7->_padding_ + 0x488))(pUVar7);
      ::FString::FString(&local_428,"PointData exists");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_428.Data.ArrayNum != 0) {
        FVar8.Data = local_428.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue(pFVar2,(wchar_t *)FVar8.Data,0 < iVar6);
      if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_428.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

