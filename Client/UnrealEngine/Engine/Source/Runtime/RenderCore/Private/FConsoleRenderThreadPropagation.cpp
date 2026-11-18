// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// OnCVarChange @ 145e1d370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConsoleRenderThreadPropagation::OnCVarChange
          (FConsoleRenderThreadPropagation *this,int *param_1,int param_2)

{
  FRenderCommandList *this_00;
  code *pcVar1;
  bool bVar2;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  int *piStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  int *piStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__OnCVarChange_FConsoleRenderThreadPropagation__UEAAXAEAHH_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  uStack_64 = auStack_b8._44_4_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  this_00 = *(FRenderCommandList **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0
             );
  piStack_70 = param_1;
  local_68 = param_2;
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FConsoleRenderThreadPropagation::OnCVarChange_::__l2::TSTR_OnCVarChange1501>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._4_4_ = uStack_64;
    local_38._0_4_ = local_68;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    piStack_40 = piStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::TSTR_OnCVarChange1501>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// OnCVarChange @ 145e1d4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConsoleRenderThreadPropagation::OnCVarChange
          (FConsoleRenderThreadPropagation *this,float *param_1,float param_2)

{
  FRenderCommandList *this_00;
  code *pcVar1;
  bool bVar2;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  float *pfStack_70;
  float local_68;
  undefined4 uStack_64;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  float *pfStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__OnCVarChange_FConsoleRenderThreadPropagation__UEAAXAEAMM_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  uStack_64 = auStack_b8._44_4_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  this_00 = *(FRenderCommandList **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0
             );
  pfStack_70 = param_1;
  local_68 = param_2;
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FConsoleRenderThreadPropagation::OnCVarChange_::__l2::TSTR_OnCVarChange2511>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._4_4_ = uStack_64;
    local_38._0_4_ = local_68;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pfStack_40 = pfStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::TSTR_OnCVarChange2511>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// OnCVarChange @ 145e1d670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConsoleRenderThreadPropagation::OnCVarChange
          (FConsoleRenderThreadPropagation *this,FName *param_1,FName *param_2)

{
  FRenderCommandList *this_00;
  code *pcVar1;
  bool bVar2;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FName *pFStack_70;
  FName local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FName *pFStack_40;
  FName local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__OnCVarChange_FConsoleRenderThreadPropagation__UEAAXAEAVFName__AEBV4__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_68 = *param_2;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  this_00 = *(FRenderCommandList **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0
             );
  pFStack_70 = param_1;
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FConsoleRenderThreadPropagation::OnCVarChange_::__l2::TSTR_OnCVarChange3541>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::TSTR_OnCVarChange3541>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// OnCVarChange @ 145e1d7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConsoleRenderThreadPropagation::OnCVarChange
          (FConsoleRenderThreadPropagation *this,FString *param_1,FString *param_2)

{
  FRenderCommandList *this_00;
  code *pcVar1;
  bool bVar2;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  FString *local_a8;
  FString local_a0;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  ::FString::FString(&local_a0,param_2);
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  ppcVar4 = local_60 + 1;
  *local_60 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__OnCVarChange_FConsoleRenderThreadPropagation__UEAAXAEAVFString__AEBV4__Z__00_00_Function_Private_Core_UE__6B_
  ;
  *ppcVar4 = (code *)local_a8;
  ::FString::FString((FString *)(local_60 + 2),&local_a0);
  if (ppcVar4 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = *(FRenderCommandList **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0
             );
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FConsoleRenderThreadPropagation::OnCVarChange_::__l2::TSTR_OnCVarChange3531>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::TSTR_OnCVarChange3531>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar4 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar4 = local_30;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar4 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar4 = local_60;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return;
}

// OnCVarChange @ 145e1d9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConsoleRenderThreadPropagation::OnCVarChange
          (FConsoleRenderThreadPropagation *this,bool *param_1,bool param_2)

{
  FRenderCommandList *this_00;
  code *pcVar1;
  bool bVar2;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  bool *pbStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  bool *pbStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__OnCVarChange_FConsoleRenderThreadPropagation__UEAAXAEA_N_N_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  uStack_67 = auStack_b8._41_4_;
  uStack_63 = auStack_b8._45_2_;
  uStack_61 = auStack_b8[0x2f];
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  this_00 = *(FRenderCommandList **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0
             );
  pbStack_70 = param_1;
  local_68 = param_2;
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FConsoleRenderThreadPropagation::OnCVarChange_::__l2::TSTR_OnCVarChange2521>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._1_4_ = uStack_67;
    local_38._0_1_ = local_68;
    local_38._5_2_ = uStack_63;
    local_38._7_1_ = uStack_61;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pbStack_40 = pbStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::TSTR_OnCVarChange2521>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

