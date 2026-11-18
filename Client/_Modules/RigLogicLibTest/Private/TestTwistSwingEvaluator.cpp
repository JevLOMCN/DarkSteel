// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 124

// `dynamic_initializer_for_'gtest_TwistSwingEvaluatorTest_EvaluatePerLOD_registered_'' @ 141365290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
_dynamic_initializer_for__gtest_TwistSwingEvaluatorTest_EvaluatePerLOD_registered___(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
  local_78;
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_70;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_70._Mypair._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_70._Mypair._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_70._Mypair._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  testing::internal::
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
            (local_78,&local_70,0);
  local_28 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x90;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(pcVar2 + 0x78) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar2 + 0x80) = s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar2 + 0x88) = uVar3;
  pcVar2[0x90] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar2;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000090;
  uStack_40 = _UNK_15288b318;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_58._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x78);
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar2 + 0x70);
  *(undefined8 *)(local_58._Ptr + 0x78) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar2 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar3;
  *(local_58._Ptr + 0x90) = pcVar2[0x90];
  local_38 = 0x84;
  gtest_TwistSwingEvaluatorTest_EvaluatePerLOD_registered_ =
       testing::internal::
       TypeParameterizedTest<`anonymous_namespace'::TwistSwingEvaluatorTest,testing::internal::TemplateSel<TwistSwingEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
       ::Register("",(CodeLocation *)&local_58,"TwistSwingEvaluatorTest","EvaluatePerLOD",0,
                  &local_70);
  if (0xf < uStack_40) {
    uVar4 = uStack_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = uStack_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) goto LAB_1413654ec;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_58._Ptr = local_58._Ptr & 0xffffffffffffff00;
  local_48 = ___xmm_000000000000000f0000000000000000;
  uStack_40 = _UNK_15076add8;
  operator_delete(pcVar2,0xa0);
  pbVar1 = local_70._Mypair._Myval2._Mylast;
  pbVar5 = local_70._Mypair._Myval2._Myfirst;
  if (local_70._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != pbVar1; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_70._Mypair._Myval2._Myend - (longlong)local_70._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_70._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_70._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413654ec:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// _Copy @ 14c576b00

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c576b20

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c576b40

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Do_call(void *this,JointsEvaluator **param_1)

{
  JointsEvaluator *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c576b7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,0x68,8);
  return;
}

// _Target_type @ 14c576b90

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource*___ptr64>(std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>&&___ptr64,std::nullptr_t&&___ptr64,pma::AlignedMemoryResource*___ptr64&&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c576ba0

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c576bb0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// createInstance @ 14c576bd0

unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_> *
__thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
::createInstance(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
                 *this,unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
                       *__return_storage_ptr__,MemoryResource *param_1)

{
  longlong *plVar1;
  unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
  *extraout_RAX;
  MemoryResource *local_res8 [4];
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  local_res8[0] = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,__return_storage_ptr__,local_res8);
    return __return_storage_ptr__;
  }
  std::_Xbad_function_call();
  return extraout_RAX;
}

// getJointDeltaValueCountForLOD @ 14c576c10

uint __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
::getJointDeltaValueCountForLOD
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
           *this,ushort param_1)

{
  return 0;
}

// calculate @ 14c576c20

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
::calculate(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
            *this,ControlsInputInstance *param_1,JointsOutputInstance *param_2,ushort param_3)

{
  ushort *puVar1;
  TwistSwingSetup *pTVar2;
  float *pfVar3;
  float fVar4;
  TwistSwingSetup *pTVar5;
  ulonglong uVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  quat<float> local_140;
  quat<float> local_130;
  quat<float> local_120;
  quat<float> local_110;
  longlong local_100 [2];
  longlong local_f0 [23];
  
  (**(code **)((longlong)*param_1 + 0x20))(param_1,local_100);
  (**(code **)((longlong)*param_2 + 8))(param_2,local_f0);
  fVar4 = __real_3f800000;
  pTVar2 = (this->setups)._Mypair._Myval2._Mylast;
  uVar15 = __xmm_80000000800000008000000080000000;
  for (pTVar5 = (this->setups)._Mypair._Myval2._Myfirst; pTVar5 != pTVar2; pTVar5 = pTVar5 + 1) {
    fVar21 = 0.0;
    puVar7 = (pTVar5->swingInputIndices)._Mypair._Myval2._Myfirst;
    fVar20 = fVar4;
    fVar19 = fVar21;
    fVar22 = fVar21;
    __xmm_80000000800000008000000080000000 = uVar15;
    if (puVar7 != (pTVar5->swingInputIndices)._Mypair._Myval2._Mylast) {
      local_140.y = *(float *)(local_100[0] + (ulonglong)puVar7[1] * 4);
      local_140.z = *(float *)(local_100[0] + (ulonglong)puVar7[2] * 4);
      local_140.w = *(float *)(local_100[0] + (ulonglong)puVar7[3] * 4);
      local_140.x = *(float *)(local_100[0] + (ulonglong)*puVar7 * 4);
      (*`public:_virtual_void___cdecl_rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>::calculate(rl4::ControlsInputInstance_const*___ptr64,rl4::JointsOutputInstance*___ptr64,unsigned_short)const___ptr64'
        ::__l2::separateTwistComponent[(int)pTVar5->swingTwistAxis])(&local_130,&local_140);
      fVar19 = fVar4 / (local_130.w * local_130.w + local_130.z * local_130.z +
                       local_130.y * local_130.y + local_130.x * local_130.x);
      fVar20 = fVar19 * local_130.w;
      fVar21 = (float)((uint)(fVar19 * local_130.x) ^ uVar15);
      fVar22 = (float)((uint)(fVar19 * local_130.z) ^ uVar15);
      fVar19 = (float)((uint)(fVar19 * local_130.y) ^ uVar15);
      fVar18 = (fVar20 * local_140.x + local_140.w * fVar21 + local_140.y * fVar22) -
               local_140.z * fVar19;
      fVar16 = (fVar20 * local_140.y + local_140.w * fVar19 + local_140.z * fVar21) -
               local_140.x * fVar22;
      fVar14 = (fVar20 * local_140.z + local_140.w * fVar22 + local_140.x * fVar19) -
               local_140.y * fVar21;
      pfVar3 = (pTVar5->swingBlendWeights)._Mypair._Myval2._Myfirst;
      uVar6 = 0;
      fVar12 = ((fVar20 * local_140.w - local_140.x * fVar21) - local_140.y * fVar19) -
               local_140.z * fVar22;
      fVar11 = fVar4 / (fVar12 * fVar12 + fVar14 * fVar14 + fVar16 * fVar16 + fVar18 * fVar18);
      fVar12 = fVar11 * fVar12;
      uVar15 = __xmm_80000000800000008000000080000000;
      if ((longlong)(pTVar5->swingBlendWeights)._Mypair._Myval2._Mylast - (longlong)pfVar3 >> 2 != 0
         ) {
        puVar7 = (pTVar5->swingOutputIndices)._Mypair._Myval2._Myfirst;
        do {
          fVar10 = pfVar3[uVar6];
          fVar8 = fVar12;
          fVar13 = fVar4;
          if (fVar12 < 0.0) {
            fVar8 = (float)((uint)fVar12 ^ uVar15);
            fVar13 = __real_bf800000;
          }
          fVar17 = fVar4 - fVar10;
          if (fVar8 <= __real_3f7ffffe) {
            fVar8 = acosf(fVar8);
            fVar9 = sinf(fVar8);
            fVar17 = sinf(fVar8 * fVar17);
            fVar17 = fVar17 * (fVar4 / fVar9);
            fVar10 = sinf(fVar8 * fVar10);
            fVar10 = fVar10 * (fVar4 / fVar9);
            uVar15 = __xmm_80000000800000008000000080000000;
          }
          uVar6 = uVar6 + 1;
          fVar9 = fVar13 * fVar10 + fVar12 * fVar17;
          fVar13 = (float)((uint)(fVar11 * fVar18 * fVar17) ^ uVar15);
          fVar10 = (float)((uint)(fVar11 * fVar14 * fVar17) ^ uVar15);
          fVar8 = (float)((uint)(fVar11 * fVar16 * fVar17) ^ uVar15);
          *(float *)(local_f0[0] + (ulonglong)*puVar7 * 4) =
               (fVar21 * fVar9 + fVar20 * fVar13 + fVar19 * fVar10) - fVar22 * fVar8;
          *(float *)(local_f0[0] + (ulonglong)puVar7[1] * 4) =
               (fVar19 * fVar9 + fVar20 * fVar8 + fVar22 * fVar13) - fVar21 * fVar10;
          *(float *)(local_f0[0] + (ulonglong)puVar7[2] * 4) =
               (fVar22 * fVar9 + fVar20 * fVar10 + fVar21 * fVar8) - fVar19 * fVar13;
          puVar1 = puVar7 + 3;
          puVar7 = puVar7 + 4;
          *(float *)(local_f0[0] + (ulonglong)*puVar1 * 4) =
               ((fVar20 * fVar9 - fVar21 * fVar13) - fVar19 * fVar8) - fVar22 * fVar10;
        } while (uVar6 < (ulonglong)
                         ((longlong)(pTVar5->swingBlendWeights)._Mypair._Myval2._Mylast -
                          (longlong)(pTVar5->swingBlendWeights)._Mypair._Myval2._Myfirst >> 2));
      }
    }
    puVar7 = (pTVar5->twistInputIndices)._Mypair._Myval2._Myfirst;
    if ((puVar7 != (pTVar5->twistInputIndices)._Mypair._Myval2._Mylast) &&
       ((pTVar5->swingInputIndices)._Mypair._Myval2._Myfirst ==
        (pTVar5->swingInputIndices)._Mypair._Myval2._Mylast)) {
      local_120.y = *(float *)(local_100[0] + (ulonglong)puVar7[1] * 4);
      local_120.z = *(float *)(local_100[0] + (ulonglong)puVar7[2] * 4);
      local_120.w = *(float *)(local_100[0] + (ulonglong)puVar7[3] * 4);
      local_120.x = *(float *)(local_100[0] + (ulonglong)*puVar7 * 4);
      (*`public:_virtual_void___cdecl_rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>::calculate(rl4::ControlsInputInstance_const*___ptr64,rl4::JointsOutputInstance*___ptr64,unsigned_short)const___ptr64'
        ::__l2::separateTwistComponent[(int)pTVar5->twistTwistAxis])(&local_110,&local_120);
      fVar20 = local_110.w;
      fVar21 = local_110.x;
      fVar19 = local_110.y;
      fVar22 = local_110.z;
    }
    pfVar3 = (pTVar5->twistBlendWeights)._Mypair._Myval2._Myfirst;
    uVar6 = 0;
    if ((longlong)(pTVar5->twistBlendWeights)._Mypair._Myval2._Mylast - (longlong)pfVar3 >> 2 != 0)
    {
      puVar7 = (pTVar5->twistOutputIndices)._Mypair._Myval2._Myfirst;
      do {
        fVar11 = pfVar3[uVar6];
        fVar12 = fVar20;
        fVar14 = fVar4;
        if (fVar20 < 0.0) {
          fVar12 = (float)((uint)fVar20 ^ uVar15);
          fVar14 = __real_bf800000;
        }
        fVar16 = fVar4 - fVar11;
        if (fVar12 <= __real_3f7ffffe) {
          fVar12 = acosf(fVar12);
          fVar18 = sinf(fVar12);
          fVar16 = sinf(fVar16 * fVar12);
          fVar16 = fVar16 * (fVar4 / fVar18);
          fVar11 = sinf(fVar12 * fVar11);
          fVar11 = fVar11 * (fVar4 / fVar18);
        }
        uVar15 = __xmm_80000000800000008000000080000000;
        uVar6 = uVar6 + 1;
        *(float *)(local_f0[0] + (ulonglong)*puVar7 * 4) = fVar21 * fVar16;
        *(float *)(local_f0[0] + (ulonglong)puVar7[1] * 4) = fVar19 * fVar16;
        *(float *)(local_f0[0] + (ulonglong)puVar7[2] * 4) = fVar22 * fVar16;
        puVar1 = puVar7 + 3;
        puVar7 = puVar7 + 4;
        *(float *)(local_f0[0] + (ulonglong)*puVar1 * 4) = fVar14 * fVar11 + fVar20 * fVar16;
      } while (uVar6 < (ulonglong)
                       ((longlong)(pTVar5->twistBlendWeights)._Mypair._Myval2._Mylast -
                        (longlong)(pTVar5->twistBlendWeights)._Mypair._Myval2._Myfirst >> 2));
    }
    uVar15 = __xmm_80000000800000008000000080000000;
  }
  __xmm_80000000800000008000000080000000 = uVar15;
  return;
}

// calculate @ 14c577350

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
::calculate(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
            *this,ControlsInputInstance *param_1,JointsOutputInstance *param_2,ushort param_3,
           ushort param_4)

{
  return;
}

// `vector_deleting_destructor'`vtordisp{4294967292,0}' @ 14c57735c

/* [thunk]:public: virtual void * __ptr64 __cdecl rltests::twsw::TwistSwingReader::`vector deleting
   destructor'`vtordisp{4294967292,0}' (unsigned int) __ptr64 */

void * __thiscall
rltests::twsw::TwistSwingReader::_vector_deleting_destructor__vtordisp_4294967292_0__
          (TwistSwingReader *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TwistSwingReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      param_1);
  return pvVar1;
}

// load @ 14c577370

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
::load(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
       *this,BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *param_1)

{
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  *this_00;
  undefined1 *puVar1;
  uint local_res8 [2];
  
  this_00 = *(ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
              **)param_1;
  local_res8[0] = 0;
  puVar1 = &this_00->stream->field_0x10;
  (**(code **)(*(longlong *)puVar1 + 8))(puVar1,local_res8,4);
  terse::
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  ::
  processElements<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>_>
            (this_00,&this->setups,
             (ulonglong)
             (local_res8[0] >> 0x18 | (local_res8[0] & 0xff0000) >> 8 |
              (local_res8[0] & 0xff00) << 8 | local_res8[0] << 0x18));
  return;
}

// save @ 14c5773d0

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
::save(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
       *this,BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *param_1)

{
  terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
  operator()<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)param_1,&this->setups);
  return;
}

// `scalar_deleting_destructor' @ 14c5773f0

void * __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
::_scalar_deleting_destructor_
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
           *this,uint param_1)

