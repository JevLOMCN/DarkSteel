// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ResizeAllocation @ 1493695f0

void __thiscall
TMemStackAllocator<0>::ForElementType<unsigned_int>::ResizeAllocation
          (ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  uint *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  ulong64 uVar4;
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
    uVar3 = (ulonglong)((int)param_3 * param_2);
    uVar4 = 8;
    if (0xf < uVar3) {
      uVar4 = 0x10;
    }
    puVar1 = FMemStackBase::Alloc((FMemStackBase *)(pFVar2 + 2),uVar3,uVar4);
    this->Data = puVar1;
    if ((_Src != (uint *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(puVar1,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

