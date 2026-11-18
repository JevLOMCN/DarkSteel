// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 47

// rrAlignDownPointer<unsigned_char> @ 14f3cd820

uchar * __cdecl oo2::rrAlignDownPointer<unsigned_char>(uchar *param_1,long64 param_2)

{
  return (uchar *)(~(param_2 - 1U) & (ulonglong)param_1);
}

// OodleFree @ 14f3cd840

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3cd840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMallocAligned @ 14f3cd850

void * __cdecl oo2::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// RR_GET16_NATIVE @ 14f3cd890

ushort __cdecl oo2::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// RR_GET32_NATIVE @ 14f3cd8a0

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f3cd8b0

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT16_NATIVE @ 14f3cd8c0

void __cdecl oo2::RR_PUT16_NATIVE(void *param_1,ushort param_2)

{
  *(ushort *)param_1 = param_2;
  return;
}

// RR_PUT32_NATIVE @ 14f3cd8d0

void __cdecl oo2::RR_PUT32_NATIVE(void *param_1,uint param_2)

{
  *(uint *)param_1 = param_2;
  return;
}

// RR_PUT64_NATIVE @ 14f3cd8e0

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// SloppyMemset_Impl @ 14f3cd900

void __cdecl oo2::SloppyMemset_Impl(void *param_1,__m128i *param_2,long64 param_3,long64 param_4)

{
  long64 lVar1;
  long64 lVar2;
  long64 *plVar3;
  
  lVar1 = param_2->m128i_i64[0];
  lVar2 = param_2->m128i_i64[1];
  *(long64 *)param_1 = lVar1;
  *(long64 *)((longlong)param_1 + 8) = lVar2;
  if (0x10 < param_3) {
    plVar3 = (long64 *)((longlong)param_1 + 0x10U & 0xfffffffffffffff0);
    do {
      *plVar3 = lVar1;
      plVar3[1] = lVar2;
      plVar3 = plVar3 + 2;
    } while (plVar3 < (long64 *)((longlong)param_1 + param_3));
  }
  return;
}

// U16_checkA @ 14f3cd940

ushort __cdecl oo2::U16_checkA(long64 param_1)

{
  return (ushort)param_1;
}

// U32_checkA @ 14f3cd950

uint __cdecl oo2::U32_checkA(long64 param_1)

{
  return (uint)param_1;
}

// newLZ_bit_reverse_hufftab @ 14f3cd960