{
  longlong *plVar1;
  undefined4 in_register_00000014;
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),
                               (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                                *)plVar1 != &this->instanceFactory));
    *(undefined8 *)&(this->instanceFactory).field_0x38 = 0;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&this->setups);
  JointsEvaluator::~JointsEvaluator((JointsEvaluator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// SetUp @ 14c577470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::SetUp(void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  _Func_class<void,rl4::JointsEvaluator_*> *this_00;
  float *pfVar2;
  ushort *puVar3;
  longlong *plVar4;
  _Func_class<void,rl4::JointsEvaluator_*> *p_Var5;
  longlong lVar6;
  TwistSwingSetup *pTVar7;
  TwistSwingSetup *pTVar8;
  TwistSwingSetup *pTVar9;
  undefined8 *puVar10;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar11;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar16;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined1 auStack_228 [32];
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PStack_208;
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  vStack_200;
  undefined1 auStack_1e0 [56];
  longlong *plStack_1a8;
  TwistSwingSetup TStack_1a0;
  _Func_class<void,rl4::JointsEvaluator_*> _Stack_c8;
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  *(undefined8 *)((longlong)this + 0xd8) = 1;
  *(undefined1 *)((longlong)this + 0xe0) = 3;
  uVar15 = (ulonglong)rltests::twsw::optimized::setupCount;
  pTVar9 = rl4::TwistSwingSetup::TwistSwingSetup(&TStack_1a0,(MemoryResource *)PVar1);
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  PStack_208 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
               &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    PStack_208 = PVar1;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_><pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>,0>
            (&vStack_200,uVar15,pTVar9,&PStack_208);
  rl4::TwistSwingSetup::~TwistSwingSetup(&TStack_1a0);
  uVar13 = 0;
  lVar6 = (longlong)vStack_200._Mypair._Myval2._Mylast -
          (longlong)vStack_200._Mypair._Myval2._Myfirst >> 0x3f;
  uVar15 = uVar13;
  uVar19 = uVar13;
  if (((longlong)vStack_200._Mypair._Myval2._Mylast - (longlong)vStack_200._Mypair._Myval2._Myfirst)
      / 0xd0 + lVar6 != lVar6) {
    do {
      pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
      *(TwistAxis *)((longlong)&(vStack_200._Mypair._Myval2._Myfirst)->twistTwistAxis + uVar19) =
           rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((vStack_200._Mypair._Myval2._Myfirst)->twistBlendWeights)._Mypair._Myval1.
                  field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      *(TwistAxis *)((longlong)&pTVar9->swingTwistAxis + uVar19) =
           rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&(pTVar9->swingBlendWeights)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      uVar15 = uVar15 + 1;
      uVar13 = uVar13 + 0x20;
      uVar19 = uVar19 + 0xd0;
    } while (uVar15 < (ulonglong)
                      (((longlong)vStack_200._Mypair._Myval2._Mylast -
                       (longlong)vStack_200._Mypair._Myval2._Myfirst) / 0xd0));
  }
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar14 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if ((undefined **)((longlong)this + 0x10) != (undefined **)0x0) {
    ppuVar14 = (undefined **)((longlong)this + 0x10);
  }
  puVar10 = (undefined8 *)(**(code **)(*ppuVar14 + 8))(ppuVar14,0x68,8);
  pTVar8 = vStack_200._Mypair._Myval2._Myend;
  pTVar7 = vStack_200._Mypair._Myval2._Mylast;
  pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
  plStack_1a8 = (longlong *)0x0;
  *puVar10 = &
             ___7__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  vStack_200._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  vStack_200._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  vStack_200._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)(puVar10 + 1) =
       vStack_200._Mypair._Myval1;
  puVar10[2] = pTVar9;
  puVar10[3] = pTVar7;
  puVar10[4] = pTVar8;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            ((function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)(puVar10 + 5),
             (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)auStack_1e0);
  if (plStack_1a8 != (longlong *)0x0) {
    (**(code **)(*plStack_1a8 + 0x20))(plStack_1a8,plStack_1a8 != (longlong *)auStack_1e0);
  }
  ppuStack_78 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  pppuStack_40 = &ppuStack_78;
  _Stack_c8._Mystorage._Ptrs[7] = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  ppuStack_70 = ppuVar14;
  _Stack_c8._Mystorage._Ptrs[7] =
       std::
       _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
       ::_Move(&ppuStack_78,&_Stack_c8);
  if (pppuStack_40 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_40)[4])(pppuStack_40,pppuStack_40 != &ppuStack_78);
  }
  this_00 = (_Func_class<void,rl4::JointsEvaluator_*> *)((longlong)this + 0x90);
  PVar1 = *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)
           ((longlong)this + 0xd0);
  PStack_88 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0;
  *(undefined8 **)((longlong)this + 0xd0) = puVar10;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    plVar4 = *(longlong **)((longlong)this + 200);
    PStack_208 = PVar1;
    if (plVar4 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,&PStack_208);
  }
  if (this_00 != &_Stack_c8) {
    p_Var5 = *(_Func_class<void,rl4::JointsEvaluator_*> **)((longlong)this + 200);
    if (p_Var5 != (_Func_class<void,rl4::JointsEvaluator_*> *)0x0) {
      (*(code *)(p_Var5->_Mystorage)._Ptrs[0][4])
                (p_Var5,CONCAT71((int7)((ulonglong)&_Stack_c8 >> 8),p_Var5 != this_00));
      *(undefined8 *)((longlong)this + 200) = 0;
    }
    std::_Func_class<void,rl4::JointsEvaluator_*>::_Reset_move(this_00,&_Stack_c8);
  }
  if (PStack_88 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    PStack_208 = PStack_88;
    if (_Stack_c8._Mystorage._Ptrs[7] == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*_Stack_c8._Mystorage._Ptrs[7] + 0x10))
              (_Stack_c8._Mystorage._Ptrs[7],&PStack_208);
  }
  if (_Stack_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*_Stack_c8._Mystorage._Ptrs[7] + 0x20))
              (_Stack_c8._Mystorage._Ptrs[7],
               _Stack_c8._Mystorage._Ptrs[7] !=
               (_Func_base<void,rl4::JointsEvaluator_*> *)&_Stack_c8);
  }
  pTVar7 = vStack_200._Mypair._Myval2._Mylast;
  pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
  if (vStack_200._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; pTVar9 != pTVar7; pTVar9 = pTVar9 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(pTVar9);
    }
    (**(code **)(*(longlong *)vStack_200._Mypair._Myval1 + 0x10))
              (vStack_200._Mypair._Myval1,vStack_200._Mypair._Myval2._Myfirst,
               (((longlong)vStack_200._Mypair._Myval2._Myend -
                (longlong)vStack_200._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c577480

void * __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// TestBody @ 14c5774c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c577661) */
/* WARNING: Removing unreachable block (ram,0x00014c577668) */
/* WARNING: Removing unreachable block (ram,0x00014c57766c) */
/* WARNING: Removing unreachable block (ram,0x00014c577671) */

void __thiscall
TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::TestBody(TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this)

{
  undefined1 *puVar1;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  float *pfVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auStackY_1d8 [32];
  AssertHelper local_198;
  longlong *local_190;
  AssertionResult local_188;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_178;
  ArrayView<float> local_170;
  void *local_160 [3];
  undefined1 local_148 [96];
  longlong *local_e8;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  puVar1 = &this->field_0x10;
  pvVar2 = rltests::twsw::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
           [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
  rl4::CPUJointsOutputInstance::CPUJointsOutputInstance
            ((CPUJointsOutputInstance *)local_148,
             (ushort)((longlong)
                      (ulonglong)
                      (uint)(*(int *)&(pvVar2->_Mypair)._Myval2._Mylast -
                            *(int *)&(pvVar2->_Mypair)._Myval2._Myfirst) >> 2),Vector,
             this->field_0xe0,Vector,(MemoryResource *)puVar1);
  rl4::CPUJointsOutputInstance::getOutputBuffer((CPUJointsOutputInstance *)local_148,&local_170);
  uVar10 = 0;
  ControlsFactory::getInstanceFactory
            ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)local_88,0,
             (ushort)((longlong)rltests::twsw::input::values._Mypair._Myval2._Mylast -
                      (longlong)rltests::twsw::input::values._Mypair._Myval2._Myfirst >> 2),0,0,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_188.success_ = false;
  local_188._1_7_ = 0;
  local_188.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_198.data_ = (AssertHelperData *)puVar1;
  if (local_50 == (longlong *)0x0) {
    std::_Xbad_function_call();
    return;
  }
  (**(code **)(*local_50 + 0x10))(local_50,local_d8,&local_188,&local_198);
  (**(code **)(*local_98 + 0x28))(local_98,local_160);
  memmove(local_160[0],rltests::twsw::input::values._Mypair._Myval2._Myfirst,
          (longlong)rltests::twsw::input::values._Mypair._Myval2._Mylast -
          (longlong)rltests::twsw::input::values._Mypair._Myval2._Myfirst);
  dVar3 = __real_3f60624de0000000;
  if (rltests::twsw::unoptimized::lodCount != 0) {
    do {
      uVar9 = 0;
      memset(local_170.ptr,0,local_170.sz * 4);
      (**(code **)(**(longlong **)&this->field_0xd0 + 0x20))
                (*(longlong **)&this->field_0xd0,local_98,local_148,uVar10);
      pvVar2 = rltests::twsw::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
               [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
      pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
      if ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2 != 0) {
        do {
          testing::internal::DoubleNearPredFormat
                    (&local_188,"outputBuffer[i]","expected[i]","threshold",
                     (double)local_170.ptr[uVar9],(double)pfVar6[uVar9],dVar3);
          uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
          if (local_188.success_ == false) {
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_178);
            if (local_188.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)local_188.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_188.message_._Mypair._Myval2 + 0x18)) {
                pcVar7 = *(char **)local_188.message_._Mypair._Myval2;
              }
            }
            this_00 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_198,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingEvaluator.cpp"
                                 ,0xa0,pcVar7);
            testing::internal::AssertHelper::operator=(this_00,pMVar5);
            testing::internal::AssertHelper::~AssertHelper(&local_198);
            if (local_178._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar8 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)local_178._Mypair._Myval2 + 4) +
                       (longlong)local_178._Mypair._Myval2);
              (**(code **)*puVar8)(puVar8,1);
            }
            uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
            if (local_188.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_188.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
            }
            if (local_98 != (longlong *)0x0) {
              local_190 = local_98;
              if (local_a0 == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
            }
            if (local_a0 == (longlong *)0x0) goto LAB_14c5777b5;
            (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
            goto LAB_14c5777b1;
          }
          if (local_188.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_188.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)
                         ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2))
        ;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < rltests::twsw::unoptimized::lodCount);
  }
  if (local_98 != (longlong *)0x0) {
    local_190 = local_98;
    if (local_a0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
LAB_14c5777b1:
    local_a0 = (longlong *)0x0;
  }
LAB_14c5777b5:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)local_88);
    local_50 = (longlong *)0x0;
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x20))(local_e8,local_e8 != (longlong *)(local_148 + 0x28));
    local_e8 = (longlong *)0x0;
  }
  if ((float *)local_148._16_8_ != (float *)0x0) {
    (**(code **)(*(longlong *)local_148._8_8_ + 0x10))
              (local_148._8_8_,local_148._16_8_,
               local_148._32_8_ - local_148._16_8_ & 0xfffffffffffffffc,0x40);
    local_148._32_8_ = (float *)0x0;
    local_148._16_8_ = (float *)0x0;
    local_148._24_8_ = (float *)0x0;
  }
  rl4::JointsOutputInstance::~JointsOutputInstance((JointsOutputInstance *)local_148);
  return;
}

// `scalar_deleting_destructor' @ 14c5779b0

void * __thiscall
TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_
          (TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this,uint param_1)

