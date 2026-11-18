// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 22

// test_info_'' @ 141323740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'PolyAllocIntegrationTest_InstantiateTypes_Test::test_info___(void)

{
  undefined8 uVar1;
  TestFactoryBase *pTVar2;
  _func___cdecl_void *p_Var3;
  _func___cdecl_void *p_Var4;
  void *pvVar5;
  char *pcVar6;
  undefined1 auStackY_a8 [32];
  _Bxty local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pTVar2 = ::operator_new(8);
  if (pTVar2 == (TestFactoryBase *)0x0) {
    pTVar2 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar2 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_VPolyAllocIntegrationTest_InstantiateTypes_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestPolyAllocIntegration.cpp"
                      ,0xc);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestPolyAllocIntegration.cpp"
                      ,0xc);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x80;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x8f;
  *(undefined8 *)(pcVar6 + 0x10) = ::s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar6 + 0x18) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar6 + 0x20) = ::s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar6 + 0x28) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar6 + 0x30) = ::s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar6 + 0x38) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar6 + 0x40) = ::s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar6 + 0x48) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar6 + 0x50) = ::s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar6 + 0x58) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar6 + 0x68) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(pcVar6 + 0x78) = uVar1;
  pcVar6[0x80] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000080;
  uStack_40 = _UNK_152880858;
  uVar1 = *(undefined8 *)(pcVar6 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar6;
  *(undefined8 *)(local_58._Ptr + 8) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar6 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar6 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar6 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar6 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar6 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar6 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x78);
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined8 *)(local_58._Ptr + 0x78) = uVar1;
  *(local_58._Ptr + 0x80) = pcVar6[0x80];
  local_38 = 0xc;
  PolyAllocIntegrationTest_InstantiateTypes_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("PolyAllocIntegrationTest","InstantiateTypes",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// TestBody @ 14c459110

void __thiscall
PolyAllocIntegrationTest_InstantiateTypes_Test::TestBody
          (PolyAllocIntegrationTest_InstantiateTypes_Test *this)

{
  char cVar1;
  longlong lVar2;
  _Tree_node<std::pair<int_const_,int>,void_*> *p_Var3;
  _Tree_node<int,void_*> *p_Var4;
  _Tree_node<std::pair<int_const_,int>,void_*> *p_Var5;
  _Tree_node<int,void_*> *p_Var6;
  _List_node<int,void_*> *p_Var7;
  longlong *plVar8;
  _List_node<std::pair<int_const_,int>,void_*> *p_Var9;
  longlong *plVar10;
  PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>
  local_108;
  _Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_> local_100;
  PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource> local_f0;
  _Tree_val<std::_Tree_simple_types<int>_> local_e8;
  undefined4 local_d8;
  list<std::pair<int_const_,int>,pma::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>_>
  local_d0;
  undefined **local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  list<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_> local_80;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  PolyAllocator<int,8,pma::DefaultMemoryResource> local_38 [4];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::
           PolyAllocator<char,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pma::PolyAllocator<int,8,pma::DefaultMemoryResource>::
  PolyAllocator<int,8,pma::DefaultMemoryResource>(local_38);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>::
           PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_f0 = (PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>)
             &`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_e8._Mysize = 0;
  local_e8._Myhead =
       (_Tree_node<int,void_*> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x20,8);
  (local_e8._Myhead)->_Left = local_e8._Myhead;
  (local_e8._Myhead)->_Parent = local_e8._Myhead;
  (local_e8._Myhead)->_Right = local_e8._Myhead;
  (local_e8._Myhead)->_Color = '\x01';
  (local_e8._Myhead)->_Isnil = '\x01';
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_108 = (PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  local_100._Mysize = 0;
  local_100._Myhead =
       (_Tree_node<std::pair<int_const_,int>,void_*> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x28,8);
  (local_100._Myhead)->_Left = local_100._Myhead;
  (local_100._Myhead)->_Parent = local_100._Myhead;
  (local_100._Myhead)->_Right = local_100._Myhead;
  (local_100._Myhead)->_Color = '\x01';
  (local_100._Myhead)->_Isnil = '\x01';
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_80._Mypair._Myval1 =
       (PolyAllocator<std::_List_node<int,void_*>,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_80._Mypair._Myval2._Mysize = 0;
  p_Var7 = (_List_node<int,void_*> *)
           (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr + 8))
                     (&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr,0x18,8);
  local_68 = &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_48 = 7;
  p_Var7->_Next = p_Var7;
  p_Var7->_Prev = p_Var7;
  local_40 = 8;
  local_88 = 0x3f800000;
  local_80._Mypair._Myval2._Myhead = p_Var7;
  plVar8 = (longlong *)
           (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr + 8))
                     (&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr,0x80,8);
  local_58 = plVar8 + 0x10;
  for (plVar10 = plVar8; plVar10 != local_58; plVar10 = plVar10 + 1) {
    *plVar10 = (longlong)p_Var7;
  }
  local_60 = plVar8;
  plStack_50 = local_58;
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::
           PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_d0._Mypair._Myval1 =
       (PolyAllocator<std::_List_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_d0._Mypair._Myval2._Mysize = 0;
  p_Var9 = (_List_node<std::pair<int_const_,int>,void_*> *)
           (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr + 8))
                     (&`public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr,0x18,8);
  local_b8 = &`public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_98 = 7;
  p_Var9->_Next = p_Var9;
  p_Var9->_Prev = p_Var9;
  local_90 = 8;
  local_d8 = 0x3f800000;
  local_d0._Mypair._Myval2._Myhead = p_Var9;
  local_b0 = (longlong *)
             (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x80,8);
  local_a8 = local_b0 + 0x10;
  for (plVar10 = local_b0; plVar10 != local_a8; plVar10 = plVar10 + 1) {
    *plVar10 = (longlong)p_Var9;
  }
  plStack_a0 = local_a8;
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr + 0x10))
              (&`public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr,local_b0,0x80,8);
    local_b0 = (longlong *)0x0;
    plStack_a0 = (longlong *)0x0;
  }
  local_a8 = plStack_a0;
  std::
  list<std::pair<int_const_,int>,pma::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>_>
  ::
  ~list<std::pair<int_const_,int>,pma::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>_>
            (&local_d0);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr + 0x10))
              (&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr,plVar8,0x80,8);
    local_60 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
  }
  std::list<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::
  ~list<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>(&local_80);
  cVar1 = (local_100._Myhead)->_Parent->_Isnil;
  p_Var5 = (local_100._Myhead)->_Parent;
  while (cVar1 == '\0') {
    std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>::
    _Erase_tree<pma::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>_>
              (&local_100,&local_108,p_Var5->_Right);
    p_Var3 = p_Var5->_Left;
    (**(code **)(*(undefined **)local_108 + 0x10))(local_108,p_Var5,0x28,8);
    p_Var5 = p_Var3;
    cVar1 = p_Var3->_Isnil;
  }
  (**(code **)(*(undefined **)local_108 + 0x10))(local_108,local_100._Myhead,0x28,8);
  cVar1 = (local_e8._Myhead)->_Parent->_Isnil;
  p_Var6 = (local_e8._Myhead)->_Parent;
  while (cVar1 == '\0') {
    std::_Tree_val<std::_Tree_simple_types<int>_>::
    _Erase_tree<pma::PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>_>
              (&local_e8,&local_f0,p_Var6->_Right);
    p_Var4 = p_Var6->_Left;
    (**(code **)(*(undefined **)local_f0 + 0x10))(local_f0,p_Var6,0x20,8);
    p_Var6 = p_Var4;
    cVar1 = p_Var4->_Isnil;
  }
  (**(code **)(*(undefined **)local_f0 + 0x10))(local_f0,local_e8._Myhead,0x20,8);
  return;
}

