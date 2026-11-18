// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// ResizeAllocation @ 14740f660

void __thiscall
TMemStackAllocator<0>::ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>::
ResizeAllocation(ForElementType<FEncounteredStateMachineStack::FStateMachineEntry> *this,int param_1
                ,int param_2,ulong64 param_3)

{
  FStateMachineEntry *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  FStateMachineEntry *_Dst;
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
    if ((_Src != (FStateMachineEntry *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 147576d00

void __thiscall
TMemStackAllocator<0>::ForElementType<unsigned_char_*>::ResizeAllocation
          (ForElementType<unsigned_char_*> *this,int param_1,int param_2,ulong64 param_3)

{
  uchar **_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  uchar **_Dst;
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
    if ((_Src != (uchar **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 147576de0

void __thiscall
TMemStackAllocator<0>::ForElementType<unsigned_char_const_*>::ResizeAllocation
          (ForElementType<unsigned_char_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  uchar **_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  uchar **_Dst;
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
    if ((_Src != (uchar **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 147576ec0

void __thiscall
TMemStackAllocator<0>::ForElementType<UE::Anim::FAttributeId_const_*>::ResizeAllocation
          (ForElementType<UE::Anim::FAttributeId_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FAttributeId **_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  FAttributeId **_Dst;
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
    if ((_Src != (FAttributeId **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 147577030

void __thiscall
TMemStackAllocator<0>::ForElementType<UE::Anim::FAttributeBlendData::FAttributeSet>::
ResizeAllocation(ForElementType<UE::Anim::FAttributeBlendData::FAttributeSet> *this,int param_1,
                int param_2,ulong64 param_3)

{
  FAttributeSet *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  FAttributeSet *_Dst;
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
    if ((_Src != (FAttributeSet *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 1475771a0

void __thiscall
TMemStackAllocator<0>::ForElementType<`UE::Anim::Attributes::MirrorAttributes'::__l2::FMirrorSet>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  ulong64 uVar5;
  undefined1 local_res18 [16];
  code *local_28;
  undefined1 *local_20;
  
  if (param_2 != 0) {
    _Src = *(void **)this;
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
    *(void **)this = _Dst;
    if ((_Src != (void *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 147577280

void __thiscall
TMemStackAllocator<0>::ForElementType<UE::Anim::FAttributeBlendData::FUniqueAttribute>::
ResizeAllocation(ForElementType<UE::Anim::FAttributeBlendData::FUniqueAttribute> *this,int param_1,
                int param_2,ulong64 param_3)

{
  FUniqueAttribute *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  FUniqueAttribute *_Dst;
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
    if ((_Src != (FUniqueAttribute *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

