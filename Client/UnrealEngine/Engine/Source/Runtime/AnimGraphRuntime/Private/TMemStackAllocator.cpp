// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 9

// ResizeAllocation @ 1464649a0

void __thiscall
TMemStackAllocator<0>::ForElementType<float>::ResizeAllocation
          (ForElementType<float> *this,int param_1,int param_2,ulong64 param_3)

{
  float *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  float *_Dst;
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
    if ((_Src != (float *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 146464b10

void __thiscall
TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TTransform<double>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TTransform<double> *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  TTransform<double> *_Dst;
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
    _Dst = FMemStackBase::Alloc
                     ((FMemStackBase *)(pFVar2 + 2),(longlong)((int)param_3 * param_2),0x10);
    this->Data = _Dst;
    if ((_Src != (TTransform<double> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 146464be0

void __thiscall
TMemStackAllocator<0>::ForElementType<FBlendedCurve>::ResizeAllocation
          (ForElementType<FBlendedCurve> *this,int param_1,int param_2,ulong64 param_3)

{
  FBlendedCurve *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  FBlendedCurve *_Dst;
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
    if ((_Src != (FBlendedCurve *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 146464d60

void __thiscall
TMemStackAllocator<0>::ForElementType<FBoneTransform>::ResizeAllocation
          (ForElementType<FBoneTransform> *this,int param_1,int param_2,ulong64 param_3)

{
  FBoneTransform *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  FBoneTransform *_Dst;
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
    _Dst = FMemStackBase::Alloc
                     ((FMemStackBase *)(pFVar2 + 2),(longlong)((int)param_3 * param_2),0x10);
    this->Data = _Dst;
    if ((_Src != (FBoneTransform *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 146464e30

void __thiscall
TMemStackAllocator<0>::ForElementType<FCompactPose>::ResizeAllocation
          (ForElementType<FCompactPose> *this,int param_1,int param_2,ulong64 param_3)

{
  FCompactPose *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  FCompactPose *_Dst;
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
    if ((_Src != (FCompactPose *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 146464fb0

void __thiscall
TMemStackAllocator<0>::ForElementType<FCompactPoseBoneIndex>::ResizeAllocation
          (ForElementType<FCompactPoseBoneIndex> *this,int param_1,int param_2,ulong64 param_3)

{
  FCompactPoseBoneIndex *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  FCompactPoseBoneIndex *_Dst;
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
    if ((_Src != (FCompactPoseBoneIndex *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 146465090

void __thiscall
TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>::ResizeAllocation
          (ForElementType<UE::Anim::FCurveElement> *this,int param_1,int param_2,ulong64 param_3)

{
  FCurveElement *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  FCurveElement *_Dst;
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
    if ((_Src != (FCurveElement *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 146465170

void __thiscall
TMemStackAllocator<0>::ForElementType<FRBFEntry>::ResizeAllocation
          (ForElementType<FRBFEntry> *this,int param_1,int param_2,ulong64 param_3)

{
  FRBFEntry *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  FRBFEntry *_Dst;
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
    if ((_Src != (FRBFEntry *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 146465250

void __thiscall
TMemStackAllocator<0>::ForElementType<UE::Anim::FStackAttributeContainer>::ResizeAllocation
          (ForElementType<UE::Anim::FStackAttributeContainer> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FStackAttributeContainer *_Src;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  ulonglong uVar3;
  FStackAttributeContainer *_Dst;
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
    if ((_Src != (FStackAttributeContainer *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

