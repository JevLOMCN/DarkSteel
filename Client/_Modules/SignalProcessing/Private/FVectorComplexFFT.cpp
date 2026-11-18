// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// ForwardComplexToComplex @ 1444fc110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Audio::FVectorComplexFFT::ForwardComplexToComplex
          (FVectorComplexFFT *this,float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  bool bVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  float *pfVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  float *pfVar36;
  longlong lVar37;
  int iVar38;
  longlong lVar39;
  int iVar40;
  longlong lVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  int local_res8;
  longlong local_e8;
  
  uVar42 = this->Log2FFTSize;
  if ((uVar42 & 1) == 0) {
    Radix4ButterflyConstantWeight(this,param_1,param_2,uVar42);
    local_res8 = 2;
  }
  else {
    Radix8ButterflyConstantWeight(this,param_1,param_2,uVar42);
    local_res8 = 3;
  }
  fVar10 = _UNK_15076c64c;
  fVar9 = _UNK_15076c648;
  fVar8 = _UNK_15076c644;
  fVar7 = ___xmm_bf8000003f800000bf8000003f800000;
  iVar40 = this->Log2FFTSize;
  iVar33 = local_res8;
  if (local_res8 < iVar40 + -4) {
    do {
      if ((iVar40 - iVar33 < 3) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("InStageIndex >= 3",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VectorFFT.cpp"
                              ,0xe3,L""), bVar27)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar40 = 1 << ((char)(iVar40 - iVar33) - 2U & 0x1f);
      if (0 < iVar40) {
        lVar29 = (longlong)(iVar40 * 4);
        lVar37 = iVar40 * 2 - lVar29;
        lVar39 = iVar40 * 6 - lVar29;
        pfVar32 = param_2 + lVar29;
        uVar30 = (ulonglong)((iVar40 - 1U >> 1) + 1);
        pfVar36 = param_2;
        do {
          pfVar1 = pfVar32 + lVar39;
          pfVar2 = pfVar32 + lVar37;
          fVar51 = *pfVar1 + *pfVar2;
          fVar52 = pfVar1[1] + pfVar2[1];
          fVar53 = pfVar1[2] + pfVar2[2];
          fVar54 = pfVar1[3] + pfVar2[3];
          fVar55 = *pfVar32 + *pfVar36;
          fVar56 = pfVar32[1] + pfVar36[1];
          fVar57 = pfVar32[2] + pfVar36[2];
          fVar58 = pfVar32[3] + pfVar36[3];
          fVar67 = *pfVar36 - *pfVar32;
          fVar69 = pfVar36[1] - pfVar32[1];
          fVar71 = pfVar36[2] - pfVar32[2];
          fVar73 = pfVar36[3] - pfVar32[3];
          fVar59 = (*pfVar2 - *pfVar1) * fVar7;
          fVar61 = (pfVar2[1] - pfVar1[1]) * fVar8;
          fVar63 = (pfVar2[2] - pfVar1[2]) * fVar9;
          fVar65 = (pfVar2[3] - pfVar1[3]) * fVar10;
          *pfVar36 = fVar51 + fVar55;
          pfVar36[1] = fVar52 + fVar56;
          pfVar36[2] = fVar53 + fVar57;
          pfVar36[3] = fVar54 + fVar58;
          pfVar36 = pfVar36 + 4;
          pfVar1 = pfVar32 + lVar37;
          *pfVar1 = fVar55 - fVar51;
          pfVar1[1] = fVar56 - fVar52;
          pfVar1[2] = fVar57 - fVar53;
          pfVar1[3] = fVar58 - fVar54;
          *pfVar32 = fVar61 + fVar67;
          pfVar32[1] = fVar59 + fVar69;
          pfVar32[2] = fVar65 + fVar71;
          pfVar32[3] = fVar63 + fVar73;
          pfVar1 = pfVar32 + lVar39;
          *pfVar1 = fVar67 - fVar61;
          pfVar1[1] = fVar69 - fVar59;
          pfVar1[2] = fVar71 - fVar65;
          pfVar1[3] = fVar73 - fVar63;
          pfVar32 = pfVar32 + 4;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
      iVar40 = this->Log2FFTSize;
      iVar33 = iVar33 + 2;
    } while (iVar33 < iVar40 + -4);
  }
  uVar42 = 1;
  if (local_res8 < iVar40 + -4) {
    lVar29 = 1;
    local_e8 = 1;
    do {
      iVar33 = 1 << ((byte)local_res8 & 0x1f);
      if ((int)uVar42 < iVar33) {
        lVar37 = lVar29 * 0xb0;
        do {
          if (local_res8 < iVar40 + -4) {
            iVar34 = local_res8;
            do {
              uVar28 = 0;
              if ((int)uVar42 < (this->Radix4Weights).ArrayNum) {
                uVar28 = ~uVar42 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = (this->Radix4Weights).AllocatorInstance.Data;
              iVar40 = this->Log2FFTSize;
              bVar6 = (char)iVar40 - (char)iVar34;
              pFVar3 = pFVar4 + lVar37;
              fVar7 = *(float *)pFVar3;
              fVar8 = *(float *)(pFVar3 + 4);
              fVar9 = *(float *)(pFVar3 + 8);
              fVar10 = *(float *)(pFVar3 + 0xc);
              pFVar3 = pFVar4 + lVar37 + 0x40;
              fVar51 = *(float *)pFVar3;
              fVar52 = *(float *)(pFVar3 + 4);
              fVar53 = *(float *)(pFVar3 + 8);
              fVar54 = *(float *)(pFVar3 + 0xc);
              pFVar3 = pFVar4 + lVar37 + 0x50;
              fVar55 = *(float *)pFVar3;
              fVar56 = *(float *)(pFVar3 + 4);
              fVar57 = *(float *)(pFVar3 + 8);
              fVar58 = *(float *)(pFVar3 + 0xc);
              iVar38 = 1 << (bVar6 - 2 & 0x1f);
              pFVar3 = pFVar4 + lVar37 + 0x70;
              fVar59 = *(float *)pFVar3;
              fVar61 = *(float *)(pFVar3 + 4);
              fVar63 = *(float *)(pFVar3 + 8);
              fVar65 = *(float *)(pFVar3 + 0xc);
              pFVar3 = pFVar4 + lVar37 + 0x80;
              fVar67 = *(float *)pFVar3;
              fVar69 = *(float *)(pFVar3 + 4);
              fVar71 = *(float *)(pFVar3 + 8);
              fVar73 = *(float *)(pFVar3 + 0xc);
              pFVar3 = pFVar4 + lVar37 + 0xa0;
              fVar11 = *(float *)pFVar3;
              fVar12 = *(float *)(pFVar3 + 4);
              fVar13 = *(float *)(pFVar3 + 8);
              fVar14 = *(float *)(pFVar3 + 0xc);
              pFVar3 = pFVar4 + lVar37 + 0x90;
              fVar15 = *(float *)pFVar3;
              fVar16 = *(float *)(pFVar3 + 4);
              fVar17 = *(float *)(pFVar3 + 8);
              fVar18 = *(float *)(pFVar3 + 0xc);
              pFVar3 = pFVar4 + lVar37 + 0x60;
              fVar19 = *(float *)pFVar3;
              fVar20 = *(float *)(pFVar3 + 4);
              fVar21 = *(float *)(pFVar3 + 8);
              fVar22 = *(float *)(pFVar3 + 0xc);
              pFVar3 = pFVar4 + lVar37 + 0x10;
              fVar23 = *(float *)pFVar3;
              fVar24 = *(float *)(pFVar3 + 4);
              fVar25 = *(float *)(pFVar3 + 8);
              fVar26 = *(float *)(pFVar3 + 0xc);
              if (0 < iVar38) {
                iVar31 = uVar42 << (bVar6 & 0x1f);
                lVar39 = (longlong)(iVar31 * 2);
                pfVar32 = param_2 + lVar39;
                lVar35 = (iVar31 + iVar38 * 2) * 2 - lVar39;
                lVar41 = (iVar31 + iVar38) * 2 - lVar39;
                lVar39 = (iVar31 + iVar38 * 3) * 2 - lVar39;
                uVar30 = (ulonglong)((iVar38 - 1U >> 1) + 1);
                do {
                  pfVar36 = pfVar32 + lVar41;
                  pfVar1 = pfVar32 + lVar35;
                  pfVar2 = pfVar32 + lVar39;
                  fVar75 = pfVar36[1] * fVar51 + *pfVar36;
                  fVar76 = *pfVar36 * fVar52 + pfVar36[1];
                  fVar77 = pfVar36[3] * fVar53 + pfVar36[2];
                  fVar78 = pfVar36[2] * fVar54 + pfVar36[3];
                  fVar43 = pfVar1[1] * fVar59 + *pfVar1;
                  fVar44 = *pfVar1 * fVar61 + pfVar1[1];
                  fVar45 = pfVar1[3] * fVar63 + pfVar1[2];
                  fVar46 = pfVar1[2] * fVar65 + pfVar1[3];
                  fVar47 = pfVar2[1] * fVar11 + *pfVar2;
                  fVar48 = *pfVar2 * fVar12 + pfVar2[1];
                  fVar49 = pfVar2[3] * fVar13 + pfVar2[2];
                  fVar50 = pfVar2[2] * fVar14 + pfVar2[3];
                  fVar60 = fVar55 * fVar43 + *pfVar32;
                  fVar62 = fVar56 * fVar44 + pfVar32[1];
                  fVar64 = fVar57 * fVar45 + pfVar32[2];
                  fVar66 = fVar58 * fVar46 + pfVar32[3];
                  fVar68 = fVar19 * fVar43 + *pfVar32;
                  fVar70 = fVar20 * fVar44 + pfVar32[1];
                  fVar72 = fVar21 * fVar45 + pfVar32[2];
                  fVar74 = fVar22 * fVar46 + pfVar32[3];
                  fVar43 = fVar67 * fVar47 + fVar75;
                  fVar44 = fVar69 * fVar48 + fVar76;
                  fVar45 = fVar71 * fVar49 + fVar77;
                  fVar46 = fVar73 * fVar50 + fVar78;
                  fVar75 = fVar15 * fVar47 + fVar75;
                  fVar76 = fVar16 * fVar48 + fVar76;
                  fVar77 = fVar17 * fVar49 + fVar77;
                  fVar78 = fVar18 * fVar50 + fVar78;
                  *pfVar32 = fVar7 * fVar43 + fVar60;
                  pfVar32[1] = fVar8 * fVar44 + fVar62;
                  pfVar32[2] = fVar9 * fVar45 + fVar64;
                  pfVar32[3] = fVar10 * fVar46 + fVar66;
                  pfVar36 = pfVar32 + lVar41;
                  *pfVar36 = fVar23 * fVar43 + fVar60;
                  pfVar36[1] = fVar24 * fVar44 + fVar62;
                  pfVar36[2] = fVar25 * fVar45 + fVar64;
                  pfVar36[3] = fVar26 * fVar46 + fVar66;
                  pFVar3 = pFVar4 + lVar37 + 0x20;
                  fVar43 = *(float *)(pFVar3 + 4);
                  fVar44 = *(float *)(pFVar3 + 8);
                  fVar45 = *(float *)(pFVar3 + 0xc);
                  pfVar36 = pfVar32 + lVar35;
                  *pfVar36 = fVar76 * *(float *)pFVar3 + fVar68;
                  pfVar36[1] = fVar75 * fVar43 + fVar70;
                  pfVar36[2] = fVar78 * fVar44 + fVar72;
                  pfVar36[3] = fVar77 * fVar45 + fVar74;
                  pFVar3 = pFVar4 + lVar37 + 0x30;
                  fVar43 = *(float *)(pFVar3 + 4);
                  fVar44 = *(float *)(pFVar3 + 8);
                  fVar45 = *(float *)(pFVar3 + 0xc);
                  pfVar36 = pfVar32 + lVar39;
                  *pfVar36 = fVar76 * *(float *)pFVar3 + fVar68;
                  pfVar36[1] = fVar75 * fVar43 + fVar70;
                  pfVar36[2] = fVar78 * fVar44 + fVar72;
                  pfVar36[3] = fVar77 * fVar45 + fVar74;
                  pfVar32 = pfVar32 + 4;
                  uVar30 = uVar30 - 1;
                  lVar29 = local_e8;
                } while (uVar30 != 0);
              }
              iVar34 = iVar34 + 2;
            } while (iVar34 < iVar40 + -4);
          }
          lVar29 = lVar29 + 1;
          uVar42 = uVar42 + 1;
          lVar37 = lVar37 + 0xb0;
          local_e8 = lVar29;
        } while ((int)uVar42 < iVar33);
      }
      local_res8 = local_res8 + 2;
    } while (local_res8 < iVar40 + -4);
  }
  if (local_res8 < iVar40 + -2) {
    Radix4Butterfly2ndToFinal(this,param_2,iVar40 + -4);
  }
  Radix4ButterflyFinal(this,param_2,this->Log2FFTSize + -2);
  return;
}

// GenerateFinalIndices @ 1444fecc0

void __thiscall Audio::FVectorComplexFFT::GenerateFinalIndices(FVectorComplexFFT *this)

{
  TArray<Audio::FVectorComplexFFT::FFinalIndices,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  iVar8 = (int)(this->FFTSize + (this->FFTSize >> 0x1f & 0xfU)) >> 4;
  if ((this->FFTSize < 0x10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FFTSize >= FinalPassSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VectorFFT.cpp"
                         ,0x29e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar1 = &this->FinalIndices;
  piVar2 = &(this->FinalIndices).ArrayMax;
  (this->FinalIndices).ArrayNum = 0;
  piVar3 = &(this->FinalIndices).ArrayNum;
  if ((this->FinalIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar8,&pTVar1->AllocatorInstance,piVar3,piVar2);
  uVar12 = this->FFTSize;
  if (((int)uVar12 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InValue > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VectorFFT.cpp"
                         ,0x291,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = (longlong)(int)uVar12 - ((ulonglong)(longlong)(int)uVar12 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
  if (((char)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\x01')
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("FMath::CountBits(InValue) == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VectorFFT.cpp"
                            ,0x292,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar4 = 0;
  if (uVar12 != 0) {
    for (; (uVar12 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
    }
  }
  cVar7 = '\0';
  if (uVar12 != 0) {
    cVar7 = (char)iVar4;
  }
  uVar12 = 0;
  uVar10 = 0;
  if (0 < iVar8) {
    lVar13 = 0;
    do {
      if (iVar8 <= lVar13) {
        return;
      }
      uVar14 = (uint)uVar10;
      uVar11 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                           ((longlong)
                                            &`private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                                             ::__l2::ByteReversal + (uVar10 & 0xff)),
                                          *(undefined1 *)
                                           ((longlong)
                                            &`private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                                             ::__l2::ByteReversal + (uVar10 >> 8 & 0xff))),
                                 *(undefined1 *)
                                  ((longlong)
                                   &`private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                                    ::__l2::ByteReversal + (uVar10 >> 0x10 & 0xff))),
                        *(undefined1 *)
                         ((longlong)
                          &`private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                           ::__l2::ByteReversal + (uVar10 >> 0x18))) >> (0x24U - cVar7 & 0x1f);
      if (uVar14 == uVar11) {
        uVar9 = 0;
        if ((int)uVar12 < *piVar3) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = uVar12 + 1;
        *(ulonglong *)((pTVar1->AllocatorInstance).Data + lVar13 * 8) =
             (ulonglong)uVar11 << 0x20 | uVar10;
        lVar13 = lVar13 + 1;
      }
      else if ((int)uVar14 < (int)uVar11) {
        uVar9 = 0;
        if ((int)uVar12 < *piVar3) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(ulonglong *)((pTVar1->AllocatorInstance).Data + lVar13 * 8) =
             (ulonglong)uVar11 << 0x20 | uVar10;
        uVar9 = 0;
        if ((int)(uVar12 + 1) < *piVar3) {
          uVar9 = ~(uVar12 + 1) >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = uVar12 + 2;
        *(ulonglong *)((pTVar1->AllocatorInstance).Data + lVar13 * 8 + 8) =
             uVar10 << 0x20 | (ulonglong)uVar11;
        lVar13 = lVar13 + 2;
      }
      uVar10 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < iVar8);
  }
  return;
}

// GenerateFinalWeights @ 1444ff030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FVectorComplexFFT::GenerateFinalWeights(FVectorComplexFFT *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double _X;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  uint uVar30;
  uint uVar31;
  
  iVar9 = (int)(this->FFTSize + (this->FFTSize >> 0x1f & 0xfU)) >> 4;
  if ((this->FFTSize < 0x10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FFTSize >= FinalPassSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VectorFFT.cpp"
                         ,0x2cc,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar1 = &(this->FinalWeights).ArrayMax;
  (this->FinalWeights).ArrayNum = 0;
  piVar2 = &(this->FinalWeights).ArrayNum;
  if ((this->FinalWeights).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x180,0x10,0,&(this->FinalWeights).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x180,0x10,iVar9,&(this->FinalWeights).AllocatorInstance,piVar2,piVar1);
  uVar11 = 0;
  dVar5 = __real_3ff0000000000000 / (double)this->FFTSize;
  if (0 < iVar9) {
    lVar15 = 0;
    lVar12 = 0;
    dVar4 = dVar5 * __real_401921fb60000000;
    dVar7 = dVar5 * ___real_402921fb60000000;
    dVar6 = dVar5 * ___real_4032d97c88000000;
    uVar26 = (undefined4)__real_3e1921fb60000000;
    uVar28 = (undefined4)((ulonglong)__real_3e1921fb60000000 >> 0x20);
    uVar30 = (uint)__xmm_80000000000000008000000000000000;
    uVar31 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      uVar14 = ~uVar11 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar11 < (this->FinalIndices).ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = *(uint *)((this->FinalIndices).AllocatorInstance.Data + lVar15 * 8);
      dVar20 = (double)CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                   ((longlong)
                                                    &
                                                  `private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                                                  ::__l2::ByteReversal +
                                                  ((ulonglong)(uVar10 << 2) & 0xff)),
                                                  *(undefined1 *)
                                                   ((longlong)
                                                    &
                                                  `private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                                                  ::__l2::ByteReversal +
                                                  (ulonglong)(byte)((uVar10 << 2) >> 8))),
                                         *(undefined1 *)
                                          ((longlong)
                                           &`private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                                            ::__l2::ByteReversal +
                                          ((ulonglong)((uVar10 & 0x3fffffff) >> 0xe) & 0xff))),
                                *(undefined1 *)
                                 ((longlong)
                                  &`private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                                   ::__l2::ByteReversal + (ulonglong)((uVar10 & 0x3fffffff) >> 0x16)
                                 ));
      dVar21 = dVar20 * (double)CONCAT44(uVar28,uVar26);
      dVar22 = dVar7 + dVar21;
      dVar23 = dVar6 + dVar21;
      _X = dVar4 + dVar21;
      dVar16 = tan(dVar21);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar12 + 0x30) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar31,
                                   SUB84(dVar16,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar13 = lVar15 * 0x180;
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x34) = (float)dVar16;
      dVar16 = tan(_X);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x38) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar31,
                                   SUB84(dVar16,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x3c) = (float)dVar16;
      dVar16 = tan(dVar22);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x50) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar31,
                                   SUB84(dVar16,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x54) = (float)dVar16;
      dVar16 = tan(dVar23);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x58) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar31,
                                   SUB84(dVar16,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x5c) = (float)dVar16;
      dVar16 = cos(dVar21);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      fVar27 = (float)dVar16;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x20) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x24) = fVar27;
      dVar17 = cos(_X);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      fVar25 = (float)dVar17;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x28) = fVar25;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar29 = (float)(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar31,
                                       SUB84(dVar16,0) ^ uVar30);
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x2c) = fVar25;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xf0) = fVar29;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar24 = (float)(double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar31,
                                       SUB84(dVar17,0) ^ uVar30);
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xf4) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xf8) = fVar24;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xfc) = fVar25;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x100) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x104) = fVar29;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x108) = fVar25;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x10c) = fVar24;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xe0) = fVar29;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xe4) = fVar29;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xe8) = fVar24;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xec) = fVar24;
      dVar16 = cos(dVar22);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      fVar27 = (float)dVar16;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x40) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x44) = fVar27;
      dVar17 = cos(dVar23);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      fVar25 = (float)dVar17;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x48) = fVar25;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar29 = (float)(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar31,
                                       SUB84(dVar16,0) ^ uVar30);
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x4c) = fVar25;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x110) = fVar29;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar24 = (float)(double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar31,
                                       SUB84(dVar17,0) ^ uVar30);
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x114) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x118) = fVar24;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x11c) = fVar25;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x120) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x124) = fVar29;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x128) = fVar25;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 300) = fVar24;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x130) = fVar29;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x134) = fVar29;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x138) = fVar24;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar20 = dVar20 * ___real_3e2921fb60000000;
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x13c) = fVar24;
      dVar16 = tan(dVar20);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x70) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar31,
                                   SUB84(dVar16,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x74) = (float)dVar16;
      dVar16 = dVar5 * ___real_402921fb60000000 + dVar21 + dVar21;
      dVar17 = tan(dVar16);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x78) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar31,
                                   SUB84(dVar17,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar18 = dVar5 * ___real_403921fb60000000;
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x7c) = (float)dVar17;
      dVar17 = dVar18 + dVar21 + dVar21;
      dVar18 = tan(dVar17);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x90) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar31,
                                   SUB84(dVar18,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar19 = dVar5 * ___real_4042d97c88000000;
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x94) = (float)dVar18;
      dVar18 = dVar19 + dVar21 + dVar21;
      dVar19 = tan(dVar18);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x98) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar31,
                                   SUB84(dVar19,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x9c) = (float)dVar19;
      dVar20 = cos(dVar20);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x60) = (float)dVar20;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 100) = (float)dVar20;
      dVar16 = cos(dVar16);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x68) = (float)dVar16;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x6c) = (float)dVar16;
      fVar27 = (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar31,
                                       SUB84(dVar20,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x140) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x144) = fVar27;
      fVar27 = (float)(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar31,
                                       SUB84(dVar16,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x148) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x14c) = fVar27;
      dVar17 = cos(dVar17);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x80) = (float)dVar17;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x84) = (float)dVar17;
      dVar18 = cos(dVar18);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x88) = (float)dVar18;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x8c) = (float)dVar18;
      fVar27 = (float)(double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar31,
                                       SUB84(dVar17,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x150) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x154) = fVar27;
      fVar27 = (float)(double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar31,
                                       SUB84(dVar18,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x158) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar19 = __real_4008000000000000;
      dVar21 = dVar21 * __real_4008000000000000;
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x15c) = fVar27;
      dVar21 = tan(dVar21);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xb0) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) ^ uVar31,
                                   SUB84(dVar21,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xb4) = (float)dVar21;
      dVar21 = tan(_X * dVar19);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xb8) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) ^ uVar31,
                                   SUB84(dVar21,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xbc) = (float)dVar21;
      dVar22 = tan(dVar22 * dVar19);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xd0) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) ^ uVar31,
                                   SUB84(dVar22,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xd4) = (float)dVar22;
      dVar23 = tan(dVar23 * dVar19);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xd8) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) ^ uVar31,
                                   SUB84(dVar23,0) ^ uVar30);
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar22 = __real_3ff0000000000000;
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xdc) = (float)dVar23;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      fVar27 = (float)((dVar20 + dVar20) - dVar22);
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xa0) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xa4) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      fVar27 = (float)((dVar16 + dVar16) - dVar22);
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xa8) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xac) = fVar27;
      fVar27 = (float)(dVar22 - (dVar20 + dVar20));
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x160) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x164) = fVar27;
      fVar27 = (float)(dVar22 - (dVar16 + dVar16));
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x168) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x16c) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      fVar27 = (float)((dVar17 + dVar17) - dVar22);
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xc0) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xc4) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      fVar27 = (float)((dVar18 + dVar18) - dVar22);
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 200) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0xcc) = fVar27;
      fVar27 = (float)(dVar22 - (dVar17 + dVar17));
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x170) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x174) = fVar27;
      fVar27 = (float)(dVar22 - (dVar18 + dVar18));
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x178) = fVar27;
      uVar10 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = uVar11 + 1;
      lVar15 = lVar15 + 1;
      lVar12 = lVar12 + 0x180;
      uVar26 = (undefined4)__real_3e1921fb60000000;
      uVar28 = (undefined4)((ulonglong)__real_3e1921fb60000000 >> 0x20);
      *(float *)((this->FinalWeights).AllocatorInstance.Data + lVar13 + 0x17c) = fVar27;
    } while (lVar15 < iVar9);
  }
  return;
}

