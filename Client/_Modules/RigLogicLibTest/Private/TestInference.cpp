// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 35

// `dynamic_initializer_for_'gtest_MLBInferenceTest_InferencePerLOD_registered_'' @ 141371890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_MLBInferenceTest_InferencePerLOD_registered___(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
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
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
            (local_78,&local_70,0);
  local_28 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7b;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  *(undefined8 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined2 *)(pcVar2 + 0x78) = s_C__Workspace_UnrealEngine_Engin._120_2_;
  pcVar2[0x7a] = s_C__Workspace_UnrealEngine_Engin[0x7a];
  pcVar2[0x7b] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar2;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007b;
  uStack_40 = _UNK_152873118;
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
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar2 + 0x70);
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar2 + 0x78);
  local_38 = 0x59;
  gtest_MLBInferenceTest_InferencePerLOD_registered_ =
       testing::internal::
       TypeParameterizedTest<`anonymous_namespace'::MLBInferenceTest,testing::internal::TemplateSel<MLBInferenceTest_InferencePerLOD_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_58,"MLBInferenceTest","InferencePerLOD",0,&local_70);
  if (0xf < uStack_40) {
    uVar4 = uStack_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = uStack_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) goto LAB_141371adf;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_58._Ptr = local_58._Ptr & 0xffffffffffffff00;
  local_48 = ___xmm_000000000000000f0000000000000000;
  uStack_40 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
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
LAB_141371adf:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// SetUp @ 14c593a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
::SetUp(void *this)

{
  unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
  *puVar1;
  MachineLearnedBehaviorReader *pMVar2;
  undefined1 auStack_98 [32];
  MachineLearnedBehaviorEvaluator *local_78 [2];
  undefined1 local_68 [64];
  MachineLearnedBehaviorEvaluator *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pMVar2 = (MachineLearnedBehaviorReader *)((longlong)this + 0x38);
  if (this == (void *)0xffffffffffffffe8) {
    pMVar2 = (MachineLearnedBehaviorReader *)0x0;
  }
  puVar1 = rl4::ml::cpu::
           Factory<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
           ::create((unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
                     *)local_68,pMVar2,(MemoryResource *)((longlong)this + 0x10));
  std::
  unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
  ::operator=<std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>,0>
            ((unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
              *)((longlong)this + 0x90),puVar1);
  if (local_28 != (MachineLearnedBehaviorEvaluator *)0x0) {
    local_78[0] = local_28;
    if ((longlong *)local_68._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_68._56_8_ + 0x10))(local_68._56_8_,local_78);
  }
  if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_68._56_8_ + 0x20))
              (local_68._56_8_,(undefined1 *)local_68._56_8_ != local_68);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c593ad0

void * __thiscall
`anonymous_namespace'::
MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// TestBody @ 14c593b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
::TestBody(MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
           *this)

