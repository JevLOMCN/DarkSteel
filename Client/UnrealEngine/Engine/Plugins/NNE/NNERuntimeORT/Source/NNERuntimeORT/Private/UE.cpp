// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 42

// Construct<FThreadingOptions> @ 14eb01620

void __cdecl UE::CoreUObject::Private::Construct<FThreadingOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FThreadingOptions> @ 14eb01630

void __cdecl UE::CoreUObject::Private::ConstructForTests<FThreadingOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FThreadingOptions> @ 14eb01690

void __cdecl UE::CoreUObject::Private::Destruct<FThreadingOptions>(void *param_1)

{
  return;
}

// Copy<FThreadingOptions> @ 14eb016a0

bool __cdecl
UE::CoreUObject::Private::Copy<FThreadingOptions>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// <lambda_invoker_cdecl> @ 14eb01cf0

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

void __cdecl
`UE::NNERuntimeORT::Private::CreateTensor'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void *param_1)

{
  OrtStatus *pOVar1;
  void *local_res10 [3];
  
  pOVar1 = (*Ort::Global<void>::api_->GetExecutionProviderApi)("DML",0x14,local_res10);
  Ort::ThrowOnError(pOVar1);
  (**(code **)((longlong)local_res10[0] + 0x18))(param_1);
  return;
}

// CreateTensor<UE::NNE::FTensorBindingCPU> @ 14eb02cd0

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

Value __cdecl
UE::NNERuntimeORT::Private::CreateTensor<UE::NNE::FTensorBindingCPU>
          (MemoryInfo *param_1,FTensorBindingCPU *param_2,FTensor *param_3,
          ONNXTensorElementDataType param_4)

{
  int iVar1;
  ulong64 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  ulong64 _Size;
  ulonglong *_Dst;
  Value VVar7;
  OrtStatus *pOVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 in_register_0000008c;
  longlong lVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ONNXTensorElementDataType in_stack_00000028;
  MemoryInfo local_58 [3];
  
  lVar12 = CONCAT44(in_register_0000008c,param_4);
  uVar2 = *(ulong64 *)(lVar12 + 0x30);
  iVar1 = *(int *)(lVar12 + 0x28);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)iVar1;
  _Size = SUB168(ZEXT816(8) * auVar4,0);
  if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
    _Size = 0xffffffffffffffff;
  }
  _Dst = operator_new__(_Size);
  if (_Dst == (ulonglong *)0x0) {
    _Dst = (ulonglong *)0x0;
  }
  else {
    memset(_Dst,0,_Size);
  }
  iVar9 = *(int *)(lVar12 + 0x28);
  uVar11 = 0;
  if (0 < iVar9) {
    lVar13 = 0;
    puVar14 = _Dst;
    do {
      lVar10 = lVar12;
      if (*(longlong *)(lVar12 + 0x20) != 0) {
        lVar10 = *(longlong *)(lVar12 + 0x20);
      }
      if ((iVar9 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        VVar7 = (Value)(*pcVar3)();
        return VVar7;
      }
      uVar6 = 0;
      if ((int)uVar11 < iVar9) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        VVar7 = (Value)(*pcVar3)();
        return VVar7;
      }
      uVar11 = uVar11 + 1;
      *puVar14 = (ulonglong)*(uint *)(lVar13 + lVar10);
      lVar13 = lVar13 + 4;
      iVar9 = *(int *)(lVar12 + 0x28);
      puVar14 = puVar14 + 1;
    } while ((int)uVar11 < iVar9);
  }
  pOVar8 = (*Ort::Global<void>::api_->CreateTensorWithDataAsOrtValue)
                     (param_2->Data,*(void **)(param_3->Shape).Data.AllocatorInstance.InlineData,
                      uVar2,(long64 *)_Dst,(ulong64)iVar1,in_stack_00000028,(OrtValue **)local_58);
  Ort::ThrowOnError(pOVar8);
  *param_1 = local_58[0];
  operator_delete__(_Dst);
  return (Value)param_1;
}

// GuardedOrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,void_const_*,unsigned___int64,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,unsigned_char_const_*,__int64,Ort::SessionOptions_const_&,OrtSession_*_*> @ 14eb03420

bool __cdecl
UE::NNERuntimeORT::Private::
GuardedOrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,void_const_*,unsigned___int64,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,unsigned_char_const_*,__int64,Ort::SessionOptions_const_&,OrtSession_*_*>
          (_func___cdecl_OrtStatus_ptr_OrtEnv_ptr_void_ptr_ulong64_OrtSessionOptions_ptr_OrtSession_ptr_ptr
           **param_1,Env *param_2,uchar **param_3,long64 *param_4,SessionOptions *param_5,
          OrtSession ***param_6)

{
  bool bVar1;
  
  bVar1 = FWindowsPlatformMisc::IsDebuggerPresent();
  if (bVar1) {
    bVar1 = OrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,void_const_*,unsigned___int64,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,unsigned_char_const_*,__int64,Ort::SessionOptions_const_&,OrtSession_*_*>
                      (param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    bVar1 = OrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,void_const_*,unsigned___int64,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,unsigned_char_const_*,__int64,Ort::SessionOptions_const_&,OrtSession_*_*>
                      (param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return bVar1;
}

// GuardedOrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,wchar_t_const_*,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,wchar_t_const_*,Ort::SessionOptions_const_&,OrtSession_*_*> @ 14eb034e0

bool __cdecl
UE::NNERuntimeORT::Private::
GuardedOrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,wchar_t_const_*,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,wchar_t_const_*,Ort::SessionOptions_const_&,OrtSession_*_*>
          (_func___cdecl_OrtStatus_ptr_OrtEnv_ptr_wchar_t_ptr_OrtSessionOptions_ptr_OrtSession_ptr_ptr
           **param_1,Env *param_2,wchar_t **param_3,SessionOptions *param_4,OrtSession ***param_5)

{
  bool bVar1;
  
  bVar1 = FWindowsPlatformMisc::IsDebuggerPresent();
  if (bVar1) {
    bVar1 = OrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,wchar_t_const_*,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,wchar_t_const_*,Ort::SessionOptions_const_&,OrtSession_*_*>
                      (param_1,param_2,param_3,param_4,param_5);
  }
  else {
    bVar1 = OrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,wchar_t_const_*,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,wchar_t_const_*,Ort::SessionOptions_const_&,OrtSession_*_*>
                      (param_1,param_2,param_3,param_4,param_5);
  }
  return bVar1;
}

// OrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,void_const_*,unsigned___int64,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,unsigned_char_const_*,__int64,Ort::SessionOptions_const_&,OrtSession_*_*> @ 14eb04be0

/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::NNERuntimeORT::Private::
OrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,void_const_*,unsigned___int64,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,unsigned_char_const_*,__int64,Ort::SessionOptions_const_&,OrtSession_*_*>
          (_func___cdecl_OrtStatus_ptr_OrtEnv_ptr_void_ptr_ulong64_OrtSessionOptions_ptr_OrtSession_ptr_ptr
           **param_1,Env *param_2,uchar **param_3,long64 *param_4,SessionOptions *param_5,
          OrtSession ***param_6)

{
  OrtStatus *pOVar1;
  
  pOVar1 = (**param_1)((OrtEnv *)*param_2,*param_3,*param_4,(OrtSessionOptions *)*param_5,*param_6);
  if (pOVar1 != (OrtStatus *)0x0) {
    (*Ort::Global<void>::api_->GetErrorCode)(pOVar1);
    (*Ort::Global<void>::api_->GetErrorMessage)(pOVar1);
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>
                (&`bool___cdecl_UE::NNERuntimeORT::Private::OrtApiCallWithStatus<struct_OrtStatus*___ptr64_(__cdecl*const&___ptr64)(OrtEnv_const*___ptr64,void_const*___ptr64,unsigned___int64,OrtSessionOptions_const*___ptr64,OrtSession*___ptr64*___ptr64)_noexcept,Ort::Env_const&___ptr64,unsigned_char_const*___ptr64,__int64,Ort::SessionOptions_const&___ptr64,OrtSession*___ptr64*___ptr64>(struct_OrtStatus*___ptr64_(__cdecl*const&___ptr64)(OrtEnv_const*___ptr64,void_const*___ptr64,unsigned___int64,OrtSessionOptions_const*___ptr64,OrtSession*___ptr64*___ptr64)_noexcept,Ort::Env_const&___ptr64,unsigned_char_const*___ptr64&&___ptr64,__int64&&___ptr64,Ort::SessionOptions_const&___ptr64,OrtSession*___ptr64*___ptr64&&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
    return false;
  }
  return true;
}

// OrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,wchar_t_const_*,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,wchar_t_const_*,Ort::SessionOptions_const_&,OrtSession_*_*> @ 14eb04c90

/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::NNERuntimeORT::Private::
OrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,wchar_t_const_*,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,wchar_t_const_*,Ort::SessionOptions_const_&,OrtSession_*_*>
          (_func___cdecl_OrtStatus_ptr_OrtEnv_ptr_wchar_t_ptr_OrtSessionOptions_ptr_OrtSession_ptr_ptr
           **param_1,Env *param_2,wchar_t **param_3,SessionOptions *param_4,OrtSession ***param_5)

{
  OrtStatus *pOVar1;
  
  pOVar1 = (**param_1)((OrtEnv *)*param_2,*param_3,(OrtSessionOptions *)*param_4,*param_5);
  if (pOVar1 != (OrtStatus *)0x0) {
    (*Ort::Global<void>::api_->GetErrorCode)(pOVar1);
    (*Ort::Global<void>::api_->GetErrorMessage)(pOVar1);
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>
                (&`bool___cdecl_UE::NNERuntimeORT::Private::OrtApiCallWithStatus<struct_OrtStatus*___ptr64_(__cdecl*const&___ptr64)(OrtEnv_const*___ptr64,wchar_t_const*___ptr64,OrtSessionOptions_const*___ptr64,OrtSession*___ptr64*___ptr64)_noexcept,Ort::Env_const&___ptr64,wchar_t_const*___ptr64,Ort::SessionOptions_const&___ptr64,OrtSession*___ptr64*___ptr64>(struct_OrtStatus*___ptr64_(__cdecl*const&___ptr64)(OrtEnv_const*___ptr64,wchar_t_const*___ptr64,OrtSessionOptions_const*___ptr64,OrtSession*___ptr64*___ptr64)_noexcept,Ort::Env_const&___ptr64,wchar_t_const*___ptr64&&___ptr64,Ort::SessionOptions_const&___ptr64,OrtSession*___ptr64*___ptr64&&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
    return false;
  }
  return true;
}

// operator() @ 14eb09d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
`UE::NNERuntimeORT::Private::GetAdapterNpu'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,IDXCoreAdapter *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  size_t sVar7;
  ulonglong uVar8;
  undefined1 auStackY_1b8 [32];
  FScriptContainerElement local_168 [8];
  ForAnyElementType local_160;
  int local_158;
  int local_154;
  ulonglong local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  cVar3 = (**(code **)((longlong)*param_1 + 0x28))(param_1,2);
  if (cVar3 != '\0') {
    local_150 = 0;
    iVar5 = (**(code **)((longlong)*param_1 + 0x38))(param_1,2,&local_150);
    uVar8 = local_150;
    if (-1 < iVar5) {
      local_160.Data = (FScriptContainerElement *)0x0;
      local_154 = 0;
      local_168[0] = (FScriptContainerElement)0x0;
      iVar5 = (int)local_150;
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_150 & 0xffffffff);
      }
      local_158 = 0;
      if ((iVar5 != 0) &&
         (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar5,&local_160,0,&local_154), 0 < iVar5)) {
        uVar8 = uVar8 & 0xffffffff;
        do {
          if (((local_160.Data <= local_168) && (local_168 < local_160.Data + local_154)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar1)();
            return pFVar6;
          }
          if (local_158 == local_154) {
            local_158 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x101,&local_160,&local_154);
          }
          iVar5 = local_158 + 1;
          local_160.Data[local_158] = local_168[0];
          uVar8 = uVar8 - 1;
          local_158 = iVar5;
        } while (uVar8 != 0);
      }
      iVar5 = (**(code **)((longlong)*param_1 + 0x30))(param_1,2,local_150,local_160.Data);
      FVar2.Data = local_160.Data;
      if (iVar5 < 0) {
        ::FString::FString(__return_storage_ptr__,L"Unknown device");
      }
      else {
        local_148._padding_ = 0;
        if (local_160.Data == (FScriptContainerElement *)0x0) {
          local_148.Ptr = (wchar_t *)0x0;
          local_148.StringLength = 0;
        }
        else {
          sVar7 = strlen((char *)local_160.Data);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,(char *)FVar2.Data,(int)sVar7,Yes);
        }
        ::FString::FString(__return_storage_ptr__,local_148.Ptr);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      if (local_160.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_160.Data);
      return __return_storage_ptr__;
    }
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown device");
  return __return_storage_ptr__;
}

// operator() @ 14eb0a890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::NNERuntimeORT::Private::GetAdapterNpu'::__l66::<lambda_2>::operator()
          (void *this,IDXCoreAdapterList *param_1,IDXCoreAdapter **param_2)