void __cdecl oo2::newLZ_bit_reverse_hufftab(KrakenHuffTab *param_1,KrakenMSBHuffTab *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  unkbyte10 Var11;
  undefined1 auVar12 [14];
  undefined1 auVar13 [12];
  unkbyte10 Var14;
  undefined1 auVar15 [14];
  undefined1 auVar16 [12];
  unkbyte10 Var17;
  undefined1 auVar18 [14];
  undefined1 auVar19 [12];
  unkbyte10 Var20;
  undefined1 auVar21 [14];
  undefined1 auVar22 [12];
  unkbyte10 Var23;
  undefined1 auVar24 [14];
  undefined1 auVar25 [12];
  unkbyte10 Var26;
  undefined1 auVar27 [14];
  undefined1 auVar28 [12];
  unkbyte10 Var29;
  undefined1 auVar30 [14];
  undefined1 auVar31 [12];
  unkbyte10 Var32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulonglong uVar35;
  ulonglong uVar36;
  KrakenHuffElem *pKVar37;
  uint uVar38;
  ulonglong uVar39;
  KrakenHuffElem KVar40;
  KrakenHuffElem KVar48;
  KrakenHuffElem KVar49;
  KrakenHuffElem KVar50;
  undefined1 auVar41 [16];
  undefined1 auVar51 [16];
  undefined1 auVar58 [16];
  undefined2 uVar62;
  KrakenHuffElem KVar70;
  undefined1 auVar71 [16];
  undefined1 auVar78 [16];
  undefined1 auVar82 [16];
  undefined1 auVar89 [16];
  undefined1 auVar96 [16];
  undefined1 auVar103 [16];
  undefined1 auVar110 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  KrakenHuffElem KVar86;
  KrakenHuffElem KVar87;
  KrakenHuffElem KVar88;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  
  uVar39 = 0;
  pKVar37 = param_1->e + 0x200;
  do {
    uVar38 = (uint)uVar39;
    uVar35 = uVar39 & 0xffffffff;
    uVar39 = uVar39 + 8;
    uVar36 = (ulonglong)""[uVar38 & 0x3f] << 5 | (ulonglong)""[uVar35 >> 5];
    uVar1 = *(undefined8 *)(param_2->sym + uVar36);
    uVar35 = *(ulonglong *)(param_2->len + uVar36);
    uVar2 = *(ulonglong *)(param_2->len + uVar36 + 0x400);
    uVar3 = *(ulonglong *)(param_2->len + uVar36 + 0x200);
    uVar4 = *(ulonglong *)(param_2->len + uVar36 + 0x600);
    uVar5 = *(ulonglong *)(param_2->len + uVar36 + 0x100);
    uVar6 = *(ulonglong *)(param_2->len + uVar36 + 0x500);
    uVar7 = *(ulonglong *)(param_2->len + uVar36 + 0x300);
    uVar8 = *(ulonglong *)(param_2->len + uVar36 + 0x700);
    auVar117._8_6_ = 0;
    auVar117._0_8_ = uVar35;
    auVar117[0xe] = (char)(uVar35 >> 0x38);
    auVar117[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar116._14_2_ = auVar117._14_2_;
    auVar116._8_5_ = 0;
    auVar116._0_8_ = uVar35;
    auVar116[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar115._13_3_ = auVar116._13_3_;
    auVar115._8_4_ = 0;
    auVar115._0_8_ = uVar35;
    auVar115[0xc] = (char)(uVar35 >> 0x30);
    auVar114._12_4_ = auVar115._12_4_;
    auVar114._8_3_ = 0;
    auVar114._0_8_ = uVar35;
    auVar114[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar113._11_5_ = auVar114._11_5_;
    auVar113._8_2_ = 0;
    auVar113._0_8_ = uVar35;
    auVar113[10] = (char)(uVar35 >> 0x28);
    auVar112._10_6_ = auVar113._10_6_;
    auVar112[8] = 0;
    auVar112._0_8_ = uVar35;
    auVar112[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar111._9_7_ = auVar112._9_7_;
    auVar111[8] = (char)(uVar35 >> 0x20);
    auVar111._0_8_ = uVar35;
    Var11 = CONCAT91(CONCAT81(auVar111._8_8_,(char)((ulonglong)uVar1 >> 0x18)),
                     (char)(uVar35 >> 0x18));
    auVar10._2_10_ = Var11;
    auVar10[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar10[0] = (char)(uVar35 >> 0x10);
    auVar9._2_12_ = auVar10;
    auVar9[1] = (char)((ulonglong)uVar1 >> 8);
    auVar9[0] = (char)(uVar35 >> 8);
    auVar110._0_2_ = CONCAT11((char)uVar1,(char)uVar35);
    auVar110._2_14_ = auVar9;
    uVar1 = *(undefined8 *)(param_2->sym + uVar36 + 0x400);
    auVar109._8_6_ = 0;
    auVar109._0_8_ = uVar2;
    auVar109[0xe] = (char)(uVar2 >> 0x38);
    auVar109[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar108._14_2_ = auVar109._14_2_;
    auVar108._8_5_ = 0;
    auVar108._0_8_ = uVar2;
    auVar108[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar107._13_3_ = auVar108._13_3_;
    auVar107._8_4_ = 0;
    auVar107._0_8_ = uVar2;
    auVar107[0xc] = (char)(uVar2 >> 0x30);
    auVar106._12_4_ = auVar107._12_4_;
    auVar106._8_3_ = 0;
    auVar106._0_8_ = uVar2;
    auVar106[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar105._11_5_ = auVar106._11_5_;
    auVar105._8_2_ = 0;
    auVar105._0_8_ = uVar2;
    auVar105[10] = (char)(uVar2 >> 0x28);
    auVar104._10_6_ = auVar105._10_6_;
    auVar104[8] = 0;
    auVar104._0_8_ = uVar2;
    auVar104[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar103._9_7_ = auVar104._9_7_;
    auVar103[8] = (char)(uVar2 >> 0x20);
    auVar103._0_8_ = uVar2;
    Var14 = CONCAT91(CONCAT81(auVar103._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar2 >> 0x18)
                    );
    auVar13._2_10_ = Var14;
    auVar13[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar13[0] = (char)(uVar2 >> 0x10);
    auVar12._2_12_ = auVar13;
    auVar12[1] = (char)((ulonglong)uVar1 >> 8);
    auVar12[0] = (char)(uVar2 >> 8);
    auVar58[3] = (char)uVar1;
    auVar58[2] = (char)uVar2;
    uVar1 = *(undefined8 *)(param_2->sym + uVar36 + 0x200);
    auVar95._8_6_ = 0;
    auVar95._0_8_ = uVar3;
    auVar95[0xe] = (char)(uVar3 >> 0x38);
    auVar95[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar94._14_2_ = auVar95._14_2_;
    auVar94._8_5_ = 0;
    auVar94._0_8_ = uVar3;
    auVar94[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar93._13_3_ = auVar94._13_3_;
    auVar93._8_4_ = 0;
    auVar93._0_8_ = uVar3;
    auVar93[0xc] = (char)(uVar3 >> 0x30);
    auVar92._12_4_ = auVar93._12_4_;
    auVar92._8_3_ = 0;
    auVar92._0_8_ = uVar3;
    auVar92[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar91._11_5_ = auVar92._11_5_;
    auVar91._8_2_ = 0;
    auVar91._0_8_ = uVar3;
    auVar91[10] = (char)(uVar3 >> 0x28);
    auVar90._10_6_ = auVar91._10_6_;
    auVar90[8] = 0;
    auVar90._0_8_ = uVar3;
    auVar90[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar89._9_7_ = auVar90._9_7_;
    auVar89[8] = (char)(uVar3 >> 0x20);
    auVar89._0_8_ = uVar3;
    Var17 = CONCAT91(CONCAT81(auVar89._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar3 >> 0x18))
    ;
    auVar16._2_10_ = Var17;
    auVar16[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar16[0] = (char)(uVar3 >> 0x10);
    auVar15._2_12_ = auVar16;
    auVar15[1] = (char)((ulonglong)uVar1 >> 8);
    auVar15[0] = (char)(uVar3 >> 8);
    auVar58[5] = (char)uVar1;
    auVar58[4] = (char)uVar3;
    uVar1 = *(undefined8 *)(param_2->sym + uVar36 + 0x600);
    auVar102._8_6_ = 0;
    auVar102._0_8_ = uVar4;
    auVar102[0xe] = (char)(uVar4 >> 0x38);
    auVar102[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar101._14_2_ = auVar102._14_2_;
    auVar101._8_5_ = 0;
    auVar101._0_8_ = uVar4;
    auVar101[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar100._13_3_ = auVar101._13_3_;
    auVar100._8_4_ = 0;
    auVar100._0_8_ = uVar4;
    auVar100[0xc] = (char)(uVar4 >> 0x30);
    auVar99._12_4_ = auVar100._12_4_;
    auVar99._8_3_ = 0;
    auVar99._0_8_ = uVar4;
    auVar99[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar98._11_5_ = auVar99._11_5_;
    auVar98._8_2_ = 0;
    auVar98._0_8_ = uVar4;
    auVar98[10] = (char)(uVar4 >> 0x28);
    auVar97._10_6_ = auVar98._10_6_;
    auVar97[8] = 0;
    auVar97._0_8_ = uVar4;
    auVar97[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar96._9_7_ = auVar97._9_7_;
    auVar96[8] = (char)(uVar4 >> 0x20);
    auVar96._0_8_ = uVar4;
    Var20 = CONCAT91(CONCAT81(auVar96._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar4 >> 0x18))
    ;
    auVar19._2_10_ = Var20;
    auVar19[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar19[0] = (char)(uVar4 >> 0x10);
    auVar18._2_12_ = auVar19;
    auVar18[1] = (char)((ulonglong)uVar1 >> 8);
    auVar18[0] = (char)(uVar4 >> 8);
    auVar58[7] = (char)uVar1;
    auVar58[6] = (char)uVar4;
    uVar1 = *(undefined8 *)(param_2->sym + uVar36 + 0x100);
    auVar47._8_6_ = 0;
    auVar47._0_8_ = uVar5;
    auVar47[0xe] = (char)(uVar5 >> 0x38);
    auVar47[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar46._14_2_ = auVar47._14_2_;
    auVar46._8_5_ = 0;
    auVar46._0_8_ = uVar5;
    auVar46[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar45._13_3_ = auVar46._13_3_;
    auVar45._8_4_ = 0;
    auVar45._0_8_ = uVar5;
    auVar45[0xc] = (char)(uVar5 >> 0x30);
    auVar44._12_4_ = auVar45._12_4_;
    auVar44._8_3_ = 0;
    auVar44._0_8_ = uVar5;
    auVar44[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar43._11_5_ = auVar44._11_5_;
    auVar43._8_2_ = 0;
    auVar43._0_8_ = uVar5;
    auVar43[10] = (char)(uVar5 >> 0x28);
    auVar42._10_6_ = auVar43._10_6_;
    auVar42[8] = 0;
    auVar42._0_8_ = uVar5;
    auVar42[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar41._9_7_ = auVar42._9_7_;
    auVar41[8] = (char)(uVar5 >> 0x20);
    auVar41._0_8_ = uVar5;
    Var23 = CONCAT91(CONCAT81(auVar41._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar5 >> 0x18))
    ;
    auVar22._2_10_ = Var23;
    auVar22[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar22[0] = (char)(uVar5 >> 0x10);
    auVar21._2_12_ = auVar22;
    auVar21[1] = (char)((ulonglong)uVar1 >> 8);
    auVar21[0] = (char)(uVar5 >> 8);
    auVar59[9] = (char)uVar1;
    auVar59[8] = (char)uVar5;
    uVar1 = *(undefined8 *)(param_2->sym + uVar36 + 0x500);
    auVar57._8_6_ = 0;
    auVar57._0_8_ = uVar6;
    auVar57[0xe] = (char)(uVar6 >> 0x38);
    auVar57[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar56._14_2_ = auVar57._14_2_;
    auVar56._8_5_ = 0;
    auVar56._0_8_ = uVar6;
    auVar56[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar55._13_3_ = auVar56._13_3_;
    auVar55._8_4_ = 0;
    auVar55._0_8_ = uVar6;
    auVar55[0xc] = (char)(uVar6 >> 0x30);
    auVar54._12_4_ = auVar55._12_4_;
    auVar54._8_3_ = 0;
    auVar54._0_8_ = uVar6;
    auVar54[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar53._11_5_ = auVar54._11_5_;
    auVar53._8_2_ = 0;
    auVar53._0_8_ = uVar6;
    auVar53[10] = (char)(uVar6 >> 0x28);
    auVar52._10_6_ = auVar53._10_6_;
    auVar52[8] = 0;
    auVar52._0_8_ = uVar6;
    auVar52[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar51._9_7_ = auVar52._9_7_;
    auVar51[8] = (char)(uVar6 >> 0x20);
    auVar51._0_8_ = uVar6;
    Var26 = CONCAT91(CONCAT81(auVar51._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar6 >> 0x18))
    ;
    auVar25._2_10_ = Var26;
    auVar25[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar25[0] = (char)(uVar6 >> 0x10);
    auVar24._2_12_ = auVar25;
    auVar24[1] = (char)((ulonglong)uVar1 >> 8);
    auVar24[0] = (char)(uVar6 >> 8);
    auVar60[0xb] = (char)uVar1;
    auVar60[10] = (char)uVar6;
    uVar1 = *(undefined8 *)(param_2->sym + uVar36 + 0x300);
    auVar69._8_6_ = 0;
    auVar69._0_8_ = uVar7;
    auVar69[0xe] = (char)(uVar7 >> 0x38);
    auVar69[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar68._14_2_ = auVar69._14_2_;
    auVar68._8_5_ = 0;
    auVar68._0_8_ = uVar7;
    auVar68[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar67._13_3_ = auVar68._13_3_;
    auVar67._8_4_ = 0;
    auVar67._0_8_ = uVar7;
    auVar67[0xc] = (char)(uVar7 >> 0x30);
    auVar66._12_4_ = auVar67._12_4_;
    auVar66._8_3_ = 0;
    auVar66._0_8_ = uVar7;
    auVar66[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar65._11_5_ = auVar66._11_5_;
    auVar65._8_2_ = 0;
    auVar65._0_8_ = uVar7;
    auVar65[10] = (char)(uVar7 >> 0x28);
    auVar64._10_6_ = auVar65._10_6_;
    auVar64[8] = 0;
    auVar64._0_8_ = uVar7;
    auVar64[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar63._9_7_ = auVar64._9_7_;
    auVar63[8] = (char)(uVar7 >> 0x20);
    auVar63._0_8_ = uVar7;
    Var29 = CONCAT91(CONCAT81(auVar63._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar7 >> 0x18))
    ;
    auVar28._2_10_ = Var29;
    auVar28[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar28[0] = (char)(uVar7 >> 0x10);
    auVar27._2_12_ = auVar28;
    auVar27[1] = (char)((ulonglong)uVar1 >> 8);
    auVar27[0] = (char)(uVar7 >> 8);
    uVar62 = CONCAT11((char)uVar1,(char)uVar7);
    uVar1 = *(undefined8 *)(param_2->sym + uVar36 + 0x700);
    auVar77._8_6_ = 0;
    auVar77._0_8_ = uVar8;
    auVar77[0xe] = (char)(uVar8 >> 0x38);
    auVar77[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar76._14_2_ = auVar77._14_2_;
    auVar76._8_5_ = 0;
    auVar76._0_8_ = uVar8;
    auVar76[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar75._13_3_ = auVar76._13_3_;
    auVar75._8_4_ = 0;
    auVar75._0_8_ = uVar8;
    auVar75[0xc] = (char)(uVar8 >> 0x30);
    auVar74._12_4_ = auVar75._12_4_;
    auVar74._8_3_ = 0;
    auVar74._0_8_ = uVar8;
    auVar74[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar73._11_5_ = auVar74._11_5_;
    auVar73._8_2_ = 0;
    auVar73._0_8_ = uVar8;
    auVar73[10] = (char)(uVar8 >> 0x28);
    auVar72._10_6_ = auVar73._10_6_;
    auVar72[8] = 0;
    auVar72._0_8_ = uVar8;
    auVar72[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar71._9_7_ = auVar72._9_7_;
    auVar71[8] = (char)(uVar8 >> 0x20);
    auVar71._0_8_ = uVar8;
    Var32 = CONCAT91(CONCAT81(auVar71._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar8 >> 0x18))
    ;
    auVar31._2_10_ = Var32;
    auVar31[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar31[0] = (char)(uVar8 >> 0x10);
    auVar30._2_12_ = auVar31;
    auVar30[1] = (char)((ulonglong)uVar1 >> 8);
    auVar30[0] = (char)(uVar8 >> 8);
    auVar61[0xf] = (char)uVar1;
    auVar61[0xe] = (char)uVar8;
    KVar70 = auVar27._0_2_;
    KVar40 = auVar15._0_2_;
    KVar50 = SUB102(Var23,0);
    KVar88 = SUB102(Var11,0);
    auVar85._0_12_ = auVar110._0_12_;
    auVar85[0xc] = KVar88.len;
    auVar85[0xd] = KVar88.sym;
    auVar85[0xe] = KVar50.len;
    auVar85[0xf] = KVar50.sym;
    KVar49 = auVar22._0_2_;
    auVar84._12_4_ = auVar85._12_4_;
    auVar84._0_10_ = auVar110._0_10_;
    auVar84[10] = KVar49.len;
    auVar84[0xb] = KVar49.sym;
    KVar87 = auVar10._0_2_;
    auVar83._10_6_ = auVar84._10_6_;
    auVar83._0_8_ = auVar110._0_8_;
    auVar83[8] = KVar87.len;
    auVar83[9] = KVar87.sym;
    KVar48 = auVar21._0_2_;
    auVar33._2_8_ = auVar83._8_8_;
    auVar33[0] = KVar48.len;
    auVar33[1] = KVar48.sym;
    KVar86 = auVar9._0_2_;
    auVar33._10_6_ = 0;
    auVar82._12_4_ = 0;
    auVar82._0_12_ = SUB1612(auVar33 << 0x30,4);
    auVar82 = auVar82 << 0x20;
    auVar81._0_12_ = auVar82._0_12_;
    auVar81[0xc] = KVar48.len;
    auVar81[0xd] = KVar48.sym;
    auVar81[0xe] = KVar70.len;
    auVar81[0xf] = KVar70.sym;
    auVar80._12_4_ = auVar81._12_4_;
    auVar80._0_10_ = auVar82._0_10_;
    auVar80[10] = KVar40.len;
    auVar80[0xb] = KVar40.sym;
    auVar79._10_6_ = auVar80._10_6_;
    auVar79._0_8_ = auVar82._0_8_;
    auVar79[8] = KVar86.len;
    auVar79[9] = KVar86.sym;
    auVar34._2_8_ = auVar79._8_8_;
    auVar34._0_2_ = uVar62;
    auVar34._10_6_ = 0;
    auVar78._12_4_ = 0;
    auVar78._0_12_ = SUB1612(auVar34 << 0x30,4);
    auVar78 = auVar78 << 0x20;
    auVar61._0_12_ = auVar78._0_12_;
    auVar61._12_2_ = uVar62;
    auVar60._12_4_ = auVar61._12_4_;
    auVar60._0_10_ = auVar78._0_10_;
    auVar59._10_6_ = auVar60._10_6_;
    auVar59._0_8_ = auVar78._0_8_;
    auVar58._8_8_ = auVar59._8_8_;
    auVar58._0_2_ = auVar110._0_2_;
    pKVar37[-0x200].len = auVar58;
    pKVar37[0x200] = KVar86;
    pKVar37[0x201] = auVar12._0_2_;
    pKVar37[0x202] = KVar40;
    pKVar37[0x203] = auVar18._0_2_;
    pKVar37[0x204] = KVar48;
    pKVar37[0x205] = auVar24._0_2_;
    pKVar37[0x206] = KVar70;
    pKVar37[0x207] = auVar30._0_2_;
    *pKVar37 = KVar87;
    pKVar37[1] = auVar13._0_2_;
    pKVar37[2] = auVar16._0_2_;
    pKVar37[3] = auVar19._0_2_;
    pKVar37[4] = KVar49;
    pKVar37[5] = auVar25._0_2_;
    pKVar37[6] = auVar28._0_2_;
    pKVar37[7] = auVar31._0_2_;
    pKVar37[0x400] = KVar88;
    pKVar37[0x401] = SUB102(Var14,0);
    pKVar37[0x402] = SUB102(Var17,0);
    pKVar37[0x403] = SUB102(Var20,0);
    pKVar37[0x404] = KVar50;
    pKVar37[0x405] = SUB102(Var26,0);
    pKVar37[0x406] = SUB102(Var29,0);
    pKVar37[0x407] = SUB102(Var32,0);
    pKVar37[-0x100] = auVar111._8_2_;
    pKVar37[-0xff] = auVar103._8_2_;
    pKVar37[-0xfe] = auVar89._8_2_;
    pKVar37[-0xfd] = auVar96._8_2_;
    pKVar37[-0xfc] = auVar41._8_2_;
    pKVar37[-0xfb] = auVar51._8_2_;
    pKVar37[-0xfa] = auVar63._8_2_;
    pKVar37[-0xf9] = auVar71._8_2_;
    pKVar37[0x300] = auVar113._10_2_;
    pKVar37[0x301] = auVar105._10_2_;
    pKVar37[0x302] = auVar91._10_2_;
    pKVar37[0x303] = auVar98._10_2_;
    pKVar37[0x304] = auVar43._10_2_;
    pKVar37[0x305] = auVar53._10_2_;
    pKVar37[0x306] = auVar65._10_2_;
    pKVar37[0x307] = auVar73._10_2_;
    pKVar37[0x100] = auVar115._12_2_;
    pKVar37[0x101] = auVar107._12_2_;
    pKVar37[0x102] = auVar93._12_2_;
    pKVar37[0x103] = auVar100._12_2_;
    pKVar37[0x104] = auVar45._12_2_;
    pKVar37[0x105] = auVar55._12_2_;
    pKVar37[0x106] = auVar67._12_2_;
    pKVar37[0x107] = auVar75._12_2_;
    pKVar37[0x500] = auVar116._14_2_;
    pKVar37[0x501] = auVar108._14_2_;
    pKVar37[0x502] = auVar94._14_2_;
    pKVar37[0x503] = auVar101._14_2_;
    pKVar37[0x504] = auVar46._14_2_;
    pKVar37[0x505] = auVar56._14_2_;
    pKVar37[0x506] = auVar68._14_2_;
    pKVar37[0x507] = auVar76._14_2_;
    pKVar37 = pKVar37 + 8;
  } while (uVar39 < 0x100);
  return;
}

// newLZ_decode_alphabet_shape_num_EG @ 14f3cdbc0

int __cdecl
oo2::newLZ_decode_alphabet_shape_num_EG
          (int param_1,ulong64 *param_2,long64 *param_3,uchar **param_4,uchar **param_5)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0x100) {
    return 0;
  }
  uVar2 = *param_2;
  if (0x101 - param_1 <= param_1) {
    param_1 = 0x101 - param_1;
  }
  uVar1 = param_1 * 2 - 1;
  uVar3 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  bVar4 = (byte)(uVar3 + 1);
  iVar5 = (1 << (bVar4 & 0x1f)) + param_1 * -2;
  iVar7 = (int)(uVar2 >> (0x40 - bVar4 & 0x3f));
  iVar6 = iVar7 >> 1;
  if (iVar6 < iVar5) {
    *param_2 = uVar2 << ((byte)uVar3 & 0x3f);
    *param_3 = *param_3 + (ulonglong)uVar3;
    return iVar6;
  }
  *param_2 = uVar2 << (bVar4 & 0x3f);
  *param_3 = *param_3 + (ulonglong)(uVar3 + 1);
  return iVar7 - iVar5;
}

// newLZ_prep_hufftab @ 14f3cdc70

KrakenHuffTab * __cdecl oo2::newLZ_prep_hufftab(KrakenHuffTab *param_1,KrakenMSBHuffTab *param_2)

{
  newLZ_bit_reverse_hufftab(param_1,param_2);
  return param_1;
}

// newLZ_put_array_huff3_memset_payload @ 14f3cdc90

uchar * __cdecl oo2::newLZ_put_array_huff3_memset_payload(uchar *param_1,uchar param_2)

{
  *param_1 = '\0';
  param_1[1] = param_2 >> 2 | 0x40;
  param_1[2] = param_2 << 6;
  return param_1 + 3;
}

// newLZ_put_array_huff3streams @ 14f3cdcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZ_put_array_huff3streams
          (uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4,long64 param_5,uchar *param_6
          ,ulong64 *param_7,rrArenaAllocator *param_8)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *_Src;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  long64 lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  size_t _Size;
  ulonglong uVar16;
  uchar *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 auStack_148 [32];
  uint local_128;
  byte *local_120;
  byte *local_118;
  uchar *local_110;
  ulong64 *local_108;
  uchar *local_100;
  undefined4 *local_f8;
  uint *local_f0;
  rrArenaAllocator *local_e0;
  uchar *local_d8;
  longlong local_d0;
  rrArenaAllocator *local_c8;
  undefined4 *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  byte *local_a8;
  byte *local_a0;
  ulong64 *local_98;
  uchar *local_90;
  uchar *local_88;
  uint *local_80;
  undefined4 *local_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_b0 = 0xfffffffffffffffe;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_120 = (byte *)param_5;
  local_110 = param_6;
  local_108 = param_7;
  local_e0 = param_8;
  puVar17 = param_1 + 2;
  lVar18 = (param_5 * 0xb + 0x17) / 0x18;
  lVar23 = lVar18 + 9;
  uVar11 = 0;
  local_c0 = (undefined4 *)0x0;
  local_c8 = param_8;
  local_118 = param_4;
  local_100 = puVar17;
  local_f0 = (uint *)param_2;
  local_d8 = param_1;
  local_d0 = lVar23;
  local_b8 = lVar23;
  if (param_8 == (rrArenaAllocator *)0x0) {
    local_f8 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar23,0x10);
    if (local_f8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(lVar23);
    }
  }
  else {
    uVar14 = lVar18 + 0x18U & 0xfffffffffffffff0;
    uVar13 = (ulonglong)(-(uint)(param_8->m_unorderedStart != 0) & 0x10);
    local_f8 = (undefined4 *)param_8->m_cur;
    if (param_8->m_size + param_8->m_base < (longlong)local_f8 + uVar13 + uVar14) {
      if (param_8->m_allowFallback == 0) {
        local_f8 = (undefined4 *)0x0;
      }
      else {
        local_f8 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar14,0x10);
        puVar17 = local_100;
        if (local_f8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          Oodle_Core_Malloc_Failed(uVar14);
        }
      }
    }
    else {
      puVar10 = (ulonglong *)((longlong)local_f8 + uVar14);
      param_8->m_cur = (ulong64)puVar10;
      if (param_8->m_unorderedStart != 0) {
        *puVar10 = uVar14;
        puVar10[1] = 0;
        param_8->m_cur = param_8->m_cur + uVar13;
        puVar10 = (ulonglong *)param_8->m_cur;
      }
      puVar8 = (ulonglong *)param_8->m_cur_max;
      if ((ulonglong *)param_8->m_cur_max <= puVar10) {
        puVar8 = puVar10;
      }
      param_8->m_cur_max = (ulong64)puVar8;
    }
  }
  _Src = local_f8;
  local_c0 = local_f8;
  if ((local_f8 == (undefined4 *)0x0) &&
     (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x1bc,
                                 "oo2::rrScopeArenaAlloc::Alloc","m_ptr != NULL"), iVar6 != 0)) {
    pcVar5 = (code *)swi(3);
    lVar9 = (*pcVar5)();
    return lVar9;
  }
  local_128 = 0;
  pbVar1 = local_118 + (longlong)local_120;
  bVar4 = 0xf < (longlong)local_120;
  uVar14 = uVar11;
  puVar15 = _Src;
  uVar16 = uVar11;
  uVar19 = uVar11;
  uVar21 = uVar11;
  uVar13 = uVar11;
  local_120 = pbVar1;
  if (bVar4) {
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_a8 = local_118;
    local_98 = local_108;
    local_90 = local_110;
    local_88 = local_100;
    local_80 = local_f0;
    local_a0 = pbVar1;
    local_78 = _Src;
    if (((byte)g_rrCPUx86_feature_flags & 0x80) == 0) {
      oodle_enchuff3_x64_generic_kern(&local_a8);
    }
    else {
      oodle_enchuff3_x64_bmi2_kern();
    }
    local_118 = local_a8;
    uVar21 = uStack_58 & 0xffffffff;
    uVar13 = uStack_58 >> 0x20;
    uVar11 = local_50 & 0xffffffff;
    local_128 = (uint)local_50;
    uVar14 = local_70;
    puVar15 = local_78;
    uVar16 = uStack_68;
    puVar17 = local_88;
    uVar19 = local_60;
    param_2 = (uchar *)local_80;
  }
  uVar22 = (uint)uVar13;
  uVar20 = (uint)uVar21;
  while (local_118 + 3 <= local_120) {
    uVar14 = uVar14 | local_108[*local_118] << ((byte)uVar21 & 0x3f);
    uVar20 = (int)uVar21 + (uint)local_110[*local_118];
    uVar16 = uVar16 | local_108[local_118[1]] << ((byte)uVar13 & 0x3f);
    uVar22 = (int)uVar13 + (uint)local_110[local_118[1]];
    uVar19 = uVar19 | local_108[local_118[2]] << ((byte)uVar11 & 0x3f);
    local_128 = (int)uVar11 + (uint)local_110[local_118[2]];
    if (0x1f < (int)uVar20) {
      *(int *)puVar17 = (int)uVar14;
      puVar17 = puVar17 + 4;
      uVar14 = uVar14 >> 0x20;
      uVar20 = uVar20 - 0x20;
    }
    uVar21 = (ulonglong)uVar20;
    if (0x1f < (int)uVar22) {
      param_2 = (uchar *)((longlong)param_2 + -4);
      uVar7 = (uint)uVar16;
      *(uint *)param_2 =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar16 = uVar16 >> 0x20;
      uVar22 = uVar22 - 0x20;
    }
    uVar13 = (ulonglong)uVar22;
    if (0x1f < (int)local_128) {
      *puVar15 = (int)uVar19;
      puVar15 = puVar15 + 1;
      uVar19 = uVar19 >> 0x20;
      local_128 = local_128 - 0x20;
    }
    uVar11 = (ulonglong)local_128;
    param_8 = local_e0;
    local_118 = local_118 + 3;
    _Src = local_f8;
  }
  if (local_118 < local_120) {
    bVar2 = *local_118;
    local_118 = local_118 + 1;
    uVar14 = uVar14 | local_108[bVar2] << ((byte)uVar20 & 0x3f);
    uVar20 = uVar20 + local_110[bVar2];
    if (0x1f < (int)uVar20) {
      *(int *)puVar17 = (int)uVar14;
      puVar17 = puVar17 + 4;
      uVar14 = uVar14 >> 0x20;
      uVar20 = uVar20 - 0x20;
    }
    if (local_118 < local_120) {
      uVar16 = uVar16 | local_108[*local_118] << ((byte)uVar22 & 0x3f);
      uVar22 = uVar22 + local_110[*local_118];
      if (0x1f < (int)uVar22) {
        param_2 = (uchar *)((longlong)param_2 + -4);
        uVar7 = (uint)uVar16;
        *(uint *)param_2 =
             uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar16 = uVar16 >> 0x20;
        uVar22 = uVar22 - 0x20;
      }
    }
  }
  lVar18 = (longlong)puVar17 - (longlong)local_100;
  local_120 = (byte *)((longlong)local_f0 - (longlong)param_2);
  _Size = (longlong)puVar15 - (longlong)_Src;
  if (0 < (int)uVar20) {
    uVar11 = (ulonglong)((uVar20 - 1 >> 3) + 1);
    do {
      local_100[lVar18] = (uchar)uVar14;
      lVar18 = lVar18 + 1;
      uVar14 = uVar14 >> 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (0 < (int)uVar22) {
    uVar11 = (ulonglong)((uVar22 - 1 >> 3) + 1);
    local_120 = (byte *)((longlong)local_120 + uVar11);
    do {
      param_2 = (uchar *)((longlong)param_2 + -1);
      *param_2 = (char)uVar16;
      uVar16 = uVar16 >> 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (0 < (int)local_128) {
    uVar11 = (ulonglong)((local_128 - 1 >> 3) + 1);
    do {
      *(char *)((longlong)_Src + _Size) = (char)uVar19;
      _Size = _Size + 1;
      uVar19 = uVar19 >> 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  lVar23 = _Size + (longlong)local_120;
  *(short *)local_d8 = (short)lVar18;
  puVar17 = local_100 + lVar18;
  local_100 = puVar17;
  memcpy(puVar17,_Src,_Size);
  memmove(puVar17 + _Size,(void *)((longlong)local_f0 - (longlong)local_120),(size_t)local_120);
  if (_Src == (undefined4 *)0x0) goto LAB_14f3ce278;
  if (param_8 != (rrArenaAllocator *)0x0) {
    uVar11 = local_d0 + 0xfU & 0xfffffffffffffff0;
    if ((undefined4 *)param_8->m_unorderedStart == (undefined4 *)0x0) {
      if ((longlong)_Src + uVar11 == param_8->m_cur) {
        param_8->m_cur = param_8->m_cur - uVar11;
        goto LAB_14f3ce278;
      }
    }
    else if (((undefined4 *)param_8->m_unorderedStart <= _Src) &&
            (_Src < (undefined4 *)(param_8->m_size + param_8->m_base))) {
      plVar12 = (longlong *)(uVar11 + (longlong)_Src);
      plVar12[1] = 1;
      plVar3 = (longlong *)param_8->m_cur;
      if (plVar12 + 2 == plVar3) {
        while ((plVar3 != (longlong *)param_8->m_unorderedStart && (plVar12[1] == 1))) {
          param_8->m_cur = param_8->m_cur + (-0x10 - *plVar12);
          plVar3 = (longlong *)param_8->m_cur;
          plVar12 = plVar3 + -2;
        }
      }
      goto LAB_14f3ce278;
    }
  }
  (*g_fp_OodleCore_Plugin_Free)(_Src);
LAB_14f3ce278:
  return lVar23 + lVar18 + 2;
}

// newLZ_put_array_huff @ 14f3ce2c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 __cdecl
oo2::newLZ_put_array_huff
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uint *param_5,float param_6,
          OodleSpeedFit *param_7,float *param_8,float param_9,uint *param_10,uint param_11,
          rrArenaAllocator *param_12,int param_13)

{
  byte bVar1;
  int iVar2;
  _func___cdecl_float_long64_long64_long64_float *p_Var3;
  long64 lVar4;
  int iVar5;
  uint uVar6;
  rrHuffman *prVar7;
  long64 lVar8;
  uchar *puVar9;
  ulonglong uVar10;
  uchar *puVar11;
  longlong lVar12;
  longlong lVar13;
  byte *pbVar14;
  longlong lVar15;
  long64 lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_1238 [32];
  int local_11f4;
  int local_11f0;
  int local_11e8;
  _rrVarBits_ local_11d8;
  long64 local_11b8;
  rrArenaAllocator *local_11b0;
  byte *local_11a8;
  float *local_11a0;
  uchar *local_1198;
  OodleSpeedFit *local_1190;
  ulong64 local_1188 [258];
  ulonglong local_978 [32];
  undefined1 local_878 [2048];
  ulonglong local_78;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f3ce2df;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1238;
  local_11a0 = param_8;
  local_11b0 = param_12;
  local_1190 = param_7;
  local_11b8 = param_4;
  local_11a8 = param_3;
  prVar7 = rrHuffman_Create(0x100,0,local_878);
  lVar15 = 0;
  rrHuffman_BuildCodeLens(prVar7,param_5,(uint)param_4,0xb,local_11b0,(uint)(5 < param_13));
  iVar5 = prVar7->topSym + 1;
  iVar2 = prVar7->gotNumSymbols;
  if (iVar2 < 2) {
    if ((longlong)param_2 - (longlong)param_1 < 3) {
      return -1;
    }
    fVar17 = (*param_7->memcpy)(param_4);
    fVar17 = fVar17 * param_6 + __real_41000000;
    if (*local_11a0 <= fVar17) {
      return -1;
    }
    bVar1 = *local_11a8;
    *param_1 = '\0';
    param_1[1] = bVar1 >> 2 | 0x40;
    param_1[2] = bVar1 << 6;
    *param_10 = 2;
    *local_11a0 = fVar17;
    return 3;
  }
  local_11f0 = 0;
  local_11f4 = 0;
  if (param_7->uses_huff_alphabet_runs != false) {
    local_11f0 = newlz_identify_alphabet_runs_sse2(prVar7,(int *)local_1188,0x100);
    local_11f4 = (local_11f0 + -1) / 2;
  }
  uVar6 = CodeLenOfHistogram256(param_5,(uint)param_4,prVar7->codeLenTable,iVar5);
  local_1198 = (uchar *)(ulonglong)uVar6;
  fVar17 = (float)(longlong)local_1198 / (float)param_4;
  if ((param_11 & 1) != 0) {
    p_Var3 = param_7->huff3;
    fVar18 = (*param_7->huff6)(local_11b8,(longlong)iVar2,(longlong)local_11f4,fVar17);
    param_4 = local_11b8;
    fVar19 = (*p_Var3)(local_11b8,(longlong)iVar2,(longlong)local_11f4,fVar17);
    param_7 = local_1190;
    if ((fVar18 - fVar19) * param_6 + ___real_40ca0000 < 0.0) {
      local_11e8 = 4;
      *param_10 = 4;
      fVar17 = (*local_1190->huff6)(param_4,(longlong)iVar2,(longlong)local_11f4,fVar17);
      goto LAB_14f3ce52d;
    }
  }
  *param_10 = 2;
  fVar17 = (*param_7->huff3)(param_4,(longlong)iVar2,(longlong)local_11f4,fVar17);
  local_11e8 = 2;
LAB_14f3ce52d:
  fVar18 = fVar17 * param_6 + __real_40a00000;
  if ((fVar17 <= param_9) &&
     (iVar2 = iVar2 * 2 + 0xf, lVar12 = ((longlong)local_1198 + 7U >> 3) + 0xd,
     (float)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) + (float)lVar12 + fVar18 < *local_11a0)) {
    if (param_7->uses_huff_alphabet_runs == false) {
      local_11f0 = newlz_identify_alphabet_runs_sse2(prVar7,(int *)local_1188,0x100);
    }
    local_11d8.m_cur = (uchar *)local_978;
    if ((prVar7->gotNumSymbols < 5) || ((param_11 & 0x40) == 0)) {
      local_11d8.m_bits = 0;
      local_11d8.m_inv_bitlen = 0x3e;
      rrHuffman_PackCodeLens(prVar7,&local_11d8);
    }
    else {
      local_11d8.m_bits = 2;
      local_11d8.m_inv_bitlen = 0x3d;
      newlz_encode_hufflens2(prVar7,&local_11d8,(int *)local_1188,local_11f0);
    }
    lVar16 = local_11b8;
    lVar13 = 0x3f - local_11d8.m_inv_bitlen >> 3;
    uVar10 = local_11d8.m_bits << ((char)local_11d8.m_inv_bitlen + 1U & 0x3f);
    *(ulonglong *)local_11d8.m_cur =
         uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 | (uVar10 & 0xff0000000000) >> 0x18 |
         (uVar10 & 0xff00000000) >> 8 | (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
         (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
    local_11d8.m_cur = (uchar *)((longlong)local_11d8.m_cur + lVar13);
    local_11d8.m_inv_bitlen = local_11d8.m_inv_bitlen + lVar13 * 8;
    if (-local_11d8.m_inv_bitlen != -0x3f && -1 < -local_11d8.m_inv_bitlen + 0x3f) {
      uVar6 = (int)local_11d8.m_inv_bitlen + 1U & 7;
      if (uVar6 != 0) {
        local_11d8.m_bits = local_11d8.m_bits << (sbyte)uVar6;
        local_11d8.m_inv_bitlen = local_11d8.m_inv_bitlen - (ulonglong)uVar6;
      }
      while (7 < 0x3f - local_11d8.m_inv_bitlen) {
        *local_11d8.m_cur =
             (uchar)(local_11d8.m_bits >> (0x37U - (char)local_11d8.m_inv_bitlen & 0x3f));
        local_11d8.m_inv_bitlen = local_11d8.m_inv_bitlen + 8;
        local_11d8.m_cur = local_11d8.m_cur + 1;
        local_11d8.m_bits =
             local_11d8.m_bits &
             *(uint *)((longlong)c_rrBitMask64 + local_11d8.m_inv_bitlen * -4 + 0x5c);
      }
    }
    puVar11 = local_11d8.m_cur +
              (((longlong)
                ((ulonglong)((uint)(0x46 - local_11d8.m_inv_bitlen >> 0x3f) & 7) +
                (0x46 - local_11d8.m_inv_bitlen)) >> 3) - (longlong)local_978);
    if (((float)(longlong)(puVar11 + lVar12) + fVar18 < *local_11a0) &&
       ((longlong)(puVar11 + lVar12 + 8) < (longlong)param_2 - (longlong)param_1)) {
      puVar9 = param_2;
      if (param_1 + local_11b8 + 0x100 <= param_2) {
        puVar9 = param_1 + local_11b8 + 0x100;
      }
      memcpy(param_1,local_978,(size_t)puVar11);
      puVar11 = param_1 + (longlong)puVar11;
      rrHuffman_BuildEncodeTable(prVar7);
      lVar4 = local_11b8;
      local_1198 = prVar7->codeLenTable;
      if (0 < (longlong)iVar5) {
        do {
          local_1188[lVar15] =
               ((ulonglong)""[prVar7->encodeTable[lVar15] & 0x3f] << 5 |
               (ulonglong)""[prVar7->encodeTable[lVar15] >> 5]) >> (0xb - local_1198[lVar15] & 0x3f)
          ;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iVar5);
      }
      pbVar14 = local_11a8;
      if (local_11e8 == 4) {
        lVar15 = local_11b8 + 1 >> 1;
        lVar8 = newLZ_put_array_huff3streams
                          (puVar11 + 3,puVar9,param_2,local_11a8,lVar15,local_1198,local_1188,
                           local_11b0);
        *puVar11 = (uchar)lVar8;
        lVar16 = lVar4 - lVar15;
        puVar11[2] = (uchar)((ulonglong)lVar8 >> 0x10);
        puVar11[1] = (uchar)((ulonglong)lVar8 >> 8);
        puVar11 = puVar11 + 3 + lVar8;
        pbVar14 = local_11a8 + lVar15;
      }
      lVar16 = newLZ_put_array_huff3streams
                         (puVar11,puVar9,param_2,pbVar14,lVar16,local_1198,local_1188,local_11b0);
      *local_11a0 = (float)(longlong)(puVar11 + (lVar16 - (longlong)param_1)) + fVar18;
      return (long64)(puVar11 + (lVar16 - (longlong)param_1));
    }
  }
  return -1;
}

// newlz_build_msbfirst_table @ 14f3ce900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newlz_build_msbfirst_table
          (uint *param_1,uint *param_2,KrakenMSBHuffTab *param_3,uchar *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uchar *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uchar *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  
  uVar13 = 0;
  uVar10 = 1;
  do {
    uVar11 = param_2[uVar10] - param_1[uVar10];
    if (uVar11 != 0) {
      cVar1 = (char)uVar10;
      uVar7 = uVar11 << (0xbU - cVar1 & 0x1f);
      uVar9 = 1 << (0xbU - cVar1 & 0x1f);
      if (0x800 < uVar7 + (int)uVar13) {
        return false;
      }
      puVar8 = param_3->len + uVar13;
      uVar15 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
      *(undefined4 *)puVar8 = uVar15;
      *(undefined4 *)(puVar8 + 4) = uVar15;
      *(undefined4 *)(puVar8 + 8) = uVar15;
      *(undefined4 *)(puVar8 + 0xc) = uVar15;
      if (0x10 < (ulonglong)uVar7) {
        puVar4 = (undefined4 *)((ulonglong)(puVar8 + 0x10) & 0xfffffffffffffff0);
        do {
          *puVar4 = uVar15;
          puVar4[1] = uVar15;
          puVar4[2] = uVar15;
          puVar4[3] = uVar15;
          puVar4 = puVar4 + 4;
        } while (puVar4 < puVar8 + uVar7);
      }
      puVar8 = param_4 + param_1[uVar10];
      if (uVar11 != 0) {
        uVar12 = (ulonglong)uVar11;
        do {
          uVar14 = CONCAT11(*puVar8,*puVar8);
          puVar5 = param_3->sym + uVar13;
          uVar15 = CONCAT22(uVar14,uVar14);
          *(undefined4 *)puVar5 = uVar15;
          *(undefined4 *)(puVar5 + 4) = uVar15;
          *(undefined4 *)(puVar5 + 8) = uVar15;
          *(undefined4 *)(puVar5 + 0xc) = uVar15;
          if (0x10 < uVar9) {
            puVar4 = (undefined4 *)((ulonglong)(puVar5 + 0x10) & 0xfffffffffffffff0);
            do {
              *puVar4 = uVar15;
              puVar4[1] = uVar15;
              puVar4[2] = uVar15;
              puVar4[3] = uVar15;
              puVar4 = puVar4 + 4;
            } while (puVar4 < puVar5 + uVar9);
          }
          uVar13 = (ulonglong)((int)uVar13 + uVar9);
          puVar8 = puVar8 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    uVar3 = _UNK_1531e8438;
    uVar2 = ___xmm_0b0b0b0b0b0b0b0b0b0b0b0b0b0b0b0b;
    uVar11 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar11;
  } while (uVar11 < 0xb);
  uVar11 = param_2[0xb] - param_1[0xb];
  if (uVar11 != 0) {
    uVar7 = uVar11 + (int)uVar13;
    if (0x800 < uVar7) {
      return false;
    }
    uVar10 = (ulonglong)uVar11;
    puVar8 = param_3->len + uVar13;
    *(undefined8 *)puVar8 = ___xmm_0b0b0b0b0b0b0b0b0b0b0b0b0b0b0b0b;
    *(undefined8 *)(puVar8 + 8) = uVar3;
    if (0x10 < uVar10) {
      puVar6 = (undefined8 *)((ulonglong)(puVar8 + 0x10) & 0xfffffffffffffff0);
      do {
        *puVar6 = uVar2;
        puVar6[1] = uVar3;
        puVar6 = puVar6 + 2;
      } while (puVar6 < puVar8 + uVar10);
    }
    memcpy(param_3->sym + uVar13,param_4 + param_1[0xb],uVar10);
    uVar13 = (ulonglong)uVar7;
  }
  return (int)uVar13 == 0x800;
}

// newlz_decode_hufflens2 @ 14f3ceac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f3cee13) */
/* WARNING: Removing unreachable block (ram,0x00014f3cedd6) */
/* WARNING: Removing unreachable block (ram,0x00014f3cedfd) */
/* WARNING: Removing unreachable block (ram,0x00014f3cede3) */
/* WARNING: Removing unreachable block (ram,0x00014f3cedf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl oo2::newlz_decode_hufflens2(_rrVarBits_ *param_1,uchar *param_2,uint *param_3)

{
  ulong64 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  byte bVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  byte *pbVar34;
  byte *pbVar35;
  int iVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  uint uVar40;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  undefined1 auVar41 [16];
  char cVar47;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  undefined1 auVar48 [16];
  byte bVar59;
  ushort uVar60;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  undefined1 auVar66 [16];
  byte bVar81;
  char cVar82;
  char cVar84;
  char cVar85;
  char cVar86;
  char cVar87;
  char cVar88;
  char cVar89;
  char cVar90;
  char cVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  char cVar96;
  undefined1 auVar83 [16];
  byte bVar97;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  undefined1 auVar98 [16];
  char cVar115;
  undefined1 auVar114 [16];
  undefined1 auStackY_528 [32];
  ulonglong local_4f8;
  BlockBitReader local_4f0;
  byte local_4d8 [528];
  ushort local_2c8 [272];
  ulonglong local_a8;
  undefined4 uVar61;
  undefined6 uVar62;
  undefined8 uVar63;
  undefined1 auVar64 [12];
  undefined1 auVar65 [14];
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_528;
  uVar1 = param_1->m_bits;
  lVar32 = param_1->m_inv_bitlen + 10;
  uVar30 = (byte)((uVar1 << 2) >> 0x38) + 1;
  if (1 < uVar30) {
    uVar29 = 0;
    uVar40 = 0;
    if (uVar30 != 0x100) {
      uVar40 = 0x101 - uVar30;
      if ((int)uVar30 < (int)(0x101 - uVar30)) {
        uVar40 = uVar30;
      }
      uVar27 = uVar40 * 2 - 1;
      uVar2 = 0x1f;
      if (uVar27 != 0) {
        for (; uVar27 >> uVar2 == 0; uVar2 = uVar2 - 1) {
        }
      }
      bVar26 = (byte)(uVar2 + 1);
      iVar36 = (1 << (bVar26 & 0x1f)) + uVar40 * -2;
      iVar22 = (int)((uVar1 << 10) >> (0x40 - bVar26 & 0x3f));
      uVar40 = iVar22 >> 1;
      if ((int)uVar40 < iVar36) {
        lVar32 = lVar32 + (ulonglong)uVar2;
      }
      else {
        uVar40 = iVar22 - iVar36;
        lVar32 = lVar32 + (ulonglong)(uVar2 + 1);
      }
    }
    local_4f0.pos_in_byte = -((int)-lVar32 + 0x3f) & 7;
    local_4f0.ptr = param_1->m_cur + -(-lVar32 + 0x46U >> 3);
    local_4f0.end = param_1->m_end;
    uVar37 = (ulonglong)(uVar40 + uVar30);
    uVar23 = newLZ_decode_unary_block(local_4d8,(ulonglong)(uVar40 + uVar30),&local_4f0);
    if (uVar23 == uVar37) {
      pbVar35 = local_4d8 + uVar37;
      pbVar35[0] = 0;
      pbVar35[1] = 0;
      pbVar35[2] = 0;
      pbVar35[3] = 0;
      pbVar35[4] = 0;
      pbVar35[5] = 0;
      pbVar35[6] = 0;
      pbVar35[7] = 0;
      pbVar35 = local_4d8 + uVar37 + 8;
      pbVar35[0] = 0;
      pbVar35[1] = 0;
      pbVar35[2] = 0;
      pbVar35[3] = 0;
      pbVar35[4] = 0;
      pbVar35[5] = 0;
      pbVar35[6] = 0;
      pbVar35[7] = 0;
      uVar37 = (ulonglong)uVar30;
      uVar23 = newLZ_decode_rice_U8_bottom_block
                         (local_4d8,(ulonglong)uVar30,(uint)(uVar1 >> 0x3e),&local_4f0);
      auVar21 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
      auVar20 = ___xmm_3f3f3f3f3f3f3f3f3f3f3f3f3f3f3f3f;
      auVar114 = ___xmm_1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e;
      bVar19 = UNK_151162d8f;
      bVar18 = UNK_151162d8e;
      bVar17 = UNK_151162d8d;
      bVar16 = UNK_151162d8c;
      bVar15 = UNK_151162d8b;
      bVar14 = UNK_151162d8a;
      bVar13 = UNK_151162d89;
      bVar12 = UNK_151162d88;
      bVar11 = UNK_151162d87;
      bVar10 = UNK_151162d86;
      bVar9 = UNK_151162d85;
      bVar8 = UNK_151162d84;
      bVar7 = UNK_151162d83;
      bVar6 = UNK_151162d82;
      bVar5 = UNK_151162d81;
      bVar26 = __xmm_0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a;
      auVar98 = ___xmm_01010101010101010101010101010101;
      if (uVar23 == uVar37) {
        uVar23 = uVar29;
        if (local_4f0.end != local_4f0.ptr && -1 < (longlong)local_4f0.end - (longlong)local_4f0.ptr
           ) {
          uVar23 = (ulonglong)*local_4f0.ptr;
        }
        puVar31 = (ulonglong *)(local_4f0.ptr + 1);
        lVar32 = (longlong)local_4f0.end - (longlong)puVar31;
        if (lVar32 < 8) {
          uVar28 = uVar29;
          if (0 < lVar32) {
            uVar28 = (ulonglong)(byte)*puVar31;
          }
          uVar38 = uVar29;
          if (lVar32 != 1 && -1 < lVar32 + -1) {
            uVar38 = (ulonglong)local_4f0.ptr[2];
          }
          uVar33 = uVar29;
          if (lVar32 != 2 && -1 < lVar32 + -2) {
            uVar33 = (ulonglong)local_4f0.ptr[3];
          }
          uVar24 = uVar29;
          if (lVar32 != 3 && -1 < lVar32 + -3) {
            uVar24 = (ulonglong)local_4f0.ptr[4];
          }
          lVar32 = (longlong)local_4f0.end - (longlong)(local_4f0.ptr + 5);
          if (lVar32 < 1) {
            local_4f8 = 0;
          }
          else {
            local_4f8 = (ulonglong)local_4f0.ptr[5];
          }
          uVar39 = uVar29;
          if (lVar32 != 1 && -1 < lVar32 + -1) {
            uVar39 = (ulonglong)local_4f0.ptr[6];
          }
          uVar25 = uVar29;
          if (lVar32 != 2 && -1 < lVar32 + -2) {
            uVar25 = (ulonglong)local_4f0.ptr[7];
          }
          uVar28 = ((((((uVar28 << 8 | uVar38) << 8 | uVar33) << 8 | uVar24) << 8 | local_4f8) << 8
                    | uVar39) << 8 | uVar25) << 8;
        }
        else {
          uVar28 = *puVar31;
          uVar28 = (uVar28 & 0xff000000000000) >> 0x28 | (uVar28 & 0xff0000000000) >> 0x18 |
                   (uVar28 & 0xff00000000) >> 8 | (uVar28 & 0xff000000) << 8 |
                   (uVar28 & 0xff0000) << 0x18 | (uVar28 & 0xff00) << 0x28 | uVar28 << 0x38;
        }
        param_1->m_inv_bitlen = (ulonglong)local_4f0.pos_in_byte + 7;
        pbVar34 = local_4d8 + uVar37;
        param_1->m_bits = (uVar28 >> 8 | uVar23 << 0x38) << ((byte)local_4f0.pos_in_byte & 0x3f);
        param_1->m_cur = local_4f0.ptr + 7;
        param_1->m_end = local_4f0.end;
        uVar3 = *(undefined8 *)pbVar34;
        uVar4 = *(undefined8 *)(local_4d8 + uVar37 + 8);
        pbVar34[0] = 0;
        pbVar34[1] = 0;
        pbVar34[2] = 0;
        pbVar34[3] = 0;
        pbVar34[4] = 0;
        pbVar34[5] = 0;
        pbVar34[6] = 0;
        pbVar34[7] = 0;
        pbVar35 = local_4d8 + uVar37 + 8;
        pbVar35[0] = 0;
        pbVar35[1] = 0;
        pbVar35[2] = 0;
        pbVar35[3] = 0;
        pbVar35[4] = 0;
        pbVar35[5] = 0;
        pbVar35[6] = 0;
        pbVar35[7] = 0;
        uVar23 = uVar29;
        bVar97 = bVar26;
        bVar99 = bVar5;
        bVar100 = bVar6;
        bVar101 = bVar7;
        bVar102 = bVar8;
        bVar103 = bVar9;
        bVar104 = bVar10;
        bVar105 = bVar11;
        bVar106 = bVar12;
        bVar107 = bVar13;
        bVar108 = bVar14;
        bVar109 = bVar15;
        bVar110 = bVar16;
        bVar111 = bVar17;
        bVar112 = bVar18;
        bVar113 = bVar19;
        do {
          cVar115 = auVar114[0xf];
          uVar27 = (int)uVar23 + 0x10;
          auVar114 = *(undefined1 (*) [16])(local_4d8 + uVar23);
          auVar41 = auVar98 & auVar114;
          auVar48._0_2_ = auVar114._0_2_ >> 1;
          auVar48._2_2_ = auVar114._2_2_ >> 1;
          auVar48._4_2_ = auVar114._4_2_ >> 1;
          auVar48._6_2_ = auVar114._6_2_ >> 1;
          auVar48._8_2_ = auVar114._8_2_ >> 1;
          auVar48._10_2_ = auVar114._10_2_ >> 1;
          auVar48._12_2_ = auVar114._12_2_ >> 1;
          auVar48._14_2_ = auVar114._14_2_ >> 1;
          auVar83[1] = -auVar41[1];
          auVar83[0] = -auVar41[0];
          auVar83[2] = -auVar41[2];
          auVar83[3] = -auVar41[3];
          auVar83[4] = -auVar41[4];
          auVar83[5] = -auVar41[5];
          auVar83[6] = -auVar41[6];
          auVar83[7] = -auVar41[7];
          auVar83[8] = -auVar41[8];
          auVar83[9] = -auVar41[9];
          auVar83[10] = -auVar41[10];
          auVar83[0xb] = -auVar41[0xb];
          auVar83[0xc] = -auVar41[0xc];
          auVar83[0xd] = -auVar41[0xd];
          auVar83[0xe] = -auVar41[0xe];
          auVar83[0xf] = -auVar41[0xf];
          auVar83 = auVar83 ^ auVar48 & auVar21;
          cVar82 = auVar83[0];
          cVar84 = auVar83[1];
          cVar42 = cVar82 + cVar84;
          cVar85 = auVar83[2];
          cVar86 = auVar83[3];
          cVar87 = auVar83[4];
          cVar88 = auVar83[5];
          cVar89 = auVar83[6];
          cVar90 = auVar83[7];
          cVar91 = auVar83[8];
          cVar92 = auVar83[9];
          cVar93 = auVar83[10];
          cVar94 = auVar83[0xb];
          cVar95 = auVar83[0xc];
          cVar96 = auVar83[0xd];
          cVar47 = auVar83[0xe];
          cVar49 = cVar82 + cVar84 + cVar85;
          cVar50 = cVar42 + cVar85 + cVar86;
          cVar51 = cVar84 + cVar85 + cVar86 + cVar87;
          cVar52 = cVar85 + cVar86 + cVar87 + cVar88;
          cVar53 = cVar86 + cVar87 + cVar88 + cVar89;
          cVar54 = cVar87 + cVar88 + cVar89 + cVar90;
          cVar55 = cVar88 + cVar89 + cVar90 + cVar91;
          cVar56 = cVar89 + cVar90 + cVar91 + cVar92;
          cVar57 = cVar90 + cVar91 + cVar92 + cVar93;
          cVar58 = cVar91 + cVar92 + cVar93 + cVar94;
          cVar43 = cVar82 + cVar51;
          cVar44 = cVar42 + cVar52;
          cVar45 = cVar49 + cVar53;
          cVar46 = cVar50 + cVar54;
          cVar51 = cVar82 + cVar51 + cVar55;
          cVar52 = cVar42 + cVar52 + cVar56;
          cVar53 = cVar49 + cVar53 + cVar57;
          cVar54 = cVar50 + cVar54 + cVar58;
          cVar55 = cVar43 + cVar55 + cVar92 + cVar93 + cVar94 + cVar95;
          cVar56 = cVar44 + cVar56 + cVar93 + cVar94 + cVar95 + cVar96;
          cVar57 = cVar45 + cVar57 + cVar94 + cVar95 + cVar96 + cVar47;
          cVar58 = cVar46 + cVar58 + cVar95 + cVar96 + cVar47 + auVar83[0xf];
          auVar114._0_8_ =
               (longlong)
               CONCAT81((longlong)(((unkuint9)CONCAT11(cVar58,cVar57) << 0x38) >> 8),
                        cVar46 + cVar115) << 0x38;
          auVar114[8] = cVar51 + cVar115;
          auVar114[9] = cVar52 + cVar115;
          auVar114[10] = cVar53 + cVar115;
          auVar114[0xb] = cVar54 + cVar115;
          auVar114[0xc] = cVar55 + cVar115;
          auVar114[0xd] = cVar56 + cVar115;
          auVar114[0xe] = cVar57 + cVar115;
          auVar114[0xf] = cVar58 + cVar115;
          uVar60 = CONCAT11(cVar82 + cVar115,cVar115);
          uVar61 = CONCAT13(cVar49 + cVar115,CONCAT12(cVar42 + cVar115,uVar60));
          uVar62 = CONCAT15(cVar43 + cVar115,CONCAT14(cVar50 + cVar115,uVar61));
          uVar63 = CONCAT17(cVar45 + cVar115,CONCAT16(cVar44 + cVar115,uVar62));
          auVar64._0_10_ = CONCAT19(cVar51 + cVar115,CONCAT18(cVar46 + cVar115,uVar63));
          auVar64[10] = cVar52 + cVar115;
          auVar64[0xb] = cVar53 + cVar115;
          auVar65[0xc] = cVar54 + cVar115;
          auVar65._0_12_ = auVar64;
          auVar65[0xd] = cVar55 + cVar115;
          auVar41[0xe] = cVar56 + cVar115;
          auVar41._0_14_ = auVar65;
          auVar41[0xf] = cVar57 + cVar115;
          auVar66._0_2_ = uVar60 >> 2;
          auVar66._2_2_ = (ushort)((uint)uVar61 >> 0x12);
          auVar66._4_2_ = (ushort)((uint6)uVar62 >> 0x22);
          auVar66._6_2_ = (ushort)((ulonglong)uVar63 >> 0x32);
          auVar66._8_2_ = (ushort)((unkuint10)auVar64._0_10_ >> 0x42);
          auVar66._10_2_ = auVar64._10_2_ >> 2;
          auVar66._12_2_ = auVar65._12_2_ >> 2;
          auVar66._14_2_ = auVar41._14_2_ >> 2;
          auVar66 = auVar66 & auVar20;
          bVar59 = auVar66[0] + cVar82;
          bVar67 = auVar66[1] + cVar84;
          bVar68 = auVar66[2] + cVar85;
          bVar69 = auVar66[3] + cVar86;
          bVar70 = auVar66[4] + cVar87;
          bVar71 = auVar66[5] + cVar88;
          bVar72 = auVar66[6] + cVar89;
          bVar73 = auVar66[7] + cVar90;
          bVar74 = auVar66[8] + cVar91;
          bVar75 = auVar66[9] + cVar92;
          bVar76 = auVar66[10] + cVar93;
          bVar77 = auVar66[0xb] + cVar94;
          bVar78 = auVar66[0xc] + cVar95;
          bVar79 = auVar66[0xd] + cVar96;
          bVar80 = auVar66[0xe] + cVar47;
          bVar81 = auVar66[0xf] + auVar83[0xf];
          bVar97 = (bVar97 < bVar59) * bVar59 | (bVar97 >= bVar59) * bVar97;
          bVar99 = (bVar99 < bVar67) * bVar67 | (bVar99 >= bVar67) * bVar99;
          bVar100 = (bVar100 < bVar68) * bVar68 | (bVar100 >= bVar68) * bVar100;
          bVar101 = (bVar101 < bVar69) * bVar69 | (bVar101 >= bVar69) * bVar101;
          bVar102 = (bVar102 < bVar70) * bVar70 | (bVar102 >= bVar70) * bVar102;
          bVar103 = (bVar103 < bVar71) * bVar71 | (bVar103 >= bVar71) * bVar103;
          bVar104 = (bVar104 < bVar72) * bVar72 | (bVar104 >= bVar72) * bVar104;
          bVar105 = (bVar105 < bVar73) * bVar73 | (bVar105 >= bVar73) * bVar105;
          bVar106 = (bVar106 < bVar74) * bVar74 | (bVar106 >= bVar74) * bVar106;
          bVar107 = (bVar107 < bVar75) * bVar75 | (bVar107 >= bVar75) * bVar107;
          bVar108 = (bVar108 < bVar76) * bVar76 | (bVar108 >= bVar76) * bVar108;
          bVar109 = (bVar109 < bVar77) * bVar77 | (bVar109 >= bVar77) * bVar109;
          bVar110 = (bVar110 < bVar78) * bVar78 | (bVar110 >= bVar78) * bVar110;
          bVar111 = (bVar111 < bVar79) * bVar79 | (bVar111 >= bVar79) * bVar111;
          bVar112 = (bVar112 < bVar80) * bVar80 | (bVar112 >= bVar80) * bVar112;
          bVar113 = (bVar113 < bVar81) * bVar81 | (bVar113 >= bVar81) * bVar113;
          local_4d8[uVar23] = auVar98[0] + bVar59;
          local_4d8[uVar23 + 1] = auVar98[1] + bVar67;
          local_4d8[uVar23 + 2] = auVar98[2] + bVar68;
          local_4d8[uVar23 + 3] = auVar98[3] + bVar69;
          local_4d8[uVar23 + 4] = auVar98[4] + bVar70;
          local_4d8[uVar23 + 5] = auVar98[5] + bVar71;
          local_4d8[uVar23 + 6] = auVar98[6] + bVar72;
          local_4d8[uVar23 + 7] = auVar98[7] + bVar73;
          local_4d8[uVar23 + 8] = auVar98[8] + bVar74;
          local_4d8[uVar23 + 9] = auVar98[9] + bVar75;
          local_4d8[uVar23 + 10] = auVar98[10] + bVar76;
          local_4d8[uVar23 + 0xb] = auVar98[0xb] + bVar77;
          local_4d8[uVar23 + 0xc] = auVar98[0xc] + bVar78;
          local_4d8[uVar23 + 0xd] = auVar98[0xd] + bVar79;
          local_4d8[uVar23 + 0xe] = auVar98[0xe] + bVar80;
          local_4d8[uVar23 + 0xf] = auVar98[0xf] + bVar81;
          uVar23 = (ulonglong)uVar27;
        } while (uVar27 < uVar30);
        auVar98[0] = -(bVar97 == bVar26);
        auVar98[1] = -(bVar99 == bVar5);
        auVar98[2] = -(bVar100 == bVar6);
        auVar98[3] = -(bVar101 == bVar7);
        auVar98[4] = -(bVar102 == bVar8);
        auVar98[5] = -(bVar103 == bVar9);
        auVar98[6] = -(bVar104 == bVar10);
        auVar98[7] = -(bVar105 == bVar11);
        auVar98[8] = -(bVar106 == bVar12);
        auVar98[9] = -(bVar107 == bVar13);
        auVar98[10] = -(bVar108 == bVar14);
        auVar98[0xb] = -(bVar109 == bVar15);
        auVar98[0xc] = -(bVar110 == bVar16);
        auVar98[0xd] = -(bVar111 == bVar17);
        auVar98[0xe] = -(bVar112 == bVar18);
        auVar98[0xf] = -(bVar113 == bVar19);
        if ((ushort)((ushort)(SUB161(auVar98 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar98 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar98 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar98 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar98 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar98 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar98 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar98 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar98 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar98 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar98 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar98 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar98 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar98 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar98 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar98[0xf] >> 7) << 0xf) == 0xffff) {
          *(undefined8 *)pbVar34 = uVar3;
          *(undefined8 *)(local_4d8 + uVar37 + 8) = uVar4;
          iVar22 = newLZ_decode_alphabet_shape_runlens(local_2c8,uVar30,uVar40,pbVar34,param_1);
          if (-1 < iVar22) {
            pbVar35 = local_4d8;
            if (iVar22 < 1) {
              return uVar30;
            }
            do {
              uVar60 = local_2c8[uVar29 * 2];
              uVar40 = (uint)local_2c8[uVar29 * 2 + 1];
              do {
                bVar26 = *pbVar35;
                pbVar35 = pbVar35 + 1;
                uVar27 = param_3[bVar26];
                param_2[uVar27] = (uchar)uVar60;
                uVar60 = uVar60 + 1;
                param_3[bVar26] = uVar27 + 1;
                uVar40 = uVar40 - 1;
              } while (uVar40 != 0);
              uVar29 = uVar29 + 1;
            } while ((longlong)uVar29 < (longlong)iVar22);
            return uVar30;
          }
        }
      }
    }
  }
  return -1;
}

// newlz_decode_hufflens @ 14f3cef40

int __cdecl oo2::newlz_decode_hufflens(_rrVarBits_ *param_1,uchar *param_2,uint *param_3)

{
  uchar *puVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  int local_res20;
  
  uVar20 = param_1->m_bits;
  puVar1 = param_1->m_end;
  puVar18 = (ulonglong *)param_1->m_cur;
  lVar15 = param_1->m_inv_bitlen;
  lVar4 = uVar20 * 2;
  bVar2 = (byte)((ulonglong)lVar4 >> 0x38);
  if ((longlong)uVar20 < 0) {
    lVar15 = lVar15 + 3;
    lVar8 = (longlong)puVar1 - (longlong)puVar18;
    uVar21 = 0;
    iVar22 = 0x20;
    if (lVar8 < 8) {
      if (lVar8 < 1) {
        uVar19 = 0;
      }
      else {
        uVar19 = (ulonglong)(byte)*puVar18;
      }
      if (lVar8 == 1 || lVar8 + -1 < 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (ulonglong)*(byte *)((longlong)puVar18 + 1);
      }
      if (lVar8 == 2 || lVar8 + -2 < 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = (ulonglong)*(byte *)((longlong)puVar18 + 2);
      }
      if (lVar8 == 3 || lVar8 + -3 < 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (ulonglong)*(byte *)((longlong)puVar18 + 3);
      }
      lVar8 = (longlong)puVar1 - ((longlong)puVar18 + 4);
      if (lVar8 < 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulonglong)*(byte *)((longlong)puVar18 + 4);
      }
      if (lVar8 == 1 || lVar8 + -1 < 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (ulonglong)*(byte *)((longlong)puVar18 + 5);
      }
      if (lVar8 == 2 || lVar8 + -2 < 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (ulonglong)*(byte *)((longlong)puVar18 + 6);
      }
      if (lVar8 == 3 || lVar8 + -3 < 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulonglong)*(byte *)((longlong)puVar18 + 7);
      }
      uVar10 = ((((((uVar19 << 8 | uVar11) << 8 | uVar17) << 8 | uVar5) << 8 | uVar6) << 8 | uVar13)
                << 8 | uVar14) << 8 | uVar10;
    }
    else {
      uVar19 = *puVar18;
      uVar10 = uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
               (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
               (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 | (uVar19 & 0xff00) << 0x28
               | uVar19 << 0x38;
    }
    uVar16 = 0;
    uVar11 = uVar10 >> (0x3fU - (char)lVar15 & 0x3f) | uVar20 << 3;
    puVar18 = (ulonglong *)((longlong)puVar18 + (lVar15 >> 3));
    lVar15 = lVar15 + (lVar15 >> 3) * -8 + 1;
    uVar19 = uVar11 * 2;
    if ((longlong)uVar11 < 0) goto LAB_14f3cf131;
    if (0xffffffffffffff < uVar19) {
      lVar8 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar21 = (0x40 - (int)lVar8) * 2;
      bVar3 = (byte)uVar21;
      uVar11 = uVar19 >> (0x40 - bVar3 & 0x3f);
      uVar19 = uVar19 << (bVar3 & 0x3f);
      lVar15 = lVar15 + (ulonglong)uVar21;
      for (uVar21 = (int)uVar11 - 1; uVar21 < 0x100; uVar21 = uVar21 + iVar7) {
LAB_14f3cf131:
        lVar8 = (longlong)puVar1 - (longlong)puVar18;
        if (lVar8 < 8) {
          if (lVar8 < 1) {
            uVar11 = 0;
          }
          else {
            uVar11 = (ulonglong)(byte)*puVar18;
          }
          if (lVar8 == 1 || lVar8 + -1 < 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = (ulonglong)*(byte *)((longlong)puVar18 + 1);
          }
          if (lVar8 == 2 || lVar8 + -2 < 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = (ulonglong)*(byte *)((longlong)puVar18 + 2);
          }
          if (lVar8 == 3 || lVar8 + -3 < 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar18 + 3);
          }
          lVar8 = (longlong)puVar1 - ((longlong)puVar18 + 4);
          if (lVar8 < 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = (ulonglong)*(byte *)((longlong)puVar18 + 4);
          }
          if (lVar8 == 1 || lVar8 + -1 < 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ulonglong)*(byte *)((longlong)puVar18 + 5);
          }
          if (lVar8 == 2 || lVar8 + -2 < 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (ulonglong)*(byte *)((longlong)puVar18 + 6);
          }
          if (lVar8 == 3 || lVar8 + -3 < 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (ulonglong)*(byte *)((longlong)puVar18 + 7);
          }
          uVar12 = ((((((uVar11 << 8 | uVar17) << 8 | uVar5) << 8 | uVar6) << 8 | uVar13) << 8 |
                    uVar14) << 8 | uVar10) << 8 | uVar12;
        }
        else {
          uVar11 = *puVar18;
          uVar12 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                   (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                   (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                   (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
        }
        puVar18 = (ulonglong *)((longlong)puVar18 + (lVar15 >> 3));
        lVar8 = lVar15 + (lVar15 >> 3) * -8;
        uVar19 = uVar19 | uVar12 >> (0x3fU - (char)lVar15 & 0x3f);
        if (uVar19 < 0x100000000000000) {
          local_res20 = 0x1ff;
        }
        else {
          lVar15 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar9 = (0x40 - (int)lVar15) * 2;
          bVar3 = (byte)uVar9;
          uVar11 = uVar19 >> (0x40 - bVar3 & 0x3f);
          uVar19 = uVar19 << (bVar3 & 0x3f);
          lVar8 = lVar8 + (ulonglong)uVar9;
          local_res20 = (int)uVar11 + -1;
        }
        if (0x100 < local_res20 + uVar21) {
          return -1;
        }
        lVar15 = (longlong)puVar1 - (longlong)puVar18;
        if (lVar15 < 8) {
          if (lVar15 < 1) {
            uVar11 = 0;
          }
          else {
            uVar11 = (ulonglong)(byte)*puVar18;
          }
          if (lVar15 == 1 || lVar15 + -1 < 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = (ulonglong)*(byte *)((longlong)puVar18 + 1);
          }
          if (lVar15 == 2 || lVar15 + -2 < 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = (ulonglong)*(byte *)((longlong)puVar18 + 2);
          }
          if (lVar15 == 3 || lVar15 + -3 < 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar18 + 3);
          }
          lVar15 = (longlong)puVar1 - ((longlong)puVar18 + 4);
          if (lVar15 < 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = (ulonglong)*(byte *)((longlong)puVar18 + 4);
          }
          if (lVar15 == 1 || lVar15 + -1 < 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ulonglong)*(byte *)((longlong)puVar18 + 5);
          }
          if (lVar15 == 2 || lVar15 + -2 < 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (ulonglong)*(byte *)((longlong)puVar18 + 6);
          }
          if (lVar15 == 3 || lVar15 + -3 < 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (ulonglong)*(byte *)((longlong)puVar18 + 7);
          }
          uVar12 = ((((((uVar11 << 8 | uVar17) << 8 | uVar5) << 8 | uVar6) << 8 | uVar13) << 8 |
                    uVar14) << 8 | uVar10) << 8 | uVar12;
        }
        else {
          uVar11 = *puVar18;
          uVar12 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                   (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                   (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                   (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
        }
        puVar18 = (ulonglong *)((longlong)puVar18 + (lVar8 >> 3));
        lVar15 = lVar8 + (lVar8 >> 3) * -8;
        uVar19 = uVar19 | uVar12 >> (0x3fU - (char)lVar8 & 0x3f);
        uVar16 = uVar16 + local_res20;
        do {
          if (uVar19 < (ulonglong)(1L << (0x3fU - (char)(0x14 >> (bVar2 >> 6)) & 0x3f))) {
            return -1;
          }
          lVar8 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          uVar9 = (uint)((ulonglong)lVar4 >> 0x3e) + -(int)lVar8 + 0x40;
          bVar3 = (byte)uVar9;
          lVar15 = lVar15 + (ulonglong)uVar9;
          uVar9 = (-(int)lVar8 + 0x3e << (((byte)(uVar20 >> 0x38) & 0x7f) >> 5)) +
                  (int)(uVar19 >> (0x40 - bVar3 & 0x3f));
          iVar7 = (uVar9 >> 1 ^ -(uVar9 & 1)) + (iVar22 + 2 >> 2);
          if (10 < iVar7 - 1U) {
            return -1;
          }
          iVar22 = (iVar22 * 3 + 2 >> 2) + iVar7;
          lVar8 = (longlong)puVar1 - (longlong)puVar18;
          uVar9 = param_3[iVar7];
          if (lVar8 < 8) {
            if (lVar8 < 1) {
              uVar11 = 0;
            }
            else {
              uVar11 = (ulonglong)(byte)*puVar18;
            }
            if (lVar8 == 1 || lVar8 + -1 < 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = (ulonglong)*(byte *)((longlong)puVar18 + 1);
            }
            if (lVar8 == 2 || lVar8 + -2 < 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = (ulonglong)*(byte *)((longlong)puVar18 + 2);
            }
            if (lVar8 == 3 || lVar8 + -3 < 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = (ulonglong)*(byte *)((longlong)puVar18 + 3);
            }
            lVar8 = (longlong)puVar1 - ((longlong)puVar18 + 4);
            if (lVar8 < 1) {
              uVar13 = 0;
            }
            else {
              uVar13 = (ulonglong)*(byte *)((longlong)puVar18 + 4);
            }
            if (lVar8 == 1 || lVar8 + -1 < 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = (ulonglong)*(byte *)((longlong)puVar18 + 5);
            }
            if (lVar8 == 2 || lVar8 + -2 < 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = (ulonglong)*(byte *)((longlong)puVar18 + 6);
            }
            if (lVar8 == 3 || lVar8 + -3 < 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = (ulonglong)*(byte *)((longlong)puVar18 + 7);
            }
            uVar12 = ((((((uVar11 << 8 | uVar17) << 8 | uVar5) << 8 | uVar6) << 8 | uVar13) << 8 |
                      uVar14) << 8 | uVar10) << 8 | uVar12;
          }
          else {
            uVar11 = *puVar18;
            uVar12 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                     (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                     (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                     (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
          }
          puVar18 = (ulonglong *)((longlong)puVar18 + (lVar15 >> 3));
          uVar19 = uVar19 << (bVar3 & 0x3f) | uVar12 >> (0x3fU - (char)lVar15 & 0x3f);
          lVar15 = lVar15 + (lVar15 >> 3) * -8;
          param_2[uVar9] = (uchar)uVar21;
          uVar21 = uVar21 + 1;
          local_res20 = local_res20 + -1;
          param_3[iVar7] = uVar9 + 1;
        } while (local_res20 != 0);
        if (0xff < uVar21) break;
        if (uVar19 < 0x100000000000000) {
          iVar7 = 0x1ff;
        }
        else {
          lVar8 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          uVar9 = (0x40 - (int)lVar8) * 2;
          bVar3 = (byte)uVar9;
          uVar11 = uVar19 >> (0x40 - bVar3 & 0x3f);
          uVar19 = uVar19 << (bVar3 & 0x3f);
          lVar15 = lVar15 + (ulonglong)uVar9;
          iVar7 = (int)uVar11 + -1;
        }
      }
      if ((uVar21 == 0x100) && (1 < (int)uVar16)) goto LAB_14f3cf791;
    }
    uVar16 = 0xffffffff;
  }
  else {
    uVar21 = (uint)(uVar20 >> 0x20) & 0x7fffffff;
    if (bVar2 == 0) {
      return -1;
    }
    uVar16 = uVar21 >> 0x17;
    if (bVar2 == 1) {
      lVar15 = lVar15 + 0x11;
      uVar19 = uVar20 << 0x11;
      *param_2 = (uchar)((uVar20 << 9) >> 0x38);
    }
    else {
      uVar11 = (uVar20 & 0x7fffffffffffff) >> 0x34;
      lVar15 = lVar15 + 0xc;
      uVar19 = uVar20 << 0xc;
      if (4 < (uint)((ulonglong)lVar4 >> 0x18) >> 0x1d) {
        return -1;
      }
      iVar22 = 0;
      if (bVar2 != 0) {
        do {
          lVar8 = (longlong)puVar1 - (longlong)puVar18;
          if (lVar8 < 8) {
            if (lVar8 < 1) {
              uVar20 = 0;
            }
            else {
              uVar20 = (ulonglong)(byte)*puVar18;
            }
            if (lVar8 == 1 || lVar8 + -1 < 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = (ulonglong)*(byte *)((longlong)puVar18 + 1);
            }
            if (lVar8 == 2 || lVar8 + -2 < 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = (ulonglong)*(byte *)((longlong)puVar18 + 2);
            }
            if (lVar8 == 3 || lVar8 + -3 < 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = (ulonglong)*(byte *)((longlong)puVar18 + 3);
            }
            lVar8 = (longlong)puVar1 - ((longlong)puVar18 + 4);
            if (lVar8 < 1) {
              uVar13 = 0;
            }
            else {
              uVar13 = (ulonglong)*(byte *)((longlong)puVar18 + 4);
            }
            if (lVar8 == 1 || lVar8 + -1 < 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = (ulonglong)*(byte *)((longlong)puVar18 + 5);
            }
            if (lVar8 == 2 || lVar8 + -2 < 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = (ulonglong)*(byte *)((longlong)puVar18 + 6);
            }
            if (lVar8 == 3 || lVar8 + -3 < 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = (ulonglong)*(byte *)((longlong)puVar18 + 7);
            }
            uVar12 = ((((((uVar20 << 8 | uVar17) << 8 | uVar5) << 8 | uVar6) << 8 | uVar13) << 8 |
                      uVar14) << 8 | uVar10) << 8 | uVar12;
          }
          else {
            uVar20 = *puVar18;
            uVar12 = uVar20 >> 0x38 | (uVar20 & 0xff000000000000) >> 0x28 |
                     (uVar20 & 0xff0000000000) >> 0x18 | (uVar20 & 0xff00000000) >> 8 |
                     (uVar20 & 0xff000000) << 8 | (uVar20 & 0xff0000) << 0x18 |
                     (uVar20 & 0xff00) << 0x28 | uVar20 << 0x38;
          }
          puVar18 = (ulonglong *)((longlong)puVar18 + (lVar15 >> 3));
          uVar20 = uVar19 | uVar12 >> (0x3fU - (char)lVar15 & 0x3f);
          uVar19 = (uVar20 << 8) << (sbyte)uVar11;
          lVar15 = lVar15 + uVar11 + (lVar15 >> 3) * -8 + 8;
          iVar7 = (int)(((uVar20 & 0xffffffffffffff) << 7) >>
                       (0x3f - ((byte)((ulonglong)lVar4 >> 0x30) >> 5) & 0x3f));
          if (10 < iVar7) {
            return -1;
          }
          iVar22 = iVar22 + 1;
          uVar16 = param_3[(longlong)iVar7 + 1];
          param_2[uVar16] = (uchar)(uVar20 >> 0x38);
          param_3[(longlong)iVar7 + 1] = uVar16 + 1;
          uVar16 = uVar21 >> 0x17;
        } while (iVar22 < (int)(uVar21 >> 0x17));
      }
    }
  }
LAB_14f3cf791:
  param_1->m_bits = uVar19;
  param_1->m_inv_bitlen = lVar15;
  param_1->m_cur = (uchar *)puVar18;
  param_1->m_end = puVar1;
  return uVar16;
}

// newlz_decode_packhuff8_runlen @ 14f3cf7c0

uint __cdecl
oo2::newlz_decode_packhuff8_runlen(ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  if (uVar1 < 0x100000000000000) {
    return 0x1ff;
  }
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar4 = (0x40 - (int)lVar2) * 2;
  bVar3 = (byte)uVar4;
  *param_1 = uVar1 << (bVar3 & 0x3f);
  *param_2 = *param_2 + (ulonglong)uVar4;
  return (int)(uVar1 >> (0x40 - bVar3 & 0x3f)) - 1;
}

// newlz_encode_hufflens2 @ 14f3cf840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::newlz_encode_hufflens2(rrHuffman *param_1,_rrVarBits_ *param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  uchar *puVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined1 auStackY_728 [32];
  int local_6d8 [24];
  uchar local_678 [256];
  uchar local_578 [256];
  uchar local_478 [256];
  uchar local_378 [256];
  uchar local_278 [256];
  uchar local_178 [256];
  ulonglong local_78;
  
  dVar3 = __real_42374876e0000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_728;
  iVar9 = *param_3;
  iVar10 = 0;
  local_6d8[0x14] = 0;
  iVar15 = 0;
  local_6d8[0] = 0;
  local_6d8[1] = 0;
  local_6d8[2] = 0;
  local_6d8[3] = 0;
  iVar14 = 0x20;
  local_6d8[4] = 0;
  local_6d8[5] = 0;
  local_6d8[6] = 0;
  local_6d8[7] = 0;
  local_6d8[8] = 0;
  local_6d8[9] = 0;
  local_6d8[10] = 0;
  local_6d8[0xb] = 0;
  local_6d8[0xc] = 0;
  local_6d8[0xd] = 0;
  local_6d8[0xe] = 0;
  local_6d8[0xf] = 0;
  local_6d8[0x10] = 0;
  local_6d8[0x11] = 0;
  local_6d8[0x12] = 0;
  local_6d8[0x13] = 0;
  if (1 < (longlong)param_4) {
    lVar11 = 1;
    lVar13 = 0;
    do {
      iVar5 = param_3[lVar11] + iVar9;
      lVar12 = (longlong)iVar9;
      if (lVar12 < iVar5) {
        puVar2 = param_1->codeLenTable;
        iVar15 = iVar15 + (iVar5 - iVar9);
        iVar9 = iVar9 + (iVar5 - iVar9);
        do {
          pbVar1 = puVar2 + lVar12;
          lVar12 = lVar12 + 1;
          iVar7 = (uint)*pbVar1 - (iVar14 + 2 >> 2);
          iVar14 = iVar14 + iVar7;
          uVar6 = iVar7 * 2 ^ iVar7 >> 0x1f;
          local_678[lVar13] = (uchar)uVar6;
          lVar13 = lVar13 + 1;
          local_6d8[(int)uVar6] = local_6d8[(int)uVar6] + 1;
        } while (lVar12 < iVar5);
      }
      iVar9 = iVar9 + param_3[lVar11 + 1];
      lVar11 = lVar11 + 2;
    } while (lVar11 < param_4);
  }
  lVar11 = 0x3f - param_2->m_inv_bitlen >> 3;
  uVar8 = param_2->m_bits << ((char)param_2->m_inv_bitlen + 1U & 0x3f);
  *(ulonglong *)param_2->m_cur =
       uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
       (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
       (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
  param_2->m_cur = param_2->m_cur + lVar11;
  param_2->m_inv_bitlen = param_2->m_inv_bitlen + lVar11 * 8;
  iVar9 = 1;
  do {
    iVar5 = EntropyOfCountsRice(local_6d8,0x15,iVar10);
    iVar14 = iVar10;
    dVar4 = (double)iVar5;
    if (dVar3 <= (double)iVar5) {
      iVar14 = iVar9;
      dVar4 = dVar3;
    }
    dVar3 = dVar4;
    iVar10 = iVar10 + 1;
    iVar9 = iVar14;
  } while (iVar10 < 4);
  param_2->m_inv_bitlen = param_2->m_inv_bitlen + -2;
  param_2->m_bits = param_2->m_bits << 2 | (longlong)iVar14;
  iVar9 = newLZ_encode_alphabet_shape_runlens_split
                    (local_478,local_178,local_278,iVar15,param_3,param_4);
  param_2->m_inv_bitlen = param_2->m_inv_bitlen + -8;
  param_2->m_bits = (longlong)(iVar15 + -1) | param_2->m_bits << 8;
  newLZ_encode_alphabet_shape_num_EG(param_2,iVar9,iVar15);
  lVar11 = 0x3f - param_2->m_inv_bitlen >> 3;
  uVar8 = param_2->m_bits << ((char)param_2->m_inv_bitlen + 1U & 0x3f);
  *(ulonglong *)param_2->m_cur =
       uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
       (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
       (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
  param_2->m_cur = param_2->m_cur + lVar11;
  param_2->m_inv_bitlen = param_2->m_inv_bitlen + lVar11 * 8;
  lVar11 = (longlong)iVar15;
  newLZ_encode_rice_U8_split(local_578,local_378,local_678,lVar11,iVar14);
  newLZ_encode_unary_block(param_2,local_578,lVar11);
  newLZ_encode_unary_block(param_2,local_478,(longlong)iVar9);
  newLZ_encode_uniform_U8_block(param_2,local_378,lVar11,iVar14);
  newLZ_encode_variable_U8_block(param_2,local_178,local_278,(longlong)iVar9);
  return;
}

// newlz_get_array_huff @ 14f3cfb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

long64 __cdecl
oo2::newlz_get_array_huff(uchar *param_1,long64 param_2,uchar *param_3,long64 param_4,bool param_5)

{
  ulonglong *puVar1;
  ushort *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  ushort *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_26a8 [32];
  _rrVarBits_ local_2688;
  KrakenHuffState local_2668;
  KrakenMSBHuffTab local_15d8;
  uint local_5b8 [24];
  byte local_558 [1280];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_26a8;
  uVar7 = 0;
  puVar2 = (ushort *)(param_1 + param_2);
  uVar9 = uVar7;
  if (0 < param_2) {
    uVar9 = (ulonglong)*param_1;
  }
  puVar1 = (ulonglong *)(param_1 + 1);
  lVar11 = (longlong)puVar2 - (longlong)puVar1;
  if (lVar11 < 8) {
    uVar8 = uVar7;
    if (0 < lVar11) {
      uVar8 = (ulonglong)(byte)*puVar1;
    }
    uVar15 = uVar7;
    if (lVar11 != 1 && -1 < lVar11 + -1) {
      uVar15 = (ulonglong)param_1[2];
    }
    uVar14 = uVar7;
    if (lVar11 != 2 && -1 < lVar11 + -2) {
      uVar14 = (ulonglong)param_1[3];
    }
    uVar6 = uVar7;
    if (lVar11 != 3 && -1 < lVar11 + -3) {
      uVar6 = (ulonglong)param_1[4];
    }
    lVar11 = (longlong)puVar2 - (longlong)(param_1 + 5);
    uVar10 = uVar7;
    if (0 < lVar11) {
      uVar10 = (ulonglong)param_1[5];
    }
    uVar16 = uVar7;
    if (lVar11 != 1 && -1 < lVar11 + -1) {
      uVar16 = (ulonglong)param_1[6];
    }
    if (lVar11 != 2 && -1 < lVar11 + -2) {
      uVar7 = (ulonglong)param_1[7];
    }
    uVar7 = ((((((uVar8 << 8 | uVar15) << 8 | uVar14) << 8 | uVar6) << 8 | uVar10) << 8 | uVar16) <<
             8 | uVar7) << 8;
  }
  else {
    uVar7 = *puVar1;
    uVar7 = (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
            (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
            (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
  }
  local_2688.m_cur = param_1 + 7;
  uVar9 = uVar7 >> 8 | uVar9 << 0x38;
  local_5b8[0] = 0;
  local_5b8[1] = 0;
  local_5b8[0xc] = 0;
  local_5b8[0xd] = 0;
  local_5b8[2] = 2;
  local_5b8[0xe] = 2;
  local_2688.m_bits = uVar9 * 2;
  local_5b8[3] = 6;
  local_5b8[0xf] = 6;
  local_5b8[4] = 0xe;
  local_5b8[0x10] = 0xe;
  local_5b8[5] = 0x1e;
  local_5b8[0x11] = 0x1e;
  local_5b8[6] = 0x3e;
  local_5b8[0x12] = 0x3e;
  local_5b8[7] = 0x7e;
  local_5b8[0x13] = 0x7e;
  local_5b8[8] = 0xfe;
  local_5b8[0x14] = 0xfe;
  local_5b8[9] = 0x1fe;
  local_5b8[0x15] = 0x1fe;
  local_5b8[10] = 0x2fe;
  local_5b8[0x16] = 0x2fe;
  local_5b8[0xb] = 0x3fe;
  local_5b8[0x17] = 0x3fe;
  local_2688.m_inv_bitlen = 8;
  local_2688.m_end = (uchar *)puVar2;
  if ((longlong)uVar9 < 0) {
    local_2688.m_inv_bitlen = 9;
    if ((longlong)local_2688.m_bits < 0) {
      return -1;
    }
    local_2688.m_bits = uVar9 << 2;
    iVar5 = newlz_decode_hufflens2(&local_2688,local_558,local_5b8);
  }
  else {
    iVar5 = newlz_decode_hufflens(&local_2688,local_558,local_5b8);
  }
  if (iVar5 < 1) {
    return -1;
  }
  if (iVar5 == 1) {
    memset(param_3,(uint)local_558[0],param_4);
    return (long64)(local_2688.m_cur +
                   (-(longlong)param_1 -
                   ((longlong)
                    ((0x3f - local_2688.m_inv_bitlen) +
                    (ulonglong)((uint)(0x3f - local_2688.m_inv_bitlen >> 0x3f) & 7)) >> 3)));
  }
  bVar3 = newlz_build_msbfirst_table(local_5b8 + 0xc,local_5b8,&local_15d8,local_558);
  if (!bVar3) {
    return -1;
  }
  puVar12 = (uint *)(local_2688.m_cur +
                    -((longlong)
                      ((0x3f - local_2688.m_inv_bitlen) +
                      (ulonglong)((uint)(0x3f - local_2688.m_inv_bitlen >> 0x3f) & 7)) >> 3));
  local_2668.decodeptr[0] = param_3;
  if (param_5) {
    if ((longlong)puVar2 - (longlong)puVar12 < 6) {
      return -1;
    }
    puVar13 = (ushort *)((longlong)puVar12 + 3);
    if ((longlong)puVar2 - (longlong)puVar13 < (longlong)(ulonglong)(*puVar12 & 0xffffff)) {
      return -1;
    }
    local_2668.bitp[1] = (uchar *)((ulonglong)(*puVar12 & 0xffffff) + (longlong)puVar13);
    local_2668.bitp[0] = (uchar *)((longlong)puVar12 + 5);
    if ((longlong)local_2668.bitp[1] - (longlong)local_2668.bitp[0] <
        (longlong)((ulonglong)*puVar13 + 2)) {
      return -1;
    }
    if ((longlong)puVar2 - (longlong)local_2668.bitp[1] < 3) {
      return -1;
    }
    local_2668.bitp[3] = (uchar *)((longlong)local_2668.bitp[1] + 2);
    if ((longlong)puVar2 - (longlong)local_2668.bitp[3] <
        (longlong)((ulonglong)*(ushort *)local_2668.bitp[1] + 2)) {
      return -1;
    }
    local_2668.decodeend[1] = param_3 + param_4;
    local_2668.strm0_end[0] = (uchar *)((ulonglong)*puVar13 + (longlong)local_2668.bitp[0]);
    local_2668.decodeptr[1] = param_3 + (param_4 + 1 >> 1);
    local_2668.strm0_end[1] =
         (uchar *)((longlong)local_2668.bitp[3] + (ulonglong)*(ushort *)local_2668.bitp[1]);
    local_2668.bitc[0] = 0;
    local_2668.bitc[1] = 0;
    local_2668.bits[0] = 0;
    local_2668.bits[1] = 0;
    local_2668.bitc[2] = 0;
    local_2668.bitc[3] = 0;
    local_2668.bits[2] = 0;
    local_2668.bits[3] = 0;
    local_2668.bitc[4] = 0;
    local_2668.bitc[5] = 0;
    local_2668.bits[4] = 0;
    local_2668.bits[5] = 0;
    local_2668.decodeend[0] = local_2668.decodeptr[1];
    local_2668.bitp[2] = local_2668.strm0_end[0];
    local_2668.bitp[4] = (uchar *)puVar2;
    local_2668.bitp[5] = local_2668.strm0_end[1];
    newLZ_bit_reverse_hufftab(&local_2668.table,&local_15d8);
    if ((g_rrCPUx86_feature_flags >> 9 & 1) == 0) {
      if ((char)g_rrCPUx86_feature_flags < '\0') {
        cVar4 = oodle_newLZ_huff6_x64_bmi2_kern();
        if (cVar4 == '\0') {
          bVar3 = false;
          goto LAB_14f3d00f6;
        }
      }
      else {
        cVar4 = oodle_newLZ_huff6_x64_generic_kern(&local_2668);
        bVar3 = false;
        if (cVar4 == '\0') goto LAB_14f3d00f6;
      }
    }
    else {
      cVar4 = oodle_newLZ_huff6_x64_zen2_kern();
      if (cVar4 == '\0') {
        bVar3 = false;
        goto LAB_14f3d00f6;
      }
    }
  }
  else {
    if ((longlong)puVar2 - (longlong)puVar12 < 3) {
      return -1;
    }
    local_2668.bitp[0] = (uchar *)((longlong)puVar12 + 2);
    if ((longlong)puVar2 - (longlong)local_2668.bitp[0] <
        (longlong)(ulonglong)((ushort)*puVar12 + 2)) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays_huff.cpp",0xcf7,
                   "OODLE ERROR : corruption : (comp_end-comp_start) >= comp_len1 + 2\n");
      }
      ooLogErrorPost();
      return -1;
    }
    local_2668.decodeend[0] = param_3 + param_4;
    local_2668.strm0_end[0] = (uchar *)((longlong)local_2668.bitp[0] + (ulonglong)(ushort)*puVar12);
    local_2668.bitc[0] = 0;
    local_2668.bitc[1] = 0;
    local_2668.bits[0] = 0;
    local_2668.bits[1] = 0;
    local_2668.bitc._8_8_ = (ulonglong)local_2668.bitc[3] << 0x20;
    local_2668.bits._8_8_ = (ulonglong)local_2668.bits[3] << 0x20;
    local_2668.bitp[1] = (uchar *)puVar2;
    local_2668.bitp[2] = local_2668.strm0_end[0];
    newLZ_bit_reverse_hufftab(&local_2668.table,&local_15d8);
    if ((g_rrCPUx86_feature_flags >> 9 & 1) == 0) {
      if ((char)g_rrCPUx86_feature_flags < '\0') {
        cVar4 = oodle_newLZ_huff_x64_bmi2_kern();
        if (cVar4 == '\0') {
          bVar3 = false;
          goto LAB_14f3d00f6;
        }
      }
      else {
        cVar4 = oodle_newLZ_huff_x64_generic_kern(&local_2668);
        if (cVar4 == '\0') {
          bVar3 = false;
          goto LAB_14f3d00f6;
        }
      }
    }
    else {
      cVar4 = oodle_newLZ_huff_x64_zen2_kern();
      if (cVar4 == '\0') {
        bVar3 = false;
        goto LAB_14f3d00f6;
      }
    }
  }
  bVar3 = newlz_huff_precise_finish(&local_2668,&local_2668.table,param_5);
LAB_14f3d00f6:
  if (bVar3 != false) {
    return param_2;
  }
  return -1;
}

// newlz_huff_bitreverse @ 14f3d0120

uint __cdecl oo2::newlz_huff_bitreverse(uint param_1)

{
  return (uint)""[param_1 & 0x3f] << 5 | (uint)""[param_1 >> 5];
}

// newlz_huff_precise_finish @ 14f3d0160

bool __cdecl
oo2::newlz_huff_precise_finish(KrakenHuffState *param_1,KrakenHuffTab *param_2,bool param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool local_res18;
  
  puVar16 = (uint *)param_1->bitp[0];
  puVar15 = (uint *)param_1->bitp[2];
  puVar13 = (uint *)param_1->bitp[1];
  uVar12 = param_1->bits[0];
  uVar17 = param_1->bitc[0];
  uVar18 = param_1->bits[1];
  uVar11 = param_1->bitc[1];
  uVar19 = param_1->bits[2];
  uVar14 = param_1->bitc[2];
  local_res18 = param_3;
  if (puVar16 <= puVar15) {
    do {
      puVar5 = param_1->decodeend[0];
      puVar6 = param_1->decodeptr[0];
      uVar8 = uVar17;
      if ((3 < (longlong)puVar13 - (longlong)puVar15) && (5 < (longlong)puVar5 - (longlong)puVar6))
      {
        puVar13 = puVar13 + -1;
        for (; ((puVar6 < puVar5 + -5 && (puVar16 <= puVar15)) && (puVar15 <= puVar13));
            puVar15 = (uint *)((longlong)puVar15 + (ulonglong)(uVar8 >> 3))) {
          uVar12 = uVar12 | *puVar16 << ((byte)uVar17 & 0x1f);
          puVar16 = (uint *)((longlong)puVar16 + (ulonglong)(0x1f - uVar17 >> 3));
          uVar8 = *puVar13;
          uVar18 = uVar18 | (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                            uVar8 << 0x18) << ((byte)uVar11 & 0x1f);
          puVar13 = (uint *)((longlong)puVar13 - (ulonglong)(0x1f - uVar11 >> 3));
          uVar19 = uVar19 | *puVar15 << ((byte)uVar14 & 0x1f);
          uVar8 = 0x1f - uVar14;
          uVar9 = uVar12 & 0x7ff;
          bVar1 = param_2->e[uVar9].len;
          uVar12 = uVar12 >> (bVar1 & 0x1f);
          uVar10 = uVar18 & 0x7ff;
          *puVar6 = param_2->e[uVar9].sym;
          bVar2 = param_2->e[uVar10].len;
          uVar18 = uVar18 >> (bVar2 & 0x1f);
          uVar9 = uVar19 & 0x7ff;
          puVar6[1] = param_2->e[uVar10].sym;
          bVar3 = param_2->e[uVar9].len;
          uVar19 = uVar19 >> (bVar3 & 0x1f);
          uVar10 = uVar12 & 0x7ff;
          puVar6[2] = param_2->e[uVar9].sym;
          bVar4 = param_2->e[uVar10].len;
          uVar12 = uVar12 >> (bVar4 & 0x1f);
          uVar17 = ((uVar17 | 0x18) - (uint)bVar1) - (uint)bVar4;
          uVar9 = uVar18 & 0x7ff;
          puVar6[3] = param_2->e[uVar10].sym;
          bVar1 = param_2->e[uVar9].len;
          uVar18 = uVar18 >> (bVar1 & 0x1f);
          uVar11 = ((uVar11 | 0x18) - (uint)bVar2) - (uint)bVar1;
          uVar10 = uVar19 & 0x7ff;
          puVar6[4] = param_2->e[uVar9].sym;
          bVar1 = param_2->e[uVar10].len;
          uVar19 = uVar19 >> (bVar1 & 0x1f);
          uVar14 = ((uVar14 | 0x18) - (uint)bVar3) - (uint)bVar1;
          puVar6[5] = param_2->e[uVar10].sym;
          puVar6 = puVar6 + 6;
        }
        uVar8 = uVar17 & 7;
        puVar16 = (uint *)((longlong)puVar16 - (ulonglong)(uVar17 >> 3));
        uVar17 = uVar11 >> 3;
        uVar11 = uVar11 & 7;
        puVar13 = (uint *)((longlong)puVar13 + (ulonglong)uVar17 + 4);
        puVar15 = (uint *)((longlong)puVar15 - (ulonglong)(uVar14 >> 3));
        uVar14 = uVar14 & 7;
      }
      while (bVar20 = puVar6 == puVar5, puVar6 < puVar5) {
        if ((longlong)puVar15 - (longlong)puVar16 < 2) {
          if ((longlong)puVar15 - (longlong)puVar16 == 1) {
            uVar17 = (uint)(byte)*puVar16;
            goto LAB_14f3d0388;
          }
        }
        else {
          uVar17 = (uint)(ushort)*puVar16;
LAB_14f3d0388:
          uVar12 = uVar12 | uVar17 << ((byte)uVar8 & 0x1f);
        }
        uVar17 = uVar12 & 0x7ff;
        bVar1 = param_2->e[uVar17].len;
        uVar8 = uVar8 - bVar1;
        uVar12 = uVar12 >> (bVar1 & 0x1f);
        *puVar6 = param_2->e[uVar17].sym;
        puVar7 = puVar6 + 1;
        puVar16 = (uint *)((longlong)puVar16 + (ulonglong)(7 - uVar8 >> 3));
        uVar8 = uVar8 & 7;
        bVar20 = puVar7 == puVar5;
        if (puVar5 <= puVar7) break;
        if ((longlong)puVar13 - (longlong)puVar15 < 2) {
          if ((longlong)puVar13 - (longlong)puVar15 == 1) {
            uVar18 = uVar18 | (uint)(byte)*puVar15 << ((byte)uVar11 & 0x1f);
            uVar19 = uVar19 | (uint)(byte)*puVar15 << ((byte)uVar14 & 0x1f);
          }
        }
        else {
          uVar18 = uVar18 | (uint)(ushort)(*(ushort *)((longlong)puVar13 + -2) >> 8 |
                                          *(ushort *)((longlong)puVar13 + -2) << 8) <<
                            ((byte)uVar11 & 0x1f);
          uVar19 = uVar19 | (uint)(ushort)*puVar15 << ((byte)uVar14 & 0x1f);
        }
        uVar17 = uVar18 & 0x7ff;
        bVar1 = param_2->e[uVar17].len;
        uVar11 = uVar11 - bVar1;
        uVar18 = uVar18 >> (bVar1 & 0x1f);
        *puVar7 = param_2->e[uVar17].sym;
        puVar7 = puVar6 + 2;
        puVar13 = (uint *)((longlong)puVar13 - (ulonglong)(7 - uVar11 >> 3));
        uVar11 = uVar11 & 7;
        bVar20 = puVar7 == puVar5;
        if (puVar5 <= puVar7) break;
        uVar17 = uVar19 & 0x7ff;
        bVar1 = param_2->e[uVar17].len;
        uVar14 = uVar14 - bVar1;
        uVar19 = uVar19 >> (bVar1 & 0x1f);
        *puVar7 = param_2->e[uVar17].sym;
        puVar6 = puVar6 + 3;
        puVar15 = (uint *)((longlong)puVar15 + (ulonglong)(7 - uVar14 >> 3));
        uVar14 = uVar14 & 7;
        if (puVar15 < puVar16) {
          return false;
        }
        if (puVar13 < puVar15) {
          return false;
        }
      }
      if (!bVar20) {
        return false;
      }
      if (puVar16 != (uint *)param_1->strm0_end[0]) {
        return false;
      }
      if (puVar13 != puVar15) {
        return false;
      }
      if (local_res18 == false) {
        return true;
      }
      param_1->decodeptr[0] = param_1->decodeptr[1];
      param_1->decodeend[0] = param_1->decodeend[1];
      param_1->strm0_end[0] = param_1->strm0_end[1];
      memmove(param_1->bitp,param_1->bitp + 3,0x18);
      memmove(param_1->bits,param_1->bits + 3,0xc);
      memmove(param_1->bitc,param_1->bitc + 3,0xc);
      puVar16 = (uint *)param_1->bitp[0];
      puVar15 = (uint *)param_1->bitp[2];
      puVar13 = (uint *)param_1->bitp[1];
      uVar12 = param_1->bits[0];
      uVar17 = param_1->bitc[0];
      uVar18 = param_1->bits[1];
      uVar11 = param_1->bitc[1];
      uVar19 = param_1->bits[2];
      uVar14 = param_1->bitc[2];
      local_res18 = false;
    } while (puVar16 <= puVar15);
  }
  return false;
}

// newlz_huff_switch_to_second_half @ 14f3d0580

void __cdecl oo2::newlz_huff_switch_to_second_half(KrakenHuffState *param_1)

{
  param_1->decodeptr[0] = param_1->decodeptr[1];
  param_1->decodeend[0] = param_1->decodeend[1];
  param_1->strm0_end[0] = param_1->strm0_end[1];
  memmove(param_1->bitp,param_1->bitp + 3,0x18);
  memmove(param_1->bits,param_1->bits + 3,0xc);
  memmove(param_1->bitc,param_1->bitc + 3,0xc);
  return;
}

// newlz_huff_x64generic @ 14f3d0600

bool __cdecl
oo2::newlz_huff_x64generic(KrakenHuffState *param_1,KrakenMSBHuffTab *param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  
  newLZ_bit_reverse_hufftab(&param_1->table,param_2);
  if (param_3) {
    if ((g_rrCPUx86_feature_flags >> 9 & 1) == 0) {
      if ((char)g_rrCPUx86_feature_flags < '\0') {
        cVar1 = oodle_newLZ_huff6_x64_bmi2_kern();
      }
      else {
        cVar1 = oodle_newLZ_huff6_x64_generic_kern();
      }
    }
    else {
      cVar1 = oodle_newLZ_huff6_x64_zen2_kern();
    }
  }
  else if ((g_rrCPUx86_feature_flags >> 9 & 1) == 0) {
    if ((char)g_rrCPUx86_feature_flags < '\0') {
      cVar1 = oodle_newLZ_huff_x64_bmi2_kern();
    }
    else {
      cVar1 = oodle_newLZ_huff_x64_generic_kern(param_1);
    }
  }
  else {
    cVar1 = oodle_newLZ_huff_x64_zen2_kern();
  }
  if (cVar1 == '\0') {
    return false;
  }
  bVar2 = newlz_huff_precise_finish(param_1,&param_1->table,param_3);
  return bVar2;
}

// newlz_identify_alphabet_runs_sse2 @ 14f3d06c0

int __cdecl oo2::newlz_identify_alphabet_runs_sse2(rrHuffman *param_1,int *param_2,int param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  int iVar4;
  ushort uVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  uchar *puVar13;
  uchar *puVar14;
  uchar *puVar15;
  uchar *puVar16;
  uchar *puVar17;
  uchar *puVar18;
  uchar *puVar19;
  uchar *puVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  int *piVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  puVar3 = param_1->codeLenTable;
  iVar21 = 0;
  lVar24 = (longlong)param_3;
  auVar27[0] = -('\0' < (char)*puVar3);
  auVar27[1] = -('\0' < (char)puVar3[1]);
  auVar27[2] = -('\0' < (char)puVar3[2]);
  auVar27[3] = -('\0' < (char)puVar3[3]);
  auVar27[4] = -('\0' < (char)puVar3[4]);
  auVar27[5] = -('\0' < (char)puVar3[5]);
  auVar27[6] = -('\0' < (char)puVar3[6]);
  auVar27[7] = -('\0' < (char)puVar3[7]);
  auVar27[8] = -('\0' < (char)puVar3[8]);
  auVar27[9] = -('\0' < (char)puVar3[9]);
  auVar27[10] = -('\0' < (char)puVar3[10]);
  auVar27[0xb] = -('\0' < (char)puVar3[0xb]);
  auVar27[0xc] = -('\0' < (char)puVar3[0xc]);
  auVar27[0xd] = -('\0' < (char)puVar3[0xd]);
  auVar27[0xe] = -('\0' < (char)puVar3[0xe]);
  auVar27[0xf] = -('\0' < (char)puVar3[0xf]);
  uVar5 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
  puVar2 = puVar3;
  while (uVar5 == 0) {
    puVar1 = puVar2 + 0x10;
    puVar6 = puVar2 + 0x11;
    puVar7 = puVar2 + 0x12;
    puVar8 = puVar2 + 0x13;
    puVar9 = puVar2 + 0x14;
    puVar10 = puVar2 + 0x15;
    puVar11 = puVar2 + 0x16;
    puVar12 = puVar2 + 0x17;
    puVar13 = puVar2 + 0x18;
    puVar14 = puVar2 + 0x19;
    puVar15 = puVar2 + 0x1a;
    puVar16 = puVar2 + 0x1b;
    puVar17 = puVar2 + 0x1c;
    puVar18 = puVar2 + 0x1d;
    puVar19 = puVar2 + 0x1e;
    puVar20 = puVar2 + 0x1f;
    puVar2 = puVar2 + 0x10;
    iVar21 = iVar21 + 0x10;
    auVar28[0] = -('\0' < (char)*puVar1);
    auVar28[1] = -('\0' < (char)*puVar6);
    auVar28[2] = -('\0' < (char)*puVar7);
    auVar28[3] = -('\0' < (char)*puVar8);
    auVar28[4] = -('\0' < (char)*puVar9);
    auVar28[5] = -('\0' < (char)*puVar10);
    auVar28[6] = -('\0' < (char)*puVar11);
    auVar28[7] = -('\0' < (char)*puVar12);
    auVar28[8] = -('\0' < (char)*puVar13);
    auVar28[9] = -('\0' < (char)*puVar14);
    auVar28[10] = -('\0' < (char)*puVar15);
    auVar28[0xb] = -('\0' < (char)*puVar16);
    auVar28[0xc] = -('\0' < (char)*puVar17);
    auVar28[0xd] = -('\0' < (char)*puVar18);
    auVar28[0xe] = -('\0' < (char)*puVar19);
    auVar28[0xf] = -('\0' < (char)*puVar20);
    uVar5 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
  }
  iVar22 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> iVar22 & 1) == 0; iVar22 = iVar22 + 1) {
    }
  }
  iVar25 = 1;
  iVar21 = iVar21 + iVar22;
  *param_2 = iVar21;
  if (iVar21 < param_3) {
    piVar26 = param_2 + 1;
    do {
      lVar23 = (longlong)iVar21;
      iVar22 = iVar21;
      if (lVar23 < lVar24) {
LAB_14f3d0740:
        puVar2 = puVar3 + lVar23;
        auVar29[0] = -(*puVar2 == '\0');
        auVar29[1] = -(puVar2[1] == '\0');
        auVar29[2] = -(puVar2[2] == '\0');
        auVar29[3] = -(puVar2[3] == '\0');
        auVar29[4] = -(puVar2[4] == '\0');
        auVar29[5] = -(puVar2[5] == '\0');
        auVar29[6] = -(puVar2[6] == '\0');
        auVar29[7] = -(puVar2[7] == '\0');
        auVar29[8] = -(puVar2[8] == '\0');
        auVar29[9] = -(puVar2[9] == '\0');
        auVar29[10] = -(puVar2[10] == '\0');
        auVar29[0xb] = -(puVar2[0xb] == '\0');
        auVar29[0xc] = -(puVar2[0xc] == '\0');
        auVar29[0xd] = -(puVar2[0xd] == '\0');
        auVar29[0xe] = -(puVar2[0xe] == '\0');
        auVar29[0xf] = -(puVar2[0xf] == '\0');
        uVar5 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
        if (uVar5 == 0) goto code_r0x00014f3d0754;
        iVar4 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
          }
        }
        iVar22 = iVar22 + iVar4;
      }
LAB_14f3d076d:
      iVar4 = param_3;
      if (iVar22 < param_3) {
        iVar4 = iVar22;
      }
      *piVar26 = iVar4 - iVar21;
      lVar23 = (longlong)iVar4;
      iVar22 = iVar4;
      if (lVar23 < lVar24) {
LAB_14f3d0790:
        puVar2 = puVar3 + lVar23;
        auVar30[0] = -('\0' < (char)*puVar2);
        auVar30[1] = -('\0' < (char)puVar2[1]);
        auVar30[2] = -('\0' < (char)puVar2[2]);
        auVar30[3] = -('\0' < (char)puVar2[3]);
        auVar30[4] = -('\0' < (char)puVar2[4]);
        auVar30[5] = -('\0' < (char)puVar2[5]);
        auVar30[6] = -('\0' < (char)puVar2[6]);
        auVar30[7] = -('\0' < (char)puVar2[7]);
        auVar30[8] = -('\0' < (char)puVar2[8]);
        auVar30[9] = -('\0' < (char)puVar2[9]);
        auVar30[10] = -('\0' < (char)puVar2[10]);
        auVar30[0xb] = -('\0' < (char)puVar2[0xb]);
        auVar30[0xc] = -('\0' < (char)puVar2[0xc]);
        auVar30[0xd] = -('\0' < (char)puVar2[0xd]);
        auVar30[0xe] = -('\0' < (char)puVar2[0xe]);
        auVar30[0xf] = -('\0' < (char)puVar2[0xf]);
        uVar5 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
        if (uVar5 == 0) goto code_r0x00014f3d07a5;
        iVar21 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> iVar21 & 1) == 0; iVar21 = iVar21 + 1) {
          }
        }
        iVar22 = iVar22 + iVar21;
      }
LAB_14f3d07b9:
      iVar21 = param_3;
      if (iVar22 < param_3) {
        iVar21 = iVar22;
      }
      iVar25 = iVar25 + 2;
      piVar26[1] = iVar21 - iVar4;
      piVar26 = piVar26 + 2;
    } while (iVar21 < param_3);
  }
  return iVar25;
code_r0x00014f3d0754:
  iVar22 = iVar22 + 0x10;
  lVar23 = lVar23 + 0x10;
  if (lVar24 <= lVar23) goto LAB_14f3d076d;
  goto LAB_14f3d0740;
code_r0x00014f3d07a5:
  iVar22 = iVar22 + 0x10;
  lVar23 = lVar23 + 0x10;
  if (lVar24 <= lVar23) goto LAB_14f3d07b9;
  goto LAB_14f3d0790;
}

// rrAlignDown64 @ 14f3d07f0

ulong64 __cdecl oo2::rrAlignDown64(ulong64 param_1,long64 param_2)

{
  return ~(param_2 - 1U) & param_1;
}

// rrAlignDownA @ 14f3d0810

ulong64 __cdecl oo2::rrAlignDownA(ulong64 param_1,long64 param_2)

{
  return ~(param_2 - 1U) & param_1;
}

// rrAlignUp64 @ 14f3d0830

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3d0850

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrCPUx86_feature_present @ 14f3d0870

int __cdecl oo2::rrCPUx86_feature_present(uint param_1)

{
  return g_rrCPUx86_feature_flags & param_1;
}

// rrClz32 @ 14f3d0880

uint __cdecl oo2::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrClz64 @ 14f3d08a0

uint __cdecl oo2::rrClz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return 0x3f - (int)lVar1;
}

// rrCtz32 @ 14f3d08c0

uint __cdecl oo2::rrCtz32(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1;
}

// rrFoldUpNegatives @ 14f3d08d0

uint __cdecl oo2::rrFoldUpNegatives(int param_1)

{
  return param_1 >> 0x1f ^ param_1 * 2;
}

// rrPrintfKill @ 14f3d08e0

void __cdecl oo2::rrPrintfKill(char *param_1)

{
  return;
}

// rrPrintf_nop @ 14f3d0900

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff @ 14f3d0910

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrUnfoldNegatives @ 14f3d0920

int __cdecl oo2::rrUnfoldNegatives(uint param_1)

{
  return -(param_1 & 1) ^ param_1 >> 1;
}

// rrVB_Get32BE_Masked @ 14f3d0940

uint __cdecl oo2::rrVB_Get32BE_Masked(uchar *param_1,uchar *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  uVar3 = 0;
  if (lVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*param_1;
  }
  if (lVar1 == 1 || lVar1 + -1 < 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)param_1[1];
  }
  if (lVar1 == 2 || lVar1 + -2 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)param_1[2];
  }
  if (lVar1 != 3 && -1 < lVar1 + -3) {
    uVar3 = (uint)param_1[3];
  }
  return ((uVar2 << 8 | uVar5) << 8 | uVar4) << 8 | uVar3;
}

// rrVB_Get64BE_Masked @ 14f3d09c0

ulong64 __cdecl oo2::rrVB_Get64BE_Masked(uchar *param_1,uchar *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = 0;
  lVar6 = (longlong)param_2 - (longlong)param_1;
  uVar4 = uVar5;
  if (0 < lVar6) {
    uVar4 = (ulonglong)*param_1;
  }
  uVar2 = uVar5;
  if (lVar6 != 1 && -1 < lVar6 + -1) {
    uVar2 = (ulonglong)param_1[1];
  }
  uVar8 = uVar5;
  if (lVar6 != 2 && -1 < lVar6 + -2) {
    uVar8 = (ulonglong)param_1[2];
  }
  uVar1 = uVar5;
  if (lVar6 != 3 && -1 < lVar6 + -3) {
    uVar1 = (ulonglong)param_1[3];
  }
  lVar6 = (longlong)param_2 - (longlong)(param_1 + 4);
  uVar3 = uVar5;
  if (0 < lVar6) {
    uVar3 = (ulonglong)param_1[4];
  }
  uVar9 = uVar5;
  if (lVar6 != 1 && -1 < lVar6 + -1) {
    uVar9 = (ulonglong)param_1[5];
  }
  uVar7 = uVar5;
  if (lVar6 != 2 && -1 < lVar6 + -2) {
    uVar7 = (ulonglong)param_1[6];
  }
  if (lVar6 != 3 && -1 < lVar6 + -3) {
    uVar5 = (ulonglong)param_1[7];
  }
  return ((((((uVar4 << 8 | uVar2) << 8 | uVar8) << 8 | uVar1) << 8 | uVar3) << 8 | uVar9) << 8 |
         uVar7) << 8 | uVar5;
}

// simd_prefix_sum_u8 @ 14f3d0aa0

/* WARNING: Removing unreachable block (ram,0x00014f3d0acb) */
/* WARNING: Removing unreachable block (ram,0x00014f3d0abe) */
/* WARNING: Removing unreachable block (ram,0x00014f3d0ab1) */
/* WARNING: Removing unreachable block (ram,0x00014f3d0aa4) */

__m128i * __cdecl oo2::simd_prefix_sum_u8(__m128i *__return_storage_ptr__,__m128i *param_1)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// speedfit_huff_time @ 14f3d0ae0

float __cdecl
oo2::speedfit_huff_time
          (OodleSpeedFit *param_1,int param_2,long64 param_3,long64 param_4,long64 param_5,
          float param_6)

{
  float fVar1;
  
  if (param_2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00014f3d0b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (*param_1->huff3)(param_3,param_4,param_5,param_6);
    return fVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f3d0b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (*param_1->huff6)(param_3,param_4,param_5,param_6);
  return fVar1;
}

// dtor$0 @ 1502854e0

void `oo2::newLZ_put_array_huff3streams'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x80));
  return;
}

