// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 2

// ResizeAllocation @ 14a75e2e0

void __thiscall
TMemStackAllocator<0>::ForElementType<UMVVMView_const_*>::ResizeAllocation
          (ForElementType<UMVVMView_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  UMVVMView **_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  UMVVMView **_Dst;
  ulonglong uVar4;
  ulong64 uVar5;
  undefined1 local_res18 [16];
  code *local_28;
  undefined1 *local_20;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidMemStackAllocatorNum(param_2,param_3);
    }
    puVar1 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_20 = local_res18;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar2 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar1);
    uVar4 = (ulonglong)((int)param_3 * param_2);
    uVar3 = 8;
    if (0xf < uVar4) {
      uVar3 = 0x10;
    }
    uVar5 = 8;
    if (8 < uVar3) {
      uVar5 = uVar3;
    }
    _Dst = FMemStackBase::Alloc((FMemStackBase *)(pFVar2 + 2),uVar4,uVar5);
    this->Data = _Dst;
    if ((_Src != (UMVVMView **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14a75e3c0

void __thiscall
TMemStackAllocator<0>::ForElementType<UE::MVVM::FMVVMConstFieldVariant>::ResizeAllocation
          (ForElementType<UE::MVVM::FMVVMConstFieldVariant> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FMVVMConstFieldVariant *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  FMVVMConstFieldVariant *_Dst;
  ulonglong uVar4;
  ulong64 uVar5;
  undefined1 local_res18 [16];
  code *local_28;
  undefined1 *local_20;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidMemStackAllocatorNum(param_2,param_3);
    }
    puVar1 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_20 = local_res18;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar2 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar1);
    uVar4 = (ulonglong)((int)param_3 * param_2);
    uVar3 = 8;
    if (0xf < uVar4) {
      uVar3 = 0x10;
    }
    uVar5 = 8;
    if (8 < uVar3) {
      uVar5 = uVar3;
    }
    _Dst = FMemStackBase::Alloc((FMemStackBase *)(pFVar2 + 2),uVar4,uVar5);
    this->Data = _Dst;
    if ((_Src != (FMVVMConstFieldVariant *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