{
  IDXCoreAdapter *pIVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  IDXCoreAdapter *local_res10;
  
  uVar5 = 0;
  uVar3 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
  if (uVar3 != 0) {
    do {
      local_res10 = (IDXCoreAdapter *)0x0;
      iVar4 = (**(code **)((longlong)*param_1 + 0x18))
                        (param_1,uVar5,&_GUID_f0db4c7f_fe5a_42a2_bd62_f2a6cf6fc83e,&local_res10);
      if (iVar4 < 0) {
        if (2 < (byte)LogNNERuntimeORT._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
      }
      else {
        cVar2 = (**(code **)((longlong)*local_res10 + 0x20))
                          (local_res10,&DXCORE_ADAPTER_ATTRIBUTE_D3D12_GRAPHICS);
        if (cVar2 == '\0') {
          *param_2 = local_res10;
          return;
        }
      }
      pIVar1 = local_res10;
      if (local_res10 != (IDXCoreAdapter *)0x0) {
        local_res10 = (IDXCoreAdapter *)0x0;
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  *param_2 = (IDXCoreAdapter *)0x0;
  return;
}

// CalcRDGBufferSizeForDirectML @ 14eb0bd00

ulong64 __cdecl UE::NNERuntimeORT::Private::CalcRDGBufferSizeForDirectML(ulong64 param_1)

{
  return param_1 + 3 & 0xfffffffffffffffc;
}

// CreateD3D12Device @ 14eb0f990

/* WARNING: Enum "Type": Some values do not have unique names */

ComPtr<ID3D12Device1> __cdecl
UE::NNERuntimeORT::Private::CreateD3D12Device(IUnknown *param_1,D3D_FEATURE_LEVEL param_2)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  FStaticBasicLogRecord *pFVar4;
  IUnknown IVar5;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  IUnknown local_18 [2];
  
  pvVar2 = FWindowsPlatformProcess::GetDllHandle(L"d3d12.dll");
  if (pvVar2 == (void *)0x0) {
    if ((byte)LogNNERuntimeORT._0_1_ < 5) goto LAB_14eb0fa00;
    pFVar4 = &::LOG_Static;
  }
  else {
    pcVar3 = FWindowsPlatformProcess::GetDllExport(pvVar2,L"D3D12CreateDevice");
    if (pcVar3 != (code *)0x0) {
      local_18[0] = (IUnknown)0x0;
      iVar1 = (*pcVar3)(CONCAT44(in_register_00000014,param_2),in_R8D,
                        &_GUID_77acce80_638e_4e65_8895_c1f23386863e,local_18);
      if (iVar1 < 0) {
        if (4 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
        *param_1 = (IUnknown)0x0;
        IVar5 = local_18[0];
      }
      else {
        *param_1 = (IUnknown)0x0;
        IVar5 = local_18[0];
        if (param_1 != local_18) {
          *param_1 = local_18[0];
          IVar5 = (IUnknown)0x0;
        }
      }
      if (IVar5 == (IUnknown)0x0) {
        return (ComPtr<ID3D12Device1>)(ID3D12Device1 *)param_1;
      }
      local_18[0] = (IUnknown)0x0;
      (**(code **)(*(longlong *)IVar5 + 0x10))();
      return (ComPtr<ID3D12Device1>)(ID3D12Device1 *)param_1;
    }
    if ((byte)LogNNERuntimeORT._0_1_ < 5) goto LAB_14eb0fa00;
    pFVar4 = &::LOG_Static;
  }
  Logging::Private::BasicLog<5>(pFVar4,(FLogCategoryBase *)&LogNNERuntimeORT);
LAB_14eb0fa00:
  *param_1 = (IUnknown)0x0;
  return (ComPtr<ID3D12Device1>)(ID3D12Device1 *)param_1;
}

// CreateOrtEnvFromSettings @ 14eb11bc0

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

void __cdecl
UE::NNERuntimeORT::Private::EnvironmentHelper::CreateOrtEnvFromSettings
          (UNNERuntimeORTSettings *param_1,FEnvironment *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar4;
  Env EVar3;
  code *pcVar5;
  bool bVar6;
  undefined4 local_18;
  
  uVar2 = (param_1->GameThreadingOptions).bUseGlobalThreadPool;
  uVar4 = (param_1->GameThreadingOptions).IntraOpNumThreads;
  lpCriticalSection = &param_2->CriticalSection;
  iVar1 = (param_1->GameThreadingOptions).InterOpNumThreads;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar3 = param_2->OrtEnvironment;
  (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)0x0);
  if (EVar3 != (Env)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("OrtEnvironment == Ort::Env(nullptr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTEnv.cpp"
                       ,0x12,L"Ort::Env already created!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (param_2->Config).bUseGlobalThreadPool = (bool)uVar2;
  *(undefined3 *)&(param_2->Config).field_0x1 = local_18._1_3_;
  (param_2->Config).IntraOpNumThreads = uVar4;
  (param_2->Config).InterOpNumThreads = iVar1;
                    /* WARNING: Could not recover jumptable at 0x00014eb11c61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// CreateOrtSession @ 14eb11c80

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> __cdecl
UE::NNERuntimeORT::Private::CreateOrtSession
          (FEnvironment *param_1,FString *param_2,SessionOptions *param_3)

{
  code *pcVar1;
  bool bVar2;
  Env *pEVar3;
  TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> TVar4;
  longlong *plVar5;
  longlong *plVar6;
  SessionOptions *in_R9;
  OrtSession *local_res18 [2];
  OrtSession **local_18;
  SessionOptions local_10;
  
  local_18 = local_res18;
  local_res18[0] = (OrtSession *)0x0;
  if (*(int *)(param_3 + 1) == 0) {
    local_10 = (SessionOptions)0x15060d16c;
  }
  else {
    local_10 = *param_3;
  }
  pEVar3 = FEnvironment::GetOrtEnv((FEnvironment *)param_2);
  bVar2 = GuardedOrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,wchar_t_const_*,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,wchar_t_const_*,Ort::SessionOptions_const_&,OrtSession_*_*>
                    (&Ort::Global<void>::api_->CreateSession,pEVar3,(wchar_t **)&local_10,in_R9,
                     &local_18);
  plVar6 = (longlong *)0x0;
  if (bVar2) {
    if (local_res18[0] == (OrtSession *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SessionPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTUtils.cpp"
                         ,0x37a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (Session *)(*pcVar1)();
        return (TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_>)TVar4.Ptr;
      }
    }
    plVar5 = ::operator_new(8);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)local_res18[0];
      plVar6 = plVar5;
    }
  }
  *(longlong **)&param_1->Config = plVar6;
  return (TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_>)(Session *)param_1;
}

// CreateOrtSessionFromArray @ 14eb11d60

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> __cdecl
UE::NNERuntimeORT::Private::CreateOrtSessionFromArray
          (FEnvironment *param_1,TArrayView<unsigned_char_const_,__int64> *param_2,
          SessionOptions *param_3)

{
  code *pcVar1;
  bool bVar2;
  Env *pEVar3;
  TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> TVar4;
  longlong *plVar5;
  longlong *plVar6;
  SessionOptions *in_R9;
  OrtSession *local_res18 [2];
  OrtSession **local_28;
  SessionOptions local_20;
  SessionOptions local_18 [2];
  
  local_28 = local_res18;
  local_20 = param_3[1];
  local_18[0] = *param_3;
  local_res18[0] = (OrtSession *)0x0;
  pEVar3 = FEnvironment::GetOrtEnv((FEnvironment *)param_2);
  bVar2 = GuardedOrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,void_const_*,unsigned___int64,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,unsigned_char_const_*,__int64,Ort::SessionOptions_const_&,OrtSession_*_*>
                    (&Ort::Global<void>::api_->CreateSessionFromArray,pEVar3,(uchar **)local_18,
                     (long64 *)&local_20,in_R9,&local_28);
  plVar6 = (longlong *)0x0;
  if (bVar2) {
    if (local_res18[0] == (OrtSession *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SessionPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTUtils.cpp"
                         ,0x363,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (Session *)(*pcVar1)();
        return (TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_>)TVar4.Ptr;
      }
    }
    plVar5 = ::operator_new(8);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)local_res18[0];
      plVar6 = plVar5;
    }
  }
  *(longlong **)&param_1->Config = plVar6;
  return (TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_>)(Session *)param_1;
}

// CreateSession @ 14eb11e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */

bool __cdecl
UE::NNERuntimeORT::Private::Detail::CreateSession
          (TArrayView<unsigned_char_const_,__int64> *param_1,SessionOptions *param_2,
          FEnvironment *param_3,TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> *param_4,
          FString *param_5)

{
  uchar *puVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulong64 uVar5;
  int iVar6;
  TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> TVar7;
  FOnnxAdditionalDataDescriptor *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  FString *pFVar13;
  FGuid *this;
  IFileManager *pIVar15;
  Env *pEVar16;
  Session *pSVar17;
  ulonglong uVar18;
  SessionOptions *pSVar19;
  undefined7 uVar23;
  wchar_t *pwVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  int iVar24;
  ForAnyElementType FVar25;
  FScriptContainerElement *pFVar26;
  undefined1 local_2e8 [4];
  uint local_2e4;
  int local_2e0;
  ulong64 local_2d8;
  TArray<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_>
  TStack_2d0;
  uint local_2c0;
  Session local_2b8;
  Session local_2b0;
  FString local_2a8;
  FString local_298;
  FString local_288;
  TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> local_278;
  TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> local_270;
  FString local_268;
  FString local_258;
  FGuid local_248;
  FString local_238;
  longlong local_228;
  FOnnxAdditionalDataDescriptor *local_220;
  Session *local_218;
  FScriptContainerElement *local_210;
  Session *local_208;
  ulong64 local_200;
  FString local_1f8;
  uchar *local_1e8 [2];
  FMemoryReaderView local_1d8;
  uchar *local_128;
  ulong64 uStack_120;
  TArrayView<unsigned_char_const_,__int64> local_118;
  TStringView<wchar_t> local_108;
  FScriptContainerElement *local_f8;
  int local_f0;
  TStringView<wchar_t> local_e8;
  wchar_t *local_d8;
  undefined4 local_d0;
  TStringView<wchar_t> local_c8;
  FScriptContainerElement *local_b8;
  int local_b0;
  TStringView<wchar_t> local_a8;
  wchar_t *local_98;
  undefined4 local_90;
  FString local_88;
  TArrayView<unsigned_char_const_,__int64> local_78;
  FGuid local_68;
  FString local_58;
  size_t sVar14;
  
  puVar1 = param_1->DataPtr;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  pSVar19 = param_2;
  FArchiveState::FArchiveState((FArchiveState *)&local_1d8);
  local_1d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_1d8.Bytes.Size = param_1->ArrayNum;
  pSVar17 = (Session *)0x0;
  uVar23 = (undefined7)((ulonglong)pSVar19 >> 8);
  local_1d8._padding_ = 0;
  local_1d8.LimitSize = 0x7fffffffffffffff;
  local_1d8.Bytes.Data = puVar1;
  FArchiveState::SetIsLoading((FArchiveState *)&local_1d8,true);
  (**(code **)(local_1d8._padding_ + 0x108))(&local_1d8,CONCAT71(uVar23,1));
  local_248.A = 0;
  local_248.B = 0;
  local_248.C = 0;
  local_248.D = 0;
  ::operator<<((FArchive *)&local_1d8,&local_248);
  if (*(uint **)(local_1d8._padding_ + 8) < *(uint **)local_1d8._padding_ + 1) {
    if ((local_1d8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1d8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
        FMemoryReaderView::Serialize(&local_1d8,&local_2e4,4);
      }
      else {
        (**(code **)(local_1d8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1d8,&local_2e4);
    }
  }
  else {
    local_2e4 = **(uint **)local_1d8._padding_;
    *(longlong *)local_1d8._padding_ = *(longlong *)local_1d8._padding_ + 4;
  }
  local_2d8 = 0;
  TStack_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_2d0.ArrayNum = 0;
  TStack_2d0.ArrayMax = 0;
  if (*(ulong64 **)(local_1d8._padding_ + 8) < *(ulong64 **)local_1d8._padding_ + 1) {
    if ((local_1d8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1d8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
        FMemoryReaderView::Serialize(&local_1d8,&local_2d8,8);
      }
      else {
        (**(code **)(local_1d8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1d8,&local_2d8);
    }
  }
  else {
    local_2d8 = **(ulong64 **)local_1d8._padding_;
    *(longlong *)local_1d8._padding_ = *(longlong *)local_1d8._padding_ + 8;
  }
  TArrayPrivateFriend::
  Serialize<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_1d8,&TStack_2d0);
  uVar5 = local_2d8;
  local_228 = local_1d8._padding_;
  uStack_120 = local_2d8;
  puVar1 = puVar1 + local_1d8._padding_;
  local_128 = puVar1;
  if ((longlong)local_2d8 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
  }
  else if (local_2d8 == 0) {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      pSVar17 = (Session *)0x0;
    }
    goto LAB_14eb126a4;
  }
  iVar24 = 0;
  if (TStack_2d0.ArrayNum < 1) {
    local_208 = &local_2b0;
    local_2b0 = (Session)0x0;
    local_200 = uVar5;
    local_1e8[0] = puVar1;
    pEVar16 = FEnvironment::GetOrtEnv(param_3);
    bVar9 = GuardedOrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,void_const_*,unsigned___int64,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,unsigned_char_const_*,__int64,Ort::SessionOptions_const_&,OrtSession_*_*>
                      (&Ort::Global<void>::api_->CreateSessionFromArray,pEVar16,local_1e8,
                       (long64 *)&local_200,param_2,(OrtSession ***)&local_208);
    local_270.Ptr = pSVar17;
    if (bVar9) {
      if ((local_2b0 == (Session)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("SessionPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTUtils.cpp"
                             ,0x363,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      pSVar17 = ::operator_new(8);
      if (pSVar17 != (Session *)0x0) {
        *pSVar17 = local_2b0;
        local_270.Ptr = pSVar17;
      }
    }
    TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_>::operator=(param_4,&local_270);
    TVar7.Ptr = local_270.Ptr;
    if (local_270.Ptr != (Session *)0x0) {
      (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*local_270.Ptr);
      ::operator_delete(TVar7.Ptr,8);
    }
  }
  else {
    iVar12 = (param_5->Data).ArrayNum;
    if (iVar12 < 2) {
      pFVar13 = FPaths::ProjectIntermediateDir(&local_88);
      FPaths::ConvertRelativePathToFull(&local_238,pFVar13);
      FVar25.Data = (FScriptContainerElement *)pSVar17;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      do {
        this = FGuid::NewGuid(&local_68);
        local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2a8.Data.ArrayNum = 0;
        local_2a8.Data.ArrayMax = 0;
        FGuid::AppendString(this,&local_2a8,Digits);
        ::FString::PrintfImpl(&local_1f8,L"ORTModel_%s");
        local_f8 = (FScriptContainerElement *)L"";
        if (local_1f8.Data.ArrayNum != 0) {
          local_f8 = local_1f8.Data.AllocatorInstance.Data;
        }
        local_108.DataPtr = (wchar_t *)local_238.Data.AllocatorInstance.Data;
        local_108.Size = local_238.Data.ArrayNum + -1;
        if (local_238.Data.ArrayNum == 0) {
          local_108.Size = iVar24;
        }
        iVar12 = iVar24;
        if (local_f8 != (FScriptContainerElement *)0x0) {
          sVar14 = wcslen((wchar_t *)local_f8);
          iVar12 = (int)sVar14;
        }
        local_f0 = iVar12;
        FPaths::CombineInternal(&local_288,&local_108,2);
        if ((Session *)FVar25.Data != (Session *)0x0) {
          FMemory::Free(FVar25.Data);
        }
        FVar25.Data = local_288.Data.AllocatorInstance.Data;
        iVar12 = local_288.Data.ArrayNum;
        iVar6 = local_288.Data.ArrayMax;
        local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_288.Data.ArrayNum = 0;
        local_288.Data.ArrayMax = 0;
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        pIVar15 = IFileManager::Get();
        FVar21.Data = (FScriptContainerElement *)L"";
        if (iVar12 != 0) {
          FVar21.Data = FVar25.Data;
        }
        cVar11 = (**(code **)((longlong)*pIVar15 + 0x58))(pIVar15,FVar21.Data);
      } while (cVar11 != '\0');
      if (param_5 != &local_58) {
        pFVar26 = (param_5->Data).AllocatorInstance.Data;
        if (pFVar26 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar26);
        }
        (param_5->Data).AllocatorInstance.Data = FVar25.Data;
        (param_5->Data).ArrayNum = iVar12;
        (param_5->Data).ArrayMax = iVar6;
        FVar25.Data = (FScriptContainerElement *)pSVar17;
      }
      if ((Session *)FVar25.Data != (Session *)0x0) {
        FMemory::Free(FVar25.Data);
      }
      local_e8.DataPtr = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
      iVar12 = (param_5->Data).ArrayNum;
      local_d0 = 0xe;
      local_e8.Size = iVar12 + -1;
      if (iVar12 == 0) {
        local_e8.Size = iVar24;
      }
      local_d8 = L"OnnxModel.onnx";
      FPaths::CombineInternal(&local_268,&local_e8,2);
      iVar24 = local_268.Data.ArrayNum;
      FVar25.Data = local_268.Data.AllocatorInstance.Data;
      local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e0 = local_268.Data.ArrayNum;
      local_268.Data.ArrayNum = 0;
      local_268.Data.ArrayMax = 0;
      pIVar15 = IFileManager::Get();
      local_78.DataPtr = local_128;
      local_78.ArrayNum = uStack_120;
      FVar21.Data = (FScriptContainerElement *)L"";
      if (iVar24 != 0) {
        FVar21.Data = FVar25.Data;
      }
      bVar9 = FFileHelper::SaveArrayToFile(&local_78,(wchar_t *)FVar21.Data,pIVar15,0);
      if (bVar9) {
        uVar18 = (ulonglong)TStack_2d0.ArrayNum;
        local_220 = (FOnnxAdditionalDataDescriptor *)
                    (TStack_2d0.AllocatorInstance.Data + uVar18 * 0x20);
        local_2c0 = TStack_2d0.ArrayNum;
        pFVar26 = TStack_2d0.AllocatorInstance.Data + 0x10;
        uVar22 = uVar18;
        while( true ) {
          pFVar8 = local_220;
          if ((int)uVar18 != (int)uVar22) {
            local_2e8[0] = 0;
            `TCheckedPointerIterator<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_2e8);
          }
          if ((FOnnxAdditionalDataDescriptor *)(pFVar26 + -0x10) == pFVar8) {
            iVar24 = local_2e0;
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
              iVar24 = local_2e0;
            }
            goto LAB_14eb1248c;
          }
          if (*(int *)(pFVar26 + -8) == 0) {
            local_b8 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_b8 = (((FOnnxAdditionalDataDescriptor *)(pFVar26 + -0x10))->Path).Data.
                       AllocatorInstance.Data;
          }
          local_c8.DataPtr = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
          iVar24 = (param_5->Data).ArrayNum;
          iVar12 = 0;
          local_c8.Size = iVar24 + -1;
          if (iVar24 == 0) {
            local_c8.Size = iVar12;
          }
          if (local_b8 != (FScriptContainerElement *)0x0) {
            sVar14 = wcslen((wchar_t *)local_b8);
            iVar12 = (int)sVar14;
          }
          local_b0 = iVar12;
          FPaths::CombineInternal(&local_298,&local_c8,2);
          lVar2 = *(longlong *)(pFVar26 + 8);
          puVar1 = param_1->DataPtr;
          lVar4 = local_228 + *(longlong *)pFVar26;
          if ((lVar2 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar9)) {
            pcVar3 = (code *)swi(3);
            uVar10 = (*pcVar3)();
            return (bool)uVar10;
          }
          pIVar15 = IFileManager::Get();
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_298.Data.ArrayNum != 0) {
            FVar21.Data = local_298.Data.AllocatorInstance.Data;
          }
          local_118.DataPtr = puVar1 + lVar4;
          local_118.ArrayNum = lVar2;
          bVar9 = FFileHelper::SaveArrayToFile(&local_118,(wchar_t *)FVar21.Data,pIVar15,0);
          if (!bVar9) break;
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
          uVar18 = TStack_2d0._8_8_ & 0xffffffff;
          pFVar26 = pFVar26 + 0x20;
          uVar22 = (ulonglong)local_2c0;
        }
        pIVar15 = IFileManager::Get();
        if ((param_5->Data).ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar15 + 0x68))(pIVar15,pwVar20,0,1);
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
      }
      else {
        pIVar15 = IFileManager::Get();
        if ((param_5->Data).ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar15 + 0x68))(pIVar15,pwVar20,0,1);
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (FVar25.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar25.Data);
      }
      goto LAB_14eb126a4;
    }
    local_a8.DataPtr = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
    local_a8.Size = iVar12 + -1;
    local_90 = 0xe;
    local_98 = L"OnnxModel.onnx";
    FPaths::CombineInternal(&local_258,&local_a8,2);
    FVar25.Data = local_258.Data.AllocatorInstance.Data;
    iVar24 = local_258.Data.ArrayNum;
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.Data.ArrayNum = 0;
    local_258.Data.ArrayMax = 0;
LAB_14eb1248c:
    local_218 = &local_2b8;
    local_2b8 = (Session)0x0;
    local_210 = (FScriptContainerElement *)L"";
    if (iVar24 != 0) {
      local_210 = FVar25.Data;
    }
    pEVar16 = FEnvironment::GetOrtEnv(param_3);
    bVar9 = GuardedOrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,wchar_t_const_*,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,wchar_t_const_*,Ort::SessionOptions_const_&,OrtSession_*_*>
                      (&Ort::Global<void>::api_->CreateSession,pEVar16,(wchar_t **)&local_210,
                       param_2,(OrtSession ***)&local_218);
    local_278.Ptr = pSVar17;
    if (bVar9) {
      if ((local_2b8 == (Session)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("SessionPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTUtils.cpp"
                             ,0x37a,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      pSVar17 = ::operator_new(8);
      if (pSVar17 != (Session *)0x0) {
        *pSVar17 = local_2b8;
        local_278.Ptr = pSVar17;
      }
    }
    TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_>::operator=(param_4,&local_278);
    TVar7.Ptr = local_278.Ptr;
    if (local_278.Ptr != (Session *)0x0) {
      (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*local_278.Ptr);
      ::operator_delete(TVar7.Ptr,8);
    }
    if (FVar25.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar25.Data);
    }
  }
  pSVar17 = (Session *)(ulonglong)(param_4->Ptr != (Session *)0x0);
LAB_14eb126a4:
  DestructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int>
            ((FOnnxAdditionalDataDescriptor *)TStack_2d0.AllocatorInstance.Data,TStack_2d0.ArrayNum)
  ;
  if ((FOnnxAdditionalDataDescriptor *)TStack_2d0.AllocatorInstance.Data !=
      (FOnnxAdditionalDataDescriptor *)0x0) {
    FMemory::Free(TStack_2d0.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_1d8);
  return SUB81(pSVar17,0);
}

// CreateSessionOptionsDefault @ 14eb126f0

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_> __cdecl
UE::NNERuntimeORT::Private::CreateSessionOptionsDefault
          (TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  FEnvironment *pFVar3;
  OrtStatus *pOVar4;
  FEnvironment *pFVar5;
  undefined8 *in_RDX;
  ForAnyElementType FVar6;
  int iVar7;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = *(FScriptContainerElement **)*in_RDX;
  iVar7 = *(int *)((undefined8 *)*in_RDX + 1);
  pFVar3 = ::operator_new(8);
  pFVar5 = (FEnvironment *)0x0;
  if (pFVar3 != (FEnvironment *)0x0) {
    *(OrtSessionOptions **)&pFVar3->Config = (OrtSessionOptions *)0x0;
    pOVar4 = (*Ort::Global<void>::api_->CreateSessionOptions)((OrtSessionOptions **)pFVar3);
    Ort::ThrowOnError(pOVar4);
    pFVar5 = pFVar3;
  }
  param_1->Object = pFVar5;
  if ((char)local_28.Data.AllocatorInstance.Data == '\0') {
    pOVar4 = (*Ort::Global<void>::api_->SetIntraOpNumThreads)
                       (*(OrtSessionOptions **)&pFVar5->Config,
                        local_28.Data.AllocatorInstance.Data._4_4_);
    Ort::ThrowOnError(pOVar4);
    pOVar4 = (*Ort::Global<void>::api_->SetInterOpNumThreads)
                       (*(OrtSessionOptions **)&param_1->Object->Config,iVar7);
  }
  else {
    pOVar4 = (*Ort::Global<void>::api_->DisablePerSessionThreads)
                       (*(OrtSessionOptions **)&pFVar5->Config);
  }
  Ort::ThrowOnError(pOVar4);
  pTVar1 = CVarNNERuntimeORTEnableProfiling.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    pFVar5 = (FEnvironment *)&DAT_00000001;
    if (!bVar2) goto LAB_14eb127c7;
  }
  pFVar5 = (FEnvironment *)0x0;
LAB_14eb127c7:
  if (pTVar1[-0xc].ShadowedValue[(longlong)&pFVar5->CriticalSection] != false) {
    ::FString::FString(&local_18,"NNERuntimeORTProfile_");
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_28,ORTProfilingSessionNumber);
    iVar7 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_18,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar7);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ORTProfilingSessionNumber = ORTProfilingSessionNumber + 1;
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar6.Data = local_18.Data.AllocatorInstance.Data;
    }
    pOVar4 = (*Ort::Global<void>::api_->EnableProfiling)
                       (*(OrtSessionOptions **)&param_1->Object->Config,(wchar_t *)FVar6.Data);
    Ort::ThrowOnError(pOVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)
         (SessionOptions *)param_1;
}

// CreateSessionOptionsForDirectML @ 14eb12890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_> __cdecl
UE::NNERuntimeORT::Private::CreateSessionOptionsForDirectML
          (TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_1,bool param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  OrtStatus *pOVar6;
  char *pcVar7;
  size_t sVar8;
  ID3D12DynamicRHI *pIVar9;
  TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_> TVar10;
  longlong lVar11;
  undefined8 uVar12;
  FStaticBasicLogRecord *pFVar13;
  OrtSessionOptions *pOVar14;
  _func___cdecl_void_OrtSessionOptions_ptr *p_Var15;
  char in_R8B;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  undefined8 *local_290;
  TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  CreateSessionOptionsDefault(&local_288);
  if (local_288.Object == (FEnvironment *)0x0) {
    param_1->Object = (FEnvironment *)0x0;
    return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)
           (SessionOptions *)param_1;
  }
  pOVar6 = (*Ort::Global<void>::api_->SetSessionExecutionMode)
                     (*(OrtSessionOptions **)&(local_288.Object)->Config,ORT_SEQUENTIAL);
  Ort::ThrowOnError(pOVar6);
  pOVar6 = (*Ort::Global<void>::api_->DisableMemPattern)
                     (*(OrtSessionOptions **)&(local_288.Object)->Config);
  Ort::ThrowOnError(pOVar6);
  if ((in_R8B == '\0') &&
     ((GDynamicRHI == (FDynamicRHI *)0x0 ||
      (iVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x28))(), iVar5 != 3)))) {
    local_290 = (undefined8 *)0x0;
    pOVar6 = (*Ort::Global<void>::api_->GetExecutionProviderApi)("DML",0x14,&local_290);
    Ort::ThrowOnError(pOVar6);
    if (local_290 == (undefined8 *)0x0) {
      if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      }
    }
    else {
      uVar12._0_1_ = ((local_288.Object)->Config).bUseGlobalThreadPool;
      uVar12._1_3_ = *(undefined3 *)&((local_288.Object)->Config).field_0x1;
      uVar12._4_4_ = ((local_288.Object)->Config).IntraOpNumThreads;
      pOVar6 = (OrtStatus *)(*(code *)*local_290)(uVar12,0);
      if (pOVar6 == (OrtStatus *)0x0) {
        param_1->Object = local_288.Object;
        return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)
               (SessionOptions *)param_1;
      }
      if (1 < (byte)LogNNERuntimeORT._0_1_) {
        pcVar7 = (*Ort::Global<void>::api_->GetErrorMessage)(pOVar6);
        local_278._padding_ = 0;
        if (pcVar7 == (char *)0x0) {
          local_278.Ptr = (wchar_t *)0x0;
          local_278.StringLength = 0;
        }
        else {
          sVar8 = strlen(pcVar7);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,pcVar7,(int)sVar8,Yes);
        }
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
  }
  else {
    if (GDynamicRHI == (FDynamicRHI *)0x0) {
      if ((byte)LogNNERuntimeORT._0_1_ < 2) goto LAB_14eb12d6f;
      pFVar13 = &::LOG_Static;
    }
    else {
      iVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
      if (iVar5 == 3) {
        pIVar9 = GetID3D12DynamicRHI();
        if ((pIVar9 == (ID3D12DynamicRHI *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RHI",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTUtils.cpp"
                               ,0x227,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          TVar10.Ptr = (SessionOptions *)(*pcVar2)();
          return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)TVar10.Ptr;
        }
        lVar11 = (**(code **)(*(longlong *)pIVar9 + 0x4e0))(pIVar9,0);
        if (lVar11 == 0) {
          if (1 < (byte)LogNNERuntimeORT._0_1_) {
            Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_Failed_to_get_D_15301b590,
                       (FLogCategoryBase *)&LogNNERuntimeORT);
          }
          param_1->Object = (FEnvironment *)0x0;
        }
        else {
          local_298 = (longlong *)0x0;
          iVar5 = DMLCreateDevice(lVar11,GRHIGlobals.IsDebugLayerEnabled != false,
                                  &_GUID_6dbd6437_96fd_423f_a98c_ae5e7c2a573f,&local_298);
          if (iVar5 < 0) {
            if (1 < (byte)LogNNERuntimeORT._0_1_) {
              Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
            }
          }
          else {
            local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pOVar6 = (*Ort::Global<void>::api_->GetExecutionProviderApi)
                               ("DML",0x14,&local_288.SharedReferenceCount.ReferenceController);
            Ort::ThrowOnError(pOVar6);
            if (local_288.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              pcVar2 = *(code **)&(local_288.SharedReferenceCount.ReferenceController)->
                                  SharedReferenceCount;
              uVar12 = (**(code **)(*(longlong *)pIVar9 + 0x4d8))(pIVar9);
              uVar1._0_1_ = ((local_288.Object)->Config).bUseGlobalThreadPool;
              uVar1._1_3_ = *(undefined3 *)&((local_288.Object)->Config).field_0x1;
              uVar1._4_4_ = ((local_288.Object)->Config).IntraOpNumThreads;
              pOVar6 = (OrtStatus *)(*pcVar2)(uVar1,local_298,uVar12);
              plVar3 = local_298;
              if (pOVar6 == (OrtStatus *)0x0) {
                param_1->Object = local_288.Object;
                if (local_298 == (longlong *)0x0) {
                  return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)
                         (SessionOptions *)param_1;
                }
                local_298 = (longlong *)0x0;
                (**(code **)(*plVar3 + 0x10))();
                return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)
                       (SessionOptions *)param_1;
              }
              if (1 < (byte)LogNNERuntimeORT._0_1_) {
                pcVar7 = (*Ort::Global<void>::api_->GetErrorMessage)(pOVar6);
                local_158._padding_ = 0;
                if (pcVar7 == (char *)0x0) {
                  local_158.Ptr = (wchar_t *)0x0;
                  local_158.StringLength = 0;
                }
                else {
                  sVar8 = strlen(pcVar7);
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_158,pcVar7,(int)sVar8,Yes);
                }
                Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
                if ((void *)local_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_158._padding_);
                }
              }
              plVar3 = local_298;
              param_1->Object = (FEnvironment *)0x0;
              if (local_298 != (longlong *)0x0) {
                local_298 = (longlong *)0x0;
                (**(code **)(*plVar3 + 0x10))();
              }
              pOVar14 = *(OrtSessionOptions **)&(local_288.Object)->Config;
              p_Var15 = Ort::Global<void>::api_->ReleaseSessionOptions;
              goto LAB_14eb12bc3;
            }
            if (1 < (byte)LogNNERuntimeORT._0_1_) {
              Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
            }
          }
          plVar3 = local_298;
          param_1->Object = (FEnvironment *)0x0;
          if (local_298 != (longlong *)0x0) {
            local_298 = (longlong *)0x0;
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        if (local_288.Object == (FEnvironment *)0x0) {
          return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)
                 (SessionOptions *)param_1;
        }
        pOVar14 = *(OrtSessionOptions **)&(local_288.Object)->Config;
        p_Var15 = Ort::Global<void>::api_->ReleaseSessionOptions;
LAB_14eb12bc3:
        (*p_Var15)(pOVar14);
        ::operator_delete(local_288.Object,8);
        return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)
               (SessionOptions *)param_1;
      }
      if (GDynamicRHI != (FDynamicRHI *)0x0) {
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          (**(code **)(GDynamicRHI->_padding_ + 0x20))();
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
        param_1->Object = (FEnvironment *)0x0;
        (*Ort::Global<void>::api_->ReleaseSessionOptions)
                  (*(OrtSessionOptions **)&(local_288.Object)->Config);
        ::operator_delete(local_288.Object,8);
        return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)
               (SessionOptions *)param_1;
      }
      if ((byte)LogNNERuntimeORT._0_1_ < 2) goto LAB_14eb12d6f;
      pFVar13 = &::LOG_Static;
    }
    Logging::Private::BasicLog<2>(pFVar13,(FLogCategoryBase *)&LogNNERuntimeORT);
  }
LAB_14eb12d6f:
  param_1->Object = (FEnvironment *)0x0;
  (*Ort::Global<void>::api_->ReleaseSessionOptions)
            (*(OrtSessionOptions **)&(local_288.Object)->Config);
  ::operator_delete(local_288.Object,8);
  return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)
         (SessionOptions *)param_1;
}

// CreateSessionOptionsForDirectMLNpu @ 14eb12da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_> __cdecl
UE::NNERuntimeORT::Private::CreateSessionOptionsForDirectMLNpu
          (TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_1)

{
  undefined8 uVar1;
  FEnvironment *pFVar2;
  longlong *plVar3;
  FSharedReferencer<1> FVar4;
  int iVar5;
  OrtStatus *pOVar6;
  char *_Str;
  size_t sVar7;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  longlong *local_1a0;
  TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> local_198;
  void *local_188;
  void *local_180;
  undefined8 uStack_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  CreateSessionOptionsDefault(&local_198);
  pFVar2 = (FEnvironment *)CONCAT44(local_198.Object._4_4_,local_198.Object._0_4_);
  if (pFVar2 == (FEnvironment *)0x0) {
    param_1->Object = (FEnvironment *)0x0;
  }
  else {
    pOVar6 = (*Ort::Global<void>::api_->SetSessionExecutionMode)
                       (*(OrtSessionOptions **)&pFVar2->Config,ORT_SEQUENTIAL);
    Ort::ThrowOnError(pOVar6);
    pOVar6 = (*Ort::Global<void>::api_->DisableMemPattern)(*(OrtSessionOptions **)&pFVar2->Config);
    Ort::ThrowOnError(pOVar6);
    local_198.Object._0_4_ = 0x1000;
    GetAdapterNpu((bool)((char)&local_198 + '\b'),(D3D_FEATURE_LEVEL *)0x0);
    FVar4.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
    if (local_198.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      }
      param_1->Object = (FEnvironment *)0x0;
      (*Ort::Global<void>::api_->ReleaseSessionOptions)(*(OrtSessionOptions **)&pFVar2->Config);
      ::operator_delete(pFVar2,8);
    }
    else {
      CreateD3D12Device((IUnknown *)&local_198.SharedReferenceCount,
                        (D3D_FEATURE_LEVEL)local_198.SharedReferenceCount.ReferenceController);
      if (local_198.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
      {
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
        param_1->Object = (FEnvironment *)0x0;
        (**(code **)((FVar4.ReferenceController)->_padding_ + 0x10))(FVar4.ReferenceController);
        (*Ort::Global<void>::api_->ReleaseSessionOptions)(*(OrtSessionOptions **)&pFVar2->Config);
        ::operator_delete(pFVar2,8);
      }
      else {
        local_1a8 = (longlong *)0x0;
        iVar5 = DMLCreateDevice(local_198.SharedReferenceCount.ReferenceController,
                                GRHIGlobals.IsDebugLayerEnabled != false,
                                &_GUID_6dbd6437_96fd_423f_a98c_ae5e7c2a573f,&local_1a8);
        if (iVar5 < 0) {
          if (1 < (byte)LogNNERuntimeORT._0_1_) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
          }
          param_1->Object = (FEnvironment *)0x0;
        }
        else {
          local_1a0 = (longlong *)0x0;
          uStack_178 = 0;
          local_180 = (void *)0x2;
          iVar5 = (**(code **)((local_198.SharedReferenceCount.ReferenceController)->_padding_ +
                              0x40))(local_198.SharedReferenceCount.ReferenceController,&local_180,
                                     &_GUID_0ec870a6_5d7e_4c22_8cfc_5baae07616ed,&local_1a0);
          if (iVar5 < 0) {
            if (1 < (byte)LogNNERuntimeORT._0_1_) {
              Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
            }
          }
          else {
            local_188 = (void *)0x0;
            pOVar6 = (*Ort::Global<void>::api_->GetExecutionProviderApi)("DML",0x14,&local_188);
            Ort::ThrowOnError(pOVar6);
            if (local_188 == (void *)0x0) {
              if (1 < (byte)LogNNERuntimeORT._0_1_) {
                Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
              }
            }
            else {
              uVar1._0_1_ = (pFVar2->Config).bUseGlobalThreadPool;
              uVar1._1_3_ = *(undefined3 *)&(pFVar2->Config).field_0x1;
              uVar1._4_4_ = (pFVar2->Config).IntraOpNumThreads;
              pOVar6 = (OrtStatus *)
                       (**(code **)((longlong)local_188 + 8))(uVar1,local_1a8,local_1a0);
              plVar3 = local_1a0;
              if (pOVar6 == (OrtStatus *)0x0) {
                param_1->Object = pFVar2;
                if (local_1a0 != (longlong *)0x0) {
                  local_1a0 = (longlong *)0x0;
                  (**(code **)(*plVar3 + 0x10))();
                }
                plVar3 = local_1a8;
                if (local_1a8 != (longlong *)0x0) {
                  local_1a8 = (longlong *)0x0;
                  (**(code **)(*plVar3 + 0x10))();
                }
                (**(code **)((local_198.SharedReferenceCount.ReferenceController)->_padding_ + 0x10)
                )(local_198.SharedReferenceCount.ReferenceController);
                (**(code **)((FVar4.ReferenceController)->_padding_ + 0x10))
                          (FVar4.ReferenceController);
                return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)
                       (SessionOptions *)param_1;
              }
              if (1 < (byte)LogNNERuntimeORT._0_1_) {
                _Str = (*Ort::Global<void>::api_->GetErrorMessage)(pOVar6);
                local_168._padding_ = 0;
                if (_Str == (char *)0x0) {
                  local_168.Ptr = (wchar_t *)0x0;
                  local_168.StringLength = 0;
                }
                else {
                  sVar7 = strlen(_Str);
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_168,_Str,(int)sVar7,Yes);
                }
                Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
                if ((void *)local_168._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_168._padding_);
                }
              }
            }
          }
          plVar3 = local_1a0;
          param_1->Object = (FEnvironment *)0x0;
          if (local_1a0 != (longlong *)0x0) {
            local_1a0 = (longlong *)0x0;
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        plVar3 = local_1a8;
        if (local_1a8 != (longlong *)0x0) {
          local_1a8 = (longlong *)0x0;
          (**(code **)(*plVar3 + 0x10))();
        }
        (**(code **)((local_198.SharedReferenceCount.ReferenceController)->_padding_ + 0x10))
                  (local_198.SharedReferenceCount.ReferenceController);
        (**(code **)((FVar4.ReferenceController)->_padding_ + 0x10))(FVar4.ReferenceController);
        (*Ort::Global<void>::api_->ReleaseSessionOptions)(*(OrtSessionOptions **)&pFVar2->Config);
        ::operator_delete(pFVar2,8);
      }
    }
  }
  return (TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_>)
         (SessionOptions *)param_1;
}

// CreateTempDirPath @ 14eb131a0

FString * __cdecl
UE::NNERuntimeORT::Private::Detail::CreateTempDirPath
          (FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  FGuid *this;
  size_t sVar4;
  IFileManager *pIVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FGuid local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  undefined4 local_10;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  do {
    this = FGuid::NewGuid(&local_38);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(this,&local_58,Digits);
    uVar7 = 0;
    ::FString::PrintfImpl(&local_48,L"ORTModel_%s");
    local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    local_18 = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      local_18 = local_48.Data.AllocatorInstance.Data;
    }
    iVar1 = (param_1->Data).ArrayNum;
    local_28.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_28.Size = 0;
    }
    if (local_18 != (FScriptContainerElement *)0x0) {
      sVar4 = wcslen((wchar_t *)local_18);
      uVar7 = (undefined4)sVar4;
    }
    local_10 = uVar7;
    FPaths::CombineInternal(&local_68,&local_28,2);
    if (__return_storage_ptr__ != &local_68) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pIVar5 = IFileManager::Get();
    if ((__return_storage_ptr__->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar5 + 0x58))(pIVar5,pwVar6);
  } while (cVar3 != '\0');
  return __return_storage_ptr__;
}

// CreateTensor @ 14eb13310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */

Value __cdecl
UE::NNERuntimeORT::Private::CreateTensor
          (OrtDmlApi *param_1,MemoryInfo *param_2,FRHIBuffer *param_3,FTensor *param_4,
          ONNXTensorElementDataType param_5,
          TArray<std::unique_ptr<void,void_(__cdecl*)(void_*)>,TSizedDefaultAllocator<32>_> *param_6
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  Value VVar10;
  longlong *plVar11;
  OrtStatus *pOVar12;
  longlong lVar13;
  ulong64 _Size;
  ulonglong *_Dst;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong *puVar17;
  undefined4 in_stack_0000002c;
  ForAnyElementType *in_stack_00000038;
  undefined1 auStackY_118 [32];
  code *local_c8;
  void *local_c0;
  ONNXTensorElementDataType local_b8;
  void *local_b0;
  Value local_a8;
  ulong64 local_a0;
  FRHIBuffer *local_98;
  OrtValue *local_90;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_118;
  lVar5 = CONCAT44(in_stack_0000002c,param_5);
  local_b8 = (ONNXTensorElementDataType)param_6;
  local_a8 = (Value)param_1;
  local_98 = param_3;
  if ((param_4 == (FTensor *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                         ,0x3dc,L"CreateTensor needs Buffer to be set"), bVar7)) {
    pcVar3 = (code *)swi(3);
    VVar10 = (Value)(*pcVar3)();
    return VVar10;
  }
  iVar8 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if ((iVar8 != 3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDynamicRHI->GetInterfaceType() == ERHIInterfaceType::D3D12",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Public\\ID3D12DynamicRHI.h"
                         ,0x48,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    VVar10 = (Value)(*pcVar3)();
    return VVar10;
  }
  plVar11 = (longlong *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  plVar11 = (longlong *)(**(code **)(*plVar11 + 0x520))(plVar11,param_4);
  pOVar12 = (OrtStatus *)(*(code *)param_2[2])(plVar11,&local_b0);
  Ort::ThrowOnError(pOVar12);
  local_c0 = local_b0;
  local_c8 = `UE::NNERuntimeORT::Private::CreateTensor'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  lVar13 = (**(code **)(*plVar11 + 0x50))(plVar11,local_88);
  local_a0 = *(ulong64 *)(lVar13 + 0x10);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)*(int *)(lVar5 + 0x28);
  _Size = SUB168(ZEXT816(8) * auVar4,0);
  if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
    _Size = 0xffffffffffffffff;
  }
  _Dst = operator_new__(_Size);
  if (_Dst == (ulonglong *)0x0) {
    _Dst = (ulonglong *)0x0;
  }
  else {
    memset(_Dst,0,_Size);
  }
  uVar14 = *(uint *)(lVar5 + 0x28);
  uVar16 = 0;
  if (0 < (int)uVar14) {
    lVar13 = 0;
    puVar17 = _Dst;
    do {
      lVar15 = lVar5;
      if (*(longlong *)(lVar5 + 0x20) != 0) {
        lVar15 = *(longlong *)(lVar5 + 0x20);
      }
      if (((int)uVar14 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        VVar10 = (Value)(*pcVar3)();
        return VVar10;
      }
      uVar9 = 0;
      if ((int)uVar16 < (int)uVar14) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        VVar10 = (Value)(*pcVar3)();
        return VVar10;
      }
      uVar16 = uVar16 + 1;
      *puVar17 = (ulonglong)*(uint *)(lVar13 + lVar15);
      lVar13 = lVar13 + 4;
      uVar14 = *(uint *)(lVar5 + 0x28);
      puVar17 = puVar17 + 1;
      param_1 = (OrtDmlApi *)local_a8;
    } while ((int)uVar16 < (int)uVar14);
  }
  pOVar12 = (*Ort::Global<void>::api_->CreateTensorWithDataAsOrtValue)
                      ((OrtMemoryInfo *)local_98->_padding_,local_c0,local_a0,(long64 *)_Dst,
                       (ulonglong)uVar14,local_b8,&local_90);
  Ort::ThrowOnError(pOVar12);
  *(OrtValue **)param_1 = local_90;
  if (((in_stack_00000038->Data <= (FScriptContainerElement *)&local_c8) &&
      ((FScriptContainerElement *)&local_c8 <
       in_stack_00000038->Data + (longlong)*(int *)((longlong)&in_stack_00000038[1].Data + 4) * 0x10
      )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
    pcVar3 = (code *)swi(3);
    VVar10 = (Value)(*pcVar3)();
    return VVar10;
  }
  iVar8 = *(int *)&in_stack_00000038[1].Data;
  piVar1 = (int *)((longlong)&in_stack_00000038[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,in_stack_00000038,piVar1);
  }
  pvVar6 = local_c0;
  *(int *)&in_stack_00000038[1].Data = iVar8 + 1;
  local_c0 = (void *)0x0;
  pFVar2 = in_stack_00000038->Data;
  *(code **)(pFVar2 + (longlong)iVar8 * 0x10) = local_c8;
  *(void **)(pFVar2 + (longlong)iVar8 * 0x10 + 8) = pvVar6;
  operator_delete__(_Dst);
  if (local_c0 != (void *)0x0) {
    (*local_c8)();
  }
  return (Value)param_1;
}

// GetAdapterNpu @ 14eb14890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014eb14dd0) */
/* WARNING: Removing unreachable block (ram,0x00014eb14ec0) */
/* WARNING: Enum "Type": Some values do not have unique names */

ComPtr<IUnknown> __cdecl
UE::NNERuntimeORT::Private::GetAdapterNpu(bool param_1,D3D_FEATURE_LEVEL *param_2)

{
  longlong *plVar1;
  IUnknown IVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  code *pcVar7;
  ComPtr<IUnknown> CVar8;
  undefined7 in_register_00000009;
  IUnknown *pIVar9;
  FStaticBasicLogRecord *pFVar10;
  FScriptContainerElement *pFVar11;
  byte bVar12;
  IUnknown IVar13;
  ForAnyElementType FVar14;
  int iVar15;
  undefined4 *in_R8;
  IUnknown IVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined1 auStack_178 [32];
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  byte local_128;
  char local_127;
  undefined1 local_126 [6];
  longlong *local_120;
  undefined1 local_118;
  undefined1 local_117 [7];
  ForAnyElementType local_110;
  undefined8 local_108;
  ForAnyElementType local_100;
  IUnknown local_f8;
  IDXCoreAdapterList *local_f0;
  FString local_e8;
  FString local_d8;
  IUnknown local_c8;
  uint local_c0;
  FString local_b8;
  IUnknown *local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  _GUID local_60;
  _GUID local_50;
  ulonglong local_40;
  
  pIVar9 = (IUnknown *)CONCAT71(in_register_00000009,param_1);
  local_40 = __security_cookie.value ^ (ulonglong)auStack_178;
  bVar12 = (byte)param_2;
  *in_R8 = 0x1000;
  local_128 = bVar12;
  local_a8 = pIVar9;
  pvVar6 = FWindowsPlatformProcess::GetDllHandle(L"DXCore.dll");
  if (pvVar6 == (void *)0x0) {
    if ((byte)LogNNERuntimeORT._0_1_ < 5) goto LAB_14eb1491f;
    pFVar10 = &::LOG_Static;
  }
  else {
    pcVar7 = FWindowsPlatformProcess::GetDllExport(pvVar6,L"DXCoreCreateAdapterFactory");
    if (pcVar7 != (code *)0x0) {
      IVar13 = (IUnknown)0x0;
      local_120 = (longlong *)0x0;
      iVar5 = (*pcVar7)(&_GUID_78ee5945_c36e_4b13_a669_005dd11c0f06,&local_120);
      if (iVar5 < 0) {
        if (4 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
        plVar1 = local_120;
        *pIVar9 = (IUnknown)0x0;
        if (local_120 == (longlong *)0x0) {
          return (ComPtr<IUnknown>)pIVar9;
        }
        local_120 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
        return (ComPtr<IUnknown>)pIVar9;
      }
      local_158 = (FScriptContainerElement *)&local_100;
      local_70 = 0xb71b0d41;
      local_60 = DXCORE_ADAPTER_ATTRIBUTE_D3D12_CORE_COMPUTE;
      local_6c = 0x422f1088;
      local_68 = 0x50027ca2;
      local_64 = 0x88a9d3b7;
      local_100.Data = (FScriptContainerElement *)0x0;
      uVar17 = 0x100;
      local_c8 = (IUnknown)0x0;
      iVar5 = (**(code **)(*local_120 + 0x18))
                        (local_120,1,&local_70,&_GUID_526c7776_40e9_459b_b711_f32ad76dfc28);
      if (iVar5 < 0) {
        if (4 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
        FVar14.Data = local_100.Data;
        *pIVar9 = (IUnknown)0x0;
        if ((IDXCoreAdapterList *)local_100.Data != (IDXCoreAdapterList *)0x0) {
          local_100.Data = (FScriptContainerElement *)0x0;
          (**(code **)((longlong)*(IDXCoreAdapterList *)FVar14.Data + 0x10))();
        }
        plVar1 = local_120;
        if (local_120 == (longlong *)0x0) {
          return (ComPtr<IUnknown>)pIVar9;
        }
        local_120 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
        return (ComPtr<IUnknown>)pIVar9;
      }
      iVar5 = (**(code **)((longlong)*(IDXCoreAdapterList *)local_100.Data + 0x20))();
      if ((iVar5 == 0) ||
         (`UE::NNERuntimeORT::Private::GetAdapterNpu'::__l66::<lambda_2>::operator()
                    (&local_118,(IDXCoreAdapterList *)local_100.Data,(IDXCoreAdapter **)&local_c8),
         local_c8 == (IUnknown)0x0)) {
        plVar1 = local_120;
        uVar17 = 0x1000;
        pcVar7 = *(code **)(*local_120 + 0x18);
        local_158 = (FScriptContainerElement *)
                    IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDXCoreAdapterList>_>
                              ((ComPtrRef<Microsoft::WRL::ComPtr<IDXCoreAdapterList>_>)&local_100);
        iVar5 = (*pcVar7)(plVar1,1,&local_60,&_GUID_526c7776_40e9_459b_b711_f32ad76dfc28);
        if (iVar5 < 0) {
          if (4 < (byte)LogNNERuntimeORT._0_1_) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
          }
          *pIVar9 = (IUnknown)0x0;
          goto LAB_14eb1507a;
        }
        `UE::NNERuntimeORT::Private::GetAdapterNpu'::__l66::<lambda_2>::operator()
                  (&local_118,(IDXCoreAdapterList *)local_100.Data,(IDXCoreAdapter **)&local_c8);
        if (local_c8 != (IUnknown)0x0) goto LAB_14eb15022;
        if (4 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
        FVar14.Data = local_100.Data;
        if ((IDXCoreAdapterList *)local_100.Data != (IDXCoreAdapterList *)0x0) {
          local_100.Data = (FScriptContainerElement *)0x0;
          (**(code **)((longlong)*(IDXCoreAdapterList *)FVar14.Data + 0x10))();
        }
        plVar1 = local_120;
        local_f0 = (IDXCoreAdapterList *)0x0;
        local_50 = DXCORE_ADAPTER_ATTRIBUTE_D3D12_CORE_COMPUTE;
        pcVar7 = *(code **)(*local_120 + 0x18);
        local_158 = (FScriptContainerElement *)
                    IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDXCoreAdapterList>_>
                              ((ComPtrRef<Microsoft::WRL::ComPtr<IDXCoreAdapterList>_>)&local_f0);
        iVar5 = (*pcVar7)(plVar1,1,&local_50,&_GUID_526c7776_40e9_459b_b711_f32ad76dfc28);
        if (iVar5 < 0) {
          if (4 < (byte)LogNNERuntimeORT._0_1_) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
          }
LAB_14eb14b94:
          *pIVar9 = (IUnknown)0x0;
        }
        else {
          uVar18 = (ulonglong)param_2 & 0xff;
          if ((bVar12 != 0) && (4 < (byte)LogNNERuntimeORT._0_1_)) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
          }
          local_c0 = (**(code **)((longlong)*local_f0 + 0x20))();
          IVar16 = IVar13;
          if (local_c0 == 0) {
LAB_14eb14ffd:
            if (4 < (byte)LogNNERuntimeORT._0_1_) {
              Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
            }
            goto LAB_14eb14b94;
          }
          do {
            local_f8 = (IUnknown)0x0;
            iVar5 = (**(code **)((longlong)*local_f0 + 0x18))
                              (local_f0,IVar16,&_GUID_f0db4c7f_fe5a_42a2_bd62_f2a6cf6fc83e,&local_f8
                              );
            if (iVar5 < 0) {
              if (2 < (byte)LogNNERuntimeORT._0_1_) {
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
              }
            }
            else {
              cVar3 = (**(code **)(*(longlong *)local_f8 + 0x20))
                                (local_f8,&DXCORE_ADAPTER_ATTRIBUTE_D3D12_GRAPHICS);
              local_127 = cVar3;
              if ((char)uVar18 != '\0') {
                local_110.Data = (FScriptContainerElement *)0x0;
                local_108 = 0;
                ::FString::FString(&local_e8,"Compute");
                if (local_110.Data <= (FScriptContainerElement *)&local_e8) {
                  if ((FScriptContainerElement *)&local_e8 <
                      local_110.Data + (longlong)local_108._4_4_ * 0x10) {
                    local_140 = (longlong)(int)local_108;
                    local_138 = 0x10;
                    local_158 = (FScriptContainerElement *)&local_e8;
                    local_150 = local_110.Data;
                    local_148 = (longlong)local_108._4_4_;
                    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar4) {
                      pcVar7 = (code *)swi(3);
                      CVar8.ptr_ = (IUnknown *)(*pcVar7)();
                      return (ComPtr<IUnknown>)CVar8.ptr_;
                    }
                  }
                }
                iVar5 = (int)local_108;
                if ((int)local_108 == local_108._4_4_) {
                  iVar5 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&local_110,(int *)((longlong)&local_108 + 4));
                }
                local_108 = CONCAT44(local_108._4_4_,iVar5 + 1);
                pFVar11 = local_110.Data + (longlong)iVar5 * 0x10;
                *(undefined8 *)pFVar11 = 0;
                *(FScriptContainerElement **)pFVar11 = local_e8.Data.AllocatorInstance.Data;
                *(int *)(pFVar11 + 8) = local_e8.Data.ArrayNum;
                *(int *)(pFVar11 + 0xc) = local_e8.Data.ArrayMax;
                local_e8.Data.ArrayNum = 0;
                local_e8.Data.ArrayMax = 0;
                local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (cVar3 != '\0') {
                  ::FString::FString(&local_d8,"Graphics");
                  if (local_110.Data <= (FScriptContainerElement *)&local_d8) {
                    if ((FScriptContainerElement *)&local_d8 <
                        local_110.Data + (longlong)local_108._4_4_ * 0x10) {
                      local_140 = (longlong)(int)local_108;
                      local_138 = 0x10;
                      local_158 = (FScriptContainerElement *)&local_d8;
                      local_150 = local_110.Data;
                      local_148 = (longlong)local_108._4_4_;
                      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        );
                      if (bVar4) {
                        pcVar7 = (code *)swi(3);
                        CVar8.ptr_ = (IUnknown *)(*pcVar7)();
                        return (ComPtr<IUnknown>)CVar8.ptr_;
                      }
                    }
                  }
                  iVar5 = (int)local_108;
                  if ((int)local_108 == local_108._4_4_) {
                    iVar5 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&local_110,(int *)((longlong)&local_108 + 4));
                  }
                  local_108 = CONCAT44(local_108._4_4_,iVar5 + 1);
                  pFVar11 = local_110.Data + (longlong)iVar5 * 0x10;
                  *(undefined8 *)pFVar11 = 0;
                  *(FScriptContainerElement **)pFVar11 = local_d8.Data.AllocatorInstance.Data;
                  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  *(int *)(pFVar11 + 8) = local_d8.Data.ArrayNum;
                  *(int *)(pFVar11 + 0xc) = local_d8.Data.ArrayMax;
                  local_d8.Data.ArrayNum = 0;
                  local_d8.Data.ArrayMax = 0;
                }
                iVar5 = (int)local_108;
                bVar4 = true;
                pFVar11 = local_110.Data + (longlong)(int)local_108 * 0x10;
                local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_b8.Data.ArrayNum = 0;
                local_b8.Data.ArrayMax = 0;
                FVar14.Data = local_110.Data;
                while( true ) {
                  if ((int)local_108 != iVar5) {
                    local_117[0] = 0;
                    `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_117);
                  }
                  if (FVar14.Data == pFVar11) break;
                  if (bVar4) {
                    bVar4 = false;
                  }
                  else {
                    ::FString::AppendChars(&local_b8,L", ",2);
                  }
                  iVar15 = *(int *)(FVar14.Data + 8) + -1;
                  if (*(int *)(FVar14.Data + 8) == 0) {
                    iVar15 = 0;
                  }
                  ::FString::AppendChars(&local_b8,*(wchar_t **)FVar14.Data,iVar15);
                  FVar14.Data = FVar14.Data + 0x10;
                }
                if (4 < (byte)LogNNERuntimeORT._0_1_) {
                  FVar14.Data = (FScriptContainerElement *)L"";
                  if (local_b8.Data.ArrayNum != 0) {
                    FVar14.Data = local_b8.Data.AllocatorInstance.Data;
                  }
                  `UE::NNERuntimeORT::Private::GetAdapterNpu'::__l2::<lambda_1>::operator()
                            (local_126,&local_a0,(IDXCoreAdapter *)local_f8);
                  local_158 = FVar14.Data;
                  Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT)
                  ;
                  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                  }
                }
                if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                }
                DestructItems<FString,int>((FString *)local_110.Data,(int)local_108);
                if (local_110.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_110.Data);
                }
                uVar18 = (ulonglong)local_128;
              }
              IVar2 = local_f8;
              if ((IVar13 == (IUnknown)0x0) && (local_127 == '\0')) {
                local_f8 = (IUnknown)0x0;
                IVar13 = IVar2;
              }
            }
            IVar2 = local_f8;
            if (local_f8 != (IUnknown)0x0) {
              local_f8 = (IUnknown)0x0;
              (**(code **)(*(longlong *)IVar2 + 0x10))();
            }
            IVar16._0_4_ = IVar16._0_4_ + 1;
            IVar16._4_4_ = 0;
          } while (IVar16._0_4_ < local_c0);
          pIVar9 = local_a8;
          if (IVar13 == (IUnknown)0x0) goto LAB_14eb14ffd;
          if (((char)uVar18 != '\0') && (4 < (byte)LogNNERuntimeORT._0_1_)) {
            `UE::NNERuntimeORT::Private::GetAdapterNpu'::__l2::<lambda_1>::operator()
                      (local_126,&local_90,(IDXCoreAdapter *)IVar13);
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
          }
          *local_a8 = IVar13;
          pIVar9 = local_a8;
        }
        FVar14.Data = (FScriptContainerElement *)local_f0;
        if (local_f0 == (IDXCoreAdapterList *)0x0) goto LAB_14eb1508f;
        local_f0 = (IDXCoreAdapterList *)0x0;
      }
      else {
LAB_14eb15022:
        IVar13 = local_c8;
        if ((bVar12 != 0) && (4 < (byte)LogNNERuntimeORT._0_1_)) {
          `UE::NNERuntimeORT::Private::GetAdapterNpu'::__l2::<lambda_1>::operator()
                    (local_126,&local_80,(IDXCoreAdapter *)local_c8);
          Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_Selecting_NPU_a_15301b140,
                     (FLogCategoryBase *)&LogNNERuntimeORT);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        *in_R8 = uVar17;
        *pIVar9 = IVar13;
LAB_14eb1507a:
        FVar14.Data = local_100.Data;
        if ((IDXCoreAdapterList *)local_100.Data == (IDXCoreAdapterList *)0x0) goto LAB_14eb1508f;
        local_100.Data = (FScriptContainerElement *)0x0;
      }
      (**(code **)((longlong)*(IDXCoreAdapterList *)FVar14.Data + 0x10))();
LAB_14eb1508f:
      plVar1 = local_120;
      if (local_120 == (longlong *)0x0) {
        return (ComPtr<IUnknown>)pIVar9;
      }
      local_120 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x10))();
      return (ComPtr<IUnknown>)pIVar9;
    }
    if ((byte)LogNNERuntimeORT._0_1_ < 5) goto LAB_14eb1491f;
    pFVar10 = &::LOG_Static;
  }
  Logging::Private::BasicLog<5>(pFVar10,(FLogCategoryBase *)&LogNNERuntimeORT);
LAB_14eb1491f:
  *pIVar9 = (IUnknown)0x0;
  return (ComPtr<IUnknown>)pIVar9;
}

// GetDllHandle @ 14eb15150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::NNERuntimeORT::Private::DllHelper::GetDllHandle
          (FString *param_1,TArray<void_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FStaticBasicLogRecord *pFVar6;
  wchar_t *pwVar7;
  void *local_18 [2];
  
  bVar3 = FPaths::FileExists(param_1);
  if (bVar3) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    local_18[0] = FWindowsPlatformProcess::GetDllHandle(pwVar7);
    if (local_18[0] != (void *)0x0) {
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      *(void **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
      return true;
    }
    if ((byte)LogNNERuntimeORT._0_1_ < 2) {
      return false;
    }
    pFVar6 = &::LOG_Static;
    local_18[0] = (void *)0x0;
  }
  else {
    if ((byte)LogNNERuntimeORT._0_1_ < 2) {
      return false;
    }
    if ((param_1->Data).ArrayNum == 0) {
      pFVar6 = &::LOG_Static;
    }
    else {
      pFVar6 = &::LOG_Static;
    }
  }
  Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogNNERuntimeORT);
  return false;
}

// GetGraphOptimizationLevel @ 14eb152b0

GraphOptimizationLevel __cdecl
UE::NNERuntimeORT::Private::GetGraphOptimizationLevel
          (FGraphOptimizationLevels *param_1,bool param_2,bool param_3)

{
  if (param_2) {
    return param_1->Online;
  }
  if (param_3) {
    return param_1->Cooking;
  }
  return param_1->Offline;
}

// GetGraphOptimizationLevelForCPU @ 14eb152d0

GraphOptimizationLevel __cdecl
UE::NNERuntimeORT::Private::GetGraphOptimizationLevelForCPU(bool param_1,bool param_2)

{
  if (param_1) {
    return ORT_ENABLE_ALL;
  }
  return -(uint)param_2 & ORT_ENABLE_EXTENDED;
}

// GetGraphOptimizationLevelForDML @ 14eb152f0

GraphOptimizationLevel __cdecl
UE::NNERuntimeORT::Private::GetGraphOptimizationLevelForDML(bool param_1,bool param_2)

{
  GraphOptimizationLevel GVar1;
  
  GVar1 = ORT_DISABLE_ALL;
  if (param_1) {
    GVar1 = ORT_ENABLE_ALL;
  }
  return GVar1;
}

// GetShape @ 14eb16820

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __cdecl
UE::NNERuntimeORT::Private::OrtHelper::GetShape
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,Value *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  OrtStatus *pOVar8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined1 local_res10 [8];
  OrtTensorTypeAndShapeInfo *local_res18;
  ulong64 local_res20;
  undefined4 local_58 [2];
  ForAnyElementType local_50;
  uint local_48 [4];
  
  local_res18 = (OrtTensorTypeAndShapeInfo *)0x0;
  local_res20 = 0;
  pOVar8 = (*Ort::Global<void>::api_->GetTensorTypeAndShape)((OrtValue *)*param_1,&local_res18);
  Ort::ThrowOnError(pOVar8);
  pOVar8 = (*Ort::Global<void>::api_->GetDimensionsCount)(local_res18,&local_res20);
  Ort::ThrowOnError(pOVar8);
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  iVar7 = (int)local_res20;
  if (iVar7 < 1) {
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(local_res20 & 0xffffffff);
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,&local_50,(int *)local_48,(int *)(local_48 + 1));
  }
  pOVar8 = (*Ort::Global<void>::api_->GetDimensions)
                     (local_res18,(long64 *)local_50.Data,(longlong)(int)local_48[0]);
  Ort::ThrowOnError(pOVar8);
  (*Ort::Global<void>::api_->ReleaseTensorTypeAndShapeInfo)(local_res18);
  uVar5 = local_48[0];
  uVar10 = (ulonglong)(int)local_48[0];
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_50.Data + uVar10 * 8;
  FVar11.Data = local_50.Data;
  while( true ) {
    if ((uint)uVar10 != uVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar11.Data == pFVar1) {
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      return __return_storage_ptr__;
    }
    lVar2 = *(longlong *)FVar11.Data;
    if ((lVar2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTUtils.cpp"
                           ,0x1b4,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_58[0] = (undefined4)lVar2;
    if (((pFVar3 <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 <
         pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar11.Data = FVar11.Data + 8;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_58[0];
    uVar10 = (ulonglong)local_48[0];
  }
  pcVar4 = (code *)swi(3);
  pTVar9 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
  return pTVar9;
}

// IsAvailableGPU @ 14eb17f60

bool __cdecl UE::NNERuntimeORT::Private::Details::IsAvailableGPU(bool param_1,bool param_2)

{
  if ((param_1) && (param_2)) {
    return true;
  }
  return false;
}

// IsAvailableNPU @ 14eb17f80

bool __cdecl UE::NNERuntimeORT::Private::Details::IsAvailableNPU(bool param_1,bool param_2)

{
  if ((param_1) && (param_2)) {
    return true;
  }
  return false;
}

// IsAvailableRDG @ 14eb17fa0

bool __cdecl UE::NNERuntimeORT::Private::Details::IsAvailableRDG(bool param_1,bool param_2)

{
  if ((param_1) && (param_2)) {
    return true;
  }
  return false;
}

// IsD3D12Available @ 14eb17fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UE::NNERuntimeORT::Private::IsD3D12Available(void)

{
  ID3D12Device1 IVar1;
  longlong *plVar2;
  IUnknown IVar3;
  int iVar4;
  void *pvVar5;
  code *pcVar6;
  void **ppvVar7;
  ComPtr<ID3D12Device1> CVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong **local_58;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  IUnknown local_30;
  _GUID local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pvVar5 = FWindowsPlatformProcess::GetDllHandle(L"DXCore.dll");
  if (pvVar5 == (void *)0x0) {
    return false;
  }
  pcVar6 = FWindowsPlatformProcess::GetDllExport(pvVar5,L"DXCoreCreateAdapterFactory");
  if (pcVar6 == (code *)0x0) {
    return false;
  }
  local_38 = (longlong *)0x0;
  iVar4 = (*pcVar6)(&_GUID_78ee5945_c36e_4b13_a669_005dd11c0f06,&local_38);
  if (iVar4 < 0) {
    bVar9 = false;
    goto LAB_14eb180b3;
  }
  local_58 = &local_48;
  local_48 = (longlong *)0x0;
  local_28 = DXCORE_ADAPTER_ATTRIBUTE_D3D12_CORE_COMPUTE;
  iVar4 = (**(code **)(*local_38 + 0x18))
                    (local_38,1,&local_28,&_GUID_526c7776_40e9_459b_b711_f32ad76dfc28);
  if (iVar4 < 0) {
LAB_14eb1809c:
    bVar9 = false;
  }
  else {
    iVar4 = (**(code **)(*local_48 + 0x20))();
    plVar2 = local_48;
    if (iVar4 == 0) {
      if (2 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      }
      goto LAB_14eb1809c;
    }
    local_40 = (longlong *)0x0;
    pcVar6 = *(code **)(*local_48 + 0x18);
    ppvVar7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDXCoreAdapter>_>
                        ((ComPtrRef<Microsoft::WRL::ComPtr<IDXCoreAdapter>_>)&local_40);
    iVar4 = (*pcVar6)(plVar2,0,&_GUID_f0db4c7f_fe5a_42a2_bd62_f2a6cf6fc83e,ppvVar7);
    if (iVar4 < 0) {
      bVar9 = false;
    }
    else {
      CVar8 = CreateD3D12Device(&local_30,(D3D_FEATURE_LEVEL)local_40);
      IVar3 = local_30;
      IVar1 = *CVar8.ptr_;
      *CVar8.ptr_ = (ID3D12Device1)0x0;
      if (local_30 != (IUnknown)0x0) {
        local_30 = (IUnknown)0x0;
        (**(code **)(*(longlong *)IVar3 + 0x10))();
      }
      bVar9 = IVar1 != (ID3D12Device1)0x0;
      if (IVar1 != (ID3D12Device1)0x0) {
        (**(code **)(*(longlong *)IVar1 + 0x10))(IVar1);
      }
    }
    plVar2 = local_40;
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = local_48;
  if (local_48 != (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x10))();
  }
LAB_14eb180b3:
  plVar2 = local_38;
  if (local_38 != (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x10))();
  }
  return bVar9;
}

// IsD3D12DeviceNPUAvailable @ 14eb181b0

bool __cdecl UE::NNERuntimeORT::Private::IsD3D12DeviceNPUAvailable(void)

{
  longlong *plVar1;
  undefined8 in_RDX;
  bool bVar2;
  IUnknown local_res8;
  longlong *local_res10;
  
  local_res8._0_4_ = 0x1000;
  GetAdapterNpu(SUB81(&local_res10,0),
                (D3D_FEATURE_LEVEL *)CONCAT71((int7)((ulonglong)in_RDX >> 8),1));
  if (local_res10 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    CreateD3D12Device(&local_res8,(D3D_FEATURE_LEVEL)local_res10);
    plVar1 = (longlong *)CONCAT44(local_res8._4_4_,local_res8._0_4_);
    bVar2 = plVar1 != (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x10))(local_res10);
  }
  return bVar2;
}

// IsRHID3D12Available @ 14eb18240

bool __cdecl UE::NNERuntimeORT::Private::IsRHID3D12Available(void)

{
  int iVar1;
  
  if (GDynamicRHI != (FDynamicRHI *)0x0) {
    iVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
    if (iVar1 == 3) {
      return true;
    }
  }
  return false;
}

// MakeOnnxDataDescriptor @ 14eb18270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnnxDataDescriptor * __cdecl
UE::NNERuntimeORT::Private::Details::MakeOnnxDataDescriptor
          (FOnnxDataDescriptor *__return_storage_ptr__,
          TArrayView<unsigned_char_const_,__int64> *param_1,
          TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
          *param_2)

{
  undefined8 uVar1;
  void *_Src;
  code *pcVar2;
  ForAnyElementType FVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FOnnxDataDescriptor *pFVar8;
  byte bVar9;
  longlong lVar10;
  char *pcVar11;
  undefined7 uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint *puVar19;
  long64 lVar20;
  undefined1 auStackY_268 [32];
  undefined1 local_228 [8];
  long64 local_220;
  ForAnyElementType local_218;
  undefined8 local_210;
  ForAnyElementType local_208;
  int local_200;
  int local_1fc;
  ForAnyElementType local_1f8;
  int local_1f0;
  int local_1ec;
  longlong local_1e8;
  undefined8 local_1e0;
  int local_1d8;
  FOnnxDataDescriptor *local_1d0;
  longlong *local_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  uint local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  FArchiveState local_168;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  ulonglong uVar18;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_220 = param_1->ArrayNum;
  uVar18 = 0;
  uVar17 = 0;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_210 = 0;
  uVar6 = OnnxExternalDataDescriptorKey.Data.ArrayNum - 1;
  FVar3.Data = OnnxExternalDataDescriptorKey.Data.AllocatorInstance.Data;
  if (OnnxExternalDataDescriptorKey.Data.ArrayNum == 0) {
    uVar6 = uVar17;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  local_1d0 = __return_storage_ptr__;
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,(wchar_t *)FVar3.Data);
  iVar7 = TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
                      *)param_2,uVar6,&OnnxExternalDataDescriptorKey);
  if (iVar7 != -1) {
    uVar6 = OnnxExternalDataDescriptorKey.Data.ArrayNum - 1;
    FVar3 = OnnxExternalDataDescriptorKey.Data.AllocatorInstance;
    if (OnnxExternalDataDescriptorKey.Data.ArrayNum == 0) {
      uVar6 = uVar17;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,(wchar_t *)FVar3.Data);
    pcVar11 = (char *)(ulonglong)uVar6;
    iVar7 = TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
                        *)param_2,uVar6,&OnnxExternalDataDescriptorKey);
    uVar13 = uVar18;
    if ((iVar7 == -1) || (uVar13 = *(longlong *)param_2 + (longlong)iVar7 * 0x28, uVar13 == 0)) {
      pcVar11 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl";
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FOnnxDataDescriptor *)(*pcVar2)();
        return pFVar8;
      }
    }
    uVar1 = *(undefined8 *)(uVar13 + 0x10);
    lVar10 = *(longlong *)(uVar13 + 0x18);
    if (0x7fffffff < lVar10) {
      pcVar11 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h";
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount <= static_cast<InCountType>(TNumericLimits<SizeType>::Max())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xc9,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FOnnxDataDescriptor *)(*pcVar2)();
        return pFVar8;
      }
    }
    local_168._padding_ = 0;
    local_168.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_168.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_168.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_168.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_168._40_8_ = 0;
    local_168.ArSerializingDefaults = 0;
    local_168.ArPortFlags = 0;
    local_168.ArMaxSerializeSize = 0;
    local_168.ArUEVer.FileVersionUE4 = 0;
    local_168.ArUEVer.FileVersionUE5 = 0;
    local_168.ArLicenseeUEVer = 0;
    local_168.ArEngineVer.Major = 0;
    local_168.ArEngineVer.Minor = 0;
    local_168.ArEngineVer.Patch = 0;
    local_168.ArEngineVer._6_2_ = 0;
    local_168.ArEngineVer.Changelist = 0;
    local_168.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_168.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_168.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_168.SerializedProperty = (FProperty *)0x0;
    local_168.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_168.bCustomVersionsAreReset = false;
    local_168._129_7_ = 0;
    local_168.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_168);
    local_c8 = (longlong)(int)lVar10;
    local_d8 = 0;
    uVar12 = (undefined7)((ulonglong)pcVar11 >> 8);
    local_c0 = 0x7fffffffffffffff;
    local_168._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d0 = uVar1;
    FArchiveState::SetIsLoading(&local_168,true);
    (**(code **)(local_168._padding_ + 0x108))(&local_168,CONCAT71(uVar12,1));
    local_168._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    TSetPrivateFriend::
    Serialize<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
              ((FArchive *)&local_168,
               (TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                *)local_98);
    uVar6 = local_70;
    lVar20 = local_220;
    local_1a8 = 0;
    uStack_1bc = 1;
    uStack_1ac = local_1a8;
    if (local_70 != 0) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar15 = *puVar19;
      uVar13 = uVar18;
      local_1a8 = 0;
      uVar17 = 0;
      while (uVar15 == 0) {
        iVar7 = (int)uVar18;
        local_1a8 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)local_1a8;
        uVar17 = iVar7 + 1;
        uVar18 = (ulonglong)uVar17;
        uStack_1ac = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
        goto LAB_14eb18530;
        uVar15 = puVar19[(longlong)iVar7 + 1];
      }
      uStack_1bc = -uVar15 & uVar15;
      uVar18 = (ulonglong)uStack_1bc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1d8 = (int)lVar10;
      uStack_1ac = (local_1a8 - 1) + local_1d8;
      if ((int)local_70 < (int)uStack_1ac) {
        uStack_1ac = local_70;
      }
    }
