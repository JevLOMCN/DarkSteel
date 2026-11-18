// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 16

// ResizeAllocation @ 14d4cedf0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>::ResizeAllocation
          (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)0x0)
  {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d506bd0

void __thiscall
TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
ForElementType<unsigned_short>::ResizeAllocation
          (ForElementType<unsigned_short> *this,int param_1,int param_2,ulong64 param_3)

{
  ushort *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x11) {
    if (_Src != (ushort *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 2);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (ushort *)0x0;
    }
  }
  else if (_Src == (ushort *)0x0) {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<unsigned_short>::
    ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 * 2);
  }
  else {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<unsigned_short>::
    ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14d506dc0

void __thiscall
TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
ForElementType<TTuple<unsigned_short,float>_>::ResizeAllocation
          (ForElementType<TTuple<unsigned_short,float>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TTuple<unsigned_short,float>_> *this_00;
  TTuple<unsigned_short,float> *_Src;
  
  this_00 = &this->SecondaryData;
  _Src = this_00->Data;
  if ((uint)param_2 < 0x11) {
    if (_Src != (TTuple<unsigned_short,float> *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(this_00->Data);
      this_00->Data = (TTuple<unsigned_short,float> *)0x0;
    }
  }
  else if (_Src == (TTuple<unsigned_short,float> *)0x0) {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::
    ForElementType<TTuple<unsigned_short,float>_>::ResizeAllocation(this_00,0,param_2,param_3);
    memmove(this_00->Data,this,(longlong)param_1 << 3);
  }
  else {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::
    ForElementType<TTuple<unsigned_short,float>_>::ResizeAllocation(this_00,param_1,param_2,param_3)
    ;
  }
  return;
}

// ResizeAllocation @ 14d506e70

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::StateTree::FActiveFrameID>::ResizeAllocation
          (ForElementType<UE::StateTree::FActiveFrameID> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::StateTree::FActiveFrameID> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::StateTree::FActiveFrameID>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::StateTree::FActiveFrameID>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d506fa0

void __thiscall
TSizedInlineAllocator<24,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
ForElementType<UE::StateTree::FActiveState>::ResizeAllocation
          (ForElementType<UE::StateTree::FActiveState> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::StateTree::FActiveState> *this_00;
  FActiveState *_Src;
  
  this_00 = &this->SecondaryData;
  _Src = this_00->Data;
  if ((uint)param_2 < 0x19) {
    if (_Src != (FActiveState *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0xc);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(this_00->Data);
      this_00->Data = (FActiveState *)0x0;
    }
  }
  else if (_Src == (FActiveState *)0x0) {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::
    ForElementType<UE::StateTree::FActiveState>::ResizeAllocation(this_00,0,param_2,param_3);
    memmove(this_00->Data,this,(longlong)param_1 * 0xc);
  }
  else {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::
    ForElementType<UE::StateTree::FActiveState>::ResizeAllocation(this_00,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14d5070f0

void __thiscall
TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
ForElementType<FCompactStateTreeParameters>::ResizeAllocation
          (ForElementType<FCompactStateTreeParameters> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<FCompactStateTreeParameters> *this_00;
  FCompactStateTreeParameters *_Src;
  
  this_00 = &this->SecondaryData;
  _Src = this_00->Data;
  if ((uint)param_2 < 9) {
    if (_Src != (FCompactStateTreeParameters *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 4);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(this_00->Data);
      this_00->Data = (FCompactStateTreeParameters *)0x0;
    }
  }
  else if (_Src == (FCompactStateTreeParameters *)0x0) {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::
    ForElementType<FCompactStateTreeParameters>::ResizeAllocation(this_00,0,param_2,param_3);
    memmove(this_00->Data,this,(longlong)param_1 << 4);
  }
  else {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::
    ForElementType<FCompactStateTreeParameters>::ResizeAllocation(this_00,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14d507240

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache>::ResizeAllocation
          (ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d5072d0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>::ResizeAllocation
          (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d507360

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>::ResizeAllocation
          (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FStateTreeExecutionContext::FSelectionEventWithID> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d507490

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>::ResizeAllocation
          (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d507530

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionFrame>::
ResizeAllocation(ForElementType<FStateTreeExecutionFrame> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FStateTreeExecutionFrame> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FStateTreeExecutionFrame>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x70);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStateTreeExecutionFrame>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x70);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d507670

void __thiscall
TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
ForElementType<FStateTreeSharedEvent>::ResizeAllocation
          (ForElementType<FStateTreeSharedEvent> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FStateTreeSharedEvent> *this_00;
  FStateTreeSharedEvent *_Src;
  
  this_00 = &this->SecondaryData;
  _Src = this_00->Data;
  if ((uint)param_2 < 9) {
    if (_Src != (FStateTreeSharedEvent *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 4);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(this_00->Data);
      this_00->Data = (FStateTreeSharedEvent *)0x0;
    }
  }
  else if (_Src == (FStateTreeSharedEvent *)0x0) {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FStateTreeSharedEvent>::
    ResizeAllocation(this_00,0,param_2,param_3);
    memmove(this_00->Data,this,(longlong)param_1 << 4);
  }
  else {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FStateTreeSharedEvent>::
    ResizeAllocation(this_00,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14d507720

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeSharedEvent>::
ResizeAllocation(ForElementType<FStateTreeSharedEvent> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<FStateTreeSharedEvent> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FStateTreeSharedEvent>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStateTreeSharedEvent>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d5077c0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeSharedEvent>::
ResizeAllocation(ForElementType<FStateTreeSharedEvent> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<FStateTreeSharedEvent> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<FStateTreeSharedEvent>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStateTreeSharedEvent>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d507860

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FStateTreeTransitionDelayedState>::ResizeAllocation
          (ForElementType<FStateTreeTransitionDelayedState> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FStateTreeTransitionDelayedState> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FStateTreeTransitionDelayedState>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStateTreeTransitionDelayedState>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d507900

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<`FStateTreeExecutionContext::TriggerTransitions'::__l2::FTransitionHandler>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x140);
  if ((uint)param_2 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 * 0x14);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x140),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x140),this,(longlong)param_1 * 0x14);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x140),param_1,param_2,param_3);
  return;
}

