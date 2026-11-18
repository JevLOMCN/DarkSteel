// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ColorConversionTest @ 141c92e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FColorConversionTestClass::ColorConversionTest(FColorConversionTestClass *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double _Y;
  byte bVar9;
  byte bVar10;
  FAutomationTestFramework *pFVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_res8;
  uint local_res10;
  FLinearColor_u_0 local_118;
  FLinearColor_u_0 local_108;
  FLinearColor_u_0 local_f8;
  FString local_e8 [11];
  
  fVar4 = __real_437f0000;
  fVar3 = __real_3b808081;
  fVar20 = __real_3f000000;
  fVar19 = __real_3f800000;
  uVar14 = 0;
  uVar15 = 0;
  do {
    uVar13 = uVar15 & 0xff;
    bVar12 = (byte)uVar15;
    bVar9 = bVar12 ^ 0x7b;
    local_118._s_0.R = FLinearColor::sRGBToLinearTable[uVar13];
    bVar10 = bVar12 ^ 1;
    local_res8 = CONCAT22(CONCAT11(bVar12,bVar12),CONCAT11(bVar12,bVar12)) ^ 0x17b;
    local_118._s_0.G = FLinearColor::sRGBToLinearTable[bVar10];
    fVar18 = (float)uVar13 * fVar3;
    local_118._s_0.B = FLinearColor::sRGBToLinearTable[bVar9];
    local_118._s_0.A = fVar18;
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_118._s_0);
    if ((uVar15 << 0x18 | (uVar13 << 8 | (uint)bVar10) << 8 | (uint)bVar9) != local_res10) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)&local_108._s_0,L"sRGB to linear to sRGB round-trip: %d");
      (*pcVar2)(pFVar1,&local_108,0);
      if ((void *)CONCAT44(local_108._s_0.G,local_108._s_0.R) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_108._s_0.G,local_108._s_0.R));
      }
    }
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    if (fVar19 <= fVar18) {
      fVar18 = fVar19;
    }
    fVar16 = (float)bVar10 * fVar3;
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    if (fVar19 <= fVar16) {
      fVar16 = fVar19;
    }
    uVar13 = (int)(fVar18 * fVar4 + fVar20) & 0xff;
    fVar18 = (float)bVar9 * fVar3;
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    if (fVar19 <= fVar18) {
      fVar18 = fVar19;
    }
    if (local_res8 !=
        (((int)(fVar16 * fVar4 + fVar20) & 0xffU | (uVar13 << 8 | uVar13) << 8) << 8 |
        (int)(fVar18 * fVar4 + fVar20) & 0xffU)) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)&local_f8._s_0,L"UNORM to linear to UNORM round-trip: %d");
      (*pcVar2)(pFVar1,&local_f8,0);
      if ((void *)local_f8._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._0_8_);
      }
    }
    _Y = __real_4003333333333333;
    dVar8 = __real_3fee54edcd0aeb60;
    dVar7 = __real_3faab1232f514a03;
    fVar6 = __real_3d3851ec;
    fVar5 = __real_39390af8;
    fVar16 = __real_3d9e8391;
    fVar18 = __real_3d25aee6;
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x100);
  do {
    fVar19 = (float)(int)uVar14 + __real_3f000000;
    fVar20 = (fVar19 - fVar6) * fVar3;
    if (fVar18 <= fVar20) {
      dVar17 = pow((double)fVar20 * dVar8 + dVar7,_Y);
      local_118._s_0.R = (float)dVar17;
    }
    else {
      local_118._s_0.R = fVar20 * fVar16;
    }
    uVar15 = uVar14 & 0xff;
    local_118._s_0.G = local_118._s_0.R;
    local_118._s_0.B = local_118._s_0.R;
    local_118._s_0.A = fVar20;
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_118._s_0);
    if (local_res8 != (uVar15 << 8 | uVar14 << 0x18 | uVar15 << 0x10 | uVar15)) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)&local_f8._s_0,L"sRGB Boundary below: %d");
      (*pcVar2)(pFVar1,&local_f8,0);
      if ((void *)local_f8._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._0_8_);
      }
    }
    fVar19 = fVar19 * fVar3 + fVar5;
    if (fVar18 <= fVar19) {
      dVar17 = pow((double)fVar19 * dVar8 + dVar7,_Y);
      local_108._s_0.R = (float)dVar17;
    }
    else {
      local_108._s_0.R = fVar19 * fVar16;
    }
    local_108._s_0.G = local_108._s_0.R;
    local_108._s_0.B = local_108._s_0.R;
    local_108._s_0.A = fVar19;
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_108._s_0);
    bVar9 = (char)uVar14 + 1;
    if (local_res10 != ((uint)bVar9 << 8 | (uint)bVar9 << 0x18 | (uint)bVar9 << 0x10 | (uint)bVar9))
    {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(local_e8,L"sRGB Boundary above: %d");
      (*pcVar2)(pFVar1,local_e8,0);
      if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
      }
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0xff);
  local_108._s_0.R = NAN;
  local_108._s_0.G = NAN;
  local_108._s_0.B = NAN;
  local_108._s_0.A = NAN;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_108._s_0);
  if (local_res8 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_e8,L"Extremal NaN");
    (*pcVar2)(pFVar1,local_e8,0);
    if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
    }
  }
  local_f8._0_8_ = ___xmm_ff800000ff800000ff800000ff800000;
  local_f8._8_8_ = _UNK_15076cac8;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_f8._s_0);
  if (local_res8 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_e8,L"Extremal -Inf");
    (*pcVar2)(pFVar1,local_e8,0);
    if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
    }
  }
  local_108._s_0.R = INFINITY;
  local_108._s_0.G = INFINITY;
  local_108._s_0.B = INFINITY;
  local_108._s_0.A = INFINITY;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_108._s_0);
  if (local_res8 != 0xffffffff) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_e8,L"Extremal +Inf");
    (*pcVar2)(pFVar1,local_e8,0);
    if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
    }
  }
  local_f8._0_8_ = ___xmm_c1200000c1200000c1200000c1200000;
  local_f8._8_8_ = _UNK_15076c928;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_f8._s_0);
  if (local_res8 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_e8,L"Extremal -MediumLarge");
    (*pcVar2)(pFVar1,local_e8,0);
    if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
    }
  }
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_f8._s_0);
  if (local_res8 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_e8,L"Extremal 0");
    (*pcVar2)(pFVar1,local_e8,0);
    if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
    }
  }
  local_108._s_0.R = 1.83671e-40;
  local_108._s_0.G = 1.83671e-40;
  local_108._s_0.B = 1.83671e-40;
  local_108._s_0.A = 1.83671e-40;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_108._s_0);
  if (local_res8 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_e8,L"Extremal +subnorm");
    (*pcVar2)(pFVar1,local_e8,0);
    if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
    }
  }
  local_f8._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_f8._8_8_ = _UNK_15076b1f8;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_f8._s_0);
  if (local_res8 != 0xffffffff) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_e8,L"Extremal 1");
    (*pcVar2)(pFVar1,local_e8,0);
    if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
    }
  }
  local_f8._0_8_ = ___xmm_41200000412000004120000041200000;
  local_f8._8_8_ = _UNK_15076c1d8;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_f8._s_0);
  if (local_res8 != 0xffffffff) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_e8,L"Extremal Mediumlarge");
    (*pcVar2)(pFVar1,local_e8,0);
    if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
    }
  }
  local_f8._0_8_ = ___xmm_4b1896804b1896804b1896804b189680;
  local_f8._8_8_ = _UNK_15076c508;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_f8._s_0);
  if (local_res8 != 0xffffffff) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_e8,L"Extremal VeryLarge");
    (*pcVar2)(pFVar1,local_e8,0);
    if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
    }
  }
  return true;
}