{
  ::`anonymous_namespace'::
  TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
  ::
  ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// CreateTest @ 14c5779f0

Test * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::CreateTest(TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::twsw::TwistSwingReader::TwistSwingReader
              ((TwistSwingReader *)&this_00[1].gtest_flag_saver_);
    this_00[0xc].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TwistSwingEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std____6B_
    ;
    this_00[0xd]._padding_ = 0;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c577a70

void * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// SetUp @ 14c577ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::SetUp(void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  _Func_class<void,rl4::JointsEvaluator_*> *this_00;
  float *pfVar2;
  ushort *puVar3;
  longlong *plVar4;
  _Func_class<void,rl4::JointsEvaluator_*> *p_Var5;
  longlong lVar6;
  TwistSwingSetup *pTVar7;
  TwistSwingSetup *pTVar8;
  TwistSwingSetup *pTVar9;
  undefined8 *puVar10;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar11;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar16;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined1 auStack_228 [32];
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PStack_208;
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  vStack_200;
  undefined1 auStack_1e0 [56];
  longlong *plStack_1a8;
  TwistSwingSetup TStack_1a0;
  _Func_class<void,rl4::JointsEvaluator_*> _Stack_c8;
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  *(undefined8 *)((longlong)this + 0xd8) = 1;
  *(undefined1 *)((longlong)this + 0xe0) = 3;
  uVar15 = (ulonglong)rltests::twsw::optimized::setupCount;
  pTVar9 = rl4::TwistSwingSetup::TwistSwingSetup(&TStack_1a0,(MemoryResource *)PVar1);
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  PStack_208 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
               &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    PStack_208 = PVar1;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_><pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>,0>
            (&vStack_200,uVar15,pTVar9,&PStack_208);
  rl4::TwistSwingSetup::~TwistSwingSetup(&TStack_1a0);
  uVar13 = 0;
  lVar6 = (longlong)vStack_200._Mypair._Myval2._Mylast -
          (longlong)vStack_200._Mypair._Myval2._Myfirst >> 0x3f;
  uVar15 = uVar13;
  uVar19 = uVar13;
  if (((longlong)vStack_200._Mypair._Myval2._Mylast - (longlong)vStack_200._Mypair._Myval2._Myfirst)
      / 0xd0 + lVar6 != lVar6) {
    do {
      pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
      *(TwistAxis *)((longlong)&(vStack_200._Mypair._Myval2._Myfirst)->twistTwistAxis + uVar19) =
           rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((vStack_200._Mypair._Myval2._Myfirst)->twistBlendWeights)._Mypair._Myval1.
                  field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      *(TwistAxis *)((longlong)&pTVar9->swingTwistAxis + uVar19) =
           rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&(pTVar9->swingBlendWeights)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      uVar15 = uVar15 + 1;
      uVar13 = uVar13 + 0x20;
      uVar19 = uVar19 + 0xd0;
    } while (uVar15 < (ulonglong)
                      (((longlong)vStack_200._Mypair._Myval2._Mylast -
                       (longlong)vStack_200._Mypair._Myval2._Myfirst) / 0xd0));
  }
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar14 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if ((undefined **)((longlong)this + 0x10) != (undefined **)0x0) {
    ppuVar14 = (undefined **)((longlong)this + 0x10);
  }
  puVar10 = (undefined8 *)(**(code **)(*ppuVar14 + 8))(ppuVar14,0x68,8);
  pTVar8 = vStack_200._Mypair._Myval2._Myend;
  pTVar7 = vStack_200._Mypair._Myval2._Mylast;
  pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
  plStack_1a8 = (longlong *)0x0;
  *puVar10 = &
             ___7__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  vStack_200._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  vStack_200._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  vStack_200._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)(puVar10 + 1) =
       vStack_200._Mypair._Myval1;
  puVar10[2] = pTVar9;
  puVar10[3] = pTVar7;
  puVar10[4] = pTVar8;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            ((function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)(puVar10 + 5),
             (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)auStack_1e0);
  if (plStack_1a8 != (longlong *)0x0) {
    (**(code **)(*plStack_1a8 + 0x20))(plStack_1a8,plStack_1a8 != (longlong *)auStack_1e0);
  }
  ppuStack_78 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  pppuStack_40 = &ppuStack_78;
  _Stack_c8._Mystorage._Ptrs[7] = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  ppuStack_70 = ppuVar14;
  _Stack_c8._Mystorage._Ptrs[7] =
       std::
       _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
       ::_Move(&ppuStack_78,&_Stack_c8);
  if (pppuStack_40 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_40)[4])(pppuStack_40,pppuStack_40 != &ppuStack_78);
  }
  this_00 = (_Func_class<void,rl4::JointsEvaluator_*> *)((longlong)this + 0x90);
  PVar1 = *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)
           ((longlong)this + 0xd0);
  PStack_88 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0;
  *(undefined8 **)((longlong)this + 0xd0) = puVar10;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    plVar4 = *(longlong **)((longlong)this + 200);
    PStack_208 = PVar1;
    if (plVar4 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,&PStack_208);
  }
  if (this_00 != &_Stack_c8) {
    p_Var5 = *(_Func_class<void,rl4::JointsEvaluator_*> **)((longlong)this + 200);
    if (p_Var5 != (_Func_class<void,rl4::JointsEvaluator_*> *)0x0) {
      (*(code *)(p_Var5->_Mystorage)._Ptrs[0][4])
                (p_Var5,CONCAT71((int7)((ulonglong)&_Stack_c8 >> 8),p_Var5 != this_00));
      *(undefined8 *)((longlong)this + 200) = 0;
    }
    std::_Func_class<void,rl4::JointsEvaluator_*>::_Reset_move(this_00,&_Stack_c8);
  }
  if (PStack_88 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    PStack_208 = PStack_88;
    if (_Stack_c8._Mystorage._Ptrs[7] == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*_Stack_c8._Mystorage._Ptrs[7] + 0x10))
              (_Stack_c8._Mystorage._Ptrs[7],&PStack_208);
  }
  if (_Stack_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*_Stack_c8._Mystorage._Ptrs[7] + 0x20))
              (_Stack_c8._Mystorage._Ptrs[7],
               _Stack_c8._Mystorage._Ptrs[7] !=
               (_Func_base<void,rl4::JointsEvaluator_*> *)&_Stack_c8);
  }
  pTVar7 = vStack_200._Mypair._Myval2._Mylast;
  pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
  if (vStack_200._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; pTVar9 != pTVar7; pTVar9 = pTVar9 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(pTVar9);
    }
    (**(code **)(*(longlong *)vStack_200._Mypair._Myval1 + 0x10))
              (vStack_200._Mypair._Myval1,vStack_200._Mypair._Myval2._Myfirst,
               (((longlong)vStack_200._Mypair._Myval2._Myend -
                (longlong)vStack_200._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c577ac0

void * __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// TestBody @ 14c577b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c577ca1) */
/* WARNING: Removing unreachable block (ram,0x00014c577ca8) */
/* WARNING: Removing unreachable block (ram,0x00014c577cac) */
/* WARNING: Removing unreachable block (ram,0x00014c577cb1) */

void __thiscall
TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::TestBody(TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this)

{
  undefined1 *puVar1;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  float *pfVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auStackY_1d8 [32];
  AssertHelper local_198;
  longlong *local_190;
  AssertionResult local_188;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_178;
  ArrayView<float> local_170;
  void *local_160 [3];
  undefined1 local_148 [96];
  longlong *local_e8;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  puVar1 = &this->field_0x10;
  pvVar2 = rltests::twsw::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
           [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
  rl4::CPUJointsOutputInstance::CPUJointsOutputInstance
            ((CPUJointsOutputInstance *)local_148,
             (ushort)((longlong)
                      (ulonglong)
                      (uint)(*(int *)&(pvVar2->_Mypair)._Myval2._Mylast -
                            *(int *)&(pvVar2->_Mypair)._Myval2._Myfirst) >> 2),Vector,
             this->field_0xe0,Vector,(MemoryResource *)puVar1);
  rl4::CPUJointsOutputInstance::getOutputBuffer((CPUJointsOutputInstance *)local_148,&local_170);
  uVar10 = 0;
  ControlsFactory::getInstanceFactory
            ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)local_88,0,
             (ushort)((longlong)rltests::twsw::input::values._Mypair._Myval2._Mylast -
                      (longlong)rltests::twsw::input::values._Mypair._Myval2._Myfirst >> 2),0,0,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_188.success_ = false;
  local_188._1_7_ = 0;
  local_188.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_198.data_ = (AssertHelperData *)puVar1;
  if (local_50 == (longlong *)0x0) {
    std::_Xbad_function_call();
    return;
  }
  (**(code **)(*local_50 + 0x10))(local_50,local_d8,&local_188,&local_198);
  (**(code **)(*local_98 + 0x28))(local_98,local_160);
  memmove(local_160[0],rltests::twsw::input::values._Mypair._Myval2._Myfirst,
          (longlong)rltests::twsw::input::values._Mypair._Myval2._Mylast -
          (longlong)rltests::twsw::input::values._Mypair._Myval2._Myfirst);
  dVar3 = __real_3f60624de0000000;
  if (rltests::twsw::unoptimized::lodCount != 0) {
    do {
      uVar9 = 0;
      memset(local_170.ptr,0,local_170.sz * 4);
      (**(code **)(**(longlong **)&this->field_0xd0 + 0x20))
                (*(longlong **)&this->field_0xd0,local_98,local_148,uVar10);
      pvVar2 = rltests::twsw::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
               [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
      pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
      if ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2 != 0) {
        do {
          testing::internal::DoubleNearPredFormat
                    (&local_188,"outputBuffer[i]","expected[i]","threshold",
                     (double)local_170.ptr[uVar9],(double)pfVar6[uVar9],dVar3);
          uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
          if (local_188.success_ == false) {
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_178);
            if (local_188.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)local_188.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_188.message_._Mypair._Myval2 + 0x18)) {
                pcVar7 = *(char **)local_188.message_._Mypair._Myval2;
              }
            }
            this_00 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_198,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingEvaluator.cpp"
                                 ,0xa0,pcVar7);
            testing::internal::AssertHelper::operator=(this_00,pMVar5);
            testing::internal::AssertHelper::~AssertHelper(&local_198);
            if (local_178._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar8 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)local_178._Mypair._Myval2 + 4) +
                       (longlong)local_178._Mypair._Myval2);
              (**(code **)*puVar8)(puVar8,1);
            }
            uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
            if (local_188.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_188.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
            }
            if (local_98 != (longlong *)0x0) {
              local_190 = local_98;
              if (local_a0 == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
            }
            if (local_a0 == (longlong *)0x0) goto LAB_14c577df5;
            (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
            goto LAB_14c577df1;
          }
          if (local_188.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_188.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)
                         ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2))
        ;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < rltests::twsw::unoptimized::lodCount);
  }
  if (local_98 != (longlong *)0x0) {
    local_190 = local_98;
    if (local_a0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
LAB_14c577df1:
    local_a0 = (longlong *)0x0;
  }
LAB_14c577df5:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)local_88);
    local_50 = (longlong *)0x0;
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x20))(local_e8,local_e8 != (longlong *)(local_148 + 0x28));
    local_e8 = (longlong *)0x0;
  }
  if ((float *)local_148._16_8_ != (float *)0x0) {
    (**(code **)(*(longlong *)local_148._8_8_ + 0x10))
              (local_148._8_8_,local_148._16_8_,
               local_148._32_8_ - local_148._16_8_ & 0xfffffffffffffffc,0x40);
    local_148._32_8_ = (float *)0x0;
    local_148._16_8_ = (float *)0x0;
    local_148._24_8_ = (float *)0x0;
  }
  rl4::JointsOutputInstance::~JointsOutputInstance((JointsOutputInstance *)local_148);
  return;
}

// `scalar_deleting_destructor' @ 14c577ff0

void * __thiscall
TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_
          (TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this,uint param_1)

{
  ::`anonymous_namespace'::
  TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
  ::
  ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// CreateTest @ 14c578030

Test * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::CreateTest(TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::twsw::TwistSwingReader::TwistSwingReader
              ((TwistSwingReader *)&this_00[1].gtest_flag_saver_);
    this_00[0xc].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TwistSwingEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std____6B_
    ;
    this_00[0xd]._padding_ = 0;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5780b0

void * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// _Copy @ 14c5780f0

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c578110

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c578130

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Do_call(void *this,JointsEvaluator **param_1)

{
  JointsEvaluator *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c57816a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,0x68,8);
  return;
}

// _Target_type @ 14c578180

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource*___ptr64>(std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>&&___ptr64,std::nullptr_t&&___ptr64,pma::AlignedMemoryResource*___ptr64&&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c578190

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c5781a0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// SetUp @ 14c5781c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::SetUp(void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  _Func_class<void,rl4::JointsEvaluator_*> *this_00;
  float *pfVar2;
  ushort *puVar3;
  longlong *plVar4;
  _Func_class<void,rl4::JointsEvaluator_*> *p_Var5;
  longlong lVar6;
  TwistSwingSetup *pTVar7;
  TwistSwingSetup *pTVar8;
  TwistSwingSetup *pTVar9;
  undefined8 *puVar10;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar11;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar16;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined1 auStack_228 [32];
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PStack_208;
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  vStack_200;
  undefined1 auStack_1e0 [56];
  longlong *plStack_1a8;
  TwistSwingSetup TStack_1a0;
  _Func_class<void,rl4::JointsEvaluator_*> _Stack_c8;
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 4;
  uVar13 = 0;
  *(undefined8 *)((longlong)this + 0xd8) = 0;
  uVar15 = (ulonglong)rltests::twsw::optimized::setupCount;
  pTVar9 = rl4::TwistSwingSetup::TwistSwingSetup(&TStack_1a0,(MemoryResource *)PVar1);
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  PStack_208 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
               &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    PStack_208 = PVar1;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_><pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>,0>
            (&vStack_200,uVar15,pTVar9,&PStack_208);
  rl4::TwistSwingSetup::~TwistSwingSetup(&TStack_1a0);
  lVar6 = (longlong)vStack_200._Mypair._Myval2._Mylast -
          (longlong)vStack_200._Mypair._Myval2._Myfirst >> 0x3f;
  uVar15 = uVar13;
  uVar19 = uVar13;
  if (((longlong)vStack_200._Mypair._Myval2._Mylast - (longlong)vStack_200._Mypair._Myval2._Myfirst)
      / 0xd0 + lVar6 != lVar6) {
    do {
      pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
      *(TwistAxis *)((longlong)&(vStack_200._Mypair._Myval2._Myfirst)->twistTwistAxis + uVar19) =
           rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((vStack_200._Mypair._Myval2._Myfirst)->twistBlendWeights)._Mypair._Myval1.
                  field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      *(TwistAxis *)((longlong)&pTVar9->swingTwistAxis + uVar19) =
           rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&(pTVar9->swingBlendWeights)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      uVar15 = uVar15 + 1;
      uVar13 = uVar13 + 0x20;
      uVar19 = uVar19 + 0xd0;
    } while (uVar15 < (ulonglong)
                      (((longlong)vStack_200._Mypair._Myval2._Mylast -
                       (longlong)vStack_200._Mypair._Myval2._Myfirst) / 0xd0));
  }
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar14 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if ((undefined **)((longlong)this + 0x10) != (undefined **)0x0) {
    ppuVar14 = (undefined **)((longlong)this + 0x10);
  }
  puVar10 = (undefined8 *)(**(code **)(*ppuVar14 + 8))(ppuVar14,0x68,8);
  pTVar8 = vStack_200._Mypair._Myval2._Myend;
  pTVar7 = vStack_200._Mypair._Myval2._Mylast;
  pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
  plStack_1a8 = (longlong *)0x0;
  *puVar10 = &
             ___7__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__6B_
  ;
  vStack_200._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  vStack_200._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  vStack_200._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)(puVar10 + 1) =
       vStack_200._Mypair._Myval1;
  puVar10[2] = pTVar9;
  puVar10[3] = pTVar7;
  puVar10[4] = pTVar8;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            ((function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)(puVar10 + 5),
             (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)auStack_1e0);
  if (plStack_1a8 != (longlong *)0x0) {
    (**(code **)(*plStack_1a8 + 0x20))(plStack_1a8,plStack_1a8 != (longlong *)auStack_1e0);
  }
  ppuStack_78 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  pppuStack_40 = &ppuStack_78;
  _Stack_c8._Mystorage._Ptrs[7] = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  ppuStack_70 = ppuVar14;
  _Stack_c8._Mystorage._Ptrs[7] =
       std::
       _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
       ::_Move(&ppuStack_78,&_Stack_c8);
  if (pppuStack_40 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_40)[4])(pppuStack_40,pppuStack_40 != &ppuStack_78);
  }
  this_00 = (_Func_class<void,rl4::JointsEvaluator_*> *)((longlong)this + 0x90);
  PVar1 = *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)
           ((longlong)this + 0xd0);
  PStack_88 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0;
  *(undefined8 **)((longlong)this + 0xd0) = puVar10;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    plVar4 = *(longlong **)((longlong)this + 200);
    PStack_208 = PVar1;
    if (plVar4 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,&PStack_208);
  }
  if (this_00 != &_Stack_c8) {
    p_Var5 = *(_Func_class<void,rl4::JointsEvaluator_*> **)((longlong)this + 200);
    if (p_Var5 != (_Func_class<void,rl4::JointsEvaluator_*> *)0x0) {
      (*(code *)(p_Var5->_Mystorage)._Ptrs[0][4])
                (p_Var5,CONCAT71((int7)((ulonglong)&_Stack_c8 >> 8),p_Var5 != this_00));
      *(undefined8 *)((longlong)this + 200) = 0;
    }
    std::_Func_class<void,rl4::JointsEvaluator_*>::_Reset_move(this_00,&_Stack_c8);
  }
  if (PStack_88 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    PStack_208 = PStack_88;
    if (_Stack_c8._Mystorage._Ptrs[7] == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*_Stack_c8._Mystorage._Ptrs[7] + 0x10))
              (_Stack_c8._Mystorage._Ptrs[7],&PStack_208);
  }
  if (_Stack_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*_Stack_c8._Mystorage._Ptrs[7] + 0x20))
              (_Stack_c8._Mystorage._Ptrs[7],
               _Stack_c8._Mystorage._Ptrs[7] !=
               (_Func_base<void,rl4::JointsEvaluator_*> *)&_Stack_c8);
  }
  pTVar7 = vStack_200._Mypair._Myval2._Mylast;
  pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
  if (vStack_200._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; pTVar9 != pTVar7; pTVar9 = pTVar9 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(pTVar9);
    }
    (**(code **)(*(longlong *)vStack_200._Mypair._Myval1 + 0x10))
              (vStack_200._Mypair._Myval1,vStack_200._Mypair._Myval2._Myfirst,
               (((longlong)vStack_200._Mypair._Myval2._Myend -
                (longlong)vStack_200._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5781d0

void * __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// TestBody @ 14c578210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c5783b1) */
/* WARNING: Removing unreachable block (ram,0x00014c5783b8) */
/* WARNING: Removing unreachable block (ram,0x00014c5783bc) */
/* WARNING: Removing unreachable block (ram,0x00014c5783c1) */

void __thiscall
TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::TestBody(TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
           *this)

{
  undefined1 *puVar1;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  float *pfVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auStackY_1d8 [32];
  AssertHelper local_198;
  longlong *local_190;
  AssertionResult local_188;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_178;
  ArrayView<float> local_170;
  void *local_160 [3];
  undefined1 local_148 [96];
  longlong *local_e8;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  puVar1 = &this->field_0x10;
  pvVar2 = rltests::twsw::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
           [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
  rl4::CPUJointsOutputInstance::CPUJointsOutputInstance
            ((CPUJointsOutputInstance *)local_148,
             (ushort)((longlong)
                      (ulonglong)
                      (uint)(*(int *)&(pvVar2->_Mypair)._Myval2._Mylast -
                            *(int *)&(pvVar2->_Mypair)._Myval2._Myfirst) >> 2),Vector,
             this->field_0xe0,Vector,(MemoryResource *)puVar1);
  rl4::CPUJointsOutputInstance::getOutputBuffer((CPUJointsOutputInstance *)local_148,&local_170);
  uVar10 = 0;
  ControlsFactory::getInstanceFactory
            ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)local_88,0,
             (ushort)((longlong)rltests::twsw::input::values._Mypair._Myval2._Mylast -
                      (longlong)rltests::twsw::input::values._Mypair._Myval2._Myfirst >> 2),0,0,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_188.success_ = false;
  local_188._1_7_ = 0;
  local_188.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_198.data_ = (AssertHelperData *)puVar1;
  if (local_50 == (longlong *)0x0) {
    std::_Xbad_function_call();
    return;
  }
  (**(code **)(*local_50 + 0x10))(local_50,local_d8,&local_188,&local_198);
  (**(code **)(*local_98 + 0x28))(local_98,local_160);
  memmove(local_160[0],rltests::twsw::input::values._Mypair._Myval2._Myfirst,
          (longlong)rltests::twsw::input::values._Mypair._Myval2._Mylast -
          (longlong)rltests::twsw::input::values._Mypair._Myval2._Myfirst);
  dVar3 = __real_3f60624de0000000;
  if (rltests::twsw::unoptimized::lodCount != 0) {
    do {
      uVar9 = 0;
      memset(local_170.ptr,0,local_170.sz * 4);
      (**(code **)(**(longlong **)&this->field_0xd0 + 0x20))
                (*(longlong **)&this->field_0xd0,local_98,local_148,uVar10);
      pvVar2 = rltests::twsw::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
               [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
      pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
      if ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2 != 0) {
        do {
          testing::internal::DoubleNearPredFormat
                    (&local_188,"outputBuffer[i]","expected[i]","threshold",
                     (double)local_170.ptr[uVar9],(double)pfVar6[uVar9],dVar3);
          uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
          if (local_188.success_ == false) {
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_178);
            if (local_188.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)local_188.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_188.message_._Mypair._Myval2 + 0x18)) {
                pcVar7 = *(char **)local_188.message_._Mypair._Myval2;
              }
            }
            this_00 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_198,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingEvaluator.cpp"
                                 ,0xa0,pcVar7);
            testing::internal::AssertHelper::operator=(this_00,pMVar5);
            testing::internal::AssertHelper::~AssertHelper(&local_198);
            if (local_178._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar8 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)local_178._Mypair._Myval2 + 4) +
                       (longlong)local_178._Mypair._Myval2);
              (**(code **)*puVar8)(puVar8,1);
            }
            uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
            if (local_188.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_188.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
            }
            if (local_98 != (longlong *)0x0) {
              local_190 = local_98;
              if (local_a0 == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
            }
            if (local_a0 == (longlong *)0x0) goto LAB_14c578505;
            (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
            goto LAB_14c578501;
          }
          if (local_188.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_188.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)
                         ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2))
        ;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < rltests::twsw::unoptimized::lodCount);
  }
  if (local_98 != (longlong *)0x0) {
    local_190 = local_98;
    if (local_a0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
LAB_14c578501:
    local_a0 = (longlong *)0x0;
  }
LAB_14c578505:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)local_88);
    local_50 = (longlong *)0x0;
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x20))(local_e8,local_e8 != (longlong *)(local_148 + 0x28));
    local_e8 = (longlong *)0x0;
  }
  if ((float *)local_148._16_8_ != (float *)0x0) {
    (**(code **)(*(longlong *)local_148._8_8_ + 0x10))
              (local_148._8_8_,local_148._16_8_,
               local_148._32_8_ - local_148._16_8_ & 0xfffffffffffffffc,0x40);
    local_148._32_8_ = (float *)0x0;
    local_148._16_8_ = (float *)0x0;
    local_148._24_8_ = (float *)0x0;
  }
  rl4::JointsOutputInstance::~JointsOutputInstance((JointsOutputInstance *)local_148);
  return;
}

// `scalar_deleting_destructor' @ 14c578700

void * __thiscall
TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_
          (TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
           *this,uint param_1)

{
  ::`anonymous_namespace'::
  TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
  ::
  ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// CreateTest @ 14c578740

Test * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::CreateTest(TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::twsw::TwistSwingReader::TwistSwingReader
              ((TwistSwingReader *)&this_00[1].gtest_flag_saver_);
    this_00[0xc].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TwistSwingEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___std____6B_
    ;
    this_00[0xd]._padding_ = 0;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5787c0

void * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// getTwistCount @ 14c578800

ushort __thiscall rltests::twsw::TwistSwingReader::getTwistCount(TwistSwingReader *this)

{
  return (ushort)((longlong)unoptimized::twistBlendWeights._Mypair._Myval2._Mylast -
                  (longlong)unoptimized::twistBlendWeights._Mypair._Myval2._Myfirst >> 5);
}

// getTwistSetupTwistAxis @ 14c578820

TwistAxis __thiscall
rltests::twsw::TwistSwingReader::getTwistSetupTwistAxis(TwistSwingReader *this,ushort param_1)

{
  return unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[param_1];
}

// getTwistInputControlIndices @ 14c578840

ArrayView<unsigned_short_const_> * __thiscall
rltests::twsw::TwistSwingReader::getTwistInputControlIndices
          (TwistSwingReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = unoptimized::twistInputControlIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
           _Myfirst;
  puVar2 = unoptimized::twistInputControlIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
           _Mylast;
  __return_storage_ptr__->ptr = puVar1;
  __return_storage_ptr__->sz = (longlong)puVar2 - (longlong)puVar1 >> 1;
  return __return_storage_ptr__;
}

// getTwistOutputJointIndices @ 14c578870

ArrayView<unsigned_short_const_> * __thiscall
rltests::twsw::TwistSwingReader::getTwistOutputJointIndices
          (TwistSwingReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = unoptimized::twistOutputJointIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
           _Myfirst;
  puVar2 = unoptimized::twistOutputJointIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
           _Mylast;
  __return_storage_ptr__->ptr = puVar1;
  __return_storage_ptr__->sz = (longlong)puVar2 - (longlong)puVar1 >> 1;
  return __return_storage_ptr__;
}

// getTwistBlendWeights @ 14c5788a0

ArrayView<float_const_> * __thiscall
rltests::twsw::TwistSwingReader::getTwistBlendWeights
          (TwistSwingReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = unoptimized::twistBlendWeights._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Myfirst
  ;
  pfVar2 = unoptimized::twistBlendWeights._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Mylast;
  __return_storage_ptr__->ptr = pfVar1;
  __return_storage_ptr__->sz = (longlong)pfVar2 - (longlong)pfVar1 >> 2;
  return __return_storage_ptr__;
}

// getSwingCount @ 14c5788e0

ushort __thiscall rltests::twsw::TwistSwingReader::getSwingCount(TwistSwingReader *this)

{
  return (ushort)((longlong)unoptimized::swingBlendWeights._Mypair._Myval2._Mylast -
                  (longlong)unoptimized::swingBlendWeights._Mypair._Myval2._Myfirst >> 5);
}

// getSwingSetupTwistAxis @ 14c578900

TwistAxis __thiscall
rltests::twsw::TwistSwingReader::getSwingSetupTwistAxis(TwistSwingReader *this,ushort param_1)

{
  return unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[param_1];
}

// getSwingInputControlIndices @ 14c578920

ArrayView<unsigned_short_const_> * __thiscall
rltests::twsw::TwistSwingReader::getSwingInputControlIndices
          (TwistSwingReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = unoptimized::swingInputControlIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
           _Myfirst;
  puVar2 = unoptimized::swingInputControlIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
           _Mylast;
  __return_storage_ptr__->ptr = puVar1;
  __return_storage_ptr__->sz = (longlong)puVar2 - (longlong)puVar1 >> 1;
  return __return_storage_ptr__;
}

// getSwingOutputJointIndices @ 14c578950

ArrayView<unsigned_short_const_> * __thiscall
rltests::twsw::TwistSwingReader::getSwingOutputJointIndices
          (TwistSwingReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = unoptimized::swingOutputJointIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
           _Myfirst;
  puVar2 = unoptimized::swingOutputJointIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
           _Mylast;
  __return_storage_ptr__->ptr = puVar1;
  __return_storage_ptr__->sz = (longlong)puVar2 - (longlong)puVar1 >> 1;
  return __return_storage_ptr__;
}

// getSwingBlendWeights @ 14c578980

ArrayView<float_const_> * __thiscall
rltests::twsw::TwistSwingReader::getSwingBlendWeights
          (TwistSwingReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = unoptimized::swingBlendWeights._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Myfirst
  ;
  pfVar2 = unoptimized::swingBlendWeights._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Mylast;
  __return_storage_ptr__->ptr = pfVar1;
  __return_storage_ptr__->sz = (longlong)pfVar2 - (longlong)pfVar1 >> 2;
  return __return_storage_ptr__;
}

// createInstance @ 14c5789c0

unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_> *
__thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::createInstance(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
                 *this,unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
                       *__return_storage_ptr__,MemoryResource *param_1)

{
  longlong *plVar1;
  unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
  *extraout_RAX;
  MemoryResource *local_res8 [4];
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  local_res8[0] = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,__return_storage_ptr__,local_res8);
    return __return_storage_ptr__;
  }
  std::_Xbad_function_call();
  return extraout_RAX;
}

// getJointDeltaValueCountForLOD @ 14c578a00

uint __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::getJointDeltaValueCountForLOD
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
           *this,ushort param_1)

{
  return 0;
}

// calculate @ 14c578a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::calculate(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
            *this,ControlsInputInstance *param_1,JointsOutputInstance *param_2,ushort param_3)

{
  ushort *puVar1;
  TwistSwingSetup *pTVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  ushort *puVar7;
  ulonglong uVar8;
  TwistSwingSetup *pTVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_168;
  float local_164;
  float local_160;
  quat<float> local_150;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  quat<float> local_130;
  quat<float> local_120;
  quat<float> local_110;
  longlong local_100 [2];
  longlong local_f0 [23];
  
  (**(code **)((longlong)*param_1 + 0x20))(param_1,local_100);
  (**(code **)((longlong)*param_2 + 8))(param_2,local_f0);
  fVar5 = __real_3fc90fda;
  fVar4 = __real_3f800000;
  pTVar2 = (this->setups)._Mypair._Myval2._Mylast;
  uVar16 = __xmm_80000000800000008000000080000000;
  for (pTVar9 = (this->setups)._Mypair._Myval2._Myfirst; pTVar9 != pTVar2; pTVar9 = pTVar9 + 1) {
    puVar7 = (pTVar9->swingInputIndices)._Mypair._Myval2._Myfirst;
    local_168 = 0.0;
    local_164 = 0.0;
    local_160 = 0.0;
    fVar22 = fVar4;
    __xmm_80000000800000008000000080000000 = uVar16;
    if (puVar7 != (pTVar9->swingInputIndices)._Mypair._Myval2._Mylast) {
      local_150.y = *(float *)(local_100[0] + (ulonglong)puVar7[1] * 4);
      local_150.z = *(float *)(local_100[0] + (ulonglong)puVar7[2] * 4);
      local_150.w = *(float *)(local_100[0] + (ulonglong)puVar7[3] * 4);
      local_150.x = *(float *)(local_100[0] + (ulonglong)*puVar7 * 4);
      (*`public:_virtual_void___cdecl_rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>::calculate(rl4::ControlsInputInstance_const*___ptr64,rl4::JointsOutputInstance*___ptr64,unsigned_short)const___ptr64'
        ::__l2::separateTwistComponent[(int)pTVar9->swingTwistAxis])(&local_130,&local_150);
      fVar10 = fVar4 / (local_130.y * local_130.y + local_130.x * local_130.x +
                       local_130.w * local_130.w + local_130.z * local_130.z);
      fVar22 = local_130.w * fVar10;
      local_164 = (float)((uint)(local_130.y * fVar10) ^ uVar16);
      local_160 = (float)((uint)(local_130.z * fVar10) ^ uVar16);
      local_168 = (float)((uint)(fVar10 * local_130.x) ^ uVar16);
      local_140 = (local_150.w * local_168 + fVar22 * local_150.x + local_150.y * local_160) -
                  local_150.z * local_164;
      local_13c = (local_150.w * local_164 + fVar22 * local_150.y + local_150.z * local_168) -
                  local_150.x * local_160;
      uVar8 = 0;
      pfVar3 = (pTVar9->swingBlendWeights)._Mypair._Myval2._Myfirst;
      local_138 = (local_150.w * local_160 + fVar22 * local_150.z + local_150.x * local_164) -
                  local_150.y * local_168;
      fVar10 = ((fVar22 * local_150.w - local_150.x * local_168) - local_150.y * local_164) -
               local_150.z * local_160;
      fVar21 = fVar4 / (local_13c * local_13c + local_140 * local_140 +
                       fVar10 * fVar10 + local_138 * local_138);
      local_140 = fVar21 * local_140;
      local_13c = fVar21 * local_13c;
      local_138 = fVar21 * local_138;
      fVar21 = fVar21 * fVar10;
      if ((longlong)(pTVar9->swingBlendWeights)._Mypair._Myval2._Mylast - (longlong)pfVar3 >> 2 != 0
         ) {
        puVar7 = (pTVar9->swingOutputIndices)._Mypair._Myval2._Myfirst;
        do {
          fVar10 = pfVar3[uVar8];
          fVar11 = fVar21;
          fVar18 = fVar4;
          if (fVar21 < 0.0) {
            fVar11 = (float)((uint)fVar21 ^ __xmm_80000000800000008000000080000000);
            fVar18 = __real_bf800000;
          }
          fVar17 = fVar4 - fVar10;
          if (fVar11 <= __real_3f7ffffe) {
            fVar11 = acosf(fVar11);
            fVar12 = sinf(fVar11);
            fVar17 = sinf(fVar11 * fVar17);
            fVar17 = fVar17 * (fVar4 / fVar12);
            fVar10 = sinf(fVar11 * fVar10);
            fVar10 = fVar10 * (fVar4 / fVar12);
          }
          lVar6 = local_f0[0];
          fVar13 = (float)((uint)(local_140 * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar12 = (float)((uint)(local_13c * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar11 = (float)((uint)(local_138 * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar18 = fVar10 * fVar18 + fVar17 * fVar21;
          fVar14 = (fVar13 * fVar22 + fVar18 * local_168 + fVar11 * local_164) - fVar12 * local_160;
          fVar15 = (fVar12 * fVar22 + fVar18 * local_164 + fVar13 * local_160) - fVar11 * local_168;
          fVar10 = (fVar11 * fVar22 + fVar18 * local_160 + fVar12 * local_168) - fVar13 * local_164;
          fVar19 = ((fVar18 * fVar22 - fVar13 * local_168) - fVar12 * local_164) -
                   fVar11 * local_160;
          fVar17 = fVar15 + fVar15;
          local_134 = fVar14 * fVar17;
          fVar11 = fVar10 + fVar10;
          fVar13 = fVar19 * (fVar14 + fVar14);
          fVar20 = fVar19 * fVar17 + fVar14 * fVar11;
          fVar10 = fVar10 * fVar11;
          fVar12 = (float)((uint)fVar20 & __xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar18 = fVar4 - fVar12;
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar18 = SQRT(fVar18) *
                   (((((((__real_3bda90c5 - fVar12 * ___real_3aa57a2c) * fVar12 - ___real_3c8bfc66)
                        * fVar12 + ___real_3cfd10f8) * fVar12 - ___real_3d4d8392) * fVar12 +
                     ___real_3db63a9e) * fVar12 - ___real_3e5bbfca) * fVar12 + fVar5);
          if (fVar20 < 0.0) {
            fVar18 = fVar18 - fVar5;
          }
          else {
            fVar18 = fVar5 - fVar18;
          }
          if (fVar4 <= fVar12) {
            fVar13 = fVar13 + fVar15 * fVar11;
            fVar12 = 0.0;
          }
          else {
            fVar12 = atan2f(fVar19 * fVar11 - local_134,fVar4 - (fVar10 + fVar15 * fVar17));
            fVar13 = fVar13 - fVar15 * fVar11;
            fVar10 = fVar15 * fVar17;
          }
          fVar10 = atan2f(fVar13,fVar4 - (fVar10 + fVar14 * (fVar14 + fVar14)));
          uVar8 = uVar8 + 1;
          *(float *)(lVar6 + (ulonglong)*puVar7 * 4) = fVar10;
          *(float *)(lVar6 + (ulonglong)puVar7[1] * 4) = fVar18;
          puVar1 = puVar7 + 2;
          puVar7 = puVar7 + 4;
          *(float *)(lVar6 + (ulonglong)*puVar1 * 4) = fVar12;
        } while (uVar8 < (ulonglong)
                         ((longlong)(pTVar9->swingBlendWeights)._Mypair._Myval2._Mylast -
                          (longlong)pfVar3 >> 2));
      }
    }
    uVar16 = __xmm_80000000800000008000000080000000;
    puVar7 = (pTVar9->twistInputIndices)._Mypair._Myval2._Myfirst;
    if ((puVar7 != (pTVar9->twistInputIndices)._Mypair._Myval2._Mylast) &&
       ((pTVar9->swingInputIndices)._Mypair._Myval2._Myfirst ==
        (pTVar9->swingInputIndices)._Mypair._Myval2._Mylast)) {
      local_120.y = *(float *)(local_100[0] + (ulonglong)puVar7[1] * 4);
      local_120.z = *(float *)(local_100[0] + (ulonglong)puVar7[2] * 4);
      local_120.w = *(float *)(local_100[0] + (ulonglong)puVar7[3] * 4);
      local_120.x = *(float *)(local_100[0] + (ulonglong)*puVar7 * 4);
      (*`public:_virtual_void___cdecl_rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>::calculate(rl4::ControlsInputInstance_const*___ptr64,rl4::JointsOutputInstance*___ptr64,unsigned_short)const___ptr64'
        ::__l2::separateTwistComponent[(int)pTVar9->twistTwistAxis])(&local_110,&local_120);
      local_168 = local_110.x;
      local_160 = local_110.z;
      local_164 = local_110.y;
      fVar22 = local_110.w;
    }
    pfVar3 = (pTVar9->twistBlendWeights)._Mypair._Myval2._Myfirst;
    uVar8 = 0;
    if ((longlong)(pTVar9->twistBlendWeights)._Mypair._Myval2._Mylast - (longlong)pfVar3 >> 2 != 0)
    {
      puVar7 = (pTVar9->twistOutputIndices)._Mypair._Myval2._Myfirst;
      do {
        fVar10 = pfVar3[uVar8];
        fVar21 = fVar22;
        fVar11 = fVar4;
        if (fVar22 < 0.0) {
          fVar21 = (float)((uint)fVar22 ^ uVar16);
          fVar11 = __real_bf800000;
        }
        fVar18 = fVar4 - fVar10;
        if (fVar21 <= __real_3f7ffffe) {
          fVar21 = acosf(fVar21);
          fVar17 = sinf(fVar21);
          fVar18 = sinf(fVar18 * fVar21);
          fVar18 = fVar18 * (fVar4 / fVar17);
          fVar10 = sinf(fVar10 * fVar21);
          fVar10 = fVar10 * (fVar4 / fVar17);
        }
        lVar6 = local_f0[0];
        fVar12 = local_168 * fVar18;
        fVar19 = local_164 * fVar18;
        fVar21 = local_160 * fVar18;
        fVar14 = fVar11 * fVar10 + fVar22 * fVar18;
        fVar18 = fVar19 + fVar19;
        fVar13 = fVar14 * (fVar12 + fVar12);
        fVar10 = fVar21 + fVar21;
        fVar15 = fVar14 * fVar18 + fVar12 * fVar10;
        fVar21 = fVar21 * fVar10;
        fVar17 = (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar11 = fVar4 - fVar17;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar11 = SQRT(fVar11) *
                 (((((((__real_3bda90c5 - fVar17 * ___real_3aa57a2c) * fVar17 - ___real_3c8bfc66) *
                      fVar17 + ___real_3cfd10f8) * fVar17 - ___real_3d4d8392) * fVar17 +
                   ___real_3db63a9e) * fVar17 - ___real_3e5bbfca) * fVar17 + fVar5);
        if (fVar15 < 0.0) {
          fVar11 = fVar11 - fVar5;
        }
        else {
          fVar11 = fVar5 - fVar11;
        }
        if (fVar4 <= fVar17) {
          fVar17 = 0.0;
          fVar13 = fVar13 + fVar19 * fVar10;
        }
        else {
          fVar17 = atan2f(fVar14 * fVar10 - fVar12 * fVar18,fVar4 - (fVar21 + fVar19 * fVar18));
          fVar13 = fVar13 - fVar19 * fVar10;
          fVar21 = fVar19 * fVar18;
        }
        fVar10 = atan2f(fVar13,fVar4 - (fVar21 + fVar12 * (fVar12 + fVar12)));
        uVar16 = __xmm_80000000800000008000000080000000;
        uVar8 = uVar8 + 1;
        *(float *)(lVar6 + (ulonglong)*puVar7 * 4) = fVar10;
        *(float *)(lVar6 + (ulonglong)puVar7[1] * 4) = fVar11;
        puVar1 = puVar7 + 2;
        puVar7 = puVar7 + 4;
        *(float *)(lVar6 + (ulonglong)*puVar1 * 4) = fVar17;
      } while (uVar8 < (ulonglong)
                       ((longlong)(pTVar9->twistBlendWeights)._Mypair._Myval2._Mylast -
                        (longlong)pfVar3 >> 2));
    }
    uVar16 = __xmm_80000000800000008000000080000000;
  }
  __xmm_80000000800000008000000080000000 = uVar16;
  return;
}

// calculate @ 14c579450

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::calculate(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
            *this,ControlsInputInstance *param_1,JointsOutputInstance *param_2,ushort param_3,
           ushort param_4)

{
  return;
}

// load @ 14c579460

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::load(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
       *this,BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *param_1)

{
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  *this_00;
  undefined1 *puVar1;
  uint local_res8 [2];
  
  this_00 = *(ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
              **)param_1;
  local_res8[0] = 0;
  puVar1 = &this_00->stream->field_0x10;
  (**(code **)(*(longlong *)puVar1 + 8))(puVar1,local_res8,4);
  terse::
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  ::
  processElements<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>_>
            (this_00,&this->setups,
             (ulonglong)
             (local_res8[0] >> 0x18 | (local_res8[0] & 0xff0000) >> 8 |
              (local_res8[0] & 0xff00) << 8 | local_res8[0] << 0x18));
  return;
}

// save @ 14c5794c0

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::save(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
       *this,BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *param_1)

{
  terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
  operator()<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)param_1,&this->setups);
  return;
}

// `scalar_deleting_destructor' @ 14c5794e0

void * __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::_scalar_deleting_destructor_
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
           *this,uint param_1)

{
  longlong *plVar1;
  undefined4 in_register_00000014;
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),
                               (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                                *)plVar1 != &this->instanceFactory));
    *(undefined8 *)&(this->instanceFactory).field_0x38 = 0;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&this->setups);
  JointsEvaluator::~JointsEvaluator((JointsEvaluator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// _Copy @ 14c579560

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c579580

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c5795a0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Do_call(void *this,JointsEvaluator **param_1)

{
  JointsEvaluator *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c5795da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,0x68,8);
  return;
}

// _Target_type @ 14c5795f0

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource*___ptr64>(std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>&&___ptr64,std::nullptr_t&&___ptr64,pma::AlignedMemoryResource*___ptr64&&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c579600

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c579610

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// SetUp @ 14c579630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::SetUp(void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  _Func_class<void,rl4::JointsEvaluator_*> *this_00;
  float *pfVar2;
  ushort *puVar3;
  longlong *plVar4;
  _Func_class<void,rl4::JointsEvaluator_*> *p_Var5;
  longlong lVar6;
  TwistSwingSetup *pTVar7;
  TwistSwingSetup *pTVar8;
  TwistSwingSetup *pTVar9;
  undefined8 *puVar10;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar11;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar16;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined1 auStack_228 [32];
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PStack_208;
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  vStack_200;
  undefined1 auStack_1e0 [56];
  longlong *plStack_1a8;
  TwistSwingSetup TStack_1a0;
  _Func_class<void,rl4::JointsEvaluator_*> _Stack_c8;
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 4;
  uVar13 = 0;
  *(undefined8 *)((longlong)this + 0xd8) = 0;
  uVar15 = (ulonglong)rltests::twsw::optimized::setupCount;
  pTVar9 = rl4::TwistSwingSetup::TwistSwingSetup(&TStack_1a0,(MemoryResource *)PVar1);
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  PStack_208 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
               &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    PStack_208 = PVar1;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_><pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>,0>
            (&vStack_200,uVar15,pTVar9,&PStack_208);
  rl4::TwistSwingSetup::~TwistSwingSetup(&TStack_1a0);
  lVar6 = (longlong)vStack_200._Mypair._Myval2._Mylast -
          (longlong)vStack_200._Mypair._Myval2._Myfirst >> 0x3f;
  uVar15 = uVar13;
  uVar19 = uVar13;
  if (((longlong)vStack_200._Mypair._Myval2._Mylast - (longlong)vStack_200._Mypair._Myval2._Myfirst)
      / 0xd0 + lVar6 != lVar6) {
    do {
      pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
      *(TwistAxis *)((longlong)&(vStack_200._Mypair._Myval2._Myfirst)->twistTwistAxis + uVar19) =
           rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((vStack_200._Mypair._Myval2._Myfirst)->twistBlendWeights)._Mypair._Myval1.
                  field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      *(TwistAxis *)((longlong)&pTVar9->swingTwistAxis + uVar19) =
           rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&(pTVar9->swingBlendWeights)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      uVar15 = uVar15 + 1;
      uVar13 = uVar13 + 0x20;
      uVar19 = uVar19 + 0xd0;
    } while (uVar15 < (ulonglong)
                      (((longlong)vStack_200._Mypair._Myval2._Mylast -
                       (longlong)vStack_200._Mypair._Myval2._Myfirst) / 0xd0));
  }
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar14 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if ((undefined **)((longlong)this + 0x10) != (undefined **)0x0) {
    ppuVar14 = (undefined **)((longlong)this + 0x10);
  }
  puVar10 = (undefined8 *)(**(code **)(*ppuVar14 + 8))(ppuVar14,0x68,8);
  pTVar8 = vStack_200._Mypair._Myval2._Myend;
  pTVar7 = vStack_200._Mypair._Myval2._Mylast;
  pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
  plStack_1a8 = (longlong *)0x0;
  *puVar10 = &
             ___7__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___rl4__6B_
  ;
  vStack_200._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  vStack_200._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  vStack_200._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)(puVar10 + 1) =
       vStack_200._Mypair._Myval1;
  puVar10[2] = pTVar9;
  puVar10[3] = pTVar7;
  puVar10[4] = pTVar8;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            ((function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)(puVar10 + 5),
             (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)auStack_1e0);
  if (plStack_1a8 != (longlong *)0x0) {
    (**(code **)(*plStack_1a8 + 0x20))(plStack_1a8,plStack_1a8 != (longlong *)auStack_1e0);
  }
  ppuStack_78 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  pppuStack_40 = &ppuStack_78;
  _Stack_c8._Mystorage._Ptrs[7] = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  ppuStack_70 = ppuVar14;
  _Stack_c8._Mystorage._Ptrs[7] =
       std::
       _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
       ::_Move(&ppuStack_78,&_Stack_c8);
  if (pppuStack_40 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_40)[4])(pppuStack_40,pppuStack_40 != &ppuStack_78);
  }
  this_00 = (_Func_class<void,rl4::JointsEvaluator_*> *)((longlong)this + 0x90);
  PVar1 = *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)
           ((longlong)this + 0xd0);
  PStack_88 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0;
  *(undefined8 **)((longlong)this + 0xd0) = puVar10;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    plVar4 = *(longlong **)((longlong)this + 200);
    PStack_208 = PVar1;
    if (plVar4 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,&PStack_208);
  }
  if (this_00 != &_Stack_c8) {
    p_Var5 = *(_Func_class<void,rl4::JointsEvaluator_*> **)((longlong)this + 200);
    if (p_Var5 != (_Func_class<void,rl4::JointsEvaluator_*> *)0x0) {
      (*(code *)(p_Var5->_Mystorage)._Ptrs[0][4])
                (p_Var5,CONCAT71((int7)((ulonglong)&_Stack_c8 >> 8),p_Var5 != this_00));
      *(undefined8 *)((longlong)this + 200) = 0;
    }
    std::_Func_class<void,rl4::JointsEvaluator_*>::_Reset_move(this_00,&_Stack_c8);
  }
  if (PStack_88 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    PStack_208 = PStack_88;
    if (_Stack_c8._Mystorage._Ptrs[7] == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*_Stack_c8._Mystorage._Ptrs[7] + 0x10))
              (_Stack_c8._Mystorage._Ptrs[7],&PStack_208);
  }
  if (_Stack_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*_Stack_c8._Mystorage._Ptrs[7] + 0x20))
              (_Stack_c8._Mystorage._Ptrs[7],
               _Stack_c8._Mystorage._Ptrs[7] !=
               (_Func_base<void,rl4::JointsEvaluator_*> *)&_Stack_c8);
  }
  pTVar7 = vStack_200._Mypair._Myval2._Mylast;
  pTVar9 = vStack_200._Mypair._Myval2._Myfirst;
  if (vStack_200._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; pTVar9 != pTVar7; pTVar9 = pTVar9 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(pTVar9);
    }
    (**(code **)(*(longlong *)vStack_200._Mypair._Myval1 + 0x10))
              (vStack_200._Mypair._Myval1,vStack_200._Mypair._Myval2._Myfirst,
               (((longlong)vStack_200._Mypair._Myval2._Myend -
                (longlong)vStack_200._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c579640

void * __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// TestBody @ 14c579680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c579821) */
/* WARNING: Removing unreachable block (ram,0x00014c579828) */
/* WARNING: Removing unreachable block (ram,0x00014c57982c) */
/* WARNING: Removing unreachable block (ram,0x00014c579831) */

void __thiscall
TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::TestBody(TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           *this)

{
  undefined1 *puVar1;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  float *pfVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auStackY_1d8 [32];
  AssertHelper local_198;
  longlong *local_190;
  AssertionResult local_188;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_178;
  ArrayView<float> local_170;
  void *local_160 [3];
  undefined1 local_148 [96];
  longlong *local_e8;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  puVar1 = &this->field_0x10;
  pvVar2 = rltests::twsw::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
           [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
  rl4::CPUJointsOutputInstance::CPUJointsOutputInstance
            ((CPUJointsOutputInstance *)local_148,
             (ushort)((longlong)
                      (ulonglong)
                      (uint)(*(int *)&(pvVar2->_Mypair)._Myval2._Mylast -
                            *(int *)&(pvVar2->_Mypair)._Myval2._Myfirst) >> 2),Vector,
             this->field_0xe0,Vector,(MemoryResource *)puVar1);
  rl4::CPUJointsOutputInstance::getOutputBuffer((CPUJointsOutputInstance *)local_148,&local_170);
  uVar10 = 0;
  ControlsFactory::getInstanceFactory
            ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)local_88,0,
             (ushort)((longlong)rltests::twsw::input::values._Mypair._Myval2._Mylast -
                      (longlong)rltests::twsw::input::values._Mypair._Myval2._Myfirst >> 2),0,0,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_188.success_ = false;
  local_188._1_7_ = 0;
  local_188.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_198.data_ = (AssertHelperData *)puVar1;
  if (local_50 == (longlong *)0x0) {
    std::_Xbad_function_call();
    return;
  }
  (**(code **)(*local_50 + 0x10))(local_50,local_d8,&local_188,&local_198);
  (**(code **)(*local_98 + 0x28))(local_98,local_160);
  memmove(local_160[0],rltests::twsw::input::values._Mypair._Myval2._Myfirst,
          (longlong)rltests::twsw::input::values._Mypair._Myval2._Mylast -
          (longlong)rltests::twsw::input::values._Mypair._Myval2._Myfirst);
  dVar3 = __real_3f60624de0000000;
  if (rltests::twsw::unoptimized::lodCount != 0) {
    do {
      uVar9 = 0;
      memset(local_170.ptr,0,local_170.sz * 4);
      (**(code **)(**(longlong **)&this->field_0xd0 + 0x20))
                (*(longlong **)&this->field_0xd0,local_98,local_148,uVar10);
      pvVar2 = rltests::twsw::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
               [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
      pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
      if ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2 != 0) {
        do {
          testing::internal::DoubleNearPredFormat
                    (&local_188,"outputBuffer[i]","expected[i]","threshold",
                     (double)local_170.ptr[uVar9],(double)pfVar6[uVar9],dVar3);
          uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
          if (local_188.success_ == false) {
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_178);
            if (local_188.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)local_188.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_188.message_._Mypair._Myval2 + 0x18)) {
                pcVar7 = *(char **)local_188.message_._Mypair._Myval2;
              }
            }
            this_00 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_198,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingEvaluator.cpp"
                                 ,0xa0,pcVar7);
            testing::internal::AssertHelper::operator=(this_00,pMVar5);
            testing::internal::AssertHelper::~AssertHelper(&local_198);
            if (local_178._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar8 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)local_178._Mypair._Myval2 + 4) +
                       (longlong)local_178._Mypair._Myval2);
              (**(code **)*puVar8)(puVar8,1);
            }
            uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
            if (local_188.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_188.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
            }
            if (local_98 != (longlong *)0x0) {
              local_190 = local_98;
              if (local_a0 == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
            }
            if (local_a0 == (longlong *)0x0) goto LAB_14c579975;
            (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
            goto LAB_14c579971;
          }
          if (local_188.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_188.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)
                         ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2))
        ;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < rltests::twsw::unoptimized::lodCount);
  }
  if (local_98 != (longlong *)0x0) {
    local_190 = local_98;
    if (local_a0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
LAB_14c579971:
    local_a0 = (longlong *)0x0;
  }
LAB_14c579975:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)local_88);
    local_50 = (longlong *)0x0;
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x20))(local_e8,local_e8 != (longlong *)(local_148 + 0x28));
    local_e8 = (longlong *)0x0;
  }
  if ((float *)local_148._16_8_ != (float *)0x0) {
    (**(code **)(*(longlong *)local_148._8_8_ + 0x10))
              (local_148._8_8_,local_148._16_8_,
               local_148._32_8_ - local_148._16_8_ & 0xfffffffffffffffc,0x40);
    local_148._32_8_ = (float *)0x0;
    local_148._16_8_ = (float *)0x0;
    local_148._24_8_ = (float *)0x0;
  }
  rl4::JointsOutputInstance::~JointsOutputInstance((JointsOutputInstance *)local_148);
  return;
}

