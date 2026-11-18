// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 8

// _Copy @ 14c466ee0

_Func_base<std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
* __thiscall
std::
_Func_impl_no_alloc<`rltests::BlendShapesFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`rltests::BlendShapesFactory::getInstanceFactory'::`2'::<lambda_1>,std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
        ::_vftable_;
  *(undefined2 *)((longlong)param_1 + 8) = *(undefined2 *)((longlong)this + 8);
  return param_1;
}

// _Delete_this @ 14c466f00

void __thiscall
std::
_Func_impl_no_alloc<`rltests::BlendShapesFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Do_call @ 14c466f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>
* __thiscall
std::
_Func_impl_no_alloc<`rltests::BlendShapesFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
::_Do_call(void *this,
          unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>
          *__return_storage_ptr__,MemoryResource **param_1)

{
  MemoryResource *pMVar1;
  BlendShapesImplOutputInstance *this_00;
  _Func_base<void,rl4::BlendShapesOutputInstance_*> *p_Var2;
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
      `public:___cdecl_pma::impl::PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pMVar3 = (MemoryResource *)
           &`public:___cdecl_pma::impl::PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::BlendShapesImplOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
  if (pMVar1 != (MemoryResource *)0x0) {
    pMVar3 = pMVar1;
  }
  this_00 = (BlendShapesImplOutputInstance *)(**(code **)((longlong)*pMVar3 + 8))(pMVar3,0x28,8);
  rl4::BlendShapesImplOutputInstance::BlendShapesImplOutputInstance
            (this_00,*(ushort *)((longlong)this + 8),pMVar1);
  local_78 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_AEBGAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VBlendShapesOutputInstance_rl4__V__function___A6AXPEAVBlendShapesOutputInstance_rl4___Z_std___std__VBlendShapesImplOutputInstance_rl4__VBlendShapesOutputInstance_4__impl_pma__QEAA_AV__unique_ptr_VBlendShapesOutputInstance_rl4__V__function___A6AXPEAVBlendShapesOutputInstance_rl4___Z_std___std__AEBGAEAPEAVMemoryResource_4__Z_XPEAVBlendShapesOutputInstance_rl4___std__6B_
  ;
  local_40 = &local_78;
  *(undefined8 *)&(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = 0;
  local_70 = pMVar3;
  p_Var2 = _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,rl4::BlendShapesImplOutputInstance,rl4::BlendShapesOutputInstance>::create<unsigned_short_const_&,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::BlendShapesOutputInstance_*>
           ::_Move(&local_78,__return_storage_ptr__);
  *(_Func_base<void,rl4::BlendShapesOutputInstance_*> **)
   &(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = p_Var2;
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
  }
  (__return_storage_ptr__->_Mypair)._Myval2 = (BlendShapesOutputInstance *)this_00;
  return __return_storage_ptr__;
}

// _Get @ 14c467050

void * __thiscall
std::
_Func_impl_no_alloc<`rltests::BlendShapesFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Move @ 14c467060

_Func_base<std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
* __thiscall
std::
_Func_impl_no_alloc<`rltests::BlendShapesFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`rltests::BlendShapesFactory::getInstanceFactory'::`2'::<lambda_1>,std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
        ::_vftable_;
  *(undefined2 *)((longlong)param_1 + 8) = *(undefined2 *)((longlong)this + 8);
  return param_1;
}

// _Target_type @ 14c467080

