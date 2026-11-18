// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 14

// test_info_'' @ 141327880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ControlsTest_GUIToRawMapping_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VControlsTest_GUIToRawMapping_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestControls.cpp"
                      ,0x14);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestControls.cpp"
                      ,0x14);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x14;
  ControlsTest_GUIToRawMapping_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ControlsTest","GUIToRawMapping",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141327aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ControlsTest_PSDsAppendToOutput_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VControlsTest_PSDsAppendToOutput_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestControls.cpp"
                      ,0x2e);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestControls.cpp"
                      ,0x2e);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x2e;
  ControlsTest_PSDsAppendToOutput_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ControlsTest","PSDsAppendToOutput",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c4737c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ControlsTest_GUIToRawMapping_Test::TestBody(ControlsTest_GUIToRawMapping_Test *this)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  float fVar2;
  ushort *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  float *_Src;
  float *pfVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  Message *pMVar14;
  AssertHelper *pAVar15;
  float *pfVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  ushort **ppuVar21;
  ulonglong uVar22;
  float *pfVar23;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar24;
  float *pfVar25;
  undefined1 auStackY_5b8 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_578;
  AssertHelper local_570;
  MemoryResource local_568;
  AssertHelper local_560;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_558;
  vector<rl4::ControlInitializer,pma::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>_>
  local_538;
  float local_518 [4];
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_508;
  longlong local_4e8;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_4e0;
  void *local_4d8 [2];
  PSDNet local_4c8;
  ConditionalTable local_438;
  _Bxty local_328;
  undefined8 uStack_318;
  undefined1 *local_310;
  _Bxty local_308;
  undefined8 uStack_2f8;
  undefined1 *local_2f0;
  undefined8 local_2d0;
  undefined1 local_2c8 [56];
  longlong *local_290;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_288;
  undefined1 local_278 [56];
  longlong *local_240;
  undefined1 local_238 [488];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  local_568 = (MemoryResource)&pma::AlignedMemoryResource::_vftable_;
  ConditionalTableFactory::withMultipleIODefaults(&local_438,&local_568);
  local_508._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x0;
  pma::
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  ::
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            ((PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              *)&local_508);
  uVar22 = 0;
  local_508._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       0x0;
  local_508._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       0x0;
  local_558._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x0;
  local_508._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       0x0;
  pma::
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  ::
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            ((PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              *)&local_558);
  local_558._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       0x0;
  local_558._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       0x0;
  local_558._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       0x0;
  local_308._Ptr = (char *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>
            ((PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_308._Ptr);
  local_2f0 = (undefined1 *)0x0;
  local_308._8_8_ = 0;
  uStack_2f8 = 0;
  local_328._Ptr = (char *)0x0;
  pma::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::
  PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>
            ((PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource> *)&local_328._Ptr);
  local_310 = (undefined1 *)0x0;
  local_328._8_8_ = 0;
  uStack_318 = 0;
  rl4::PSDNet::PSDNet(&local_4c8,&local_508,&local_558,
                      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                       *)&local_308,
                      (vector<rl4::PSD,pma::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>_> *
                      )&local_328,0,0);
  if (local_328._8_8_ != 0) {
    (**(code **)(*(longlong *)local_328._Ptr + 0x10))
              (local_328._Ptr,local_328._8_8_,
               (((longlong)local_310 - local_328._8_8_) / 0x18) * 0x18,8);
    local_310 = (undefined1 *)0x0;
    local_328._8_8_ = 0;
    uStack_318 = 0;
  }
  if (local_308._8_8_ != 0) {
    (**(code **)(*(longlong *)local_308._Ptr + 0x10))
              (local_308._Ptr,local_308._8_8_,((longlong)local_2f0 - local_308._8_8_ >> 1) * 2,8);
    local_2f0 = (undefined1 *)0x0;
    local_308._8_8_ = 0;
    uStack_2f8 = 0;
  }
  pvVar7 = local_558._Mypair._Myval2._Mylast;
  if (local_558._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    if (local_558._Mypair._Myval2._Myfirst != local_558._Mypair._Myval2._Mylast) {
      ppuVar21 = (ushort **)((longlong)local_558._Mypair._Myval2._Myfirst + 0x18);
      do {
        puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar21 + -2))->_Myfirst;
        if (puVar3 != (ushort *)0x0) {
          (**(code **)(*(longlong *)
                        (((_String_val<std::_Simple_types<char>_> *)(ppuVar21 + -3))->_Bx)._Ptr +
                      0x10))((((_String_val<std::_Simple_types<char>_> *)(ppuVar21 + -3))->_Bx)._Ptr
                             ,puVar3,((longlong)*ppuVar21 - (longlong)puVar3 >> 1) * 2,8);
          ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar21 + -2))->_Myfirst =
               (ushort *)0x0;
          ppuVar21[-1] = (ushort *)0x0;
          *ppuVar21 = (ushort *)0x0;
        }
        pvVar1 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)(ppuVar21 + 1);
        ppuVar21 = ppuVar21 + 4;
      } while (pvVar1 != pvVar7);
    }
    (**(code **)(*(longlong *)local_558._Mypair._Myval1 + 0x10))
              (local_558._Mypair._Myval1,local_558._Mypair._Myval2._Myfirst,
               (longlong)local_558._Mypair._Myval2._Myend -
               (longlong)local_558._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    local_558._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    local_558._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    local_558._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  if (local_508._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (local_508._Mypair._Myval2._Myfirst,local_508._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&local_508);
    (**(code **)(*(longlong *)local_508._Mypair._Myval1 + 0x10))
              (local_508._Mypair._Myval1,local_508._Mypair._Myval2._Myfirst,
               (longlong)local_508._Mypair._Myval2._Myend -
               (longlong)local_508._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
  }
  uVar8 = rl4::ConditionalTable::getInputCount(&local_438);
  uVar9 = rl4::ConditionalTable::getOutputCount(&local_438);
  uVar10 = rl4::PSDNet::getPSDCount(&local_4c8);
  ControlsFactory::getInstanceFactory
            ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)local_278,uVar8,uVar9,uVar10,0,0);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x9d4c) <
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
  local_538._Mypair._Myval1 =
       (PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_538._Mypair._Myval2._Myend = (ControlInitializer *)0x0;
  local_2d0 = 0;
  local_538._Mypair._Myval2._Myfirst = (ControlInitializer *)0x0;
  local_538._Mypair._Myval2._Mylast = (ControlInitializer *)0x0;
  if (local_240 != (longlong *)0x0) {
    local_2d0 = (**(code **)*local_240)(local_240,&local_308);
  }
  rl4::Controls::Controls
            ((Controls *)local_238,&local_438,&local_4c8,&local_538,
             (function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)&local_308);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_518[0] = 0.1;
  local_518[1] = 0.2;
  _Src = (float *)(**(code **)((longlong)
                               `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                               ::__l2::dmr + 8))
                            (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                              ::__l2::dmr,8,8);
  pfVar16 = local_518;
  pfVar25 = _Src;
  do {
    *pfVar25 = *pfVar16;
    pfVar16 = pfVar16 + 1;
    pfVar25 = pfVar25 + 1;
  } while (pfVar16 != local_518 + 2);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_518[2] = 0.3;
  local_518[3] = 0.6;
  pfVar11 = (float *)(**(code **)((longlong)
                                  `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                  ::__l2::dmr + 8))
                               (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                 ::__l2::dmr,8,8);
  pfVar16 = local_518 + 2;
  pfVar23 = pfVar11;
  do {
    fVar2 = *pfVar16;
    pfVar16 = pfVar16 + 1;
    *pfVar23 = fVar2;
    pfVar23 = pfVar23 + 1;
  } while ((vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            *)pfVar16 != &local_508);
  rl4::Controls::createInstance
            ((Controls *)local_238,
             (unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>
              *)local_2c8,&local_568);
  (**(code **)((longlong)*(ControlsInputInstance *)local_288 + 0x18))(local_288,local_4d8);
  (**(code **)((longlong)*(ControlsInputInstance *)local_288 + 0x28))(local_288,&local_4e8);
  memmove(local_4d8[0],_Src,(longlong)pfVar25 - (longlong)_Src);
  rl4::Controls::mapGUIToRaw((Controls *)local_238,(ControlsInputInstance *)local_288);
  puVar6 = _UNK_15076add8;
  uVar5 = ___xmm_000000000000000f0000000000000000;
  pbVar24 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
            ((longlong)pfVar23 - (longlong)pfVar11 >> 2);
  local_570.data_ = (AssertHelperData *)local_4e0;
  local_578._Myval2 = pbVar24;
  if (local_4e0 == pbVar24) {
    testing::AssertionSuccess((AssertionResult *)&local_558);
  }
  else {
    pbVar12 = testing::internal::
              FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_328,(ulong64 *)&local_578,(ulong64 *)&local_570);
    pbVar13 = testing::internal::
              FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_308,(ulong64 *)&local_570,(ulong64 *)&local_578);
    testing::internal::EqFailure
              ((AssertionResult *)&local_558,"rawBuffer.size()","expected.size()",pbVar13,pbVar12,
               false);
    if (&DAT_0000000f < local_2f0) {
      puVar20 = local_2f0 + 1;
      uVar17 = local_308._Ptr;
      if ((undefined1 *)0xfff < puVar20) {
        uVar17 = *(undefined8 *)(local_308._Ptr + -8);
        puVar20 = local_2f0 + 0x28;
        if ((char *)0x1f < local_308._Ptr + (-8 - uVar17)) goto LAB_14c473d1d;
      }
      ::operator_delete((void *)uVar17,(ulong64)puVar20);
    }
    local_308._Ptr = local_308._Ptr & 0xffffffffffffff00;
    uStack_2f8 = uVar5;
    local_2f0 = puVar6;
    if (&DAT_0000000f < local_310) {
      puVar20 = local_310 + 1;
      uVar17 = local_328._Ptr;
      if ((undefined1 *)0xfff < puVar20) {
        uVar17 = *(undefined8 *)(local_328._Ptr + -8);
        puVar20 = local_310 + 0x28;
        if ((char *)0x1f < local_328._Ptr + (-8 - uVar17)) {
LAB_14c473d1d:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar17,(ulong64)puVar20);
    }
  }
  pvVar7 = local_558._Mypair._Myval2._Myfirst;
  if ((bool)local_558._Mypair._Myval1._0_1_ == false) {
    pMVar14 = (Message *)testing::Message::Message((Message *)&local_570);
    if (local_558._Mypair._Myval2._Myfirst ==
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      pcVar18 = "";
    }
    else {
      pcVar18 = (char *)local_558._Mypair._Myval2._Myfirst;
      if (&DAT_0000000f < *(ushort **)((longlong)local_558._Mypair._Myval2._Myfirst + 0x18)) {
        pcVar18 = *(char **)local_558._Mypair._Myval2._Myfirst;
      }
    }
    pAVar15 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_560,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestControls.cpp"
                         ,0x2a,pcVar18);
    testing::internal::AssertHelper::operator=(pAVar15,pMVar14);
    testing::internal::AssertHelper::~AssertHelper(&local_560);
    if (local_570.data_ != (AssertHelperData *)0x0) {
      puVar19 = (undefined8 *)
                ((longlong)&(local_570.data_)->type +
                (longlong)*(int *)((longlong)*(ControlsInputInstance *)local_570.data_ + 4));
      (**(code **)*puVar19)(puVar19,1);
    }
    pvVar7 = local_558._Mypair._Myval2._Myfirst;
    if (local_558._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_558._Mypair._Myval2._Myfirst);
      ::operator_delete(pvVar7,0x20);
    }
    if (local_288 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_578._Myval2 = local_288;
      if (local_290 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_290 + 0x10))(local_290,&local_578);
    }
    if (local_290 != (longlong *)0x0) {
      (**(code **)(*local_290 + 0x20))(local_290,local_290 != (longlong *)local_2c8);
      local_290 = (longlong *)0x0;
    }
    if (pfVar11 != (float *)0x0) {
      (**(code **)((longlong)
                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr + 0x10))
                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr,pfVar11,8);
    }
    if (_Src != (float *)0x0) {
      (**(code **)((longlong)
                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr + 0x10))
                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr,_Src,8);
    }
    rl4::Controls::~Controls((Controls *)local_238);
    if (local_538._Mypair._Myval2._Myfirst != (ControlInitializer *)0x0) {
      (**(code **)(*(undefined **)local_538._Mypair._Myval1 + 0x10))
                (local_538._Mypair._Myval1,local_538._Mypair._Myval2._Myfirst,
                 (longlong)local_538._Mypair._Myval2._Myend -
                 (longlong)local_538._Mypair._Myval2._Myfirst & 0xfffffffffffffff8,8);
      local_538._Mypair._Myval2._Myend = (ControlInitializer *)0x0;
      local_538._Mypair._Myval2._Myfirst = (ControlInitializer *)0x0;
      local_538._Mypair._Myval2._Mylast = (ControlInitializer *)0x0;
    }
    if (local_240 != (longlong *)0x0) {
      (**(code **)(*local_240 + 0x20))(local_240,local_240 != (longlong *)local_278);
      local_240 = (longlong *)0x0;
    }
    rl4::PSDNet::~PSDNet(&local_4c8);
    rl4::ConditionalTable::~ConditionalTable(&local_438);
    pma::MemoryResource::~MemoryResource(&local_568);
  }
  else {
    if (local_558._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_558._Mypair._Myval2._Myfirst);
      ::operator_delete(pvVar7,0x20);
    }
    pfVar16 = pfVar11;
    if (pbVar24 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        pfVar25 = (float *)((longlong)pfVar16 + (local_4e8 - (longlong)pfVar11));
        if (*pfVar16 == *pfVar25) {
          testing::AssertionSuccess((AssertionResult *)&local_558);
        }
        else {
          pbVar12 = testing::internal::FormatForComparisonFailureMessage<float,float>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_328,pfVar16,pfVar25);
          pbVar13 = testing::internal::FormatForComparisonFailureMessage<float,float>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_308,pfVar25,pfVar16);
          testing::internal::EqFailure
                    ((AssertionResult *)&local_558,"rawBuffer[i]","expected[i]",pbVar13,pbVar12,
                     false);
          if (&DAT_0000000f < local_2f0) {
            puVar20 = local_2f0 + 1;
            uVar17 = local_308._Ptr;
            if ((undefined1 *)0xfff < puVar20) {
              uVar17 = *(undefined8 *)(local_308._Ptr + -8);
              puVar20 = local_2f0 + 0x28;
              if ((char *)0x1f < local_308._Ptr + (-8 - uVar17)) goto LAB_14c47407c;
            }
            ::operator_delete((void *)uVar17,(ulong64)puVar20);
          }
          local_308._Ptr = local_308._Ptr & 0xffffffffffffff00;
          uStack_2f8 = uVar5;
          local_2f0 = puVar6;
          if (&DAT_0000000f < local_310) {
            puVar20 = local_310 + 1;
            uVar17 = local_328._Ptr;
            if ((undefined1 *)0xfff < puVar20) {
              uVar17 = *(undefined8 *)(local_328._Ptr + -8);
              puVar20 = local_310 + 0x28;
              if ((char *)0x1f < local_328._Ptr + (-8 - uVar17)) {
LAB_14c47407c:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar17,(ulong64)puVar20);
          }
        }
        pvVar7 = local_558._Mypair._Myval2._Myfirst;
        if ((bool)local_558._Mypair._Myval1._0_1_ == false) {
          pMVar14 = (Message *)testing::Message::Message((Message *)&local_578);
          if (local_558._Mypair._Myval2._Myfirst ==
              (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
               *)0x0) {
            pcVar18 = "";
          }
          else {
            pcVar18 = (char *)local_558._Mypair._Myval2._Myfirst;
            if (&DAT_0000000f < *(ushort **)((longlong)local_558._Mypair._Myval2._Myfirst + 0x18)) {
              pcVar18 = *(char **)local_558._Mypair._Myval2._Myfirst;
            }
          }
          pAVar15 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_570,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestControls.cpp"
                               ,0x2b,pcVar18);
          testing::internal::AssertHelper::operator=(pAVar15,pMVar14);
          testing::internal::AssertHelper::~AssertHelper(&local_570);
          if (local_578._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar19 = (undefined8 *)
                      ((longlong)&(local_578._Myval2)->field_0x0 +
                      (longlong)*(int *)((longlong)*(ControlsInputInstance *)local_578._Myval2 + 4))
            ;
            (**(code **)*puVar19)(puVar19,1);
          }
          pvVar7 = local_558._Mypair._Myval2._Myfirst;
          if (local_558._Mypair._Myval2._Myfirst !=
              (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
               *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_558._Mypair._Myval2._Myfirst);
            ::operator_delete(pvVar7,0x20);
          }
          if (local_288 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            local_560.data_ = (AssertHelperData *)local_288;
            if (local_290 == (longlong *)0x0) {
              std::_Xbad_function_call();
              return;
            }
            (**(code **)(*local_290 + 0x10))(local_290,&local_560);
          }
          if (local_290 != (longlong *)0x0) {
            (**(code **)(*local_290 + 0x20))(local_290,local_290 != (longlong *)local_2c8);
            local_290 = (longlong *)0x0;
          }
          if (pfVar11 != (float *)0x0) {
            (**(code **)((longlong)
                         `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr + 0x10))
                      (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr,pfVar11,8);
          }
          if (_Src != (float *)0x0) {
            (**(code **)((longlong)
                         `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr + 0x10))
                      (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr,_Src,8);
          }
          if (local_50 != (longlong *)0x0) {
            (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)(local_238 + 0x1b0));
            local_50 = (longlong *)0x0;
          }
          if ((ControlInitializer *)local_238._408_8_ != (ControlInitializer *)0x0) {
            (**(code **)(*(longlong *)local_238._400_8_ + 0x10))
                      (local_238._400_8_,local_238._408_8_,
                       local_238._424_8_ - local_238._408_8_ & 0xfffffffffffffff8,8);
            local_238._408_8_ = (ControlInitializer *)0x0;
            local_238._416_8_ = (ControlInitializer *)0x0;
            local_238._424_8_ = (ControlInitializer *)0x0;
          }
          rl4::PSDNet::~PSDNet((PSDNet *)(local_238 + 0x108));
          rl4::ConditionalTable::~ConditionalTable((ConditionalTable *)local_238);
          if (local_538._Mypair._Myval2._Myfirst != (ControlInitializer *)0x0) {
            (**(code **)(*(undefined **)local_538._Mypair._Myval1 + 0x10))
                      (local_538._Mypair._Myval1,local_538._Mypair._Myval2._Myfirst,
                       (longlong)local_538._Mypair._Myval2._Myend -
                       (longlong)local_538._Mypair._Myval2._Myfirst & 0xfffffffffffffff8,8);
            local_538._Mypair._Myval2._Myend = (ControlInitializer *)0x0;
            local_538._Mypair._Myval2._Myfirst = (ControlInitializer *)0x0;
            local_538._Mypair._Myval2._Mylast = (ControlInitializer *)0x0;
          }
          if (local_240 != (longlong *)0x0) {
            (**(code **)(*local_240 + 0x20))(local_240,local_240 != (longlong *)local_278);
            local_240 = (longlong *)0x0;
          }
          goto LAB_14c474025;
        }
        if (local_558._Mypair._Myval2._Myfirst !=
            (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
             *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_558._Mypair._Myval2._Myfirst);
          ::operator_delete(pvVar7,0x20);
        }
        uVar22 = uVar22 + 1;
        pfVar16 = pfVar16 + 1;
      } while (uVar22 < pbVar24);
    }
    if (local_288 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_560.data_ = (AssertHelperData *)local_288;
      if (local_290 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_290 + 0x10))(local_290,&local_560);
    }
    if (local_290 != (longlong *)0x0) {
      (**(code **)(*local_290 + 0x20))(local_290,local_290 != (longlong *)local_2c8);
      local_290 = (longlong *)0x0;
    }
    if (pfVar11 != (float *)0x0) {
      (**(code **)((longlong)
                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr + 0x10))
                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr,pfVar11,8);
    }
    if (_Src != (float *)0x0) {
      (**(code **)((longlong)
                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr + 0x10))
                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr,_Src,8);
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)(local_238 + 0x1b0));
      local_50 = (longlong *)0x0;
    }
    if ((ControlInitializer *)local_238._408_8_ != (ControlInitializer *)0x0) {
      (**(code **)(*(longlong *)local_238._400_8_ + 0x10))
                (local_238._400_8_,local_238._408_8_,
                 local_238._424_8_ - local_238._408_8_ & 0xfffffffffffffff8,8);
      local_238._408_8_ = (ControlInitializer *)0x0;
      local_238._416_8_ = (ControlInitializer *)0x0;
      local_238._424_8_ = (ControlInitializer *)0x0;
    }
    rl4::PSDNet::~PSDNet((PSDNet *)(local_238 + 0x108));
    rl4::ConditionalTable::~ConditionalTable((ConditionalTable *)local_238);
    if (local_538._Mypair._Myval2._Myfirst != (ControlInitializer *)0x0) {
      (**(code **)(*(undefined **)local_538._Mypair._Myval1 + 0x10))
                (local_538._Mypair._Myval1,local_538._Mypair._Myval2._Myfirst,
                 (longlong)local_538._Mypair._Myval2._Myend -
                 (longlong)local_538._Mypair._Myval2._Myfirst & 0xfffffffffffffff8,8);
      local_538._Mypair._Myval2._Myend = (ControlInitializer *)0x0;
      local_538._Mypair._Myval2._Myfirst = (ControlInitializer *)0x0;
      local_538._Mypair._Myval2._Mylast = (ControlInitializer *)0x0;
    }
    if (local_240 != (longlong *)0x0) {
      (**(code **)(*local_240 + 0x20))(local_240,local_240 != (longlong *)local_278);
      local_240 = (longlong *)0x0;
    }
