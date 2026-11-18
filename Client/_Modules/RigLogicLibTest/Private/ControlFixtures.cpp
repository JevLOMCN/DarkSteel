// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 7

// _Copy @ 14c473560

_Func_base<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*>
* __thiscall
std::
_Func_impl_no_alloc<`ControlsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`ControlsFactory::getInstanceFactory'::`2'::<lambda_1>,std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined2 *)((longlong)param_1 + 0x10) = *(undefined2 *)((longlong)this + 0x10);
  return param_1;
}

// _Delete_this @ 14c473590

void __thiscall
std::
_Func_impl_no_alloc<`ControlsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Do_call @ 14c4735b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_> *
__thiscall
std::
_Func_impl_no_alloc<`ControlsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*>
::_Do_call(void *this,
          unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>
          *__return_storage_ptr__,ArrayView<rl4::ControlInitializer_const_> *param_1,
          MemoryResource **param_2)

{
  MemoryResource *pMVar1;
  ControlInitializer *pCVar2;
  ulong64 uVar3;
  StandardControlsInputInstance *this_00;
  _Func_base<void,rl4::ControlsInputInstance_*> *p_Var4;
  MemoryResource *pMVar5;
  undefined1 auStackY_d8 [32];
  ArrayView<rl4::ControlInitializer_const_> local_98;
  undefined **local_88;
  MemoryResource *local_80;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pCVar2 = param_1->ptr;
  uVar3 = param_1->sz;
  pMVar1 = *param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pMVar5 = (MemoryResource *)
           &`public:___cdecl_pma::impl::PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::StandardControlsInputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
  if (pMVar1 != (MemoryResource *)0x0) {
    pMVar5 = pMVar1;
  }
  this_00 = (StandardControlsInputInstance *)(**(code **)((longlong)*pMVar5 + 8))(pMVar5,0x98,8);
  local_98.ptr = pCVar2;
  local_98.sz = uVar3;
  rl4::StandardControlsInputInstance::StandardControlsInputInstance
            (this_00,*(ushort *)((longlong)this + 8),*(ushort *)((longlong)this + 10),
             *(ushort *)((longlong)this + 0xc),*(ushort *)((longlong)this + 0xe),
             *(ushort *)((longlong)this + 0x10),&local_98,pMVar1);
  local_88 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_AEBGAEBGAEBGAEBGAEBGAEAV__ArrayView___CBUControlInitializer_rl4___av__AEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VControlsInputInstance_rl4__V__function___A6AXPEAVControlsInputInstance_rl4___Z_std___std__VStandardControlsInputInstance_rl4__VControlsInputInstance_4__impl_pma__QEAA_AV__unique_ptr_VControlsInputInstance_rl4__V__function___A6AXPEAVControlsInputInstance_rl4___Z_std___std__AEBG0000AEAV__ArrayView___CBUControlInitializer_rl4___av__AEAPEAVMemoryResource_4__Z_XPEAVControlsInputInstance_rl4___std__6B_
  ;
  local_50 = &local_88;
  *(undefined8 *)&(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = 0;
  local_80 = pMVar5;
  p_Var4 = _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,rl4::StandardControlsInputInstance,rl4::ControlsInputInstance>::create<unsigned_short_const_&,unsigned_short_const_&,unsigned_short_const_&,unsigned_short_const_&,unsigned_short_const_&,av::ArrayView<rl4::ControlInitializer_const_>_&,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::ControlsInputInstance_*>
           ::_Move(&local_88,__return_storage_ptr__);
  *(_Func_base<void,rl4::ControlsInputInstance_*> **)
   &(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = p_Var4;
  if (local_50 != (undefined ***)0x0) {
    (*(code *)(*local_50)[4])(local_50,local_50 != &local_88);
  }
  (__return_storage_ptr__->_Mypair)._Myval2 = (ControlsInputInstance *)this_00;
  return __return_storage_ptr__;
}

// _Get @ 14c473730

void * __thiscall
std::
_Func_impl_no_alloc<`ControlsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Move @ 14c473740

_Func_base<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*>
* __thiscall
std::
_Func_impl_no_alloc<`ControlsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`ControlsFactory::getInstanceFactory'::`2'::<lambda_1>,std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined2 *)((longlong)param_1 + 0x10) = *(undefined2 *)((longlong)this + 0x10);
  return param_1;
}

// _Target_type @ 14c473770

type_info * __thiscall
std::
_Func_impl_no_alloc<`ControlsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_static_class_std::function<class_std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance*___ptr64)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource*___ptr64)>___cdecl_ControlsFactory::getInstanceFactory(unsigned_short,unsigned_short,unsigned_short,unsigned_short,unsigned_short)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// getInstanceFactory @ 14c473780

function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
* __cdecl ControlsFactory::getInstanceFactory
                    (function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
                     *__return_storage_ptr__,ushort param_1,ushort param_2,ushort param_3,
                    ushort param_4,ushort param_5)

{
  *(undefined ***)__return_storage_ptr__ =
       &std::
        _Func_impl_no_alloc<`ControlsFactory::getInstanceFactory'::`2'::<lambda_1>,std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>,av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*>
        ::_vftable_;
  *(ushort *)&__return_storage_ptr__->field_0x8 = param_1;
  *(ushort *)&__return_storage_ptr__->field_0xa = param_2;
  *(ushort *)&__return_storage_ptr__->field_0xc = param_3;
  *(ushort *)&__return_storage_ptr__->field_0xe = param_4;
  *(ushort *)&__return_storage_ptr__->field_0x10 = param_5;
  *(function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
    **)&__return_storage_ptr__->field_0x38 = __return_storage_ptr__;
  return __return_storage_ptr__;
}

