// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// FKSphereElem @ 14cda57d0

FKSphereElem * __thiscall FKSphereElem::FKSphereElem(FKSphereElem *this,FKSphereElem *param_1)

{
  double dVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = (longlong)&___7FKShapeElem__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(byte *)&this->_padding_ = (byte)this->_padding_ ^ ((byte)lVar2 ^ (byte)param_1->_padding_) & 1;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined4 *)&this->_padding_ = 6;
  this->_padding_ = (longlong)this;
  this->_padding_ = (longlong)&___7FKSphereElem__6B_;
  dVar1 = (param_1->Center).field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = (param_1->Center).field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar1;
  (this->Center).field0_0x0._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
  this->Radius = param_1->Radius;
  return this;
}

