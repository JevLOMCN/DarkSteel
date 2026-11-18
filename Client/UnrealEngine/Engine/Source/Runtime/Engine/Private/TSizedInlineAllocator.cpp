// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 148

// ResizeAllocation @ 1472b42e0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Shader::FValueComponent>::ResizeAllocation
          (ForElementType<UE::Shader::FValueComponent> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::Shader::FValueComponent> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UE::Shader::FValueComponent>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1473b3ba0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>::ResizeAllocation
          (ForElementType<AActor_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<AActor_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<AActor_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<AActor_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1473b3c40

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UCameraComponent_*>::
ResizeAllocation(ForElementType<UCameraComponent_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UCameraComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<UCameraComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UCameraComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1473b3ce0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x60);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x60);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1473b3d80

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOverlapInfo>::
ResizeAllocation(ForElementType<FOverlapInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FOverlapInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<FOverlapInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x108);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FOverlapInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x108);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14740f740

void __thiscall
TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>::ResizeAllocation
          (ForElementType<FEncounteredStateMachineStack::FStateMachineEntry> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FStateMachineEntry *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (FStateMachineEntry *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (FStateMachineEntry *)0x0) {
      TMemStackAllocator<0>::ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>::
      ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TMemStackAllocator<0>::ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>::
    ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 1474759b0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_LinkedAnimLayer_*>
::ResizeAllocation(ForElementType<FAnimNode_LinkedAnimLayer_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FAnimNode_LinkedAnimLayer_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147475a40

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_*>::ResizeAllocation
          (ForElementType<UClass_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UClass_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UClass_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UClass_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147475ad0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FBlendedCurve_const_*>::
ResizeAllocation(ForElementType<FBlendedCurve_const_*> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<FBlendedCurve_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FBlendedCurve_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FBlendedCurve_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147475b60

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompactPose_const_*>::
ResizeAllocation(ForElementType<FCompactPose_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FCompactPose_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FCompactPose_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FCompactPose_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147475bf0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Anim::FStackAttributeContainer_const_*>::ResizeAllocation
          (ForElementType<UE::Anim::FStackAttributeContainer_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Anim::FStackAttributeContainer_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147475c80

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<344,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<344,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<344,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<344,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x158);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<344,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x158);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147475d20

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 6);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 6);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1474f6980

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
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

// ResizeAllocation @ 1474f6a10

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_Base_*>::
ResizeAllocation(ForElementType<FAnimNode_Base_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FAnimNode_Base_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FAnimNode_Base_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FAnimNode_Base_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1474f6aa0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UParticleSystemComponent_*>
::ResizeAllocation(ForElementType<UParticleSystemComponent_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UParticleSystemComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UParticleSystemComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UParticleSystemComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1474f6b30

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x120);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x120);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1474f6bd0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x88);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x88);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1474f6c70

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>::ResizeAllocation
          (ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x1180);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>)0x0
          ) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x1180);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1474f6d10

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompactPoseBoneIndex>::
ResizeAllocation(ForElementType<FCompactPoseBoneIndex> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<FCompactPoseBoneIndex> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FCompactPoseBoneIndex>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FCompactPoseBoneIndex>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1474f6da0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>::ResizeAllocation
          (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1474f6e40

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Anim::FMessageStack::FMessageEntry>::ResizeAllocation
          (ForElementType<UE::Anim::FMessageStack::FMessageEntry> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Anim::FMessageStack::FMessageEntry> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Anim::FMessageStack::FMessageEntry>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Anim::FMessageStack::FMessageEntry>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1474f6ee0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FMessageStack>::
ResizeAllocation(ForElementType<UE::Anim::FMessageStack> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UE::Anim::FMessageStack> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Anim::FMessageStack>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xb18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Anim::FMessageStack>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xb18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1474f6f80

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Anim::FMessageStack::FNodeInfo>::ResizeAllocation
          (ForElementType<UE::Anim::FMessageStack::FNodeInfo> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Anim::FMessageStack::FNodeInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147576fa0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147577110

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGridBlendSample>::
ResizeAllocation(ForElementType<FGridBlendSample> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FGridBlendSample> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FGridBlendSample>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x1c);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FGridBlendSample>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x1c);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1475f6ef0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetProfileRequest>::
ResizeAllocation(ForElementType<FSetProfileRequest> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetProfileRequest> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FSetProfileRequest>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x70);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSetProfileRequest>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x70);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14765a280

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<USoundMix>_>::
ResizeAllocation(ForElementType<TObjectPtr<USoundMix>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<TObjectPtr<USoundMix>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TObjectPtr<USoundMix>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TObjectPtr<USoundMix>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147724dc0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147724e60

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>
::ResizeAllocation(ForElementType<UE::Math::TVector<float>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector<float>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UE::Math::TVector<float>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147861350

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>::ResizeAllocation
          (ForElementType<AActor_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<AActor_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<AActor_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<AActor_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147861480

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<FRootMotionServerToLocalIDMapping>::ResizeAllocation
          (ForElementType<FRootMotionServerToLocalIDMapping> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FRootMotionServerToLocalIDMapping> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FRootMotionServerToLocalIDMapping>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRootMotionServerToLocalIDMapping>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1478ebe70

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FBodyInstance_*>::
ResizeAllocation(ForElementType<FBodyInstance_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FBodyInstance_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FBodyInstance_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FBodyInstance_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1478ebf00

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UPrimitiveComponent_*>::
ResizeAllocation(ForElementType<UPrimitiveComponent_*> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<UPrimitiveComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UPrimitiveComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UPrimitiveComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1478ebfa0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>::
ResizeAllocation(ForElementType<USceneComponent_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<USceneComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<USceneComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<USceneComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1478ec030

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FOverlapInfo_const_*>::
ResizeAllocation(ForElementType<FOverlapInfo_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FOverlapInfo_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FOverlapInfo_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FOverlapInfo_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1478ec0c0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
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

// ResizeAllocation @ 1478ec160

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FHitResult>::
ResizeAllocation(ForElementType<FHitResult> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FHitResult> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FHitResult>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 8);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FHitResult>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 8);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1478ec200

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
ForElementType<FWholeSceneProjectedShadowInitializer>::ResizeAllocation
          (ForElementType<FWholeSceneProjectedShadowInitializer> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FWholeSceneProjectedShadowInitializer> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<FWholeSceneProjectedShadowInitializer>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x3a0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FWholeSceneProjectedShadowInitializer>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x3a0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147964420

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
ForElementType<UReflectionCaptureComponent_*>::ResizeAllocation
          (ForElementType<UReflectionCaptureComponent_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UReflectionCaptureComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<UReflectionCaptureComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UReflectionCaptureComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1479644c0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UMeshDeformer>_>
::ResizeAllocation(ForElementType<TObjectPtr<UMeshDeformer>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<TObjectPtr<UMeshDeformer>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<TObjectPtr<UMeshDeformer>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TObjectPtr<UMeshDeformer>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1479e4dd0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>::
ResizeAllocation(ForElementType<UE::Math::TPlane<double>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UE::Math::TPlane<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1479e4e70

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<Nanite::Private::FAuditMaterialSlotInfo>::ResizeAllocation
          (ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1479e4f10

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>
::ResizeAllocation(ForElementType<Nanite::FMaterialAuditEntry> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<Nanite::FMaterialAuditEntry> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1479e4fb0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>::ResizeAllocation
          (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x38);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x38);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147a840f0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<FRichCurveEditInfoTemplate<FRealCurve_const_*>_>::ResizeAllocation
          (ForElementType<FRichCurveEditInfoTemplate<FRealCurve_const_*>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FRichCurveEditInfoTemplate<FRealCurve_const_*>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FRichCurveEditInfoTemplate<FRealCurve_const_*>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRichCurveEditInfoTemplate<FRealCurve_const_*>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147a84190

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147b0d710

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>::
ResizeAllocation(ForElementType<AActor_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<AActor_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<AActor_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<AActor_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147b0d7b0

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UMeshComponent_*>::
ResizeAllocation(ForElementType<UMeshComponent_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UMeshComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<UMeshComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UMeshComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147b0d850

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FLandscapeTextureAtlas::FPendingUpload>::ResizeAllocation
          (ForElementType<FLandscapeTextureAtlas::FPendingUpload> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FLandscapeTextureAtlas::FPendingUpload> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147b0d8f0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FReplayViewer>::
ResizeAllocation(ForElementType<FReplayViewer> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FReplayViewer> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FReplayViewer>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FReplayViewer>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147b85aa0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<DynamicRenderScaling::TMap<int>::FItem>::ResizeAllocation
          (ForElementType<DynamicRenderScaling::TMap<int>::FItem> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147bfdec0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>::ResizeAllocation
          (ForElementType<AActor_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<AActor_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<AActor_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<AActor_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147c7e250

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>::
ResizeAllocation(ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem> _Src
  ;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147c7e2f0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>::ResizeAllocation
          (ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147d25030

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FParticleSortBuffers_*>::
ResizeAllocation(ForElementType<FParticleSortBuffers_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FParticleSortBuffers_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FParticleSortBuffers_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FParticleSortBuffers_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147d250c0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUnorderedAccessView_*>::
ResizeAllocation(ForElementType<FRHIUnorderedAccessView_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FRHIUnorderedAccessView_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FRHIUnorderedAccessView_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRHIUnorderedAccessView_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147d25150

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>::ResizeAllocation
          (ForElementType<void_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<void_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<void_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<void_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147d25280

void __thiscall
TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<UE::Math::TVector<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TVector<double>_> *this,int param_1,int param_2,ulong64 param_3)

{
  TVector<double> *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 3) {
    if (_Src != (TVector<double> *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x18);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (TVector<double> *)0x0;
    }
  }
  else if (_Src == (TVector<double> *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation
              (&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 * 0x18);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 147d25330

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>::ResizeAllocation
          (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData> *this,int param_1
          ,int param_2,ulong64 param_3)

{
  ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147d253c0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>::
ResizeAllocation(ForElementType<FRHITransitionInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRHITransitionInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FRHITransitionInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRHITransitionInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147d25460

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSortManager::FSortBatch>
::ResizeAllocation(ForElementType<FGPUSortManager::FSortBatch> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FGPUSortManager::FSortBatch> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FGPUSortManager::FSortBatch>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FGPUSortManager::FSortBatch>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147d25500

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>::ResizeAllocation
          (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147e7c160

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>::ResizeAllocation
          (ForElementType<AActor_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<AActor_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<AActor_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<AActor_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147e7c1f0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<ULevelStreaming_*>::
ResizeAllocation(ForElementType<ULevelStreaming_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<ULevelStreaming_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<ULevelStreaming_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<ULevelStreaming_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147e7c280

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<int,FPendingLatentAction_*>_>::ResizeAllocation
          (ForElementType<TTuple<int,FPendingLatentAction_*>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TTuple<int,FPendingLatentAction_*>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TTuple<int,FPendingLatentAction_*>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<int,FPendingLatentAction_*>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147f07150

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialResource_const_*>::
ResizeAllocation(ForElementType<FMaterialResource_const_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FMaterialResource_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FMaterialResource_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FMaterialResource_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147f4f150

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UMaterialInstance_const_*>
::ResizeAllocation(ForElementType<UMaterialInstance_const_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UMaterialInstance_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UMaterialInstance_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UMaterialInstance_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147f4f1f0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 147fee8e0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FChannelCloseInfo>::
ResizeAllocation(ForElementType<FChannelCloseInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FChannelCloseInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FChannelCloseInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FChannelCloseInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148054b90

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetConnection_*>::
ResizeAllocation(ForElementType<UNetConnection_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UNetConnection_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UNetConnection_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UNetConnection_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148054c20

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>
::ResizeAllocation(ForElementType<UE::Net::FEscalationCounter> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Net::FEscalationCounter> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<UE::Net::FEscalationCounter>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Net::FEscalationCounter>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148054cb0

void __thiscall
TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Net::FEscalationCounter>::ResizeAllocation
          (ForElementType<UE::Net::FEscalationCounter> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::Net::FEscalationCounter> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x61) {
    if (_Src == (ForElementType<UE::Net::FEscalationCounter>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Net::FEscalationCounter>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148054d50

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Net::FNetDependencyInfo>::ResizeAllocation
          (ForElementType<UE::Net::FNetDependencyInfo> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::Net::FNetDependencyInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<UE::Net::FNetDependencyInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Net::FNetDependencyInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148054df0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<FNetPacketNotify::FSentAckData>::ResizeAllocation
          (ForElementType<FNetPacketNotify::FSentAckData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FNetPacketNotify::FSentAckData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148054e90

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Net::FReplicationView::FView>::ResizeAllocation
          (ForElementType<UE::Net::FReplicationView::FView> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Net::FReplicationView::FView> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x48);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x48);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1480cce00

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FOutBunch_*>::
ResizeAllocation(ForElementType<FOutBunch_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FOutBunch_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FOutBunch_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FOutBunch_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1480cce90

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetworkGUID>::
ResizeAllocation(ForElementType<FNetworkGUID> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FNetworkGUID> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FNetworkGUID>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FNetworkGUID>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14812b470

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UMaterialInterface_*>::
ResizeAllocation(ForElementType<UMaterialInterface_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UMaterialInterface_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UMaterialInterface_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UMaterialInterface_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14812b500

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FTransferResourceParams>::
ResizeAllocation(ForElementType<FTransferResourceParams> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FTransferResourceParams> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FTransferResourceParams>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x48);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FTransferResourceParams>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x48);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148193460

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FParticleAnimTrailEmitterInstance_*>::ResizeAllocation
          (ForElementType<FParticleAnimTrailEmitterInstance_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FParticleAnimTrailEmitterInstance_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FParticleAnimTrailEmitterInstance_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FParticleAnimTrailEmitterInstance_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1481934f0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UParticleSystem_*>::
ResizeAllocation(ForElementType<UParticleSystem_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UParticleSystem_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<UParticleSystem_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UParticleSystem_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148193590

void __thiscall
TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<UMaterialInterface_const_*,float>_>::ResizeAllocation
          (ForElementType<TTuple<UMaterialInterface_const_*,float>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TTuple<UMaterialInterface_const_*,float>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xd) {
    if (_Src == (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148193630

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1481936c0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148193750

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1481937e0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>::ResizeAllocation
          (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148193880

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
ResizeAllocation(ForElementType<unsigned___int64> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned___int64> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<unsigned___int64>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned___int64>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148212ea0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TTransform<double>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Math::TTransform<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
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

// ResizeAllocation @ 1482a6d40

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<IPhysicsProxyBase_*>::
ResizeAllocation(ForElementType<IPhysicsProxyBase_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<IPhysicsProxyBase_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<IPhysicsProxyBase_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<IPhysicsProxyBase_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1482a6de0

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
ForElementType<UClusterUnionReplicatedProxyComponent_*>::ResizeAllocation
          (ForElementType<UClusterUnionReplicatedProxyComponent_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UClusterUnionReplicatedProxyComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<UClusterUnionReplicatedProxyComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UClusterUnionReplicatedProxyComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1482a6e80

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>::ResizeAllocation
          (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x90);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x90);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1482a6f20

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>'::__l2::FNodeQueueEntry>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0xff0);
  if ((uint)param_2 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0xff0),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0xff0),this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0xff0),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1482a6fc0

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0xff0);
  if ((uint)param_2 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0xff0),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0xff0),this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0xff0),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1482a7060

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>'::__l2::FNodeQueueEntry>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0xff0);
  if ((uint)param_2 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0xff0),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0xff0),this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0xff0),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1482a7100

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>'::__l2::FNodeQueueEntry>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0xff0);
  if ((uint)param_2 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0xff0),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0xff0),this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0xff0),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1482a71a0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::
ResizeAllocation(ForElementType<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14831f940

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UMovementComponent_*>::
ResizeAllocation(ForElementType<UMovementComponent_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UMovementComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<UMovementComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UMovementComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14831f9e0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPrimitiveComponent_*>::
ResizeAllocation(ForElementType<UPrimitiveComponent_*> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<UPrimitiveComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UPrimitiveComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UPrimitiveComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1483a16f0

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UAudioComponent_*>::
ResizeAllocation(ForElementType<UAudioComponent_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UAudioComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<UAudioComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UAudioComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1483a1790

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>::
ResizeAllocation(ForElementType<UObject_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UObject_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<UObject_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UObject_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1483a1830

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_>::ResizeAllocation
          (ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148421a10

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMeshDataSection>::
ResizeAllocation(ForElementType<Nanite::FMeshDataSection> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<Nanite::FMeshDataSection> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<Nanite::FMeshDataSection>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Nanite::FMeshDataSection>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148421aa0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheRequestResult>::
ResizeAllocation(ForElementType<FPSOPrecacheRequestResult> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FPSOPrecacheRequestResult> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FPSOPrecacheRequestResult>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPSOPrecacheRequestResult>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148421b30

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>::ResizeAllocation
          (ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148421bc0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStaticMeshSection>::
ResizeAllocation(ForElementType<FStaticMeshSection> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FStaticMeshSection> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FStaticMeshSection>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x1c);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStaticMeshSection>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x1c);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148421c50

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRayTracingGeometry>::
ResizeAllocation(ForElementType<FRayTracingGeometry> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRayTracingGeometry> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FRayTracingGeometry>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 8);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRayTracingGeometry>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 8);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148489ed0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
ResizeAllocation(ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<unsigned_int>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned_int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148489f60

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FResources_*>::
ResizeAllocation(ForElementType<Nanite::FResources_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<Nanite::FResources_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<Nanite::FResources_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Nanite::FResources_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1484f1d20

void __thiscall
TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<unsigned_short>::ResizeAllocation
          (ForElementType<unsigned_short> *this,int param_1,int param_2,ulong64 param_3)

{
  ushort *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 3) {
    if (_Src != (ushort *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 2);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (ushort *)0x0;
    }
  }
  else if (_Src == (ushort *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_short>::
    ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 * 2);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_short>::
    ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 1484f1dd0

void __thiscall
TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  int *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 3) {
    if (_Src != (int *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (int *)0x0;
    }
  }
  else if (_Src == (int *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>::
    ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>::
    ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 1484f1f20

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
TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
::ResizeAllocation(ForElementType<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 3) {
    if (_Src != (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                 **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data =
           (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            **)0x0;
    }
  }
  else if (_Src == (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                    **)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
    ::ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 1484f2070

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FGPUScenePrimitiveCollector_*>::ResizeAllocation
          (ForElementType<FGPUScenePrimitiveCollector_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FGPUScenePrimitiveCollector **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 3) {
    if (_Src != (FGPUScenePrimitiveCollector **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FGPUScenePrimitiveCollector **)0x0;
    }
  }
  else if (_Src == (FGPUScenePrimitiveCollector **)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FGPUScenePrimitiveCollector_*>::ResizeAllocation
              (&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FGPUScenePrimitiveCollector_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 1484f2260

void __thiscall
TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FSimpleElementCollector_*>::ResizeAllocation
          (ForElementType<FSimpleElementCollector_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FSimpleElementCollector **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 3) {
    if (_Src != (FSimpleElementCollector **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FSimpleElementCollector **)0x0;
    }
  }
  else if (_Src == (FSimpleElementCollector **)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSimpleElementCollector_*>::ResizeAllocation
              (&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSimpleElementCollector_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 1484f2450

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
TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FSceneView_const_*>::ResizeAllocation
          (ForElementType<FSceneView_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FSceneView **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 3) {
    if (_Src != (FSceneView **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FSceneView **)0x0;
    }
  }
  else if (_Src == (FSceneView **)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSceneView_const_*>::ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSceneView_const_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 1484f2820

void __thiscall
TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>_>
::ResizeAllocation(ForElementType<TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>_>
  *this_00;
  TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *_Src;
  
  this_00 = &this->SecondaryData;
  _Src = this_00->Data;
  if ((uint)param_2 < 3) {
    if (_Src != (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
                 *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x50);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(this_00->Data);
      this_00->Data =
           (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *)
           0x0;
    }
  }
  else if (_Src == (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
                    *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>_>
    ::ResizeAllocation(this_00,0,param_2,param_3);
    memmove(this_00->Data,this,(longlong)param_1 * 0x50);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>_>
    ::ResizeAllocation(this_00,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 1485d7080

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Shader::FValueComponent>::ResizeAllocation
          (ForElementType<UE::Shader::FValueComponent> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::Shader::FValueComponent> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<UE::Shader::FValueComponent>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1485d71d0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Shader::FStructFieldInitializer>::ResizeAllocation
          (ForElementType<UE::Shader::FStructFieldInitializer> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Shader::FStructFieldInitializer> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UE::Shader::FStructFieldInitializer>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Shader::FStructFieldInitializer>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1486611d0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FClothingSimulationInstance::FFactoryAssetGroup>::ResizeAllocation
          (ForElementType<FClothingSimulationInstance::FFactoryAssetGroup> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FClothingSimulationInstance::FFactoryAssetGroup> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FClothingSimulationInstance::FFactoryAssetGroup>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FClothingSimulationInstance::FFactoryAssetGroup>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148661310

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FGPUSkinCache::FProcessEntrySection>::ResizeAllocation
          (ForElementType<FGPUSkinCache::FProcessEntrySection> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FGPUSkinCache::FProcessEntrySection> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x60);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x60);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148754bf0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<short>::ResizeAllocation
          (ForElementType<short> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<short> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<short>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<short>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148754c80

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactoryType_const_*>
::ResizeAllocation(ForElementType<FVertexFactoryType_const_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FVertexFactoryType_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FVertexFactoryType_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FVertexFactoryType_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1487bfec0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<ULevel_*>::ResizeAllocation
          (ForElementType<ULevel_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<ULevel_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<ULevel_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<ULevel_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1487bff60

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FStreamableHandle_const_*>
::ResizeAllocation(ForElementType<FStreamableHandle_const_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FStreamableHandle_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FStreamableHandle_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStreamableHandle_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1487c0000

void __thiscall
TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::
ForElementType<UStreamableRenderAsset_const_*>::ResizeAllocation
          (ForElementType<UStreamableRenderAsset_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UStreamableRenderAsset_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xd) {
    if (_Src == (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1487c0090

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1487c0130

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>::ResizeAllocation
          (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1487c01c0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>::ResizeAllocation
          (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo> *this,int param_1
          ,int param_2,ulong64 param_3)

{
  ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1487c0250

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStreamingViewInfoExtra>::
ResizeAllocation(ForElementType<FStreamingViewInfoExtra> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FStreamingViewInfoExtra> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FStreamingViewInfoExtra>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FStreamingViewInfoExtra>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148856710

void __thiscall
TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x10) {
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

// ResizeAllocation @ 1488567a0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>::
ResizeAllocation(ForElementType<UTexture_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UTexture_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<UTexture_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UTexture_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148856840

void __thiscall
TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>::ResizeAllocation
          (ForElementType<void_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<void_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x10) {
    if (_Src == (ForElementType<void_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<void_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1488568d0

void __thiscall
TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::
ForElementType<FTexture2DMipDataProvider_IO::FIORequest>::ResizeAllocation
          (ForElementType<FTexture2DMipDataProvider_IO::FIORequest> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x10) {
    if (_Src == (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148856970

void __thiscall
TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureMipInfo>::
ResizeAllocation(ForElementType<FTextureMipInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FTextureMipInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x10) {
    if (_Src == (ForElementType<FTextureMipInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FTextureMipInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148856a10

void __thiscall
TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::
ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>::
ResizeAllocation(ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x10) {
    if (_Src == (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148856aa0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>::
ResizeAllocation(ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_> _Src
  ;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148856b30

void __thiscall
TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
ResizeAllocation(ForElementType<unsigned___int64> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned___int64> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x10) {
    if (_Src == (ForElementType<unsigned___int64>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned___int64>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148897a90

void __thiscall
TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FUniqueBuffer>::
ResizeAllocation(ForElementType<FUniqueBuffer> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FUniqueBuffer> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x10) {
    if (_Src == (ForElementType<FUniqueBuffer>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FUniqueBuffer>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1488daf70

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FTickFunction_*>::
ResizeAllocation(ForElementType<FTickFunction_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FTickFunction_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FTickFunction_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FTickFunction_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1488db000

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTickFunction_*>::
ResizeAllocation(ForElementType<FTickFunction_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FTickFunction_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FTickFunction_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FTickFunction_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1488db090

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1488db120

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FBinnedTextureLayout::FBinAllocation>::ResizeAllocation
          (ForElementType<FBinnedTextureLayout::FBinAllocation> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FBinnedTextureLayout::FBinAllocation> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FBinnedTextureLayout::FBinAllocation>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FBinnedTextureLayout::FBinAllocation>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14897a2f0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>
::ResizeAllocation(ForElementType<UE::Math::TVector<double>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Math::TVector<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14897a380

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FKey>::ResizeAllocation
          (ForElementType<FKey> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FKey> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FKey>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FKey>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148a0f8d0

void __thiscall
TSizedInlineAllocator<16384,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
ResizeAllocation(ForElementType<unsigned_char> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_char> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x4001) {
    if (_Src == (ForElementType<unsigned_char>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned_char>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148a67560

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>
::ResizeAllocation(ForElementType<UE::Math::TVector<double>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UE::Math::TVector<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148a67600

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>::ResizeAllocation
          (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *this,int param_1
          ,int param_2,ulong64 param_3)

{
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148b74030

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UWorld_*>::ResizeAllocation
          (ForElementType<UWorld_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UWorld_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UWorld_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UWorld_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