{
  undefined1 *puVar1;
  void *_Dst;
  double dVar2;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  size_t _Size;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auStackY_1a8 [32];
  longlong *local_168;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_160;
  AssertHelper local_158 [2];
  AssertionResult local_148;
  void *local_138 [2];
  longlong local_128 [7];
  longlong *local_f0;
  longlong *local_e8;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(longlong *)&this->field_0xd0 != 0) {
    uVar12 = 0;
    local_158[0].data_ = (AssertHelperData *)this;
    ControlsFactory::getInstanceFactory
              ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
                *)local_88,0,rltests::ml::block4::unoptimized::rawControlCount,0,
               rltests::ml::block4::unoptimized::mlControlCount,0);
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
    puVar1 = &this->field_0x10;
    local_148.success_ = false;
    local_148._1_7_ = 0;
    local_148.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    local_160._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)puVar1;
    if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_88._56_8_ + 0x10))
              (local_88._56_8_,local_128,&local_148,&local_160);
    (**(code **)(*local_e8 + 0x28))(local_e8,local_138);
    uVar13 = (ulonglong)rltests::ml::block4::unoptimized::mlControlCount;
    _Dst = (void *)((longlong)local_138[0] +
                   (ulonglong)rltests::ml::block4::unoptimized::rawControlCount * 4);
    memmove(local_138[0],rltests::ml::block4::input::values._Mypair._Myval2._Myfirst,
            (longlong)rltests::ml::block4::input::values._Mypair._Myval2._Mylast -
            (longlong)rltests::ml::block4::input::values._Mypair._Myval2._Myfirst);
    (**(code **)(**(longlong **)&this->field_0xd0 + 8))
              (*(longlong **)&this->field_0xd0,local_d8,puVar1);
    dVar2 = __real_3f1a36e2e0000000;
    if (rltests::ml::block4::unoptimized::lodCount != 0) {
      local_160._Myval2 = local_160._Myval2 & 0xffffffff00000000;
      iVar6 = 0;
      do {
        uVar10 = 0;
        if (iVar6 == 0) {
          _Size = uVar13 * 4;
LAB_14c593c9a:
          memset(_Dst,0,_Size);
        }
        else {
          uVar11 = uVar13;
          if ((void *)((longlong)_Dst + uVar13 * 4) < _Dst) {
            uVar11 = uVar10;
          }
          if (uVar11 != 0) {
            _Size = uVar11 << 2;
            goto LAB_14c593c9a;
          }
        }
        (**(code **)(**(longlong **)&this->field_0xd0 + 0x20))
                  (*(longlong **)&this->field_0xd0,local_e8,local_98,uVar12);
        pvVar3 = rltests::ml::block4::output::valuesPerLOD._Mypair._Myval2._Myfirst;
        pfVar7 = rltests::ml::block4::output::valuesPerLOD._Mypair._Myval2._Myfirst[uVar12]._Mypair.
                 _Myval2._Myfirst;
        if ((longlong)
            rltests::ml::block4::output::valuesPerLOD._Mypair._Myval2._Myfirst[uVar12]._Mypair.
            _Myval2._Mylast - (longlong)pfVar7 >> 2 != 0) {
          do {
            testing::internal::DoubleNearPredFormat
                      (&local_148,"outputBuffer[i]","expected[i]","threshold",
                       (double)*(float *)((longlong)_Dst + uVar10 * 4),(double)pfVar7[uVar10],dVar2)
            ;
            uVar4._Mypair._Myval2 = local_148.message_._Mypair._Myval2;
            if (local_148.success_ == false) {
              pMVar5 = (Message *)testing::Message::Message((Message *)&local_160);
              if (local_148.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar8 = "";
              }
              else {
                pcVar8 = (char *)local_148.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_148.message_._Mypair._Myval2 + 0x18)) {
                  pcVar8 = *(char **)local_148.message_._Mypair._Myval2;
                }
              }
              this_00 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (local_158,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestInference.cpp"
                                   ,0x75,pcVar8);
              testing::internal::AssertHelper::operator=(this_00,pMVar5);
              testing::internal::AssertHelper::~AssertHelper(local_158);
              if (local_160._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar9 = (undefined8 *)
                         ((longlong)&(local_160._Myval2)->field_0x0 +
                         (longlong)*(int *)(*(longlong *)local_160._Myval2 + 4));
                (**(code **)*puVar9)(puVar9,1);
              }
              uVar4._Mypair._Myval2 = local_148.message_._Mypair._Myval2;
              if (local_148.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_148.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
              }
              if (local_98 != (longlong *)0x0) {
                local_168 = local_98;
                if (local_a0 == (longlong *)0x0) {
                  std::_Xbad_function_call();
                  return;
                }
                (**(code **)(*local_a0 + 0x10))(local_a0,&local_168);
              }
              if (local_a0 != (longlong *)0x0) {
                (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
                local_a0 = (longlong *)0x0;
              }
              if (local_e8 != (longlong *)0x0) {
                local_168 = local_e8;
                if (local_f0 == (longlong *)0x0) {
                  std::_Xbad_function_call();
                  return;
                }
                (**(code **)(*local_f0 + 0x10))(local_f0,&local_168);
              }
              if (local_f0 != (longlong *)0x0) {
                (**(code **)(*local_f0 + 0x20))(local_f0,local_f0 != local_128);
                local_f0 = (longlong *)0x0;
              }
              goto LAB_14c593f51;
            }
            if (local_148.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_148.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
            }
            pfVar7 = pvVar3[uVar12]._Mypair._Myval2._Myfirst;
            uVar10 = uVar10 + 1;
            this = (MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
                    *)local_158[0].data_;
          } while (uVar10 < (ulonglong)
                            ((longlong)pvVar3[uVar12]._Mypair._Myval2._Mylast - (longlong)pfVar7 >>
                            2));
        }
        uVar12 = uVar12 + 1;
        if (rltests::ml::block4::unoptimized::lodCount <= uVar12) break;
        iVar6 = (int)local_160._Myval2;
      } while( true );
    }
    if (local_98 != (longlong *)0x0) {
      local_168 = local_98;
      if (local_a0 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_a0 + 0x10))(local_a0,&local_168);
    }
    if (local_a0 != (longlong *)0x0) {
      (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
      local_a0 = (longlong *)0x0;
    }
    if (local_e8 != (longlong *)0x0) {
      local_168 = local_e8;
      if (local_f0 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_f0 + 0x10))(local_f0,&local_168);
    }
    if (local_f0 != (longlong *)0x0) {
      (**(code **)(*local_f0 + 0x20))(local_f0,local_f0 != local_128);
      local_f0 = (longlong *)0x0;
    }
LAB_14c593f51:
    if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_88._56_8_ + 0x20))
                (local_88._56_8_,(undefined1 *)local_88._56_8_ != local_88);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c594020

