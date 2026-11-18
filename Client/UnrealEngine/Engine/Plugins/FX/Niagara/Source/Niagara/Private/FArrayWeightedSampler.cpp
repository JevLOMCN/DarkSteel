// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// GetWeights @ 148e72630

float __thiscall
`UNiagaraDataInterfaceArrayDistributionInt::BuildTableData'::__l2::FArrayWeightedSampler::GetWeights
          (void *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  iVar5 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  uVar6 = *(uint *)((longlong)this + 0x38);
  fVar12 = 0.0;
  if (iVar5 < (int)uVar6) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6 - iVar5,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)uVar6 < iVar5) {
      uVar8 = iVar5 - uVar6;
      if (((int)(uVar8 | uVar6) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        fVar12 = (float)(*pcVar2)();
        return fVar12;
      }
      if (uVar8 != 0) {
        _Dst = (param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 4;
        iVar5 = (*piVar1 - uVar6) - uVar8;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar5 << 2);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
      }
    }
  }
  fVar3 = __real_322bcc77;
  uVar6 = 0;
  if (0 < *(int *)((longlong)this + 0x38)) {
    lVar7 = 0;
    lVar10 = 0;
    do {
      uVar9 = ~uVar6 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar6 < *(int *)((longlong)this + 0x38)) {
        uVar8 = uVar9;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        fVar12 = (float)(*pcVar2)();
        return fVar12;
      }
      fVar11 = *(float *)(lVar10 + 4 + *(longlong *)((longlong)this + 0x30));
      if (fVar11 <= fVar3) {
        fVar11 = fVar3;
      }
      uVar8 = 0;
      if ((int)uVar6 < *piVar1) {
        uVar8 = uVar9;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        fVar12 = (float)(*pcVar2)();
        return fVar12;
      }
      *(float *)((param_1->AllocatorInstance).Data + lVar7) = fVar11;
      uVar8 = 0;
      if ((int)uVar6 < *piVar1) {
        uVar8 = uVar9;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        fVar12 = (float)(*pcVar2)();
        return fVar12;
      }
      uVar6 = uVar6 + 1;
      lVar10 = lVar10 + 8;
      fVar12 = fVar12 + *(float *)((param_1->AllocatorInstance).Data + lVar7);
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < *(int *)((longlong)this + 0x38));
  }
  return fVar12;
}

