// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// operator() @ 141c8f100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,TVector<double> *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FAutomationTestFramework *pFVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  double dVar8;
  FString local_58;
  FString local_48;
  FString local_38;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = ___xmm_402abd70a0000000402abd70a0000000;
  local_28._s_0.Y = _UNK_15076bd48;
  local_28._s_0.Z = __real_402abd70a0000000;
  pFVar4 = UE::Math::TVector<double>::ToCompactString(param_2,&local_38);
  bVar3 = UE::Math::TVector<double>::InitFromCompactString((TVector<double> *)&local_28._s_0,pFVar4)
  ;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pwVar7 = L"";
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38," return value");
    ::FString::ConcatFF(&local_58,param_1,&local_38);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_48,(wchar_t *)FVar6.Data);
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  dVar8 = (param_2->field0_0x0)._s_0.X - local_28._s_0.X;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (dVar8 = (param_2->field0_0x0)._s_0.Y - local_28._s_0.Y,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar8 = (param_2->field0_0x0)._s_0.Z - local_28._s_0.Z,
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    if ((param_1->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_38,pwVar7);
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// InitVectorTest @ 141c940a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FInitVectorTestClass::InitVectorTest(FInitVectorTestClass *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  undefined1 local_res8 [8];
  FString local_58;
  TVector<double>_u_0 local_48 [2];
  
  local_48[0]._s_0.X = ___xmm_40026666600000003ff3333340000000;
  local_48[0]._s_0.Y = _UNK_15076baa8;
  local_48[0]._s_0.Z = __real_400b333340000000;
  ::FString::FString(&local_58,L"InitFromCompactString Simple");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48[0]._s_0.Z = 0.0;
  local_48[0]._s_0.X = 0.0;
  local_48[0]._s_0.Y = 0.0;
  ::FString::FString(&local_58,L"InitFromCompactString Zero");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  dVar3 = __real_4008000000000000;
  local_48[0]._s_0.Z = __real_4008000000000000;
  local_48[0]._s_0.X = ___xmm_40000000000000003ff0000000000000;
  local_48[0]._s_0.Y = _UNK_150744178;
  ::FString::FString(&local_58,L"InitFromCompactString Int");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48[0]._s_0.Z = dVar3;
  local_48[0]._s_0.X = ___xmm_40000000000000000000000000000000;
  local_48[0]._s_0.Y = _UNK_15076b998;
  ::FString::FString(&local_58,L"InitFromCompactString X == 0");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48[0]._s_0.X = ___xmm_00000000000000003ff4ccccc0000000;
  local_48[0]._s_0.Y = _UNK_15076acd8;
  local_48[0]._s_0.Z = __real_400d9999a0000000;
  ::FString::FString(&local_58,L"InitFromCompactString Y == 0");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48[0]._s_0.Z = 0.0;
  local_48[0]._s_0.X = ___xmm_40040000000000003ff3333340000000;
  local_48[0]._s_0.Y = _UNK_15076bab8;
  ::FString::FString(&local_58,L"InitFromCompactString Z == 0");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48[0]._s_0.Z = 0.0;
  local_48[0]._s_0.X = ___xmm_401a000000000000c07b133340000000;
  local_48[0]._s_0.Y = _UNK_15076bc68;
  ::FString::FString(&local_58,L"InitFromCompactString X < 0");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48[0]._s_0.X = ___xmm_c01a00000000000040459999a0000000;
  local_48[0]._s_0.Y = _UNK_15076c838;
  local_48[0]._s_0.Z = __real_4058800000000000;
  ::FString::FString(&local_58,L"InitFromCompactString Y < 0");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48[0]._s_0.X = ___xmm_00000000000000004040e66660000000;
  local_48[0]._s_0.Y = _UNK_15076ad08;
  local_48[0]._s_0.Z = __real_c053000000000000;
  ::FString::FString(&local_58,L"InitFromCompactString Z < 0");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48[0]._s_0.X = 0.0;
  local_48[0]._s_0.Y = 0.0;
  local_48[0]._s_0.Z = __real_4040666660000000;
  ::FString::FString(&local_58,L"InitFromCompactString X == 0 && Y == 0");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48[0]._s_0.Z = 0.0;
  local_48[0]._s_0.X = ___xmm_404ea666600000000000000000000000;
  local_48[0]._s_0.Y = _UNK_15076bf68;
  ::FString::FString(&local_58,L"InitFromCompactString X == 0 && Z == 0");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48[0]._s_0.Z = 0.0;
  local_48[0]._s_0.X = ___xmm_00000000000000004050533340000000;
  local_48[0]._s_0.Y = _UNK_15076ad18;
  ::FString::FString(&local_58,L"InitFromCompactString Y == 0 && Z == 0");
  `FInitVectorTestClass::InitVectorTest'::__l2::<lambda_1>::operator()
            (local_res8,&local_58,(TVector<double> *)&local_48[0]._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48[0]._s_0.X = 0.0;
  local_48[0]._s_0.Y = 0.0;
  local_48[0]._s_0.Z = 0.0;
  ::FString::FString(&local_58,L"W(0)");
  bVar4 = UE::Math::TVector<double>::InitFromCompactString
                    ((TVector<double> *)&local_48[0]._s_0,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"InitFromCompactString BadString1");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_48[0]._s_0.X = 0.0;
  local_48[0]._s_0.Y = 0.0;
  local_48[0]._s_0.Z = 0.0;
  ::FString::FString(&local_58,L"V(XYZ)");
  bVar4 = UE::Math::TVector<double>::InitFromCompactString
                    ((TVector<double> *)&local_48[0]._s_0,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"InitFromCompactString BadString2");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