// `scalar_deleting_destructor' @ 14c579b70

void * __thiscall
TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_
          (TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           *this,uint param_1)

{
  ::`anonymous_namespace'::
  TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
  ::
  ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// CreateTest @ 14c579bb0

Test * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::CreateTest(TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::twsw::TwistSwingReader::TwistSwingReader
              ((TwistSwingReader *)&this_00[1].gtest_flag_saver_);
    this_00[0xc].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TwistSwingEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___std____6B_
    ;
    this_00[0xd]._padding_ = 0;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c579c30

void * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// _Copy @ 14c579c70

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c579c90

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c579cb0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Do_call(void *this,JointsEvaluator **param_1)

{
  JointsEvaluator *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c579cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,0x68,8);
  return;
}

// _Target_type @ 14c579d00

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource*___ptr64>(std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>&&___ptr64,std::nullptr_t&&___ptr64,pma::AlignedMemoryResource*___ptr64&&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c579d10

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c579d20

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// separateTwistComponentByAxisX @ 14c579d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

quat<float> * __cdecl
rl4::separateTwistComponentByAxisX(quat<float> *__return_storage_ptr__,quat<float> *param_1)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  
  uVar6 = _UNK_150689648;
  fVar1 = param_1->x;
  fVar2 = param_1->w;
  fVar8 = fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar8 == 0.0) {
    uVar5 = _UNK_150689644;
    __return_storage_ptr__->x = (float)___xmm_3f800000000000000000000000000000;
    uVar7 = _UNK_150689648;
    __return_storage_ptr__->y = (float)uVar5;
    _UNK_150689648 = (undefined4)uVar6;
    _UNK_15068964c = SUB84(uVar6,4);
    uVar5 = _UNK_15068964c;
    __return_storage_ptr__->z = (float)_UNK_150689648;
    _UNK_150689648 = uVar7;
    __return_storage_ptr__->w = (float)uVar5;
    return __return_storage_ptr__;
  }
  fVar8 = __real_3f800000 / SQRT(fVar8);
  uVar3 = (ulonglong)(uint)(fVar8 * fVar1);
  lVar4 = (ulonglong)(uint)(fVar8 * fVar2) << 0x20;
  __return_storage_ptr__->x = (float)(int)uVar3;
  __return_storage_ptr__->y = (float)(int)(uVar3 >> 0x20);
  __return_storage_ptr__->z = (float)(int)lVar4;
  __return_storage_ptr__->w = (float)(int)((ulonglong)lVar4 >> 0x20);
  return __return_storage_ptr__;
}

// separateTwistComponentByAxisY @ 14c579dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

quat<float> * __cdecl
rl4::separateTwistComponentByAxisY(quat<float> *__return_storage_ptr__,quat<float> *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  longlong local_18;
  longlong lStack_10;
  
  uVar4 = _UNK_150689648;
  fVar1 = param_1->y;
  fVar2 = param_1->w;
  fVar6 = fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar6 == 0.0) {
    uVar3 = _UNK_150689644;
    __return_storage_ptr__->x = (float)___xmm_3f800000000000000000000000000000;
    uVar5 = _UNK_150689648;
    __return_storage_ptr__->y = (float)uVar3;
    _UNK_150689648 = (undefined4)uVar4;
    _UNK_15068964c = SUB84(uVar4,4);
    uVar3 = _UNK_15068964c;
    __return_storage_ptr__->z = (float)_UNK_150689648;
    _UNK_150689648 = uVar5;
    __return_storage_ptr__->w = (float)uVar3;
    return __return_storage_ptr__;
  }
  fVar6 = __real_3f800000 / SQRT(fVar6);
  lStack_10 = (ulonglong)(uint)(fVar6 * fVar2) << 0x20;
  local_18 = (ulonglong)(uint)(fVar6 * fVar1) << 0x20;
  __return_storage_ptr__->x = (float)(undefined4)local_18;
  __return_storage_ptr__->y = (float)local_18._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)lStack_10;
  __return_storage_ptr__->w = (float)lStack_10._4_4_;
  return __return_storage_ptr__;
}

// separateTwistComponentByAxisZ @ 14c579e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

quat<float> * __cdecl
rl4::separateTwistComponentByAxisZ(quat<float> *__return_storage_ptr__,quat<float> *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uStack_10;
  
  uVar4 = _UNK_150689648;
  fVar1 = param_1->z;
  fVar2 = param_1->w;
  fVar6 = fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar6 == 0.0) {
    uVar3 = _UNK_150689644;
    __return_storage_ptr__->x = (float)___xmm_3f800000000000000000000000000000;
    uVar5 = _UNK_150689648;
    __return_storage_ptr__->y = (float)uVar3;
    _UNK_150689648 = (undefined4)uVar4;
    _UNK_15068964c = SUB84(uVar4,4);
    uVar3 = _UNK_15068964c;
    __return_storage_ptr__->z = (float)_UNK_150689648;
    _UNK_150689648 = uVar5;
    __return_storage_ptr__->w = (float)uVar3;
    return __return_storage_ptr__;
  }
  fVar6 = __real_3f800000 / SQRT(fVar6);
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = fVar6 * fVar1;
  __return_storage_ptr__->w = fVar6 * fVar2;
  return __return_storage_ptr__;
}

// createInstance @ 14c579f00

unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_> *
__thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::createInstance(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
                 *this,unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
                       *__return_storage_ptr__,MemoryResource *param_1)

{
  longlong *plVar1;
  unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
  *extraout_RAX;
  MemoryResource *local_res8 [4];
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  local_res8[0] = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,__return_storage_ptr__,local_res8);
    return __return_storage_ptr__;
  }
  std::_Xbad_function_call();
  return extraout_RAX;
}

// getJointDeltaValueCountForLOD @ 14c579f40

uint __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::getJointDeltaValueCountForLOD
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
           *this,ushort param_1)

{
  return 0;
}

// calculate @ 14c579f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::calculate(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
            *this,ControlsInputInstance *param_1,JointsOutputInstance *param_2,ushort param_3)

{
  ushort *puVar1;
  TwistSwingSetup *pTVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  ushort *puVar7;
  ulonglong uVar8;
  TwistSwingSetup *pTVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_168;
  float local_164;
  float local_160;
  quat<float> local_150;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  quat<float> local_130;
  quat<float> local_120;
  quat<float> local_110;
  longlong local_100 [2];
  longlong local_f0 [23];
  
  (**(code **)((longlong)*param_1 + 0x20))(param_1,local_100);
  (**(code **)((longlong)*param_2 + 8))(param_2,local_f0);
  fVar5 = __real_3fc90fda;
  fVar4 = __real_3f800000;
  pTVar2 = (this->setups)._Mypair._Myval2._Mylast;
  uVar16 = __xmm_80000000800000008000000080000000;
  for (pTVar9 = (this->setups)._Mypair._Myval2._Myfirst; pTVar9 != pTVar2; pTVar9 = pTVar9 + 1) {
    puVar7 = (pTVar9->swingInputIndices)._Mypair._Myval2._Myfirst;
    local_168 = 0.0;
    local_164 = 0.0;
    local_160 = 0.0;
    fVar22 = fVar4;
    __xmm_80000000800000008000000080000000 = uVar16;
    if (puVar7 != (pTVar9->swingInputIndices)._Mypair._Myval2._Mylast) {
      local_150.y = *(float *)(local_100[0] + (ulonglong)puVar7[1] * 4);
      local_150.z = *(float *)(local_100[0] + (ulonglong)puVar7[2] * 4);
      local_150.w = *(float *)(local_100[0] + (ulonglong)puVar7[3] * 4);
      local_150.x = *(float *)(local_100[0] + (ulonglong)*puVar7 * 4);
      (*`public:_virtual_void___cdecl_rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>::calculate(rl4::ControlsInputInstance_const*___ptr64,rl4::JointsOutputInstance*___ptr64,unsigned_short)const___ptr64'
        ::__l2::separateTwistComponent[(int)pTVar9->swingTwistAxis])(&local_130,&local_150);
      fVar10 = fVar4 / (local_130.y * local_130.y + local_130.x * local_130.x +
                       local_130.w * local_130.w + local_130.z * local_130.z);
      fVar22 = local_130.w * fVar10;
      local_164 = (float)((uint)(local_130.y * fVar10) ^ uVar16);
      local_160 = (float)((uint)(local_130.z * fVar10) ^ uVar16);
      local_168 = (float)((uint)(fVar10 * local_130.x) ^ uVar16);
      local_140 = (local_150.w * local_168 + fVar22 * local_150.x + local_150.y * local_160) -
                  local_150.z * local_164;
      local_13c = (local_150.w * local_164 + fVar22 * local_150.y + local_150.z * local_168) -
                  local_150.x * local_160;
      uVar8 = 0;
      pfVar3 = (pTVar9->swingBlendWeights)._Mypair._Myval2._Myfirst;
      local_138 = (local_150.w * local_160 + fVar22 * local_150.z + local_150.x * local_164) -
                  local_150.y * local_168;
      fVar10 = ((fVar22 * local_150.w - local_150.x * local_168) - local_150.y * local_164) -
               local_150.z * local_160;
      fVar21 = fVar4 / (local_13c * local_13c + local_140 * local_140 +
                       fVar10 * fVar10 + local_138 * local_138);
      local_140 = fVar21 * local_140;
      local_13c = fVar21 * local_13c;
      local_138 = fVar21 * local_138;
      fVar21 = fVar21 * fVar10;
      if ((longlong)(pTVar9->swingBlendWeights)._Mypair._Myval2._Mylast - (longlong)pfVar3 >> 2 != 0
         ) {
        puVar7 = (pTVar9->swingOutputIndices)._Mypair._Myval2._Myfirst;
        do {
          fVar10 = pfVar3[uVar8];
          fVar11 = fVar21;
          fVar18 = fVar4;
          if (fVar21 < 0.0) {
            fVar11 = (float)((uint)fVar21 ^ __xmm_80000000800000008000000080000000);
            fVar18 = __real_bf800000;
          }
          fVar17 = fVar4 - fVar10;
          if (fVar11 <= __real_3f7ffffe) {
            fVar11 = acosf(fVar11);
            fVar12 = sinf(fVar11);
            fVar17 = sinf(fVar11 * fVar17);
            fVar17 = fVar17 * (fVar4 / fVar12);
            fVar10 = sinf(fVar11 * fVar10);
            fVar10 = fVar10 * (fVar4 / fVar12);
          }
          lVar6 = local_f0[0];
          fVar13 = (float)((uint)(local_140 * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar12 = (float)((uint)(local_13c * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar11 = (float)((uint)(local_138 * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar18 = fVar10 * fVar18 + fVar17 * fVar21;
          fVar14 = (fVar13 * fVar22 + fVar18 * local_168 + fVar11 * local_164) - fVar12 * local_160;
          fVar15 = (fVar12 * fVar22 + fVar18 * local_164 + fVar13 * local_160) - fVar11 * local_168;
          fVar10 = (fVar11 * fVar22 + fVar18 * local_160 + fVar12 * local_168) - fVar13 * local_164;
          fVar19 = ((fVar18 * fVar22 - fVar13 * local_168) - fVar12 * local_164) -
                   fVar11 * local_160;
          fVar17 = fVar15 + fVar15;
          local_134 = fVar14 * fVar17;
          fVar11 = fVar10 + fVar10;
          fVar13 = fVar19 * (fVar14 + fVar14);
          fVar20 = fVar19 * fVar17 + fVar14 * fVar11;
          fVar10 = fVar10 * fVar11;
          fVar12 = (float)((uint)fVar20 & __xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar18 = fVar4 - fVar12;
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar18 = SQRT(fVar18) *
                   (((((((__real_3bda90c5 - fVar12 * ___real_3aa57a2c) * fVar12 - ___real_3c8bfc66)
                        * fVar12 + ___real_3cfd10f8) * fVar12 - ___real_3d4d8392) * fVar12 +
                     ___real_3db63a9e) * fVar12 - ___real_3e5bbfca) * fVar12 + fVar5);
          if (fVar20 < 0.0) {
            fVar18 = fVar18 - fVar5;
          }
          else {
            fVar18 = fVar5 - fVar18;
          }
          if (fVar4 <= fVar12) {
            fVar13 = fVar13 + fVar15 * fVar11;
            fVar12 = 0.0;
          }
          else {
            fVar12 = atan2f(fVar19 * fVar11 - local_134,fVar4 - (fVar10 + fVar15 * fVar17));
            fVar13 = fVar13 - fVar15 * fVar11;
            fVar10 = fVar15 * fVar17;
          }
          fVar10 = atan2f(fVar13,fVar4 - (fVar10 + fVar14 * (fVar14 + fVar14)));
          uVar8 = uVar8 + 1;
          *(float *)(lVar6 + (ulonglong)*puVar7 * 4) = fVar10;
          *(float *)(lVar6 + (ulonglong)puVar7[1] * 4) = fVar18;
          puVar1 = puVar7 + 2;
          puVar7 = puVar7 + 4;
          *(float *)(lVar6 + (ulonglong)*puVar1 * 4) = fVar12;
        } while (uVar8 < (ulonglong)
                         ((longlong)(pTVar9->swingBlendWeights)._Mypair._Myval2._Mylast -
                          (longlong)pfVar3 >> 2));
      }
    }
    uVar16 = __xmm_80000000800000008000000080000000;
    puVar7 = (pTVar9->twistInputIndices)._Mypair._Myval2._Myfirst;
    if ((puVar7 != (pTVar9->twistInputIndices)._Mypair._Myval2._Mylast) &&
       ((pTVar9->swingInputIndices)._Mypair._Myval2._Myfirst ==
        (pTVar9->swingInputIndices)._Mypair._Myval2._Mylast)) {
      local_120.y = *(float *)(local_100[0] + (ulonglong)puVar7[1] * 4);
      local_120.z = *(float *)(local_100[0] + (ulonglong)puVar7[2] * 4);
      local_120.w = *(float *)(local_100[0] + (ulonglong)puVar7[3] * 4);
      local_120.x = *(float *)(local_100[0] + (ulonglong)*puVar7 * 4);
      (*`public:_virtual_void___cdecl_rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>::calculate(rl4::ControlsInputInstance_const*___ptr64,rl4::JointsOutputInstance*___ptr64,unsigned_short)const___ptr64'
        ::__l2::separateTwistComponent[(int)pTVar9->twistTwistAxis])(&local_110,&local_120);
      local_168 = local_110.x;
      local_160 = local_110.z;
      local_164 = local_110.y;
      fVar22 = local_110.w;
    }
    pfVar3 = (pTVar9->twistBlendWeights)._Mypair._Myval2._Myfirst;
    uVar8 = 0;
    if ((longlong)(pTVar9->twistBlendWeights)._Mypair._Myval2._Mylast - (longlong)pfVar3 >> 2 != 0)
    {
      puVar7 = (pTVar9->twistOutputIndices)._Mypair._Myval2._Myfirst;
      do {
        fVar10 = pfVar3[uVar8];
        fVar21 = fVar22;
        fVar11 = fVar4;
        if (fVar22 < 0.0) {
          fVar21 = (float)((uint)fVar22 ^ uVar16);
          fVar11 = __real_bf800000;
        }
        fVar18 = fVar4 - fVar10;
        if (fVar21 <= __real_3f7ffffe) {
          fVar21 = acosf(fVar21);
          fVar17 = sinf(fVar21);
          fVar18 = sinf(fVar18 * fVar21);
          fVar18 = fVar18 * (fVar4 / fVar17);
          fVar10 = sinf(fVar10 * fVar21);
          fVar10 = fVar10 * (fVar4 / fVar17);
        }
        lVar6 = local_f0[0];
        fVar12 = local_168 * fVar18;
        fVar19 = local_164 * fVar18;
        fVar21 = local_160 * fVar18;
        fVar14 = fVar11 * fVar10 + fVar22 * fVar18;
        fVar18 = fVar19 + fVar19;
        fVar13 = fVar14 * (fVar12 + fVar12);
        fVar10 = fVar21 + fVar21;
        fVar15 = fVar14 * fVar18 + fVar12 * fVar10;
        fVar21 = fVar21 * fVar10;
        fVar17 = (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar11 = fVar4 - fVar17;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar11 = SQRT(fVar11) *
                 (((((((__real_3bda90c5 - fVar17 * ___real_3aa57a2c) * fVar17 - ___real_3c8bfc66) *
                      fVar17 + ___real_3cfd10f8) * fVar17 - ___real_3d4d8392) * fVar17 +
                   ___real_3db63a9e) * fVar17 - ___real_3e5bbfca) * fVar17 + fVar5);
        if (fVar15 < 0.0) {
          fVar11 = fVar11 - fVar5;
        }
        else {
          fVar11 = fVar5 - fVar11;
        }
        if (fVar4 <= fVar17) {
          fVar17 = 0.0;
          fVar13 = fVar13 + fVar19 * fVar10;
        }
        else {
          fVar17 = atan2f(fVar14 * fVar10 - fVar12 * fVar18,fVar4 - (fVar21 + fVar19 * fVar18));
          fVar13 = fVar13 - fVar19 * fVar10;
          fVar21 = fVar19 * fVar18;
        }
        fVar10 = atan2f(fVar13,fVar4 - (fVar21 + fVar12 * (fVar12 + fVar12)));
        uVar16 = __xmm_80000000800000008000000080000000;
        uVar8 = uVar8 + 1;
        *(float *)(lVar6 + (ulonglong)*puVar7 * 4) = fVar10;
        *(float *)(lVar6 + (ulonglong)puVar7[1] * 4) = fVar11;
        puVar1 = puVar7 + 2;
        puVar7 = puVar7 + 4;
        *(float *)(lVar6 + (ulonglong)*puVar1 * 4) = fVar17;
      } while (uVar8 < (ulonglong)
                       ((longlong)(pTVar9->twistBlendWeights)._Mypair._Myval2._Mylast -
                        (longlong)pfVar3 >> 2));
    }
    uVar16 = __xmm_80000000800000008000000080000000;
  }
  __xmm_80000000800000008000000080000000 = uVar16;
  return;
}

// calculate @ 14c57a990

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::calculate(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
            *this,ControlsInputInstance *param_1,JointsOutputInstance *param_2,ushort param_3,
           ushort param_4)

{
  return;
}

// load @ 14c57a9a0

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::load(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
       *this,BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *param_1)

{
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  *this_00;
  undefined1 *puVar1;
  uint local_res8 [2];
  
  this_00 = *(ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
              **)param_1;
  local_res8[0] = 0;
  puVar1 = &this_00->stream->field_0x10;
  (**(code **)(*(longlong *)puVar1 + 8))(puVar1,local_res8,4);
  terse::
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  ::
  processElements<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>_>
            (this_00,&this->setups,
             (ulonglong)
             (local_res8[0] >> 0x18 | (local_res8[0] & 0xff0000) >> 8 |
              (local_res8[0] & 0xff00) << 8 | local_res8[0] << 0x18));
  return;
}

// save @ 14c57aa00

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::save(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
       *this,BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *param_1)

{
  terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
  operator()<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)param_1,&this->setups);
  return;
}

// `scalar_deleting_destructor' @ 14c57aa20

void * __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::_scalar_deleting_destructor_
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
           *this,uint param_1)

{
  longlong *plVar1;
  undefined4 in_register_00000014;
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),
                               (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                                *)plVar1 != &this->instanceFactory));
    *(undefined8 *)&(this->instanceFactory).field_0x38 = 0;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&this->setups);
  JointsEvaluator::~JointsEvaluator((JointsEvaluator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_><pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>,0> @ 14c57aaa0

vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
* __thiscall
std::
vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
::
vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_><pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>,0>
          (vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
           *this,ulong64 param_1,TwistSwingSetup *param_2,
          PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *param_3)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  TwistSwingSetup *pTVar2;
  
  (this->_Mypair)._Myval1 = *param_3;
  (this->_Mypair)._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  (this->_Mypair)._Myval2._Mylast = (TwistSwingSetup *)0x0;
  (this->_Mypair)._Myval2._Myend = (TwistSwingSetup *)0x0;
  if (param_1 != 0) {
    if (0x13b13b13b13b13b < param_1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar1 = (this->_Mypair)._Myval1;
    pTVar2 = (TwistSwingSetup *)(**(code **)(*(longlong *)PVar1 + 8))(PVar1,param_1 * 0xd0,8);
    (this->_Mypair)._Myval2._Myfirst = pTVar2;
    (this->_Mypair)._Myval2._Mylast = pTVar2;
    (this->_Mypair)._Myval2._Myend = pTVar2 + param_1;
    pTVar2 = (this->_Mypair)._Myval2._Myfirst;
    do {
      pTVar2->twistTwistAxis = param_2->twistTwistAxis;
      vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
      vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
                (&pTVar2->twistBlendWeights,&param_2->twistBlendWeights);
      vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
      vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                (&pTVar2->twistOutputIndices,&param_2->twistOutputIndices);
      vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
      vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                (&pTVar2->twistInputIndices,&param_2->twistInputIndices);
      pTVar2->swingTwistAxis = param_2->swingTwistAxis;
      vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
      vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
                (&pTVar2->swingBlendWeights,&param_2->swingBlendWeights);
      vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
      vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                (&pTVar2->swingOutputIndices,&param_2->swingOutputIndices);
      vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
      vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                (&pTVar2->swingInputIndices,&param_2->swingInputIndices);
      pTVar2 = pTVar2 + 1;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
    (this->_Mypair)._Myval2._Mylast = pTVar2;
  }
  return this;
}

// operator()<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&> @ 14c57abe0

void __thiscall
terse::Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
operator()<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&>
          (Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  _Value_init_tag local_res8 [8];
  uint local_res18 [4];
  
  pBVar3 = this->impl;
  uVar18 = 0;
  local_res18[0] = 0;
  plVar16 = (longlong *)(*(longlong *)&pBVar3->field_0x10 + 0x10);
  (**(code **)(*plVar16 + 8))(plVar16,local_res18,4);
  uVar5 = local_res18[0] >> 0x18;
  uVar6 = (local_res18[0] & 0xff0000) >> 8;
  uVar7 = local_res18[0] & 0xff00;
  uVar8 = local_res18[0] << 0x18;
  local_res18[0] = uVar5 | uVar6 | uVar7 << 8 | uVar8;
  uVar17 = (ulonglong)local_res18[0];
  if (local_res18[0] != 0) {
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    _Resize<std::_Value_init_tag>(param_1,(ulonglong)local_res18[0],local_res8);
    plVar16 = (longlong *)(*(longlong *)&pBVar3->field_0x10 + 0x10);
    (**(code **)(*plVar16 + 8))(plVar16,(param_1->_Mypair)._Myval2._Myfirst,uVar17 * 2);
    uVar15 = uVar17 & 0xfffffffffffffff8;
    if ((((uVar5 & 0xfffffff8) != 0 || uVar6 != 0) || uVar7 != 0) || uVar8 != 0) {
      do {
        puVar4 = (param_1->_Mypair)._Myval2._Myfirst;
        puVar1 = puVar4 + uVar18;
        uVar2 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        uVar11 = puVar1[4];
        uVar12 = puVar1[5];
        uVar13 = puVar1[6];
        uVar14 = puVar1[7];
        puVar4 = puVar4 + uVar18;
        uVar18 = uVar18 + 8;
        *puVar4 = *puVar1 >> 8 | *puVar1 << 8;
        puVar4[1] = uVar2 >> 8 | uVar2 << 8;
        puVar4[2] = uVar9 >> 8 | uVar9 << 8;
        puVar4[3] = uVar10 >> 8 | uVar10 << 8;
        puVar4[4] = uVar11 >> 8 | uVar11 << 8;
        puVar4[5] = uVar12 >> 8 | uVar12 * 0x100;
        puVar4[6] = uVar13 >> 8 | uVar13 * 0x100;
        puVar4[7] = uVar14 >> 8 | uVar14 * 0x100;
      } while (uVar18 < uVar15);
    }
    for (; uVar15 < uVar17; uVar15 = uVar15 + 1) {
      puVar1 = (param_1->_Mypair)._Myval2._Myfirst + uVar15;
      uVar2 = *puVar1;
      *puVar1 = uVar2 >> 8 | uVar2 << 8;
    }
  }
  return;
}

// operator()<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&> @ 14c57ad20

void __thiscall
terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
operator()<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&>
          (Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *param_1)

{
  BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar1;
  ushort *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  ushort *puVar6;
  undefined4 local_res8;
  
  pBVar1 = this->impl;
  uVar4 = (uint)((longlong)(param_1->_Mypair)._Myval2._Mylast -
                 (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 1);
  local_res8 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  plVar5 = (longlong *)(*(longlong *)&pBVar1->field_0x10 + 0x18);
  (**(code **)(*plVar5 + 8))(plVar5,&local_res8,4);
  puVar2 = (param_1->_Mypair)._Myval2._Mylast;
  for (puVar6 = (param_1->_Mypair)._Myval2._Myfirst; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    uVar4 = local_res8 >> 0x10;
    local_res8 = CONCAT22((short)uVar4,*puVar6 >> 8 | *puVar6 << 8);
    lVar3 = *(longlong *)(*(longlong *)pBVar1 + 0x10);
    (**(code **)(*(longlong *)(lVar3 + 0x18) + 8))(lVar3 + 0x18,&local_res8,2);
  }
  return;
}

// operator()<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_&> @ 14c57adc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
terse::Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
operator()<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_&>
          (Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_1)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  _Value_init_tag local_res8 [8];
  uint local_res18 [2];
  undefined1 local_18 [16];
  
  pBVar3 = this->impl;
  local_res18[0] = 0;
  plVar12 = (longlong *)(*(longlong *)&pBVar3->field_0x10 + 0x10);
  (**(code **)(*plVar12 + 8))(plVar12,local_res18,4);
  uVar5 = local_res18[0] >> 0x18;
  uVar6 = (local_res18[0] & 0xff0000) >> 8;
  uVar7 = local_res18[0] & 0xff00;
  uVar8 = local_res18[0] << 0x18;
  local_res18[0] = uVar5 | uVar6 | uVar7 << 8 | uVar8;
  uVar14 = (ulonglong)local_res18[0];
  if (local_res18[0] != 0) {
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    _Resize<std::_Value_init_tag>(param_1,(ulonglong)local_res18[0],local_res8);
    plVar12 = (longlong *)(*(longlong *)&pBVar3->field_0x10 + 0x10);
    (**(code **)(*plVar12 + 8))(plVar12,(param_1->_Mypair)._Myval2._Myfirst,uVar14 * 4);
    iVar10 = __isa_available;
    auVar9 = ___xmm_0c0d0e0f08090a0b0405060700010203;
    uVar15 = 0;
    uVar13 = uVar14 & 0xfffffffffffffffc;
    if ((((uVar5 & 0xfffffffc) != 0 || uVar6 != 0) || uVar7 != 0) || uVar8 != 0) {
      do {
        pfVar4 = (param_1->_Mypair)._Myval2._Myfirst;
        local_18 = *(undefined1 (*) [16])(pfVar4 + uVar15);
        pauVar1 = (undefined1 (*) [16])(pfVar4 + uVar15);
        lVar11 = 0;
        if (iVar10 < 2) {
          do {
            uVar5 = *(uint *)(local_18 + lVar11 * 4);
            *(uint *)(local_18 + lVar11 * 4) =
                 uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            lVar11 = lVar11 + 1;
          } while (lVar11 < 4);
        }
        else {
          local_18 = pshufb(local_18,auVar9);
        }
        uVar15 = uVar15 + 4;
        *pauVar1 = local_18;
      } while (uVar15 < uVar13);
    }
    for (; uVar13 < uVar14; uVar13 = uVar13 + 1) {
      pfVar4 = (param_1->_Mypair)._Myval2._Myfirst + uVar13;
      fVar2 = *pfVar4;
      *pfVar4 = (float)((uint)fVar2 >> 0x18 | ((uint)fVar2 & 0xff0000) >> 8 |
                        ((uint)fVar2 & 0xff00) << 8 | (int)fVar2 << 0x18);
    }
  }
  return;
}

// operator()<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_&> @ 14c57aed0

void __thiscall
terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
operator()<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_&>
          (Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_1)

{
  float fVar1;
  BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar2;
  float *pfVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  float *pfVar7;
  uint local_res8 [2];
  
  pBVar2 = this->impl;
  uVar5 = (uint)((longlong)(param_1->_Mypair)._Myval2._Mylast -
                 (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 2);
  local_res8[0] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  plVar6 = (longlong *)(*(longlong *)&pBVar2->field_0x10 + 0x18);
  (**(code **)(*plVar6 + 8))(plVar6,local_res8,4);
  pfVar3 = (param_1->_Mypair)._Myval2._Mylast;
  for (pfVar7 = (param_1->_Mypair)._Myval2._Myfirst; pfVar7 != pfVar3; pfVar7 = pfVar7 + 1) {
    fVar1 = *pfVar7;
    local_res8[0] =
         (uint)fVar1 >> 0x18 | ((uint)fVar1 & 0xff0000) >> 8 | ((uint)fVar1 & 0xff00) << 8 |
         (int)fVar1 << 0x18;
    lVar4 = *(longlong *)(*(longlong *)pBVar2 + 0x10);
    (**(code **)(*(longlong *)(lVar4 + 0x18) + 8))(lVar4 + 0x18,local_res8,4);
  }
  return;
}

// SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c57af70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  _Func_class<void,rl4::JointsEvaluator_*> *this_00;
  float *pfVar2;
  ushort *puVar3;
  longlong *plVar4;
  _Func_class<void,rl4::JointsEvaluator_*> *p_Var5;
  longlong lVar6;
  TwistSwingSetup *pTVar7;
  TwistSwingSetup *pTVar8;
  TwistSwingSetup *pTVar9;
  undefined8 *puVar10;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar11;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar16;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined1 auStack_228 [32];
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> local_208;
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  local_200;
  undefined1 local_1e0 [56];
  longlong *local_1a8;
  TwistSwingSetup local_1a0;
  _Func_class<void,rl4::JointsEvaluator_*> local_c8;
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> local_88;
  undefined **local_78;
  undefined **local_70;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  *(undefined8 *)((longlong)this + 0xd8) = 1;
  *(undefined1 *)((longlong)this + 0xe0) = 3;
  uVar15 = (ulonglong)rltests::twsw::optimized::setupCount;
  pTVar9 = rl4::TwistSwingSetup::TwistSwingSetup(&local_1a0,(MemoryResource *)PVar1);
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_208 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
              &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_208 = PVar1;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_><pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>,0>
            (&local_200,uVar15,pTVar9,&local_208);
  rl4::TwistSwingSetup::~TwistSwingSetup(&local_1a0);
  uVar13 = 0;
  lVar6 = (longlong)local_200._Mypair._Myval2._Mylast - (longlong)local_200._Mypair._Myval2._Myfirst
          >> 0x3f;
  uVar15 = uVar13;
  uVar19 = uVar13;
  if (((longlong)local_200._Mypair._Myval2._Mylast - (longlong)local_200._Mypair._Myval2._Myfirst) /
      0xd0 + lVar6 != lVar6) {
    do {
      pTVar9 = local_200._Mypair._Myval2._Myfirst;
      *(TwistAxis *)((longlong)&(local_200._Mypair._Myval2._Myfirst)->twistTwistAxis + uVar19) =
           rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((local_200._Mypair._Myval2._Myfirst)->twistBlendWeights)._Mypair._Myval1.
                  field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      *(TwistAxis *)((longlong)&pTVar9->swingTwistAxis + uVar19) =
           rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&(pTVar9->swingBlendWeights)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      uVar15 = uVar15 + 1;
      uVar13 = uVar13 + 0x20;
      uVar19 = uVar19 + 0xd0;
    } while (uVar15 < (ulonglong)
                      (((longlong)local_200._Mypair._Myval2._Mylast -
                       (longlong)local_200._Mypair._Myval2._Myfirst) / 0xd0));
  }
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar14 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if ((undefined **)((longlong)this + 0x10) != (undefined **)0x0) {
    ppuVar14 = (undefined **)((longlong)this + 0x10);
  }
  puVar10 = (undefined8 *)(**(code **)(*ppuVar14 + 8))(ppuVar14,0x68,8);
  pTVar8 = local_200._Mypair._Myval2._Myend;
  pTVar7 = local_200._Mypair._Myval2._Mylast;
  pTVar9 = local_200._Mypair._Myval2._Myfirst;
  local_1a8 = (longlong *)0x0;
  *puVar10 = &
             ___7__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  local_200._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  local_200._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  local_200._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)(puVar10 + 1) =
       local_200._Mypair._Myval1;
  puVar10[2] = pTVar9;
  puVar10[3] = pTVar7;
  puVar10[4] = pTVar8;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            ((function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)(puVar10 + 5),
             (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)local_1e0);
  if (local_1a8 != (longlong *)0x0) {
    (**(code **)(*local_1a8 + 0x20))(local_1a8,local_1a8 != (longlong *)local_1e0);
  }
  local_78 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  local_40 = &local_78;
  local_c8._Mystorage._Ptrs[7] = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  local_70 = ppuVar14;
  local_c8._Mystorage._Ptrs[7] =
       std::
       _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
       ::_Move(&local_78,&local_c8);
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
  }
  this_00 = (_Func_class<void,rl4::JointsEvaluator_*> *)((longlong)this + 0x90);
  PVar1 = *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)
           ((longlong)this + 0xd0);
  local_88 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0;
  *(undefined8 **)((longlong)this + 0xd0) = puVar10;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    plVar4 = *(longlong **)((longlong)this + 200);
    local_208 = PVar1;
    if (plVar4 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_208);
  }
  if (this_00 != &local_c8) {
    p_Var5 = *(_Func_class<void,rl4::JointsEvaluator_*> **)((longlong)this + 200);
    if (p_Var5 != (_Func_class<void,rl4::JointsEvaluator_*> *)0x0) {
      (*(code *)(p_Var5->_Mystorage)._Ptrs[0][4])
                (p_Var5,CONCAT71((int7)((ulonglong)&local_c8 >> 8),p_Var5 != this_00));
      *(undefined8 *)((longlong)this + 200) = 0;
    }
    std::_Func_class<void,rl4::JointsEvaluator_*>::_Reset_move(this_00,&local_c8);
  }
  if (local_88 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_208 = local_88;
    if (local_c8._Mystorage._Ptrs[7] == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_c8._Mystorage._Ptrs[7] + 0x10))
              (local_c8._Mystorage._Ptrs[7],&local_208);
  }
  if (local_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*local_c8._Mystorage._Ptrs[7] + 0x20))
              (local_c8._Mystorage._Ptrs[7],
               local_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)&local_c8)
    ;
  }
  pTVar7 = local_200._Mypair._Myval2._Mylast;
  pTVar9 = local_200._Mypair._Myval2._Myfirst;
  if (local_200._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; pTVar9 != pTVar7; pTVar9 = pTVar9 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(pTVar9);
    }
    (**(code **)(*(longlong *)local_200._Mypair._Myval1 + 0x10))
              (local_200._Mypair._Myval1,local_200._Mypair._Myval2._Myfirst,
               (((longlong)local_200._Mypair._Myval2._Myend -
                (longlong)local_200._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
  }
  return;
}

// SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_> @ 14c57b4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::
SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
          (void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  _Func_class<void,rl4::JointsEvaluator_*> *this_00;
  float *pfVar2;
  ushort *puVar3;
  longlong *plVar4;
  _Func_class<void,rl4::JointsEvaluator_*> *p_Var5;
  longlong lVar6;
  TwistSwingSetup *pTVar7;
  TwistSwingSetup *pTVar8;
  TwistSwingSetup *pTVar9;
  undefined8 *puVar10;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar11;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar16;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined1 auStack_228 [32];
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> local_208;
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  local_200;
  undefined1 local_1e0 [56];
  longlong *local_1a8;
  TwistSwingSetup local_1a0;
  _Func_class<void,rl4::JointsEvaluator_*> local_c8;
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> local_88;
  undefined **local_78;
  undefined **local_70;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 4;
  uVar13 = 0;
  *(undefined8 *)((longlong)this + 0xd8) = 0;
  uVar15 = (ulonglong)rltests::twsw::optimized::setupCount;
  pTVar9 = rl4::TwistSwingSetup::TwistSwingSetup(&local_1a0,(MemoryResource *)PVar1);
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_208 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
              &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_208 = PVar1;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_><pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>,0>
            (&local_200,uVar15,pTVar9,&local_208);
  rl4::TwistSwingSetup::~TwistSwingSetup(&local_1a0);
  lVar6 = (longlong)local_200._Mypair._Myval2._Mylast - (longlong)local_200._Mypair._Myval2._Myfirst
          >> 0x3f;
  uVar15 = uVar13;
  uVar19 = uVar13;
  if (((longlong)local_200._Mypair._Myval2._Mylast - (longlong)local_200._Mypair._Myval2._Myfirst) /
      0xd0 + lVar6 != lVar6) {
    do {
      pTVar9 = local_200._Mypair._Myval2._Myfirst;
      *(TwistAxis *)((longlong)&(local_200._Mypair._Myval2._Myfirst)->twistTwistAxis + uVar19) =
           rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((local_200._Mypair._Myval2._Myfirst)->twistBlendWeights)._Mypair._Myval1.
                  field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      *(TwistAxis *)((longlong)&pTVar9->swingTwistAxis + uVar19) =
           rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&(pTVar9->swingBlendWeights)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      uVar15 = uVar15 + 1;
      uVar13 = uVar13 + 0x20;
      uVar19 = uVar19 + 0xd0;
    } while (uVar15 < (ulonglong)
                      (((longlong)local_200._Mypair._Myval2._Mylast -
                       (longlong)local_200._Mypair._Myval2._Myfirst) / 0xd0));
  }
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar14 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if ((undefined **)((longlong)this + 0x10) != (undefined **)0x0) {
    ppuVar14 = (undefined **)((longlong)this + 0x10);
  }
  puVar10 = (undefined8 *)(**(code **)(*ppuVar14 + 8))(ppuVar14,0x68,8);
  pTVar8 = local_200._Mypair._Myval2._Myend;
  pTVar7 = local_200._Mypair._Myval2._Mylast;
  pTVar9 = local_200._Mypair._Myval2._Myfirst;
  local_1a8 = (longlong *)0x0;
  *puVar10 = &
             ___7__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___rl4__6B_
  ;
  local_200._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  local_200._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  local_200._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)(puVar10 + 1) =
       local_200._Mypair._Myval1;
  puVar10[2] = pTVar9;
  puVar10[3] = pTVar7;
  puVar10[4] = pTVar8;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            ((function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)(puVar10 + 5),
             (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)local_1e0);
  if (local_1a8 != (longlong *)0x0) {
    (**(code **)(*local_1a8 + 0x20))(local_1a8,local_1a8 != (longlong *)local_1e0);
  }
  local_78 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  local_40 = &local_78;
  local_c8._Mystorage._Ptrs[7] = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  local_70 = ppuVar14;
  local_c8._Mystorage._Ptrs[7] =
       std::
       _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
       ::_Move(&local_78,&local_c8);
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
  }
  this_00 = (_Func_class<void,rl4::JointsEvaluator_*> *)((longlong)this + 0x90);
  PVar1 = *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)
           ((longlong)this + 0xd0);
  local_88 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0;
  *(undefined8 **)((longlong)this + 0xd0) = puVar10;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    plVar4 = *(longlong **)((longlong)this + 200);
    local_208 = PVar1;
    if (plVar4 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_208);
  }
  if (this_00 != &local_c8) {
    p_Var5 = *(_Func_class<void,rl4::JointsEvaluator_*> **)((longlong)this + 200);
    if (p_Var5 != (_Func_class<void,rl4::JointsEvaluator_*> *)0x0) {
      (*(code *)(p_Var5->_Mystorage)._Ptrs[0][4])
                (p_Var5,CONCAT71((int7)((ulonglong)&local_c8 >> 8),p_Var5 != this_00));
      *(undefined8 *)((longlong)this + 200) = 0;
    }
    std::_Func_class<void,rl4::JointsEvaluator_*>::_Reset_move(this_00,&local_c8);
  }
  if (local_88 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_208 = local_88;
    if (local_c8._Mystorage._Ptrs[7] == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_c8._Mystorage._Ptrs[7] + 0x10))
              (local_c8._Mystorage._Ptrs[7],&local_208);
  }
  if (local_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*local_c8._Mystorage._Ptrs[7] + 0x20))
              (local_c8._Mystorage._Ptrs[7],
               local_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)&local_c8)
    ;
  }
  pTVar7 = local_200._Mypair._Myval2._Mylast;
  pTVar9 = local_200._Mypair._Myval2._Myfirst;
  if (local_200._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; pTVar9 != pTVar7; pTVar9 = pTVar9 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(pTVar9);
    }
    (**(code **)(*(longlong *)local_200._Mypair._Myval1 + 0x10))
              (local_200._Mypair._Myval1,local_200._Mypair._Myval2._Myfirst,
               (((longlong)local_200._Mypair._Myval2._Myend -
                (longlong)local_200._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
  }
  return;
}

// SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c57ba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  _Func_class<void,rl4::JointsEvaluator_*> *this_00;
  float *pfVar2;
  ushort *puVar3;
  longlong *plVar4;
  _Func_class<void,rl4::JointsEvaluator_*> *p_Var5;
  longlong lVar6;
  TwistSwingSetup *pTVar7;
  TwistSwingSetup *pTVar8;
  TwistSwingSetup *pTVar9;
  undefined8 *puVar10;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar11;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar16;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined1 auStack_228 [32];
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> local_208;
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  local_200;
  undefined1 local_1e0 [56];
  longlong *local_1a8;
  TwistSwingSetup local_1a0;
  _Func_class<void,rl4::JointsEvaluator_*> local_c8;
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> local_88;
  undefined **local_78;
  undefined **local_70;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  *(undefined8 *)((longlong)this + 0xd8) = 1;
  *(undefined1 *)((longlong)this + 0xe0) = 3;
  uVar15 = (ulonglong)rltests::twsw::optimized::setupCount;
  pTVar9 = rl4::TwistSwingSetup::TwistSwingSetup(&local_1a0,(MemoryResource *)PVar1);
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_208 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
              &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_208 = PVar1;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_><pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>,0>
            (&local_200,uVar15,pTVar9,&local_208);
  rl4::TwistSwingSetup::~TwistSwingSetup(&local_1a0);
  uVar13 = 0;
  lVar6 = (longlong)local_200._Mypair._Myval2._Mylast - (longlong)local_200._Mypair._Myval2._Myfirst
          >> 0x3f;
  uVar15 = uVar13;
  uVar19 = uVar13;
  if (((longlong)local_200._Mypair._Myval2._Mylast - (longlong)local_200._Mypair._Myval2._Myfirst) /
      0xd0 + lVar6 != lVar6) {
    do {
      pTVar9 = local_200._Mypair._Myval2._Myfirst;
      *(TwistAxis *)((longlong)&(local_200._Mypair._Myval2._Myfirst)->twistTwistAxis + uVar19) =
           rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((local_200._Mypair._Myval2._Myfirst)->twistBlendWeights)._Mypair._Myval1.
                  field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      *(TwistAxis *)((longlong)&pTVar9->swingTwistAxis + uVar19) =
           rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&(pTVar9->swingBlendWeights)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      uVar15 = uVar15 + 1;
      uVar13 = uVar13 + 0x20;
      uVar19 = uVar19 + 0xd0;
    } while (uVar15 < (ulonglong)
                      (((longlong)local_200._Mypair._Myval2._Mylast -
                       (longlong)local_200._Mypair._Myval2._Myfirst) / 0xd0));
  }
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar14 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if ((undefined **)((longlong)this + 0x10) != (undefined **)0x0) {
    ppuVar14 = (undefined **)((longlong)this + 0x10);
  }
  puVar10 = (undefined8 *)(**(code **)(*ppuVar14 + 8))(ppuVar14,0x68,8);
  pTVar8 = local_200._Mypair._Myval2._Myend;
  pTVar7 = local_200._Mypair._Myval2._Mylast;
  pTVar9 = local_200._Mypair._Myval2._Myfirst;
  local_1a8 = (longlong *)0x0;
  *puVar10 = &
             ___7__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  local_200._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  local_200._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  local_200._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)(puVar10 + 1) =
       local_200._Mypair._Myval1;
  puVar10[2] = pTVar9;
  puVar10[3] = pTVar7;
  puVar10[4] = pTVar8;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            ((function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)(puVar10 + 5),
             (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)local_1e0);
  if (local_1a8 != (longlong *)0x0) {
    (**(code **)(*local_1a8 + 0x20))(local_1a8,local_1a8 != (longlong *)local_1e0);
  }
  local_78 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  local_40 = &local_78;
  local_c8._Mystorage._Ptrs[7] = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  local_70 = ppuVar14;
  local_c8._Mystorage._Ptrs[7] =
       std::
       _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
       ::_Move(&local_78,&local_c8);
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
  }
  this_00 = (_Func_class<void,rl4::JointsEvaluator_*> *)((longlong)this + 0x90);
  PVar1 = *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)
           ((longlong)this + 0xd0);
  local_88 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0;
  *(undefined8 **)((longlong)this + 0xd0) = puVar10;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    plVar4 = *(longlong **)((longlong)this + 200);
    local_208 = PVar1;
    if (plVar4 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_208);
  }
  if (this_00 != &local_c8) {
    p_Var5 = *(_Func_class<void,rl4::JointsEvaluator_*> **)((longlong)this + 200);
    if (p_Var5 != (_Func_class<void,rl4::JointsEvaluator_*> *)0x0) {
      (*(code *)(p_Var5->_Mystorage)._Ptrs[0][4])
                (p_Var5,CONCAT71((int7)((ulonglong)&local_c8 >> 8),p_Var5 != this_00));
      *(undefined8 *)((longlong)this + 200) = 0;
    }
    std::_Func_class<void,rl4::JointsEvaluator_*>::_Reset_move(this_00,&local_c8);
  }
  if (local_88 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_208 = local_88;
    if (local_c8._Mystorage._Ptrs[7] == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_c8._Mystorage._Ptrs[7] + 0x10))
              (local_c8._Mystorage._Ptrs[7],&local_208);
  }
  if (local_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*local_c8._Mystorage._Ptrs[7] + 0x20))
              (local_c8._Mystorage._Ptrs[7],
               local_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)&local_c8)
    ;
  }
  pTVar7 = local_200._Mypair._Myval2._Mylast;
  pTVar9 = local_200._Mypair._Myval2._Myfirst;
  if (local_200._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; pTVar9 != pTVar7; pTVar9 = pTVar9 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(pTVar9);
    }
    (**(code **)(*(longlong *)local_200._Mypair._Myval1 + 0x10))
              (local_200._Mypair._Myval1,local_200._Mypair._Myval2._Myfirst,
               (((longlong)local_200._Mypair._Myval2._Myend -
                (longlong)local_200._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
  }
  return;
}

// SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_> @ 14c57bfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::
SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
          (void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  _Func_class<void,rl4::JointsEvaluator_*> *this_00;
  float *pfVar2;
  ushort *puVar3;
  longlong *plVar4;
  _Func_class<void,rl4::JointsEvaluator_*> *p_Var5;
  longlong lVar6;
  TwistSwingSetup *pTVar7;
  TwistSwingSetup *pTVar8;
  TwistSwingSetup *pTVar9;
  undefined8 *puVar10;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar11;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar16;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined1 auStack_228 [32];
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> local_208;
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  local_200;
  undefined1 local_1e0 [56];
  longlong *local_1a8;
  TwistSwingSetup local_1a0;
  _Func_class<void,rl4::JointsEvaluator_*> local_c8;
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> local_88;
  undefined **local_78;
  undefined **local_70;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 4;
  uVar13 = 0;
  *(undefined8 *)((longlong)this + 0xd8) = 0;
  uVar15 = (ulonglong)rltests::twsw::optimized::setupCount;
  pTVar9 = rl4::TwistSwingSetup::TwistSwingSetup(&local_1a0,(MemoryResource *)PVar1);
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_208 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
              &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_208 = PVar1;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_><pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>,0>
            (&local_200,uVar15,pTVar9,&local_208);
  rl4::TwistSwingSetup::~TwistSwingSetup(&local_1a0);
  lVar6 = (longlong)local_200._Mypair._Myval2._Mylast - (longlong)local_200._Mypair._Myval2._Myfirst
          >> 0x3f;
  uVar15 = uVar13;
  uVar19 = uVar13;
  if (((longlong)local_200._Mypair._Myval2._Mylast - (longlong)local_200._Mypair._Myval2._Myfirst) /
      0xd0 + lVar6 != lVar6) {
    do {
      pTVar9 = local_200._Mypair._Myval2._Myfirst;
      *(TwistAxis *)((longlong)&(local_200._Mypair._Myval2._Myfirst)->twistTwistAxis + uVar19) =
           rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((local_200._Mypair._Myval2._Myfirst)->twistBlendWeights)._Mypair._Myval1.
                  field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->twistInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      *(TwistAxis *)((longlong)&pTVar9->swingTwistAxis + uVar19) =
           rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[uVar15];
      pvVar11 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&(pTVar9->swingBlendWeights)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
                (&((rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst)->_Mypair).
                  _Myval1.field_0x0 + uVar13);
      if (pvVar11 != pvVar16) {
        pfVar2 = (pvVar16->_Mypair)._Myval2._Myfirst;
        std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
        _Assign_counted_range<float_*>
                  (pvVar11,pfVar2,
                   (longlong)(pvVar16->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2);
      }
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingOutputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + uVar13);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval1.field_0x0 + uVar13);
      pvVar12 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&(pTVar9->swingInputIndices)._Mypair._Myval1.field_0x0 + uVar19);
      if (pvVar12 != pvVar17) {
        puVar3 = (pvVar17->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  (pvVar12,puVar3,
                   (longlong)(pvVar17->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      uVar15 = uVar15 + 1;
      uVar13 = uVar13 + 0x20;
      uVar19 = uVar19 + 0xd0;
    } while (uVar15 < (ulonglong)
                      (((longlong)local_200._Mypair._Myval2._Mylast -
                       (longlong)local_200._Mypair._Myval2._Myfirst) / 0xd0));
  }
  if ((*piVar18 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar14 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if ((undefined **)((longlong)this + 0x10) != (undefined **)0x0) {
    ppuVar14 = (undefined **)((longlong)this + 0x10);
  }
  puVar10 = (undefined8 *)(**(code **)(*ppuVar14 + 8))(ppuVar14,0x68,8);
  pTVar8 = local_200._Mypair._Myval2._Myend;
  pTVar7 = local_200._Mypair._Myval2._Mylast;
  pTVar9 = local_200._Mypair._Myval2._Myfirst;
  local_1a8 = (longlong *)0x0;
  *puVar10 = &
             ___7__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__6B_
  ;
  local_200._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  local_200._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  local_200._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)(puVar10 + 1) =
       local_200._Mypair._Myval1;
  puVar10[2] = pTVar9;
  puVar10[3] = pTVar7;
  puVar10[4] = pTVar8;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            ((function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)(puVar10 + 5),
             (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)local_1e0);
  if (local_1a8 != (longlong *)0x0) {
    (**(code **)(*local_1a8 + 0x20))(local_1a8,local_1a8 != (longlong *)local_1e0);
  }
  local_78 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  local_40 = &local_78;
  local_c8._Mystorage._Ptrs[7] = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  local_70 = ppuVar14;
  local_c8._Mystorage._Ptrs[7] =
       std::
       _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
       ::_Move(&local_78,&local_c8);
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
  }
  this_00 = (_Func_class<void,rl4::JointsEvaluator_*> *)((longlong)this + 0x90);
  PVar1 = *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)
           ((longlong)this + 0xd0);
  local_88 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0;
  *(undefined8 **)((longlong)this + 0xd0) = puVar10;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    plVar4 = *(longlong **)((longlong)this + 200);
    local_208 = PVar1;
    if (plVar4 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_208);
  }
  if (this_00 != &local_c8) {
    p_Var5 = *(_Func_class<void,rl4::JointsEvaluator_*> **)((longlong)this + 200);
    if (p_Var5 != (_Func_class<void,rl4::JointsEvaluator_*> *)0x0) {
      (*(code *)(p_Var5->_Mystorage)._Ptrs[0][4])
                (p_Var5,CONCAT71((int7)((ulonglong)&local_c8 >> 8),p_Var5 != this_00));
      *(undefined8 *)((longlong)this + 200) = 0;
    }
    std::_Func_class<void,rl4::JointsEvaluator_*>::_Reset_move(this_00,&local_c8);
  }
  if (local_88 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_208 = local_88;
    if (local_c8._Mystorage._Ptrs[7] == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_c8._Mystorage._Ptrs[7] + 0x10))
              (local_c8._Mystorage._Ptrs[7],&local_208);
  }
  if (local_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*local_c8._Mystorage._Ptrs[7] + 0x20))
              (local_c8._Mystorage._Ptrs[7],
               local_c8._Mystorage._Ptrs[7] != (_Func_base<void,rl4::JointsEvaluator_*> *)&local_c8)
    ;
  }
  pTVar7 = local_200._Mypair._Myval2._Mylast;
  pTVar9 = local_200._Mypair._Myval2._Myfirst;
  if (local_200._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; pTVar9 != pTVar7; pTVar9 = pTVar9 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(pTVar9);
    }
    (**(code **)(*(longlong *)local_200._Mypair._Myval1 + 0x10))
              (local_200._Mypair._Myval1,local_200._Mypair._Myval2._Myfirst,
               (((longlong)local_200._Mypair._Myval2._Myend -
                (longlong)local_200._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
  }
  return;
}

// _Resize<std::_Value_init_tag> @ 14c57c510

void __thiscall
std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
_Resize<std::_Value_init_tag>
          (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *this,
          ulong64 param_1,_Value_init_tag *param_2)

{
  float *pfVar1;
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  pfVar4 = (this->_Mypair)._Myval2._Mylast;
  pfVar1 = (this->_Mypair)._Myval2._Myfirst;
  uVar9 = (longlong)pfVar4 - (longlong)pfVar1 >> 2;
  if (param_1 < uVar9) {
    (this->_Mypair)._Myval2._Mylast = pfVar1 + param_1;
  }
  else if (uVar9 < param_1) {
    uVar5 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar1 >> 2;
    if (uVar5 < param_1) {
      if (0x3fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
        _Xlength();
      }
      uVar7 = 0x3fffffffffffffff;
      if ((uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) &&
         (uVar7 = uVar5 + (uVar5 >> 1), uVar7 < param_1)) {
        uVar7 = param_1;
      }
      PVar2 = (this->_Mypair)._Myval1;
      pfVar4 = (float *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar7 * 4,8);
      if (param_1 - uVar9 != 0) {
        memset(pfVar4 + uVar9,0,(param_1 - uVar9) * 4);
      }
      pfVar3 = (this->_Mypair)._Myval2._Mylast;
      pfVar1 = pfVar4;
      for (pfVar6 = (this->_Mypair)._Myval2._Myfirst; pfVar6 != pfVar3; pfVar6 = pfVar6 + 1) {
        *pfVar1 = *pfVar6;
        pfVar1 = pfVar1 + 1;
      }
      pfVar1 = (this->_Mypair)._Myval2._Myfirst;
      if (pfVar1 != (float *)0x0) {
        PVar2 = (this->_Mypair)._Myval1;
        (**(code **)(*(longlong *)PVar2 + 0x10))
                  (PVar2,pfVar1,
                   (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar1 & 0xfffffffffffffffc,
                   8);
      }
      (this->_Mypair)._Myval2._Myfirst = pfVar4;
      (this->_Mypair)._Myval2._Mylast = pfVar4 + param_1;
      (this->_Mypair)._Myval2._Myend = pfVar4 + uVar7;
    }
    else {
      lVar8 = param_1 - uVar9;
      if (lVar8 != 0) {
        memset(pfVar4,0,lVar8 * 4);
        pfVar4 = pfVar4 + lVar8;
      }
      (this->_Mypair)._Myval2._Mylast = pfVar4;
    }
  }
  return;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>_> @ 14c57c690

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>_> @ 14c57c6a0

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>_> @ 14c57c6b0

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>_> @ 14c57c6c0

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_> @ 14c57c6d0

TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
* __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
           *this,vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
                 *param_1,
          function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
          *param_2,MemoryResource *param_3)

{
  TwistSwingSetup *pTVar1;
  TwistSwingSetup *pTVar2;
  TwistSwingSetup *pTVar3;
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  *pfVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  pTVar1 = (param_1->_Mypair)._Myval2._Myend;
  pTVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  (param_1->_Mypair)._Myval2._Myend = (TwistSwingSetup *)0x0;
  pTVar3 = (param_1->_Mypair)._Myval2._Mylast;
  (param_1->_Mypair)._Myval2._Mylast = (TwistSwingSetup *)0x0;
  (param_1->_Mypair)._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  (this->setups)._Mypair._Myval1 = (param_1->_Mypair)._Myval1;
  (this->setups)._Mypair._Myval2._Myfirst = pTVar2;
  (this->setups)._Mypair._Myval2._Mylast = pTVar3;
  (this->setups)._Mypair._Myval2._Myend = pTVar1;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            (&this->instanceFactory,param_2);
  pfVar4 = *(function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
             **)&param_2->field_0x38;
  if (pfVar4 != (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                 *)0x0) {
    (**(code **)(*(longlong *)pfVar4 + 0x20))(pfVar4,pfVar4 != param_2);
    *(undefined8 *)&param_2->field_0x38 = 0;
  }
  return this;
}

// TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_> @ 14c57c750

TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
* __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
           *this,vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
                 *param_1,
          function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
          *param_2,MemoryResource *param_3)

{
  TwistSwingSetup *pTVar1;
  TwistSwingSetup *pTVar2;
  TwistSwingSetup *pTVar3;
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  *pfVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  pTVar1 = (param_1->_Mypair)._Myval2._Myend;
  pTVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  (param_1->_Mypair)._Myval2._Myend = (TwistSwingSetup *)0x0;
  pTVar3 = (param_1->_Mypair)._Myval2._Mylast;
  (param_1->_Mypair)._Myval2._Mylast = (TwistSwingSetup *)0x0;
  (param_1->_Mypair)._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  (this->setups)._Mypair._Myval1 = (param_1->_Mypair)._Myval1;
  (this->setups)._Mypair._Myval2._Myfirst = pTVar2;
  (this->setups)._Mypair._Myval2._Mylast = pTVar3;
  (this->setups)._Mypair._Myval2._Myend = pTVar1;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            (&this->instanceFactory,param_2);
  pfVar4 = *(function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
             **)&param_2->field_0x38;
  if (pfVar4 != (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                 *)0x0) {
    (**(code **)(*(longlong *)pfVar4 + 0x20))(pfVar4,pfVar4 != param_2);
    *(undefined8 *)&param_2->field_0x38 = 0;
  }
  return this;
}

// TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter> @ 14c57c7d0

TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
* __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
           *this,vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
                 *param_1,
          function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
          *param_2,MemoryResource *param_3)

