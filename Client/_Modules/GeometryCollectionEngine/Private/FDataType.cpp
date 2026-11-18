// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// operator= @ 1463a5fc0

FDataType * __thiscall
FGeometryCollectionVertexFactory::FDataType::operator=(FDataType *this,FDataType *param_1)

{
  longlong *_Dst;
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
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
  this->BoneTransformSRV = param_1->BoneTransformSRV;
  this->BonePrevTransformSRV = param_1->BonePrevTransformSRV;
  this->BoneMapSRV = param_1->BoneMapSRV;
  return this;
}

