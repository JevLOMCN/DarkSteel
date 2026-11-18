// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// ResizeAllocation @ 1437a6e10

void __thiscall
TMemStackAllocator<0>::ForElementType<unsigned_char>::ResizeAllocation
          (ForElementType<unsigned_char> *this,int param_1,int param_2,ulong64 param_3)

{
  uchar *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  uchar *_Dst;
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
    _Dst = FMemStackBase::Alloc((FMemStackBase *)(pFVar2 + 2),uVar3,uVar4);
    this->Data = _Dst;
    if ((_Src != (uchar *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 1437a6ef0

void __thiscall
TMemStackAllocator<0>::ForElementType<TTuple<int,int>_>::ResizeAllocation
          (ForElementType<TTuple<int,int>_> *this,int param_1,int param_2,ulong64 param_3)

{
  TTuple<int,int> *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  TTuple<int,int> *_Dst;
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
    _Dst = FMemStackBase::Alloc((FMemStackBase *)(pFVar2 + 2),uVar3,uVar4);
    this->Data = _Dst;
    if ((_Src != (TTuple<int,int> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 1439ddc00

void __thiscall
TMemStackAllocator<8>::ForElementType<double>::ResizeAllocation
          (ForElementType<double> *this,int param_1,int param_2,ulong64 param_3)

{
  double *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  double *_Dst;
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
    if ((_Src != (double *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 1439ddce0

void __thiscall
TMemStackAllocator<0>::ForElementType<Chaos::FParticlePairMidPhase_*>::ResizeAllocation
          (ForElementType<Chaos::FParticlePairMidPhase_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FParticlePairMidPhase **_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  FParticlePairMidPhase **_Dst;
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
    if ((_Src != (FParticlePairMidPhase **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 1439dddc0

void __thiscall
TMemStackAllocator<0>::ForElementType<Chaos::TVector<int,2>_>::ResizeAllocation
          (ForElementType<Chaos::TVector<int,2>_> *this,int param_1,int param_2,ulong64 param_3)

{
  TVector<int,2> *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  TVector<int,2> *_Dst;
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
    _Dst = FMemStackBase::Alloc((FMemStackBase *)(pFVar2 + 2),uVar3,uVar4);
    this->Data = _Dst;
    if ((_Src != (TVector<int,2> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 1439ddfd0

void __thiscall
TMemStackAllocator<4>::ForElementType<unsigned___int64>::ResizeAllocation
          (ForElementType<unsigned___int64> *this,int param_1,int param_2,ulong64 param_3)

{
  ulong64 *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  ulong64 *_Dst;
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
    if ((_Src != (ulong64 *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

