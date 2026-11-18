// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CopyReferencesFromRenderTargets @ 145623ed0

void __thiscall
FShadowMapRenderTargets::CopyReferencesFromRenderTargets
          (FShadowMapRenderTargets *this,FShadowMapRenderTargetsRefCounted *param_1)

{
  int *piVar1;
  int *piVar2;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar3;
  IPooledRenderTarget *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar10 = (param_1->ColorTargets).ArrayNum;
  lVar11 = (longlong)(int)uVar10;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &(this->ColorTargets).ArrayMax;
  piVar2 = &(this->ColorTargets).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<IPooledRenderTarget_*>_>
              (8,8,uVar10,(ForElementType<IPooledRenderTarget_*> *)this,0,piVar1);
  }
  iVar7 = UE::Core::Private::
          ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<IPooledRenderTarget_*>_>
                    (8,8,uVar10,(ForElementType<IPooledRenderTarget_*> *)this,piVar2,piVar1);
  memset((this->ColorTargets).AllocatorInstance.Data + iVar7,0,lVar11 * 8);
  uVar10 = 0;
  if (0 < lVar11) {
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (param_1->ColorTargets).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (param_1->ColorTargets).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)param_1;
      if (FVar3 != (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
        FVar9 = FVar3;
      }
      pIVar4 = *(IPooledRenderTarget **)((longlong)FVar9 + lVar12 * 8);
      uVar8 = 0;
      if ((int)uVar10 < *piVar2) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = uVar10 + 1;
      (this->ColorTargets).AllocatorInstance.Data[lVar12] = pIVar4;
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar11);
  }
  this->DepthTarget = (param_1->DepthTarget).Reference;
  return;
}

