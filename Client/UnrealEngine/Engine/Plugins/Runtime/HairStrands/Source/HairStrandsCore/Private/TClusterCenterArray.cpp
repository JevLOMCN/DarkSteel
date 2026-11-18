// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// Accumulate @ 14dff7180

void __thiscall
UE::Geometry::TClusterCenterArray<UE::Math::TVector<float>,1>::Accumulate
          (TClusterCenterArray<UE::Math::TVector<float>,1> *this,int param_1,TVector<float> *param_2
          )

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  
  uVar9 = 0;
  do {
    uVar7 = 0;
    if (param_1 < (this->AtomicValues).Elements[0].ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->AtomicValues).Elements[0].AllocatorInstance.Data;
    fVar2 = (param_2->field0_0x0).XYZ[(int)uVar9];
    fVar8 = *(float *)(pFVar4 + (longlong)param_1 * 4);
    do {
      pFVar1 = pFVar4 + (longlong)param_1 * 4;
      LOCK();
      fVar3 = *(float *)pFVar1;
      bVar6 = fVar8 == fVar3;
      if (bVar6) {
        *(float *)pFVar1 = fVar2 + fVar8;
        fVar3 = fVar8;
      }
      fVar8 = fVar3;
      UNLOCK();
    } while (!bVar6);
    uVar9 = uVar9 + 1;
    this = (TClusterCenterArray<UE::Math::TVector<float>,1> *)((this->AtomicValues).Elements + 1);
  } while (uVar9 < 3);
  return;
}

// SetNumZeroed @ 14e0290f0

void __thiscall
UE::Geometry::TClusterCenterArray<UE::Math::TVector<float>,1>::SetNumZeroed
          (TClusterCenterArray<UE::Math::TVector<float>,1> *this,uint param_1)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  piVar5 = &(this->AtomicValues).Elements[0].ArrayNum;
  uVar7 = 0;
  do {
    iVar4 = *piVar5;
    if (iVar4 < (int)param_1) {
      iVar3 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,param_1 - iVar4,(ForAnyElementType *)(piVar5 + -2),piVar5,piVar5 + 1);
      memset((((TArray<std::atomic<float>,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->
             AllocatorInstance).Data + (longlong)iVar3 * 4,0,(longlong)(int)(param_1 - iVar4) << 2);
    }
    else {
      if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)param_1);
      }
      if ((int)param_1 < iVar4) {
        uVar6 = iVar4 - param_1;
        if ((int)(uVar6 | param_1) < 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (uVar6 != 0) {
          _Dst = (((TArray<std::atomic<float>,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->
                 AllocatorInstance).Data + (longlong)(int)param_1 * 4;
          iVar4 = (*piVar5 - uVar6) - param_1;
          if (iVar4 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar4 << 2);
          }
          *piVar5 = *piVar5 - uVar6;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)(piVar5 + -2),*piVar5,piVar5 + 1);
        }
      }
    }
    uVar7 = uVar7 + 1;
    piVar5 = piVar5 + 4;
  } while (uVar7 < 3);
  return;
}

