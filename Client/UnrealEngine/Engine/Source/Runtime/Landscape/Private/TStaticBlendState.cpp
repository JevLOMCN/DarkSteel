// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// CreateRHI @ 145f4f650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRefCountPtr<FRHIBlendState> __cdecl
TStaticBlendState<3,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
::CreateRHI(void)

{
  FRHIBlendState *in_RCX;
  undefined1 auStackY_c8 [32];
  FLLMScope local_98 [2];
  FMemScope local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 uStack_82;
  undefined4 uStack_81;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 local_74;
  undefined1 local_70;
  undefined2 uStack_6f;
  undefined1 uStack_6d;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 uStack_66;
  undefined4 uStack_65;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined2 uStack_5e;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined4 local_58;
  undefined1 local_54;
  undefined2 uStack_53;
  undefined1 uStack_51;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 local_49;
  undefined2 local_45;
  undefined1 local_43;
  undefined4 local_42;
  undefined2 local_3e;
  undefined1 local_3c;
  undefined4 local_3b;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2d;
  undefined2 local_29;
  undefined1 local_27;
  undefined4 local_26;
  undefined2 local_22;
  undefined1 local_20;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_84 = 1;
  uStack_82 = 3;
  uStack_81 = 0x100;
  uStack_7d = 1;
  uStack_7c = 0;
  uStack_7b = 0xf;
  uStack_7a = 0x100;
  local_78 = 0;
  uStack_76 = 1;
  local_70 = 0;
  uStack_6f = 1;
  uStack_6d = 0xf;
  local_68 = 1;
  uStack_66 = 0xf;
  uStack_65 = 0x100;
  uStack_61 = 1;
  uStack_60 = 0;
  uStack_5f = 0xf;
  uStack_5e = 0x100;
  local_5c = 0;
  uStack_5a = 1;
  local_88 = 0x100;
  local_50 = 0x100;
  local_4c = 1;
  local_49 = 0x100;
  local_45 = 1;
  local_42 = 0x100;
  local_3e = 1;
  local_54 = 0;
  uStack_53 = 1;
  uStack_51 = 0xf;
  local_74 = 0x1000f;
  local_3b = 0x100;
  local_37 = 1;
  local_6c = 0x100;
  local_34 = 0x100;
  local_30 = 1;
  local_2d = 0x100;
  local_29 = 1;
  local_26 = 0x100;
  local_22 = 1;
  local_58 = 0x1000f;
  local_1f = 0x100;
  local_1b = 1;
  local_18 = 1;
  local_4a = 3;
  local_43 = 0xf;
  local_3c = 0xf;
  local_35 = 0xf;
  local_2e = 0xf;
  local_27 = 0xf;
  local_20 = 0xf;
  local_19 = 0xf;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1165,L"RHIMisc/CreateBlendState");
      _Init_thread_footer(&`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_98,`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1165,false,None,Default,true);
  FMemScope::FMemScope
            (&local_90,
             &`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1165,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x60))();
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_98);
  return (TRefCountPtr<FRHIBlendState>)in_RCX;
}

