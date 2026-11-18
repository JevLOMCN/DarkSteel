// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ~SUBOBJECT_HELPER_BASE @ 145a95990

void __thiscall
CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE::~SUBOBJECT_HELPER_BASE
          (SUBOBJECT_HELPER_BASE *this)

{
  return;
}

// AddToStateObject @ 145a9c400

void __thiscall
CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE::AddToStateObject
          (SUBOBJECT_HELPER_BASE *this,CD3DX12_STATE_OBJECT_DESC *param_1)

{
  ulong64 *puVar1;
  uint *puVar2;
  _List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *p_Var3;
  _List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *p_Var4;
  undefined4 uVar5;
  longlong lVar6;
  _List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *p_Var7;
  undefined4 uStack_24;
  
  lVar6 = (**(code **)(this->_padding_ + 0x10))();
  uVar5 = (**(code **)(this->_padding_ + 8))(this);
  p_Var3 = (param_1->m_SubobjectList)._Mypair._Myval2._Myhead;
  if ((param_1->m_SubobjectList)._Mypair._Myval2._Mysize != 0x666666666666666) {
    p_Var7 = ::operator_new(0x28);
    (p_Var7->_Myval)._padding_ = CONCAT44(uStack_24,uVar5);
    (p_Var7->_Myval)._padding_ = lVar6;
    (p_Var7->_Myval).pSubobjectArrayLocation = (D3D12_STATE_SUBOBJECT *)0x0;
    puVar1 = &(param_1->m_SubobjectList)._Mypair._Myval2._Mysize;
    *puVar1 = *puVar1 + 1;
    p_Var4 = p_Var3->_Prev;
    p_Var7->_Next = p_Var3;
    p_Var7->_Prev = p_Var4;
    p_Var3->_Prev = p_Var7;
    p_Var4->_Next = p_Var7;
    puVar2 = &(param_1->m_Desc).NumSubobjects;
    *puVar2 = *puVar2 + 1;
    this->m_pSubobject =
         (D3D12_STATE_SUBOBJECT *)
         &((param_1->m_SubobjectList)._Mypair._Myval2._Myhead)->_Prev->_Myval;
    return;
  }
  std::_Xlength_error("list too long");
  return;
}