void * __thiscall
MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
::_scalar_deleting_destructor_
          (MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  ::`anonymous_namespace'::
  MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
  ::
  ~MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// CreateTest @ 14c594060

Test * __thiscall
testing::internal::
TestFactoryImpl<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0xd8);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::ml::block4::CanonicalReader::CanonicalReader
              ((CanonicalReader *)&this_00[1].gtest_flag_saver_);
    this_00[0xc].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__MLBInferenceTest_InferencePerLOD_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__std____6B_
    ;
    this_00[0xd]._padding_ = 0;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5940e0

void * __thiscall
testing::internal::
TestFactoryImpl<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// SetUp @ 14c594120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>::SetUp
          (void *this)

{
  unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
  *puVar1;
  MachineLearnedBehaviorReader *pMVar2;
  undefined1 auStack_98 [32];
  MachineLearnedBehaviorEvaluator *local_78 [2];
  undefined1 local_68 [64];
  MachineLearnedBehaviorEvaluator *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pMVar2 = (MachineLearnedBehaviorReader *)((longlong)this + 0x38);
  if (this == (void *)0xffffffffffffffe8) {
    pMVar2 = (MachineLearnedBehaviorReader *)0x0;
  }
  puVar1 = rl4::ml::cpu::Factory<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
           create((unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
                   *)local_68,pMVar2,(MemoryResource *)((longlong)this + 0x10));
  std::
  unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
  ::operator=<std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>,0>
            ((unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
              *)((longlong)this + 0x90),puVar1);
  if (local_28 != (MachineLearnedBehaviorEvaluator *)0x0) {
    local_78[0] = local_28;
    if ((longlong *)local_68._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_68._56_8_ + 0x10))(local_68._56_8_,local_78);
  }
  if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_68._56_8_ + 0x20))
              (local_68._56_8_,(undefined1 *)local_68._56_8_ != local_68);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5941d0

void * __thiscall
`anonymous_namespace'::
MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// TestBody @ 14c594210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
::TestBody(MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
           *this)

{
  undefined1 *puVar1;
  void *_Dst;
  double dVar2;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  size_t _Size;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auStackY_1a8 [32];
  longlong *local_168;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_160;
  AssertHelper local_158 [2];
  AssertionResult local_148;
  void *local_138 [2];
  longlong local_128 [7];
  longlong *local_f0;
  longlong *local_e8;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(longlong *)&this->field_0xd0 != 0) {
    uVar12 = 0;
    local_158[0].data_ = (AssertHelperData *)this;
    ControlsFactory::getInstanceFactory
              ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
                *)local_88,0,rltests::ml::block4::unoptimized::rawControlCount,0,
               rltests::ml::block4::unoptimized::mlControlCount,0);
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
    puVar1 = &this->field_0x10;
    local_148.success_ = false;
    local_148._1_7_ = 0;
    local_148.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    local_160._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)puVar1;
    if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_88._56_8_ + 0x10))
              (local_88._56_8_,local_128,&local_148,&local_160);
    (**(code **)(*local_e8 + 0x28))(local_e8,local_138);
    uVar13 = (ulonglong)rltests::ml::block4::unoptimized::mlControlCount;
    _Dst = (void *)((longlong)local_138[0] +
                   (ulonglong)rltests::ml::block4::unoptimized::rawControlCount * 4);
    memmove(local_138[0],rltests::ml::block4::input::values._Mypair._Myval2._Myfirst,
            (longlong)rltests::ml::block4::input::values._Mypair._Myval2._Mylast -
            (longlong)rltests::ml::block4::input::values._Mypair._Myval2._Myfirst);
    (**(code **)(**(longlong **)&this->field_0xd0 + 8))
              (*(longlong **)&this->field_0xd0,local_d8,puVar1);
    dVar2 = __real_3f1a36e2e0000000;
    if (rltests::ml::block4::unoptimized::lodCount != 0) {
      local_160._Myval2 = local_160._Myval2 & 0xffffffff00000000;
      iVar6 = 0;
      do {
        uVar10 = 0;
        if (iVar6 == 0) {
          _Size = uVar13 * 4;
LAB_14c59439a:
          memset(_Dst,0,_Size);
        }
        else {
          uVar11 = uVar13;
          if ((void *)((longlong)_Dst + uVar13 * 4) < _Dst) {
            uVar11 = uVar10;
          }
          if (uVar11 != 0) {
            _Size = uVar11 << 2;
            goto LAB_14c59439a;
          }
        }
        (**(code **)(**(longlong **)&this->field_0xd0 + 0x20))
                  (*(longlong **)&this->field_0xd0,local_e8,local_98,uVar12);
        pvVar3 = rltests::ml::block4::output::valuesPerLOD._Mypair._Myval2._Myfirst;
        pfVar7 = rltests::ml::block4::output::valuesPerLOD._Mypair._Myval2._Myfirst[uVar12]._Mypair.
                 _Myval2._Myfirst;
        if ((longlong)
            rltests::ml::block4::output::valuesPerLOD._Mypair._Myval2._Myfirst[uVar12]._Mypair.
            _Myval2._Mylast - (longlong)pfVar7 >> 2 != 0) {
          do {
            testing::internal::DoubleNearPredFormat
                      (&local_148,"outputBuffer[i]","expected[i]","threshold",
                       (double)*(float *)((longlong)_Dst + uVar10 * 4),(double)pfVar7[uVar10],dVar2)
            ;
            uVar4._Mypair._Myval2 = local_148.message_._Mypair._Myval2;
            if (local_148.success_ == false) {
              pMVar5 = (Message *)testing::Message::Message((Message *)&local_160);
              if (local_148.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar8 = "";
              }
              else {
                pcVar8 = (char *)local_148.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_148.message_._Mypair._Myval2 + 0x18)) {
                  pcVar8 = *(char **)local_148.message_._Mypair._Myval2;
                }
              }
              this_00 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (local_158,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestInference.cpp"
                                   ,0x75,pcVar8);
              testing::internal::AssertHelper::operator=(this_00,pMVar5);
              testing::internal::AssertHelper::~AssertHelper(local_158);
              if (local_160._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar9 = (undefined8 *)
                         ((longlong)&(local_160._Myval2)->field_0x0 +
                         (longlong)*(int *)(*(longlong *)local_160._Myval2 + 4));
                (**(code **)*puVar9)(puVar9,1);
              }
              uVar4._Mypair._Myval2 = local_148.message_._Mypair._Myval2;
              if (local_148.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_148.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
              }
              if (local_98 != (longlong *)0x0) {
                local_168 = local_98;
                if (local_a0 == (longlong *)0x0) {
                  std::_Xbad_function_call();
                  return;
                }
                (**(code **)(*local_a0 + 0x10))(local_a0,&local_168);
              }
              if (local_a0 != (longlong *)0x0) {
                (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
                local_a0 = (longlong *)0x0;
              }
              if (local_e8 != (longlong *)0x0) {
                local_168 = local_e8;
                if (local_f0 == (longlong *)0x0) {
                  std::_Xbad_function_call();
                  return;
                }
                (**(code **)(*local_f0 + 0x10))(local_f0,&local_168);
              }
              if (local_f0 != (longlong *)0x0) {
                (**(code **)(*local_f0 + 0x20))(local_f0,local_f0 != local_128);
                local_f0 = (longlong *)0x0;
              }
              goto LAB_14c594651;
            }
            if (local_148.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_148.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
            }
            pfVar7 = pvVar3[uVar12]._Mypair._Myval2._Myfirst;
            uVar10 = uVar10 + 1;
            this = (MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
                    *)local_158[0].data_;
          } while (uVar10 < (ulonglong)
                            ((longlong)pvVar3[uVar12]._Mypair._Myval2._Mylast - (longlong)pfVar7 >>
                            2));
        }
        uVar12 = uVar12 + 1;
        if (rltests::ml::block4::unoptimized::lodCount <= uVar12) break;
        iVar6 = (int)local_160._Myval2;
      } while( true );
    }
    if (local_98 != (longlong *)0x0) {
      local_168 = local_98;
      if (local_a0 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_a0 + 0x10))(local_a0,&local_168);
    }
    if (local_a0 != (longlong *)0x0) {
      (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
      local_a0 = (longlong *)0x0;
    }
    if (local_e8 != (longlong *)0x0) {
      local_168 = local_e8;
      if (local_f0 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_f0 + 0x10))(local_f0,&local_168);
    }
    if (local_f0 != (longlong *)0x0) {
      (**(code **)(*local_f0 + 0x20))(local_f0,local_f0 != local_128);
      local_f0 = (longlong *)0x0;
    }
