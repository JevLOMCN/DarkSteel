// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// GetClamped @ 14b06d1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::MetasoundClampNodePrivate::TClamp<Metasound::FAudioBuffer>::GetClamped
          (FAudioBuffer *param_1,FAudioBuffer *param_2,FAudioBuffer *param_3,FAudioBuffer *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulonglong uVar18;
  
  if ((1 < (byte)LogMetaSound._0_1_) && (param_4->InitialNum != (param_4->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar4 = (param_4->Buffer).AllocatorInstance.Data;
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
  if ((1 < (byte)LogMetaSound._0_1_) && (param_3->InitialNum != (param_3->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar7 = (param_3->Buffer).AllocatorInstance.Data;
  if ((1 < (byte)LogMetaSound._0_1_) && (param_1->InitialNum != (param_1->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar3 = (param_1->Buffer).ArrayNum;
  lVar11 = (longlong)(int)uVar3;
  uVar15 = 0;
  uVar17 = 0;
  if ((0 < (int)uVar3) && (0xf < uVar3)) {
    lVar10 = (longlong)(int)(uVar3 - 1);
    pFVar8 = pFVar4 + lVar10 * 4;
    if ((((pFVar5 + lVar10 * 4 < pFVar4) || (pFVar8 < pFVar5)) &&
        ((pFVar6 + lVar10 * 4 < pFVar4 || (pFVar8 < pFVar6)))) &&
       ((pFVar7 + lVar10 * 4 < pFVar4 || (pFVar8 < pFVar7)))) {
      uVar9 = uVar3 & 0x8000000f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
      }
      pFVar8 = pFVar6 + 0x10;
      uVar18 = uVar15;
      do {
        uVar17 = (int)uVar18 + 0x10;
        uVar18 = (ulonglong)uVar17;
        uVar15 = uVar15 + 0x10;
        auVar22 = *(undefined1 (*) [16])(pFVar8 + (longlong)(pFVar5 + (0x10 - (longlong)pFVar6)));
        pFVar1 = pFVar8 + 0x40;
        auVar20 = minps(*(undefined1 (*) [16])
                         (pFVar8 + (longlong)(pFVar5 + (-0x10 - (longlong)pFVar6))),
                        *(undefined1 (*) [16])
                         (pFVar8 + (longlong)(pFVar7 + (-0x10 - (longlong)pFVar6))));
        auVar21 = maxps(auVar20,*(undefined1 (*) [16])(pFVar8 + -0x10));
        auVar20 = *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar7 + (-0x40 - (longlong)pFVar6)));
        *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar4 + (-0x50 - (longlong)pFVar6))) = auVar21;
        auVar20 = minps(*(undefined1 (*) [16])
                         (pFVar1 + (longlong)(pFVar5 + (-0x40 - (longlong)pFVar6))),auVar20);
        auVar21 = maxps(auVar20,*(undefined1 (*) [16])pFVar8);
        auVar20 = *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar7 + (-0x30 - (longlong)pFVar6)));
        *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar4 + (-0x40 - (longlong)pFVar6))) = auVar21;
        auVar21 = *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar5 + (-0x20 - (longlong)pFVar6)));
        auVar22 = minps(auVar22,auVar20);
        auVar20 = maxps(auVar22,*(undefined1 (*) [16])(pFVar8 + 0x10));
        auVar22 = *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar7 + (-0x20 - (longlong)pFVar6)));
        *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar4 + (-0x30 - (longlong)pFVar6))) = auVar20;
        auVar22 = minps(auVar21,auVar22);
        auVar22 = maxps(auVar22,*(undefined1 (*) [16])(pFVar8 + 0x20));
        *(undefined1 (*) [16])(pFVar1 + (longlong)(pFVar4 + (-0x20 - (longlong)pFVar6))) = auVar22;
        pFVar8 = pFVar1;
      } while ((longlong)uVar15 < (longlong)(int)(uVar3 - uVar9));
    }
  }
  lVar10 = (longlong)(int)uVar17;
  if (lVar10 < lVar11) {
    if (3 < lVar11 - lVar10) {
      lVar2 = lVar10 * 4;
      lVar12 = (longlong)pFVar4 - (longlong)pFVar6;
      lVar13 = (longlong)pFVar7 - (longlong)pFVar6;
      lVar14 = (longlong)pFVar5 - (longlong)pFVar6;
      lVar16 = ((lVar11 - lVar10) - 4U >> 2) + 1;
      lVar10 = lVar10 + lVar16 * 4;
      pFVar8 = pFVar6 + lVar2 + 4;
      do {
        fVar19 = *(float *)(pFVar8 + lVar14 + -4);
        if (*(float *)(pFVar8 + lVar13 + -4) <= *(float *)(pFVar8 + lVar14 + -4)) {
          fVar19 = *(float *)(pFVar8 + lVar13 + -4);
        }
        if (fVar19 <= *(float *)(pFVar8 + -4)) {
          fVar19 = *(float *)(pFVar8 + -4);
        }
        *(float *)(pFVar8 + lVar12 + -4) = fVar19;
        fVar19 = *(float *)(pFVar8 + lVar13);
        if (*(float *)(pFVar8 + lVar14) <= *(float *)(pFVar8 + lVar13)) {
          fVar19 = *(float *)(pFVar8 + lVar14);
        }
        if (fVar19 <= *(float *)pFVar8) {
          fVar19 = *(float *)pFVar8;
        }
        *(float *)(pFVar8 + lVar12) = fVar19;
        fVar19 = *(float *)(pFVar8 + lVar14 + 4);
        if (*(float *)(pFVar8 + lVar13 + 4) <= *(float *)(pFVar8 + lVar14 + 4)) {
          fVar19 = *(float *)(pFVar8 + lVar13 + 4);
        }
        if (fVar19 <= *(float *)(pFVar8 + 4)) {
          fVar19 = *(float *)(pFVar8 + 4);
        }
        *(float *)(pFVar8 + lVar12 + 4) = fVar19;
        fVar19 = *(float *)(pFVar8 + lVar14 + 8);
        if (*(float *)(pFVar8 + lVar13 + 8) <= *(float *)(pFVar8 + lVar14 + 8)) {
          fVar19 = *(float *)(pFVar8 + lVar13 + 8);
        }
        if (fVar19 <= *(float *)(pFVar8 + 8)) {
          fVar19 = *(float *)(pFVar8 + 8);
        }
        *(float *)(pFVar8 + lVar12 + 8) = fVar19;
        lVar16 = lVar16 + -1;
        pFVar8 = pFVar8 + 0x10;
      } while (lVar16 != 0);
      if (lVar11 <= lVar10) {
        return;
      }
    }
    lVar11 = lVar11 - lVar10;
    pFVar8 = pFVar6 + lVar10 * 4;
    do {
      fVar19 = *(float *)(pFVar8 + ((longlong)pFVar5 - (longlong)pFVar6));
      if (*(float *)(pFVar8 + ((longlong)pFVar7 - (longlong)pFVar6)) <=
          *(float *)(pFVar8 + ((longlong)pFVar5 - (longlong)pFVar6))) {
        fVar19 = *(float *)(pFVar8 + ((longlong)pFVar7 - (longlong)pFVar6));
      }
      if (fVar19 <= *(float *)pFVar8) {
        fVar19 = *(float *)pFVar8;
      }
      *(float *)(pFVar8 + 4 + (longlong)(pFVar4 + (-4 - (longlong)pFVar6))) = fVar19;
      lVar11 = lVar11 + -1;
      pFVar8 = pFVar8 + 4;
    } while (lVar11 != 0);
  }
  return;
}