LAB_14eb18530:
    local_1c8 = (longlong *)local_98;
    uStack_1a4 = local_9c;
    local_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar15 = local_70 & 0xffffffe0;
    iStack_1a0 = local_98._8_4_ - local_64;
    uStack_1b0 = 0xffffffff;
    TStack_190.CurrentBitIndex = uStack_1ac;
    TStack_190.UnvisitedBitMask = 0xffffffff;
    TStack_190._padding_ = CONCAT44(uStack_1bc,uVar17);
    iVar7 = (int)local_70 >> 5;
    TStack_190._28_4_ = local_9c;
    TStack_190.BaseBitIndex = local_1a8;
    uStack_170 = CONCAT44(uStack_19c,iStack_1a0);
    bVar9 = (byte)local_70;
    uStack_1c0 = uVar17;
    local_198 = local_1c8;
    TStack_190.Array = local_1b8;
    if (((int)local_70 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FOnnxDataDescriptor *)(*pcVar2)();
      return pFVar8;
    }
    if (uVar6 != local_70) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar17 = -1 << (bVar9 & 0x1f) & puVar19[iVar7];
      while (uVar17 == 0) {
        lVar10 = (longlong)iVar7;
        uVar15 = uVar15 + 0x20;
        iVar7 = iVar7 + 1;
        uVar6 = local_70;
        if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar7)
        goto LAB_14eb1863e;
        uVar17 = puVar19[lVar10 + 1];
      }
      uVar18 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar6 = (int)lVar10 + -1 + uVar15;
      if ((int)local_70 < (int)uVar6) {
        uVar6 = local_70;
      }
    }
