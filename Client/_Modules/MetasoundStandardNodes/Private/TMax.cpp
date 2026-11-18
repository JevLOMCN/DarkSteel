// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// GetMax @ 14b1924a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::MetasoundMaxNodePrivate::TMax<Metasound::FAudioBuffer>::GetMax
          (FAudioBuffer *param_1,FAudioBuffer *param_2,FAudioBuffer *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulonglong uVar14;
  
  if ((1 < (byte)LogMetaSound._0_1_) && (param_3->InitialNum != (param_3->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar4 = (param_3->Buffer).AllocatorInstance.Data;
  if ((1 < (byte)LogMetaSound._0_1_) && (param_1->InitialNum != (param_1->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar5 = (param_1->Buffer).AllocatorInstance.Data;
  if ((1 < (byte)LogMetaSound._0_1_) && (param_2->InitialNum != (param_2->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar6 = (param_2->Buffer).AllocatorInstance.Data;
  if ((1 < (byte)LogMetaSound._0_1_) && (param_1->InitialNum != (param_1->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar3 = (param_1->Buffer).ArrayNum;
  lVar10 = (longlong)(int)uVar3;
  uVar11 = 0;
  uVar13 = 0;
  if ((0 < (int)uVar3) && (0xf < uVar3)) {
    lVar9 = (longlong)(int)(uVar3 - 1);
    if (((pFVar5 + lVar9 * 4 < pFVar4) || (pFVar4 + lVar9 * 4 < pFVar5)) &&
       ((pFVar6 + lVar9 * 4 < pFVar4 || (pFVar4 + lVar9 * 4 < pFVar6)))) {
      uVar8 = uVar3 & 0x8000000f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
      }
      pFVar7 = pFVar5 + 0x10;
      uVar14 = uVar11;
      do {
        uVar13 = (int)uVar14 + 0x10;
        uVar14 = (ulonglong)uVar13;
        uVar11 = uVar11 + 0x10;
        auVar17 = *(undefined1 (*) [16])pFVar7;
        pFVar1 = pFVar7 + 0x40;
        auVar16 = maxps(*(undefined1 (*) [16])(pFVar7 + -0x10),
                        *(undefined1 (*) [16])
                         (pFVar7 + (longlong)(pFVar6 + (-0x10 - (longlong)pFVar5))));
        auVar18 = *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar6 + (-0x40 - (longlong)pFVar5)));
        *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar4 + (-0x50 - (longlong)pFVar5))) = auVar16;
        auVar16 = *(undefined1 (*) [16])(pFVar7 + 0x10);
        auVar18 = maxps(auVar17,auVar18);
        auVar17 = *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar6 + (-0x30 - (longlong)pFVar5)));
        *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar4 + (-0x40 - (longlong)pFVar5))) = auVar18;
        auVar18 = maxps(auVar16,auVar17);
        auVar17 = *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar6 + (-0x20 - (longlong)pFVar5)));
        *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar4 + (-0x30 - (longlong)pFVar5))) = auVar18;
        auVar17 = maxps(*(undefined1 (*) [16])(pFVar7 + 0x20),auVar17);
        *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar4 + (-0x20 - (longlong)pFVar5))) = auVar17;
        pFVar7 = pFVar1;
      } while ((longlong)uVar11 < (longlong)(int)(uVar3 - uVar8));
    }
  }
  lVar9 = (longlong)(int)uVar13;
  if (lVar9 < lVar10) {
    if (3 < lVar10 - lVar9) {
      lVar2 = lVar9 * 4;
      lVar12 = ((lVar10 - lVar9) - 4U >> 2) + 1;
      lVar9 = lVar9 + lVar12 * 4;
      pFVar7 = pFVar6 + lVar2 + 4;
      do {
        fVar15 = *(float *)(pFVar7 + (longlong)(pFVar5 + (-4 - (longlong)pFVar6)));
        if (*(float *)(pFVar7 + (longlong)(pFVar5 + (-4 - (longlong)pFVar6))) <=
            *(float *)(pFVar7 + -4)) {
          fVar15 = *(float *)(pFVar7 + -4);
        }
        pFVar1 = pFVar7 + 0x10;
        *(float *)(pFVar1 + (longlong)(pFVar4 + (-0x14 - (longlong)pFVar6))) = fVar15;
        fVar15 = *(float *)pFVar7;
        if (*(float *)pFVar7 <= *(float *)(pFVar1 + (longlong)(pFVar5 + (-0x10 - (longlong)pFVar6)))
           ) {
          fVar15 = *(float *)(pFVar1 + (longlong)(pFVar5 + (-0x10 - (longlong)pFVar6)));
        }
        *(float *)(pFVar1 + (longlong)(pFVar4 + (-0x10 - (longlong)pFVar6))) = fVar15;
        fVar15 = *(float *)(pFVar1 + (longlong)(pFVar5 + (-0xc - (longlong)pFVar6)));
        if (*(float *)(pFVar1 + (longlong)(pFVar5 + (-0xc - (longlong)pFVar6))) <=
            *(float *)(pFVar7 + 4)) {
          fVar15 = *(float *)(pFVar7 + 4);
        }
        *(float *)(pFVar1 + (longlong)(pFVar4 + (-0xc - (longlong)pFVar6))) = fVar15;
        fVar15 = *(float *)(pFVar1 + (longlong)(pFVar5 + (-8 - (longlong)pFVar6)));
        if (*(float *)(pFVar1 + (longlong)(pFVar5 + (-8 - (longlong)pFVar6))) <=
            *(float *)(pFVar7 + 8)) {
          fVar15 = *(float *)(pFVar7 + 8);
        }
        *(float *)(pFVar1 + (longlong)(pFVar4 + (-8 - (longlong)pFVar6))) = fVar15;
        lVar12 = lVar12 + -1;
        pFVar7 = pFVar1;
      } while (lVar12 != 0);
      if (lVar10 <= lVar9) {
        return;
      }
    }
    pFVar7 = pFVar6 + lVar9 * 4;
    lVar10 = lVar10 - lVar9;
    do {
      fVar15 = *(float *)(pFVar7 + ((longlong)pFVar5 - (longlong)pFVar6));
      if (*(float *)(pFVar7 + ((longlong)pFVar5 - (longlong)pFVar6)) <= *(float *)pFVar7) {
        fVar15 = *(float *)pFVar7;
      }
      pFVar7 = pFVar7 + 4;
      *(float *)(pFVar7 + (longlong)(pFVar4 + (-4 - (longlong)pFVar6))) = fVar15;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