LAB_14c594651:
    if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_88._56_8_ + 0x20))
                (local_88._56_8_,(undefined1 *)local_88._56_8_ != local_88);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c594720

void * __thiscall
MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
::_scalar_deleting_destructor_
          (MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
           *this,uint param_1)

{
  ::`anonymous_namespace'::
  MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>::
  ~MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// CreateTest @ 14c594760

Test * __thiscall
testing::internal::
TestFactoryImpl<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
::CreateTest(TestFactoryImpl<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0xd8);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::ml::block4::CanonicalReader::CanonicalReader
              ((CanonicalReader *)&this_00[1].gtest_flag_saver_);
    this_00[0xc].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__MLBInferenceTest_InferencePerLOD_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__std____6B_
    ;
    this_00[0xd]._padding_ = 0;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5947e0

void * __thiscall
testing::internal::
TestFactoryImpl<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator=<std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>,0> @ 14c594820

unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
* __thiscall
std::
unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
::operator=<std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>,0>
          (unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
           *this,unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
                 *param_1)

{
  MachineLearnedBehaviorEvaluator *pMVar1;
  MachineLearnedBehaviorEvaluator *pMVar2;
  longlong *plVar3;
  unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
  *puVar4;
  unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
  *extraout_RAX;
  MachineLearnedBehaviorEvaluator *local_res8;
  
  pMVar1 = (param_1->_Mypair)._Myval2;
  (param_1->_Mypair)._Myval2 = (MachineLearnedBehaviorEvaluator *)0x0;
  pMVar2 = (this->_Mypair)._Myval2;
  (this->_Mypair)._Myval2 = pMVar1;
  if (pMVar2 != (MachineLearnedBehaviorEvaluator *)0x0) {
    plVar3 = *(longlong **)&(this->_Mypair)._Myval1.field_0x38;
    local_res8 = pMVar2;
    if (plVar3 == (longlong *)0x0) {
      _Xbad_function_call();
      return extraout_RAX;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_res8);
  }
  if (this != param_1) {
    puVar4 = *(unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
               **)&(this->_Mypair)._Myval1.field_0x38;
    if (puVar4 != (unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
                   *)0x0) {
      (**(code **)(*(longlong *)&(puVar4->_Mypair)._Myval1 + 0x20))(puVar4,puVar4 != this);
      *(undefined8 *)&(this->_Mypair)._Myval1.field_0x38 = 0;
    }
    _Func_class<void,rl4::MachineLearnedBehaviorEvaluator_*>::_Reset_move
              ((_Func_class<void,rl4::MachineLearnedBehaviorEvaluator_*> *)this,
               (_Func_class<void,rl4::MachineLearnedBehaviorEvaluator_*> *)param_1);
  }
  return this;
}

// GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_> @ 14c5948c0

vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* __cdecl testing::internal::
          GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
                    (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                     *__return_storage_ptr__)

{
  Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
  local_res8;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
            (local_res8,__return_storage_ptr__,0);
  return __return_storage_ptr__;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_> @ 14c594900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
          (Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
           param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *param_2,int param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *this;
  undefined8 *puVar5;
  void *pvVar6;
  ulong64 uVar7;
  undefined1 auStackY_68 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_38;
  _Bxty local_30;
  ulong64 local_20;
  ulong64 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this = (Message *)testing::Message::Message((Message *)&local_38);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((this->ss_)._Mypair._Myval2)->field_0x10,param_3);
  testing::Message::GetString
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30);
  if (local_38._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)&(local_38._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_38._Myval2 + 4));
    (**(code **)*puVar5)(puVar5,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_30._8_8_;
    uVar4 = _UNK_15076add8;
    uVar7 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_20;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_18;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_20 = uVar7;
    uStack_18 = uVar4;
    local_30._Buf[0] = '\0';
  }
  if (0xf < uStack_18) {
    pvVar3 = (void *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
    uVar7 = uStack_18 + 1;
    pvVar6 = pvVar3;
    if (0xfff < uVar7) {
      pvVar6 = *(void **)((longlong)pvVar3 + -8);
      uVar7 = uStack_18 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar6,uVar7);
  }
  return;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_> @ 14c594a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
          (Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
           param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *param_2,int param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong64 uVar8;
  undefined1 auStackY_78 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_48;
  _Bxty local_40;
  ulong64 local_30;
  ulong64 uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pMVar5 = (Message *)testing::Message::Message((Message *)&local_48);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,param_3);
  testing::Message::GetString
            (pMVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  if (local_48._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_48._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_48._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_40._8_8_;
    uVar4 = _UNK_15076add8;
    uVar8 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_30;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_28;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_30 = uVar8;
    uStack_28 = uVar4;
    local_40._Buf[0] = '\0';
  }
  if (0xf < uStack_28) {
    pvVar3 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    uVar8 = uStack_28 + 1;
    pvVar7 = pvVar3;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar3 + -8);
      uVar8 = uStack_28 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  pMVar5 = (Message *)testing::Message::Message((Message *)&local_48);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,param_3 + 1);
  testing::Message::GetString
            (pMVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  if (local_48._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_48._Mypair._Myval2 + 4) +
             (longlong)local_48._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_40._8_8_;
    uVar4 = _UNK_15076add8;
    uVar8 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_30;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_28;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_30 = uVar8;
    uStack_28 = uVar4;
    local_40._Buf[0] = '\0';
  }
  if (0xf < uStack_28) {
    pvVar3 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    uVar8 = uStack_28 + 1;
    pvVar7 = pvVar3;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar3 + -8);
      uVar8 = uStack_28 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  return;
}

// GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_> @ 14c594c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 6;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_<type>;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = DAT_1528703b4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = '\0';
  return __return_storage_ptr__;
}

// GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_> @ 14c594ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 6;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_<type>;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = DAT_1528703b4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = '\0';
  return __return_storage_ptr__;
}

// _Resize<std::_Value_init_tag> @ 14c594ce0

void __thiscall
std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>::
_Resize<std::_Value_init_tag>
          (vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *this
          ,ulong64 param_1,_Value_init_tag *param_2)

{
  uint *puVar1;
  PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource> PVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  puVar4 = (this->_Mypair)._Myval2._Mylast;
  puVar1 = (this->_Mypair)._Myval2._Myfirst;
  uVar9 = (longlong)puVar4 - (longlong)puVar1 >> 2;
  if (param_1 < uVar9) {
    (this->_Mypair)._Myval2._Mylast = puVar1 + param_1;
  }
  else if (uVar9 < param_1) {
    uVar5 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar1 >> 2;
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
      puVar4 = (uint *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar7 * 4,8);
      if (param_1 - uVar9 != 0) {
        memset(puVar4 + uVar9,0,(param_1 - uVar9) * 4);
      }
      puVar3 = (this->_Mypair)._Myval2._Mylast;
      puVar1 = puVar4;
      for (puVar6 = (this->_Mypair)._Myval2._Myfirst; puVar6 != puVar3; puVar6 = puVar6 + 1) {
        *puVar1 = *puVar6;
        puVar1 = puVar1 + 1;
      }
      puVar1 = (this->_Mypair)._Myval2._Myfirst;
      if (puVar1 != (uint *)0x0) {
        PVar2 = (this->_Mypair)._Myval1;
        (**(code **)(*(longlong *)PVar2 + 0x10))
                  (PVar2,puVar1,
                   (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar1 & 0xfffffffffffffffc,
                   8);
      }
      (this->_Mypair)._Myval2._Myfirst = puVar4;
      (this->_Mypair)._Myval2._Mylast = puVar4 + param_1;
      (this->_Mypair)._Myval2._Myend = puVar4 + uVar7;
    }
    else {
      lVar8 = param_1 - uVar9;
      if (lVar8 != 0) {
        memset(puVar4,0,lVar8 * 4);
        puVar4 = puVar4 + lVar8;
      }
      (this->_Mypair)._Myval2._Mylast = puVar4;
    }
  }
  return;
}

// dispatch<rl4::ml::cpu::WeightMatrix<float>_&,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_&,enum_dna::ActivationFunction_&> @ 14c594e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
terse::Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
dispatch<rl4::ml::cpu::WeightMatrix<float>_&,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_&,enum_dna::ActivationFunction_&>
          (Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,WeightMatrix<float> *param_1,
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_2,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_3,
          ActivationFunction *param_4)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  float fVar3;
  ActivationFunction AVar4;
  BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar5;
  BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  _Value_init_tag local_res8 [8];
  uint local_res10 [2];
  undefined1 local_48 [16];
  
  pBVar5 = this->impl;
  pBVar6 = *(BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> **)
            &pBVar5->field_0x0;
  lVar13 = *(longlong *)(*(longlong *)pBVar6 + 0x10);
  (**(code **)(*(longlong *)(lVar13 + 0x10) + 8))(lVar13 + 0x10,param_1,4);
  uVar2 = (param_1->original).rows;
  (param_1->original).rows =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  lVar13 = *(longlong *)(*(longlong *)pBVar6 + 0x10);
  (**(code **)(*(longlong *)(lVar13 + 0x10) + 8))(lVar13 + 0x10,&(param_1->original).cols,4);
  uVar2 = (param_1->original).cols;
  (param_1->original).cols =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  pBVar6 = *(BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> **)
            &pBVar5->field_0x0;
  lVar13 = *(longlong *)(*(longlong *)pBVar6 + 0x10);
  (**(code **)(*(longlong *)(lVar13 + 0x10) + 8))(lVar13 + 0x10,&param_1->padded,4);
  uVar2 = (param_1->padded).rows;
  (param_1->padded).rows =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  lVar13 = *(longlong *)(*(longlong *)pBVar6 + 0x10);
  (**(code **)(*(longlong *)(lVar13 + 0x10) + 8))(lVar13 + 0x10,&(param_1->padded).cols,4);
  uVar2 = (param_1->padded).cols;
  (param_1->padded).cols =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  dispatch<rl4::PaddedBlockView_&>
            ((Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)pBVar5,&param_1->rows);
  dispatch<rl4::PaddedBlockView_&>
            ((Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)pBVar5,&param_1->cols);
  dispatch<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&>
            ((Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)pBVar5,&param_1->values);
  dispatch<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&>
            (this,param_2);
  pBVar5 = this->impl;
  local_res10[0] = 0;
  plVar14 = (longlong *)(*(longlong *)&pBVar5->field_0x10 + 0x10);
  (**(code **)(*plVar14 + 8))(plVar14,local_res10,4);
  uVar2 = local_res10[0] >> 0x18;
  uVar8 = (local_res10[0] & 0xff0000) >> 8;
  uVar9 = local_res10[0] & 0xff00;
  uVar10 = local_res10[0] << 0x18;
  local_res10[0] = uVar2 | uVar8 | uVar9 << 8 | uVar10;
  uVar16 = (ulonglong)local_res10[0];
  if (local_res10[0] != 0) {
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    _Resize<std::_Value_init_tag>(param_3,(ulonglong)local_res10[0],local_res8);
    plVar14 = (longlong *)(*(longlong *)&pBVar5->field_0x10 + 0x10);
    (**(code **)(*plVar14 + 8))(plVar14,(param_3->_Mypair)._Myval2._Myfirst,uVar16 * 4);
    iVar12 = __isa_available;
    auVar11 = ___xmm_0c0d0e0f08090a0b0405060700010203;
    uVar17 = 0;
    uVar15 = uVar16 & 0xfffffffffffffffc;
    if ((((uVar2 & 0xfffffffc) != 0 || uVar8 != 0) || uVar9 != 0) || uVar10 != 0) {
      do {
        pfVar7 = (param_3->_Mypair)._Myval2._Myfirst;
        local_48 = *(undefined1 (*) [16])(pfVar7 + uVar17);
        pauVar1 = (undefined1 (*) [16])(pfVar7 + uVar17);
        lVar13 = 0;
        if (iVar12 < 2) {
          do {
            uVar2 = *(uint *)(local_48 + lVar13 * 4);
            *(uint *)(local_48 + lVar13 * 4) =
                 uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
            lVar13 = lVar13 + 1;
            auVar18 = local_48;
          } while (lVar13 < 4);
        }
        else {
          auVar18 = pshufb(local_48,auVar11);
        }
        uVar17 = uVar17 + 4;
        *pauVar1 = auVar18;
      } while (uVar17 < uVar15);
    }
    for (; uVar15 < uVar16; uVar15 = uVar15 + 1) {
      pfVar7 = (param_3->_Mypair)._Myval2._Myfirst + uVar15;
      fVar3 = *pfVar7;
      *pfVar7 = (float)((uint)fVar3 >> 0x18 | ((uint)fVar3 & 0xff0000) >> 8 |
                        ((uint)fVar3 & 0xff00) << 8 | (int)fVar3 << 0x18);
    }
  }
  lVar13 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar13 + 0x10) + 8))(lVar13 + 0x10,param_4,4);
  AVar4 = *param_4;
  *param_4 = AVar4 >> 0x18 | (AVar4 & 0xff0000) >> 8 | (AVar4 & 0xff00) << 8 | AVar4 << 0x18;
  return;
}

// dispatch<rl4::ml::cpu::WeightMatrix<float>_&,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_&,enum_dna::ActivationFunction_&> @ 14c595080

void __thiscall
terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
dispatch<rl4::ml::cpu::WeightMatrix<float>_&,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_&,enum_dna::ActivationFunction_&>
          (Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,WeightMatrix<float> *param_1,
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_2,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_3,
          ActivationFunction *param_4)

{
  float fVar1;
  ActivationFunction AVar2;
  BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar3;
  BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar4;
  longlong lVar5;
  float *pfVar6;
  ActivationFunction *pAVar7;
  uint uVar8;
  longlong *plVar9;
  float *pfVar10;
  uint local_res8 [2];
  
  pBVar3 = this->impl;
  uVar8 = (param_1->original).rows;
  local_res8[0] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  pBVar4 = *(BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> **)
            &pBVar3->field_0x0;
  lVar5 = *(longlong *)(*(longlong *)pBVar4 + 0x10);
  (**(code **)(*(longlong *)(lVar5 + 0x18) + 8))(lVar5 + 0x18,local_res8,4);
  uVar8 = (param_1->original).cols;
  local_res8[0] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  lVar5 = *(longlong *)(*(longlong *)pBVar4 + 0x10);
  (**(code **)(*(longlong *)(lVar5 + 0x18) + 8))(lVar5 + 0x18,local_res8,4);
  uVar8 = (param_1->padded).rows;
  pBVar4 = *(BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> **)
            &pBVar3->field_0x0;
  local_res8[0] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  lVar5 = *(longlong *)(*(longlong *)pBVar4 + 0x10);
  (**(code **)(*(longlong *)(lVar5 + 0x18) + 8))(lVar5 + 0x18,local_res8,4);
  uVar8 = (param_1->padded).cols;
  local_res8[0] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  lVar5 = *(longlong *)(*(longlong *)pBVar4 + 0x10);
  (**(code **)(*(longlong *)(lVar5 + 0x18) + 8))(lVar5 + 0x18,local_res8,4);
  dispatch<rl4::PaddedBlockView_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)pBVar3,&param_1->rows);
  dispatch<rl4::PaddedBlockView_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)pBVar3,&param_1->cols);
  dispatch<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)pBVar3,&param_1->values);
  dispatch<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&>
            (this,param_2);
  pBVar3 = this->impl;
  uVar8 = (uint)((longlong)(param_3->_Mypair)._Myval2._Mylast -
                 (longlong)(param_3->_Mypair)._Myval2._Myfirst >> 2);
  local_res8[0] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  plVar9 = (longlong *)(*(longlong *)&pBVar3->field_0x10 + 0x18);
  (**(code **)(*plVar9 + 8))(plVar9,local_res8,4);
  pfVar6 = (param_3->_Mypair)._Myval2._Mylast;
  pAVar7 = param_4;
  for (pfVar10 = (param_3->_Mypair)._Myval2._Myfirst; pfVar10 != pfVar6; pfVar10 = pfVar10 + 1) {
    fVar1 = *pfVar10;
    local_res8[0] =
         (uint)fVar1 >> 0x18 | ((uint)fVar1 & 0xff0000) >> 8 | ((uint)fVar1 & 0xff00) << 8 |
         (int)fVar1 << 0x18;
    lVar5 = *(longlong *)(*(longlong *)pBVar3 + 0x10);
    param_4 = pAVar7;
    (**(code **)(*(longlong *)(lVar5 + 0x18) + 8))(lVar5 + 0x18,local_res8,4);
    pAVar7 = param_4;
  }
  param_4._4_4_ = (undefined4)((ulonglong)pAVar7 >> 0x20);
  AVar2 = *pAVar7;
  param_4._0_4_ = AVar2 >> 0x18 | (AVar2 & 0xff0000) >> 8 | (AVar2 & 0xff00) << 8 | AVar2 << 0x18;
  lVar5 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar5 + 0x18) + 8))(lVar5 + 0x18,&param_4,4);
  return;
}

// dispatch<rl4::PaddedBlockView_&> @ 14c595230

void __thiscall
terse::Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
dispatch<rl4::PaddedBlockView_&>
          (Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,PaddedBlockView *param_1)

{
  uint uVar1;
  BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar2;
  
  pBVar2 = this->impl;
  (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x10) + 8))
            (*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x10,param_1,4);
  uVar1 = param_1->size;
  param_1->size = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x10) + 8))
            (*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x10,&param_1->sizePaddedToLastFullBlock,4)
  ;
  uVar1 = param_1->sizePaddedToLastFullBlock;
  param_1->sizePaddedToLastFullBlock =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x10) + 8))
            (*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x10,
             &param_1->sizePaddedToSecondLastFullBlock,4);
  uVar1 = param_1->sizePaddedToSecondLastFullBlock;
  param_1->sizePaddedToSecondLastFullBlock =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return;
}

// dispatch<rl4::PaddedBlockView_&> @ 14c5952d0

void __thiscall
terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
dispatch<rl4::PaddedBlockView_&>
          (Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,PaddedBlockView *param_1)

{
  uint uVar1;
  BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar2;
  uint local_res8 [2];
  
  pBVar2 = this->impl;
  uVar1 = param_1->size;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x18) + 8))
            (*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x18,local_res8,4);
  uVar1 = param_1->sizePaddedToLastFullBlock;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x18) + 8))
            (*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x18,local_res8,4);
  uVar1 = param_1->sizePaddedToSecondLastFullBlock;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x18) + 8))
            (*(longlong *)(*(longlong *)pBVar2 + 0x10) + 0x18,local_res8,4);
  return;
}

// dispatch<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&> @ 14c595370

void __thiscall
terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
dispatch<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&>
          (Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_1)

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

// CanonicalReader @ 14c595410

CanonicalReader * __thiscall
rltests::ml::block4::CanonicalReader::CanonicalReader(CanonicalReader *this)

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
  *(undefined ***)this = &___7CanonicalReader_block4_ml_rltests__6B_;
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

// ~MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_> @ 14c595690

void __thiscall
`anonymous_namespace'::
MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
::
~MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
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
  rltests::ml::block4::CanonicalReader::~CanonicalReader((CanonicalReader *)((longlong)this + 0x70))
  ;
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  return;
}