LAB_14eb1863e:
    while( true ) {
      plVar4 = local_198;
      if ((int)local_198[1] - *(int *)((longlong)local_198 + 0x34) != (int)uStack_170) {
        `TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_228);
      }
      __return_storage_ptr__ = local_1d0;
      if (((TStack_190.CurrentBitIndex == uVar6) &&
          (TStack_190.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar4 == (longlong *)local_98)) break;
      puVar16 = (undefined8 *)((longlong)TStack_190.CurrentBitIndex * 0x20 + *plVar4);
      local_208.Data = (FScriptContainerElement *)0x0;
      local_200 = *(int *)(puVar16 + 1);
      lVar10 = (longlong)local_200;
      _Src = (void *)*puVar16;
      if (local_200 == 0) {
        local_1fc = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_200,0,&local_208,local_200,&local_1fc);
        memcpy(local_208.Data,_Src,lVar10 * 2);
      }
      iVar7 = local_200;
      FVar3.Data = local_208.Data;
      local_1f8.Data = (FScriptContainerElement *)0x0;
      local_1ec = 0;
      local_1f0 = local_200;
      if (local_200 != 0) {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_200,0,&local_1f8,local_200,&local_1ec);
        memcpy(local_1f8.Data,FVar3.Data,(longlong)iVar7 * 2);
      }
      local_1e0 = puVar16[2];
      iVar7 = (int)local_210;
      local_1e8 = lVar20;
      if ((int)local_210 == local_210._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_218,(int *)((longlong)&local_210 + 4));
      }
      FVar3.Data = local_1f8.Data;
      local_210 = CONCAT44(local_210._4_4_,iVar7 + 1);
      pFVar14 = local_218.Data + (longlong)iVar7 * 0x20;
      *(undefined8 *)pFVar14 = 0;
      lVar10 = (longlong)local_1f0;
      *(int *)(pFVar14 + 8) = local_1f0;
      if (local_1f0 == 0) {
        *(int *)(pFVar14 + 0xc) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1f0,0,(ForAnyElementType *)pFVar14,local_1f0,(int *)(pFVar14 + 0xc));
        memcpy(*(void **)pFVar14,FVar3.Data,lVar10 * 2);
      }
      *(longlong *)(pFVar14 + 0x10) = local_1e8;
      *(undefined8 *)(pFVar14 + 0x18) = local_1e0;
      lVar20 = lVar20 + puVar16[2];
      if (local_1f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data);
      }
      if (local_208.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data);
      }
      TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    FArchive::~FArchive((FArchive *)&local_168);
  }
  __return_storage_ptr__->OnnxModelDataSize = local_220;
  (__return_storage_ptr__->AdditionalDataDescriptors).AllocatorInstance.Data = local_218.Data;
  (__return_storage_ptr__->AdditionalDataDescriptors).ArrayNum = (int)local_210;
  (__return_storage_ptr__->AdditionalDataDescriptors).ArrayMax = local_210._4_4_;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_210 = 0;
  DestructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int>
            ((FOnnxAdditionalDataDescriptor *)0x0,0);
  if (local_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data);
  }
  return __return_storage_ptr__;
}

// MakeRuntimeConfigFromSettings @ 14eb18900

FRuntimeConf __cdecl
UE::NNERuntimeORT::Private::Detail::MakeRuntimeConfigFromSettings(UNNERuntimeORTSettings *param_1)

{
  FRuntimeConf FVar1;
  
  FVar1.ExecutionMode._1_3_ = 0;
  FVar1.ExecutionMode._0_1_ = (param_1->GameThreadingOptions).ExecutionMode.Value != '\0';
  return (FRuntimeConf)FVar1.ExecutionMode;
}

// MakeRuntimeDml @ 14eb18910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UNNERuntimeORTDmlProxy,FWeakObjectPtr> __cdecl
UE::NNERuntimeORT::Private::MakeRuntimeDml(bool param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  undefined7 in_register_00000009;
  FWeakObjectPtr this;
  longlong *plVar7;
  char in_DL;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d7;
  UObject *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  this._1_7_ = in_register_00000009;
  this.ObjectIndex._0_1_ = param_1;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((GDynamicRHI == (FDynamicRHI *)0x0) ||
     (iVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x28))(), iVar4 != 3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  bVar3 = IsD3D12Available();
  local_d8 = bVar3;
  local_d7 = IsD3D12DeviceNPUAvailable();
  if ((in_DL == '\0') || (!bVar3)) {
    bVar3 = false;
    if (in_DL != '\0') goto LAB_14eb18996;
LAB_14eb189a0:
    bVar1 = false;
    if (in_DL != '\0') goto LAB_14eb189a8;
  }
  else {
    bVar3 = true;
LAB_14eb18996:
    if (!bVar1) goto LAB_14eb189a0;
    bVar1 = true;
LAB_14eb189a8:
    if ((bool)local_d7) {
      bVar2 = true;
      goto LAB_14eb189b2;
    }
  }
  bVar2 = false;
LAB_14eb189b2:
  if (4 < (byte)LogNNERuntimeORT._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
  }
  if (4 < (byte)LogNNERuntimeORT._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
  }
  if (4 < (byte)LogNNERuntimeORT._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
  }
  if (((((4 < (byte)LogNNERuntimeORT._0_1_) &&
        (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT),
        4 < (byte)LogNNERuntimeORT._0_1_)) &&
       (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT),
       4 < (byte)LogNNERuntimeORT._0_1_)) &&
      ((Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT),
       4 < (byte)LogNNERuntimeORT._0_1_ &&
       (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT),
       4 < (byte)LogNNERuntimeORT._0_1_)))) &&
     (Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u___RDG___s_153018bd8,
                 (FLogCategoryBase *)&LogNNERuntimeORT), 4 < (byte)LogNNERuntimeORT._0_1_)) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
  }
  if (bVar3) {
    local_c8._8_8_ = GetTransientPackageAsObject();
    if (bVar1) {
      if (bVar2) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)local_c8._8_8_,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar5 = UNNERuntimeORTDml_GPU_RDG_NPU::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar5);
        pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar7 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar7 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar6);
        }
        *(undefined8 *)this = 0;
        local_d0 = pUVar6;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar6);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_d0);
      }
      else {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)local_c8._8_8_,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar5 = UNNERuntimeORTDml_GPU_RDG::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar5);
        pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar7 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar7 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar6);
        }
        *(undefined8 *)this = 0;
        local_d0 = pUVar6;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar6);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_d0);
      }
    }
    else if (bVar2) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)local_c8._8_8_,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = UNNERuntimeORTDml_GPU_NPU::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar5);
      pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar7 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar6);
      }
      *(undefined8 *)this = 0;
      local_d0 = pUVar6;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_d0);
    }
    else {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)local_c8._8_8_,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = UNNERuntimeORTDml_GPU::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar5);
      pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar7 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar6);
      }
      *(undefined8 *)this = 0;
      local_d0 = pUVar6;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_d0);
    }
  }
  else if (bVar1) {
    local_c8._8_8_ = GetTransientPackageAsObject();
    if (bVar2) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)local_c8._8_8_,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = UNNERuntimeORTDml_RDG_NPU::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar5);
      pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar7 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar6);
      }
      *(undefined8 *)this = 0;
      local_d0 = pUVar6;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_d0);
    }
    else {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)local_c8._8_8_,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = UNNERuntimeORTDml_RDG::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar5);
      pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar7 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar6);
      }
      *(undefined8 *)this = 0;
      local_d0 = pUVar6;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_d0);
    }
  }
  else if (bVar2) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = UNNERuntimeORTDml_NPU::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar5);
    local_c8._8_8_ = pUVar6;
    pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar7 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar6);
    }
    *(undefined8 *)this = 0;
    local_d0 = pUVar6;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_d0);
  }
  else {
    if (4 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
    *(undefined8 *)this = 0;
  }
  return (TWeakObjectPtr<UNNERuntimeORTDmlProxy,FWeakObjectPtr>)this;
}

// OptimizeModel @ 14eb18fc0

/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::NNERuntimeORT::Private::OptimizeModel
          (TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_1,SessionOptions *param_2,
          TArrayView<unsigned_char_const_,__int64> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  OrtStatus *pOVar5;
  Env *pEVar6;
  longlong *plVar7;
  IFileManager *pIVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  OrtSession *local_res8;
  OrtSession **local_res10;
  long64 local_res18 [2];
  uchar *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  uchar *local_48;
  long64 lStack_40;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"OrtHelper::OptimizeModel");
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId681,"OrtHelper::OptimizeModel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTUtils.cpp"
               ,0x2a9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId681);
  }
  pFVar4 = FPaths::ProjectIntermediateDir(&local_60);
  FPaths::ConvertRelativePathToFull(&local_70,pFVar4);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_70.Data.ArrayNum != 0) {
    FVar9.Data = local_70.Data.AllocatorInstance.Data;
  }
  FPaths::CreateTempFilename(&local_80,(wchar_t *)FVar9.Data,L"ORTOptimizerPass_Optimized",L".onnx")
  ;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar9.Data = local_80.Data.AllocatorInstance.Data;
  }
  pOVar5 = (*Ort::Global<void>::api_->SetOptimizedModelFilePath)
                     ((OrtSessionOptions *)*param_2,(wchar_t *)FVar9.Data);
  Ort::ThrowOnError(pOVar5);
  local_88 = param_3->DataPtr;
  lStack_40 = param_3->ArrayNum;
  local_res10 = &local_res8;
  local_res18[0] = param_3->ArrayNum;
  local_res8 = (OrtSession *)0x0;
  local_48 = local_88;
  pEVar6 = FEnvironment::GetOrtEnv(param_1->Object);
  bVar2 = GuardedOrtApiCallWithStatus<OrtStatus_*_(__cdecl*const_&)(OrtEnv_const_*,void_const_*,unsigned___int64,OrtSessionOptions_const_*,OrtSession_*_*)_noexcept,Ort::Env_const_&,unsigned_char_const_*,__int64,Ort::SessionOptions_const_&,OrtSession_*_*>
                    (&Ort::Global<void>::api_->CreateSessionFromArray,pEVar6,&local_88,local_res18,
                     param_2,&local_res10);
  if (bVar2) {
    if ((local_res8 == (OrtSession *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("SessionPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTUtils.cpp"
                           ,0x363,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    plVar7 = ::operator_new(8);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)local_res8;
      (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*plVar7);
      ::operator_delete(plVar7,8);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_80.Data.ArrayNum != 0) {
        FVar9.Data = local_80.Data.AllocatorInstance.Data;
      }
      FFileHelper::LoadFileToArray(param_4,(wchar_t *)FVar9.Data,0);
      pIVar8 = IFileManager::Get();
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_80.Data.ArrayNum != 0) {
        FVar9.Data = local_80.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar8 + 0x38))
                (pIVar8,FVar9.Data,0,0,(ulonglong)param_2 & 0xffffffffffffff00);
      bVar2 = true;
      goto LAB_14eb191fd;
    }
  }
  if (1 < (byte)LogNNERuntimeORT._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
  }
  pIVar8 = IFileManager::Get();
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar9.Data = local_80.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar8 + 0x38))
            (pIVar8,FVar9.Data,0,0,(ulonglong)param_2 & 0xffffffffffffff00);
  bVar2 = false;
LAB_14eb191fd:
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar2;
}

// SetInputTensorShapes @ 14eb1d380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::NNERuntimeORT::Private::Detail::SetInputTensorShapes
          (TArrayView<UE::NNE::FTensorShape_const_,int> *param_1,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *param_2,
          TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ForElementType<int> _Dst;
  int iVar5;
  uint uVar6;
  uchar *puVar7;
  uchar *_Src;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStackY_f8 [32];
  longlong local_b8;
  FString local_98;
  uchar local_88;
  FSymbolicTensorShape local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  iVar5 = param_1->ArrayNum;
  TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_>::Reset(param_3,iVar5);
  if (iVar5 == param_2->ArrayNum) {
    uVar6 = 0;
    if (0 < iVar5) {
      lVar8 = 0;
      local_b8 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < param_2->ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        puVar7 = (param_2->DataPtr->Shape).Data.AllocatorInstance.InlineData + local_b8 + -0x18;
        ::FString::FString(&local_98,(FString *)puVar7);
        local_88 = puVar7[0x10];
        local_80.Data.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        local_80.Data.ArrayNum = *(int *)(puVar7 + 0x40);
        lVar9 = (longlong)local_80.Data.ArrayNum;
        _Src = puVar7 + 0x18;
        if (*(uchar **)((longlong)puVar7 + 0x38) != (uchar *)0x0) {
          _Src = *(uchar **)((longlong)puVar7 + 0x38);
        }
        if (local_80.Data.ArrayNum == 0) {
          local_80.Data.ArrayMax = 8;
        }
        else {
          Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,local_80.Data.ArrayNum,0,(ForElementType<int> *)&local_80,
                     local_80.Data.ArrayNum,&local_80.Data.ArrayMax);
          _Dst = (ForElementType<int>)&local_80;
          if (local_80.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            _Dst = local_80.Data.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)_Dst,_Src,lVar9 << 2);
        }
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        bVar2 = NNE::FTensorShape::IsCompatibleWith
                          ((FTensorShape *)
                           ((param_1->DataPtr->Data).AllocatorInstance.InlineData + lVar8),&local_80
                          );
        if (!bVar2) {
          if (1 < (byte)LogNNERuntimeORT._0_1_) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
          }
          if (local_80.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_80.Data.AllocatorInstance.SecondaryData);
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          goto LAB_14eb1d61a;
        }
        if (local_80.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_80.Data.AllocatorInstance.SecondaryData);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        uVar6 = uVar6 + 1;
        iVar5 = param_1->ArrayNum;
        local_b8 = local_b8 + 0x48;
        lVar8 = lVar8 + 0x30;
      } while ((int)uVar6 < iVar5);
    }
    DestructItems<UE::NNE::FTensorShape,int>
              ((FTensorShape *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
    param_3->ArrayNum = iVar5;
    if ((iVar5 == 0) && (param_3->ArrayMax == 0)) {
      param_3->ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar5,param_3->ArrayMax,&param_3->AllocatorInstance,iVar5,&param_3->ArrayMax
                );
      ConstructItems<UE::NNE::FTensorShape,UE::NNE::FTensorShape,int>
                ((param_3->AllocatorInstance).Data,param_1->DataPtr,iVar5);
    }
    bVar2 = true;
  }
  else if ((byte)LogNNERuntimeORT._0_1_ < 2) {
LAB_14eb1d61a:
    bVar2 = false;
  }
  else {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    bVar2 = false;
  }
  return bVar2;
}

// TranslateTensorTypeORTToNNE @ 14eb1e120

TypeInfoORT * __cdecl
UE::NNERuntimeORT::Private::TranslateTensorTypeORTToNNE
          (TypeInfoORT *__return_storage_ptr__,ONNXTensorElementDataType param_1)

{
  switch(param_1) {
  default:
    __return_storage_ptr__->ElementSize = 0;
    __return_storage_ptr__->DataType = None;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_FLOAT:
    __return_storage_ptr__->DataType = Float;
    __return_storage_ptr__->ElementSize = 4;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_UINT8:
    __return_storage_ptr__->DataType = UInt8;
    __return_storage_ptr__->ElementSize = 1;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_INT8:
    __return_storage_ptr__->DataType = Int8;
    __return_storage_ptr__->ElementSize = 1;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_UINT16:
    __return_storage_ptr__->DataType = UInt16;
    __return_storage_ptr__->ElementSize = 2;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_INT16:
    __return_storage_ptr__->DataType = Int16;
    __return_storage_ptr__->ElementSize = 2;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_INT32:
    __return_storage_ptr__->DataType = Int32;
    __return_storage_ptr__->ElementSize = 4;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_INT64:
    __return_storage_ptr__->DataType = Int64;
    __return_storage_ptr__->ElementSize = 8;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_STRING:
    __return_storage_ptr__->DataType = Char;
    __return_storage_ptr__->ElementSize = 1;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_BOOL:
    __return_storage_ptr__->DataType = Boolean;
    __return_storage_ptr__->ElementSize = 1;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_FLOAT16:
    __return_storage_ptr__->DataType = Half;
    __return_storage_ptr__->ElementSize = 2;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_DOUBLE:
    __return_storage_ptr__->DataType = Double;
    __return_storage_ptr__->ElementSize = 8;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_UINT32:
    __return_storage_ptr__->DataType = UInt32;
    __return_storage_ptr__->ElementSize = 4;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_UINT64:
    __return_storage_ptr__->DataType = UInt64;
    __return_storage_ptr__->ElementSize = 8;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_COMPLEX64:
    __return_storage_ptr__->DataType = Complex64;
    __return_storage_ptr__->ElementSize = 8;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_COMPLEX128:
    __return_storage_ptr__->DataType = Complex128;
    __return_storage_ptr__->ElementSize = 0x10;
    return __return_storage_ptr__;
  case ONNX_TENSOR_ELEMENT_DATA_TYPE_BFLOAT16:
    __return_storage_ptr__->DataType = BFloat16;
    __return_storage_ptr__->ElementSize = 2;
    return __return_storage_ptr__;
  }
}

// WriteOnnxModelData @ 14eb1e2c0

void __cdecl
UE::NNERuntimeORT::Private::Details::WriteOnnxModelData
          (FMemoryWriter64 *param_1,TArrayView<unsigned_char_const_,__int64> *param_2,
          TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
          *param_3)

{
  longlong *plVar1;
  long64 lVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong lVar12;
  TArrayView<unsigned_char_const_,__int64> local_38;
  FOnnxDataDescriptor local_28;
  
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  MakeOnnxDataDescriptor(&local_28,&local_38,param_3);
  lVar12 = param_2->ArrayNum;
  if ((lVar12 != local_28.OnnxModelDataSize) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileData.Num() == Descriptor.OnnxModelDataSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORT.cpp"
                         ,0x3f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((longlong *)plVar1[1] < (longlong *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_28,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(ulong64 *)&local_28);
    }
  }
  else {
    local_28.OnnxModelDataSize = *(longlong *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  TArrayPrivateFriend::
  Serialize<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&local_28.AdditionalDataDescriptors);
  TMemoryWriterBase<TSizedDefaultAllocator<64>_>::Serialize
            ((TMemoryWriterBase<TSizedDefaultAllocator<64>_> *)param_1,param_2->DataPtr,lVar12);
  if (local_28.AdditionalDataDescriptors.ArrayNum != 0) {
    pwVar10 = L"";
    iVar7 = OnnxExternalDataBytesKey.Data.ArrayNum;
    if (iVar7 != 0) {
      pwVar10 = (wchar_t *)OnnxExternalDataBytesKey.Data.AllocatorInstance;
    }
    lVar12 = 0;
    iVar8 = 0;
    iVar9 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar9 = iVar8;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
    iVar7 = TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
                        *)param_3,uVar6,&OnnxExternalDataBytesKey);
    if ((iVar7 == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AdditionalFileData.Contains(OnnxExternalDataBytesKey)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORT.cpp"
                           ,0x48,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = OnnxExternalDataBytesKey.Data.ArrayNum + -1;
    FVar4.Data = OnnxExternalDataBytesKey.Data.AllocatorInstance.Data;
    if (OnnxExternalDataBytesKey.Data.ArrayNum == 0) {
      iVar7 = iVar8;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar4.Data);
    iVar7 = TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
                        *)param_3,uVar6,&OnnxExternalDataBytesKey);
    lVar11 = lVar12;
    if (((iVar7 == -1) || (lVar11 = *(longlong *)param_3 + (longlong)iVar7 * 0x28, lVar11 == 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(long64 *)(lVar11 + 0x18);
    iVar7 = OnnxExternalDataBytesKey.Data.ArrayNum + -1;
    FVar4.Data = OnnxExternalDataBytesKey.Data.AllocatorInstance.Data;
    if (OnnxExternalDataBytesKey.Data.ArrayNum == 0) {
      iVar7 = iVar8;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar4.Data);
    iVar7 = TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
                        *)param_3,uVar6,&OnnxExternalDataBytesKey);
    if (((iVar7 == -1) || (lVar12 = *(longlong *)param_3 + (longlong)iVar7 * 0x28, lVar12 == 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TMemoryWriterBase<TSizedDefaultAllocator<64>_>::Serialize
              ((TMemoryWriterBase<TSizedDefaultAllocator<64>_> *)param_1,*(void **)(lVar12 + 0x10),
               lVar2);
  }
  DestructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int>
            ((FOnnxAdditionalDataDescriptor *)
             local_28.AdditionalDataDescriptors.AllocatorInstance.Data,
             local_28.AdditionalDataDescriptors.ArrayNum);
  if ((FOnnxAdditionalDataDescriptor *)local_28.AdditionalDataDescriptors.AllocatorInstance.Data !=
      (FOnnxAdditionalDataDescriptor *)0x0) {
    FMemory::Free(local_28.AdditionalDataDescriptors.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)param_1);
  return;
}

