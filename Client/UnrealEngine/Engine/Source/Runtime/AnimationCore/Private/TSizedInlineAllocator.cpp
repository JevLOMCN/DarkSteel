// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 3

// ResizeAllocation @ 142384cf0

void __thiscall
TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xd) {
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

// ResizeAllocation @ 142384d80

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::AnimationCore::FBoneWeight>::ResizeAllocation
          (ForElementType<UE::AnimationCore::FBoneWeight> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142384e10

void __thiscall
TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::AnimationCore::FBoneWeight>::ResizeAllocation
          (ForElementType<UE::AnimationCore::FBoneWeight> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xd) {
    if (_Src == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