LAB_14c474025:
    rl4::PSDNet::~PSDNet(&local_4c8);
    rl4::ConditionalTable::~ConditionalTable(&local_438);
    pma::MemoryResource::~MemoryResource(&local_568);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c474520

void * __thiscall
ControlsTest_GUIToRawMapping_Test::_scalar_deleting_destructor_
          (ControlsTest_GUIToRawMapping_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c474560

Test * __thiscall
testing::internal::TestFactoryImpl<ControlsTest_GUIToRawMapping_Test>::CreateTest
          (TestFactoryImpl<ControlsTest_GUIToRawMapping_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ControlsTest_GUIToRawMapping_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c4745a0

void * __thiscall
testing::internal::TestFactoryImpl<ControlsTest_GUIToRawMapping_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ControlsTest_GUIToRawMapping_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ControlsTest_GUIToRawMapping_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c4745e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ControlsTest_PSDsAppendToOutput_Test::TestBody(ControlsTest_PSDsAppendToOutput_Test *this)

{
  char **ppcVar1;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar2;
  longlong lVar3;
  void *pvVar4;
  double dVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined4 *_Src;
  undefined4 *puVar9;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar10;
  PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource> *pPVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  Message *pMVar14;
  AssertHelper *pAVar15;
  _Bxty *p_Var16;
  void *pvVar17;
  undefined8 uVar18;
  char *pcVar19;
  void **ppvVar20;
  undefined8 *puVar21;
  ushort *puVar22;
  ulong64 uVar23;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar24;
  ushort **ppuVar25;
  undefined4 *puVar26;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar27;
  undefined4 *puVar28;
  undefined1 auStackY_648 [32];
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_608 [2];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_5f8;
  AssertHelper local_5e8;
  MemoryResource local_5e0;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_5d8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_5b8;
  vector<rl4::PSD,pma::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>_> local_598;
  vector<rl4::ControlInitializer,pma::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>_>
  local_578;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_558;
  undefined4 local_538;
  undefined4 local_534;
  void *local_530;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_528;
  PSDNet local_518;
  ConditionalTable local_488;
  undefined1 local_378 [8];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_370;
  undefined1 local_350 [64];
  longlong *local_310;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [56];
  longlong *local_2b0;
  _Bxty local_2a8;
  undefined4 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  _Bxty local_278;
  ulonglong local_260;
  undefined8 local_240;
  undefined1 local_238 [488];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_648;
  local_5e0 = (MemoryResource)&pma::AlignedMemoryResource::_vftable_;
  ConditionalTableFactory::withMultipleIODefaults(&local_488,&local_5e0);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_538 = 0x3dcccccd;
  local_534 = 0x3e4ccccd;
  _Src = (undefined4 *)
         (**(code **)((longlong)
                      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                      ::__l2::dmr + 8))
                   (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                     ::__l2::dmr,8,8);
  ppvVar20 = (void **)&local_538;
  puVar28 = _Src;
  do {
    *puVar28 = *(undefined4 *)ppvVar20;
    ppvVar20 = (void **)((longlong)ppvVar20 + 4);
    puVar28 = puVar28 + 1;
  } while (ppvVar20 != &local_530);
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_2f8 = ___xmm_3ca3d70a3e75c28f3e4ccccd3dcccccd;
  uStack_2f0 = _UNK_152882748;
  puVar9 = (undefined4 *)
           (**(code **)((longlong)
                        `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr + 8))
                     (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr,0x10,8);
  puVar21 = &local_2f8;
  puVar26 = puVar9;
  do {
    *puVar26 = *(undefined4 *)puVar21;
    puVar21 = (undefined8 *)((longlong)puVar21 + 4);
    puVar26 = puVar26 + 1;
  } while (puVar21 != (undefined8 *)local_2e8);
  PVar24 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            )0x0;
  local_5e8.data_ = (AssertHelperData *)0x0;
  pPVar10 = pma::
            PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            ::
            PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                      ((PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                        *)&local_5e8);
  local_608[0].pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(local_608);
  local_5f8._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_378;
  local_378._0_4_ = 0x10000;
  local_5f8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (local_378 + 4);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_370,(initializer_list<unsigned_short> *)&local_5f8,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)local_608);
  local_5f8._First = &local_370;
  local_5f8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_350;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_5b8,&local_5f8,pPVar10);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_370);
  local_5e8.data_ = (AssertHelperData *)0x0;
  pPVar10 = pma::
            PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            ::
            PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                      ((PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                        *)&local_5e8);
  local_608[0].pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(local_608);
  local_5f8._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_378;
  local_378._0_4_ = 0x30002;
  local_5f8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (local_378 + 4);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_370,(initializer_list<unsigned_short> *)&local_5f8,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)local_608);
  local_5f8._First = &local_370;
  local_5f8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_350;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_5d8,&local_5f8,pPVar10);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_370);
  local_608[0].pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(local_608);
  local_5f8._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_378;
  local_5f8._Last = &local_370;
  local_378 = (undefined1  [8])0x1000000010000;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_558,(initializer_list<unsigned_short> *)&local_5f8,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)local_608);
  local_5e8.data_ = (AssertHelperData *)0x0;
  pPVar11 = pma::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::
            PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>
                      ((PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource> *)&local_5e8);
  local_2a8._Ptr = (char *)0x0;
  local_2a8._8_8_ = 2;
  local_298 = 0x41400000;
  local_290 = 2;
  local_288 = 2;
  local_280 = 0x3f800000;
  local_598._Mypair._Myval1 = *pPVar11;
  local_598._Mypair._Myval2._Myfirst =
       (PSD *)(**(code **)(*(longlong *)local_598._Mypair._Myval1 + 8))
                        (local_598._Mypair._Myval1,0x30,8);
  local_598._Mypair._Myval2._Myend = local_598._Mypair._Myval2._Myfirst + 2;
  p_Var16 = &local_2a8;
  local_598._Mypair._Myval2._Mylast = local_598._Mypair._Myval2._Myfirst;
  do {
    pcVar19 = (&p_Var16->_Ptr)[1];
    (local_598._Mypair._Myval2._Mylast)->offset = (ulong64)p_Var16->_Ptr;
    (local_598._Mypair._Myval2._Mylast)->size = (ulong64)pcVar19;
    ppcVar1 = &p_Var16->_Ptr + 2;
    p_Var16 = (_Bxty *)(&p_Var16->_Ptr + 3);
    *(char **)&(local_598._Mypair._Myval2._Mylast)->weight = *ppcVar1;
    local_598._Mypair._Myval2._Mylast = local_598._Mypair._Myval2._Mylast + 1;
  } while (p_Var16 != &local_278);
  rl4::PSDNet::PSDNet(&local_518,&local_5b8,&local_5d8,&local_558,&local_598,2,3);
  uVar6 = rl4::ConditionalTable::getInputCount(&local_488);
  uVar7 = rl4::ConditionalTable::getOutputCount(&local_488);
  uVar8 = rl4::PSDNet::getPSDCount(&local_518);
  ControlsFactory::getInstanceFactory
            ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)local_2e8,uVar6,uVar7,uVar8,0,0);
  std::
  vector<rl4::ControlInitializer,pma::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>_>
  ::
  vector<rl4::ControlInitializer,pma::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>_>
            (&local_578);
  local_240 = 0;
  if (local_2b0 != (longlong *)0x0) {
    local_240 = (**(code **)*local_2b0)(local_2b0,&local_278);
  }
  rl4::Controls::Controls
            ((Controls *)local_238,&local_488,&local_518,&local_578,
             (function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)&local_278);
  rl4::Controls::createInstance
            ((Controls *)local_238,
             (unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>
              *)(local_350 + 8),&local_5e0);
  (**(code **)((longlong)*(ControlsInputInstance *)local_308 + 0x28))(local_308,&local_530);
  memmove(local_530,_Src,(longlong)puVar28 - (longlong)_Src);
  rl4::Controls::calculate((Controls *)local_238,(ControlsInputInstance *)local_308,0);
  PVar27 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            )((longlong)puVar26 - (longlong)puVar9 >> 2);
  local_378 = (undefined1  [8])local_528;
  local_608[0].pMemRes = (MemoryResource *)PVar27;
  if (local_528 == PVar27) {
    testing::AssertionSuccess((AssertionResult *)&local_5f8);
  }
  else {
    pbVar12 = testing::internal::
              FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_278,(ulong64 *)local_608,(ulong64 *)local_378);
    pbVar13 = testing::internal::
              FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_370,(ulong64 *)local_378,(ulong64 *)local_608);
    testing::internal::EqFailure
              ((AssertionResult *)&local_5f8,"buffer.size()","expected.size()",pbVar13,pbVar12,false
              );
    if (&DAT_0000000f < local_370._Mypair._Myval2._Myend) {
      pvVar4 = (void *)CONCAT71(local_370._Mypair._Myval1._1_7_,local_370._Mypair._Myval1._0_1_);
      puVar22 = (ushort *)((longlong)local_370._Mypair._Myval2._Myend + 1);
      pvVar17 = pvVar4;
      if ((ushort *)0xfff < puVar22) {
        pvVar17 = *(void **)((longlong)pvVar4 + -8);
        puVar22 = local_370._Mypair._Myval2._Myend + 0x14;
        if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar17))) goto LAB_14c474b4b;
      }
      ::operator_delete(pvVar17,(ulong64)puVar22);
    }
    local_370._Mypair._Myval1._0_1_ = 0;
    local_370._Mypair._Myval2._Mylast = ___xmm_000000000000000f0000000000000000;
    local_370._Mypair._Myval2._Myend = _UNK_15076add8;
    if (0xf < local_260) {
      uVar23 = local_260 + 1;
      uVar18 = local_278._Ptr;
      if (0xfff < uVar23) {
        uVar18 = *(undefined8 *)(local_278._Ptr + -8);
        uVar23 = local_260 + 0x28;
        if ((char *)0x1f < local_278._Ptr + (-8 - uVar18)) {
LAB_14c474b4b:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar18,uVar23);
    }
  }
  pvVar2 = local_5f8._Last;
  if ((char)local_5f8._First == '\0') {
    pMVar14 = (Message *)testing::Message::Message((Message *)local_608);
    if ((PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)local_5f8._Last ==
        (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = (char *)local_5f8._Last;
      if (&DAT_0000000f <
          *(ushort **)
           &((_Compressed_pair<pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<unsigned_short>_>,0>
              *)((longlong)local_5f8._Last + 0x18))->_Myval1) {
        pcVar19 = *(char **)local_5f8._Last;
      }
    }
    pAVar15 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_5e8,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestControls.cpp"
                         ,0x4d,pcVar19);
    testing::internal::AssertHelper::operator=(pAVar15,pMVar14);
    testing::internal::AssertHelper::~AssertHelper(&local_5e8);
    if ((PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
         )local_608[0].pMemRes !=
        (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
         )0x0) {
      puVar21 = (undefined8 *)
                ((longlong)&(local_608[0].pMemRes)->field_0x0 +
                (longlong)*(int *)((longlong)*(ControlsInputInstance *)local_608[0].pMemRes + 4));
      (**(code **)*puVar21)(puVar21,1);
    }
    pvVar2 = local_5f8._Last;
    if ((PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)local_5f8._Last !=
        (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_5f8._Last)
      ;
      ::operator_delete(pvVar2,0x20);
    }
    if (local_308 !=
        (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
         )0x0) {
      local_378 = (undefined1  [8])local_308;
      if (local_310 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_310 + 0x10))(local_310,local_378);
    }
    if (local_310 != (longlong *)0x0) {
      (**(code **)(*local_310 + 0x20))(local_310,local_310 != (longlong *)(local_350 + 8));
      local_310 = (longlong *)0x0;
    }
    rl4::Controls::~Controls((Controls *)local_238);
    if (local_578._Mypair._Myval2._Myfirst != (ControlInitializer *)0x0) {
      (**(code **)(*(longlong *)local_578._Mypair._Myval1 + 0x10))
                (local_578._Mypair._Myval1,local_578._Mypair._Myval2._Myfirst,
                 (longlong)local_578._Mypair._Myval2._Myend -
                 (longlong)local_578._Mypair._Myval2._Myfirst & 0xfffffffffffffff8,8);
      local_578._Mypair._Myval2._Myend = (ControlInitializer *)0x0;
      local_578._Mypair._Myval2._Myfirst = (ControlInitializer *)0x0;
      local_578._Mypair._Myval2._Mylast = (ControlInitializer *)0x0;
    }
    if (local_2b0 != (longlong *)0x0) {
      (**(code **)(*local_2b0 + 0x20))(local_2b0,local_2b0 != (longlong *)local_2e8);
      local_2b0 = (longlong *)0x0;
    }
    rl4::PSDNet::~PSDNet(&local_518);
    if (local_598._Mypair._Myval2._Myfirst != (PSD *)0x0) {
      (**(code **)(*(longlong *)local_598._Mypair._Myval1 + 0x10))
                (local_598._Mypair._Myval1,local_598._Mypair._Myval2._Myfirst,
                 (((longlong)local_598._Mypair._Myval2._Myend -
                  (longlong)local_598._Mypair._Myval2._Myfirst) / 0x18) * 0x18,8);
      local_598._Mypair._Myval2._Myend = (PSD *)0x0;
      local_598._Mypair._Myval2._Myfirst = (PSD *)0x0;
      local_598._Mypair._Myval2._Mylast = (PSD *)0x0;
    }
    if (local_558._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      (**(code **)(*(longlong *)local_558._Mypair._Myval1 + 0x10))
                (local_558._Mypair._Myval1,local_558._Mypair._Myval2._Myfirst,
                 ((longlong)local_558._Mypair._Myval2._Myend -
                  (longlong)local_558._Mypair._Myval2._Myfirst >> 1) * 2,8);
      local_558._Mypair._Myval2._Myend = (ushort *)0x0;
      local_558._Mypair._Myval2._Myfirst = (ushort *)0x0;
      local_558._Mypair._Myval2._Mylast = (ushort *)0x0;
    }
    pvVar2 = local_5d8._Mypair._Myval2._Myfirst;
    if (local_5d8._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      for (; pvVar2 != local_5d8._Mypair._Myval2._Mylast; pvVar2 = pvVar2 + 1) {
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::~vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  (pvVar2);
      }
      (**(code **)(*(longlong *)local_5d8._Mypair._Myval1 + 0x10))
                (local_5d8._Mypair._Myval1,local_5d8._Mypair._Myval2._Myfirst,
                 (longlong)local_5d8._Mypair._Myval2._Myend -
                 (longlong)local_5d8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
      local_5d8._Mypair._Myval2._Myend =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_5d8._Mypair._Myval2._Myfirst =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_5d8._Mypair._Myval2._Mylast =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
    }
    pvVar2 = local_5b8._Mypair._Myval2._Myfirst;
    if (local_5b8._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      for (; pvVar2 != local_5b8._Mypair._Myval2._Mylast; pvVar2 = pvVar2 + 1) {
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::~vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  (pvVar2);
      }
      (**(code **)(*(longlong *)local_5b8._Mypair._Myval1 + 0x10))
                (local_5b8._Mypair._Myval1,local_5b8._Mypair._Myval2._Myfirst,
                 (longlong)local_5b8._Mypair._Myval2._Myend -
                 (longlong)local_5b8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
      local_5b8._Mypair._Myval2._Myend =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_5b8._Mypair._Myval2._Myfirst =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_5b8._Mypair._Myval2._Mylast =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
    }
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)((longlong)
                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr + 0x10))
                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr,puVar9,0x10,8);
    }
    if (_Src != (undefined4 *)0x0) {
      (**(code **)((longlong)
                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr + 0x10))
                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr,_Src,8);
    }
    rl4::ConditionalTable::~ConditionalTable(&local_488);
    pma::MemoryResource::~MemoryResource(&local_5e0);
  }
  else {
    if ((PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)local_5f8._Last !=
        (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_5f8._Last)
      ;
      ::operator_delete(pvVar2,0x20);
    }
    dVar5 = __real_3f1a36e2e0000000;
    if (PVar27 != (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                   )0x0) {
LAB_14c474bb0:
      testing::internal::DoubleNearPredFormat
                ((AssertionResult *)&local_5f8,"buffer[i]","expected[i]","0.0001f",
                 (double)*(float *)((longlong)local_530 + (longlong)PVar24 * 4),
                 (double)(float)puVar9[(longlong)PVar24],dVar5);
      pvVar2 = local_5f8._Last;
      if ((char)local_5f8._First != '\0') goto code_r0x00014c474c01;
      pMVar14 = (Message *)testing::Message::Message((Message *)local_608);
      if ((PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)local_5f8._Last ==
          (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = (char *)local_5f8._Last;
        if (&DAT_0000000f < *(undefined1 **)((longlong)local_5f8._Last + 0x18)) {
          pcVar19 = *(char **)local_5f8._Last;
        }
      }
      pAVar15 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_5e8,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestControls.cpp"
                           ,0x4e,pcVar19);
      testing::internal::AssertHelper::operator=(pAVar15,pMVar14);
      testing::internal::AssertHelper::~AssertHelper(&local_5e8);
      if ((PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           )local_608[0].pMemRes !=
          (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           )0x0) {
        puVar21 = (undefined8 *)
                  ((longlong)&(local_608[0].pMemRes)->field_0x0 +
                  (longlong)*(int *)((longlong)*(ControlsInputInstance *)local_608[0].pMemRes + 4));
        (**(code **)*puVar21)(puVar21,1);
      }
      pvVar2 = local_5f8._Last;
      if ((PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)local_5f8._Last !=
          (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_5f8._Last);
        ::operator_delete(pvVar2,0x20);
      }
      if (local_308 !=
          (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           )0x0) {
        local_378 = (undefined1  [8])local_308;
        if (local_310 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        (**(code **)(*local_310 + 0x10))(local_310,local_378);
      }
      if (local_310 != (longlong *)0x0) {
        (**(code **)(*local_310 + 0x20))(local_310,local_310 != (longlong *)(local_350 + 8));
        local_310 = (longlong *)0x0;
      }
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)(local_238 + 0x1b0));
        local_50 = (longlong *)0x0;
      }
      if ((ControlInitializer *)local_238._408_8_ != (ControlInitializer *)0x0) {
        (**(code **)(*(longlong *)local_238._400_8_ + 0x10))
                  (local_238._400_8_,local_238._408_8_,
                   local_238._424_8_ - local_238._408_8_ & 0xfffffffffffffff8,8);
        local_238._408_8_ = (ControlInitializer *)0x0;
        local_238._416_8_ = (ControlInitializer *)0x0;
        local_238._424_8_ = (ControlInitializer *)0x0;
      }
      rl4::PSDNet::~PSDNet((PSDNet *)(local_238 + 0x108));
      rl4::ConditionalTable::~ConditionalTable((ConditionalTable *)local_238);
      if (local_578._Mypair._Myval2._Myfirst != (ControlInitializer *)0x0) {
        (**(code **)(*(longlong *)local_578._Mypair._Myval1 + 0x10))
                  (local_578._Mypair._Myval1,local_578._Mypair._Myval2._Myfirst,
                   (longlong)local_578._Mypair._Myval2._Myend -
                   (longlong)local_578._Mypair._Myval2._Myfirst & 0xfffffffffffffff8,8);
        local_578._Mypair._Myval2._Myend = (ControlInitializer *)0x0;
        local_578._Mypair._Myval2._Myfirst = (ControlInitializer *)0x0;
        local_578._Mypair._Myval2._Mylast = (ControlInitializer *)0x0;
      }
      if (local_2b0 != (longlong *)0x0) {
        (**(code **)(*local_2b0 + 0x20))(local_2b0,local_2b0 != (longlong *)local_2e8);
        local_2b0 = (longlong *)0x0;
      }
      rl4::PSDNet::~PSDNet(&local_518);
      if (local_598._Mypair._Myval2._Myfirst != (PSD *)0x0) {
        (**(code **)(*(longlong *)local_598._Mypair._Myval1 + 0x10))
                  (local_598._Mypair._Myval1,local_598._Mypair._Myval2._Myfirst,
                   (((longlong)local_598._Mypair._Myval2._Myend -
                    (longlong)local_598._Mypair._Myval2._Myfirst) / 0x18) * 0x18,8);
        local_598._Mypair._Myval2._Myend = (PSD *)0x0;
        local_598._Mypair._Myval2._Myfirst = (PSD *)0x0;
        local_598._Mypair._Myval2._Mylast = (PSD *)0x0;
      }
      if (local_558._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_558._Mypair._Myval1 + 0x10))
                  (local_558._Mypair._Myval1,local_558._Mypair._Myval2._Myfirst,
                   ((longlong)local_558._Mypair._Myval2._Myend -
                    (longlong)local_558._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_558._Mypair._Myval2._Myend = (ushort *)0x0;
        local_558._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_558._Mypair._Myval2._Mylast = (ushort *)0x0;
      }
      if (local_5d8._Mypair._Myval2._Myfirst !=
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )0x0) {
        if (local_5d8._Mypair._Myval2._Myfirst != local_5d8._Mypair._Myval2._Mylast) {
          ppuVar25 = &((local_5d8._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend;
          do {
            puVar22 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar25 + -2))->
                      _Myfirst;
            if (puVar22 != (ushort *)0x0) {
              (**(code **)(*(longlong *)ppuVar25[-3] + 0x10))
                        (ppuVar25[-3],puVar22,((longlong)*ppuVar25 - (longlong)puVar22 >> 1) * 2,8);
              ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar25 + -2))->_Myfirst =
                   (ushort *)0x0;
              ppuVar25[-1] = (ushort *)0x0;
              *ppuVar25 = (ushort *)0x0;
            }
            pvVar2 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                      *)(ppuVar25 + 1);
            ppuVar25 = ppuVar25 + 4;
          } while (pvVar2 != local_5d8._Mypair._Myval2._Mylast);
        }
        (**(code **)(*(longlong *)local_5d8._Mypair._Myval1 + 0x10))
                  (local_5d8._Mypair._Myval1,local_5d8._Mypair._Myval2._Myfirst,
                   (longlong)local_5d8._Mypair._Myval2._Myend -
                   (longlong)local_5d8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
        local_5d8._Mypair._Myval2._Myend =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
        local_5d8._Mypair._Myval2._Myfirst =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
        local_5d8._Mypair._Myval2._Mylast =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
      }
      if (local_5b8._Mypair._Myval2._Myfirst !=
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )0x0) {
        if (local_5b8._Mypair._Myval2._Myfirst != local_5b8._Mypair._Myval2._Mylast) {
          ppuVar25 = &((local_5b8._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend;
          do {
            puVar22 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar25 + -2))->
                      _Myfirst;
            if (puVar22 != (ushort *)0x0) {
              (**(code **)(*(longlong *)ppuVar25[-3] + 0x10))
                        (ppuVar25[-3],puVar22,((longlong)*ppuVar25 - (longlong)puVar22 >> 1) * 2,8);
              ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar25 + -2))->_Myfirst =
                   (ushort *)0x0;
              ppuVar25[-1] = (ushort *)0x0;
              *ppuVar25 = (ushort *)0x0;
            }
            pvVar2 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                      *)(ppuVar25 + 1);
            ppuVar25 = ppuVar25 + 4;
          } while (pvVar2 != local_5b8._Mypair._Myval2._Mylast);
        }
        goto LAB_14c474e3a;
      }
      goto LAB_14c474e61;
    }
LAB_14c474c28:
    if (local_308 !=
        (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
         )0x0) {
      local_5e8.data_ = (AssertHelperData *)local_308;
      if (local_310 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_310 + 0x10))(local_310,&local_5e8);
    }
    if (local_310 != (longlong *)0x0) {
      (**(code **)(*local_310 + 0x20))(local_310,local_310 != (longlong *)(local_350 + 8));
      local_310 = (longlong *)0x0;
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)(local_238 + 0x1b0));
      local_50 = (longlong *)0x0;
    }
    if ((ControlInitializer *)local_238._408_8_ != (ControlInitializer *)0x0) {
      (**(code **)(*(longlong *)local_238._400_8_ + 0x10))
                (local_238._400_8_,local_238._408_8_,
                 local_238._424_8_ - local_238._408_8_ & 0xfffffffffffffff8,8);
      local_238._408_8_ = (ControlInitializer *)0x0;
      local_238._416_8_ = (ControlInitializer *)0x0;
      local_238._424_8_ = (ControlInitializer *)0x0;
    }
    rl4::PSDNet::~PSDNet((PSDNet *)(local_238 + 0x108));
    rl4::ConditionalTable::~ConditionalTable((ConditionalTable *)local_238);
    if (local_578._Mypair._Myval2._Myfirst != (ControlInitializer *)0x0) {
      (**(code **)(*(longlong *)local_578._Mypair._Myval1 + 0x10))
                (local_578._Mypair._Myval1,local_578._Mypair._Myval2._Myfirst,
                 (longlong)local_578._Mypair._Myval2._Myend -
                 (longlong)local_578._Mypair._Myval2._Myfirst & 0xfffffffffffffff8,8);
      local_578._Mypair._Myval2._Myend = (ControlInitializer *)0x0;
      local_578._Mypair._Myval2._Myfirst = (ControlInitializer *)0x0;
      local_578._Mypair._Myval2._Mylast = (ControlInitializer *)0x0;
    }
    if (local_2b0 != (longlong *)0x0) {
      (**(code **)(*local_2b0 + 0x20))(local_2b0,local_2b0 != (longlong *)local_2e8);
      local_2b0 = (longlong *)0x0;
    }
    rl4::PSDNet::~PSDNet(&local_518);
    if (local_598._Mypair._Myval2._Myfirst != (PSD *)0x0) {
      (**(code **)(*(longlong *)local_598._Mypair._Myval1 + 0x10))
                (local_598._Mypair._Myval1,local_598._Mypair._Myval2._Myfirst,
                 (((longlong)local_598._Mypair._Myval2._Myend -
                  (longlong)local_598._Mypair._Myval2._Myfirst) / 0x18) * 0x18,8);
      local_598._Mypair._Myval2._Myend = (PSD *)0x0;
      local_598._Mypair._Myval2._Myfirst = (PSD *)0x0;
      local_598._Mypair._Myval2._Mylast = (PSD *)0x0;
    }
    if (local_558._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      (**(code **)(*(longlong *)local_558._Mypair._Myval1 + 0x10))
                (local_558._Mypair._Myval1,local_558._Mypair._Myval2._Myfirst,
                 ((longlong)local_558._Mypair._Myval2._Myend -
                  (longlong)local_558._Mypair._Myval2._Myfirst >> 1) * 2,8);
      local_558._Mypair._Myval2._Myend = (ushort *)0x0;
      local_558._Mypair._Myval2._Myfirst = (ushort *)0x0;
      local_558._Mypair._Myval2._Mylast = (ushort *)0x0;
    }
    if (local_5d8._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::
      _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                (local_5d8._Mypair._Myval2._Myfirst,local_5d8._Mypair._Myval2._Mylast,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_5d8);
      (**(code **)(*(longlong *)local_5d8._Mypair._Myval1 + 0x10))
                (local_5d8._Mypair._Myval1,local_5d8._Mypair._Myval2._Myfirst,
                 (longlong)local_5d8._Mypair._Myval2._Myend -
                 (longlong)local_5d8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
      local_5d8._Mypair._Myval2._Myend =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_5d8._Mypair._Myval2._Myfirst =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_5d8._Mypair._Myval2._Mylast =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
    }
    if (local_5b8._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::
      _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                (local_5b8._Mypair._Myval2._Myfirst,local_5b8._Mypair._Myval2._Mylast,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_5b8);
LAB_14c474e3a:
      (**(code **)(*(longlong *)local_5b8._Mypair._Myval1 + 0x10))
                (local_5b8._Mypair._Myval1,local_5b8._Mypair._Myval2._Myfirst,
                 (longlong)local_5b8._Mypair._Myval2._Myend -
                 (longlong)local_5b8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
      local_5b8._Mypair._Myval2._Myend =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_5b8._Mypair._Myval2._Myfirst =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_5b8._Mypair._Myval2._Mylast =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
    }
LAB_14c474e61:
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)((longlong)
                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr + 0x10))
                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr,puVar9,0x10,8);
    }
    if (_Src != (undefined4 *)0x0) {
      (**(code **)((longlong)
                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr + 0x10))
                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr,_Src,8);
    }
    rl4::ConditionalTable::~ConditionalTable(&local_488);
    pma::MemoryResource::~MemoryResource(&local_5e0);
  }
  return;
code_r0x00014c474c01:
  if ((PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)local_5f8._Last !=
      (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_5f8._Last);
    ::operator_delete(pvVar2,0x20);
  }
  PVar24 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            )((longlong)PVar24 + 1);
  if ((ulonglong)PVar27 <= (ulonglong)PVar24) goto LAB_14c474c28;
  goto LAB_14c474bb0;
}

// `scalar_deleting_destructor' @ 14c4755b0

void * __thiscall
ControlsTest_PSDsAppendToOutput_Test::_scalar_deleting_destructor_
          (ControlsTest_PSDsAppendToOutput_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c4755f0

Test * __thiscall
testing::internal::TestFactoryImpl<ControlsTest_PSDsAppendToOutput_Test>::CreateTest
          (TestFactoryImpl<ControlsTest_PSDsAppendToOutput_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ControlsTest_PSDsAppendToOutput_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c475630

void * __thiscall
testing::internal::TestFactoryImpl<ControlsTest_PSDsAppendToOutput_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ControlsTest_PSDsAppendToOutput_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ControlsTest_PSDsAppendToOutput_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource> @ 14c475670

PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource> * __thiscall
pma::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::
PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>
          (PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *this = (PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>)
          &`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
           ::__l2::dmr;
  return this;
}

// vector<rl4::ControlInitializer,pma::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>_> @ 14c4756f0

vector<rl4::ControlInitializer,pma::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>_>
* __thiscall
std::
vector<rl4::ControlInitializer,pma::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>_>
::
vector<rl4::ControlInitializer,pma::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>_>
          (vector<rl4::ControlInitializer,pma::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>_>
           *this)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)_tls_index;
  (this->_Mypair)._Myval1 = (PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>)0x0
  ;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (this->_Mypair)._Myval1 =
       (PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  (this->_Mypair)._Myval2._Myfirst = (ControlInitializer *)0x0;
  (this->_Mypair)._Myval2._Mylast = (ControlInitializer *)0x0;
  (this->_Mypair)._Myval2._Myend = (ControlInitializer *)0x0;
  return this;
}

// ~Controls @ 14c475780

void __thiscall rl4::Controls::~Controls(Controls *this)

{
  longlong *plVar1;
  ControlInitializer *pCVar2;
  PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource> PVar3;
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,(function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
                       *)plVar1 != &this->instanceFactory);
    *(undefined8 *)&(this->instanceFactory).field_0x38 = 0;
  }
  pCVar2 = (this->initialValues)._Mypair._Myval2._Myfirst;
  if (pCVar2 != (ControlInitializer *)0x0) {
    PVar3 = (this->initialValues)._Mypair._Myval1;
    (**(code **)(*(longlong *)PVar3 + 0x10))
              (PVar3,pCVar2,
               (longlong)(this->initialValues)._Mypair._Myval2._Myend - (longlong)pCVar2 &
               0xfffffffffffffff8,8);
    (this->initialValues)._Mypair._Myval2._Myfirst = (ControlInitializer *)0x0;
    (this->initialValues)._Mypair._Myval2._Mylast = (ControlInitializer *)0x0;
    (this->initialValues)._Mypair._Myval2._Myend = (ControlInitializer *)0x0;
  }
  PSDNet::~PSDNet(&this->psds);
  ConditionalTable::~ConditionalTable(&this->guiToRawMapping);
  return;
}

// _Tidy @ 14c475820

void __thiscall
std::vector<rl4::PSD,pma::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>_>::_Tidy
          (vector<rl4::PSD,pma::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>_> *this)

{
  PSD *pPVar1;
  PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource> PVar2;
  
  pPVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pPVar1 != (PSD *)0x0) {
    PVar2 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,pPVar1,
               (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pPVar1) / 0x18) * 0x18,8);
    (this->_Mypair)._Myval2._Myfirst = (PSD *)0x0;
    (this->_Mypair)._Myval2._Mylast = (PSD *)0x0;
    (this->_Mypair)._Myval2._Myend = (PSD *)0x0;
  }
  return;
}

