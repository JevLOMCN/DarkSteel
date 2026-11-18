// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: msvcprt
// Functions: 9

// `dynamic_initializer_for_'_Fac_tidy_reg'' @ 14145a848

void __cdecl std::_dynamic_initializer_for___Fac_tidy_reg__(void)

{
  atexit(_dynamic_atexit_destructor_for___Fac_tidy_reg__);
  return;
}

// _Fac_node @ 15016a20c

_Fac_node * __thiscall
std::_Fac_node::_Fac_node(_Fac_node *this,_Fac_node *param_1,_Facet_base *param_2)

{
  this->_Next = param_1;
  this->_Facptr = param_2;
  return this;
}

// ~_Fac_node @ 15016a220

void __thiscall std::_Fac_node::~_Fac_node(_Fac_node *this)

{
  longlong lVar1;
  
  lVar1 = (*__guard_dispatch_icall_fptr)();
  if (lVar1 != 0) {
    (*__guard_dispatch_icall_fptr)(lVar1,1);
  }
  return;
}

// ~_Fac_tidy_reg_t @ 15016a25c

void __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(_Fac_tidy_reg_t *this)

{
  _Fac_node *_Memory;
  longlong lVar1;
  
  while (_Memory = _Fac_head, _Fac_head != (_Fac_node *)0x0) {
    _Fac_head = _Fac_head->_Next;
    lVar1 = (*__guard_dispatch_icall_fptr)();
    if (lVar1 != 0) {
      (*__guard_dispatch_icall_fptr)(lVar1,1);
    }
    free(_Memory);
  }
  return;
}

// operator_new @ 15016a2bc

void * __cdecl std::_Fac_node::operator_new(ulong64 param_1)

{
  void *pvVar1;
  void *extraout_RAX;
  size_t _Size;
  
  _Size = 1;
  if (param_1 != 0) {
    _Size = param_1;
  }
  pvVar1 = malloc(_Size);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  _Xbad_alloc();
  return extraout_RAX;
}

// operator_delete @ 15016a2ec

void __cdecl std::_Fac_node::operator_delete(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x00015016a2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}

// `scalar_deleting_destructor' @ 15016a2fc

void * __thiscall std::_Fac_node::_scalar_deleting_destructor_(_Fac_node *this,uint param_1)

{
  longlong lVar1;
  
  lVar1 = (*__guard_dispatch_icall_fptr)();
  if (lVar1 != 0) {
    (*__guard_dispatch_icall_fptr)(lVar1,1);
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      free(this);
    }
    else {
      __empty_global_delete(this,0x10);
    }
  }
  return this;
}

// _Facet_Register @ 15016a36c

void __cdecl std::_Facet_Register(_Facet_base *param_1)

{
  _Fac_node *p_Var1;
  
  p_Var1 = malloc(0x10);
  if (p_Var1 != (_Fac_node *)0x0) {
    p_Var1->_Next = _Fac_head;
    p_Var1->_Facptr = param_1;
    _Fac_head = p_Var1;
    return;
  }
  _Xbad_alloc();
  return;
}

// `dynamic_atexit_destructor_for_'_Fac_tidy_reg'' @ 150476704

void __cdecl std::_dynamic_atexit_destructor_for___Fac_tidy_reg__(void)

{
  _Fac_node *_Memory;
  longlong lVar1;
  
  while (_Memory = _Fac_head, _Fac_head != (_Fac_node *)0x0) {
    _Fac_head = _Fac_head->_Next;
    lVar1 = (*__guard_dispatch_icall_fptr)();
    if (lVar1 != 0) {
      (*__guard_dispatch_icall_fptr)(lVar1,1);
    }
    free(_Memory);
  }
  return;
}

