// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// operator() @ 145c8c850

void __thiscall
`FDepthStencilStateInitializerRHI::FromString'::__l2::<lambda_1>::operator()
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
    FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xe0);
    if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xe0) ==
        (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar7 = FVar2;
    }
    if (((ulonglong)FVar7 <= param_1) &&
       (param_1 < (TStringView<wchar_t> *)
                  ((longlong)*(int *)((longlong)FVar2 + 0xec) * 0x10 + (longlong)FVar7))) {
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
    iVar6 = *(int *)((longlong)FVar2 + 0xe8);
    if (iVar6 == *(int *)((longlong)FVar2 + 0xec)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<14,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                        (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                         (int *)((longlong)FVar2 + 0xec));
    }
    *(int *)((longlong)FVar2 + 0xe8) = iVar6 + 1;
    uVar4 = *(undefined8 *)&param_1->Size;
    FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xe0);
    if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xe0) ==
        (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar7 = FVar2;
    }
    puVar1 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
    *puVar1 = param_1->DataPtr;
    puVar1[1] = uVar4;
  }
  return;
}

// FromString @ 145ca66c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDepthStencilStateInitializerRHI::FromString
          (FDepthStencilStateInitializerRHI *this,TStringView<wchar_t> *param_1)

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
  undefined1 auStack_1a8 [32];
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> *local_178 [2];
  wchar_t *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  code *local_158;
  TStringView<wchar_t> **local_150;
  TArrayView<wchar_t_const_,int> local_148;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  TStringView<wchar_t> local_128 [14];
  TStringView<wchar_t> *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pwVar8 = param_1->DataPtr;
  local_178[0] = local_128;
  local_150 = local_178;
  local_48 = (TStringView<wchar_t> *)0x0;
  iVar9 = 0;
  local_40 = 0;
  local_158 = UE::Core::Private::Function::
              TFunctionRefCaller<`FDepthStencilStateInitializerRHI::FromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
              ::Call;
  local_168 = (wchar_t *)&local_138;
  local_3c = 0xe;
  local_138 = 0xa000d;
  local_134 = 0x3c0009;
  local_130 = 0x20003e;
  pwVar1 = pwVar8 + param_1->Size;
  iStack_160 = 6;
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
  local_148._12_4_ = uStack_15c;
  local_148.ArrayNum = iStack_160;
  local_188.Size = iVar4;
  local_148.DataPtr = local_168;
  local_188.DataPtr = pwVar1 + iVar9;
  UE::String::ParseTokensMultiple
            (&local_188,&local_148,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_158,
             None);
  if ((local_40 != 0xe) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parts.Num() == PartCount && sizeof(bool) == 1 && sizeof(FrontFaceStencilFailStencilOp) == 1 && sizeof(BackFaceStencilTest) == 1 && sizeof(BackFaceDepthFailStencilOp) == 1"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x15d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar7 = local_128;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  ::LexFromString(&this->bEnableDepthWrite,pTVar7);
  ::LexFromString(&(this->DepthTest).Value,pTVar7 + 1);
  ::LexFromString(&this->bEnableFrontFaceStencil,pTVar7 + 2);
  ::LexFromString(&(this->FrontFaceStencilTest).Value,pTVar7 + 3);
  ::LexFromString(&(this->FrontFaceStencilFailStencilOp).Value,pTVar7 + 4);
  ::LexFromString(&(this->FrontFaceDepthFailStencilOp).Value,pTVar7 + 5);
  ::LexFromString(&(this->FrontFacePassStencilOp).Value,pTVar7 + 6);
  ::LexFromString(&this->bEnableBackFaceStencil,pTVar7 + 7);
  ::LexFromString(&(this->BackFaceStencilTest).Value,pTVar7 + 8);
  ::LexFromString(&(this->BackFaceStencilFailStencilOp).Value,pTVar7 + 9);
  ::LexFromString(&(this->BackFaceDepthFailStencilOp).Value,pTVar7 + 10);
  ::LexFromString(&(this->BackFacePassStencilOp).Value,pTVar7 + 0xb);
  ::LexFromString(&this->StencilReadMask,pTVar7 + 0xc);
  ::LexFromString(&this->StencilWriteMask,pTVar7 + 0xd);
  pTVar6 = local_128;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar6 = local_48;
  }
  if ((pTVar6 != pTVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parts.GetData() + PartCount == PartIt",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x173,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// FromString @ 145ca6950

void __thiscall
FDepthStencilStateInitializerRHI::FromString
          (FDepthStencilStateInitializerRHI *this,FString *param_1)

{
  int iVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  FromString(this,&local_18);
  return;
}

// ToString @ 145cc4990

FString * __thiscall
FDepthStencilStateInitializerRHI::ToString
          (FDepthStencilStateInitializerRHI *this,FString *__return_storage_ptr__)

{
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%u %u>");
  ::FString::PrintfImpl(&local_28,L"%u %u %u %u %u ");
  ::FString::PrintfImpl(&local_38,L"%u %u %u %u %u ");
  ::FString::PrintfImpl(&local_48,L"<%u %u ");
  ::FString::ConcatFF(&local_58,&local_48,&local_38);
  ::FString::ConcatFF(&local_68,&local_58,&local_28);
  ::FString::ConcatFF(__return_storage_ptr__,&local_68,&local_18);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