// ~MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_> @ 14c595730

void __thiscall
`anonymous_namespace'::
MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>::
~MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
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
  rltests::ml::block4::CanonicalReader::~CanonicalReader((CanonicalReader *)((longlong)this + 0x70))
  ;
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  return;
}

// GetSetUpCaseOrSuite @ 14c5957d0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
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

// GetSetUpCaseOrSuite @ 14c595870

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
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

// GetTearDownCaseOrSuite @ 14c595910

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
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

// GetTearDownCaseOrSuite @ 14c5959b0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
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

// Register @ 14c595a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::MLBInferenceTest,testing::internal::TemplateSel<MLBInferenceTest_InferencePerLOD_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
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
              ___7__TestFactoryImpl_V__MLBInferenceTest_InferencePerLOD_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__std_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
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
             &TypeIdHelper<MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
              ::dummy_,(_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c595ee2;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c595ee2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c595ee2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c595ee2;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c595ee2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c595ee2;
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
LAB_14c595ee2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c595f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::MLBInferenceTest,testing::internal::TemplateSel<MLBInferenceTest_InferencePerLOD_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
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
              ___7__TestFactoryImpl_V__MLBInferenceTest_InferencePerLOD_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<MLBInferenceTest_InferencePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
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
             &TypeIdHelper<MLBInferenceTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c5963cf;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c5963cf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5963cf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5963cf;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c5963cf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5963cf;
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
LAB_14c5963cf:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::MLBInferenceTest,testing::internal::TemplateSel<MLBInferenceTest_InferencePerLOD_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// _Reset_move @ 14c596440

void __thiscall
std::_Func_class<void,rl4::MachineLearnedBehaviorEvaluator_*>::_Reset_move
          (_Func_class<void,rl4::MachineLearnedBehaviorEvaluator_*> *this,
          _Func_class<void,rl4::MachineLearnedBehaviorEvaluator_*> *param_1)

{
  _Func_base<void,rl4::MachineLearnedBehaviorEvaluator_*> *p_Var1;
  
  p_Var1 = (param_1->_Mystorage)._Ptrs[7];
  if (p_Var1 != (_Func_base<void,rl4::MachineLearnedBehaviorEvaluator_*> *)0x0) {
    if (p_Var1 == (_Func_base<void,rl4::MachineLearnedBehaviorEvaluator_*> *)param_1) {
      p_Var1 = (_Func_base<void,rl4::MachineLearnedBehaviorEvaluator_*> *)
               (**(code **)(*(longlong *)&p_Var1->field_0x0 + 8))(p_Var1,this);
      (this->_Mystorage)._Ptrs[7] = p_Var1;
      p_Var1 = (param_1->_Mystorage)._Ptrs[7];
      if (p_Var1 != (_Func_base<void,rl4::MachineLearnedBehaviorEvaluator_*> *)0x0) {
        (*(code *)((_Storage *)&p_Var1->field_0x0)->_Ptrs[0][4])
                  (p_Var1,p_Var1 != (_Func_base<void,rl4::MachineLearnedBehaviorEvaluator_*> *)
                                    param_1);
        (param_1->_Mystorage)._Ptrs[7] =
             (_Func_base<void,rl4::MachineLearnedBehaviorEvaluator_*> *)0x0;
        return;
      }
    }
    else {
      (this->_Mystorage)._Ptrs[7] = p_Var1;
      (param_1->_Mystorage)._Ptrs[7] =
           (_Func_base<void,rl4::MachineLearnedBehaviorEvaluator_*> *)0x0;
    }
  }
  return;
}

