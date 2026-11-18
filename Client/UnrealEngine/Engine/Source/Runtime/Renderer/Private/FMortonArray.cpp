// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FMortonArray @ 14485ca80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMortonArray * __thiscall
FMortonArray::FMortonArray
          (FMortonArray *this,TArray<TBounds<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<TBounds<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FMortonArray *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  TArray<TBounds<float>,TSizedDefaultAllocator<32>_> *pTVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  <lambda_1> local_res8 [8];
  ForAnyElementType local_a8;
  int local_a0 [30];
  
  piVar1 = &(this->Sorted).ArrayMax;
  piVar2 = &(this->Sorted).ArrayNum;
  uVar16 = 0;
  (this->Sorted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  this->Bounds = param_1;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,param_1->ArrayNum,&local_a8,local_a0,local_a0 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,this->Bounds->ArrayNum,(ForAnyElementType *)this,piVar2,piVar1);
  pTVar20 = this->Bounds;
  auVar26 = __xmm_3f8000007f7fffff7f7fffff7f7fffff._0_12_;
  auVar23 = __xmm_3f800000ff7fffffff7fffffff7fffff._0_12_;
  uVar17 = uVar16;
  uVar19 = uVar16;
  auVar24 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
  auVar27 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
  if (0 < pTVar20->ArrayNum) {
    do {
      uVar15 = (uint)uVar17;
      uVar12 = 0;
      if ((int)uVar15 < pTVar20->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FMortonArray *)(*pcVar6)();
        return pFVar14;
      }
      pTVar3 = this->Bounds;
      pFVar4 = (pTVar20->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FMortonArray *)(*pcVar6)();
        return pFVar14;
      }
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      pTVar20 = this->Bounds;
      auVar7._4_4_ = *(float *)(pFVar5 + uVar19 + 0x14) + *(float *)(pFVar4 + uVar19 + 4);
      auVar7._0_4_ = *(float *)(pFVar5 + uVar19 + 0x10) + *(float *)(pFVar4 + uVar19);
      auVar7._8_4_ = *(float *)(pFVar5 + uVar19 + 0x18) + *(float *)(pFVar4 + uVar19 + 8);
      auVar7._12_4_ = 0;
      auVar27 = minps(auVar27,auVar7);
      auVar26 = auVar27._0_12_;
      auVar8._4_4_ = *(float *)(pFVar5 + uVar19 + 0x14) + *(float *)(pFVar4 + uVar19 + 4);
      auVar8._0_4_ = *(float *)(pFVar5 + uVar19 + 0x10) + *(float *)(pFVar4 + uVar19);
      auVar8._8_4_ = *(float *)(pFVar5 + uVar19 + 0x18) + *(float *)(pFVar4 + uVar19 + 8);
      auVar8._12_4_ = 0;
      auVar24 = maxps(auVar24,auVar8);
      auVar23 = auVar24._0_12_;
      uVar17 = (ulonglong)(uVar15 + 1);
      uVar19 = uVar19 + 0x20;
    } while ((int)(uVar15 + 1) < pTVar20->ArrayNum);
  }
  fVar9 = __real_447fc000;
  fVar31 = __real_3f800000 / (auVar23._0_4_ - auVar26._0_4_);
  fVar25 = (float)((uint)auVar26._0_4_ ^ __xmm_80000000800000008000000080000000);
  fVar28 = (float)((uint)auVar26._4_4_ ^ __xmm_80000000800000008000000080000000);
  fVar29 = (float)((uint)auVar26._8_4_ ^ __xmm_80000000800000008000000080000000);
  fVar30 = __real_3f800000 / (auVar23._8_4_ - auVar26._8_4_);
  fVar32 = __real_3f800000 / (auVar23._4_4_ - auVar26._4_4_);
  uVar17 = uVar16;
  uVar19 = uVar16;
  if (0 < pTVar20->ArrayNum) {
    do {
      uVar15 = (uint)uVar16;
      uVar18 = ~uVar15 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar15 < pTVar20->ArrayNum) {
        uVar12 = uVar18;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FMortonArray *)(*pcVar6)();
        return pFVar14;
      }
      pFVar4 = (pTVar20->AllocatorInstance).Data;
      pTVar20 = this->Bounds;
      uVar11 = 0;
      uVar12 = uVar11;
      if ((int)uVar15 < pTVar20->ArrayNum) {
        uVar12 = uVar18;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FMortonArray *)(*pcVar6)();
        return pFVar14;
      }
      pFVar5 = (pTVar20->AllocatorInstance).Data;
      uVar12 = (uint)(longlong)
                     ((*(float *)(pFVar5 + uVar19 + 0x10) + *(float *)(pFVar4 + uVar19) + fVar25) *
                      fVar31 * fVar9) & 0x3ff;
      uVar12 = (uVar12 << 0x10 ^ uVar12) & 0xff0000ff;
      uVar12 = (uVar12 << 8 ^ uVar12) & 0x300f00f;
      uVar22 = (uVar12 << 4 ^ uVar12) & 0x30c30c3;
      uVar12 = (uint)(longlong)
                     ((*(float *)(pFVar5 + uVar19 + 0x14) + *(float *)(pFVar4 + uVar19 + 4) + fVar28
                      ) * fVar32 * fVar9) & 0x3ff;
      uVar12 = (uVar12 << 0x10 ^ uVar12) & 0xff0000ff;
      uVar12 = (uVar12 << 8 ^ uVar12) & 0x300f00f;
      uVar21 = (uVar12 << 4 ^ uVar12) & 0x30c30c3;
      uVar12 = (uint)(longlong)
                     ((*(float *)(pFVar5 + uVar19 + 0x18) + *(float *)(pFVar4 + uVar19 + 8) + fVar29
                      ) * fVar30 * fVar9) & 0x3ff;
      uVar12 = (uVar12 << 0x10 ^ uVar12) & 0xff0000ff;
      uVar12 = (uVar12 << 8 ^ uVar12) & 0x300f00f;
      uVar13 = (uVar12 << 4 ^ uVar12) & 0x30c30c3;
      uVar12 = uVar11;
      if ((int)uVar15 < local_a0[0]) {
        uVar12 = uVar18;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FMortonArray *)(*pcVar6)();
        return pFVar14;
      }
      *(uint *)&local_a8.Data[uVar17 * 8].field_0x0 =
           (((uVar13 * 4 ^ uVar13) & 0x9249249) * 2 | (uVar21 * 4 ^ uVar21) & 0x9249249) * 2 |
           (uVar22 * 4 ^ uVar22) & 0x9249249;
      if ((int)uVar15 < local_a0[0]) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FMortonArray *)(*pcVar6)();
        return pFVar14;
      }
      *(uint *)(local_a8.Data + uVar17 * 8 + 4) = uVar15;
      uVar16 = (ulonglong)(uVar15 + 1);
      pTVar20 = this->Bounds;
      uVar17 = uVar17 + 1;
      uVar19 = uVar19 + 0x20;
    } while ((int)(uVar15 + 1) < pTVar20->ArrayNum);
  }
  RadixSort32<FMortonArray::FSortPair,int,_FMortonArray::FMortonArray_::__l2::<lambda_1>_>
            ((FSortPair *)(this->Sorted).AllocatorInstance.Data,(FSortPair *)local_a8.Data,
             local_a0[0],local_res8);
  if ((FSortPair *)local_a8.Data != (FSortPair *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return this;
}

// RegenerateCodes @ 1448904d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FMortonArray::RegenerateCodes(FMortonArray *this,FRange *param_1)

{
  TArray<TBounds<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TBounds<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  FIdentityFunctor local_res10;
  
  iVar16 = param_1->End;
  uVar15 = (ulonglong)param_1->Begin;
  auVar19 = __xmm_3f800000ff7fffffff7fffffff7fffff._0_12_;
  auVar22 = __xmm_3f8000007f7fffff7f7fffff7f7fffff._0_12_;
  if (param_1->Begin < iVar16) {
    lVar14 = uVar15 * 8;
    auVar20 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
    auVar23 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
    do {
      uVar12 = (uint)uVar15;
      uVar10 = 0;
      if ((int)uVar12 < (this->Sorted).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar1 = this->Bounds;
      uVar10 = *(uint *)((this->Sorted).AllocatorInstance.Data + lVar14 + 4);
      uVar11 = 0;
      if ((int)uVar10 < pTVar1->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar2 = this->Bounds;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      lVar13 = (longlong)(int)uVar10 * 0x20;
      uVar11 = 0;
      if ((int)uVar10 < pTVar2->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar15 = (ulonglong)(uVar12 + 1);
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      lVar14 = lVar14 + 8;
      iVar16 = param_1->End;
      auVar6._4_4_ = *(float *)(pFVar3 + lVar13 + 4) + *(float *)(pFVar4 + lVar13 + 0x14);
      auVar6._0_4_ = *(float *)(pFVar4 + lVar13 + 0x10) + *(float *)(pFVar3 + lVar13);
      auVar6._8_4_ = *(float *)(pFVar3 + lVar13 + 8) + *(float *)(pFVar4 + lVar13 + 0x18);
      auVar6._12_4_ = 0;
      auVar23 = minps(auVar23,auVar6);
      auVar22 = auVar23._0_12_;
      auVar7._4_4_ = *(float *)(pFVar3 + lVar13 + 4) + *(float *)(pFVar4 + lVar13 + 0x14);
      auVar7._0_4_ = *(float *)(pFVar4 + lVar13 + 0x10) + *(float *)(pFVar3 + lVar13);
      auVar7._8_4_ = *(float *)(pFVar3 + lVar13 + 8) + *(float *)(pFVar4 + lVar13 + 0x18);
      auVar7._12_4_ = 0;
      auVar20 = maxps(auVar20,auVar7);
      auVar19 = auVar20._0_12_;
    } while ((int)(uVar12 + 1) < iVar16);
  }
  fVar8 = __real_447fc000;
  uVar15 = (ulonglong)param_1->Begin;
  fVar27 = __real_3f800000 / (auVar19._0_4_ - auVar22._0_4_);
  fVar21 = (float)((uint)auVar22._0_4_ ^ __xmm_80000000800000008000000080000000);
  fVar24 = (float)((uint)auVar22._4_4_ ^ __xmm_80000000800000008000000080000000);
  fVar25 = (float)((uint)auVar22._8_4_ ^ __xmm_80000000800000008000000080000000);
  fVar26 = __real_3f800000 / (auVar19._8_4_ - auVar22._8_4_);
  fVar28 = __real_3f800000 / (auVar19._4_4_ - auVar22._4_4_);
  if (param_1->Begin < iVar16) {
    lVar14 = uVar15 * 8;
    do {
      uVar12 = (uint)uVar15;
      uVar10 = 0;
      if ((int)uVar12 < (this->Sorted).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = *(uint *)((this->Sorted).AllocatorInstance.Data + lVar14 + 4);
      pTVar1 = this->Bounds;
      uVar11 = 0;
      if ((int)uVar10 < pTVar1->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar13 = (longlong)(int)uVar10 * 0x20;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      pTVar1 = this->Bounds;
      uVar11 = 0;
      if ((int)uVar10 < pTVar1->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      uVar10 = (uint)(longlong)
                     ((*(float *)(pFVar3 + lVar13) + *(float *)(pFVar4 + lVar13 + 0x10) + fVar21) *
                      fVar27 * fVar8) & 0x3ff;
      uVar10 = (uVar10 << 0x10 ^ uVar10) & 0xff0000ff;
      uVar10 = (uVar10 << 8 ^ uVar10) & 0x300f00f;
      uVar18 = (uVar10 << 4 ^ uVar10) & 0x30c30c3;
      uVar10 = (uint)(longlong)
                     ((*(float *)(pFVar4 + lVar13 + 0x14) + *(float *)(pFVar3 + lVar13 + 4) + fVar24
                      ) * fVar28 * fVar8) & 0x3ff;
      uVar10 = (uVar10 << 0x10 ^ uVar10) & 0xff0000ff;
      uVar10 = (uVar10 << 8 ^ uVar10) & 0x300f00f;
      uVar17 = (uVar10 << 4 ^ uVar10) & 0x30c30c3;
      uVar10 = (uint)(longlong)
                     ((*(float *)(pFVar4 + lVar13 + 0x18) + *(float *)(pFVar3 + lVar13 + 8) + fVar25
                      ) * fVar26 * fVar8) & 0x3ff;
      uVar10 = (uVar10 << 0x10 ^ uVar10) & 0xff0000ff;
      uVar10 = (uVar10 << 8 ^ uVar10) & 0x300f00f;
      uVar11 = (uVar10 << 4 ^ uVar10) & 0x30c30c3;
      uVar10 = 0;
      if ((int)uVar12 < (this->Sorted).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar15 = (ulonglong)(uVar12 + 1);
      *(uint *)((this->Sorted).AllocatorInstance.Data + lVar14) =
           (((uVar11 * 4 ^ uVar11) & 0x9249249) * 2 | (uVar17 * 4 ^ uVar17) & 0x9249249) * 2 |
           (uVar18 * 4 ^ uVar18) & 0x9249249;
      lVar14 = lVar14 + 8;
      iVar16 = param_1->End;
    } while ((int)(uVar12 + 1) < iVar16);
  }
  uVar10 = param_1->Begin;
  uVar12 = 0;
  if ((int)uVar10 < (this->Sorted).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->Sorted).AllocatorInstance.Data;
  if (((int)(iVar16 - uVar10) < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res10 = SUB81(param_1,0);
  AlgoImpl::IntroSortInternal<FMortonArray::FSortPair,int,FIdentityFunctor,TLess<void>_>
            ((FSortPair *)(pFVar3 + (longlong)(int)uVar10 * 8),iVar16 - uVar10,local_res10,
             (TLess<void>)local_res10);
  return;
}

