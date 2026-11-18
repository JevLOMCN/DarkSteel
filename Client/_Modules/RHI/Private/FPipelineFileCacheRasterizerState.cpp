// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// operator() @ 145c4b8d0

void __thiscall
`FPipelineFileCacheRasterizerState::FromString'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  undefined8 *puVar1;
  ForElementType<TStringView<wchar_t>_> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TStringView<wchar_t>_> FVar7;
  
  if (param_1->Size != 0) {
    FVar2 = *(ForElementType<TStringView<wchar_t>_> *)this;
    FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x60);
    if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x60) ==
        (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar7 = FVar2;
    }
    if (((ulonglong)FVar7 <= param_1) &&
       (param_1 < (TStringView<wchar_t> *)
                  ((longlong)*(int *)((longlong)FVar2 + 0x6c) * 0x10 + (longlong)FVar7))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)((longlong)FVar2 + 0x68);
    if (iVar6 == *(int *)((longlong)FVar2 + 0x6c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                        (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                         (int *)((longlong)FVar2 + 0x6c));
    }
    *(int *)((longlong)FVar2 + 0x68) = iVar6 + 1;
    uVar4 = *(undefined8 *)&param_1->Size;
    FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x60);
    if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x60) ==
        (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar7 = FVar2;
    }
    puVar1 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
    *puVar1 = param_1->DataPtr;
    puVar1[1] = uVar4;
  }
  return;
}

// FromString @ 145c589a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

void __thiscall
FPipelineFileCacheRasterizerState::FromString
          (FPipelineFileCacheRasterizerState *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TStringView<wchar_t> *pTVar6;
  TStringView<wchar_t> *pTVar7;
  wchar_t *pwVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> *local_f8 [2];
  wchar_t *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  TStringView<wchar_t> **local_d0;
  TArrayView<wchar_t_const_,int> local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  TStringView<wchar_t> local_a8 [6];
  TStringView<wchar_t> *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  pwVar8 = param_1->DataPtr;
  local_f8[0] = local_a8;
  local_d0 = local_f8;
  local_48 = (TStringView<wchar_t> *)0x0;
  iVar9 = 0;
  local_40 = 0;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPipelineFileCacheRasterizerState::FromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_e8 = (wchar_t *)&local_b8;
  local_3c = 6;
  local_b8 = 0xa000d;
  local_b4 = 0x3c0009;
  local_b0 = 0x20003e;
  pwVar1 = pwVar8 + param_1->Size;
  iStack_e0 = 6;
  while ((pwVar8 != pwVar1 && (iVar4 = iswspace(*pwVar8), iVar4 != 0))) {
    iVar9 = iVar9 + 1;
    pwVar8 = pwVar8 + 1;
  }
  pwVar1 = param_1->DataPtr;
  iVar4 = param_1->Size - iVar9;
  if (iVar4 != 0) {
    lVar10 = (longlong)iVar4;
    do {
      iVar5 = iswspace((pwVar1 + iVar9)[lVar10 + -1]);
      if (iVar5 == 0) break;
      iVar4 = iVar4 + -1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  local_c8._12_4_ = uStack_dc;
  local_c8.ArrayNum = iStack_e0;
  local_108.Size = iVar4;
  local_c8.DataPtr = local_e8;
  local_108.DataPtr = pwVar1 + iVar9;
  UE::String::ParseTokensMultiple
            (&local_108,&local_c8,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_d8,None
            );
  if ((local_40 != 6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parts.Num() == PartCount && sizeof(FillMode) == 1 && sizeof(CullMode) == 1 && sizeof(DepthClipMode) == 1 && sizeof(bAllowMSAA) == 1"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0x1c3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar7 = local_a8;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  ::LexFromString(&this->DepthBias,pTVar7);
  ::LexFromString(&this->SlopeScaleDepthBias,pTVar7 + 1);
  ::LexFromString(&(this->FillMode).Value,pTVar7 + 2);
  ::LexFromString(&(this->CullMode).Value,pTVar7 + 3);
  ::LexFromString(&this->DepthClipMode,pTVar7 + 4);
  ::LexFromString(&this->bAllowMSAA,pTVar7 + 5);
  pTVar6 = local_a8;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar6 = local_48;
  }
  if ((pTVar6 != pTVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parts.GetData() + PartCount == PartIt",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0x1cd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// ToString @ 145c7be20

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

FString * __thiscall
FPipelineFileCacheRasterizerState::ToString
          (FPipelineFileCacheRasterizerState *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"<%f %f %u %u %u %u>");
  return __return_storage_ptr__;
}

