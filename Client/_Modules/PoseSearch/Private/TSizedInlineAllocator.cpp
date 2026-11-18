// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 59

// ResizeAllocation @ 14a8c5620

void __thiscall
TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  int *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x101) {
    if (_Src != (int *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      return;
    }
  }
  else {
    if (_Src == (int *)0x0) {
      TMemStackAllocator<0>::ForElementType<int>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
      return;
    }
    TMemStackAllocator<0>::ForElementType<int>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a8c56c0

void __thiscall
TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x201) {
    if (_Src == (ForElementType<int>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a8c5910

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FChooserEvaluationContext_*>::
ResizeAllocation(ForElementType<FChooserEvaluationContext_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  FChooserEvaluationContext **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (FChooserEvaluationContext **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (FChooserEvaluationContext **)0x0) {
      TMemStackAllocator<0>::ForElementType<FChooserEvaluationContext_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<FChooserEvaluationContext_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a8c5a90

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
ForElementType<UE::PoseSearch::IPoseHistory_const_*>::ResizeAllocation
          (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  IPoseHistory **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (IPoseHistory **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (IPoseHistory **)0x0) {
      TMemStackAllocator<0>::ForElementType<UE::PoseSearch::IPoseHistory_const_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::IPoseHistory_const_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a8c5c10

void __thiscall
TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<IPoseSearchFilter_const_*>::
ResizeAllocation(ForElementType<IPoseSearchFilter_const_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  IPoseSearchFilter **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x41) {
    if (_Src != (IPoseSearchFilter **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (IPoseSearchFilter **)0x0) {
      TMemStackAllocator<0>::ForElementType<IPoseSearchFilter_const_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<IPoseSearchFilter_const_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a8c5d90

void __thiscall
TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 9) {
    if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 4);
      return;
    }
  }
  else {
    if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 4);
      return;
    }
    TMemStackAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a8c5e30

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x14);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x14);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a8c5fa0

void __thiscall
TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x41) {
    if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 5);
      return;
    }
  }
  else {
    if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 5);
      return;
    }
    TMemStackAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a8c62d0

void __thiscall
TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_> *pTVar3;
  undefined1 local_res18 [16];
  code *local_28;
  undefined1 *local_20;
  
  pTVar3 = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x41) {
    if (pTVar3 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_> *)0x0) {
      memmove(this,pTVar3,(longlong)param_1 << 7);
    }
  }
  else if (pTVar3 == (TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_> *)0x0) {
    pTVar3 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_> *)0x0;
    if (param_2 != 0) {
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
      pTVar3 = FMemStackBase::Alloc
                         ((FMemStackBase *)(pFVar2 + 2),(longlong)((int)param_3 * param_2),0x10);
      (this->SecondaryData).Data = pTVar3;
    }
    memmove(pTVar3,this,(longlong)param_1 << 7);
  }
  else {
    TMemStackAllocator<0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a8c64a0

void __thiscall
TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FCachedPCAQuery>
::ResizeAllocation(ForElementType<UE::PoseSearch::FCachedPCAQuery> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  FCachedPCAQuery *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 9) {
    if (_Src != (FCachedPCAQuery *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x18);
      return;
    }
  }
  else {
    if (_Src == (FCachedPCAQuery *)0x0) {
      TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FCachedPCAQuery>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x18);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FCachedPCAQuery>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a8c6540

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::PoseSearch::FIndexDistance>::ResizeAllocation
          (ForElementType<UE::PoseSearch::FIndexDistance> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::PoseSearch::FIndexDistance> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a8c66c0

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  FSetElementId *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (FSetElementId *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      return;
    }
  }
  else {
    if (_Src == (FSetElementId *)0x0) {
      TMemStackAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
      return;
    }
    TMemStackAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a8c6760

void __thiscall
TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  FSetElementId *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x21) {
    if (_Src != (FSetElementId *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      return;
    }
  }
  else {
    if (_Src == (FSetElementId *)0x0) {
      TMemStackAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
      return;
    }
    TMemStackAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a907620

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<UPoseSearchFeatureChannel_Position_const_*>::ResizeAllocation
          (ForElementType<UPoseSearchFeatureChannel_Position_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UPoseSearchFeatureChannel_Position_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a9076c0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TTransform<double>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Math::TTransform<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<UE::Math::TTransform<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x60);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x60);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a907840

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TVector<double>_>::
ResizeAllocation(ForElementType<UE::Math::TVector<double>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  TVector<double> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (TVector<double> *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x18);
      return;
    }
  }
  else {
    if (_Src == (TVector<double> *)0x0) {
      TMemStackAllocator<0>::ForElementType<UE::Math::TVector<double>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x18);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UE::Math::TVector<double>_>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a9078d0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a907960

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>::
ResizeAllocation(ForElementType<FChooserEvaluationContext> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FChooserEvaluationContext> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FChooserEvaluationContext>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x88);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FChooserEvaluationContext>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x88);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a907a00

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FColor>::ResizeAllocation
          (ForElementType<FColor> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FColor> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FColor>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FColor>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a907b80

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>::ResizeAllocation
          (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a907d00

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>::ResizeAllocation
          (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a93ae10

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>::
ResizeAllocation(ForElementType<unsigned_short> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_short> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<unsigned_short>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned_short>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a93aea0

void __thiscall
TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  int *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x11) {
    if (_Src != (int *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      return;
    }
  }
  else {
    if (_Src == (int *)0x0) {
      TMemStackAllocator<0>::ForElementType<int>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
      return;
    }
    TMemStackAllocator<0>::ForElementType<int>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93af40

void __thiscall
TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>::ForElementType<unsigned_int>::ResizeAllocation
          (ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  uint *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 2) {
    if (_Src != (uint *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      return;
    }
  }
  else {
    if (_Src == (uint *)0x0) {
      TMemStackAllocator<0>::ForElementType<unsigned_int>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
      return;
    }
    TMemStackAllocator<0>::ForElementType<unsigned_int>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93b0c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<AActor_*>::ResizeAllocation
          (ForElementType<AActor_*> *this,int param_1,int param_2,ulong64 param_3)

{
  AActor **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (AActor **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (AActor **)0x0) {
      TMemStackAllocator<0>::ForElementType<AActor_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<AActor_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93b240

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UAnimInstance_*>::
ResizeAllocation(ForElementType<UAnimInstance_*> *this,int param_1,int param_2,ulong64 param_3)

{
  UAnimInstance **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (UAnimInstance **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (UAnimInstance **)0x0) {
      TMemStackAllocator<0>::ForElementType<UAnimInstance_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UAnimInstance_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93b3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UPrimitiveComponent_*>::
ResizeAllocation(ForElementType<UPrimitiveComponent_*> *this,int param_1,int param_2,ulong64 param_3
                )

{
  UPrimitiveComponent **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (UPrimitiveComponent **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (UPrimitiveComponent **)0x0) {
      TMemStackAllocator<0>::ForElementType<UPrimitiveComponent_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UPrimitiveComponent_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93b540

void __thiscall
TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
ForElementType<UE::PoseSearch::FAnimContextInfo_const_*>::ResizeAllocation
          (ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FAnimContextInfo **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 9) {
    if (_Src != (FAnimContextInfo **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (FAnimContextInfo **)0x0) {
      TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FAnimContextInfo_const_*>::
      ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FAnimContextInfo_const_*>::
    ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93b5e0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UAnimInstance_const_*>::
ResizeAllocation(ForElementType<UAnimInstance_const_*> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<UAnimInstance_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<UAnimInstance_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UAnimInstance_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a93b760

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UMirrorDataTable_const_*>::
ResizeAllocation(ForElementType<UMirrorDataTable_const_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  UMirrorDataTable **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (UMirrorDataTable **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (UMirrorDataTable **)0x0) {
      TMemStackAllocator<0>::ForElementType<UMirrorDataTable_const_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UMirrorDataTable_const_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93b8e0

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UObject_const_*>::
ResizeAllocation(ForElementType<UObject_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  UObject **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (UObject **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (UObject **)0x0) {
      TMemStackAllocator<0>::ForElementType<UObject_const_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UObject_const_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93b980

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>::
ResizeAllocation(ForElementType<UObject_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UObject_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<UObject_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UObject_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a93bb00

void __thiscall
TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<UPoseSearchDatabase_const_*>::
ResizeAllocation(ForElementType<UPoseSearchDatabase_const_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  UPoseSearchDatabase **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x21) {
    if (_Src != (UPoseSearchDatabase **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (UPoseSearchDatabase **)0x0) {
      TMemStackAllocator<0>::ForElementType<UPoseSearchDatabase_const_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UPoseSearchDatabase_const_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93bba0

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 4);
      return;
    }
  }
  else {
    if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 4);
      return;
    }
    TMemStackAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93bc40

void __thiscall
TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x21) {
    if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 4);
      return;
    }
  }
  else {
    if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 4);
      return;
    }
    TMemStackAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93bce0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a93be60

void __thiscall
TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 9) {
    if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_> *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x120);
      return;
    }
  }
  else {
    if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_> *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x120);
      return;
    }
    TMemStackAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93bfe0

void __thiscall
TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x11) {
    if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x18);
      return;
    }
  }
  else {
    if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x18);
      return;
    }
    TMemStackAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93c080

void __thiscall
TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x11) {
    if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x28);
      return;
    }
  }
  else {
    if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x28);
      return;
    }
    TMemStackAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93c120

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_> *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x2f0);
      return;
    }
  }
  else {
    if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_> *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x2f0);
      return;
    }
    TMemStackAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93c2a0

void __thiscall
TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x11) {
    if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x30);
      return;
    }
  }
  else {
    if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x30);
      return;
    }
    TMemStackAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93c420

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0xc0);
      return;
    }
  }
  else {
    if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0xc0);
      return;
    }
    TMemStackAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93c4c0

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TTransform<double>_>::
ResizeAllocation(ForElementType<UE::Math::TTransform<double>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  TTransform<double> *pTVar3;
  undefined1 local_res18 [16];
  code *local_28;
  undefined1 *local_20;
  
  pTVar3 = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (pTVar3 != (TTransform<double> *)0x0) {
      memmove(this,pTVar3,(longlong)param_1 * 0x60);
    }
  }
  else if (pTVar3 == (TTransform<double> *)0x0) {
    pTVar3 = (TTransform<double> *)0x0;
    if (param_2 != 0) {
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
      pTVar3 = FMemStackBase::Alloc
                         ((FMemStackBase *)(pFVar2 + 2),(longlong)((int)param_3 * param_2),0x10);
      (this->SecondaryData).Data = pTVar3;
    }
    memmove(pTVar3,this,(longlong)param_1 * 0x60);
  }
  else {
    TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93c6a0

void __thiscall
TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UObject_const_*,int>_>::
ResizeAllocation(ForElementType<TTuple<UObject_const_*,int>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  TTuple<UObject_const_*,int> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x11) {
    if (_Src != (TTuple<UObject_const_*,int> *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 4);
      return;
    }
  }
  else {
    if (_Src == (TTuple<UObject_const_*,int> *)0x0) {
      TMemStackAllocator<0>::ForElementType<TTuple<UObject_const_*,int>_>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 4);
      return;
    }
    TMemStackAllocator<0>::ForElementType<TTuple<UObject_const_*,int>_>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93c820

void __thiscall
TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
ForElementType<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>_>
::ResizeAllocation(ForElementType<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
  *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 9) {
    if (_Src != (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
                 *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0xd8);
      return;
    }
  }
  else {
    if (_Src == (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
                 *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>_>
      ::ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0xd8);
      return;
    }
    TMemStackAllocator<0>::
    ForElementType<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>_>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93ca80

void __thiscall
TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FCachedQuery>::
ResizeAllocation(ForElementType<UE::PoseSearch::FCachedQuery> *this,int param_1,int param_2,
                ulong64 param_3)

{
  FCachedQuery *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 9) {
    if (_Src != (FCachedQuery *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x18);
      return;
    }
  }
  else {
    if (_Src == (FCachedQuery *)0x0) {
      TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FCachedQuery>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x18);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FCachedQuery>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93cc00

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
ForElementType<UE::PoseSearch::FInteractionSearchContext>::ResizeAllocation
          (ForElementType<UE::PoseSearch::FInteractionSearchContext> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FInteractionSearchContext *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (FInteractionSearchContext *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x1e0);
      return;
    }
  }
  else {
    if (_Src == (FInteractionSearchContext *)0x0) {
      TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FInteractionSearchContext>::
      ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x1e0);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FInteractionSearchContext>::
    ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93cd80

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
ForElementType<`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x8c0);
  if ((uint)param_2 < 5) {
    if (_Src != (void *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x230);
      return;
    }
  }
  else {
    if (_Src == (void *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup>
      ::ResizeAllocation((void *)((longlong)this + 0x8c0),0,param_2,param_3);
      memmove(*(void **)((longlong)this + 0x8c0),this,(longlong)param_1 * 0x230);
      return;
    }
    TMemStackAllocator<0>::
    ForElementType<`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup>
    ::ResizeAllocation((void *)((longlong)this + 0x8c0),param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93cf00

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
ForElementType<UE::PoseSearch::FMemStackPoseHistory>::ResizeAllocation
          (ForElementType<UE::PoseSearch::FMemStackPoseHistory> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FMemStackPoseHistory *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (FMemStackPoseHistory *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x150);
      return;
    }
  }
  else {
    if (_Src == (FMemStackPoseHistory *)0x0) {
      TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FMemStackPoseHistory>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x150);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FMemStackPoseHistory>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93cfa0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPoseSearchInteractionAvailability>::ResizeAllocation
          (ForElementType<FPoseSearchInteractionAvailability> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPoseSearchInteractionAvailability> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a93d120

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
ForElementType<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0xa0);
  if ((uint)param_2 < 5) {
    if (_Src != (void *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x28);
      return;
    }
  }
  else {
    if (_Src == (void *)0x0) {
      TMemStackAllocator<0>::
      ForElementType<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo>
      ::ResizeAllocation((void *)((longlong)this + 0xa0),0,param_2,param_3);
      memmove(*(void **)((longlong)this + 0xa0),this,(longlong)param_1 * 0x28);
      return;
    }
    TMemStackAllocator<0>::
    ForElementType<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo>
    ::ResizeAllocation((void *)((longlong)this + 0xa0),param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93d1c0

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>::
ResizeAllocation(ForElementType<UE::PoseSearch::FSearchResult> *this,int param_1,int param_2,
                ulong64 param_3)

{
  FSearchResult *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (FSearchResult *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x1c);
      return;
    }
  }
  else {
    if (_Src == (FSearchResult *)0x0) {
      TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FSearchResult>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x1c);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FSearchResult>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93d250

void __thiscall
TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>::
ResizeAllocation(ForElementType<UE::PoseSearch::FSearchResult> *this,int param_1,int param_2,
                ulong64 param_3)

{
  FSearchResult *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 9) {
    if (_Src != (FSearchResult *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x1c);
      return;
    }
  }
  else {
    if (_Src == (FSearchResult *)0x0) {
      TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FSearchResult>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x1c);
      return;
    }
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FSearchResult>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93d2e0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::PoseSearch::FValidInteractionSearch>::ResizeAllocation
          (ForElementType<UE::PoseSearch::FValidInteractionSearch> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::PoseSearch::FValidInteractionSearch> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UE::PoseSearch::FValidInteractionSearch>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xd0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::PoseSearch::FValidInteractionSearch>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xd0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a93d460

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FName>::ResizeAllocation
          (ForElementType<FName> *this,int param_1,int param_2,ulong64 param_3)

{
  FName *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (FName *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (FName *)0x0) {
      TMemStackAllocator<0>::ForElementType<FName>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<FName>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93d500

void __thiscall
TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  FSetElementId *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 3) {
    if (_Src != (FSetElementId *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      return;
    }
  }
  else {
    if (_Src == (FSetElementId *)0x0) {
      TMemStackAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
      return;
    }
    TMemStackAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93d5a0

void __thiscall
TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  FSetElementId *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 9) {
    if (_Src != (FSetElementId *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      return;
    }
  }
  else {
    if (_Src == (FSetElementId *)0x0) {
      TMemStackAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
      return;
    }
    TMemStackAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93d640

void __thiscall
TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  FSetElementId *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x11) {
    if (_Src != (FSetElementId *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      return;
    }
  }
  else {
    if (_Src == (FSetElementId *)0x0) {
      TMemStackAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
      return;
    }
    TMemStackAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14a93d7c0

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<bool>::ResizeAllocation
          (ForElementType<bool> *this,int param_1,int param_2,ulong64 param_3)

{
  bool *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (bool *)0x0) {
      memmove(this,_Src,(longlong)param_1);
      return;
    }
  }
  else {
    if (_Src == (bool *)0x0) {
      TMemStackAllocator<0>::ForElementType<bool>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1);
      return;
    }
    TMemStackAllocator<0>::ForElementType<bool>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

