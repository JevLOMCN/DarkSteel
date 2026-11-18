// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FMeshBuilderOneFrameResources @ 147b3cfc0

void __thiscall
FMeshBuilderOneFrameResources::~FMeshBuilderOneFrameResources(FMeshBuilderOneFrameResources *this)

{
  FPooledDynamicMeshVertexBuffer *pFVar1;
  FPooledDynamicMeshIndexBuffer *pFVar2;
  FPooledDynamicMeshVertexFactory *pFVar3;
  FDynamicMeshPrimitiveUniformBuffer *pFVar4;
  
  this->_padding_ = (longlong)&___7FMeshBuilderOneFrameResources__6B_;
  pFVar1 = this->VertexBuffer;
  if (pFVar1 != (FPooledDynamicMeshVertexBuffer *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(&pFVar1->_padding_);
    pFVar1 = this->VertexBuffer;
    if (pFVar1 != (FPooledDynamicMeshVertexBuffer *)0x0) {
      (**(code **)pFVar1->_padding_)(&pFVar1->_padding_,1);
    }
  }
  pFVar2 = this->IndexBuffer;
  if (pFVar2 != (FPooledDynamicMeshIndexBuffer *)0x0) {
    if ((pFVar2->Indices).ArrayNum != 0) {
      (**(code **)(pFVar2->_padding_ + 0x20))(&pFVar2->_padding_);
    }
    pFVar2 = this->IndexBuffer;
    if (pFVar2 != (FPooledDynamicMeshIndexBuffer *)0x0) {
      (**(code **)pFVar2->_padding_)(&pFVar2->_padding_,1);
    }
  }
  pFVar3 = this->VertexFactory;
  if (pFVar3 != (FPooledDynamicMeshVertexFactory *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x20))(&pFVar3->_padding_);
    pFVar3 = this->VertexFactory;
    if (pFVar3 != (FPooledDynamicMeshVertexFactory *)0x0) {
      (**(code **)pFVar3->_padding_)(&pFVar3->_padding_,1);
    }
  }
  pFVar4 = this->PrimitiveUniformBuffer;
  if (pFVar4 != (FDynamicMeshPrimitiveUniformBuffer *)0x0) {
    (**(code **)(*(longlong *)&pFVar4->field_0x8 + 0x20))(&pFVar4->field_0x8);
    pFVar4 = this->PrimitiveUniformBuffer;
    if (pFVar4 != (FDynamicMeshPrimitiveUniformBuffer *)0x0) {
      (*(code *)**(undefined8 **)&pFVar4->field_0x8)(&pFVar4->field_0x8,1);
    }
  }
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  return;
}