{
  TwistSwingSetup *pTVar1;
  TwistSwingSetup *pTVar2;
  TwistSwingSetup *pTVar3;
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  *pfVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__6B_
  ;
  pTVar1 = (param_1->_Mypair)._Myval2._Myend;
  pTVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  (param_1->_Mypair)._Myval2._Myend = (TwistSwingSetup *)0x0;
  pTVar3 = (param_1->_Mypair)._Myval2._Mylast;
  (param_1->_Mypair)._Myval2._Mylast = (TwistSwingSetup *)0x0;
  (param_1->_Mypair)._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  (this->setups)._Mypair._Myval1 = (param_1->_Mypair)._Myval1;
  (this->setups)._Mypair._Myval2._Myfirst = pTVar2;
  (this->setups)._Mypair._Myval2._Mylast = pTVar3;
  (this->setups)._Mypair._Myval2._Myend = pTVar1;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            (&this->instanceFactory,param_2);
  pfVar4 = *(function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
             **)&param_2->field_0x38;
  if (pfVar4 != (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                 *)0x0) {
    (**(code **)(*(longlong *)pfVar4 + 0x20))(pfVar4,pfVar4 != param_2);
    *(undefined8 *)&param_2->field_0x38 = 0;
  }
  return this;
}

// vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> @ 14c57c850

vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> * __thiscall
std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
          (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *this,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_1)

{
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  
  (this->_Mypair)._Myval1 = (param_1->_Mypair)._Myval1;
  (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
  (this->_Mypair)._Myval2._Mylast = (float *)0x0;
  (this->_Mypair)._Myval2._Myend = (float *)0x0;
  uVar5 = (longlong)(param_1->_Mypair)._Myval2._Mylast -
          (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 2;
  if (uVar5 != 0) {
    if (0x3fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar1 = (this->_Mypair)._Myval1;
    pfVar2 = (float *)(**(code **)(*(longlong *)PVar1 + 8))(PVar1,uVar5 * 4,8);
    (this->_Mypair)._Myval2._Myfirst = pfVar2;
    (this->_Mypair)._Myval2._Mylast = pfVar2;
    (this->_Mypair)._Myval2._Myend = pfVar2 + uVar5;
    pfVar2 = (param_1->_Mypair)._Myval2._Mylast;
    pfVar4 = (this->_Mypair)._Myval2._Myfirst;
    for (pfVar3 = (param_1->_Mypair)._Myval2._Myfirst; pfVar3 != pfVar2; pfVar3 = pfVar3 + 1) {
      *pfVar4 = *pfVar3;
      pfVar4 = pfVar4 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = pfVar4;
  }
  return this;
}

// TwistSwingReader @ 14c57c920

TwistSwingReader * __thiscall
rltests::twsw::TwistSwingReader::TwistSwingReader(TwistSwingReader *this)

{
  int in_EDX;
  
  if (in_EDX != 0) {
    *(undefined1 **)&this->field_0x8 = &_vbtable__for__dna__RBFBehaviorReader__;
    *(undefined **)&this->field_0x18 = &_vbtable__for__dna__GeometryReader__;
    *(undefined **)&this->field_0x28 = &_vbtable__for__dna__MachineLearnedBehaviorReader__;
    *(undefined **)&this->field_0x38 = &_vbtable__for__dna__JointBehaviorMetadataReader__;
    *(undefined **)&this->field_0x48 = &_vbtable__for__dna__TwistSwingBehaviorReader__;
    *(undefined1 **)&this->field_0x70 = &_vbtable__for__dna__BehaviorReader__;
    *(undefined ***)&this->field_0x58 = &___7DefinitionReader_dna__6B_;
    *(undefined ***)&this->field_0x68 = &dna::BehaviorReader::_vftable__for__dna__BehaviorReader__;
    *(undefined ***)(&this->field_0x70 + *(int *)(*(longlong *)&this->field_0x70 + 4)) =
         &dna::BehaviorReader::_vftable__for__dna__DefinitionReader__;
  }
  *(undefined ***)this = &___7RBFBehaviorReader_dna__6B_;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &dna::RBFBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &dna::RBFBehaviorReader::_vftable__for__dna__BehaviorReader__;
  *(undefined ***)&this->field_0x10 = &dna::GeometryReader::_vftable__for__dna__GeometryReader__;
  *(undefined ***)(&this->field_0x18 + *(int *)(*(longlong *)&this->field_0x18 + 4)) =
       &dna::GeometryReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x20 =
       &dna::MachineLearnedBehaviorReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)(&this->field_0x28 + *(int *)(*(longlong *)&this->field_0x28 + 4)) =
       &dna::MachineLearnedBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x30 =
       &dna::JointBehaviorMetadataReader::_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)(&this->field_0x38 + *(int *)(*(longlong *)&this->field_0x38 + 4)) =
       &dna::JointBehaviorMetadataReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x40 =
       &dna::TwistSwingBehaviorReader::_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x48 + *(int *)(*(longlong *)&this->field_0x48 + 4)) =
       &dna::TwistSwingBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)this = &___7Reader_dna__6B_;
  *(undefined ***)&this->field_0x10 = &dna::Reader::_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this->field_0x20 =
       &dna::Reader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 =
       &dna::Reader::_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &dna::Reader::_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &dna::Reader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &dna::Reader::_vftable__for__dna__BehaviorReader__;
  *(undefined ***)this = &___7FakeReader_dna__6B_;
  *(undefined ***)&this->field_0x10 = &dna::FakeReader::_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this->field_0x20 =
       &dna::FakeReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 =
       &dna::FakeReader::_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 =
       &dna::FakeReader::_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &dna::FakeReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &dna::FakeReader::_vftable__for__dna__BehaviorReader__;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 4)) = 0;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 8)) = 0;
  *(undefined ***)this = &___7TwistSwingReader_twsw_rltests__6B_;
  *(undefined ***)&this->field_0x10 = &_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this->field_0x20 = &_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &_vftable__for__dna__BehaviorReader__;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 4)) = 0;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 8)) = 0;
  return this;
}

// ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c57cba0

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  longlong lVar1;
  longlong *plVar2;
  BehaviorReader *pBVar3;
  longlong local_res8;
  
  lVar1 = *(longlong *)((longlong)this + 0xd0);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)((longlong)this + 200);
    local_res8 = lVar1;
    if (plVar2 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
  }
  pBVar3 = *(BehaviorReader **)((longlong)this + 200);
  if (pBVar3 != (BehaviorReader *)0x0) {
    (**(code **)(*(longlong *)pBVar3 + 0x20))
              (pBVar3,pBVar3 != (BehaviorReader *)((longlong)this + 0x90));
    *(undefined8 *)((longlong)this + 200) = 0;
  }
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  return;
}

// ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_> @ 14c57cc40

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::
~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
          (void *this)

{
  longlong lVar1;
  longlong *plVar2;
  BehaviorReader *pBVar3;
  longlong local_res8;
  
  lVar1 = *(longlong *)((longlong)this + 0xd0);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)((longlong)this + 200);
    local_res8 = lVar1;
    if (plVar2 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
  }
  pBVar3 = *(BehaviorReader **)((longlong)this + 200);
  if (pBVar3 != (BehaviorReader *)0x0) {
    (**(code **)(*(longlong *)pBVar3 + 0x20))
              (pBVar3,pBVar3 != (BehaviorReader *)((longlong)this + 0x90));
    *(undefined8 *)((longlong)this + 200) = 0;
  }
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  return;
}

// ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c57cce0

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  longlong lVar1;
  longlong *plVar2;
  BehaviorReader *pBVar3;
  longlong local_res8;
  
  lVar1 = *(longlong *)((longlong)this + 0xd0);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)((longlong)this + 200);
    local_res8 = lVar1;
    if (plVar2 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
  }
  pBVar3 = *(BehaviorReader **)((longlong)this + 200);
  if (pBVar3 != (BehaviorReader *)0x0) {
    (**(code **)(*(longlong *)pBVar3 + 0x20))
              (pBVar3,pBVar3 != (BehaviorReader *)((longlong)this + 0x90));
    *(undefined8 *)((longlong)this + 200) = 0;
  }
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  return;
}

// ~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_> @ 14c57cd80

void __thiscall
`anonymous_namespace'::
TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::
~TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
          (void *this)

{
  longlong lVar1;
  longlong *plVar2;
  BehaviorReader *pBVar3;
  longlong local_res8;
  
  lVar1 = *(longlong *)((longlong)this + 0xd0);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)((longlong)this + 200);
    local_res8 = lVar1;
    if (plVar2 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
  }
  pBVar3 = *(BehaviorReader **)((longlong)this + 200);
  if (pBVar3 != (BehaviorReader *)0x0) {
    (**(code **)(*(longlong *)pBVar3 + 0x20))
              (pBVar3,pBVar3 != (BehaviorReader *)((longlong)this + 0x90));
    *(undefined8 *)((longlong)this + 200) = 0;
  }
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  return;
}

// `scalar_deleting_destructor' @ 14c57ce20

void * __thiscall
rltests::twsw::TwistSwingReader::_scalar_deleting_destructor_(TwistSwingReader *this,uint param_1)

{
  ~TwistSwingReader(this);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)&this->field_0x20);
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x20,0x78);
  }
  return &this[-1].field_0x20;
}

// GetSetUpCaseOrSuite @ 14c57ce80

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetSetUpCaseOrSuite @ 14c57cf20

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetSetUpCaseOrSuite @ 14c57cfc0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetSetUpCaseOrSuite @ 14c57d060

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c57d100

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c57d1a0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c57d240

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c57d2e0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// Register @ 14c57d380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::TwistSwingEvaluatorTest,testing::internal::TemplateSel<TwistSwingEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__TwistSwingEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
              ::dummy_,(_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c57d812;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c57d812;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c57d812;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c57d812;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c57d812;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c57d812;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c57d812:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c57d860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::TwistSwingEvaluatorTest,testing::internal::TemplateSel<TwistSwingEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  bool bVar7;
  TestFactoryBase *pTVar8;
  _func___cdecl_void *p_Var9;
  _func___cdecl_void *p_Var10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  size_t sVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  CodeLocation *pCVar16;
  char *******pppppppcVar17;
  undefined8 uVar18;
  void *pvVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  char *pcVar22;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1b8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar8 = ::operator_new(8);
  if (pTVar8 == (TestFactoryBase *)0x0) {
    pTVar8 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar8 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__TwistSwingEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
            ::GetSetUpCaseOrSuite((char *)pCVar16,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar11 = GetPrefixUntilComma(&local_168,param_4);
  pbVar11 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar11);
  if (0xf < (pbVar11->_Mypair)._Myval2._Myres) {
    pbVar11 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar11->_Mypair)._Myval2._Bx._Ptr;
  }
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  pbVar15 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_f8 = 0;
  uStack_f0 = 0;
  cVar1 = *param_1;
  sVar12 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar12);
  pcVar22 = "/";
  if (cVar1 == '\0') {
    pcVar22 = "";
  }
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar22);
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar13,param_3);
  uVar2 = (pbVar13->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar13->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar13,1,local_1b8,"/",1);
  }
  else {
    (pbVar13->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar14 = pbVar13;
    if (0xf < uVar2) {
      pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar13->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar13->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar13->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar13->_Mypair)._Myval2._Myres;
  (pbVar13->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar13->_Mypair)._Myval2._Mysize = 0;
  (pbVar13->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar15->_Mypair;
  if (0xf < (pbVar15->_Mypair)._Myval2._Myres) {
    pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar15->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar15 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar15,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar15->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar15->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar15->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar15->_Mypair)._Myval2._Myres;
  (pbVar15->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar15->_Mypair)._Myval2._Mysize = 0;
  (pbVar15->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar17 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar17 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar17,(char *)pbVar11,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c57dcff;
    }
    ::operator_delete(pppppppcVar17,uVar20);
  }
  uVar6 = _UNK_15076add8;
  uVar20 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar21 = uStack_110 + 1;
    uVar18 = local_128._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_128._Ptr + -8);
      uVar21 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c57dcff;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar20;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar21 = uStack_b0 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57dcff;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar20;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar21 = uStack_90 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57dcff;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar20;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar21 = uStack_f0 + 1;
    uVar18 = local_108._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_108._Ptr + -8);
      uVar21 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c57dcff;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar20;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar21 = uStack_70 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57dcff;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar20;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar20 = uStack_d0 + 1;
    pvVar19 = local_e8;
    if (0xfff < uVar20) {
      pvVar19 = *(void **)((longlong)local_e8 + -8);
      uVar20 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar19))) {
LAB_14c57dcff:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::TwistSwingEvaluatorTest,testing::internal::TemplateSel<TwistSwingEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c57dd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::TwistSwingEvaluatorTest,testing::internal::TemplateSel<TwistSwingEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  bool bVar7;
  TestFactoryBase *pTVar8;
  _func___cdecl_void *p_Var9;
  _func___cdecl_void *p_Var10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  size_t sVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  CodeLocation *pCVar16;
  char *******pppppppcVar17;
  undefined8 uVar18;
  void *pvVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  char *pcVar22;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1b8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar8 = ::operator_new(8);
  if (pTVar8 == (TestFactoryBase *)0x0) {
    pTVar8 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar8 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__TwistSwingEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
            ::GetSetUpCaseOrSuite((char *)pCVar16,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar11 = GetPrefixUntilComma(&local_168,param_4);
  pbVar11 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar11);
  if (0xf < (pbVar11->_Mypair)._Myval2._Myres) {
    pbVar11 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar11->_Mypair)._Myval2._Bx._Ptr;
  }
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  pbVar15 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_f8 = 0;
  uStack_f0 = 0;
  cVar1 = *param_1;
  sVar12 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar12);
  pcVar22 = "/";
  if (cVar1 == '\0') {
    pcVar22 = "";
  }
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar22);
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar13,param_3);
  uVar2 = (pbVar13->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar13->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar13,1,local_1b8,"/",1);
  }
  else {
    (pbVar13->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar14 = pbVar13;
    if (0xf < uVar2) {
      pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar13->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar13->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar13->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar13->_Mypair)._Myval2._Myres;
  (pbVar13->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar13->_Mypair)._Myval2._Mysize = 0;
  (pbVar13->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar15->_Mypair;
  if (0xf < (pbVar15->_Mypair)._Myval2._Myres) {
    pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar15->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar15 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar15,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar15->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar15->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar15->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar15->_Mypair)._Myval2._Myres;
  (pbVar15->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar15->_Mypair)._Myval2._Mysize = 0;
  (pbVar15->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar17 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar17 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar17,(char *)pbVar11,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c57e20f;
    }
    ::operator_delete(pppppppcVar17,uVar20);
  }
  uVar6 = _UNK_15076add8;
  uVar20 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar21 = uStack_110 + 1;
    uVar18 = local_128._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_128._Ptr + -8);
      uVar21 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c57e20f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar20;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar21 = uStack_b0 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57e20f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar20;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar21 = uStack_90 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57e20f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar20;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar21 = uStack_f0 + 1;
    uVar18 = local_108._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_108._Ptr + -8);
      uVar21 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c57e20f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar20;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar21 = uStack_70 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57e20f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar20;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar20 = uStack_d0 + 1;
    pvVar19 = local_e8;
    if (0xfff < uVar20) {
      pvVar19 = *(void **)((longlong)local_e8 + -8);
      uVar20 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar19))) {
LAB_14c57e20f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::TwistSwingEvaluatorTest,testing::internal::TemplateSel<TwistSwingEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c57e280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::TwistSwingEvaluatorTest,testing::internal::TemplateSel<TwistSwingEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  bool bVar7;
  TestFactoryBase *pTVar8;
  _func___cdecl_void *p_Var9;
  _func___cdecl_void *p_Var10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  size_t sVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  CodeLocation *pCVar16;
  char *******pppppppcVar17;
  undefined8 uVar18;
  void *pvVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  char *pcVar22;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1b8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar8 = ::operator_new(8);
  if (pTVar8 == (TestFactoryBase *)0x0) {
    pTVar8 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar8 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__TwistSwingEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<TwistSwingEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
            ::GetSetUpCaseOrSuite((char *)pCVar16,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar11 = GetPrefixUntilComma(&local_168,param_4);
  pbVar11 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar11);
  if (0xf < (pbVar11->_Mypair)._Myval2._Myres) {
    pbVar11 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar11->_Mypair)._Myval2._Bx._Ptr;
  }
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  pbVar15 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_f8 = 0;
  uStack_f0 = 0;
  cVar1 = *param_1;
  sVar12 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar12);
  pcVar22 = "/";
  if (cVar1 == '\0') {
    pcVar22 = "";
  }
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar22);
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar13,param_3);
  uVar2 = (pbVar13->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar13->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar13,1,local_1b8,"/",1);
  }
  else {
    (pbVar13->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar14 = pbVar13;
    if (0xf < uVar2) {
      pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar13->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar13->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar13->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar13->_Mypair)._Myval2._Myres;
  (pbVar13->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar13->_Mypair)._Myval2._Mysize = 0;
  (pbVar13->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar15->_Mypair;
  if (0xf < (pbVar15->_Mypair)._Myval2._Myres) {
    pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar15->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar15 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar15,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar15->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar15->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar15->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar15->_Mypair)._Myval2._Myres;
  (pbVar15->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar15->_Mypair)._Myval2._Mysize = 0;
  (pbVar15->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar17 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar17 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar17,(char *)pbVar11,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<TwistSwingEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c57e71f;
    }
    ::operator_delete(pppppppcVar17,uVar20);
  }
  uVar6 = _UNK_15076add8;
  uVar20 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar21 = uStack_110 + 1;
    uVar18 = local_128._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_128._Ptr + -8);
      uVar21 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c57e71f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar20;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar21 = uStack_b0 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57e71f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar20;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar21 = uStack_90 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57e71f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar20;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar21 = uStack_f0 + 1;
    uVar18 = local_108._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_108._Ptr + -8);
      uVar21 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c57e71f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar20;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar21 = uStack_70 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57e71f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar20;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar20 = uStack_d0 + 1;
    pvVar19 = local_e8;
    if (0xfff < uVar20) {
      pvVar19 = *(void **)((longlong)local_e8 + -8);
      uVar20 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar19))) {
LAB_14c57e71f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::TwistSwingEvaluatorTest,testing::internal::TemplateSel<TwistSwingEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// _Tidy @ 14c57e790

void __thiscall
std::
vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
::_Tidy(vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
        *this)

{
  TwistSwingSetup *pTVar1;
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar2;
  TwistSwingSetup *this_00;
  
  this_00 = (this->_Mypair)._Myval2._Myfirst;
  if (this_00 != (TwistSwingSetup *)0x0) {
    pTVar1 = (this->_Mypair)._Myval2._Mylast;
    for (; this_00 != pTVar1; this_00 = this_00 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(this_00);
    }
    PVar2 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,(this->_Mypair)._Myval2._Myfirst,
               (((longlong)(this->_Mypair)._Myval2._Myend -
                (longlong)(this->_Mypair)._Myval2._Myfirst) / 0xd0) * 0xd0,8);
    (this->_Mypair)._Myval2._Myfirst = (TwistSwingSetup *)0x0;
    (this->_Mypair)._Myval2._Mylast = (TwistSwingSetup *)0x0;
    (this->_Mypair)._Myval2._Myend = (TwistSwingSetup *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 1504510a0

void __cdecl
`pma::impl::
PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 1504510c0

void __cdecl
`pma::impl::
PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 1504510e0

void __cdecl
`pma::impl::
PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>
::
PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

