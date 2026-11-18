// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FShapeOrShapesArray @ 143afaa80

FShapeOrShapesArray * __thiscall
Chaos::FShapeOrShapesArray::FShapeOrShapesArray
          (FShapeOrShapesArray *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  FImplicitObject *this_00;
  code *pcVar4;
  bool bVar5;
  FShapeOrShapesArray *pFVar6;
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar8;
  uint uVar9;
  
  pTVar7 = (TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar1 = (uint)param_1->_padding_;
    lVar3 = param_1->_padding_;
    uVar9 = 0;
    if ((int)uVar1 < *(int *)(lVar3 + 0x68)) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FShapeOrShapesArray *)(*pcVar4)();
        return pFVar6;
      }
    }
    this_00 = *(FImplicitObject **)(*(longlong *)(lVar3 + 0x60) + (longlong)(int)uVar1 * 8);
    if (this_00 != (FImplicitObject *)0x0) {
      bVar5 = FImplicitObject::IsUnderlyingUnion(this_00);
      iVar2 = (int)param_1->_padding_;
      if (bVar5) {
        bVar5 = false;
        pTVar7 = TGeometryParticlesImp<double,3,0>::ShapesArray
                           ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,iVar2);
        goto LAB_143afab77;
      }
      FVar8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )TGeometryParticlesImp<double,3,0>::ShapesArray
                          ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,iVar2);
      if (*(int *)((longlong)FVar8 + 0x10) < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FShapeOrShapesArray *)(*pcVar4)();
          return pFVar6;
        }
      }
      if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            *)((longlong)FVar8 + 8) !=
          (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          0x0) {
        FVar8 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  *)((longlong)FVar8 + 8);
      }
      pTVar7 = *(TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 **)FVar8;
    }
  }
  bVar5 = true;
LAB_143afab77:
  (this->field0_0x0).ShapeArray = pTVar7;
  this->bIsSingleShape = bVar5;
  return this;
}