// GenerateRadix4Weights @ 144501b50

void __thiscall Audio::FVectorComplexFFT::GenerateRadix4Weights(FVectorComplexFFT *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  
  if ((this->FFTSize < 0x10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FFTSize >= Radix4PassSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VectorFFT.cpp"
                         ,0x350,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = this->FFTSize;
  piVar1 = &(this->Radix4Weights).ArrayMax;
  piVar2 = &(this->Radix4Weights).ArrayNum;
  *piVar2 = 0;
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0xfU)) >> 4;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,&(this->Radix4Weights).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xb0,0x10,iVar6,&(this->Radix4Weights).AllocatorInstance,piVar2,piVar1);
  uVar4 = __xmm_80000000800000008000000080000000;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar12 = 0;
    lVar11 = 0;
    uVar20 = (undefined4)__real_4008000000000000;
    uVar22 = (undefined4)((ulonglong)__real_4008000000000000 >> 0x20);
    dVar14 = __real_3e1921fb60000000;
    fVar25 = __real_3f800000;
    do {
      dVar14 = (double)CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                   ((longlong)
                                                    &
                                                  `private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                                                  ::__l2::ByteReversal +
                                                  ((ulonglong)(uVar8 * 4) & 0xff)),
                                                  *(undefined1 *)
                                                   ((longlong)
                                                    &
                                                  `private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                                                  ::__l2::ByteReversal +
                                                  (ulonglong)(byte)(uVar8 * 4 >> 8))),
                                         *(undefined1 *)
                                          ((longlong)
                                           &`private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                                            ::__l2::ByteReversal +
                                          ((ulonglong)((uVar8 & 0x3fffffff) >> 0xe) & 0xff))),
                                *(undefined1 *)
                                 ((longlong)
                                  &`private:_unsigned_int___cdecl_Audio::FVectorComplexFFT::ReverseBits(unsigned_int)___ptr64'
                                   ::__l2::ByteReversal + (ulonglong)((uVar8 & 0x3fffffff) >> 0x16))
                               ) * dVar14;
      dVar13 = cos(dVar14);
      fVar17 = (float)dVar13;
      dVar13 = tan(dVar14);
      fVar18 = (float)dVar13;
      dVar13 = cos(dVar14 + dVar14);
      fVar24 = (float)dVar13;
      dVar13 = tan(dVar14 + dVar14);
      fVar15 = (float)dVar13;
      fVar25 = (fVar24 + fVar24) - fVar25;
      dVar14 = tan(dVar14 * (double)CONCAT44(uVar22,uVar20));
      uVar9 = ~uVar8 >> 0x1f;
      fVar19 = (float)dVar14;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar11) = fVar17;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar10 = lVar12 * 0xb0;
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x40) = (uint)fVar18 ^ uVar4
      ;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x50) = fVar24;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x70) = (uint)fVar15 ^ uVar4
      ;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x80) = fVar25;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0xa0) = (uint)fVar19 ^ uVar4
      ;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar16 = (uint)fVar17 ^ uVar4;
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x10) = uVar16;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x20) = uVar16;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x30) = fVar17;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar23 = (uint)fVar24 ^ uVar4;
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x60) = uVar23;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar21 = (uint)fVar25 ^ uVar4;
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x90) = uVar21;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 4) = fVar17;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x44) = fVar18;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x54) = fVar24;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x74) = fVar15;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x84) = fVar25;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0xa4) = fVar19;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x14) = uVar16;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x24) = fVar17;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x34) = uVar16;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 100) = uVar23;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x94) = uVar21;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 8) = fVar17;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x48) = (uint)fVar18 ^ uVar4
      ;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x58) = fVar24;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x78) = (uint)fVar15 ^ uVar4
      ;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x88) = fVar25;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0xa8) = (uint)fVar19 ^ uVar4
      ;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x18) = uVar16;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x28) = uVar16;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x38) = fVar17;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x68) = uVar23;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x98) = uVar21;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0xc) = fVar17;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x4c) = fVar18;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x5c) = fVar24;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x7c) = fVar15;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x8c) = fVar25;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0xac) = fVar19;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x1c) = uVar16;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x2c) = fVar17;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x3c) = uVar16;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x6c) = uVar23;
      uVar7 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar14 = __real_3e1921fb60000000;
      fVar25 = __real_3f800000;
      uVar8 = uVar8 + 1;
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0xb0;
      *(uint *)((this->Radix4Weights).AllocatorInstance.Data + lVar10 + 0x9c) = uVar21;
      uVar20 = (undefined4)__real_4008000000000000;
      uVar22 = (undefined4)((ulonglong)__real_4008000000000000 >> 0x20);
    } while (lVar12 < iVar6);
  }
  return;
}

