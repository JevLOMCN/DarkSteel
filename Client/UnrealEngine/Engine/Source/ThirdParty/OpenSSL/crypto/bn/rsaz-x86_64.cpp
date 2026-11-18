// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 17

// rsaz_512_sqr @ 140e5bf80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_sqr(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  unkint9 Var13;
  unkint9 Var14;
  unkint9 Var15;
  unkint9 Var16;
  unkint9 Var17;
  ulonglong uVar18;
  unkint9 Var19;
  unkint9 Var20;
  unkint9 Var21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  ulonglong uVar94;
  ulonglong uVar95;
  ulonglong uVar96;
  ulonglong uVar97;
  ulonglong uVar98;
  ulonglong uVar99;
  
  uVar95 = *param_2;
  uVar97 = param_2[1];
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    do {
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar95;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = uVar97;
      uVar96 = SUB168(auVar22 * auVar58,0);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar95;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = param_2[2];
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar95;
      auVar60._8_8_ = 0;
      auVar60._0_8_ = param_2[3];
      Var13 = (unkuint9)SUB168(auVar22 * auVar58,8) + (unkuint9)SUB168(auVar23 * auVar59,0) +
              (unkuint9)0;
      uVar1 = (ulonglong)Var13;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar95;
      auVar61._8_8_ = 0;
      auVar61._0_8_ = param_2[4];
      Var13 = (unkuint9)SUB168(auVar23 * auVar59,8) + (unkuint9)SUB168(auVar24 * auVar60,0) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar95;
      auVar62._8_8_ = 0;
      auVar62._0_8_ = param_2[5];
      Var14 = (unkuint9)SUB168(auVar24 * auVar60,8) + (unkuint9)SUB168(auVar25 * auVar61,0) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar95;
      auVar63._8_8_ = 0;
      auVar63._0_8_ = param_2[6];
      Var15 = (unkuint9)SUB168(auVar25 * auVar61,8) + (unkuint9)SUB168(auVar26 * auVar62,0) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar18 = (ulonglong)Var15;
      Var15 = (unkuint9)SUB168(auVar26 * auVar62,8) + (unkuint9)SUB168(auVar27 * auVar63,0) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar95;
      auVar64._8_8_ = 0;
      auVar64._0_8_ = param_2[7];
      Var16 = (unkuint9)SUB168(auVar27 * auVar63,8) + (unkuint9)SUB168(auVar28 * auVar64,0) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar95;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = uVar95;
      uVar94 = SUB168(auVar29 * auVar65,0);
      Var19 = (unkuint9)uVar96 + (unkuint9)uVar96 + (unkuint9)0;
      Var17 = (unkuint9)(ulonglong)Var19 + (unkuint9)SUB168(auVar29 * auVar65,8) + (unkuint9)0;
      uVar96 = (ulonglong)Var17;
      Var19 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      Var17 = (unkuint9)(ulonglong)Var19 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar97;
      auVar66._8_8_ = 0;
      auVar66._0_8_ = param_2[2];
      Var19 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar30 * auVar66,0) +
              (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      uVar98 = (ulonglong)Var19;
      Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar30 * auVar66,8) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar97;
      auVar67._8_8_ = 0;
      auVar67._0_8_ = param_2[3];
      Var14 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar31 * auVar67,0) +
              (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      uVar2 = (ulonglong)Var14;
      writeToShadowStack(SUB168(auVar31 * auVar67,8),uVar18);
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar97;
      auVar68._8_8_ = 0;
      auVar68._0_8_ = param_2[4];
      Var19 = (unkuint9)uVar18 + (unkuint9)SUB168(auVar32 * auVar68,0) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      Var13 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar32 * auVar68,8) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar97;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = param_2[5];
      Var15 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar33 * auVar69,0) +
              (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      Var13 = (unkuint9)(ulonglong)Var16 + (unkuint9)SUB168(auVar33 * auVar69,8) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar97;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = param_2[6];
      Var20 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar34 * auVar70,0) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      Var13 = (unkuint9)
              (SUB168(auVar28 * auVar64,8) + (ulonglong)((char)((unkuint9)Var16 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar34 * auVar70,8) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar97;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = param_2[7];
      Var16 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar35 * auVar71,0) +
              (unkuint9)((char)((unkuint9)Var20 >> 0x40) != '\0');
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar97;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = uVar97;
      uVar95 = param_2[2];
      Var21 = (unkuint9)uVar1 + (unkuint9)uVar1 + (unkuint9)0;
      Var14 = (unkuint9)SUB168(auVar36 * auVar72,0) + (unkuint9)(ulonglong)Var17 + (unkuint9)0;
      Var17 = (unkuint9)uVar98 + (unkuint9)uVar98 +
              (unkuint9)((char)((unkuint9)Var21 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var21 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar98 = (ulonglong)Var14;
      Var21 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var17 + (unkuint9)SUB168(auVar36 * auVar72,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar99 = (ulonglong)Var14;
      Var14 = (unkuint9)(ulonglong)Var21 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar95;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = param_2[3];
      Var17 = (unkuint9)(ulonglong)Var19 + (unkuint9)SUB168(auVar37 * auVar73,0) +
              (unkuint9)((char)((unkuint9)Var21 >> 0x40) != '\0');
      uVar97 = (ulonglong)Var17;
      Var15 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar37 * auVar73,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar95;
      auVar74._8_8_ = 0;
      auVar74._0_8_ = param_2[4];
      Var17 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar38 * auVar74,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      uVar1 = (ulonglong)Var17;
      Var15 = (unkuint9)(ulonglong)Var20 + (unkuint9)SUB168(auVar38 * auVar74,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar95;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = param_2[5];
      Var17 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar39 * auVar75,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      Var15 = (unkuint9)(ulonglong)Var16 + (unkuint9)SUB168(auVar39 * auVar75,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar95;
      auVar76._8_8_ = 0;
      auVar76._0_8_ = param_2[6];
      Var19 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar40 * auVar76,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      Var13 = (unkuint9)
              (SUB168(auVar35 * auVar71,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var16 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar40 * auVar76,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar95;
      auVar77._8_8_ = 0;
      auVar77._0_8_ = param_2[7];
      Var16 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar41 * auVar77,0) +
              (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar95;
      auVar78._8_8_ = 0;
      auVar78._0_8_ = uVar95;
      uVar95 = param_2[3];
      Var15 = (unkuint9)uVar2 + (unkuint9)uVar2 + (unkuint9)0;
      Var14 = (unkuint9)SUB168(auVar42 * auVar78,0) + (unkuint9)(ulonglong)Var14 + (unkuint9)0;
      Var20 = (unkuint9)uVar97 + (unkuint9)uVar97 +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var15 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar2 = (ulonglong)Var14;
      Var15 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var20 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var20 + (unkuint9)SUB168(auVar42 * auVar78,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar3 = (ulonglong)Var14;
      Var14 = (unkuint9)(ulonglong)Var15 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar95;
      auVar79._8_8_ = 0;
      auVar79._0_8_ = param_2[4];
      Var17 = (unkuint9)(ulonglong)Var17 + (unkuint9)SUB168(auVar43 * auVar79,0) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      uVar97 = (ulonglong)Var17;
      Var15 = (unkuint9)(ulonglong)Var19 + (unkuint9)SUB168(auVar43 * auVar79,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar44._8_8_ = 0;
      auVar44._0_8_ = uVar95;
      auVar80._8_8_ = 0;
      auVar80._0_8_ = param_2[5];
      Var17 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar44 * auVar80,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      uVar18 = (ulonglong)Var17;
      Var15 = (unkuint9)(ulonglong)Var16 + (unkuint9)SUB168(auVar44 * auVar80,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar45._8_8_ = 0;
      auVar45._0_8_ = uVar95;
      auVar81._8_8_ = 0;
      auVar81._0_8_ = param_2[6];
      Var17 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar45 * auVar81,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      Var13 = (unkuint9)
              (SUB168(auVar41 * auVar77,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var16 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar45 * auVar81,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar46._8_8_ = 0;
      auVar46._0_8_ = uVar95;
      auVar82._8_8_ = 0;
      auVar82._0_8_ = param_2[7];
      Var16 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar46 * auVar82,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      auVar47._8_8_ = 0;
      auVar47._0_8_ = uVar95;
      auVar83._8_8_ = 0;
      auVar83._0_8_ = uVar95;
      uVar95 = param_2[4];
      Var15 = (unkuint9)uVar1 + (unkuint9)uVar1 + (unkuint9)0;
      Var14 = (unkuint9)SUB168(auVar47 * auVar83,0) + (unkuint9)(ulonglong)Var14 + (unkuint9)0;
      Var19 = (unkuint9)uVar97 + (unkuint9)uVar97 +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var15 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar4 = (ulonglong)Var14;
      Var15 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var19 + (unkuint9)SUB168(auVar47 * auVar83,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar5 = (ulonglong)Var14;
      Var14 = (unkuint9)(ulonglong)Var15 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar48._8_8_ = 0;
      auVar48._0_8_ = uVar95;
      auVar84._8_8_ = 0;
      auVar84._0_8_ = param_2[5];
      Var17 = (unkuint9)(ulonglong)Var17 + (unkuint9)SUB168(auVar48 * auVar84,0) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      uVar97 = (ulonglong)Var17;
      Var15 = (unkuint9)(ulonglong)Var16 + (unkuint9)SUB168(auVar48 * auVar84,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar49._8_8_ = 0;
      auVar49._0_8_ = uVar95;
      auVar85._8_8_ = 0;
      auVar85._0_8_ = param_2[6];
      Var17 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar49 * auVar85,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      uVar1 = (ulonglong)Var17;
      Var13 = (unkuint9)
              (SUB168(auVar46 * auVar82,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var16 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar49 * auVar85,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar50._8_8_ = 0;
      auVar50._0_8_ = uVar95;
      auVar86._8_8_ = 0;
      auVar86._0_8_ = param_2[7];
      Var15 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar50 * auVar86,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      auVar51._8_8_ = 0;
      auVar51._0_8_ = uVar95;
      auVar87._8_8_ = 0;
      auVar87._0_8_ = uVar95;
      uVar95 = param_2[5];
      Var16 = (unkuint9)uVar18 + (unkuint9)uVar18 + (unkuint9)0;
      Var14 = (unkuint9)SUB168(auVar51 * auVar87,0) + (unkuint9)(ulonglong)Var14 + (unkuint9)0;
      Var17 = (unkuint9)uVar97 + (unkuint9)uVar97 +
              (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var16 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar97 = (ulonglong)Var14;
      Var16 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var17 + (unkuint9)SUB168(auVar51 * auVar87,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar6 = (ulonglong)Var14;
      Var14 = (unkuint9)(ulonglong)Var16 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar52._8_8_ = 0;
      auVar52._0_8_ = uVar95;
      auVar88._8_8_ = 0;
      auVar88._0_8_ = param_2[6];
      Var16 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar52 * auVar88,0) +
              (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
      uVar18 = (ulonglong)Var16;
      Var13 = (unkuint9)
              (SUB168(auVar50 * auVar86,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var15 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar52 * auVar88,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar95;
      auVar89._8_8_ = 0;
      auVar89._0_8_ = param_2[7];
      Var15 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar53 * auVar89,0) +
              (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
      uVar9 = (ulonglong)Var15;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = uVar95;
      auVar90._8_8_ = 0;
      auVar90._0_8_ = uVar95;
      uVar95 = param_2[6];
      Var16 = (unkuint9)uVar1 + (unkuint9)uVar1 + (unkuint9)0;
      Var14 = (unkuint9)SUB168(auVar54 * auVar90,0) + (unkuint9)(ulonglong)Var14 + (unkuint9)0;
      Var17 = (unkuint9)uVar18 + (unkuint9)uVar18 +
              (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var16 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar7 = (ulonglong)Var14;
      Var14 = (unkuint9)(ulonglong)Var17 + (unkuint9)SUB168(auVar54 * auVar90,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar8 = (ulonglong)Var14;
      Var16 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      auVar55._8_8_ = 0;
      auVar55._0_8_ = uVar95;
      auVar91._8_8_ = 0;
      auVar91._0_8_ = param_2[7];
      Var13 = (unkuint9)
              (SUB168(auVar53 * auVar89,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var15 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar55 * auVar91,0) +
              (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
      uVar1 = (ulonglong)Var13;
      uVar18 = SUB168(auVar55 * auVar91,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar95;
      auVar92._8_8_ = 0;
      auVar92._0_8_ = uVar95;
      Var15 = (unkuint9)uVar9 + (unkuint9)uVar9 + (unkuint9)0;
      Var13 = (unkuint9)SUB168(auVar56 * auVar92,0) +
              (unkuint9)((longlong)Var16 + (ulonglong)((char)((unkuint9)Var14 >> 0x40) != '\0')) +
              (unkuint9)0;
      Var14 = (unkuint9)uVar1 + (unkuint9)uVar1 +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      Var13 = (unkuint9)(ulonglong)Var15 + (unkuint9)(ulonglong)Var13 +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      uVar9 = (ulonglong)Var13;
      Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar56 * auVar92,8) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      uVar10 = (ulonglong)Var13;
      uVar95 = (ulonglong)((char)((unkuint9)Var14 >> 0x40) != '\0') +
               (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar57._8_8_ = 0;
      auVar57._0_8_ = param_2[7];
      auVar93._8_8_ = 0;
      auVar93._0_8_ = param_2[7];
      Var14 = (unkuint9)uVar18 + (unkuint9)uVar18 + (unkuint9)0;
      Var13 = (unkuint9)SUB168(auVar57 * auVar93,0) + (unkuint9)uVar95 + (unkuint9)0;
      Var13 = (unkuint9)(ulonglong)Var13 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      uVar11 = (ulonglong)Var13;
      uVar12 = (ulonglong)((char)((unkuint9)Var14 >> 0x40) != '\0') + SUB168(auVar57 * auVar93,8) +
               (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
      __rsaz_512_reducex(uVar95,param_4);
      uVar95 = uVar94 + uVar97;
      uVar1 = (ulonglong)CARRY8(uVar94,uVar97);
      uVar18 = uVar96 + uVar6;
      uVar97 = uVar18 + uVar1;
      __rsaz_512_subtract(-(ulonglong)
                           (CARRY8(uVar5,uVar12) ||
                           CARRY8(uVar5 + uVar12,
                                  (ulonglong)
                                  (CARRY8(uVar4,uVar11) ||
                                  CARRY8(uVar4 + uVar11,
                                         (ulonglong)
                                         (CARRY8(uVar3,uVar10) ||
                                         CARRY8(uVar3 + uVar10,
                                                (ulonglong)
                                                (CARRY8(uVar2,uVar9) ||
                                                CARRY8(uVar2 + uVar9,
                                                       (ulonglong)
                                                       (CARRY8(uVar99,uVar8) ||
                                                       CARRY8(uVar99 + uVar8,
                                                              (ulonglong)
                                                              (CARRY8(uVar98,uVar7) ||
                                                              CARRY8(uVar98 + uVar7,
                                                                     (ulonglong)
                                                                     (CARRY8(uVar96,uVar6) ||
                                                                     CARRY8(uVar18,uVar1))))))))))))
                                 )));
      param_5 = param_5 + -1;
      param_2 = param_1;
    } while (param_5 != 0);
  }
  else {
    do {
      __rsaz_512_reduce();
      __rsaz_512_subtract();
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

// L$SEH_begin_rsaz_512_sqr @ 140e5bf8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_rsaz_512_sqr
               (ulonglong *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
               int param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  unkint9 Var13;
  unkint9 Var14;
  unkint9 Var15;
  unkint9 Var16;
  unkint9 Var17;
  ulonglong uVar18;
  unkint9 Var19;
  unkint9 Var20;
  unkint9 Var21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  ulonglong uVar94;
  ulonglong uVar95;
  ulonglong uVar96;
  ulonglong uVar97;
  ulonglong uVar98;
  ulonglong uVar99;
  
  uVar95 = *param_2;
  uVar97 = param_2[1];
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    do {
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar95;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = uVar97;
      uVar96 = SUB168(auVar22 * auVar58,0);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar95;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = param_2[2];
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar95;
      auVar60._8_8_ = 0;
      auVar60._0_8_ = param_2[3];
      Var13 = (unkuint9)SUB168(auVar22 * auVar58,8) + (unkuint9)SUB168(auVar23 * auVar59,0) +
              (unkuint9)0;
      uVar1 = (ulonglong)Var13;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar95;
      auVar61._8_8_ = 0;
      auVar61._0_8_ = param_2[4];
      Var13 = (unkuint9)SUB168(auVar23 * auVar59,8) + (unkuint9)SUB168(auVar24 * auVar60,0) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar95;
      auVar62._8_8_ = 0;
      auVar62._0_8_ = param_2[5];
      Var14 = (unkuint9)SUB168(auVar24 * auVar60,8) + (unkuint9)SUB168(auVar25 * auVar61,0) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar95;
      auVar63._8_8_ = 0;
      auVar63._0_8_ = param_2[6];
      Var15 = (unkuint9)SUB168(auVar25 * auVar61,8) + (unkuint9)SUB168(auVar26 * auVar62,0) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar18 = (ulonglong)Var15;
      Var15 = (unkuint9)SUB168(auVar26 * auVar62,8) + (unkuint9)SUB168(auVar27 * auVar63,0) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar95;
      auVar64._8_8_ = 0;
      auVar64._0_8_ = param_2[7];
      Var16 = (unkuint9)SUB168(auVar27 * auVar63,8) + (unkuint9)SUB168(auVar28 * auVar64,0) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar95;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = uVar95;
      uVar94 = SUB168(auVar29 * auVar65,0);
      Var19 = (unkuint9)uVar96 + (unkuint9)uVar96 + (unkuint9)0;
      Var17 = (unkuint9)(ulonglong)Var19 + (unkuint9)SUB168(auVar29 * auVar65,8) + (unkuint9)0;
      uVar96 = (ulonglong)Var17;
      Var19 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      Var17 = (unkuint9)(ulonglong)Var19 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar97;
      auVar66._8_8_ = 0;
      auVar66._0_8_ = param_2[2];
      Var19 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar30 * auVar66,0) +
              (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      uVar98 = (ulonglong)Var19;
      Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar30 * auVar66,8) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar97;
      auVar67._8_8_ = 0;
      auVar67._0_8_ = param_2[3];
      Var14 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar31 * auVar67,0) +
              (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      uVar2 = (ulonglong)Var14;
      writeToShadowStack(SUB168(auVar31 * auVar67,8),uVar18);
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar97;
      auVar68._8_8_ = 0;
      auVar68._0_8_ = param_2[4];
      Var19 = (unkuint9)uVar18 + (unkuint9)SUB168(auVar32 * auVar68,0) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      Var13 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar32 * auVar68,8) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar97;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = param_2[5];
      Var15 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar33 * auVar69,0) +
              (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      Var13 = (unkuint9)(ulonglong)Var16 + (unkuint9)SUB168(auVar33 * auVar69,8) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar97;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = param_2[6];
      Var20 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar34 * auVar70,0) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      Var13 = (unkuint9)
              (SUB168(auVar28 * auVar64,8) + (ulonglong)((char)((unkuint9)Var16 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar34 * auVar70,8) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar97;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = param_2[7];
      Var16 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar35 * auVar71,0) +
              (unkuint9)((char)((unkuint9)Var20 >> 0x40) != '\0');
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar97;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = uVar97;
      uVar95 = param_2[2];
      Var21 = (unkuint9)uVar1 + (unkuint9)uVar1 + (unkuint9)0;
      Var14 = (unkuint9)SUB168(auVar36 * auVar72,0) + (unkuint9)(ulonglong)Var17 + (unkuint9)0;
      Var17 = (unkuint9)uVar98 + (unkuint9)uVar98 +
              (unkuint9)((char)((unkuint9)Var21 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var21 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar98 = (ulonglong)Var14;
      Var21 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var17 + (unkuint9)SUB168(auVar36 * auVar72,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar99 = (ulonglong)Var14;
      Var14 = (unkuint9)(ulonglong)Var21 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar95;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = param_2[3];
      Var17 = (unkuint9)(ulonglong)Var19 + (unkuint9)SUB168(auVar37 * auVar73,0) +
              (unkuint9)((char)((unkuint9)Var21 >> 0x40) != '\0');
      uVar97 = (ulonglong)Var17;
      Var15 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar37 * auVar73,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar95;
      auVar74._8_8_ = 0;
      auVar74._0_8_ = param_2[4];
      Var17 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar38 * auVar74,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      uVar1 = (ulonglong)Var17;
      Var15 = (unkuint9)(ulonglong)Var20 + (unkuint9)SUB168(auVar38 * auVar74,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar95;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = param_2[5];
      Var17 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar39 * auVar75,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      Var15 = (unkuint9)(ulonglong)Var16 + (unkuint9)SUB168(auVar39 * auVar75,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar95;
      auVar76._8_8_ = 0;
      auVar76._0_8_ = param_2[6];
      Var19 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar40 * auVar76,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      Var13 = (unkuint9)
              (SUB168(auVar35 * auVar71,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var16 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar40 * auVar76,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar95;
      auVar77._8_8_ = 0;
      auVar77._0_8_ = param_2[7];
      Var16 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar41 * auVar77,0) +
              (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar95;
      auVar78._8_8_ = 0;
      auVar78._0_8_ = uVar95;
      uVar95 = param_2[3];
      Var15 = (unkuint9)uVar2 + (unkuint9)uVar2 + (unkuint9)0;
      Var14 = (unkuint9)SUB168(auVar42 * auVar78,0) + (unkuint9)(ulonglong)Var14 + (unkuint9)0;
      Var20 = (unkuint9)uVar97 + (unkuint9)uVar97 +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var15 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar2 = (ulonglong)Var14;
      Var15 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var20 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var20 + (unkuint9)SUB168(auVar42 * auVar78,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar3 = (ulonglong)Var14;
      Var14 = (unkuint9)(ulonglong)Var15 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar95;
      auVar79._8_8_ = 0;
      auVar79._0_8_ = param_2[4];
      Var17 = (unkuint9)(ulonglong)Var17 + (unkuint9)SUB168(auVar43 * auVar79,0) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      uVar97 = (ulonglong)Var17;
      Var15 = (unkuint9)(ulonglong)Var19 + (unkuint9)SUB168(auVar43 * auVar79,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar44._8_8_ = 0;
      auVar44._0_8_ = uVar95;
      auVar80._8_8_ = 0;
      auVar80._0_8_ = param_2[5];
      Var17 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar44 * auVar80,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      uVar18 = (ulonglong)Var17;
      Var15 = (unkuint9)(ulonglong)Var16 + (unkuint9)SUB168(auVar44 * auVar80,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar45._8_8_ = 0;
      auVar45._0_8_ = uVar95;
      auVar81._8_8_ = 0;
      auVar81._0_8_ = param_2[6];
      Var17 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar45 * auVar81,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      Var13 = (unkuint9)
              (SUB168(auVar41 * auVar77,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var16 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar45 * auVar81,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar46._8_8_ = 0;
      auVar46._0_8_ = uVar95;
      auVar82._8_8_ = 0;
      auVar82._0_8_ = param_2[7];
      Var16 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar46 * auVar82,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      auVar47._8_8_ = 0;
      auVar47._0_8_ = uVar95;
      auVar83._8_8_ = 0;
      auVar83._0_8_ = uVar95;
      uVar95 = param_2[4];
      Var15 = (unkuint9)uVar1 + (unkuint9)uVar1 + (unkuint9)0;
      Var14 = (unkuint9)SUB168(auVar47 * auVar83,0) + (unkuint9)(ulonglong)Var14 + (unkuint9)0;
      Var19 = (unkuint9)uVar97 + (unkuint9)uVar97 +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var15 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar4 = (ulonglong)Var14;
      Var15 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var19 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var19 + (unkuint9)SUB168(auVar47 * auVar83,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar5 = (ulonglong)Var14;
      Var14 = (unkuint9)(ulonglong)Var15 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar48._8_8_ = 0;
      auVar48._0_8_ = uVar95;
      auVar84._8_8_ = 0;
      auVar84._0_8_ = param_2[5];
      Var17 = (unkuint9)(ulonglong)Var17 + (unkuint9)SUB168(auVar48 * auVar84,0) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      uVar97 = (ulonglong)Var17;
      Var15 = (unkuint9)(ulonglong)Var16 + (unkuint9)SUB168(auVar48 * auVar84,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar49._8_8_ = 0;
      auVar49._0_8_ = uVar95;
      auVar85._8_8_ = 0;
      auVar85._0_8_ = param_2[6];
      Var17 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar49 * auVar85,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      uVar1 = (ulonglong)Var17;
      Var13 = (unkuint9)
              (SUB168(auVar46 * auVar82,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var16 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar49 * auVar85,8) +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      auVar50._8_8_ = 0;
      auVar50._0_8_ = uVar95;
      auVar86._8_8_ = 0;
      auVar86._0_8_ = param_2[7];
      Var15 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar50 * auVar86,0) +
              (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      auVar51._8_8_ = 0;
      auVar51._0_8_ = uVar95;
      auVar87._8_8_ = 0;
      auVar87._0_8_ = uVar95;
      uVar95 = param_2[5];
      Var16 = (unkuint9)uVar18 + (unkuint9)uVar18 + (unkuint9)0;
      Var14 = (unkuint9)SUB168(auVar51 * auVar87,0) + (unkuint9)(ulonglong)Var14 + (unkuint9)0;
      Var17 = (unkuint9)uVar97 + (unkuint9)uVar97 +
              (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var16 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar97 = (ulonglong)Var14;
      Var16 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var17 + (unkuint9)SUB168(auVar51 * auVar87,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar6 = (ulonglong)Var14;
      Var14 = (unkuint9)(ulonglong)Var16 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar52._8_8_ = 0;
      auVar52._0_8_ = uVar95;
      auVar88._8_8_ = 0;
      auVar88._0_8_ = param_2[6];
      Var16 = (unkuint9)(ulonglong)Var15 + (unkuint9)SUB168(auVar52 * auVar88,0) +
              (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
      uVar18 = (ulonglong)Var16;
      Var13 = (unkuint9)
              (SUB168(auVar50 * auVar86,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var15 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar52 * auVar88,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar95;
      auVar89._8_8_ = 0;
      auVar89._0_8_ = param_2[7];
      Var15 = (unkuint9)(ulonglong)Var13 + (unkuint9)SUB168(auVar53 * auVar89,0) +
              (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
      uVar9 = (ulonglong)Var15;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = uVar95;
      auVar90._8_8_ = 0;
      auVar90._0_8_ = uVar95;
      uVar95 = param_2[6];
      Var16 = (unkuint9)uVar1 + (unkuint9)uVar1 + (unkuint9)0;
      Var14 = (unkuint9)SUB168(auVar54 * auVar90,0) + (unkuint9)(ulonglong)Var14 + (unkuint9)0;
      Var17 = (unkuint9)uVar18 + (unkuint9)uVar18 +
              (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
      Var14 = (unkuint9)(ulonglong)Var16 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar7 = (ulonglong)Var14;
      Var14 = (unkuint9)(ulonglong)Var17 + (unkuint9)SUB168(auVar54 * auVar90,8) +
              (unkuint9)((char)((unkuint9)Var14 >> 0x40) != '\0');
      uVar8 = (ulonglong)Var14;
      Var16 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var17 >> 0x40) != '\0');
      auVar55._8_8_ = 0;
      auVar55._0_8_ = uVar95;
      auVar91._8_8_ = 0;
      auVar91._0_8_ = param_2[7];
      Var13 = (unkuint9)
              (SUB168(auVar53 * auVar89,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var15 >> 0x40) != '\0')) +
              (unkuint9)SUB168(auVar55 * auVar91,0) +
              (unkuint9)((char)((unkuint9)Var16 >> 0x40) != '\0');
      uVar1 = (ulonglong)Var13;
      uVar18 = SUB168(auVar55 * auVar91,8) + (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar95;
      auVar92._8_8_ = 0;
      auVar92._0_8_ = uVar95;
      Var15 = (unkuint9)uVar9 + (unkuint9)uVar9 + (unkuint9)0;
      Var13 = (unkuint9)SUB168(auVar56 * auVar92,0) +
              (unkuint9)((longlong)Var16 + (ulonglong)((char)((unkuint9)Var14 >> 0x40) != '\0')) +
              (unkuint9)0;
      Var14 = (unkuint9)uVar1 + (unkuint9)uVar1 +
              (unkuint9)((char)((unkuint9)Var15 >> 0x40) != '\0');
      Var13 = (unkuint9)(ulonglong)Var15 + (unkuint9)(ulonglong)Var13 +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      uVar9 = (ulonglong)Var13;
      Var13 = (unkuint9)(ulonglong)Var14 + (unkuint9)SUB168(auVar56 * auVar92,8) +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      uVar10 = (ulonglong)Var13;
      uVar95 = (ulonglong)((char)((unkuint9)Var14 >> 0x40) != '\0') +
               (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
      auVar57._8_8_ = 0;
      auVar57._0_8_ = param_2[7];
      auVar93._8_8_ = 0;
      auVar93._0_8_ = param_2[7];
      Var14 = (unkuint9)uVar18 + (unkuint9)uVar18 + (unkuint9)0;
      Var13 = (unkuint9)SUB168(auVar57 * auVar93,0) + (unkuint9)uVar95 + (unkuint9)0;
      Var13 = (unkuint9)(ulonglong)Var13 + (unkuint9)(ulonglong)Var14 +
              (unkuint9)((char)((unkuint9)Var13 >> 0x40) != '\0');
      uVar11 = (ulonglong)Var13;
      uVar12 = (ulonglong)((char)((unkuint9)Var14 >> 0x40) != '\0') + SUB168(auVar57 * auVar93,8) +
               (ulonglong)((char)((unkuint9)Var13 >> 0x40) != '\0');
      __rsaz_512_reducex(uVar95,param_4);
      uVar95 = uVar94 + uVar97;
      uVar1 = (ulonglong)CARRY8(uVar94,uVar97);
      uVar18 = uVar96 + uVar6;
      uVar97 = uVar18 + uVar1;
      __rsaz_512_subtract(-(ulonglong)
                           (CARRY8(uVar5,uVar12) ||
                           CARRY8(uVar5 + uVar12,
                                  (ulonglong)
                                  (CARRY8(uVar4,uVar11) ||
                                  CARRY8(uVar4 + uVar11,
                                         (ulonglong)
                                         (CARRY8(uVar3,uVar10) ||
                                         CARRY8(uVar3 + uVar10,
                                                (ulonglong)
                                                (CARRY8(uVar2,uVar9) ||
                                                CARRY8(uVar2 + uVar9,
                                                       (ulonglong)
                                                       (CARRY8(uVar99,uVar8) ||
                                                       CARRY8(uVar99 + uVar8,
                                                              (ulonglong)
                                                              (CARRY8(uVar98,uVar7) ||
                                                              CARRY8(uVar98 + uVar7,
                                                                     (ulonglong)
                                                                     (CARRY8(uVar96,uVar6) ||
                                                                     CARRY8(uVar18,uVar1))))))))))))
                                 )));
      param_5 = param_5 + -1;
      param_2 = param_1;
    } while (param_5 != 0);
  }
  else {
    do {
      __rsaz_512_reduce();
      __rsaz_512_subtract();
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

// rsaz_512_mul @ 140e5c8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_mul(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    uVar1 = __rsaz_512_mulx(param_4,*param_3);
    __rsaz_512_reducex(uVar1,param_5,uStack_c8,uStack_c0);
  }
  else {
    __rsaz_512_mul(param_1,param_4);
    __rsaz_512_reduce();
  }
  __rsaz_512_subtract(-(ulonglong)
                       (CARRY8(uStack_90,uStack_50) ||
                       CARRY8(uStack_90 + uStack_50,
                              (ulonglong)
                              (CARRY8(uStack_98,uStack_58) ||
                              CARRY8(uStack_98 + uStack_58,
                                     (ulonglong)
                                     (CARRY8(uStack_a0,uStack_60) ||
                                     CARRY8(uStack_a0 + uStack_60,
                                            (ulonglong)
                                            (CARRY8(uStack_a8,uStack_68) ||
                                            CARRY8(uStack_a8 + uStack_68,
                                                   (ulonglong)
                                                   (CARRY8(uStack_b0,uStack_70) ||
                                                   CARRY8(uStack_b0 + uStack_70,
                                                          (ulonglong)
                                                          (CARRY8(uStack_b8,uStack_78) ||
                                                          CARRY8(uStack_b8 + uStack_78,
                                                                 (ulonglong)
                                                                 (CARRY8(uStack_c0,uStack_80) ||
                                                                 CARRY8(uStack_c0 + uStack_80,
                                                                        (ulonglong)
                                                                        CARRY8(uStack_c8,uStack_88))
                                                                 ))))))))))))));
  return;
}

// L$SEH_begin_rsaz_512_mul @ 140e5c8cd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_rsaz_512_mul
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    uVar1 = __rsaz_512_mulx(param_4,*param_3);
    __rsaz_512_reducex(uVar1,param_5,local_c8,local_c0);
  }
  else {
    __rsaz_512_mul(param_1,param_4);
    __rsaz_512_reduce();
  }
  __rsaz_512_subtract(-(ulonglong)
                       (CARRY8(local_90,local_50) ||
                       CARRY8(local_90 + local_50,
                              (ulonglong)
                              (CARRY8(local_98,local_58) ||
                              CARRY8(local_98 + local_58,
                                     (ulonglong)
                                     (CARRY8(local_a0,local_60) ||
                                     CARRY8(local_a0 + local_60,
                                            (ulonglong)
                                            (CARRY8(local_a8,local_68) ||
                                            CARRY8(local_a8 + local_68,
                                                   (ulonglong)
                                                   (CARRY8(local_b0,local_70) ||
                                                   CARRY8(local_b0 + local_70,
                                                          (ulonglong)
                                                          (CARRY8(local_b8,local_78) ||
                                                          CARRY8(local_b8 + local_78,
                                                                 (ulonglong)
                                                                 (CARRY8(local_c0,local_80) ||
                                                                 CARRY8(local_c0 + local_80,
                                                                        (ulonglong)
                                                                        CARRY8(local_c8,local_88))))
                                                          ))))))))))));
  return;
}

// rsaz_512_mul_gather4 @ 140e5ca20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_mul_gather4
               (undefined8 param_1,ulonglong *param_2,undefined1 (*param_3) [16],undefined8 param_4,
               undefined8 param_5,int param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  unkint9 Var40;
  unkint9 Var41;
  char cVar42;
  unkint9 Var43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  ulonglong *puVar98;
  ulonglong uVar99;
  longlong lVar100;
  ulonglong uVar101;
  ulonglong uVar102;
  undefined1 (*pauVar103) [16];
  ulonglong *puVar104;
  ulonglong uVar105;
  ulonglong uVar106;
  ulonglong uVar107;
  ulonglong uVar108;
  ulonglong uVar109;
  ulonglong uVar110;
  bool bVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  int iVar114;
  int iVar116;
  int iVar117;
  int iVar118;
  undefined1 auVar115 [16];
  int iVar119;
  int iVar121;
  int iVar122;
  int iVar123;
  undefined1 auVar120 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  ulonglong auStack_170 [10];
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  auVar112._0_4_ = -(uint)(_L_inc == param_6);
  auVar112._4_4_ = -(uint)(_UNK_140e5dc04 == param_6);
  auVar112._8_4_ = -(uint)(_UNK_140e5dc08 == param_6);
  auVar112._12_4_ = -(uint)(_UNK_140e5dc0c == param_6);
  iVar114 = _DAT_140e5dc10 + _DAT_140e5dc10 + _L_inc;
  iVar116 = _UNK_140e5dc14 + _UNK_140e5dc14 + _UNK_140e5dc04;
  iVar117 = _UNK_140e5dc18 + _UNK_140e5dc18 + _UNK_140e5dc08;
  iVar118 = _UNK_140e5dc1c + _UNK_140e5dc1c + _UNK_140e5dc0c;
  auVar113._0_4_ = -(uint)(_DAT_140e5dc10 + _L_inc == param_6);
  auVar113._4_4_ = -(uint)(_UNK_140e5dc14 + _UNK_140e5dc04 == param_6);
  auVar113._8_4_ = -(uint)(_UNK_140e5dc18 + _UNK_140e5dc08 == param_6);
  auVar113._12_4_ = -(uint)(_UNK_140e5dc1c + _UNK_140e5dc0c == param_6);
  iVar119 = _DAT_140e5dc10 + iVar114;
  iVar121 = _UNK_140e5dc14 + iVar116;
  iVar122 = _UNK_140e5dc18 + iVar117;
  iVar123 = _UNK_140e5dc1c + iVar118;
  auVar115._0_4_ = -(uint)(iVar114 == param_6);
  auVar115._4_4_ = -(uint)(iVar116 == param_6);
  auVar115._8_4_ = -(uint)(iVar117 == param_6);
  auVar115._12_4_ = -(uint)(iVar118 == param_6);
  iVar114 = _DAT_140e5dc10 + iVar119;
  iVar116 = _UNK_140e5dc14 + iVar121;
  iVar117 = _UNK_140e5dc18 + iVar122;
  iVar118 = _UNK_140e5dc1c + iVar123;
  auVar120._0_4_ = -(uint)(iVar119 == param_6);
  auVar120._4_4_ = -(uint)(iVar121 == param_6);
  auVar120._8_4_ = -(uint)(iVar122 == param_6);
  auVar120._12_4_ = -(uint)(iVar123 == param_6);
  iVar119 = _DAT_140e5dc10 + iVar114;
  iVar121 = _UNK_140e5dc14 + iVar116;
  iVar122 = _UNK_140e5dc18 + iVar117;
  iVar123 = _UNK_140e5dc1c + iVar118;
  auVar124._0_4_ = -(uint)(iVar114 == param_6);
  auVar124._4_4_ = -(uint)(iVar116 == param_6);
  auVar124._8_4_ = -(uint)(iVar117 == param_6);
  auVar124._12_4_ = -(uint)(iVar118 == param_6);
  iVar114 = _DAT_140e5dc10 + iVar119;
  iVar116 = _UNK_140e5dc14 + iVar121;
  iVar117 = _UNK_140e5dc18 + iVar122;
  iVar118 = _UNK_140e5dc1c + iVar123;
  auVar125._0_4_ = -(uint)(iVar119 == param_6);
  auVar125._4_4_ = -(uint)(iVar121 == param_6);
  auVar125._8_4_ = -(uint)(iVar122 == param_6);
  auVar125._12_4_ = -(uint)(iVar123 == param_6);
  auVar126._0_4_ = -(uint)(iVar114 == param_6);
  auVar126._4_4_ = -(uint)(iVar116 == param_6);
  auVar126._8_4_ = -(uint)(iVar117 == param_6);
  auVar126._12_4_ = -(uint)(iVar118 == param_6);
  auVar127._0_4_ = -(uint)(_DAT_140e5dc10 + iVar114 == param_6);
  auVar127._4_4_ = -(uint)(_UNK_140e5dc14 + iVar116 == param_6);
  auVar127._8_4_ = -(uint)(_UNK_140e5dc18 + iVar117 == param_6);
  auVar127._12_4_ = -(uint)(_UNK_140e5dc1c + iVar118 == param_6);
  pauVar103 = param_3 + 8;
  auVar128 = *param_3 & auVar112 | param_3[2] & auVar115 | param_3[4] & auVar124 |
             param_3[6] & auVar126 |
             param_3[1] & auVar113 | param_3[3] & auVar120 | param_3[5] & auVar125 |
             param_3[7] & auVar127;
  uVar101 = auVar128._0_8_ | auVar128._8_8_;
  uStack_f0 = param_1;
  uStack_e8 = param_4;
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    uStack_f8 = param_5;
    auVar128._8_8_ = 0;
    auVar128._0_8_ = uVar101;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = *param_2;
    uVar99 = SUB168(auVar128 * auVar59,0);
    bVar111 = false;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar101;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = param_2[1];
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar101;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = param_2[2];
    Var40 = (unkuint9)SUB168(auVar128 * auVar59,8) + (unkuint9)SUB168(auVar44 * auVar60,0) +
            (unkuint9)0;
    auStack_170[7] = (ulonglong)Var40;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar101;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = param_2[3];
    Var40 = (unkuint9)SUB168(auVar44 * auVar60,8) + (unkuint9)SUB168(auVar45 * auVar61,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auStack_170[8] = (ulonglong)Var40;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar101;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = param_2[4];
    Var40 = (unkuint9)SUB168(auVar45 * auVar61,8) + (unkuint9)SUB168(auVar46 * auVar62,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auStack_170[9] = (ulonglong)Var40;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar101;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = param_2[5];
    Var40 = (unkuint9)SUB168(auVar46 * auVar62,8) + (unkuint9)SUB168(auVar47 * auVar63,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uStack_120 = (ulonglong)Var40;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar101;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = param_2[6];
    Var40 = (unkuint9)SUB168(auVar47 * auVar63,8) + (unkuint9)SUB168(auVar48 * auVar64,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uStack_118 = (ulonglong)Var40;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar101;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = param_2[7];
    Var40 = (unkuint9)SUB168(auVar48 * auVar64,8) + (unkuint9)SUB168(auVar49 * auVar65,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uStack_110 = (ulonglong)Var40;
    Var40 = (unkuint9)SUB168(auVar49 * auVar65,8) + (unkuint9)SUB168(auVar50 * auVar66,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uStack_108 = (ulonglong)Var40;
    Var40 = (unkuint9)SUB168(auVar50 * auVar66,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    cVar42 = (char)((unkuint9)Var40 >> 0x40);
    uStack_100 = (ulonglong)Var40;
    lVar100 = -7;
    do {
      auVar128 = *pauVar103;
      pauVar1 = pauVar103 + 1;
      pauVar2 = pauVar103 + 2;
      pauVar3 = pauVar103 + 3;
      pauVar4 = pauVar103 + 4;
      pauVar5 = pauVar103 + 5;
      pauVar6 = pauVar103 + 6;
      pauVar7 = pauVar103 + 7;
      pauVar103 = pauVar103 + 8;
      auVar128 = auVar128 & auVar112 | *pauVar2 & auVar115 | *pauVar4 & auVar124 |
                 *pauVar6 & auVar126 |
                 *pauVar1 & auVar113 | *pauVar3 & auVar120 | *pauVar5 & auVar125 |
                 *pauVar7 & auVar127;
      uVar101 = auVar128._0_8_ | auVar128._8_8_;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = uVar101;
      auVar67._8_8_ = 0;
      auVar67._0_8_ = *param_2;
      Var40 = (unkuint9)auStack_170[7] + (unkuint9)SUB168(auVar51 * auVar67,0) +
              (unkuint9)(cVar42 != '\0');
      Var43 = (unkuint9)SUB168(auVar51 * auVar67,8) + (unkuint9)auStack_170[8] + (unkuint9)bVar111;
      auVar52._8_8_ = 0;
      auVar52._0_8_ = uVar101;
      auVar68._8_8_ = 0;
      auVar68._0_8_ = param_2[1];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar52 * auVar68,0) +
              (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
      auStack_170[7] = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar52 * auVar68,8) + (unkuint9)auStack_170[9] +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar101;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = param_2[2];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar53 * auVar69,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      auStack_170[8] = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar53 * auVar69,8) + (unkuint9)uStack_120 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar54._8_8_ = 0;
      auVar54._0_8_ = uVar101;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = param_2[3];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar54 * auVar70,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      auStack_170[9] = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar54 * auVar70,8) + (unkuint9)uStack_118 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar55._8_8_ = 0;
      auVar55._0_8_ = uVar101;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = param_2[4];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar55 * auVar71,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      uStack_120 = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar55 * auVar71,8) + (unkuint9)uStack_110 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar101;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = param_2[5];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar56 * auVar72,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      uStack_118 = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar56 * auVar72,8) + (unkuint9)uStack_108 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar101;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = param_2[6];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar57 * auVar73,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      uStack_110 = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar57 * auVar73,8) + (unkuint9)uStack_100 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar58._8_8_ = 0;
      auVar58._0_8_ = uVar101;
      auVar74._8_8_ = 0;
      auVar74._0_8_ = param_2[7];
      auStack_170[lVar100 + 7] = (ulonglong)Var40;
      Var40 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar58 * auVar74,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      uStack_108 = (ulonglong)Var40;
      Var40 = (unkuint9)
              (SUB168(auVar58 * auVar74,8) + (ulonglong)((char)((unkuint9)Var43 >> 0x40) != '\0')) +
              (unkuint9)0 + (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
      cVar42 = (char)((unkuint9)Var40 >> 0x40);
      uStack_100 = (ulonglong)Var40;
      bVar111 = SCARRY8(lVar100,1);
      lVar100 = lVar100 + 1;
    } while (lVar100 != 0);
    __rsaz_512_reducex(0,param_5,uVar99,auStack_170[0]);
  }
  else {
    uStack_f8 = param_5;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *param_2;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar101;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = SUB168(auVar8 * auVar24,8);
    uVar99 = SUB168(auVar8 * auVar24,0);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_2[1];
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar101;
    auVar75 = auVar9 * auVar25 + auVar75;
    uVar105 = auVar75._0_8_;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = auVar75._8_8_;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_2[2];
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar101;
    auVar76 = auVar10 * auVar26 + auVar76;
    uVar106 = auVar76._0_8_;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = auVar76._8_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_2[3];
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar101;
    auVar77 = auVar11 * auVar27 + auVar77;
    uVar107 = auVar77._0_8_;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = auVar77._8_8_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = param_2[4];
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar101;
    auVar78 = auVar12 * auVar28 + auVar78;
    uVar108 = auVar78._0_8_;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = auVar78._8_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = param_2[5];
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar101;
    auVar79 = auVar13 * auVar29 + auVar79;
    uVar109 = auVar79._0_8_;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = auVar79._8_8_;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = param_2[6];
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar101;
    auVar80 = auVar14 * auVar30 + auVar80;
    uVar110 = auVar80._0_8_;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = auVar80._8_8_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = param_2[7];
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar101;
    auVar81 = auVar15 * auVar31 + auVar81;
    uVar101 = *param_2;
    iVar114 = 7;
    puVar98 = auStack_170;
    do {
      puVar104 = puVar98;
      auVar91._8_8_ = 0;
      auVar91._0_8_ = uVar110;
      auVar89._8_8_ = 0;
      auVar89._0_8_ = uVar109;
      auVar87._8_8_ = 0;
      auVar87._0_8_ = uVar108;
      auVar85._8_8_ = 0;
      auVar85._0_8_ = uVar107;
      auVar83._8_8_ = 0;
      auVar83._0_8_ = uVar106;
      auVar82._8_8_ = 0;
      auVar82._0_8_ = uVar105;
      auVar95._8_8_ = 0;
      auVar95._0_8_ = auVar81._8_8_;
      auVar93._8_8_ = 0;
      auVar93._0_8_ = auVar81._0_8_;
      auVar128 = *pauVar103;
      pauVar1 = pauVar103 + 1;
      pauVar2 = pauVar103 + 2;
      pauVar3 = pauVar103 + 3;
      pauVar4 = pauVar103 + 4;
      pauVar5 = pauVar103 + 5;
      pauVar6 = pauVar103 + 6;
      pauVar7 = pauVar103 + 7;
      pauVar103 = pauVar103 + 8;
      auVar128 = auVar128 & auVar112 | *pauVar2 & auVar115 | *pauVar4 & auVar124 |
                 *pauVar6 & auVar126 |
                 *pauVar1 & auVar113 | *pauVar3 & auVar120 | *pauVar5 & auVar125 |
                 *pauVar7 & auVar127;
      uVar102 = auVar128._0_8_ | auVar128._8_8_;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar101;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar102;
      auVar82 = auVar16 * auVar32 + auVar82;
      uVar101 = param_2[1];
      *puVar104 = auVar82._0_8_;
      auVar84._8_8_ = 0;
      auVar84._0_8_ = auVar82._8_8_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar101;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar102;
      auVar84 = auVar17 * auVar33 + auVar83 + auVar84;
      uVar105 = auVar84._0_8_;
      auVar86._8_8_ = 0;
      auVar86._0_8_ = auVar84._8_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = param_2[2];
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar102;
      auVar86 = auVar18 * auVar34 + auVar85 + auVar86;
      uVar106 = auVar86._0_8_;
      auVar88._8_8_ = 0;
      auVar88._0_8_ = auVar86._8_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = param_2[3];
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar102;
      auVar88 = auVar19 * auVar35 + auVar87 + auVar88;
      uVar107 = auVar88._0_8_;
      auVar90._8_8_ = 0;
      auVar90._0_8_ = auVar88._8_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = param_2[4];
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar102;
      auVar90 = auVar20 * auVar36 + auVar89 + auVar90;
      uVar108 = auVar90._0_8_;
      auVar92._8_8_ = 0;
      auVar92._0_8_ = auVar90._8_8_;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = param_2[5];
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar102;
      auVar92 = auVar21 * auVar37 + auVar91 + auVar92;
      uVar109 = auVar92._0_8_;
      auVar94._8_8_ = 0;
      auVar94._0_8_ = auVar92._8_8_;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = param_2[6];
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar102;
      auVar94 = auVar22 * auVar38 + auVar93 + auVar94;
      uVar110 = auVar94._0_8_;
      uVar101 = auVar94._8_8_;
      auVar97._8_8_ = 0;
      auVar97._0_8_ = uVar101;
      auVar96._8_8_ = 0;
      auVar96._0_8_ = uVar101;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = param_2[7];
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar102;
      auVar95 = auVar23 * auVar39 + auVar95;
      uVar101 = *param_2;
      auVar81 = auVar95 + auVar96;
      iVar114 = iVar114 + -1;
      puVar98 = puVar104 + 1;
    } while (iVar114 != 0);
    puVar104[1] = uVar105;
    puVar104[2] = uVar106;
    puVar104[3] = uVar107;
    puVar104[4] = uVar108;
    puVar104[5] = uVar109;
    puVar104[6] = uVar110;
    *(undefined1 (*) [16])(puVar104 + 7) = auVar95 + auVar97;
    __rsaz_512_reduce(0,auVar95._8_8_,uVar99,auStack_170[0]);
  }
  __rsaz_512_subtract(-(ulonglong)
                       (CARRY8(auStack_170[6],uStack_100) ||
                       CARRY8(auStack_170[6] + uStack_100,
                              (ulonglong)
                              (CARRY8(auStack_170[5],uStack_108) ||
                              CARRY8(auStack_170[5] + uStack_108,
                                     (ulonglong)
                                     (CARRY8(auStack_170[4],uStack_110) ||
                                     CARRY8(auStack_170[4] + uStack_110,
                                            (ulonglong)
                                            (CARRY8(auStack_170[3],uStack_118) ||
                                            CARRY8(auStack_170[3] + uStack_118,
                                                   (ulonglong)
                                                   (CARRY8(auStack_170[2],uStack_120) ||
                                                   CARRY8(auStack_170[2] + uStack_120,
                                                          (ulonglong)
                                                          (CARRY8(auStack_170[1],auStack_170[9]) ||
                                                          CARRY8(auStack_170[1] + auStack_170[9],
                                                                 (ulonglong)
                                                                 (CARRY8(auStack_170[0],
                                                                         auStack_170[8]) ||
                                                                 CARRY8(auStack_170[0] +
                                                                        auStack_170[8],
                                                                        (ulonglong)
                                                                        CARRY8(uVar99,auStack_170[7]
                                                                              ))))))))))))))));
  return;
}

// L$SEH_begin_rsaz_512_mul_gather4 @ 140e5ca2d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_rsaz_512_mul_gather4
               (undefined8 param_1,ulonglong *param_2,undefined1 (*param_3) [16],undefined8 param_4,
               undefined8 param_5,int param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  unkint9 Var40;
  unkint9 Var41;
  char cVar42;
  unkint9 Var43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  ulonglong *puVar98;
  ulonglong uVar99;
  longlong lVar100;
  ulonglong uVar101;
  ulonglong uVar102;
  undefined1 (*pauVar103) [16];
  ulonglong *puVar104;
  ulonglong uVar105;
  ulonglong uVar106;
  ulonglong uVar107;
  ulonglong uVar108;
  ulonglong uVar109;
  ulonglong uVar110;
  bool bVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  int iVar114;
  int iVar116;
  int iVar117;
  int iVar118;
  undefined1 auVar115 [16];
  int iVar119;
  int iVar121;
  int iVar122;
  int iVar123;
  undefined1 auVar120 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  ulonglong local_170 [10];
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  
  auVar112._0_4_ = -(uint)(_L_inc == param_6);
  auVar112._4_4_ = -(uint)(_UNK_140e5dc04 == param_6);
  auVar112._8_4_ = -(uint)(_UNK_140e5dc08 == param_6);
  auVar112._12_4_ = -(uint)(_UNK_140e5dc0c == param_6);
  iVar114 = _DAT_140e5dc10 + _DAT_140e5dc10 + _L_inc;
  iVar116 = _UNK_140e5dc14 + _UNK_140e5dc14 + _UNK_140e5dc04;
  iVar117 = _UNK_140e5dc18 + _UNK_140e5dc18 + _UNK_140e5dc08;
  iVar118 = _UNK_140e5dc1c + _UNK_140e5dc1c + _UNK_140e5dc0c;
  auVar113._0_4_ = -(uint)(_DAT_140e5dc10 + _L_inc == param_6);
  auVar113._4_4_ = -(uint)(_UNK_140e5dc14 + _UNK_140e5dc04 == param_6);
  auVar113._8_4_ = -(uint)(_UNK_140e5dc18 + _UNK_140e5dc08 == param_6);
  auVar113._12_4_ = -(uint)(_UNK_140e5dc1c + _UNK_140e5dc0c == param_6);
  iVar119 = _DAT_140e5dc10 + iVar114;
  iVar121 = _UNK_140e5dc14 + iVar116;
  iVar122 = _UNK_140e5dc18 + iVar117;
  iVar123 = _UNK_140e5dc1c + iVar118;
  auVar115._0_4_ = -(uint)(iVar114 == param_6);
  auVar115._4_4_ = -(uint)(iVar116 == param_6);
  auVar115._8_4_ = -(uint)(iVar117 == param_6);
  auVar115._12_4_ = -(uint)(iVar118 == param_6);
  iVar114 = _DAT_140e5dc10 + iVar119;
  iVar116 = _UNK_140e5dc14 + iVar121;
  iVar117 = _UNK_140e5dc18 + iVar122;
  iVar118 = _UNK_140e5dc1c + iVar123;
  auVar120._0_4_ = -(uint)(iVar119 == param_6);
  auVar120._4_4_ = -(uint)(iVar121 == param_6);
  auVar120._8_4_ = -(uint)(iVar122 == param_6);
  auVar120._12_4_ = -(uint)(iVar123 == param_6);
  iVar119 = _DAT_140e5dc10 + iVar114;
  iVar121 = _UNK_140e5dc14 + iVar116;
  iVar122 = _UNK_140e5dc18 + iVar117;
  iVar123 = _UNK_140e5dc1c + iVar118;
  auVar124._0_4_ = -(uint)(iVar114 == param_6);
  auVar124._4_4_ = -(uint)(iVar116 == param_6);
  auVar124._8_4_ = -(uint)(iVar117 == param_6);
  auVar124._12_4_ = -(uint)(iVar118 == param_6);
  iVar114 = _DAT_140e5dc10 + iVar119;
  iVar116 = _UNK_140e5dc14 + iVar121;
  iVar117 = _UNK_140e5dc18 + iVar122;
  iVar118 = _UNK_140e5dc1c + iVar123;
  auVar125._0_4_ = -(uint)(iVar119 == param_6);
  auVar125._4_4_ = -(uint)(iVar121 == param_6);
  auVar125._8_4_ = -(uint)(iVar122 == param_6);
  auVar125._12_4_ = -(uint)(iVar123 == param_6);
  auVar126._0_4_ = -(uint)(iVar114 == param_6);
  auVar126._4_4_ = -(uint)(iVar116 == param_6);
  auVar126._8_4_ = -(uint)(iVar117 == param_6);
  auVar126._12_4_ = -(uint)(iVar118 == param_6);
  auVar127._0_4_ = -(uint)(_DAT_140e5dc10 + iVar114 == param_6);
  auVar127._4_4_ = -(uint)(_UNK_140e5dc14 + iVar116 == param_6);
  auVar127._8_4_ = -(uint)(_UNK_140e5dc18 + iVar117 == param_6);
  auVar127._12_4_ = -(uint)(_UNK_140e5dc1c + iVar118 == param_6);
  pauVar103 = param_3 + 8;
  auVar128 = *param_3 & auVar112 | param_3[2] & auVar115 | param_3[4] & auVar124 |
             param_3[6] & auVar126 |
             param_3[1] & auVar113 | param_3[3] & auVar120 | param_3[5] & auVar125 |
             param_3[7] & auVar127;
  uVar101 = auVar128._0_8_ | auVar128._8_8_;
  local_f0 = param_1;
  local_e8 = param_4;
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    local_f8 = param_5;
    auVar128._8_8_ = 0;
    auVar128._0_8_ = uVar101;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = *param_2;
    uVar99 = SUB168(auVar128 * auVar59,0);
    bVar111 = false;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar101;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = param_2[1];
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar101;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = param_2[2];
    Var40 = (unkuint9)SUB168(auVar128 * auVar59,8) + (unkuint9)SUB168(auVar44 * auVar60,0) +
            (unkuint9)0;
    local_170[7] = (ulonglong)Var40;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar101;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = param_2[3];
    Var40 = (unkuint9)SUB168(auVar44 * auVar60,8) + (unkuint9)SUB168(auVar45 * auVar61,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_170[8] = (ulonglong)Var40;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar101;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = param_2[4];
    Var40 = (unkuint9)SUB168(auVar45 * auVar61,8) + (unkuint9)SUB168(auVar46 * auVar62,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_170[9] = (ulonglong)Var40;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar101;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = param_2[5];
    Var40 = (unkuint9)SUB168(auVar46 * auVar62,8) + (unkuint9)SUB168(auVar47 * auVar63,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_120 = (ulonglong)Var40;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar101;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = param_2[6];
    Var40 = (unkuint9)SUB168(auVar47 * auVar63,8) + (unkuint9)SUB168(auVar48 * auVar64,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_118 = (ulonglong)Var40;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar101;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = param_2[7];
    Var40 = (unkuint9)SUB168(auVar48 * auVar64,8) + (unkuint9)SUB168(auVar49 * auVar65,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_110 = (ulonglong)Var40;
    Var40 = (unkuint9)SUB168(auVar49 * auVar65,8) + (unkuint9)SUB168(auVar50 * auVar66,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_108 = (ulonglong)Var40;
    Var40 = (unkuint9)SUB168(auVar50 * auVar66,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    cVar42 = (char)((unkuint9)Var40 >> 0x40);
    local_100 = (ulonglong)Var40;
    lVar100 = -7;
    do {
      auVar128 = *pauVar103;
      pauVar1 = pauVar103 + 1;
      pauVar2 = pauVar103 + 2;
      pauVar3 = pauVar103 + 3;
      pauVar4 = pauVar103 + 4;
      pauVar5 = pauVar103 + 5;
      pauVar6 = pauVar103 + 6;
      pauVar7 = pauVar103 + 7;
      pauVar103 = pauVar103 + 8;
      auVar128 = auVar128 & auVar112 | *pauVar2 & auVar115 | *pauVar4 & auVar124 |
                 *pauVar6 & auVar126 |
                 *pauVar1 & auVar113 | *pauVar3 & auVar120 | *pauVar5 & auVar125 |
                 *pauVar7 & auVar127;
      uVar101 = auVar128._0_8_ | auVar128._8_8_;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = uVar101;
      auVar67._8_8_ = 0;
      auVar67._0_8_ = *param_2;
      Var40 = (unkuint9)local_170[7] + (unkuint9)SUB168(auVar51 * auVar67,0) +
              (unkuint9)(cVar42 != '\0');
      Var43 = (unkuint9)SUB168(auVar51 * auVar67,8) + (unkuint9)local_170[8] + (unkuint9)bVar111;
      auVar52._8_8_ = 0;
      auVar52._0_8_ = uVar101;
      auVar68._8_8_ = 0;
      auVar68._0_8_ = param_2[1];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar52 * auVar68,0) +
              (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
      local_170[7] = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar52 * auVar68,8) + (unkuint9)local_170[9] +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar101;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = param_2[2];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar53 * auVar69,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_170[8] = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar53 * auVar69,8) + (unkuint9)local_120 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar54._8_8_ = 0;
      auVar54._0_8_ = uVar101;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = param_2[3];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar54 * auVar70,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_170[9] = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar54 * auVar70,8) + (unkuint9)local_118 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar55._8_8_ = 0;
      auVar55._0_8_ = uVar101;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = param_2[4];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar55 * auVar71,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_120 = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar55 * auVar71,8) + (unkuint9)local_110 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar101;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = param_2[5];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar56 * auVar72,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_118 = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar56 * auVar72,8) + (unkuint9)local_108 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar101;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = param_2[6];
      Var41 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar57 * auVar73,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_110 = (ulonglong)Var41;
      Var43 = (unkuint9)SUB168(auVar57 * auVar73,8) + (unkuint9)local_100 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar58._8_8_ = 0;
      auVar58._0_8_ = uVar101;
      auVar74._8_8_ = 0;
      auVar74._0_8_ = param_2[7];
      local_170[lVar100 + 7] = (ulonglong)Var40;
      Var40 = (unkuint9)(ulonglong)Var43 + (unkuint9)SUB168(auVar58 * auVar74,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_108 = (ulonglong)Var40;
      Var40 = (unkuint9)
              (SUB168(auVar58 * auVar74,8) + (ulonglong)((char)((unkuint9)Var43 >> 0x40) != '\0')) +
              (unkuint9)0 + (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
      cVar42 = (char)((unkuint9)Var40 >> 0x40);
      local_100 = (ulonglong)Var40;
      bVar111 = SCARRY8(lVar100,1);
      lVar100 = lVar100 + 1;
    } while (lVar100 != 0);
    __rsaz_512_reducex(0,param_5,uVar99,local_170[0]);
  }
  else {
    local_f8 = param_5;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *param_2;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar101;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = SUB168(auVar8 * auVar24,8);
    uVar99 = SUB168(auVar8 * auVar24,0);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_2[1];
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar101;
    auVar75 = auVar9 * auVar25 + auVar75;
    uVar105 = auVar75._0_8_;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = auVar75._8_8_;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_2[2];
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar101;
    auVar76 = auVar10 * auVar26 + auVar76;
    uVar106 = auVar76._0_8_;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = auVar76._8_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_2[3];
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar101;
    auVar77 = auVar11 * auVar27 + auVar77;
    uVar107 = auVar77._0_8_;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = auVar77._8_8_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = param_2[4];
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar101;
    auVar78 = auVar12 * auVar28 + auVar78;
    uVar108 = auVar78._0_8_;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = auVar78._8_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = param_2[5];
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar101;
    auVar79 = auVar13 * auVar29 + auVar79;
    uVar109 = auVar79._0_8_;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = auVar79._8_8_;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = param_2[6];
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar101;
    auVar80 = auVar14 * auVar30 + auVar80;
    uVar110 = auVar80._0_8_;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = auVar80._8_8_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = param_2[7];
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar101;
    auVar81 = auVar15 * auVar31 + auVar81;
    uVar101 = *param_2;
    iVar114 = 7;
    puVar98 = local_170;
    do {
      puVar104 = puVar98;
      auVar91._8_8_ = 0;
      auVar91._0_8_ = uVar110;
      auVar89._8_8_ = 0;
      auVar89._0_8_ = uVar109;
      auVar87._8_8_ = 0;
      auVar87._0_8_ = uVar108;
      auVar85._8_8_ = 0;
      auVar85._0_8_ = uVar107;
      auVar83._8_8_ = 0;
      auVar83._0_8_ = uVar106;
      auVar82._8_8_ = 0;
      auVar82._0_8_ = uVar105;
      auVar95._8_8_ = 0;
      auVar95._0_8_ = auVar81._8_8_;
      auVar93._8_8_ = 0;
      auVar93._0_8_ = auVar81._0_8_;
      auVar128 = *pauVar103;
      pauVar1 = pauVar103 + 1;
      pauVar2 = pauVar103 + 2;
      pauVar3 = pauVar103 + 3;
      pauVar4 = pauVar103 + 4;
      pauVar5 = pauVar103 + 5;
      pauVar6 = pauVar103 + 6;
      pauVar7 = pauVar103 + 7;
      pauVar103 = pauVar103 + 8;
      auVar128 = auVar128 & auVar112 | *pauVar2 & auVar115 | *pauVar4 & auVar124 |
                 *pauVar6 & auVar126 |
                 *pauVar1 & auVar113 | *pauVar3 & auVar120 | *pauVar5 & auVar125 |
                 *pauVar7 & auVar127;
      uVar102 = auVar128._0_8_ | auVar128._8_8_;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar101;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar102;
      auVar82 = auVar16 * auVar32 + auVar82;
      uVar101 = param_2[1];
      *puVar104 = auVar82._0_8_;
      auVar84._8_8_ = 0;
      auVar84._0_8_ = auVar82._8_8_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar101;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar102;
      auVar84 = auVar17 * auVar33 + auVar83 + auVar84;
      uVar105 = auVar84._0_8_;
      auVar86._8_8_ = 0;
      auVar86._0_8_ = auVar84._8_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = param_2[2];
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar102;
      auVar86 = auVar18 * auVar34 + auVar85 + auVar86;
      uVar106 = auVar86._0_8_;
      auVar88._8_8_ = 0;
      auVar88._0_8_ = auVar86._8_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = param_2[3];
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar102;
      auVar88 = auVar19 * auVar35 + auVar87 + auVar88;
      uVar107 = auVar88._0_8_;
      auVar90._8_8_ = 0;
      auVar90._0_8_ = auVar88._8_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = param_2[4];
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar102;
      auVar90 = auVar20 * auVar36 + auVar89 + auVar90;
      uVar108 = auVar90._0_8_;
      auVar92._8_8_ = 0;
      auVar92._0_8_ = auVar90._8_8_;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = param_2[5];
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar102;
      auVar92 = auVar21 * auVar37 + auVar91 + auVar92;
      uVar109 = auVar92._0_8_;
      auVar94._8_8_ = 0;
      auVar94._0_8_ = auVar92._8_8_;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = param_2[6];
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar102;
      auVar94 = auVar22 * auVar38 + auVar93 + auVar94;
      uVar110 = auVar94._0_8_;
      uVar101 = auVar94._8_8_;
      auVar97._8_8_ = 0;
      auVar97._0_8_ = uVar101;
      auVar96._8_8_ = 0;
      auVar96._0_8_ = uVar101;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = param_2[7];
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar102;
      auVar95 = auVar23 * auVar39 + auVar95;
      uVar101 = *param_2;
      auVar81 = auVar95 + auVar96;
      iVar114 = iVar114 + -1;
      puVar98 = puVar104 + 1;
    } while (iVar114 != 0);
    puVar104[1] = uVar105;
    puVar104[2] = uVar106;
    puVar104[3] = uVar107;
    puVar104[4] = uVar108;
    puVar104[5] = uVar109;
    puVar104[6] = uVar110;
    *(undefined1 (*) [16])(puVar104 + 7) = auVar95 + auVar97;
    __rsaz_512_reduce(0,auVar95._8_8_,uVar99,local_170[0]);
  }
  __rsaz_512_subtract(-(ulonglong)
                       (CARRY8(local_170[6],local_100) ||
                       CARRY8(local_170[6] + local_100,
                              (ulonglong)
                              (CARRY8(local_170[5],local_108) ||
                              CARRY8(local_170[5] + local_108,
                                     (ulonglong)
                                     (CARRY8(local_170[4],local_110) ||
                                     CARRY8(local_170[4] + local_110,
                                            (ulonglong)
                                            (CARRY8(local_170[3],local_118) ||
                                            CARRY8(local_170[3] + local_118,
                                                   (ulonglong)
                                                   (CARRY8(local_170[2],local_120) ||
                                                   CARRY8(local_170[2] + local_120,
                                                          (ulonglong)
                                                          (CARRY8(local_170[1],local_170[9]) ||
                                                          CARRY8(local_170[1] + local_170[9],
                                                                 (ulonglong)
                                                                 (CARRY8(local_170[0],local_170[8])
                                                                 || CARRY8(local_170[0] +
                                                                           local_170[8],
                                                                           (ulonglong)
                                                                           CARRY8(uVar99,local_170[7
                                                  ]))))))))))))))));
  return;
}

// rsaz_512_mul_scatter4 @ 140e5d140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_mul_scatter4
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5,ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  
  plVar10 = (longlong *)(param_5 + (param_6 & 0xffffffff) * 8);
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    uVar9 = __rsaz_512_mulx(param_4,*param_1);
    __rsaz_512_reducex(uVar9,param_4);
  }
  else {
    __rsaz_512_mul(param_1,param_3);
    __rsaz_512_reduce();
  }
  lVar5 = uStack_c8 + uStack_88;
  lVar6 = uStack_c0 + uStack_80 + (ulonglong)CARRY8(uStack_c8,uStack_88);
  uVar1 = (ulonglong)
          (CARRY8(uStack_c0,uStack_80) ||
          CARRY8(uStack_c0 + uStack_80,(ulonglong)CARRY8(uStack_c8,uStack_88)));
  lVar7 = uStack_b8 + uStack_78 + uVar1;
  uVar1 = (ulonglong)(CARRY8(uStack_b8,uStack_78) || CARRY8(uStack_b8 + uStack_78,uVar1));
  lVar8 = uStack_b0 + uStack_70 + uVar1;
  uVar1 = (ulonglong)(CARRY8(uStack_b0,uStack_70) || CARRY8(uStack_b0 + uStack_70,uVar1));
  uVar2 = (ulonglong)(CARRY8(uStack_a8,uStack_68) || CARRY8(uStack_a8 + uStack_68,uVar1));
  uVar3 = (ulonglong)(CARRY8(uStack_a0,uStack_60) || CARRY8(uStack_a0 + uStack_60,uVar2));
  uVar4 = (ulonglong)(CARRY8(uStack_98,uStack_58) || CARRY8(uStack_98 + uStack_58,uVar3));
  __rsaz_512_subtract(-(ulonglong)
                       (CARRY8(uStack_90,uStack_50) || CARRY8(uStack_90 + uStack_50,uVar4)));
  *plVar10 = lVar5;
  plVar10[0x10] = lVar6;
  plVar10[0x20] = lVar7;
  plVar10[0x30] = lVar8;
  plVar10[0x40] = uStack_a8 + uStack_68 + uVar1;
  plVar10[0x50] = uStack_a0 + uStack_60 + uVar2;
  plVar10[0x60] = uStack_98 + uStack_58 + uVar3;
  plVar10[0x70] = uStack_90 + uStack_50 + uVar4;
  return;
}

// L$SEH_begin_rsaz_512_mul_scatter4 @ 140e5d14d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_rsaz_512_mul_scatter4
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5,ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  plVar10 = (longlong *)(param_5 + (param_6 & 0xffffffff) * 8);
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    uVar9 = __rsaz_512_mulx(param_4,*param_1);
    __rsaz_512_reducex(uVar9,param_4);
  }
  else {
    __rsaz_512_mul(param_1,param_3);
    __rsaz_512_reduce();
  }
  lVar5 = local_c8 + local_88;
  lVar6 = local_c0 + local_80 + (ulonglong)CARRY8(local_c8,local_88);
  uVar1 = (ulonglong)
          (CARRY8(local_c0,local_80) ||
          CARRY8(local_c0 + local_80,(ulonglong)CARRY8(local_c8,local_88)));
  lVar7 = local_b8 + local_78 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_b8,local_78) || CARRY8(local_b8 + local_78,uVar1));
  lVar8 = local_b0 + local_70 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_b0,local_70) || CARRY8(local_b0 + local_70,uVar1));
  uVar2 = (ulonglong)(CARRY8(local_a8,local_68) || CARRY8(local_a8 + local_68,uVar1));
  uVar3 = (ulonglong)(CARRY8(local_a0,local_60) || CARRY8(local_a0 + local_60,uVar2));
  uVar4 = (ulonglong)(CARRY8(local_98,local_58) || CARRY8(local_98 + local_58,uVar3));
  __rsaz_512_subtract(-(ulonglong)(CARRY8(local_90,local_50) || CARRY8(local_90 + local_50,uVar4)));
  *plVar10 = lVar5;
  plVar10[0x10] = lVar6;
  plVar10[0x20] = lVar7;
  plVar10[0x30] = lVar8;
  plVar10[0x40] = local_a8 + local_68 + uVar1;
  plVar10[0x50] = local_a0 + local_60 + uVar2;
  plVar10[0x60] = local_98 + local_58 + uVar3;
  plVar10[0x70] = local_90 + local_50 + uVar4;
  return;
}

// rsaz_512_mul_by_one @ 140e5d2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_mul_by_one(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                        undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    __rsaz_512_reducex(param_4,param_4,uVar5,uVar6,(undefined1  [16])0x0,(undefined1  [16])0x0,
                       (undefined1  [16])0x0,(undefined1  [16])0x0,(undefined1  [16])0x0);
  }
  else {
    __rsaz_512_reduce(param_4,param_3);
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  return;
}

// L$SEH_begin_rsaz_512_mul_by_one @ 140e5d2ed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_rsaz_512_mul_by_one
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    __rsaz_512_reducex(param_4,param_4,uVar5,uVar6,(undefined1  [16])0x0,(undefined1  [16])0x0,
                       (undefined1  [16])0x0,(undefined1  [16])0x0,(undefined1  [16])0x0);
  }
  else {
    __rsaz_512_reduce(param_4,param_3);
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  return;
}

// __rsaz_512_reduce @ 140e5d3e0

undefined8 __rsaz_512_reduce(void)

{
  int iVar1;
  undefined8 *unaff_RBP;
  
  iVar1 = 8;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return *unaff_RBP;
}

// __rsaz_512_reducex @ 140e5d4e0

ulonglong __rsaz_512_reducex(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4
                            )

{
  unkint9 Var1;
  unkint9 Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong *unaff_RBP;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  bool bVar22;
  bool bVar23;
  longlong in_stack_00000088;
  
  bVar22 = false;
  bVar23 = false;
  iVar20 = 8;
  uVar21 = param_2 * param_3;
  do {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar21;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *unaff_RBP;
    Var2 = (unkuint9)SUB168(auVar3 * auVar11,8) + (unkuint9)param_4 + (unkuint9)bVar23;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar21;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = unaff_RBP[1];
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar4 * auVar12,0) +
           (unkuint9)
           ((char)((unkuint9)SUB168(auVar3 * auVar11,0) + (unkuint9)param_3 + (unkuint9)bVar22 >>
                  0x40) != '\0');
    param_3 = (ulonglong)Var1;
    Var2 = (unkuint9)SUB168(auVar4 * auVar12,8) + (unkuint9)in_R10 +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar21;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = unaff_RBP[2];
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar5 * auVar13,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    param_4 = (ulonglong)Var1;
    Var2 = (unkuint9)SUB168(auVar5 * auVar13,8) + (unkuint9)in_R11 +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar21;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = unaff_RBP[3];
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar6 * auVar14,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    in_R10 = (ulonglong)Var1;
    Var2 = (unkuint9)SUB168(auVar6 * auVar14,8) + (unkuint9)unaff_R12 +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar21;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = unaff_RBP[4];
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar7 * auVar15,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    in_R11 = (ulonglong)Var1;
    Var2 = (unkuint9)SUB168(auVar7 * auVar15,8) + (unkuint9)unaff_R13 +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar21;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = unaff_RBP[5];
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar8 * auVar16,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    unaff_R12 = (ulonglong)Var1;
    Var2 = (unkuint9)SUB168(auVar8 * auVar16,8) + (unkuint9)unaff_R14 +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar21;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = unaff_RBP[6];
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar9 * auVar17,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    unaff_R13 = (ulonglong)Var1;
    Var2 = (unkuint9)SUB168(auVar9 * auVar17,8) + (unkuint9)unaff_R15 +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar21;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = unaff_RBP[7];
    uVar19 = SUB168(auVar10 * auVar18,0);
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)uVar19 +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    unaff_R14 = (ulonglong)Var1;
    Var1 = (unkuint9)
           (SUB168(auVar10 * auVar18,8) + (ulonglong)((char)((unkuint9)Var2 >> 0x40) != '\0')) +
           (unkuint9)0 + (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    bVar22 = (char)((unkuint9)Var1 >> 0x40) != '\0';
    unaff_R15 = (ulonglong)Var1;
    bVar23 = SBORROW4(iVar20,1);
    iVar20 = iVar20 + -1;
    uVar21 = param_3 * in_stack_00000088;
  } while (iVar20 != 0);
  return uVar19;
}

// __rsaz_512_subtract @ 140e5d5c0

void __rsaz_512_subtract(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *unaff_RBP;
  ulonglong *unaff_RDI;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  *unaff_RDI = param_3;
  unaff_RDI[1] = param_4;
  unaff_RDI[2] = in_R10;
  unaff_RDI[3] = in_R11;
  unaff_RDI[4] = unaff_R12;
  unaff_RDI[5] = unaff_R13;
  unaff_RDI[6] = unaff_R14;
  unaff_RDI[7] = unaff_R15;
  uVar1 = unaff_RBP[6];
  uVar2 = unaff_RBP[7];
  uVar4 = (ulonglong)CARRY8(-*unaff_RBP & param_1,*unaff_RDI);
  uVar10 = (~unaff_RBP[1] & param_1) + unaff_RDI[1];
  uVar5 = (ulonglong)(CARRY8(~unaff_RBP[1] & param_1,unaff_RDI[1]) || CARRY8(uVar10,uVar4));
  uVar11 = (~unaff_RBP[2] & param_1) + unaff_RDI[2];
  uVar6 = (ulonglong)(CARRY8(~unaff_RBP[2] & param_1,unaff_RDI[2]) || CARRY8(uVar11,uVar5));
  uVar12 = (~unaff_RBP[3] & param_1) + unaff_RDI[3];
  uVar7 = (ulonglong)(CARRY8(~unaff_RBP[3] & param_1,unaff_RDI[3]) || CARRY8(uVar12,uVar6));
  uVar13 = (~unaff_RBP[4] & param_1) + unaff_RDI[4];
  uVar8 = (ulonglong)(CARRY8(~unaff_RBP[4] & param_1,unaff_RDI[4]) || CARRY8(uVar13,uVar7));
  uVar14 = (~unaff_RBP[5] & param_1) + unaff_RDI[5];
  uVar9 = (ulonglong)(CARRY8(~unaff_RBP[5] & param_1,unaff_RDI[5]) || CARRY8(uVar14,uVar8));
  uVar3 = unaff_RDI[6];
  uVar15 = (~uVar1 & param_1) + unaff_RDI[6];
  *unaff_RDI = (-*unaff_RBP & param_1) + *unaff_RDI;
  unaff_RDI[1] = uVar10 + uVar4;
  unaff_RDI[2] = uVar11 + uVar5;
  unaff_RDI[3] = uVar12 + uVar6;
  unaff_RDI[4] = uVar13 + uVar7;
  unaff_RDI[5] = uVar14 + uVar8;
  unaff_RDI[6] = uVar15 + uVar9;
  unaff_RDI[7] = (~uVar2 & param_1) + unaff_RDI[7] +
                 (ulonglong)(CARRY8(~uVar1 & param_1,uVar3) || CARRY8(uVar15,uVar9));
  return;
}

// __rsaz_512_mul @ 140e5d680

void __rsaz_512_mul(void)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  ulonglong *puVar57;
  int iVar58;
  ulonglong unaff_RBX;
  ulonglong *unaff_RBP;
  ulonglong *unaff_RSI;
  ulonglong *puVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  ulonglong local_res10 [3];
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *unaff_RSI;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = unaff_RBX;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = SUB168(auVar2 * auVar18,8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = unaff_RSI[1];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = unaff_RBX;
  auVar34 = auVar3 * auVar19 + auVar34;
  uVar60 = auVar34._0_8_;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = auVar34._8_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = unaff_RSI[2];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = unaff_RBX;
  auVar35 = auVar4 * auVar20 + auVar35;
  uVar61 = auVar35._0_8_;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = auVar35._8_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = unaff_RSI[3];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = unaff_RBX;
  auVar36 = auVar5 * auVar21 + auVar36;
  uVar62 = auVar36._0_8_;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = auVar36._8_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = unaff_RSI[4];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = unaff_RBX;
  auVar37 = auVar6 * auVar22 + auVar37;
  uVar63 = auVar37._0_8_;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = auVar37._8_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = unaff_RSI[5];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = unaff_RBX;
  auVar38 = auVar7 * auVar23 + auVar38;
  uVar64 = auVar38._0_8_;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = auVar38._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = unaff_RSI[6];
  auVar24._8_8_ = 0;
  auVar24._0_8_ = unaff_RBX;
  auVar39 = auVar8 * auVar24 + auVar39;
  uVar65 = auVar39._0_8_;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = auVar39._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = unaff_RSI[7];
  auVar25._8_8_ = 0;
  auVar25._0_8_ = unaff_RBX;
  auVar40 = auVar9 * auVar25 + auVar40;
  uVar66 = *unaff_RSI;
  iVar58 = 7;
  puVar57 = local_res10;
  do {
    puVar59 = puVar57;
    unaff_RBP = unaff_RBP + 1;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar65;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar64;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar63;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar62;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar61;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar60;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = auVar40._8_8_;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = auVar40._0_8_;
    uVar1 = *unaff_RBP;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar66;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar1;
    auVar41 = auVar10 * auVar26 + auVar41;
    uVar66 = unaff_RSI[1];
    *puVar59 = auVar41._0_8_;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = auVar41._8_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar66;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar1;
    auVar43 = auVar11 * auVar27 + auVar42 + auVar43;
    uVar60 = auVar43._0_8_;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = auVar43._8_8_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = unaff_RSI[2];
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar1;
    auVar45 = auVar12 * auVar28 + auVar44 + auVar45;
    uVar61 = auVar45._0_8_;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = auVar45._8_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = unaff_RSI[3];
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar1;
    auVar47 = auVar13 * auVar29 + auVar46 + auVar47;
    uVar62 = auVar47._0_8_;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = auVar47._8_8_;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = unaff_RSI[4];
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar1;
    auVar49 = auVar14 * auVar30 + auVar48 + auVar49;
    uVar63 = auVar49._0_8_;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = auVar49._8_8_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = unaff_RSI[5];
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar1;
    auVar51 = auVar15 * auVar31 + auVar50 + auVar51;
    uVar64 = auVar51._0_8_;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = auVar51._8_8_;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = unaff_RSI[6];
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar1;
    auVar53 = auVar16 * auVar32 + auVar52 + auVar53;
    uVar65 = auVar53._0_8_;
    uVar66 = auVar53._8_8_;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar66;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar66;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = unaff_RSI[7];
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar1;
    auVar54 = auVar17 * auVar33 + auVar54;
    uVar66 = *unaff_RSI;
    auVar40 = auVar54 + auVar55;
    iVar58 = iVar58 + -1;
    puVar57 = puVar59 + 1;
  } while (iVar58 != 0);
  puVar59[1] = uVar60;
  puVar59[2] = uVar61;
  puVar59[3] = uVar62;
  puVar59[4] = uVar63;
  puVar59[5] = uVar64;
  puVar59[6] = uVar65;
  *(undefined1 (*) [16])(puVar59 + 7) = auVar54 + auVar56;
  return;
}

// __rsaz_512_mulx @ 140e5d820

void __rsaz_512_mulx(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  unkint9 Var2;
  unkint9 Var3;
  unkint9 Var4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  longlong lVar37;
  ulonglong uVar38;
  longlong unaff_RBP;
  ulonglong *unaff_RSI;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  byte in_CF;
  bool bVar51;
  bool bVar52;
  undefined8 auStackX_10 [3];
  
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = *unaff_RSI;
  uVar39 = SUB168(auVar5 * auVar21,8);
  lVar37 = -6;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = unaff_RSI[1];
  uVar50 = SUB168(auVar6 * auVar22,0);
  uVar41 = SUB168(auVar6 * auVar22,8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = unaff_RSI[2];
  uVar1 = SUB168(auVar7 * auVar23,0);
  uVar42 = SUB168(auVar7 * auVar23,8);
  uVar38 = uVar39 + uVar50;
  uVar40 = uVar38 + in_CF;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = unaff_RSI[3];
  uVar44 = SUB168(auVar8 * auVar24,0);
  uVar43 = SUB168(auVar8 * auVar24,8);
  uVar38 = (ulonglong)(CARRY8(uVar39,uVar50) || CARRY8(uVar38,(ulonglong)in_CF));
  uVar50 = uVar41 + uVar1;
  uVar39 = uVar50 + uVar38;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = unaff_RSI[4];
  uVar46 = SUB168(auVar9 * auVar25,0);
  uVar45 = SUB168(auVar9 * auVar25,8);
  uVar38 = (ulonglong)(CARRY8(uVar41,uVar1) || CARRY8(uVar50,uVar38));
  uVar50 = uVar42 + uVar44;
  uVar41 = uVar50 + uVar38;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = unaff_RSI[5];
  uVar48 = SUB168(auVar10 * auVar26,0);
  uVar47 = SUB168(auVar10 * auVar26,8);
  uVar38 = (ulonglong)(CARRY8(uVar42,uVar44) || CARRY8(uVar50,uVar38));
  uVar50 = uVar43 + uVar46;
  uVar44 = uVar50 + uVar38;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = unaff_RSI[6];
  uVar42 = SUB168(auVar11 * auVar27,0);
  uVar49 = SUB168(auVar11 * auVar27,8);
  uVar50 = (ulonglong)(CARRY8(uVar43,uVar46) || CARRY8(uVar50,uVar38));
  uVar1 = uVar45 + uVar48;
  uVar46 = uVar1 + uVar50;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = unaff_RSI[7];
  uVar43 = SUB168(auVar12 * auVar28,0);
  uVar38 = *(ulonglong *)(unaff_RBP + 8);
  uVar50 = (ulonglong)(CARRY8(uVar45,uVar48) || CARRY8(uVar1,uVar50));
  uVar1 = uVar47 + uVar42;
  uVar48 = uVar1 + uVar50;
  uVar50 = (ulonglong)(CARRY8(uVar47,uVar42) || CARRY8(uVar1,uVar50));
  uVar1 = uVar49 + uVar43;
  uVar42 = uVar1 + uVar50;
  uVar50 = SUB168(auVar12 * auVar28,8) + (ulonglong)(CARRY8(uVar49,uVar43) || CARRY8(uVar1,uVar50));
  bVar51 = false;
  bVar52 = false;
  do {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar38;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = *unaff_RSI;
    Var2 = (unkuint9)uVar40 + (unkuint9)SUB168(auVar13 * auVar29,0) + (unkuint9)bVar51;
    Var4 = (unkuint9)SUB168(auVar13 * auVar29,8) + (unkuint9)uVar39 + (unkuint9)bVar52;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar38;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = unaff_RSI[1];
    Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar14 * auVar30,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar40 = (ulonglong)Var3;
    Var4 = (unkuint9)SUB168(auVar14 * auVar30,8) + (unkuint9)uVar41 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar38;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = unaff_RSI[2];
    Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar15 * auVar31,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar39 = (ulonglong)Var3;
    Var4 = (unkuint9)SUB168(auVar15 * auVar31,8) + (unkuint9)uVar44 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar38;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = unaff_RSI[3];
    Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar16 * auVar32,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar41 = (ulonglong)Var3;
    Var4 = (unkuint9)SUB168(auVar16 * auVar32,8) + (unkuint9)uVar46 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar38;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = unaff_RSI[4];
    Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar17 * auVar33,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar44 = (ulonglong)Var3;
    Var4 = (unkuint9)SUB168(auVar17 * auVar33,8) + (unkuint9)uVar48 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar38;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = unaff_RSI[5];
    Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar18 * auVar34,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar46 = (ulonglong)Var3;
    Var4 = (unkuint9)SUB168(auVar18 * auVar34,8) + (unkuint9)uVar42 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar38;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = unaff_RSI[6];
    Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar19 * auVar35,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar48 = (ulonglong)Var3;
    Var4 = (unkuint9)SUB168(auVar19 * auVar35,8) + (unkuint9)uVar50 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar38;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = unaff_RSI[7];
    uVar38 = *(ulonglong *)(unaff_RBP + 0x40 + lVar37 * 8);
    *(longlong *)(&stack0x00000040 + lVar37 * 8) = (longlong)Var2;
    Var2 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar20 * auVar36,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar42 = (ulonglong)Var2;
    Var2 = (unkuint9)
           (SUB168(auVar20 * auVar36,8) + (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0')) +
           (unkuint9)0 + (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    bVar51 = (char)((unkuint9)Var2 >> 0x40) != '\0';
    uVar50 = (ulonglong)Var2;
    bVar52 = SCARRY8(lVar37,1);
    lVar37 = lVar37 + 1;
  } while (lVar37 != 0);
  return;
}

// rsaz_512_scatter4 @ 140e5da10

void rsaz_512_scatter4(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = (undefined8 *)(param_1 + param_3 * 8);
  iVar3 = 8;
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 0x10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// rsaz_512_gather4 @ 140e5da40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_gather4(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  
  iVar38 = _DAT_140e5dc10 + _L_inc;
  iVar39 = _UNK_140e5dc14 + _UNK_140e5dc04;
  iVar40 = _UNK_140e5dc18 + _UNK_140e5dc08;
  iVar41 = _UNK_140e5dc1c + _UNK_140e5dc0c;
  bVar8 = _L_inc == param_3;
  bVar9 = _UNK_140e5dc04 == param_3;
  bVar10 = _UNK_140e5dc08 == param_3;
  bVar11 = _UNK_140e5dc0c == param_3;
  iVar42 = _DAT_140e5dc10 + iVar38;
  iVar43 = _UNK_140e5dc14 + iVar39;
  iVar44 = _UNK_140e5dc18 + iVar40;
  iVar45 = _UNK_140e5dc1c + iVar41;
  iVar46 = _DAT_140e5dc10 + iVar42;
  iVar47 = _UNK_140e5dc14 + iVar43;
  iVar48 = _UNK_140e5dc18 + iVar44;
  iVar49 = _UNK_140e5dc1c + iVar45;
  iVar50 = _DAT_140e5dc10 + iVar46;
  iVar51 = _UNK_140e5dc14 + iVar47;
  iVar52 = _UNK_140e5dc18 + iVar48;
  iVar53 = _UNK_140e5dc1c + iVar49;
  iVar54 = _DAT_140e5dc10 + iVar50;
  iVar55 = _UNK_140e5dc14 + iVar51;
  iVar56 = _UNK_140e5dc18 + iVar52;
  iVar57 = _UNK_140e5dc1c + iVar53;
  iVar58 = _DAT_140e5dc10 + iVar54;
  iVar59 = _UNK_140e5dc14 + iVar55;
  iVar60 = _UNK_140e5dc18 + iVar56;
  iVar61 = _UNK_140e5dc1c + iVar57;
  iVar62 = _DAT_140e5dc10 + iVar58;
  iVar63 = _UNK_140e5dc14 + iVar59;
  iVar64 = _UNK_140e5dc18 + iVar60;
  iVar65 = _UNK_140e5dc1c + iVar61;
  iVar37 = 8;
  do {
    uVar33 = *param_2;
    uVar34 = param_2[1];
    puVar35 = param_2 + 2;
    uVar36 = param_2[3];
    puVar1 = param_2 + 4;
    uVar21 = param_2[5];
    puVar22 = param_2 + 6;
    uVar23 = param_2[7];
    puVar2 = param_2 + 8;
    uVar30 = param_2[9];
    puVar31 = param_2 + 10;
    uVar32 = param_2[0xb];
    puVar3 = param_2 + 0xc;
    uVar18 = param_2[0xd];
    puVar19 = param_2 + 0xe;
    uVar20 = param_2[0xf];
    puVar4 = param_2 + 0x10;
    uVar27 = param_2[0x11];
    puVar28 = param_2 + 0x12;
    uVar29 = param_2[0x13];
    puVar5 = param_2 + 0x14;
    uVar15 = param_2[0x15];
    puVar16 = param_2 + 0x16;
    uVar17 = param_2[0x17];
    puVar6 = param_2 + 0x18;
    uVar24 = param_2[0x19];
    puVar25 = param_2 + 0x1a;
    uVar26 = param_2[0x1b];
    puVar7 = param_2 + 0x1c;
    uVar12 = param_2[0x1d];
    puVar13 = param_2 + 0x1e;
    uVar14 = param_2[0x1f];
    param_2 = param_2 + 0x20;
    *param_1 = uVar33 & -(uint)bVar8 | *puVar2 & -(uint)(iVar42 == param_3) |
               *puVar4 & -(uint)(iVar50 == param_3) | *puVar6 & -(uint)(iVar58 == param_3) |
               *puVar1 & -(uint)(iVar38 == param_3) | *puVar3 & -(uint)(iVar46 == param_3) |
               *puVar5 & -(uint)(iVar54 == param_3) | *puVar7 & -(uint)(iVar62 == param_3) |
               *puVar35 & -(uint)bVar10 | *puVar31 & -(uint)(iVar44 == param_3) |
               *puVar28 & -(uint)(iVar52 == param_3) | *puVar25 & -(uint)(iVar60 == param_3) |
               *puVar22 & -(uint)(iVar40 == param_3) | *puVar19 & -(uint)(iVar48 == param_3) |
               *puVar16 & -(uint)(iVar56 == param_3) | *puVar13 & -(uint)(iVar64 == param_3);
    param_1[1] = uVar34 & -(uint)bVar9 | uVar30 & -(uint)(iVar43 == param_3) |
                 uVar27 & -(uint)(iVar51 == param_3) | uVar24 & -(uint)(iVar59 == param_3) |
                 uVar21 & -(uint)(iVar39 == param_3) | uVar18 & -(uint)(iVar47 == param_3) |
                 uVar15 & -(uint)(iVar55 == param_3) | uVar12 & -(uint)(iVar63 == param_3) |
                 uVar36 & -(uint)bVar11 | uVar32 & -(uint)(iVar45 == param_3) |
                 uVar29 & -(uint)(iVar53 == param_3) | uVar26 & -(uint)(iVar61 == param_3) |
                 uVar23 & -(uint)(iVar41 == param_3) | uVar20 & -(uint)(iVar49 == param_3) |
                 uVar17 & -(uint)(iVar57 == param_3) | uVar14 & -(uint)(iVar65 == param_3);
    param_1 = param_1 + 2;
    iVar37 = iVar37 + -1;
  } while (iVar37 != 0);
  return;
}

