// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 7

// ResizeAllocation @ 1441b49e0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<ChaosInterface::FOverlapHit>::ResizeAllocation
          (ForElementType<ChaosInterface::FOverlapHit> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<ChaosInterface::FOverlapHit> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x38);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x38);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441b4a80

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<ChaosInterface::FPTOverlapHit>::ResizeAllocation
          (ForElementType<ChaosInterface::FPTOverlapHit> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<ChaosInterface::FPTOverlapHit> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<ChaosInterface::FPTOverlapHit>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x38);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<ChaosInterface::FPTOverlapHit>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x38);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441b4b20

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<ChaosInterface::FPTRaycastHit>::ResizeAllocation
          (ForElementType<ChaosInterface::FPTRaycastHit> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<ChaosInterface::FPTRaycastHit> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 7);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 7);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441b4bc0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<ChaosInterface::FPTSweepHit>::ResizeAllocation
          (ForElementType<ChaosInterface::FPTSweepHit> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<ChaosInterface::FPTSweepHit> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x78);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x78);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441b4c60

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<ChaosInterface::FRaycastHit>::ResizeAllocation
          (ForElementType<ChaosInterface::FRaycastHit> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<ChaosInterface::FRaycastHit> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 7);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 7);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441b4d00

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FSweepHit>
::ResizeAllocation(ForElementType<ChaosInterface::FSweepHit> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<ChaosInterface::FSweepHit> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x78);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x78);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441b4da0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPhysicsShapeReference_Chaos>::ResizeAllocation
          (ForElementType<FPhysicsShapeReference_Chaos> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPhysicsShapeReference_Chaos> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