// Radix4Butterfly2ndToFinal @ 144514c50

void __thiscall
Audio::FVectorComplexFFT::Radix4Butterfly2ndToFinal
          (FVectorComplexFFT *this,float *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  bool bVar45;
  uint uVar46;
  float *pfVar47;
  longlong lVar48;
  uint uVar49;
  longlong lVar50;
  float *pfVar51;
  longlong lVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  uVar49 = 0;
  bVar4 = (byte)param_2 & 0x1f;
  lVar50 = (longlong)(1 << bVar4);
  if (0 < 1 << bVar4) {
    pfVar51 = param_1 + 0x10;
    lVar52 = 0;
    do {
      uVar46 = 0;
      if ((int)uVar49 < (this->Radix4Weights).ArrayNum) {
        uVar46 = ~uVar49 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar45)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Radix4Weights).AllocatorInstance.Data;
      lVar48 = 2;
      uVar41 = *(undefined8 *)(pFVar2 + lVar52 + 0x20);
      uVar42 = *(undefined8 *)(pFVar2 + lVar52 + 0x20 + 8);
      pFVar1 = pFVar2 + lVar52;
      fVar5 = *(float *)pFVar1;
      fVar6 = *(float *)(pFVar1 + 4);
      fVar7 = *(float *)(pFVar1 + 8);
      fVar8 = *(float *)(pFVar1 + 0xc);
      pFVar1 = pFVar2 + lVar52 + 0x40;
      fVar9 = *(float *)pFVar1;
      fVar10 = *(float *)(pFVar1 + 4);
      fVar11 = *(float *)(pFVar1 + 8);
      fVar12 = *(float *)(pFVar1 + 0xc);
      pFVar1 = pFVar2 + lVar52 + 0x50;
      fVar13 = *(float *)pFVar1;
      fVar14 = *(float *)(pFVar1 + 4);
      fVar15 = *(float *)(pFVar1 + 8);
      fVar16 = *(float *)(pFVar1 + 0xc);
      pFVar1 = pFVar2 + lVar52 + 0x70;
      fVar17 = *(float *)pFVar1;
      fVar18 = *(float *)(pFVar1 + 4);
      fVar19 = *(float *)(pFVar1 + 8);
      fVar20 = *(float *)(pFVar1 + 0xc);
      pFVar1 = pFVar2 + lVar52 + 0x80;
      fVar21 = *(float *)pFVar1;
      fVar22 = *(float *)(pFVar1 + 4);
      fVar23 = *(float *)(pFVar1 + 8);
      fVar24 = *(float *)(pFVar1 + 0xc);
      pFVar1 = pFVar2 + lVar52 + 0xa0;
      fVar25 = *(float *)pFVar1;
      fVar26 = *(float *)(pFVar1 + 4);
      fVar27 = *(float *)(pFVar1 + 8);
      fVar28 = *(float *)(pFVar1 + 0xc);
      pFVar1 = pFVar2 + lVar52 + 0x90;
      fVar29 = *(float *)pFVar1;
      fVar30 = *(float *)(pFVar1 + 4);
      fVar31 = *(float *)(pFVar1 + 8);
      fVar32 = *(float *)(pFVar1 + 0xc);
      pFVar1 = pFVar2 + lVar52 + 0x60;
      fVar33 = *(float *)pFVar1;
      fVar34 = *(float *)(pFVar1 + 4);
      fVar35 = *(float *)(pFVar1 + 8);
      fVar36 = *(float *)(pFVar1 + 0xc);
      pFVar1 = pFVar2 + lVar52 + 0x10;
      fVar37 = *(float *)pFVar1;
      fVar38 = *(float *)(pFVar1 + 4);
      fVar39 = *(float *)(pFVar1 + 8);
      fVar40 = *(float *)(pFVar1 + 0xc);
      uVar43 = *(undefined8 *)(pFVar2 + lVar52 + 0x30);
      uVar44 = *(undefined8 *)(pFVar2 + lVar52 + 0x30 + 8);
      pfVar47 = pfVar51;
      do {
        fVar57 = pfVar47[9] * fVar25 + pfVar47[8];
        fVar59 = pfVar47[8] * fVar26 + pfVar47[9];
        fVar61 = pfVar47[0xb] * fVar27 + pfVar47[10];
        fVar63 = pfVar47[10] * fVar28 + pfVar47[0xb];
        fVar65 = pfVar47[1] * fVar17 + *pfVar47;
        fVar66 = *pfVar47 * fVar18 + pfVar47[1];
        fVar67 = pfVar47[3] * fVar19 + pfVar47[2];
        fVar68 = pfVar47[2] * fVar20 + pfVar47[3];
        fVar53 = pfVar47[-7] * fVar9 + pfVar47[-8];
        fVar54 = pfVar47[-8] * fVar10 + pfVar47[-7];
        fVar55 = pfVar47[-5] * fVar11 + pfVar47[-6];
        fVar56 = pfVar47[-6] * fVar12 + pfVar47[-5];
        fVar58 = fVar57 * fVar29 + fVar53;
        fVar60 = fVar59 * fVar30 + fVar54;
        fVar62 = fVar61 * fVar31 + fVar55;
        fVar64 = fVar63 * fVar32 + fVar56;
        fVar53 = fVar57 * fVar21 + fVar53;
        fVar54 = fVar59 * fVar22 + fVar54;
        fVar55 = fVar61 * fVar23 + fVar55;
        fVar56 = fVar63 * fVar24 + fVar56;
        fVar57 = fVar65 * fVar13 + pfVar47[-0x10];
        fVar59 = fVar66 * fVar14 + pfVar47[-0xf];
        fVar61 = fVar67 * fVar15 + pfVar47[-0xe];
        fVar63 = fVar68 * fVar16 + pfVar47[-0xd];
        fVar65 = fVar65 * fVar33 + pfVar47[-0x10];
        fVar66 = fVar66 * fVar34 + pfVar47[-0xf];
        fVar67 = fVar67 * fVar35 + pfVar47[-0xe];
        fVar68 = fVar68 * fVar36 + pfVar47[-0xd];
        pfVar47[-0x10] = fVar53 * fVar5 + fVar57;
        pfVar47[-0xf] = fVar54 * fVar6 + fVar59;
        pfVar47[-0xe] = fVar55 * fVar7 + fVar61;
        pfVar47[-0xd] = fVar56 * fVar8 + fVar63;
        local_b8 = (float)uVar43;
        fStack_b4 = (float)((ulonglong)uVar43 >> 0x20);
        fStack_b0 = (float)uVar44;
        fStack_ac = (float)((ulonglong)uVar44 >> 0x20);
        local_c8 = (float)uVar41;
        fStack_c4 = (float)((ulonglong)uVar41 >> 0x20);
        fStack_c0 = (float)uVar42;
        fStack_bc = (float)((ulonglong)uVar42 >> 0x20);
        pfVar47[-8] = fVar53 * fVar37 + fVar57;
        pfVar47[-7] = fVar54 * fVar38 + fVar59;
        pfVar47[-6] = fVar55 * fVar39 + fVar61;
        pfVar47[-5] = fVar56 * fVar40 + fVar63;
        *pfVar47 = fVar60 * local_c8 + fVar65;
        pfVar47[1] = fVar58 * fStack_c4 + fVar66;
        pfVar47[2] = fVar64 * fStack_c0 + fVar67;
        pfVar47[3] = fVar62 * fStack_bc + fVar68;
        pfVar47[8] = fVar60 * local_b8 + fVar65;
        pfVar47[9] = fVar58 * fStack_b4 + fVar66;
        pfVar47[10] = fVar64 * fStack_b0 + fVar67;
        pfVar47[0xb] = fVar62 * fStack_ac + fVar68;
        pfVar47 = pfVar47 + 4;
        lVar48 = lVar48 + -1;
      } while (lVar48 != 0);
      uVar49 = uVar49 + 1;
      lVar52 = lVar52 + 0xb0;
      pfVar51 = pfVar51 + 0x20;
      lVar50 = lVar50 + -1;
    } while (lVar50 != 0);
  }
  return;
}

