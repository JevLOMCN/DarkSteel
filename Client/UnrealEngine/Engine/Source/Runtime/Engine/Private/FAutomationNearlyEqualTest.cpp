// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// <lambda_invoker_cdecl> @ 1487f1040

FString * __cdecl
`FAutomationNearlyEqualTest::RunFRotatorMutationTest'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FString *__return_storage_ptr__,FString *param_1,uint param_2,uint param_3,double param_4
          )

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"%s: the actual FRotator value is not nearly equal to the expected FRotator value\n(mutation mask for actual value is (%c, %c, %c), mutation mask for expected value is (%c, %c, %c), values were increased by %f)"
            );
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 1487f1130

FString * __cdecl
`FAutomationNearlyEqualTest::RunFTransformMutationTest'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FString *__return_storage_ptr__,FString *param_1,uint param_2,uint param_3,double param_4
          )

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"%s: the actual FTransform value is not nearly equal to the expected FTransform value\n(mutation mask for actual value is (%c, %c, %c, %c, %c, %c, %c, %c, %c), mutation mask for expected value is (%c, %c, %c, %c, %c, %c, %c, %c, %c), values were increased by %f)"
            );
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 1487f1430

FString * __cdecl
`FAutomationNearlyEqualTest::RunFVectorMutationTest'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FString *__return_storage_ptr__,FString *param_1,uint param_2,uint param_3,double param_4
          )

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"%s: the actual FVector value is not nearly equal to the expected FVector value\n(mutation mask for actual value is (%c, %c, %c), mutation mask for expected value is (%c, %c, %c), values were increased by %f)"
            );
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 1487f1520

TRotator<double> * __cdecl
`FAutomationNearlyEqualTest::RunFRotatorMutationTest'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1,uint param_2,
          double param_3)

