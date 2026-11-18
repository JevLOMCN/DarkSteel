// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 1

// GetSample @ 144574650

FSample __thiscall UE::IoStore::HTTP::FTicketPerf::GetSample(FTicketPerf *this)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  FTransactRef *pFVar13;
  FSample FVar14;
  undefined2 uVar15;
  FSample in_RDX;
  double dVar16;
  
  if (Freq == 0) {
    lVar12 = 0;
    dVar16 = __real_3ff0000000000000 / FGenericPlatformTime::SecondsPerCycle64;
    if ((__real_43e0000000000000 <= dVar16) &&
       (dVar16 = dVar16 - __real_43e0000000000000, dVar16 < __real_43e0000000000000)) {
      lVar12 = -0x8000000000000000;
    }
    Freq = (longlong)dVar16 + lVar12;
  }
  uVar9 = Freq;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = Freq;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (*(longlong *)(this + 0x18) - *(longlong *)(this + 0x10)) * 1000;
  uVar15 = 0xffff;
  if (SUB164(auVar5 / auVar2,0) < 0xffff) {
    uVar15 = SUB162(auVar5 / auVar2,0);
  }
  *(undefined2 *)in_RDX = uVar15;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar9;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (*(longlong *)(this + 0x20) - *(longlong *)(this + 0x18)) * 1000;
  uVar15 = 0xffff;
  if (SUB164(auVar6 / auVar3,0) < 0xffff) {
    uVar15 = SUB162(auVar6 / auVar3,0);
  }
  *(undefined2 *)((longlong)in_RDX + 2) = uVar15;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar9;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (*(longlong *)(this + 0x28) - *(longlong *)(this + 0x20)) * 1000;
  uVar15 = 0xffff;
  if (SUB164(auVar7 / auVar4,0) < 0xffff) {
    uVar15 = SUB162(auVar7 / auVar4,0);
  }
  *(undefined2 *)((longlong)in_RDX + 4) = uVar15;
  *(undefined2 *)((longlong)in_RDX + 6) = 0;
  uVar11 = 0xffffffff;
  if (*(short *)((longlong)in_RDX + 4) != 0) {
    pFVar13 = FActivity::GetTransaction((FActivity *)this);
    uVar1 = pFVar13->Self;
    if ((uVar1 & 1) == 0) {
      if (*(short *)(uVar1 + 0x122) == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offsets.Headers > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                            ,0x14e,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          FVar14 = (FSample)(*pcVar8)();
          return FVar14;
        }
      }
      lVar12 = *(longlong *)(uVar1 + 0x118);
    }
    else {
      lVar12 = *(longlong *)((uVar1 ^ 1) + 0x30);
    }
    uVar11 = (uint)((ulonglong)(lVar12 * 1000) / (ulonglong)*(ushort *)((longlong)in_RDX + 4));
  }
  uVar15 = 0xffff;
  if (uVar11 >> 10 < 0xffff) {
    uVar15 = (short)(uVar11 >> 10);
  }
  *(undefined2 *)((longlong)in_RDX + 6) = uVar15;
  return in_RDX;
}

