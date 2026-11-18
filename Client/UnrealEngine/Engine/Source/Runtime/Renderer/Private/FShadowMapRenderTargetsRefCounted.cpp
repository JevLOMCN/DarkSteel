// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// Release @ 145502aa0

void __thiscall FShadowMapRenderTargetsRefCounted::Release(FShadowMapRenderTargetsRefCounted *this)

{
  int *piVar1;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar2;
  longlong *plVar3;
  IPooledRenderTarget *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  iVar9 = (this->ColorTargets).ArrayNum;
  uVar11 = 0;
  uVar12 = uVar11;
  if (0 < iVar9) {
    do {
      uVar10 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar10 < iVar9) {
        uVar7 = ~uVar10 >> 0x1f;
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
      FVar2 = (this->ColorTargets).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)this;
      if (FVar2 != (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
        FVar8 = FVar2;
      }
      plVar3 = *(longlong **)(uVar12 + (longlong)FVar8);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(uVar12 + (longlong)FVar8) = 0;
        (**(code **)(*plVar3 + 0x38))();
      }
      iVar9 = (this->ColorTargets).ArrayNum;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar10 + 1) < iVar9);
  }
  FVar2 = (this->ColorTargets).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)this;
  if (FVar2 != (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
    FVar8 = FVar2;
  }
  DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
            ((TRefCountPtr<IPooledRenderTarget> *)FVar8,iVar9);
  piVar1 = &(this->ColorTargets).ArrayMax;
  (this->ColorTargets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_>
              (8,8,0,(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)this,0,piVar1);
  }
  pIVar4 = (this->DepthTarget).Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (this->DepthTarget).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  return;
}

// ComputeMemorySize @ 145621660

long64 __thiscall
FShadowMapRenderTargetsRefCounted::ComputeMemorySize(FShadowMapRenderTargetsRefCounted *this)

{
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar1;
  IPooledRenderTarget *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long64 lVar6;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar8 = (this->ColorTargets).ArrayNum;
  lVar10 = 0;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        lVar6 = (*pcVar3)();
        return lVar6;
      }
      FVar1 = (this->ColorTargets).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)this;
      if (FVar1 != (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
        FVar7 = FVar1;
      }
      uVar5 = (**(code **)(**(longlong **)(lVar11 + (longlong)FVar7) + 0x18))();
      iVar8 = (this->ColorTargets).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 8;
      lVar10 = lVar10 + (ulonglong)uVar5;
    } while ((int)uVar9 < iVar8);
  }
  pIVar2 = (this->DepthTarget).Reference;
  if (pIVar2 == (IPooledRenderTarget *)0x0) {
    return lVar10;
  }
  uVar9 = (**(code **)(pIVar2->_padding_ + 0x18))();
  return (ulonglong)uVar9 + lVar10;
}

// GetSize @ 145636f80

TIntPoint<int> __thiscall
FShadowMapRenderTargetsRefCounted::GetSize(FShadowMapRenderTargetsRefCounted *this)

{
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar1;
  code *pcVar2;
  bool bVar3;
  TIntPoint<int> TVar4;
  longlong lVar5;
  IPooledRenderTarget *pIVar6;
  TIntPoint<int>_u_0 in_RDX;
  
  pIVar6 = (this->DepthTarget).Reference;
  if (pIVar6 == (IPooledRenderTarget *)0x0) {
    if ((this->ColorTargets).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ColorTargets.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                         ,0x74d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
        return (TIntPoint<int>)TVar4.field0_0x0;
      }
    }
    if ((this->ColorTargets).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
        return (TIntPoint<int>)TVar4.field0_0x0;
      }
    }
    FVar1 = (this->ColorTargets).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
      this = (FShadowMapRenderTargetsRefCounted *)FVar1;
    }
    pIVar6 = *(IPooledRenderTarget **)this;
  }
  lVar5 = (**(code **)(pIVar6->_padding_ + 0x10))();
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar5 + 0x2c);
  return (TIntPoint<int>)in_RDX;
}

