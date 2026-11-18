// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// TUnicodeHorizontalBar<8> @ 145c44bb0

TUnicodeHorizontalBar<8> * __thiscall
UE::RHI::GPUProfiler::TUnicodeHorizontalBar<8>::TUnicodeHorizontalBar<8>
          (TUnicodeHorizontalBar<8> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TUnicodeHorizontalBar<8> *pTVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double local_res8;
  
  if (__real_3ff0000000000000 <= param_1) {
    param_1 = __real_3ff0000000000000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar10 = modf(param_1 * __real_4020000000000000,&local_res8);
  auVar11._0_8_ = dVar10 * __real_4020000000000000;
  auVar11._8_8_ = extraout_XMM0_Qb;
  iVar3 = (int)local_res8;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = auVar11._0_8_;
  auVar12 = roundpd(auVar11,auVar12,1);
  iVar9 = (int)auVar12._0_8_;
  iVar8 = ((uint)(iVar9 < 1) - iVar3) + 7;
  pwVar6 = this->Text;
  if (0 < iVar3) {
    pwVar6 = this->Text + iVar3;
    uVar5 = (longlong)iVar3 & 0x7fffffffffffffff;
    pwVar7 = this->Text;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pwVar7 = L'█';
      pwVar7 = pwVar7 + 1;
    }
  }
  if (0 < iVar9) {
    *pwVar6 = *(wchar_t *)(&DAT_1510f7b96 + (longlong)iVar9 * 2);
    pwVar6 = pwVar6 + 1;
  }
  if (0 < iVar8) {
    pwVar7 = pwVar6;
    for (uVar5 = (longlong)iVar8 & 0x7fffffffffffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pwVar7 = L' ';
      pwVar7 = pwVar7 + 1;
    }
    pwVar6 = pwVar6 + iVar8;
  }
  *pwVar6 = L'\0';
  if (pwVar6 != this->Text + 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("uintptr_t(Output) == (uintptr_t(Text) + sizeof(Text))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                       ,0x352,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TUnicodeHorizontalBar<8> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this;
}

