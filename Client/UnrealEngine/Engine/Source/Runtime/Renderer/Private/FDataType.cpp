// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// operator= @ 145859c90

FDataType * __thiscall FLocalVertexFactory::FDataType::operator=(FDataType *this,FDataType *param_1)

{
  longlong *_Dst;
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uchar uVar6;
  uchar uVar7;
  TEnumAsByte<EVertexElementType> TVar8;
  EVertexStreamUsage EVar9;
  
  lVar4 = param_1->_padding_;
  _Dst = &this->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  lVar4 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  lVar4 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  if (_Dst != &param_1->_padding_) {
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar3 = (int)param_1->_padding_;
    *(int *)&this->_padding_ = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                (0x10,8,iVar3,iVar2,(ForElementType<FVertexStreamComponent> *)_Dst,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy(_Dst,&param_1->_padding_,(longlong)iVar3 << 4);
      }
    }
  }
  lVar4 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  lVar4 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  uVar5 = (param_1->PreSkinPositionComponent).StreamOffset;
  uVar6 = (param_1->PreSkinPositionComponent).Offset;
  uVar7 = (param_1->PreSkinPositionComponent).Stride;
  TVar8.Value = (param_1->PreSkinPositionComponent).Type.Value;
  EVar9 = (param_1->PreSkinPositionComponent).VertexStreamUsage;
  (this->PreSkinPositionComponent).VertexBuffer = (param_1->PreSkinPositionComponent).VertexBuffer;
  (this->PreSkinPositionComponent).StreamOffset = uVar5;
  (this->PreSkinPositionComponent).Offset = uVar6;
  (this->PreSkinPositionComponent).Stride = uVar7;
  (this->PreSkinPositionComponent).Type = (TEnumAsByte<EVertexElementType>)TVar8.Value;
  (this->PreSkinPositionComponent).VertexStreamUsage = EVar9;
  this->PreSkinPositionComponentSRV = param_1->PreSkinPositionComponentSRV;
  return this;
}

