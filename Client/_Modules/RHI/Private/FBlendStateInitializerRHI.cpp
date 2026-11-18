// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// operator() @ 145c8c760

void __thiscall
`FBlendStateInitializerRHI::FromString'::__l2::<lambda_1>::operator()
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
    FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x3a0);
    if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x3a0) ==
        (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar7 = FVar2;
    }
    if (((ulonglong)FVar7 <= param_1) &&
       (param_1 < (TStringView<wchar_t> *)
                  ((longlong)*(int *)((longlong)FVar2 + 0x3ac) * 0x10 + (longlong)FVar7))) {
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
    iVar6 = *(int *)((longlong)FVar2 + 0x3a8);
    if (iVar6 == *(int *)((longlong)FVar2 + 0x3ac)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<58,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                        (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                         (int *)((longlong)FVar2 + 0x3ac));
    }
    *(int *)((longlong)FVar2 + 0x3a8) = iVar6 + 1;
    uVar4 = *(undefined8 *)&param_1->Size;
    FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x3a0);
    if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x3a0) ==
        (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar7 = FVar2;
    }
    puVar1 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
    *puVar1 = param_1->DataPtr;
    puVar1[1] = uVar4;
  }
  return;
}

// FromString @ 145ca6370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBlendStateInitializerRHI::FromString(FBlendStateInitializerRHI *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TStringView<wchar_t> *pTVar6;
  wchar_t *pwVar7;
  FRenderTarget *pFVar8;
  TStringView<wchar_t> *pTVar9;
  uint uVar10;
  longlong lVar12;
  TStringView<wchar_t> *pTVar13;
  ulonglong uVar14;
  undefined1 auStack_488 [32];
  undefined4 local_468;
  undefined4 local_460;
  int local_458;
  TStringView<wchar_t> local_448;
  TStringView<wchar_t> *local_438 [2];
  wchar_t *local_428;
  int iStack_420;
  undefined4 uStack_41c;
  code *local_418;
  TStringView<wchar_t> **local_410;
  TArrayView<wchar_t_const_,int> local_408;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  TStringView<wchar_t> local_3e8 [58];
  TStringView<wchar_t> *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  ulonglong uVar11;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_488;
  pwVar7 = param_1->DataPtr;
  local_438[0] = local_3e8;
  uVar14 = 0;
  local_410 = local_438;
  local_48 = (TStringView<wchar_t> *)0x0;
  uVar10 = 0;
  local_40 = 0;
  local_418 = UE::Core::Private::Function::
              TFunctionRefCaller<`FBlendStateInitializerRHI::FromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
              ::Call;
  local_428 = (wchar_t *)&local_3f8;
  local_3c = 0x3a;
  local_3f8 = 0xa000d;
  local_3f4 = 0x3c0009;
  local_3f0 = 0x20003e;
  pwVar1 = pwVar7 + param_1->Size;
  iStack_420 = 6;
  uVar11 = uVar14;
  for (; pwVar7 != pwVar1; pwVar7 = pwVar7 + 1) {
    uVar10 = (uint)uVar11;
    iVar4 = iswspace(*pwVar7);
    if (iVar4 == 0) break;
    uVar10 = uVar10 + 1;
    uVar11 = (ulonglong)uVar10;
  }
  pwVar1 = param_1->DataPtr;
  iVar4 = param_1->Size - uVar10;
  if (iVar4 != 0) {
    lVar12 = (longlong)iVar4;
    do {
      iVar5 = iswspace((pwVar1 + (int)uVar10)[lVar12 + -1]);
      if (iVar5 == 0) break;
      iVar4 = iVar4 + -1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  local_408._12_4_ = uStack_41c;
  local_408.ArrayNum = iStack_420;
  local_448.Size = iVar4;
  local_408.DataPtr = local_428;
  local_448.DataPtr = pwVar1 + (int)uVar10;
  UE::String::ParseTokensMultiple
            (&local_448,&local_408,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_418,
             None);
  if ((local_40 != 0x3a) && (local_40 != 0x39)) {
    local_458 = local_40;
    local_460 = 0x39;
    local_468 = 0x3a;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Parts.Num() == PartCount || Parts.Num() == BackwardCompatiblePartCount) && sizeof(bool) == 1"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x191,
                       L"Expecting %d (or %d, for an older format) parts in the blendstate string, got %d"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = local_40;
  pTVar6 = local_3e8;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar6 = local_48;
  }
  pTVar9 = pTVar6 + 5;
  do {
    pTVar13 = pTVar6;
    pFVar8 = (this->RenderTargets).Elements + uVar14;
    ::LexFromString((uchar *)pFVar8,pTVar13);
    ::LexFromString(&(pFVar8->ColorSrcBlend).Value,pTVar9 + -4);
    ::LexFromString(&(pFVar8->ColorDestBlend).Value,pTVar9 + -3);
    ::LexFromString(&(pFVar8->AlphaBlendOp).Value,pTVar9 + -2);
    ::LexFromString(&(pFVar8->AlphaSrcBlend).Value,pTVar9 + -1);
    ::LexFromString(&(pFVar8->AlphaDestBlend).Value,pTVar9);
    ::LexFromString(&(pFVar8->ColorWriteMask).Value,pTVar9 + 1);
    pTVar9 = pTVar9 + 7;
    uVar10 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar10;
    pTVar6 = pTVar13 + 7;
  } while ((int)uVar10 < 8);
  ::LexFromString(&this->bUseIndependentRenderTargetBlendStates,pTVar13 + 7);
  if (iVar4 == 0x3a) {
    ::LexFromString(&this->bUseAlphaToCoverage,pTVar13 + 8);
    pTVar6 = local_3e8;
    if (local_48 != (TStringView<wchar_t> *)0x0) {
      pTVar6 = local_48;
    }
    if ((pTVar6 != pTVar13 + -0x31) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parts.GetData() + PartCount == PartIt",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x19e,L""), bVar3)) {
code_r0x000145ca6630:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this->bUseAlphaToCoverage = false;
    pTVar6 = local_3e8;
    if (local_48 != (TStringView<wchar_t> *)0x0) {
      pTVar6 = local_48;
    }
    if ((pTVar6 + 0x39 != pTVar13 + 8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parts.GetData() + BackwardCompatiblePartCount == PartIt",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x1a3,L""), bVar3)) goto code_r0x000145ca6630;
  }
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// FromString @ 145ca6680

void __thiscall
FBlendStateInitializerRHI::FromString(FBlendStateInitializerRHI *this,FString *param_1)

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

// ToString @ 145cc4800

FString * __thiscall
FBlendStateInitializerRHI::ToString(FBlendStateInitializerRHI *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  int iVar2;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,L"<");
  lVar1 = 8;
  do {
    ::FString::PrintfImpl(&local_18,L"%u %u %u %u %u %u %u ");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  ::FString::PrintfImpl(&local_18,L"%d %d>");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

