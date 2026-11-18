// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 14

// ResizeAllocation @ 14d5618a0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Cameras::FCameraNodeEvaluator_*>::ResizeAllocation
          (ForElementType<UE::Cameras::FCameraNodeEvaluator_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Cameras::FCameraNodeEvaluator_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d561930

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UCameraNode>_>::
ResizeAllocation(ForElementType<TObjectPtr<UCameraNode>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<TObjectPtr<UCameraNode>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TObjectPtr<UCameraNode>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TObjectPtr<UCameraNode>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d5619c0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>::ResizeAllocation
          (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x70);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x70);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d5cc160

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d5cc1f0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>::ResizeAllocation
          (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x38);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x38);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d5cc280

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>::ResizeAllocation
          (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x38);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x38);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d5cc320

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Cameras::FCameraRigJoint>::ResizeAllocation
          (ForElementType<UE::Cameras::FCameraRigJoint> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Cameras::FCameraRigJoint> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x70);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x70);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d5cc3c0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>::ResizeAllocation
          (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x48);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x48);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d5cc460

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>::
ResizeAllocation(ForElementType<FLinearColor> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FLinearColor> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FLinearColor>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLinearColor>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d6326a0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::ResizeAllocation
          (ForElementType<float> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<float> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<float>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<float>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d632740

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<UE::Math::TVector2<double>,float>_>::ResizeAllocation
          (ForElementType<TTuple<UE::Math::TVector2<double>,float>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TTuple<UE::Math::TVector2<double>,float>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d6327e0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>
::ResizeAllocation(ForElementType<UE::Math::TVector2<double>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector2<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UE::Math::TVector2<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector2<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d632870

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>::ResizeAllocation
          (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xa0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xa0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d632910

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FFramingZone>::
ResizeAllocation(ForElementType<UE::Cameras::FFramingZone> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UE::Cameras::FFramingZone> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Cameras::FFramingZone>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Cameras::FFramingZone>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