// `scalar_deleting_destructor' @ 14c459610

void * __thiscall
PolyAllocIntegrationTest_InstantiateTypes_Test::_scalar_deleting_destructor_
          (PolyAllocIntegrationTest_InstantiateTypes_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c459650

Test * __thiscall
testing::internal::TestFactoryImpl<PolyAllocIntegrationTest_InstantiateTypes_Test>::CreateTest
          (TestFactoryImpl<PolyAllocIntegrationTest_InstantiateTypes_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7PolyAllocIntegrationTest_InstantiateTypes_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c459690

void * __thiscall
testing::internal::TestFactoryImpl<PolyAllocIntegrationTest_InstantiateTypes_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<PolyAllocIntegrationTest_InstantiateTypes_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<PolyAllocIntegrationTest_InstantiateTypes_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// _Erase_tree<pma::PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>_> @ 14c4596d0

void __thiscall
std::_Tree_val<std::_Tree_simple_types<int>_>::
_Erase_tree<pma::PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>_>
          (_Tree_val<std::_Tree_simple_types<int>_> *this,
          PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource> *param_1,
          _Tree_node<int,void_*> *param_2)

{
  char cVar1;
  _Tree_node<int,void_*> *p_Var2;
  
  cVar1 = param_2->_Isnil;
  while (cVar1 == '\0') {
    _Erase_tree<pma::PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>_>
              (this,param_1,param_2->_Right);
    p_Var2 = param_2->_Left;
    (**(code **)(*(longlong *)*param_1 + 0x10))(*param_1,param_2,0x20,8);
    param_2 = p_Var2;
    cVar1 = p_Var2->_Isnil;
  }
  return;
}

// _Erase_tree<pma::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>_> @ 14c459740

void __thiscall
std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>::
_Erase_tree<pma::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>_>
          (_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_> *this,
          PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>
          *param_1,_Tree_node<std::pair<int_const_,int>,void_*> *param_2)

{
  char cVar1;
  _Tree_node<std::pair<int_const_,int>,void_*> *p_Var2;
  
  cVar1 = param_2->_Isnil;
  while (cVar1 == '\0') {
    _Erase_tree<pma::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>_>
              (this,param_1,param_2->_Right);
    p_Var2 = param_2->_Left;
    (**(code **)(*(longlong *)*param_1 + 0x10))(*param_1,param_2,0x28,8);
    param_2 = p_Var2;
    cVar1 = p_Var2->_Isnil;
  }
  return;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>_>_> @ 14c4597b0

PolyAllocator<int,8,pma::DefaultMemoryResource> * __cdecl
std::
_Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>_>_>
          (scoped_allocator_adaptor<pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>_>
           *param_1)

{
  return (PolyAllocator<int,8,pma::DefaultMemoryResource> *)param_1;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_List_node<int,void_*>,8,pma::DefaultMemoryResource>_>_> @ 14c4597c0

PolyAllocator<std::_List_node<int,void_*>,8,pma::DefaultMemoryResource> * __cdecl
std::
_Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_List_node<int,void_*>,8,pma::DefaultMemoryResource>_>_>
          (scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_List_node<int,void_*>,8,pma::DefaultMemoryResource>_>
           *param_1)

{
  return (PolyAllocator<std::_List_node<int,void_*>,8,pma::DefaultMemoryResource> *)param_1;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_List_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>_>_> @ 14c4597d0

PolyAllocator<std::_List_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource> *
__cdecl std::
        _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_List_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>_>_>
                  (scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_List_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>_>
                   *param_1)

{
  return (PolyAllocator<std::_List_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>
          *)param_1;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>_>_> @ 14c4597e0

PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource> * __cdecl
std::
_Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>_>_>
          (scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>_>
           *param_1)

{
  return (PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource> *)param_1;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>_>_> @ 14c4597f0

PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource> *
__cdecl std::
        _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>_>_>
                  (scoped_allocator_adaptor<pma::impl::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>_>
                   *param_1)

{
  return (PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>
          *)param_1;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c459800

PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
* __cdecl std::
          _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
                    (scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                     *param_1)

{
  return (PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
          *)param_1;
}

// uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,int>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,int>_>_>_>_> @ 14c459810

void __cdecl
std::
uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,int>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,int>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,int>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,int>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,int>_>_>_>
                   *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// PolyAllocator<int,8,pma::DefaultMemoryResource> @ 14c459840

PolyAllocator<int,8,pma::DefaultMemoryResource> * __thiscall
pma::PolyAllocator<int,8,pma::DefaultMemoryResource>::
PolyAllocator<int,8,pma::DefaultMemoryResource>
          (PolyAllocator<int,8,pma::DefaultMemoryResource> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
             PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *this = (PolyAllocator<int,8,pma::DefaultMemoryResource>)
          &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
           ::__l2::dmr;
  return this;
}

// ~list<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_> @ 14c4598c0

void __thiscall
std::list<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::
~list<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>
          (list<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_> *this)

{
  _List_node<int,void_*> *p_Var1;
  PolyAllocator<std::_List_node<int,void_*>,8,pma::DefaultMemoryResource> PVar2;
  _List_node<int,void_*> *p_Var3;
  
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev->_Next = (_List_node<int,void_*> *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<int,void_*> *)0x0) {
    PVar2 = (this->_Mypair)._Myval1;
    p_Var3 = p_Var1->_Next;
    (**(code **)(*(longlong *)PVar2 + 0x10))(PVar2,p_Var1,0x18,8);
    p_Var1 = p_Var3;
  }
  PVar2 = (this->_Mypair)._Myval1;
                    /* WARNING: Could not recover jumptable at 0x00014c459930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)PVar2 + 0x10))(PVar2,(this->_Mypair)._Myval2._Myhead,0x18,8);
  return;
}

// ~list<std::pair<int_const_,int>,pma::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>_> @ 14c459940

void __thiscall
std::
list<std::pair<int_const_,int>,pma::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>_>
::
~list<std::pair<int_const_,int>,pma::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>_>
          (list<std::pair<int_const_,int>,pma::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>_>
           *this)

{
  _List_node<std::pair<int_const_,int>,void_*> *p_Var1;
  PolyAllocator<std::_List_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>
  PVar2;
  _List_node<std::pair<int_const_,int>,void_*> *p_Var3;
  
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev->_Next = (_List_node<std::pair<int_const_,int>,void_*> *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<std::pair<int_const_,int>,void_*> *)0x0) {
    PVar2 = (this->_Mypair)._Myval1;
    p_Var3 = p_Var1->_Next;
    (**(code **)(*(longlong *)PVar2 + 0x10))(PVar2,p_Var1,0x18,8);
    p_Var1 = p_Var3;
  }
  PVar2 = (this->_Mypair)._Myval1;
                    /* WARNING: Could not recover jumptable at 0x00014c4599b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)PVar2 + 0x10))(PVar2,(this->_Mypair)._Myval2._Myhead,0x18,8);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 15044dee0

void __cdecl
`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 15044df00

void __cdecl
`pma::impl::PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>::
PolyAllocator<std::_Tree_node<int,void_*>,8,pma::DefaultMemoryResource>'::__l2::
_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<int,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 15044df20

void __cdecl
`pma::impl::
PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>::
PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void_*>,8,pma::DefaultMemoryResource>'::__l2
::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>::PolyAllocator<std::_Tree_node<std::pair<int_const_,int>,void*___ptr64>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 15044df40

void __cdecl
`pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::
PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>'::__l2::
_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>::PolyAllocator<std::pair<int_const_,int>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 15044df60

void __cdecl
`pma::impl::
PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

