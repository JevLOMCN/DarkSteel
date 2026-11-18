// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 8

// _Copy @ 14c463dc0

_Func_base<std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
* __thiscall
std::
_Func_impl_no_alloc<`AnimatedMapsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`AnimatedMapsFactory::getInstanceFactory'::`2'::<lambda_1>,std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
        ::_vftable_;
  *(undefined2 *)((longlong)param_1 + 8) = *(undefined2 *)((longlong)this + 8);
  return param_1;
}

// _Delete_this @ 14c463de0

void __thiscall
std::
_Func_impl_no_alloc<`AnimatedMapsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Do_call @ 14c463e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>
* __thiscall
std::
_Func_impl_no_alloc<`AnimatedMapsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Do_call(void *this,
          unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>
          *__return_storage_ptr__,MemoryResource **param_1)

{
  MemoryResource *pMVar1;
  AnimatedMapsImplOutputInstance *this_00;
  _Func_base<void,rl4::AnimatedMapsOutputInstance_*> *p_Var2;
  MemoryResource *pMVar3;
  undefined1 auStack_98 [32];
  undefined **local_78;
  MemoryResource *local_70;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  pMVar1 = *param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>'::__l2
             ::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pMVar3 = (MemoryResource *)
           &`public:___cdecl_pma::impl::PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::AnimatedMapsImplOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
  if (pMVar1 != (MemoryResource *)0x0) {
    pMVar3 = pMVar1;
  }
  this_00 = (AnimatedMapsImplOutputInstance *)(**(code **)((longlong)*pMVar3 + 8))(pMVar3,0x28,8);
  rl4::AnimatedMapsImplOutputInstance::AnimatedMapsImplOutputInstance
            (this_00,*(ushort *)((longlong)this + 8),pMVar1);
  local_78 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_AEBGAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VAnimatedMapsOutputInstance_rl4__V__function___A6AXPEAVAnimatedMapsOutputInstance_rl4___Z_std___std__VAnimatedMapsImplOutputInstance_rl4__VAnimatedMapsOutputInstance_4__impl_pma__QEAA_AV__unique_ptr_VAnimatedMapsOutputInstance_rl4__V__function___A6AXPEAVAnimatedMapsOutputInstance_rl4___Z_std___std__AEBGAEAPEAVMemoryResource_4__Z_XPEAVAnimatedMapsOutputInstance_rl4___std__6B_
  ;
  local_40 = &local_78;
  *(undefined8 *)&(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = 0;
  local_70 = pMVar3;
  p_Var2 = _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,rl4::AnimatedMapsImplOutputInstance,rl4::AnimatedMapsOutputInstance>::create<unsigned_short_const_&,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::AnimatedMapsOutputInstance_*>
           ::_Move(&local_78,__return_storage_ptr__);
  *(_Func_base<void,rl4::AnimatedMapsOutputInstance_*> **)
   &(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = p_Var2;
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
  }
  (__return_storage_ptr__->_Mypair)._Myval2 = (AnimatedMapsOutputInstance *)this_00;
  return __return_storage_ptr__;
}

// _Get @ 14c463f30

void * __thiscall
std::
_Func_impl_no_alloc<`AnimatedMapsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Move @ 14c463f40

_Func_base<std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
* __thiscall
std::
_Func_impl_no_alloc<`AnimatedMapsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`AnimatedMapsFactory::getInstanceFactory'::`2'::<lambda_1>,std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
        ::_vftable_;
  *(undefined2 *)((longlong)param_1 + 8) = *(undefined2 *)((longlong)this + 8);
  return param_1;
}

// _Target_type @ 14c463f60

type_info * __thiscall
std::
_Func_impl_no_alloc<`AnimatedMapsFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_static_class_std::function<class_std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance*___ptr64)>_>___cdecl(pma::MemoryResource*___ptr64)>___cdecl_AnimatedMapsFactory::getInstanceFactory(unsigned_short)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// getInstanceFactory @ 14c463f70

function<std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
* __cdecl AnimatedMapsFactory::getInstanceFactory
                    (function<std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                     *__return_storage_ptr__,ushort param_1)

{
  *(ushort *)&__return_storage_ptr__->field_0x8 = param_1;
  *(undefined ***)__return_storage_ptr__ =
       &std::
        _Func_impl_no_alloc<`AnimatedMapsFactory::getInstanceFactory'::`2'::<lambda_1>,std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
        ::_vftable_;
  *(function<std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
    **)&__return_storage_ptr__->field_0x38 = __return_storage_ptr__;
  return __return_storage_ptr__;
}

// withDefaults @ 14c463f90

AnimatedMapsImpl * __cdecl
AnimatedMapsFactory::withDefaults
          (AnimatedMapsImpl *__return_storage_ptr__,ConditionalTable *param_1,
          MemoryResource *param_2)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_68;
  undefined1 local_48 [64];
  
  local_48._8_2_ = rl4::ConditionalTable::getOutputCount(param_1);
  local_48._56_8_ = local_48;
  local_48._0_8_ =
       &std::
        _Func_impl_no_alloc<`AnimatedMapsFactory::getInstanceFactory'::`2'::<lambda_1>,std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>,pma::MemoryResource_*>
        ::_vftable_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (param_2 == (MemoryResource *)0x0) {
    param_2 = (MemoryResource *)
              &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  }
  local_68._Mypair._Myval1 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)param_2;
  local_68._Mypair._Myval2._Myfirst =
       (ushort *)(**(code **)((longlong)*(DefaultMemoryResource *)param_2 + 8))(param_2,2,8);
  local_68._Mypair._Myval2._Mylast = local_68._Mypair._Myval2._Myfirst + 1;
  *local_68._Mypair._Myval2._Myfirst = 2;
  local_68._Mypair._Myval2._Myend = local_68._Mypair._Myval2._Mylast;
  rl4::AnimatedMapsImpl::AnimatedMapsImpl
            (__return_storage_ptr__,&local_68,param_1,
             (function<std::unique_ptr<rl4::AnimatedMapsOutputInstance,std::function<void___cdecl(rl4::AnimatedMapsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)local_48);
  if (local_68._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_68._Mypair._Myval1 + 0x10))
              (local_68._Mypair._Myval1,local_68._Mypair._Myval2._Myfirst,
               ((longlong)local_68._Mypair._Myval2._Myend -
                (longlong)local_68._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  return __return_storage_ptr__;
}

