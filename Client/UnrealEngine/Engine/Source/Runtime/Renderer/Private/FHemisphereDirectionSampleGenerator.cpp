// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GenerateSamples @ 144c41870

void __thiscall
FHemisphereDirectionSampleGenerator::GenerateSamples
          (FHemisphereDirectionSampleGenerator *this,int param_1,int param_2,int param_3,
          bool param_4,bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar13;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar14;
  float fVar15;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  
  iVar4 = 1;
  if (1 < (int)SQRT((float)param_1 * __real_3ea2f983)) {
    iVar4 = (int)SQRT((float)param_1 * __real_3ea2f983);
  }
  iVar11 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)param_1 / (longlong)iVar4) >> 0x1f) << 0x20 |
                 (longlong)param_1 / (longlong)iVar4 & 0xffffffffU) / (longlong)param_2);
  iVar7 = 1;
  if (1 < iVar11) {
    iVar7 = iVar11;
  }
  iVar7 = iVar7 * param_2;
  uVar9 = iVar7 * iVar4;
  if (((((this->SampleDirections).ArrayNum != uVar9) || (this->PowerOfTwoDivisor != param_2)) ||
      (this->Seed != param_3)) || (param_4 != this->bFullSphere)) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    piVar1 = &(this->SampleDirections).ArrayMax;
    (this->SampleDirections).ArrayNum = 0;
    if (*piVar1 != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar9,(ForAnyElementType *)this,0,piVar1);
    }
    fVar13 = __real_3f800000;
    iVar10 = 0;
    iVar11 = param_3;
    if (0 < iVar4) {
      do {
        iVar8 = 0;
        if (0 < iVar7) {
          fVar15 = fVar13 / (float)iVar4;
          if (param_5) {
            do {
              uVar9 = iVar11 * 0xbb38435 + 0x3619636b;
              iVar11 = uVar9 * 0xbb38435 + 0x3619636b;
              fVar12 = ((float)(uVar9 >> 9 | 0x3f800000) - fVar13) + (float)iVar10;
              fVar14 = fVar12 * fVar15;
              if (param_4) {
                fVar14 = (fVar15 + fVar15) * fVar12 - fVar13;
              }
              __libm_sse2_sincosf_();
              pFVar2 = (this->SampleDirections).AllocatorInstance.Data;
              uStack_ac = 0x3f800000;
              fStack_b4 = extraout_XMM0_Da * SQRT(fVar13 - fVar14);
              local_b8 = extraout_XMM0_Db * SQRT(fVar13 - fVar14);
              fStack_b0 = SQRT(fVar14);
              if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
                  ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)*piVar1 * 0x10)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar6 = (this->SampleDirections).ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1010,(ForAnyElementType *)this,piVar1);
              }
              (this->SampleDirections).ArrayNum = iVar6 + 1;
              iVar8 = iVar8 + 1;
              pFVar2 = (this->SampleDirections).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
              *(ulonglong *)pFVar2 = CONCAT44(fStack_b4,local_b8);
              *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_ac,fStack_b0);
            } while (iVar8 < iVar7);
          }
          else {
            do {
              uVar9 = iVar11 * 0xbb38435 + 0x3619636b;
              iVar11 = uVar9 * 0xbb38435 + 0x3619636b;
              fVar12 = ((float)(uVar9 >> 9 | 0x3f800000) - fVar13) + (float)iVar10;
              fVar14 = fVar12 * fVar15;
              if (param_4) {
                fVar14 = (fVar15 + fVar15) * fVar12 - fVar13;
              }
              __libm_sse2_sincosf_();
              pFVar2 = (this->SampleDirections).AllocatorInstance.Data;
              uStack_9c = 0x3f800000;
              fStack_a4 = SQRT(fVar13 - fVar14 * fVar14);
              local_a8 = extraout_XMM0_Db_00 * fStack_a4;
              fStack_a4 = extraout_XMM0_Da_00 * fStack_a4;
              fStack_a0 = fVar14;
              if (((pFVar2 <= (FScriptContainerElement *)&local_a8) &&
                  ((FScriptContainerElement *)&local_a8 < pFVar2 + (longlong)*piVar1 * 0x10)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar6 = (this->SampleDirections).ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1010,(ForAnyElementType *)this,piVar1);
              }
              (this->SampleDirections).ArrayNum = iVar6 + 1;
              iVar8 = iVar8 + 1;
              pFVar2 = (this->SampleDirections).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
              *(ulonglong *)pFVar2 = CONCAT44(fStack_a4,local_a8);
              *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_9c,fStack_a0);
            } while (iVar8 < iVar7);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar4);
    }
    fVar12 = fVar13 - fVar13 / (float)(this->SampleDirections).ArrayNum;
    fVar15 = __real_bf800000;
    if ((__real_bf800000 <= fVar12) && (fVar15 = fVar12, fVar13 <= fVar12)) {
      fVar15 = fVar13;
    }
    fVar13 = acosf(fVar15);
    this->PowerOfTwoDivisor = param_2;
    this->bCosineDistribution = param_5;
    this->ConeHalfAngle = fVar13;
    this->Seed = param_3;
    this->bFullSphere = param_4;
  }
  return;
}

