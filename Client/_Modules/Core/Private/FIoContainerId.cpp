// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FromName @ 14175a410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FIoContainerId __cdecl FIoContainerId::FromName(FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  FName FVar6;
  FIoContainerId FVar7;
  uint uVar8;
  FName *in_RDX;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_878 [32];
  wchar_t *local_858;
  wchar_t local_848 [4];
  undefined8 auStack_840 [259];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_878;
  uVar3 = ::FName::ToStringInternal(in_RDX,local_848,0x40b);
  uVar9 = 0;
  if (uVar3 != 0) {
    if ((7 < uVar3) && (1 < __isa_available)) {
      do {
        auVar14 = pmovzxwd(in_XMM2,*(undefined8 *)(local_848 + uVar9));
        uVar4 = (int)uVar9 + 4;
        auVar12._0_4_ = auVar14._0_4_ - ___xmm_00000041000000410000004100000041;
        auVar12._4_4_ = auVar14._4_4_ - _UNK_150631f44;
        auVar12._8_4_ = auVar14._8_4_ - _UNK_150631f48;
        auVar12._12_4_ = auVar14._12_4_ - _UNK_150631f4c;
        auVar11._0_4_ =
             (~-(uint)(((auVar12._0_4_ < ___xmm_0000001a0000001a0000001a0000001a) *
                        ___xmm_0000001a0000001a0000001a0000001a |
                       (auVar12._0_4_ >= ___xmm_0000001a0000001a0000001a0000001a) * auVar12._0_4_)
                      == auVar12._0_4_) & ___xmm_00000001000000010000000100000001) * 0x20 +
             auVar14._0_4_;
        auVar11._4_4_ =
             (~-(uint)(((auVar12._4_4_ < _UNK_150631f34) * _UNK_150631f34 |
                       (auVar12._4_4_ >= _UNK_150631f34) * auVar12._4_4_) == auVar12._4_4_) &
             _UNK_150631da4) * 0x20 + auVar14._4_4_;
        auVar11._8_4_ =
             (~-(uint)(((auVar12._8_4_ < _UNK_150631f38) * _UNK_150631f38 |
                       (auVar12._8_4_ >= _UNK_150631f38) * auVar12._8_4_) == auVar12._8_4_) &
             _UNK_150631da8) * 0x20 + auVar14._8_4_;
        auVar11._12_4_ =
             (~-(uint)(((auVar12._12_4_ < _UNK_150631f3c) * _UNK_150631f3c |
                       (auVar12._12_4_ >= _UNK_150631f3c) * auVar12._12_4_) == auVar12._12_4_) &
             _UNK_150631dac) * 0x20 + auVar14._12_4_;
        auVar11 = pshufhw(auVar11,auVar11,0xd8);
        auVar11 = pshuflw(auVar12,auVar11,0xd8);
        auVar15._0_8_ = CONCAT44(auVar11._8_4_,auVar11._0_4_);
        auVar15._8_4_ = auVar11._4_4_;
        auVar15._12_4_ = auVar11._12_4_;
        *(undefined8 *)(local_848 + uVar9) = auVar15._0_8_;
        uVar8 = (int)uVar9 + 8;
        uVar9 = (ulonglong)uVar8;
        auVar11 = pmovzxwd(auVar15,*(undefined8 *)(local_848 + uVar4));
        auVar13._0_4_ = auVar11._0_4_ - ___xmm_00000041000000410000004100000041;
        auVar13._4_4_ = auVar11._4_4_ - _UNK_150631f44;
        auVar13._8_4_ = auVar11._8_4_ - _UNK_150631f48;
        auVar13._12_4_ = auVar11._12_4_ - _UNK_150631f4c;
        auVar14._0_4_ =
             (~-(uint)(((auVar13._0_4_ < ___xmm_0000001a0000001a0000001a0000001a) *
                        ___xmm_0000001a0000001a0000001a0000001a |
                       (auVar13._0_4_ >= ___xmm_0000001a0000001a0000001a0000001a) * auVar13._0_4_)
                      == auVar13._0_4_) & ___xmm_00000001000000010000000100000001) * 0x20 +
             auVar11._0_4_;
        auVar14._4_4_ =
             (~-(uint)(((auVar13._4_4_ < _UNK_150631f34) * _UNK_150631f34 |
                       (auVar13._4_4_ >= _UNK_150631f34) * auVar13._4_4_) == auVar13._4_4_) &
             _UNK_150631da4) * 0x20 + auVar11._4_4_;
        auVar14._8_4_ =
             (~-(uint)(((auVar13._8_4_ < _UNK_150631f38) * _UNK_150631f38 |
                       (auVar13._8_4_ >= _UNK_150631f38) * auVar13._8_4_) == auVar13._8_4_) &
             _UNK_150631da8) * 0x20 + auVar11._8_4_;
        auVar14._12_4_ =
             (~-(uint)(((auVar13._12_4_ < _UNK_150631f3c) * _UNK_150631f3c |
                       (auVar13._12_4_ >= _UNK_150631f3c) * auVar13._12_4_) == auVar13._12_4_) &
             _UNK_150631dac) * 0x20 + auVar11._12_4_;
        auVar11 = pshufhw(auVar14,auVar14,0xd8);
        auVar11 = pshuflw(auVar13,auVar11,0xd8);
        in_XMM2._0_8_ = CONCAT44(auVar11._8_4_,auVar11._0_4_);
        in_XMM2._8_4_ = auVar11._4_4_;
        in_XMM2._12_4_ = auVar11._12_4_;
        *(undefined8 *)(local_848 + uVar4) = in_XMM2._0_8_;
      } while (uVar8 < (uVar3 & 0xfffffff8));
      if (uVar3 <= uVar8) goto LAB_14175a561;
    }
    uVar10 = (ulonglong)(uVar3 - (int)uVar9);
    pwVar5 = local_848 + uVar9;
    do {
      *pwVar5 = (-(ushort)((ushort)*pwVar5 - 0x41 < 0x1a) & 0x20) + *pwVar5;
      uVar10 = uVar10 - 1;
      pwVar5 = pwVar5 + 1;
    } while (uVar10 != 0);
  }
LAB_14175a561:
  FVar6 = (FName)CityHash64((char *)local_848,uVar3 * 2);
  if (FVar6 == (FName)0xffffffffffffffff) {
    local_858 = local_848;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Hash != InvalidId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoContainerId.cpp"
                       ,0x16,L"Container name hash collision \"%s\" and InvalidId");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar7.Id = (*pcVar1)();
      return (FIoContainerId)FVar7.Id;
    }
  }
  *param_1 = FVar6;
  return (FIoContainerId)(ulong64)param_1;
}