{
  __return_storage_ptr__->Pitch = (double)(param_2 >> 2 & 1) * param_3 + param_1->Pitch;
  __return_storage_ptr__->Yaw = (double)(param_2 >> 1 & 1) * param_3 + param_1->Yaw;
  __return_storage_ptr__->Roll = (double)(param_2 & 1) * param_3 + param_1->Roll;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 1487f1590

TTransform<double> * __cdecl
`FAutomationNearlyEqualTest::RunFTransformMutationTest'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,uint param_2,
          double param_3)

{
  undefined1 local_res8 [32];
  
  operator()(local_res8,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 1487f15d0

TVector<double> * __cdecl
`FAutomationNearlyEqualTest::RunFVectorMutationTest'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,uint param_2,
          double param_3)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(param_2 >> 2 & 1) * param_3 + (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(param_2 >> 1 & 1) * param_3 + (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)(param_2 & 1) * param_3 + (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// RunMutationTestImpl<UE::Math::TRotator<double>_> @ 148802f90

int __thiscall
FAutomationNearlyEqualTest::RunMutationTestImpl<UE::Math::TRotator<double>_>
          (FAutomationNearlyEqualTest *this,FString *param_1,TRotator<double> *param_2,uint param_3,
          float param_4,float param_5,
          TFunction<FString___cdecl(FString_const_&,unsigned_int,unsigned_int,double)> *param_6,
          TFunction<UE::Math::TRotator<double>___cdecl(UE::Math::TRotator<double>_const_&,unsigned_int,double)>
          *param_7)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  int local_148;
  uint local_140 [2];
  uint local_138 [2];
  uint local_130 [2];
  uint local_128 [2];
  TRotator<double> *local_120;
  FString *local_118;
  double local_110;
  double local_108;
  double local_100;
  FAutomationTestBase *local_f8;
  wchar_t *local_f0;
  int local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  TRotator<double> local_a8;
  TRotator<double> local_88 [3];
  
  local_120 = param_2;
  local_118 = param_1;
  local_f8 = (FAutomationTestBase *)this;
  if ((param_4 == 0.0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Difference != 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                         ,0x288,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  if ((param_5 <= 0.0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tolerance > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                         ,0x289,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  iVar4 = 0;
  local_148 = 0;
  uVar9 = 0;
  do {
    uVar8 = 0;
    do {
      if (uVar9 != uVar8) {
        dVar2 = (double)param_4;
        local_140[0] = uVar8;
        local_138[0] = uVar9;
        local_110 = dVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)param_6);
        pcVar1 = *(code **)param_6;
        plVar6 = *(longlong **)&param_6->field_0x28;
        if (*(longlong **)&param_6->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_6->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar1)(&local_f0,uVar5,param_1,local_138,local_140,&local_110);
        local_130[0] = uVar9;
        local_108 = dVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)param_7);
        pcVar1 = *(code **)param_7;
        plVar6 = *(longlong **)&param_7->field_0x28;
        if (*(longlong **)&param_7->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_7->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar1)(&local_c8,uVar5,local_120,local_130,&local_108);
        local_128[0] = uVar8;
        local_100 = dVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)param_7);
        pcVar1 = *(code **)param_7;
        plVar6 = *(longlong **)&param_7->field_0x28;
        if (*(longlong **)&param_7->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_7->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar1)(&local_e0,uVar5,local_120,local_128,&local_100);
        pwVar7 = L"";
        if (local_e8 != 0) {
          pwVar7 = local_f0;
        }
        local_a8.Pitch = local_e0;
        local_a8.Yaw = dStack_d8;
        local_a8.Roll = local_d0;
        local_88[0].Pitch = local_c8;
        local_88[0].Yaw = dStack_c0;
        local_88[0].Roll = local_b8;
        FAutomationTestBase::TestNearlyEqual(local_f8,pwVar7,local_88,&local_a8,param_5);
        iVar4 = local_148 + 1;
        param_1 = local_118;
        local_148 = iVar4;
        if (local_f0 != (wchar_t *)0x0) {
          FMemory::Free(local_f0);
          param_1 = local_118;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 <= param_3);
    uVar9 = uVar9 + 1;
  } while (uVar9 <= param_3);
  if (*(longlong *)param_6 != 0) {
    plVar6 = (longlong *)&param_6->field_0x10;
    if (*(longlong **)&param_6->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_6->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)param_7 != 0) {
    plVar6 = (longlong *)&param_7->field_0x10;
    if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_7->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return iVar4;
}

// RunMutationTestImpl<UE::Math::TTransform<double>_> @ 148803240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FAutomationNearlyEqualTest::RunMutationTestImpl<UE::Math::TTransform<double>_>
          (FAutomationNearlyEqualTest *this,FString *param_1,TTransform<double> *param_2,
          uint param_3,float param_4,float param_5,
          TFunction<FString___cdecl(FString_const_&,unsigned_int,unsigned_int,double)> *param_6,
          TFunction<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,unsigned_int,double)>
          *param_7)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStackY_298 [32];
  int local_268;
  uint local_258 [2];
  uint local_250 [2];
  uint local_248 [2];
  TTransform<double> *local_240;
  FString *local_238;
  double local_230;
  double local_228;
  double local_220;
  FAutomationTestBase *local_218;
  wchar_t *local_210;
  int local_208;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_240 = param_2;
  local_238 = param_1;
  local_218 = (FAutomationTestBase *)this;
  if ((param_4 == 0.0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Difference != 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                         ,0x288,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  if ((param_5 <= 0.0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tolerance > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                         ,0x289,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  iVar4 = 0;
  local_268 = 0;
  uVar9 = 0;
  do {
    uVar8 = 0;
    do {
      if (uVar9 != uVar8) {
        dVar2 = (double)param_4;
        local_258[0] = uVar9;
        local_230 = dVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)param_6);
        pcVar1 = *(code **)param_6;
        plVar6 = *(longlong **)&param_6->field_0x28;
        if (*(longlong **)&param_6->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_6->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar1)(&local_210,uVar5,param_1,local_258);
        local_250[0] = uVar9;
        local_228 = dVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)param_7);
        pcVar1 = *(code **)param_7;
        plVar6 = *(longlong **)&param_7->field_0x28;
        if (*(longlong **)&param_7->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_7->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar1)(&local_d8,uVar5,local_240,local_250);
        local_248[0] = uVar8;
        local_220 = dVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)param_7);
        pcVar1 = *(code **)param_7;
        plVar6 = *(longlong **)&param_7->field_0x28;
        if (*(longlong **)&param_7->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_7->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar1)(&local_138,uVar5,local_240,local_248);
        local_1f8.Rotation.XY.m128d_f64[0] = local_138;
        local_1f8.Rotation.XY.m128d_f64[1] = dStack_130;
        pwVar7 = L"";
        if (local_208 != 0) {
          pwVar7 = local_210;
        }
        local_1f8.Rotation.ZW.m128d_f64[0] = local_128;
        local_1f8.Rotation.ZW.m128d_f64[1] = dStack_120;
        local_1f8.Translation.XY.m128d_f64[0] = local_118;
        local_1f8.Translation.XY.m128d_f64[1] = dStack_110;
        local_1f8.Translation.ZW.m128d_f64[0] = local_108;
        local_1f8.Translation.ZW.m128d_f64[1] = dStack_100;
        local_1f8.Scale3D.XY.m128d_f64[0] = local_f8;
        local_1f8.Scale3D.XY.m128d_f64[1] = dStack_f0;
        local_1f8.Scale3D.ZW.m128d_f64[0] = local_e8;
        local_1f8.Scale3D.ZW.m128d_f64[1] = dStack_e0;
        local_198.Rotation.XY.m128d_f64[0] = local_d8;
        local_198.Rotation.XY.m128d_f64[1] = dStack_d0;
        local_198.Rotation.ZW.m128d_f64[0] = local_c8;
        local_198.Rotation.ZW.m128d_f64[1] = dStack_c0;
        local_198.Translation.XY.m128d_f64[0] = local_b8;
        local_198.Translation.XY.m128d_f64[1] = dStack_b0;
        local_198.Translation.ZW.m128d_f64[0] = local_a8;
        local_198.Translation.ZW.m128d_f64[1] = dStack_a0;
        local_198.Scale3D.XY.m128d_f64[0] = local_98;
        local_198.Scale3D.XY.m128d_f64[1] = dStack_90;
        local_198.Scale3D.ZW.m128d_f64[0] = local_88;
        local_198.Scale3D.ZW.m128d_f64[1] = dStack_80;
        FAutomationTestBase::TestNearlyEqual(local_218,pwVar7,&local_198,&local_1f8,param_5);
        iVar4 = local_268 + 1;
        param_1 = local_238;
        local_268 = iVar4;
        if (local_210 != (wchar_t *)0x0) {
          FMemory::Free(local_210);
          param_1 = local_238;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 <= param_3);
    uVar9 = uVar9 + 1;
  } while (uVar9 <= param_3);
  if (*(longlong *)param_6 != 0) {
    plVar6 = (longlong *)&param_6->field_0x10;
    if (*(longlong **)&param_6->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_6->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)param_7 != 0) {
    plVar6 = (longlong *)&param_7->field_0x10;
    if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_7->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return iVar4;
}

// RunMutationTestImpl<UE::Math::TVector<double>_> @ 148803570

int __thiscall
FAutomationNearlyEqualTest::RunMutationTestImpl<UE::Math::TVector<double>_>
          (FAutomationNearlyEqualTest *this,FString *param_1,TVector<double> *param_2,uint param_3,
          float param_4,float param_5,
          TFunction<FString___cdecl(FString_const_&,unsigned_int,unsigned_int,double)> *param_6,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&,unsigned_int,double)>
          *param_7)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  int local_148;
  uint local_140 [2];
  uint local_138 [2];
  uint local_130 [2];
  uint local_128 [2];
  TVector<double> *local_120;
  FString *local_118;
  double local_110;
  double local_108;
  double local_100;
  FAutomationTestBase *local_f8;
  wchar_t *local_f0;
  int local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88 [3];
  
  local_120 = param_2;
  local_118 = param_1;
  local_f8 = (FAutomationTestBase *)this;
  if ((param_4 == 0.0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Difference != 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                         ,0x288,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  if ((param_5 <= 0.0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tolerance > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                         ,0x289,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  iVar4 = 0;
  local_148 = 0;
  uVar9 = 0;
  do {
    uVar8 = 0;
    do {
      if (uVar9 != uVar8) {
        dVar2 = (double)param_4;
        local_140[0] = uVar8;
        local_138[0] = uVar9;
        local_110 = dVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)param_6);
        pcVar1 = *(code **)param_6;
        plVar6 = *(longlong **)&param_6->field_0x28;
        if (*(longlong **)&param_6->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_6->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar1)(&local_f0,uVar5,param_1,local_138,local_140,&local_110);
        local_130[0] = uVar9;
        local_108 = dVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)param_7);
        pcVar1 = *(code **)param_7;
        plVar6 = *(longlong **)&param_7->field_0x28;
        if (*(longlong **)&param_7->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_7->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar1)(&local_c8,uVar5,local_120,local_130,&local_108);
        local_128[0] = uVar8;
        local_100 = dVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)param_7);
        pcVar1 = *(code **)param_7;
        plVar6 = *(longlong **)&param_7->field_0x28;
        if (*(longlong **)&param_7->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_7->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar1)(&local_e0,uVar5,local_120,local_128,&local_100);
        pwVar7 = L"";
        if (local_e8 != 0) {
          pwVar7 = local_f0;
        }
        local_a8._s_0.X = local_e0;
        local_a8._s_0.Y = dStack_d8;
        local_a8._s_0.Z = local_d0;
        local_88[0]._s_0.X = local_c8;
        local_88[0]._s_0.Y = dStack_c0;
        local_88[0]._s_0.Z = local_b8;
        FAutomationTestBase::TestNearlyEqual
                  (local_f8,pwVar7,(TVector<double> *)&local_88[0]._s_0,
                   (TVector<double> *)&local_a8._s_0,param_5);
        iVar4 = local_148 + 1;
        param_1 = local_118;
        local_148 = iVar4;
        if (local_f0 != (wchar_t *)0x0) {
          FMemory::Free(local_f0);
          param_1 = local_118;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 <= param_3);
    uVar9 = uVar9 + 1;
  } while (uVar9 <= param_3);
  if (*(longlong *)param_6 != 0) {
    plVar6 = (longlong *)&param_6->field_0x10;
    if (*(longlong **)&param_6->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_6->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)param_7 != 0) {
    plVar6 = (longlong *)&param_7->field_0x10;
    if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_7->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return iVar4;
}

