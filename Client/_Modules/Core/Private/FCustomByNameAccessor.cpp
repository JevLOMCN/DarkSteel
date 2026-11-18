// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator() @ 141a74630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMemoryView<void_const_> * __thiscall
``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::
<lambda_8_>::operator()
          (void *this,TMemoryView<void_const_> *__return_storage_ptr__,FCbFieldView *param_1,
          TMemoryView<void_const_> *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_128 [32];
  TStringView<char8_t> local_108;
  TMemoryView<void_const_> local_f8;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  pwVar1 = *(wchar_t **)this;
  iVar2 = 0;
  iVar4 = *(int *)((longlong)this + 8) + -1;
  if (*(int *)((longlong)this + 8) == 0) {
    iVar4 = 0;
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  if (pwVar1 == (wchar_t *)0x0) {
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
    goto LAB_141a7473f;
  }
  if ((0 < iVar4) && (pwVar1[(longlong)iVar4 + -1] == L'\0')) {
    iVar2 = 1;
    iVar4 = iVar4 + -1;
  }
  local_58 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar1,iVar4);
  uVar3 = local_58 + iVar2;
  uVar5 = uVar3;
  if (uVar3 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar5 = 0;
      goto LAB_141a746d5;
    }
  }
  else {
LAB_141a746d5:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar5,1);
  }
  local_60 = local_e8;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  UE::Core::Private::Convert((uchar *)local_60,uVar3,pwVar1,iVar2 + iVar4);
LAB_141a7473f:
  local_f8.Data = param_2->Data;
  local_f8.Size = param_2->Size;
  local_108.Size = local_58;
  local_108.DataPtr = (uchar *)local_60;
  FCbFieldView::AsCustom(param_1,__return_storage_ptr__,&local_108,&local_f8);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return __return_storage_ptr__;
}

