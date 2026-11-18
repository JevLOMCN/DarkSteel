// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 3

// ResizeAllocation @ 14a039540

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<ULocalFogVolumeComponent_*>
::ResizeAllocation(ForElementType<ULocalFogVolumeComponent_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<ULocalFogVolumeComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<ULocalFogVolumeComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<ULocalFogVolumeComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a0395e0

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USkyAtmosphereComponent_*>
::ResizeAllocation(ForElementType<USkyAtmosphereComponent_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<USkyAtmosphereComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<USkyAtmosphereComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<USkyAtmosphereComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a039680

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
ForElementType<UVolumetricCloudComponent_*>::ResizeAllocation
          (ForElementType<UVolumetricCloudComponent_*> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UVolumetricCloudComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<UVolumetricCloudComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UVolumetricCloudComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