// operator() @ 14880fd20

TTransform<double> * __thiscall
`FAutomationNearlyEqualTest::RunFTransformMutationTest'::__l2::<lambda_2>::operator()
          (void *this,TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          uint param_2,double param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TQuat<double> *pTVar12;
  TQuat<double> local_118;
  TRotator<double> local_f8;
  TRotator<double> local_e0;
  TRotator<double> local_c8;
  TRotator<double> local_b0 [7];
  
  dVar8 = (param_1->Scale3D).ZW.m128d_f64[0];
  local_118.X = (param_1->Rotation).XY.m128d_f64[0];
  local_118.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_118.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_118.W = (param_1->Rotation).ZW.m128d_f64[1];
  dVar1 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar7 = (double)(param_2 >> 1 & 1) * param_3 + (param_1->Scale3D).XY.m128d_f64[1];
  local_f8.Roll = (param_1->Translation).ZW.m128d_f64[0];
  dVar2 = (param_1->Translation).XY.m128d_f64[0];
  dVar5 = (double)(param_2 >> 3 & 1) * param_3 + local_f8.Roll;
  dVar6 = (double)(param_2 >> 4 & 1) * param_3 + (param_1->Translation).XY.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_118,&local_c8);
  local_118.X = (param_1->Rotation).XY.m128d_f64[0];
  local_118.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_118.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_118.W = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_118,local_b0);
  local_118.X = (param_1->Rotation).XY.m128d_f64[0];
  local_118.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_118.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_118.W = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_118,&local_f8);
  local_e0.Pitch = (double)(param_2 >> 8 & 1) * param_3 + local_f8.Pitch;
  local_e0.Yaw = (double)(param_2 >> 7 & 1) * param_3 + local_b0[0].Yaw;
  local_e0.Roll = (double)(param_2 >> 6 & 1) * param_3 + local_c8.Roll;
  pTVar12 = UE::Math::TRotator<double>::Quaternion(&local_e0,&local_118);
  dVar9 = pTVar12->Y;
  dVar10 = pTVar12->Z;
  dVar11 = pTVar12->W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar12->X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar10;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
  auVar3._8_4_ = SUB84(dVar6,0);
  auVar3._0_8_ = (double)(param_2 >> 5 & 1) * param_3 + dVar2;
  auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  auVar4._8_4_ = SUB84(dVar7,0);
  auVar4._0_8_ = (double)(param_2 >> 2 & 1) * param_3 + dVar1;
  auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)(param_2 & 1) * param_3 + dVar8;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// RunDoubleMutationTest @ 148856e80

int __thiscall
FAutomationNearlyEqualTest::RunDoubleMutationTest
          (FAutomationNearlyEqualTest *this,FString *param_1,double param_2,double param_3,
          float param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FString local_e8;
  FString local_d8;
  FStringFormatArg local_c8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68 [3];
  
  if (param_3 == 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Difference != 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                       ,0x1cd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_4 <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tolerance > 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                       ,0x1ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_c8,pwVar4);
  FStringFormatArg::FStringFormatArg(&local_a8,param_3);
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_108.AllocatorInstance,2,&local_108.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_108.AllocatorInstance.Data,&local_c8,2);
  pwVar4 = L"";
  if (ActualValueIsIncreasedByFormatString.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)ActualValueIsIncreasedByFormatString.Data.AllocatorInstance;
  }
  ::FString::FormatImpl(&local_e8,pwVar4,&local_108);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar5.Data = local_e8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,param_2 + param_3,param_2,
             (double)param_4);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_88,pwVar4);
  FStringFormatArg::FStringFormatArg(local_68,param_3);
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_f8.AllocatorInstance,2,&local_f8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_f8.AllocatorInstance.Data,&local_88,2)
  ;
  pwVar4 = L"";
  if (ExpectedValueIsIncreasedByFormatString.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)ExpectedValueIsIncreasedByFormatString.Data.AllocatorInstance;
  }
  ::FString::FormatImpl(&local_d8,pwVar4,&local_f8);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar5.Data = local_d8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,param_2,param_2 + param_3,
             (double)param_4);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (local_68[0].StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].StringValue.Data.AllocatorInstance.Data);
  }
  if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
  }
  return 2;
}

// RunFRotatorMutationTest @ 148857180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FAutomationNearlyEqualTest::RunFRotatorMutationTest
          (FAutomationNearlyEqualTest *this,FString *param_1,TRotator<double> *param_2,
          double param_3,float param_4)

{
  int iVar1;
  TFunction_OwnedObject<UE::Math::TRotator<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&,unsigned_int,double),0,0>
  *pTVar2;
  undefined ***pppuVar3;
  undefined1 auStackY_148 [32];
  code *local_108 [2];
  FFunctionStorage local_f8;
  code *local_d8 [2];
  code *local_c8 [3];
  undefined8 local_b0;
  code *local_a8;
  undefined **local_98;
  code *local_90;
  undefined ***local_80;
  code *local_78;
  TFunction_OwnedObject<UE::Math::TRotator<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&,unsigned_int,double),0,0>
  local_68;
  TFunction_OwnedObject<UE::Math::TRotator<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&,unsigned_int,double),0,0>
  *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_98 = &
             ___7__TFunction_OwnedObject_P6A_AVFString__AEBV1_IIN_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_80 = (undefined ***)0x0;
  local_90 = `FAutomationNearlyEqualTest::RunFRotatorMutationTest'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_50 = (TFunction_OwnedObject<UE::Math::TRotator<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&,unsigned_int,double),0,0>
              *)0x0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<FString_(__cdecl*)(FString_const_&,unsigned_int,unsigned_int,double),FString,FString_const_&,unsigned_int,unsigned_int,double>
             ::Call;
  local_f8.HeapAllocation = (void *)0x0;
  local_68._padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TRotator_N_Math_UE__AEBU123_IN_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68.Obj = `FAutomationNearlyEqualTest::RunFRotatorMutationTest'::__l2::<lambda_2>::
                 <lambda_invoker_cdecl>;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<UE::Math::TRotator<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&,unsigned_int,double),UE::Math::TRotator<double>,UE::Math::TRotator<double>_const_&,unsigned_int,double>
             ::Call;
  local_108[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<UE::Math::TRotator<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&,unsigned_int,double),UE::Math::TRotator<double>,UE::Math::TRotator<double>_const_&,unsigned_int,double>
                 ::Call;
  UE::Core::Private::Function::
  TFunction_OwnedObject<UE::Math::TRotator<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&,unsigned_int,double),0,0>
  ::CloneToEmptyStorage(&local_68,&local_f8);
  local_d8[0] = local_a8;
  local_b0 = 0;
  if (local_a8 != (code *)0x0) {
    pppuVar3 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar3 = local_80;
    }
    (*(code *)**pppuVar3)(pppuVar3,local_d8 + 2);
  }
  iVar1 = RunMutationTestImpl<UE::Math::TRotator<double>_>
                    (this,param_1,param_2,7,(float)param_3,param_4,
                     (TFunction<FString___cdecl(FString_const_&,unsigned_int,unsigned_int,double)> *
                     )local_d8,
                     (TFunction<UE::Math::TRotator<double>___cdecl(UE::Math::TRotator<double>_const_&,unsigned_int,double)>
                      *)local_108);
  if (local_78 != (code *)0x0) {
    pTVar2 = &local_68;
    if (local_50 !=
        (TFunction_OwnedObject<UE::Math::TRotator<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&,unsigned_int,double),0,0>
         *)0x0) {
      pTVar2 = local_50;
    }
    (**(code **)(pTVar2->_padding_ + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar3 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar3 = local_80;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return iVar1;
}

// RunFTransformMutationTest @ 1488572f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FAutomationNearlyEqualTest::RunFTransformMutationTest
          (FAutomationNearlyEqualTest *this,FString *param_1,TTransform<double> *param_2,
          double param_3,float param_4)

{
  int iVar1;
  TFunction_OwnedObject<UE::Math::TTransform<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&,unsigned_int,double),0,0>
  *pTVar2;
  undefined ***pppuVar3;
  undefined1 auStackY_148 [32];
  code *local_108 [2];
  FFunctionStorage local_f8;
  code *local_d8 [2];
  code *local_c8 [3];
  undefined8 local_b0;
  code *local_a8;
  undefined **local_98;
  code *local_90;
  undefined ***local_80;
  code *local_78;
  TFunction_OwnedObject<UE::Math::TTransform<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&,unsigned_int,double),0,0>
  local_68;
  TFunction_OwnedObject<UE::Math::TTransform<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&,unsigned_int,double),0,0>
  *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_98 = &
             ___7__TFunction_OwnedObject_P6A_AVFString__AEBV1_IIN_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_80 = (undefined ***)0x0;
  local_90 = `FAutomationNearlyEqualTest::RunFTransformMutationTest'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_50 = (TFunction_OwnedObject<UE::Math::TTransform<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&,unsigned_int,double),0,0>
              *)0x0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<FString_(__cdecl*)(FString_const_&,unsigned_int,unsigned_int,double),FString,FString_const_&,unsigned_int,unsigned_int,double>
             ::Call;
  local_f8.HeapAllocation = (void *)0x0;
  local_68._padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TTransform_N_Math_UE__AEBU123_IN_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68.Obj = `FAutomationNearlyEqualTest::RunFTransformMutationTest'::__l2::<lambda_2>::
                 <lambda_invoker_cdecl>;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<UE::Math::TTransform<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&,unsigned_int,double),UE::Math::TTransform<double>,UE::Math::TTransform<double>_const_&,unsigned_int,double>
             ::Call;
  local_108[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<UE::Math::TTransform<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&,unsigned_int,double),UE::Math::TTransform<double>,UE::Math::TTransform<double>_const_&,unsigned_int,double>
                 ::Call;
  UE::Core::Private::Function::
  TFunction_OwnedObject<UE::Math::TTransform<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&,unsigned_int,double),0,0>
  ::CloneToEmptyStorage(&local_68,&local_f8);
  local_d8[0] = local_a8;
  local_b0 = 0;
  if (local_a8 != (code *)0x0) {
    pppuVar3 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar3 = local_80;
    }
    (*(code *)**pppuVar3)(pppuVar3,local_d8 + 2);
  }
  iVar1 = RunMutationTestImpl<UE::Math::TTransform<double>_>
                    (this,param_1,param_2,7,(float)param_3,param_4,
                     (TFunction<FString___cdecl(FString_const_&,unsigned_int,unsigned_int,double)> *
                     )local_d8,
                     (TFunction<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,unsigned_int,double)>
                      *)local_108);
  if (local_78 != (code *)0x0) {
    pTVar2 = &local_68;
    if (local_50 !=
        (TFunction_OwnedObject<UE::Math::TTransform<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&,unsigned_int,double),0,0>
         *)0x0) {
      pTVar2 = local_50;
    }
    (**(code **)(pTVar2->_padding_ + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar3 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar3 = local_80;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return iVar1;
}

// RunFVectorMutationTest @ 148857460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FAutomationNearlyEqualTest::RunFVectorMutationTest
          (FAutomationNearlyEqualTest *this,FString *param_1,TVector<double> *param_2,double param_3
          ,float param_4)

{
  int iVar1;
  TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&,unsigned_int,double),0,0>
  *pTVar2;
  undefined ***pppuVar3;
  undefined1 auStackY_148 [32];
  code *local_108 [2];
  FFunctionStorage local_f8;
  code *local_d8 [2];
  code *local_c8 [3];
  undefined8 local_b0;
  code *local_a8;
  undefined **local_98;
  code *local_90;
  undefined ***local_80;
  code *local_78;
  TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&,unsigned_int,double),0,0>
  local_68;
  TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&,unsigned_int,double),0,0>
  *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_98 = &
             ___7__TFunction_OwnedObject_P6A_AVFString__AEBV1_IIN_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_80 = (undefined ***)0x0;
  local_90 = `FAutomationNearlyEqualTest::RunFVectorMutationTest'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_50 = (TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&,unsigned_int,double),0,0>
              *)0x0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<FString_(__cdecl*)(FString_const_&,unsigned_int,unsigned_int,double),FString,FString_const_&,unsigned_int,unsigned_int,double>
             ::Call;
  local_f8.HeapAllocation = (void *)0x0;
  local_68._padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__AEBU123_IN_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68.Obj = `FAutomationNearlyEqualTest::RunFVectorMutationTest'::__l2::<lambda_2>::
                 <lambda_invoker_cdecl>;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&,unsigned_int,double),UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,unsigned_int,double>
             ::Call;
  local_108[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&,unsigned_int,double),UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,unsigned_int,double>
                 ::Call;
  UE::Core::Private::Function::
  TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&,unsigned_int,double),0,0>
  ::CloneToEmptyStorage(&local_68,&local_f8);
  local_d8[0] = local_a8;
  local_b0 = 0;
  if (local_a8 != (code *)0x0) {
    pppuVar3 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar3 = local_80;
    }
    (*(code *)**pppuVar3)(pppuVar3,local_d8 + 2);
  }
  iVar1 = RunMutationTestImpl<UE::Math::TVector<double>_>
                    (this,param_1,param_2,7,(float)param_3,param_4,
                     (TFunction<FString___cdecl(FString_const_&,unsigned_int,unsigned_int,double)> *
                     )local_d8,
                     (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&,unsigned_int,double)>
                      *)local_108);
  if (local_78 != (code *)0x0) {
    pTVar2 = &local_68;
    if (local_50 !=
        (TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&,unsigned_int,double),0,0>
         *)0x0) {
      pTVar2 = local_50;
    }
    (**(code **)(pTVar2->_padding_ + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar3 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar3 = local_80;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return iVar1;
}

// RunFloatMutationTest @ 1488575d0

int __thiscall
FAutomationNearlyEqualTest::RunFloatMutationTest
          (FAutomationNearlyEqualTest *this,FString *param_1,float param_2,float param_3,
          float param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FString local_e8;
  FString local_d8;
  FStringFormatArg local_c8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68 [3];
  
  if (param_3 == 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Difference != 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                       ,0x1ba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_4 <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tolerance > 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                       ,0x1bb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_c8,pwVar4);
  FStringFormatArg::FStringFormatArg(&local_a8,param_3);
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_108.AllocatorInstance,2,&local_108.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_108.AllocatorInstance.Data,&local_c8,2);
  pwVar4 = L"";
  if (ActualValueIsIncreasedByFormatString.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)ActualValueIsIncreasedByFormatString.Data.AllocatorInstance;
  }
  ::FString::FormatImpl(&local_e8,pwVar4,&local_108);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar5.Data = local_e8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,param_2 + param_3,param_2,param_4);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_88,pwVar4);
  FStringFormatArg::FStringFormatArg(local_68,param_3);
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_f8.AllocatorInstance,2,&local_f8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_f8.AllocatorInstance.Data,&local_88,2)
  ;
  pwVar4 = L"";
  if (ExpectedValueIsIncreasedByFormatString.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)ExpectedValueIsIncreasedByFormatString.Data.AllocatorInstance;
  }
  ::FString::FormatImpl(&local_d8,pwVar4,&local_f8);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar5.Data = local_d8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,param_2,param_2 + param_3,param_4);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (local_68[0].StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].StringValue.Data.AllocatorInstance.Data);
  }
  if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
  }
  return 2;
}