type_info * __thiscall
std::
_Func_impl_no_alloc<`rltests::BlendShapesFactory::getInstanceFactory'::__l2::<lambda_1>,std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_static_class_std::function<class_std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance*___ptr64)>_>___cdecl(pma::MemoryResource*___ptr64)>___cdecl_rltests::BlendShapesFactory::getInstanceFactory(unsigned_short)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// createTestBlendShapes @ 14c467090

BlendShapesImpl * __cdecl
rltests::BlendShapesFactory::createTestBlendShapes
          (BlendShapesImpl *__return_storage_ptr__,MemoryResource *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_a8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_88;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_68;
  undefined1 local_48 [64];
  
  local_48._0_8_ =
       &std::
        _Func_impl_no_alloc<`rltests::BlendShapesFactory::getInstanceFactory'::`2'::<lambda_1>,std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
        ::_vftable_;
  local_48._8_2_ = 10;
  local_48._56_8_ = local_48;
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  if (param_1 == (MemoryResource *)0x0) {
    param_1 = (MemoryResource *)
              &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  }
  local_68._Mypair._Myval1 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)param_1;
  local_68._Mypair._Myval2._Myfirst =
       (ushort *)(**(code **)((longlong)*param_1 + 8))(param_1,0x14,8);
  puVar2 = blendShapeOutputIndices;
  local_68._Mypair._Myval2._Myend = local_68._Mypair._Myval2._Myfirst + 10;
  local_68._Mypair._Myval2._Mylast = local_68._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *local_68._Mypair._Myval2._Mylast = uVar1;
    local_68._Mypair._Myval2._Mylast = local_68._Mypair._Myval2._Mylast + 1;
  } while (puVar2 != (ushort *)&DAT_152881964);
  if (*piVar3 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_88._Mypair._Myval1 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)param_1;
  local_88._Mypair._Myval2._Myfirst =
       (ushort *)(**(code **)((longlong)*param_1 + 8))(param_1,0x14,8);
  puVar2 = blendShapeInputIndices;
  local_88._Mypair._Myval2._Myend = local_88._Mypair._Myval2._Myfirst + 10;
  local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *local_88._Mypair._Myval2._Mylast = uVar1;
    local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Mylast + 1;
  } while (puVar2 != (ushort *)&DAT_15288194c);
  if (*piVar3 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_a8._Mypair._Myval1 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)param_1;
  local_a8._Mypair._Myval2._Myfirst = (ushort *)(**(code **)((longlong)*param_1 + 8))(param_1,8,8);
  puVar2 = LODs;
  local_a8._Mypair._Myval2._Myend = local_a8._Mypair._Myval2._Myfirst + 4;
  local_a8._Mypair._Myval2._Mylast = local_a8._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *local_a8._Mypair._Myval2._Mylast = uVar1;
    local_a8._Mypair._Myval2._Mylast = local_a8._Mypair._Myval2._Mylast + 1;
  } while (puVar2 != blendShapeInputIndices);
  rl4::BlendShapesImpl::BlendShapesImpl
            (__return_storage_ptr__,&local_a8,&local_88,&local_68,
             (function<std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)local_48);
  if (local_a8._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_a8._Mypair._Myval1 + 0x10))
              (local_a8._Mypair._Myval1,local_a8._Mypair._Myval2._Myfirst,
               ((longlong)local_a8._Mypair._Myval2._Myend -
                (longlong)local_a8._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_a8._Mypair._Myval2._Myend = (ushort *)0x0;
    local_a8._Mypair._Myval2._Myfirst = (ushort *)0x0;
    local_a8._Mypair._Myval2._Mylast = (ushort *)0x0;
  }
  if (local_88._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_88._Mypair._Myval1 + 0x10))
              (local_88._Mypair._Myval1,local_88._Mypair._Myval2._Myfirst,
               ((longlong)local_88._Mypair._Myval2._Myend -
                (longlong)local_88._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_88._Mypair._Myval2._Myend = (ushort *)0x0;
    local_88._Mypair._Myval2._Myfirst = (ushort *)0x0;
    local_88._Mypair._Myval2._Mylast = (ushort *)0x0;
  }
  if (local_68._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_68._Mypair._Myval1 + 0x10))
              (local_68._Mypair._Myval1,local_68._Mypair._Myval2._Myfirst,
               ((longlong)local_68._Mypair._Myval2._Myend -
                (longlong)local_68._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  return __return_storage_ptr__;
}

// getInstanceFactory @ 14c467390

function<std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
* __cdecl rltests::BlendShapesFactory::getInstanceFactory
                    (function<std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                     *__return_storage_ptr__,ushort param_1)

{
  *(ushort *)&__return_storage_ptr__->field_0x8 = param_1;
  *(undefined ***)__return_storage_ptr__ =
       &std::
        _Func_impl_no_alloc<`rltests::BlendShapesFactory::getInstanceFactory'::`2'::<lambda_1>,std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>,pma::MemoryResource_*>
        ::_vftable_;
  *(function<std::unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
    **)&__return_storage_ptr__->field_0x38 = __return_storage_ptr__;
  return __return_storage_ptr__;
}