// Radix4ButterflyConstantWeight @ 144514eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Audio::FVectorComplexFFT::Radix4ButterflyConstantWeight
          (FVectorComplexFFT *this,float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  if (param_3 < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStageIndex >= 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VectorFFT.cpp"
                       ,0xe3,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar8 = _UNK_15076c64c;
  fVar7 = _UNK_15076c648;
  fVar6 = _UNK_15076c644;
  fVar5 = ___xmm_bf8000003f800000bf8000003f800000;
  bVar12 = (char)param_3 - 2;
  iVar10 = 1 << (bVar12 & 0x1f);
  if (0 < iVar10) {
    lVar15 = (longlong)param_2 - (longlong)param_1;
    lVar13 = (longlong)(4 << (bVar12 & 0x1f));
    lVar18 = (2 << (bVar12 & 0x1f)) - lVar13;
    pfVar16 = param_1 + lVar13;
    lVar13 = (6 << (bVar12 & 0x1f)) - lVar13;
    lVar19 = (lVar18 * 4 - (longlong)param_1) + (longlong)param_2;
    lVar11 = (lVar13 * 4 - (longlong)param_1) + (longlong)param_2;
    lVar14 = (longlong)param_1 - (longlong)param_2;
    lVar17 = ((longlong)iVar10 - 1U >> 1) + 1;
    do {
      pfVar3 = pfVar16 + lVar13;
      pfVar1 = (float *)(lVar14 + (longlong)param_2);
      pfVar2 = pfVar16 + lVar18;
      fVar20 = *pfVar3 + *pfVar2;
      fVar21 = pfVar3[1] + pfVar2[1];
      fVar22 = pfVar3[2] + pfVar2[2];
      fVar23 = pfVar3[3] + pfVar2[3];
      fVar24 = *pfVar1 + *pfVar16;
      fVar25 = pfVar1[1] + pfVar16[1];
      fVar26 = pfVar1[2] + pfVar16[2];
      fVar27 = pfVar1[3] + pfVar16[3];
      fVar32 = *pfVar1 - *pfVar16;
      fVar33 = pfVar1[1] - pfVar16[1];
      fVar34 = pfVar1[2] - pfVar16[2];
      fVar35 = pfVar1[3] - pfVar16[3];
      fVar28 = (*pfVar2 - *pfVar3) * fVar5;
      fVar29 = (pfVar2[1] - pfVar3[1]) * fVar6;
      fVar30 = (pfVar2[2] - pfVar3[2]) * fVar7;
      fVar31 = (pfVar2[3] - pfVar3[3]) * fVar8;
      *param_2 = fVar20 + fVar24;
      param_2[1] = fVar21 + fVar25;
      param_2[2] = fVar22 + fVar26;
      param_2[3] = fVar23 + fVar27;
      param_2 = param_2 + 4;
      pfVar3 = (float *)(lVar19 + (longlong)pfVar16);
      *pfVar3 = fVar24 - fVar20;
      pfVar3[1] = fVar25 - fVar21;
      pfVar3[2] = fVar26 - fVar22;
      pfVar3[3] = fVar27 - fVar23;
      pfVar3 = (float *)(lVar15 + (longlong)pfVar16);
      *pfVar3 = fVar29 + fVar32;
      pfVar3[1] = fVar28 + fVar33;
      pfVar3[2] = fVar31 + fVar34;
      pfVar3[3] = fVar30 + fVar35;
      pfVar3 = (float *)(lVar11 + (longlong)pfVar16);
      *pfVar3 = fVar32 - fVar29;
      pfVar3[1] = fVar33 - fVar28;
      pfVar3[2] = fVar34 - fVar31;
      pfVar3[3] = fVar35 - fVar30;
      pfVar16 = pfVar16 + 4;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return;
}

// Radix4ButterflyFinal @ 144514ff0

void __thiscall
Audio::FVectorComplexFFT::Radix4ButterflyFinal(FVectorComplexFFT *this,float *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  FScriptContainerElement *pFVar16;
  code *pcVar17;
  int iVar18;
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  longlong local_res8;
  longlong local_res10;
  undefined1 local_1d8 [12];
  float fStack_1cc;
  undefined1 local_1c8 [12];
  float fStack_1bc;
  undefined1 local_1b8 [12];
  float fStack_1ac;
  undefined1 local_1a8 [12];
  float fStack_19c;
  undefined1 local_198 [12];
  float fStack_18c;
  undefined1 local_188 [12];
  float fStack_17c;
  undefined1 local_178 [12];
  float fStack_16c;
  undefined1 local_168 [12];
  float fStack_15c;
  __m128 local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  uVar22 = 1;
  iVar23 = 1 << ((byte)param_2 & 0x1f);
  if (((this->FinalIndices).ArrayNum < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  iVar15 = *(int *)(this->FinalIndices).AllocatorInstance.Data;
  iVar18 = iVar23 * 6;
  iVar2 = iVar15 * 8;
  lVar21 = (longlong)((iVar23 + iVar15 * 2) * 4);
  pfVar1 = param_1 + lVar21;
  pfVar3 = param_1 + lVar21 + 4;
  lVar21 = (longlong)((iVar23 + iVar15 * 4) * 2);
  local_1d8._8_4_ = *pfVar1;
  local_1d8._0_8_ = *(undefined8 *)(param_1 + iVar2);
  fStack_1cc = pfVar1[1];
  local_1b8._8_4_ = pfVar1[2];
  local_1b8._0_8_ = *(undefined8 *)(param_1 + iVar2 + 2);
  fStack_1ac = pfVar1[3];
  local_198._8_4_ = *pfVar3;
  local_198._0_8_ = *(undefined8 *)(param_1 + (longlong)iVar2 + 4);
  fStack_18c = pfVar3[1];
  local_178._8_4_ = pfVar3[2];
  local_178._0_8_ = *(undefined8 *)(param_1 + (longlong)iVar2 + 4 + 2);
  fStack_16c = pfVar3[3];
  pfVar1 = param_1 + (iVar2 + iVar18);
  pfVar3 = param_1 + (longlong)(iVar2 + iVar18) + 4;
  local_1c8._8_4_ = *pfVar1;
  local_1c8._0_8_ = *(undefined8 *)(param_1 + lVar21);
  fStack_1bc = pfVar1[1];
  local_168._8_4_ = pfVar3[2];
  local_168._0_8_ = *(undefined8 *)(param_1 + lVar21 + 4 + 2);
  fStack_15c = pfVar3[3];
  local_1a8._8_4_ = pfVar1[2];
  local_1a8._0_8_ = *(undefined8 *)(param_1 + lVar21 + 2);
  fStack_19c = pfVar1[3];
  local_188._8_4_ = *pfVar3;
  local_188._0_8_ = *(undefined8 *)(param_1 + lVar21 + 4);
  fStack_17c = pfVar3[1];
  if (((this->FinalWeights).ArrayNum < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  Radix4ButterflyFinalIteration
            (this,(FFinalInputs *)local_1d8,
             (FFinalWeights *)(this->FinalWeights).AllocatorInstance.Data,
             (FFinalOutputs *)&local_158);
  if (1 < (longlong)(iVar23 >> 2)) {
    local_res8 = 1;
    local_res10 = 0x180;
    do {
      uVar20 = 0;
      if ((int)uVar22 < (this->FinalIndices).ArrayNum) {
        uVar20 = ~uVar22 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      iVar15 = *(int *)((this->FinalIndices).AllocatorInstance.Data + local_res8 * 8);
      iVar2 = iVar15 * 8;
      auVar11 = *(undefined1 (*) [16])(param_1 + iVar2);
      auVar12 = *(undefined1 (*) [16])(param_1 + (longlong)iVar2 + 4);
      lVar21 = (longlong)((iVar23 + iVar15 * 2) * 4);
      pfVar1 = param_1 + lVar21;
      fVar44 = *pfVar1;
      fVar45 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar51 = pfVar1[3];
      pfVar1 = param_1 + lVar21 + 4;
      fVar25 = *pfVar1;
      fVar43 = pfVar1[1];
      fVar32 = pfVar1[2];
      fVar27 = pfVar1[3];
      lVar21 = (longlong)((iVar23 + iVar15 * 4) * 2);
      auVar13 = *(undefined1 (*) [16])(param_1 + lVar21);
      auVar14 = *(undefined1 (*) [16])(param_1 + lVar21 + 4);
      local_1d8._8_4_ = fVar44;
      local_1d8._0_8_ = auVar11._0_8_;
      fStack_1cc = fVar45;
      pfVar1 = param_1 + (iVar2 + iVar18);
      fVar46 = *pfVar1;
      fVar47 = pfVar1[1];
      fVar26 = pfVar1[2];
      fVar55 = pfVar1[3];
      pfVar1 = param_1 + (longlong)(iVar2 + iVar18) + 4;
      fVar33 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar36 = pfVar1[2];
      fVar35 = pfVar1[3];
      uVar20 = 0;
      if ((int)(uVar22 - 1) < (this->FinalIndices).ArrayNum) {
        uVar20 = -uVar22 >> 0x1f;
      }
      local_1c8._8_4_ = fVar46;
      local_1c8._0_8_ = auVar13._0_8_;
      fStack_1bc = fVar47;
      local_1b8._8_4_ = fVar24;
      local_1b8._0_8_ = auVar11._8_8_;
      fStack_1ac = fVar51;
      local_1a8._8_4_ = fVar26;
      local_1a8._0_8_ = auVar13._8_8_;
      fStack_19c = fVar55;
      local_198._8_4_ = fVar25;
      local_198._0_8_ = auVar12._0_8_;
      fStack_18c = fVar43;
      local_188._8_4_ = fVar33;
      local_188._0_8_ = auVar14._0_8_;
      fStack_17c = fVar31;
      local_178._8_4_ = fVar32;
      local_178._0_8_ = auVar12._8_8_;
      fStack_16c = fVar27;
      local_168._8_4_ = fVar36;
      local_168._0_8_ = auVar14._8_8_;
      fStack_15c = fVar35;
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      iVar15 = *(int *)((this->FinalIndices).AllocatorInstance.Data + local_res8 * 8 + -4);
      iVar2 = iVar15 * 8;
      *(ulonglong *)(param_1 + iVar2) = CONCAT44(local_158.m128_i32[1],local_158.m128_i32[0]);
      *(ulonglong *)(param_1 + iVar2 + 2) = CONCAT44(local_158.m128_i32[3],local_158.m128_i32[2]);
      *(ulonglong *)(param_1 + (longlong)iVar2 + 4) = CONCAT44(fStack_144,local_148);
      *(ulonglong *)(param_1 + (longlong)iVar2 + 4 + 2) = CONCAT44(fStack_13c,fStack_140);
      lVar21 = (longlong)((iVar23 + iVar15 * 2) * 4);
      *(ulonglong *)(param_1 + lVar21) = CONCAT44(fStack_134,local_138);
      *(ulonglong *)(param_1 + lVar21 + 2) = CONCAT44(fStack_12c,fStack_130);
      *(ulonglong *)(param_1 + lVar21 + 4) = CONCAT44(fStack_124,local_128);
      *(ulonglong *)(param_1 + lVar21 + 4 + 2) = CONCAT44(fStack_11c,fStack_120);
      lVar21 = (longlong)((iVar23 + iVar15 * 4) * 2);
      *(ulonglong *)(param_1 + lVar21) = CONCAT44(fStack_114,local_118);
      *(ulonglong *)(param_1 + lVar21 + 2) = CONCAT44(fStack_10c,fStack_110);
      *(ulonglong *)(param_1 + lVar21 + 4) = CONCAT44(fStack_104,local_108);
      *(ulonglong *)(param_1 + lVar21 + 4 + 2) = CONCAT44(fStack_fc,fStack_100);
      *(ulonglong *)(param_1 + (iVar2 + iVar18)) = CONCAT44(fStack_f4,local_f8);
      *(ulonglong *)(param_1 + (iVar2 + iVar18) + 2) = CONCAT44(fStack_ec,fStack_f0);
      *(ulonglong *)(param_1 + (longlong)(iVar2 + iVar18) + 4) = CONCAT44(fStack_e4,local_e8);
      *(ulonglong *)(param_1 + (longlong)(iVar2 + iVar18) + 4 + 2) = CONCAT44(fStack_dc,fStack_e0);
      uVar20 = 0;
      if ((int)uVar22 < (this->FinalWeights).ArrayNum) {
        uVar20 = ~uVar22 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pFVar16 = (this->FinalWeights).AllocatorInstance.Data;
      pFVar4 = pFVar16 + local_res10 + 0x30;
      pFVar6 = pFVar16 + local_res10 + 0xa0;
      pFVar7 = pFVar16 + local_res10 + 0xc0;
      pFVar5 = pFVar16 + local_res10 + 0x50;
      fVar48 = auVar11._12_4_ * *(float *)pFVar4 + auVar11._8_4_;
      fVar49 = auVar11._8_4_ * *(float *)(pFVar4 + 4) + auVar11._12_4_;
      fVar50 = fVar51 * *(float *)(pFVar4 + 8) + fVar24;
      fVar51 = fVar24 * *(float *)(pFVar4 + 0xc) + fVar51;
      pFVar4 = pFVar16 + local_res10 + 0x70;
      fVar52 = auVar13._12_4_ * *(float *)pFVar5 + auVar13._8_4_;
      fVar53 = auVar13._8_4_ * *(float *)(pFVar5 + 4) + auVar13._12_4_;
      fVar54 = fVar55 * *(float *)(pFVar5 + 8) + fVar26;
      fVar55 = fVar26 * *(float *)(pFVar5 + 0xc) + fVar55;
      pFVar5 = pFVar16 + local_res10 + 0x60;
      pFVar8 = pFVar16 + local_res10 + 0x90;
      fVar40 = auVar12._4_4_ * *(float *)pFVar4 + auVar12._0_4_;
      fVar41 = auVar12._0_4_ * *(float *)(pFVar4 + 4) + auVar12._4_4_;
      fVar42 = fVar43 * *(float *)(pFVar4 + 8) + fVar25;
      fVar43 = fVar25 * *(float *)(pFVar4 + 0xc) + fVar43;
      pFVar4 = pFVar16 + local_res10 + 0xb0;
      pFVar9 = pFVar16 + local_res10 + 0x150;
      fVar28 = auVar14._4_4_ * *(float *)pFVar8 + auVar14._0_4_;
      fVar29 = auVar14._0_4_ * *(float *)(pFVar8 + 4) + auVar14._4_4_;
      fVar30 = fVar31 * *(float *)(pFVar8 + 8) + fVar33;
      fVar31 = fVar33 * *(float *)(pFVar8 + 0xc) + fVar31;
      pFVar8 = pFVar16 + local_res10 + 0xd0;
      fVar24 = auVar12._12_4_ * *(float *)pFVar4 + auVar12._8_4_;
      fVar25 = auVar12._8_4_ * *(float *)(pFVar4 + 4) + auVar12._12_4_;
      fVar26 = fVar27 * *(float *)(pFVar4 + 8) + fVar32;
      fVar27 = fVar32 * *(float *)(pFVar4 + 0xc) + fVar27;
      pFVar10 = pFVar16 + local_res10 + 0x80;
      pFVar4 = pFVar16 + local_res10 + 0x20;
      fVar32 = auVar14._12_4_ * *(float *)pFVar8 + auVar14._8_4_;
      fVar33 = auVar14._8_4_ * *(float *)(pFVar8 + 4) + auVar14._12_4_;
      fVar34 = fVar35 * *(float *)(pFVar8 + 8) + fVar36;
      fVar35 = fVar36 * *(float *)(pFVar8 + 0xc) + fVar35;
      pFVar8 = pFVar16 + local_res10 + 0x140;
      local_138 = *(float *)pFVar5 * fVar40 + auVar11._0_4_;
      fStack_134 = *(float *)(pFVar5 + 4) * fVar41 + auVar11._4_4_;
      fStack_130 = *(float *)(pFVar5 + 8) * fVar42 + fVar44;
      fStack_12c = *(float *)(pFVar5 + 0xc) * fVar43 + fVar45;
      fVar36 = *(float *)pFVar6 * fVar24 + fVar48;
      fVar37 = *(float *)(pFVar6 + 4) * fVar25 + fVar49;
      fVar38 = *(float *)(pFVar6 + 8) * fVar26 + fVar50;
      fVar39 = *(float *)(pFVar6 + 0xc) * fVar27 + fVar51;
      pFVar6 = pFVar16 + local_res10 + 0x160;
      local_128 = *(float *)pFVar10 * fVar28 + auVar13._0_4_;
      fStack_124 = *(float *)(pFVar10 + 4) * fVar29 + auVar13._4_4_;
      fStack_120 = *(float *)(pFVar10 + 8) * fVar30 + fVar46;
      fStack_11c = *(float *)(pFVar10 + 0xc) * fVar31 + fVar47;
      pFVar10 = pFVar16 + local_res10 + 0x170;
      local_f8 = *(float *)pFVar8 * fVar40 + auVar11._0_4_;
      fStack_f4 = *(float *)(pFVar8 + 4) * fVar41 + auVar11._4_4_;
      fVar44 = *(float *)(pFVar8 + 8) * fVar42 + fVar44;
      fVar45 = *(float *)(pFVar8 + 0xc) * fVar43 + fVar45;
      pFVar5 = pFVar16 + local_res10 + 0x40;
      local_e8 = *(float *)pFVar9 * fVar28 + auVar13._0_4_;
      fStack_e4 = *(float *)(pFVar9 + 4) * fVar29 + auVar13._4_4_;
      fVar46 = *(float *)(pFVar9 + 8) * fVar30 + fVar46;
      fVar47 = *(float *)(pFVar9 + 0xc) * fVar31 + fVar47;
      fVar48 = *(float *)pFVar6 * fVar24 + fVar48;
      fVar49 = *(float *)(pFVar6 + 4) * fVar25 + fVar49;
      fVar50 = *(float *)(pFVar6 + 8) * fVar26 + fVar50;
      fVar51 = *(float *)(pFVar6 + 0xc) * fVar27 + fVar51;
      local_158.m128_f32[0] = *(float *)pFVar4 * fVar36 + local_138;
      local_158.m128_f32[1] = *(float *)(pFVar4 + 4) * fVar37 + fStack_134;
      local_158.m128_f32[2] = *(float *)(pFVar4 + 8) * fVar38 + fStack_130;
      local_158.m128_f32[3] = *(float *)(pFVar4 + 0xc) * fVar39 + fStack_12c;
      fVar24 = *(float *)pFVar7 * fVar32 + fVar52;
      fVar25 = *(float *)(pFVar7 + 4) * fVar33 + fVar53;
      fVar43 = *(float *)(pFVar7 + 8) * fVar34 + fVar54;
      fVar27 = *(float *)(pFVar7 + 0xc) * fVar35 + fVar55;
      fVar52 = *(float *)pFVar10 * fVar32 + fVar52;
      fVar53 = *(float *)(pFVar10 + 4) * fVar33 + fVar53;
      fVar54 = *(float *)(pFVar10 + 8) * fVar34 + fVar54;
      fVar55 = *(float *)(pFVar10 + 0xc) * fVar35 + fVar55;
      pFVar4 = pFVar16 + local_res10 + 0xe0;
      local_148 = *(float *)pFVar5 * fVar24 + local_128;
      fStack_144 = *(float *)(pFVar5 + 4) * fVar25 + fStack_124;
      fStack_140 = *(float *)(pFVar5 + 8) * fVar43 + fStack_120;
      fStack_13c = *(float *)(pFVar5 + 0xc) * fVar27 + fStack_11c;
      local_138 = *(float *)pFVar4 * fVar36 + local_138;
      fStack_134 = *(float *)(pFVar4 + 4) * fVar37 + fStack_134;
      fStack_130 = *(float *)(pFVar4 + 8) * fVar38 + fStack_130;
      fStack_12c = *(float *)(pFVar4 + 0xc) * fVar39 + fStack_12c;
      pFVar4 = pFVar16 + local_res10 + 0x130;
      pFVar5 = pFVar16 + local_res10 + 0xf0;
      local_128 = *(float *)pFVar4 * fVar24 + local_128;
      fStack_124 = *(float *)(pFVar4 + 4) * fVar25 + fStack_124;
      fStack_120 = *(float *)(pFVar4 + 8) * fVar43 + fStack_120;
      fStack_11c = *(float *)(pFVar4 + 0xc) * fVar27 + fStack_11c;
      local_118 = *(float *)pFVar5 * fVar49 + local_f8;
      fStack_114 = *(float *)(pFVar5 + 4) * fVar48 + fStack_f4;
      fStack_110 = *(float *)(pFVar5 + 8) * fVar51 + fVar44;
      fStack_10c = *(float *)(pFVar5 + 0xc) * fVar50 + fVar45;
      pFVar4 = pFVar16 + local_res10 + 0x110;
      local_108 = *(float *)pFVar4 * fVar53 + local_e8;
      fStack_104 = *(float *)(pFVar4 + 4) * fVar52 + fStack_e4;
      fStack_100 = *(float *)(pFVar4 + 8) * fVar55 + fVar46;
      fStack_fc = *(float *)(pFVar4 + 0xc) * fVar54 + fVar47;
      pFVar4 = pFVar16 + local_res10 + 0x100;
      uVar22 = uVar22 + 1;
      pFVar16 = pFVar16 + local_res10 + 0x120;
      local_res10 = local_res10 + 0x180;
      local_res8 = local_res8 + 1;
      local_f8 = *(float *)pFVar4 * fVar49 + local_f8;
      fStack_f4 = *(float *)(pFVar4 + 4) * fVar48 + fStack_f4;
      fStack_f0 = *(float *)(pFVar4 + 8) * fVar51 + fVar44;
      fStack_ec = *(float *)(pFVar4 + 0xc) * fVar50 + fVar45;
      local_e8 = *(float *)pFVar16 * fVar53 + local_e8;
      fStack_e4 = *(float *)(pFVar16 + 4) * fVar52 + fStack_e4;
      fStack_e0 = *(float *)(pFVar16 + 8) * fVar55 + fVar46;
      fStack_dc = *(float *)(pFVar16 + 0xc) * fVar54 + fVar47;
    } while (local_res8 < iVar23 >> 2);
  }
  uVar22 = uVar22 - 1;
  uVar20 = 0;
  if ((int)uVar22 < (this->FinalIndices).ArrayNum) {
    uVar20 = ~uVar22 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  iVar15 = *(int *)((this->FinalIndices).AllocatorInstance.Data + (longlong)(int)uVar22 * 8 + 4);
  iVar2 = iVar15 * 8;
  *(ulonglong *)(param_1 + iVar2) = CONCAT44(local_158.m128_i32[1],local_158.m128_i32[0]);
  *(ulonglong *)(param_1 + iVar2 + 2) = CONCAT44(local_158.m128_i32[3],local_158.m128_i32[2]);
  *(ulonglong *)(param_1 + (longlong)iVar2 + 4) = CONCAT44(fStack_144,local_148);
  *(ulonglong *)(param_1 + (longlong)iVar2 + 4 + 2) = CONCAT44(fStack_13c,fStack_140);
  lVar21 = (longlong)((iVar23 + iVar15 * 2) * 4);
  *(ulonglong *)(param_1 + lVar21) = CONCAT44(fStack_134,local_138);
  *(ulonglong *)(param_1 + lVar21 + 2) = CONCAT44(fStack_12c,fStack_130);
  *(ulonglong *)(param_1 + lVar21 + 4) = CONCAT44(fStack_124,local_128);
  *(ulonglong *)(param_1 + lVar21 + 4 + 2) = CONCAT44(fStack_11c,fStack_120);
  lVar21 = (longlong)((iVar23 + iVar15 * 4) * 2);
  *(ulonglong *)(param_1 + lVar21) = CONCAT44(fStack_114,local_118);
  *(ulonglong *)(param_1 + lVar21 + 2) = CONCAT44(fStack_10c,fStack_110);
  *(ulonglong *)(param_1 + lVar21 + 4) = CONCAT44(fStack_104,local_108);
  *(ulonglong *)(param_1 + lVar21 + 4 + 2) = CONCAT44(fStack_fc,fStack_100);
  *(ulonglong *)(param_1 + (iVar2 + iVar18)) = CONCAT44(fStack_f4,local_f8);
  *(ulonglong *)(param_1 + (iVar2 + iVar18) + 2) = CONCAT44(fStack_ec,fStack_f0);
  *(ulonglong *)(param_1 + (longlong)(iVar2 + iVar18) + 4) = CONCAT44(fStack_e4,local_e8);
  *(ulonglong *)(param_1 + (longlong)(iVar2 + iVar18) + 4 + 2) = CONCAT44(fStack_dc,fStack_e0);
  return;
}

// Radix4ButterflyFinalIteration @ 144515750

void __thiscall
Audio::FVectorComplexFFT::Radix4ButterflyFinalIteration
          (FVectorComplexFFT *this,FFinalInputs *param_1,FFinalWeights *param_2,
          FFinalOutputs *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  uVar13 = *(undefined8 *)param_2->W2RD6;
  uVar14 = *(undefined8 *)(param_2->W2RD6 + 2);
  uVar15 = *(undefined8 *)param_2->W2RD4;
  uVar16 = *(undefined8 *)(param_2->W2RD4 + 2);
  uVar17 = *(undefined8 *)param_2->W3RD7;
  uVar18 = *(undefined8 *)(param_2->W3RD7 + 2);
  fVar1 = param_2->W3R[0];
  fVar2 = param_2->W3R[1];
  fVar3 = param_2->W3R[2];
  fVar4 = param_2->W3R[3];
  fVar5 = param_2->W2RNeg[0];
  fVar6 = param_2->W2RNeg[1];
  fVar7 = param_2->W2RNeg[2];
  fVar8 = param_2->W2RNeg[3];
  fVar9 = param_2->W3RNeg[0];
  fVar10 = param_2->W3RNeg[1];
  fVar11 = param_2->W3RNeg[2];
  fVar12 = param_2->W3RNeg[3];
  uVar19 = *(undefined8 *)param_2->W3RD5;
  uVar20 = *(undefined8 *)(param_2->W3RD5 + 2);
  fVar52 = (param_1->A2).m128_f32[1] * param_2->W2I[0] + (param_1->A2).m128_f32[0];
  fVar53 = (param_1->A2).m128_f32[0] * param_2->W2I[1] + (param_1->A2).m128_f32[1];
  fVar54 = (param_1->A2).m128_f32[3] * param_2->W2I[2] + (param_1->A2).m128_f32[2];
  fVar55 = (param_1->A2).m128_f32[2] * param_2->W2I[3] + (param_1->A2).m128_f32[3];
  fVar56 = (param_1->A3).m128_f32[1] * param_2->W3I[0] + (param_1->A3).m128_f32[0];
  fVar57 = (param_1->A3).m128_f32[0] * param_2->W3I[1] + (param_1->A3).m128_f32[1];
  fVar58 = (param_1->A3).m128_f32[3] * param_2->W3I[2] + (param_1->A3).m128_f32[2];
  fVar59 = (param_1->A3).m128_f32[2] * param_2->W3I[3] + (param_1->A3).m128_f32[3];
  fVar32 = (param_1->A4).m128_f32[1] * param_2->W4I[0] + (param_1->A4).m128_f32[0];
  fVar34 = (param_1->A4).m128_f32[0] * param_2->W4I[1] + (param_1->A4).m128_f32[1];
  fVar36 = (param_1->A4).m128_f32[3] * param_2->W4I[2] + (param_1->A4).m128_f32[2];
  fVar38 = (param_1->A4).m128_f32[2] * param_2->W4I[3] + (param_1->A4).m128_f32[3];
  fVar21 = (param_1->A5).m128_f32[1] * param_2->W5I[0] + (param_1->A5).m128_f32[0];
  fVar22 = (param_1->A5).m128_f32[0] * param_2->W5I[1] + (param_1->A5).m128_f32[1];
  fVar23 = (param_1->A5).m128_f32[3] * param_2->W5I[2] + (param_1->A5).m128_f32[2];
  fVar24 = (param_1->A5).m128_f32[2] * param_2->W5I[3] + (param_1->A5).m128_f32[3];
  fVar48 = param_2->W4R[0] * fVar32 + (param_1->A0).m128_f32[0];
  fVar49 = param_2->W4R[1] * fVar34 + (param_1->A0).m128_f32[1];
  fVar50 = param_2->W4R[2] * fVar36 + (param_1->A0).m128_f32[2];
  fVar51 = param_2->W4R[3] * fVar38 + (param_1->A0).m128_f32[3];
  fVar40 = param_2->W4RNeg[0] * fVar32 + (param_1->A0).m128_f32[0];
  fVar41 = param_2->W4RNeg[1] * fVar34 + (param_1->A0).m128_f32[1];
  fVar42 = param_2->W4RNeg[2] * fVar36 + (param_1->A0).m128_f32[2];
  fVar43 = param_2->W4RNeg[3] * fVar38 + (param_1->A0).m128_f32[3];
  fVar44 = param_2->W5R[0] * fVar21 + (param_1->A1).m128_f32[0];
  fVar45 = param_2->W5R[1] * fVar22 + (param_1->A1).m128_f32[1];
  fVar46 = param_2->W5R[2] * fVar23 + (param_1->A1).m128_f32[2];
  fVar47 = param_2->W5R[3] * fVar24 + (param_1->A1).m128_f32[3];
  fVar33 = param_2->W5RNeg[0] * fVar21 + (param_1->A1).m128_f32[0];
  fVar35 = param_2->W5RNeg[1] * fVar22 + (param_1->A1).m128_f32[1];
  fVar37 = param_2->W5RNeg[2] * fVar23 + (param_1->A1).m128_f32[2];
  fVar39 = param_2->W5RNeg[3] * fVar24 + (param_1->A1).m128_f32[3];
  fVar21 = (param_1->A6).m128_f32[1] * param_2->W6I[0] + (param_1->A6).m128_f32[0];
  fVar22 = (param_1->A6).m128_f32[0] * param_2->W6I[1] + (param_1->A6).m128_f32[1];
  fVar23 = (param_1->A6).m128_f32[3] * param_2->W6I[2] + (param_1->A6).m128_f32[2];
  fVar38 = (param_1->A6).m128_f32[2] * param_2->W6I[3] + (param_1->A6).m128_f32[3];
  fVar28 = (param_1->A7).m128_f32[1] * param_2->W7I[0] + (param_1->A7).m128_f32[0];
  fVar29 = (param_1->A7).m128_f32[0] * param_2->W7I[1] + (param_1->A7).m128_f32[1];
  fVar30 = (param_1->A7).m128_f32[3] * param_2->W7I[2] + (param_1->A7).m128_f32[2];
  fVar31 = (param_1->A7).m128_f32[2] * param_2->W7I[3] + (param_1->A7).m128_f32[3];
  fVar24 = param_2->W6RNeg[0] * fVar21 + fVar52;
  fVar32 = param_2->W6RNeg[1] * fVar22 + fVar53;
  fVar34 = param_2->W6RNeg[2] * fVar23 + fVar54;
  fVar36 = param_2->W6RNeg[3] * fVar38 + fVar55;
  fVar52 = param_2->W6R[0] * fVar21 + fVar52;
  fVar53 = param_2->W6R[1] * fVar22 + fVar53;
  fVar54 = param_2->W6R[2] * fVar23 + fVar54;
  fVar55 = param_2->W6R[3] * fVar38 + fVar55;
  fVar38 = param_2->W7R[0] * fVar28 + fVar56;
  fVar25 = param_2->W7R[1] * fVar29 + fVar57;
  fVar26 = param_2->W7R[2] * fVar30 + fVar58;
  fVar27 = param_2->W7R[3] * fVar31 + fVar59;
  fVar21 = param_2->W2R[1];
  fVar22 = param_2->W2R[2];
  fVar23 = param_2->W2R[3];
  fVar56 = param_2->W7RNeg[0] * fVar28 + fVar56;
  fVar57 = param_2->W7RNeg[1] * fVar29 + fVar57;
  fVar58 = param_2->W7RNeg[2] * fVar30 + fVar58;
  fVar59 = param_2->W7RNeg[3] * fVar31 + fVar59;
  (param_3->D0).m128_f32[0] = param_2->W2R[0] * fVar52 + fVar48;
  (param_3->D0).m128_f32[1] = fVar21 * fVar53 + fVar49;
  (param_3->D0).m128_f32[2] = fVar22 * fVar54 + fVar50;
  (param_3->D0).m128_f32[3] = fVar23 * fVar55 + fVar51;
  local_e8 = (float)uVar15;
  fStack_e4 = (float)((ulonglong)uVar15 >> 0x20);
  fStack_e0 = (float)uVar16;
  fStack_dc = (float)((ulonglong)uVar16 >> 0x20);
  (param_3->D1).m128_f32[0] = fVar1 * fVar38 + fVar44;
  (param_3->D1).m128_f32[1] = fVar2 * fVar25 + fVar45;
  (param_3->D1).m128_f32[2] = fVar3 * fVar26 + fVar46;
  (param_3->D1).m128_f32[3] = fVar4 * fVar27 + fVar47;
  (param_3->D2).m128_f32[0] = fVar52 * fVar5 + fVar48;
  (param_3->D2).m128_f32[1] = fVar53 * fVar6 + fVar49;
  (param_3->D2).m128_f32[2] = fVar54 * fVar7 + fVar50;
  (param_3->D2).m128_f32[3] = fVar55 * fVar8 + fVar51;
  (param_3->D3).m128_f32[0] = fVar9 * fVar38 + fVar44;
  (param_3->D3).m128_f32[1] = fVar10 * fVar25 + fVar45;
  (param_3->D3).m128_f32[2] = fVar11 * fVar26 + fVar46;
  (param_3->D3).m128_f32[3] = fVar12 * fVar27 + fVar47;
  (param_3->D4).m128_f32[0] = local_e8 * fVar32 + fVar40;
  (param_3->D4).m128_f32[1] = fStack_e4 * fVar24 + fVar41;
  (param_3->D4).m128_f32[2] = fStack_e0 * fVar36 + fVar42;
  (param_3->D4).m128_f32[3] = fStack_dc * fVar34 + fVar43;
  local_d8 = (float)uVar19;
  fStack_d4 = (float)((ulonglong)uVar19 >> 0x20);
  fStack_d0 = (float)uVar20;
  fStack_cc = (float)((ulonglong)uVar20 >> 0x20);
  (param_3->D5).m128_f32[0] = local_d8 * fVar57 + fVar33;
  (param_3->D5).m128_f32[1] = fStack_d4 * fVar56 + fVar35;
  (param_3->D5).m128_f32[2] = fStack_d0 * fVar59 + fVar37;
  (param_3->D5).m128_f32[3] = fStack_cc * fVar58 + fVar39;
  local_c8 = (float)uVar13;
  fStack_c4 = (float)((ulonglong)uVar13 >> 0x20);
  fStack_c0 = (float)uVar14;
  fStack_bc = (float)((ulonglong)uVar14 >> 0x20);
  (param_3->D6).m128_f32[0] = local_c8 * fVar32 + fVar40;
  (param_3->D6).m128_f32[1] = fStack_c4 * fVar24 + fVar41;
  (param_3->D6).m128_f32[2] = fStack_c0 * fVar36 + fVar42;
  (param_3->D6).m128_f32[3] = fStack_bc * fVar34 + fVar43;
  local_b8 = (float)uVar17;
  fStack_b4 = (float)((ulonglong)uVar17 >> 0x20);
  fStack_b0 = (float)uVar18;
  fStack_ac = (float)((ulonglong)uVar18 >> 0x20);
  (param_3->D7).m128_f32[0] = local_b8 * fVar57 + fVar33;
  (param_3->D7).m128_f32[1] = fStack_b4 * fVar56 + fVar35;
  (param_3->D7).m128_f32[2] = fStack_b0 * fVar59 + fVar37;
  (param_3->D7).m128_f32[3] = fStack_ac * fVar58 + fVar39;
  return;
}

// Radix8ButterflyConstantWeight @ 1445159b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Audio::FVectorComplexFFT::Radix8ButterflyConstantWeight
          (FVectorComplexFFT *this,float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  float *pfVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  
  if ((param_3 < 4) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InStageIndex >= 4",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VectorFFT.cpp"
                          ,0x11c,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar20 = _UNK_150d5a59c;
  fVar19 = _UNK_150d5a598;
  fVar18 = _UNK_150d5a594;
  fVar17 = ___xmm_bf3504f3bf3504f3bf3504f3bf3504f3;
  fVar16 = _UNK_150b2885c;
  fVar15 = _UNK_150b28858;
  fVar14 = _UNK_150b28854;
  fVar13 = ___xmm_3f3504f33f3504f33f3504f33f3504f3;
  fVar12 = _UNK_15076c64c;
  fVar11 = _UNK_15076c648;
  fVar10 = _UNK_15076c644;
  fVar9 = ___xmm_bf8000003f800000bf8000003f800000;
  bVar26 = (char)param_3 - 3;
  lVar22 = (longlong)(1 << (bVar26 & 0x1f));
  if (0 < lVar22) {
    lVar27 = (longlong)(4 << (bVar26 & 0x1f));
    lVar23 = (longlong)param_2 - (longlong)param_1;
    pfVar29 = param_1 + lVar27;
    lVar31 = (2 << (bVar26 & 0x1f)) - lVar27;
    lVar32 = (6 << (bVar26 & 0x1f)) - lVar27;
    lVar33 = (8 << (bVar26 & 0x1f)) - lVar27;
    lVar34 = (10 << (bVar26 & 0x1f)) - lVar27;
    lVar30 = (0xc << (bVar26 & 0x1f)) - lVar27;
    lVar24 = (lVar30 * 4 - (longlong)param_1) + (longlong)param_2;
    lVar37 = (lVar31 * 4 - (longlong)param_1) + (longlong)param_2;
    lVar27 = (0xe << (bVar26 & 0x1f)) - lVar27;
    lVar38 = (lVar32 * 4 - (longlong)param_1) + (longlong)param_2;
    lVar25 = (lVar27 * 4 - (longlong)param_1) + (longlong)param_2;
    lVar35 = (lVar33 * 4 - (longlong)param_1) + (longlong)param_2;
    lVar28 = (longlong)param_1 - (longlong)param_2;
    lVar36 = (lVar34 * 4 - (longlong)param_1) + (longlong)param_2;
    lVar22 = (lVar22 - 1U >> 1) + 1;
    do {
      pfVar7 = pfVar29 + lVar27;
      pfVar1 = pfVar29 + lVar34;
      pfVar2 = pfVar29 + lVar33;
      pfVar3 = pfVar29 + lVar30;
      pfVar4 = pfVar29 + lVar32;
      pfVar5 = pfVar29 + lVar31;
      pfVar6 = (float *)(lVar28 + (longlong)param_2);
      fVar71 = *pfVar1 + *pfVar5;
      fVar72 = pfVar1[1] + pfVar5[1];
      fVar73 = pfVar1[2] + pfVar5[2];
      fVar74 = pfVar1[3] + pfVar5[3];
      fVar67 = *pfVar5 - *pfVar1;
      fVar68 = pfVar5[1] - pfVar1[1];
      fVar69 = pfVar5[2] - pfVar1[2];
      fVar70 = pfVar5[3] - pfVar1[3];
      fVar75 = *pfVar6 + *pfVar2;
      fVar76 = pfVar6[1] + pfVar2[1];
      fVar77 = pfVar6[2] + pfVar2[2];
      fVar78 = pfVar6[3] + pfVar2[3];
      fVar79 = *pfVar6 - *pfVar2;
      fVar80 = pfVar6[1] - pfVar2[1];
      fVar81 = pfVar6[2] - pfVar2[2];
      fVar82 = pfVar6[3] - pfVar2[3];
      fVar43 = *pfVar3 + *pfVar29;
      fVar45 = pfVar3[1] + pfVar29[1];
      fVar47 = pfVar3[2] + pfVar29[2];
      fVar49 = pfVar3[3] + pfVar29[3];
      fVar51 = *pfVar7 + *pfVar4;
      fVar52 = pfVar7[1] + pfVar4[1];
      fVar53 = pfVar7[2] + pfVar4[2];
      fVar54 = pfVar7[3] + pfVar4[3];
      fVar55 = fVar43 + fVar75;
      fVar56 = fVar45 + fVar76;
      fVar57 = fVar47 + fVar77;
      fVar58 = fVar49 + fVar78;
      fVar59 = (*pfVar29 - *pfVar3) * fVar9;
      fVar60 = (pfVar29[1] - pfVar3[1]) * fVar10;
      fVar61 = (pfVar29[2] - pfVar3[2]) * fVar11;
      fVar62 = (pfVar29[3] - pfVar3[3]) * fVar12;
      fVar75 = fVar75 - fVar43;
      fVar76 = fVar76 - fVar45;
      fVar77 = fVar77 - fVar47;
      fVar78 = fVar78 - fVar49;
      fVar63 = (*pfVar4 - *pfVar7) * fVar9;
      fVar64 = (pfVar4[1] - pfVar7[1]) * fVar10;
      fVar65 = (pfVar4[2] - pfVar7[2]) * fVar11;
      fVar66 = (pfVar4[3] - pfVar7[3]) * fVar12;
      fVar39 = fVar51 + fVar71;
      fVar40 = fVar52 + fVar72;
      fVar41 = fVar53 + fVar73;
      fVar42 = fVar54 + fVar74;
      fVar44 = fVar60 + fVar79;
      fVar46 = fVar59 + fVar80;
      fVar48 = fVar62 + fVar81;
      fVar50 = fVar61 + fVar82;
      fVar79 = fVar79 - fVar60;
      fVar80 = fVar80 - fVar59;
      fVar81 = fVar81 - fVar62;
      fVar82 = fVar82 - fVar61;
      fVar43 = fVar64 + fVar67;
      fVar45 = fVar63 + fVar68;
      fVar47 = fVar66 + fVar69;
      fVar49 = fVar65 + fVar70;
      fVar67 = fVar67 - fVar64;
      fVar68 = fVar68 - fVar63;
      fVar69 = fVar69 - fVar66;
      fVar70 = fVar70 - fVar65;
      fVar59 = (fVar71 - fVar51) * fVar9;
      fVar60 = (fVar72 - fVar52) * fVar10;
      fVar61 = (fVar73 - fVar53) * fVar11;
      fVar62 = (fVar74 - fVar54) * fVar12;
      fVar51 = fVar45 * fVar10 + fVar43;
      fVar45 = fVar43 * fVar9 + fVar45;
      fVar43 = fVar49 * fVar12 + fVar47;
      fVar49 = fVar47 * fVar11 + fVar49;
      *param_2 = fVar39 + fVar55;
      param_2[1] = fVar40 + fVar56;
      param_2[2] = fVar41 + fVar57;
      param_2[3] = fVar42 + fVar58;
      param_2 = param_2 + 4;
      fVar47 = (fVar68 + fVar67 * fVar9) * fVar9;
      fVar52 = (fVar67 + fVar68 * fVar10) * fVar10;
      fVar53 = (fVar70 + fVar69 * fVar11) * fVar11;
      fVar54 = (fVar69 + fVar70 * fVar12) * fVar12;
      pfVar7 = (float *)(lVar37 + (longlong)pfVar29);
      *pfVar7 = fVar55 - fVar39;
      pfVar7[1] = fVar56 - fVar40;
      pfVar7[2] = fVar57 - fVar41;
      pfVar7[3] = fVar58 - fVar42;
      pfVar7 = (float *)(lVar23 + (longlong)pfVar29);
      *pfVar7 = fVar60 + fVar75;
      pfVar7[1] = fVar59 + fVar76;
      pfVar7[2] = fVar62 + fVar77;
      pfVar7[3] = fVar61 + fVar78;
      pfVar7 = (float *)(lVar38 + (longlong)pfVar29);
      *pfVar7 = fVar75 - fVar60;
      pfVar7[1] = fVar76 - fVar59;
      pfVar7[2] = fVar77 - fVar62;
      pfVar7[3] = fVar78 - fVar61;
      pfVar7 = (float *)(lVar35 + (longlong)pfVar29);
      *pfVar7 = fVar51 * fVar13 + fVar44;
      pfVar7[1] = fVar45 * fVar14 + fVar46;
      pfVar7[2] = fVar43 * fVar15 + fVar48;
      pfVar7[3] = fVar49 * fVar16 + fVar50;
      pfVar7 = (float *)((longlong)pfVar29 + lVar36);
      *pfVar7 = fVar51 * fVar17 + fVar44;
      pfVar7[1] = fVar45 * fVar18 + fVar46;
      pfVar7[2] = fVar43 * fVar19 + fVar48;
      pfVar7[3] = fVar49 * fVar20 + fVar50;
      pfVar7 = (float *)(lVar24 + (longlong)pfVar29);
      *pfVar7 = fVar47 * fVar17 + fVar79;
      pfVar7[1] = fVar52 * fVar18 + fVar80;
      pfVar7[2] = fVar53 * fVar19 + fVar81;
      pfVar7[3] = fVar54 * fVar20 + fVar82;
      pfVar7 = (float *)(lVar25 + (longlong)pfVar29);
      *pfVar7 = fVar47 * fVar13 + fVar79;
      pfVar7[1] = fVar52 * fVar14 + fVar80;
      pfVar7[2] = fVar53 * fVar15 + fVar81;
      pfVar7[3] = fVar54 * fVar16 + fVar82;
      pfVar29 = pfVar29 + 4;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  return;
}

