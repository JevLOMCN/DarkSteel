// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlatformCryptoContext
// Functions: 2

// BigNumToArray @ 14ea16970

void __cdecl
FPlatformCryptoUtilsOpenSSL::BigNumToArray
          (bignum_st *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  iVar5 = BN_num_bits();
  iVar7 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  uVar6 = (int)(iVar5 + 7 + (iVar5 + 7 >> 0x1f & 7U)) >> 3;
  if (iVar7 < (int)uVar6) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar6 - iVar7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + iVar5,0,(longlong)(int)(uVar6 - iVar7));
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)uVar6 < iVar7) {
      uVar9 = iVar7 - uVar6;
      if (((int)(uVar9 | uVar6) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 != 0) {
        pFVar8 = (param_2->AllocatorInstance).Data + (int)uVar6;
        iVar7 = (*piVar1 - uVar9) - uVar6;
        if (iVar7 != 0) {
          memmove(pFVar8,pFVar8 + (int)uVar9,(longlong)iVar7);
        }
        *piVar1 = *piVar1 - uVar9;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  BN_bn2bin(param_1,(param_2->AllocatorInstance).Data);
  pFVar8 = (param_2->AllocatorInstance).Data;
  iVar7 = *piVar1 / 2;
  lVar11 = (longlong)iVar7;
  if (0 < iVar7) {
    pFVar10 = pFVar8 + (*piVar1 + -1);
    do {
      FVar2 = *pFVar8;
      *pFVar8 = *pFVar10;
      pFVar8 = pFVar8 + 1;
      *pFVar10 = FVar2;
      lVar11 = lVar11 + -1;
      pFVar10 = pFVar10 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// LoadBinaryIntoBigNum @ 14ea16af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FPlatformCryptoUtilsOpenSSL::LoadBinaryIntoBigNum(uchar *param_1,int param_2,bignum_st *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  bignum_st *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uchar *puVar8;
  longlong lVar9;
  uint uVar10;
  bignum_st *pbVar11;
  bool bVar12;
  undefined8 uVar13;
  
  uVar13 = 0x14f6b79f3;
  uVar6 = (ulonglong)param_2;
  pbVar11 = (bignum_st *)0x0;
  if (param_3 == (bignum_st *)0x0) {
    param_3 = (bignum_st *)CRYPTO_zalloc(0x18,"crypto\\bn\\bn_lib.c",0xf6);
    if (param_3 == (bignum_st *)0x0) {
      ERR_put_error(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7,uVar13);
      return;
    }
    *(undefined4 *)(param_3 + 0x14) = 1;
    pbVar11 = param_3;
  }
  puVar8 = param_1 + uVar6;
  if (0 < param_2) {
    do {
      if (puVar8[-1] != '\0') break;
      puVar8 = puVar8 + -1;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    } while (0 < (int)uVar5);
    param_2 = (int)uVar6;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_3 + 8) = 0;
    return;
  }
  uVar10 = (int)uVar6 - 1;
  uVar5 = uVar10 & 7;
  uVar10 = (uVar10 >> 3) + 1;
  uVar7 = (ulonglong)uVar10;
  pbVar3 = param_3;
  if (*(int *)(param_3 + 0xc) < (int)uVar10) {
    pbVar3 = (bignum_st *)bn_expand2(param_3);
  }
  if (pbVar3 == (bignum_st *)0x0) {
    BN_free(pbVar11);
  }
  else {
    *(uint *)(param_3 + 8) = uVar10;
    uVar4 = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    do {
      pbVar1 = puVar8 + -1;
      puVar8 = puVar8 + -1;
      uVar10 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar10;
      uVar4 = uVar4 << 8 | (ulonglong)*pbVar1;
      bVar12 = uVar5 == 0;
      uVar5 = uVar5 - 1;
      if (bVar12) {
        uVar7 = (ulonglong)((int)uVar7 - 1);
        *(ulonglong *)(*(longlong *)param_3 + uVar7 * 8) = uVar4;
        uVar4 = 0;
        uVar5 = 7;
      }
    } while (uVar10 != 0);
    uVar6 = (ulonglong)*(int *)(param_3 + 8);
    if (0 < *(int *)(param_3 + 8)) {
      lVar9 = *(longlong *)param_3 + uVar6 * 8;
      do {
        uVar5 = (uint)uVar6;
        plVar2 = (longlong *)(lVar9 + -8);
        lVar9 = lVar9 + -8;
        if (*plVar2 != 0) break;
        uVar5 = uVar5 - 1;
        uVar6 = (ulonglong)uVar5;
      } while (0 < (int)uVar5);
      *(uint *)(param_3 + 8) = uVar5;
    }
    if (*(int *)(param_3 + 8) == 0) {
      *(undefined4 *)(param_3 + 0x10) = 0;
    }
  }
  return;
}

