// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 99

// ResizeAllocation @ 14982bd00

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::ResizeAllocation
          (ForElementType<double> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<double> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<double>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<double>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982bd90

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<int>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<int>_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<int>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<int>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<int>_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982be20

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<float>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<float>_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<float>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<float>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<float>_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982beb0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<double>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<double>_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<double>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<double>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<double>_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982bf40

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*> *this,int param_1
          ,int param_2,ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982bfd0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*>)0x0)
  {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c060

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*>)0x0
          ) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c0f0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*>)0x0)
  {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c180

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*>)0x0)
  {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c210

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c2a0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c330

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c3c0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<FName>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<FName>_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<FName>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<FName>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<FName>_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c450

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<FString>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<FString>_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<FString>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<FString>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<FString>_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c4e0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<__int64>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<__int64>_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<__int64>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<__int64>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<__int64>_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c570

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGMetadataAttribute<bool>_const_*>::ResizeAllocation
          (ForElementType<FPCGMetadataAttribute<bool>_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPCGMetadataAttribute<bool>_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPCGMetadataAttribute<bool>_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGMetadataAttribute<bool>_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c600

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>::
ResizeAllocation(ForElementType<UE::Math::TQuat<double>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UE::Math::TQuat<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Math::TQuat<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TQuat<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c6a0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TTransform<double>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Math::TTransform<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
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

// ResizeAllocation @ 14982c740

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,double>_>::
ResizeAllocation(ForElementType<TTuple<int,double>_> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<int,double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TTuple<int,double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<int,double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c7d0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<__int64,float>_>::
ResizeAllocation(ForElementType<TTuple<__int64,float>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<TTuple<__int64,float>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TTuple<__int64,float>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<__int64,float>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c860

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>
::ResizeAllocation(ForElementType<UE::Math::TVector4<double>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector4<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Math::TVector4<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector4<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c900

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef>
::ResizeAllocation(ForElementType<PCGPointOctree::FPointRef> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<PCGPointOctree::FPointRef> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<PCGPointOctree::FPointRef>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 6);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<PCGPointOctree::FPointRef>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 6);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982c9a0

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::ResizeAllocation
          (ForElementType<FString> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FString> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<FString>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FString>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14982ca40

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::ResizeAllocation
          (ForElementType<__int64> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<__int64> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<__int64>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<__int64>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1498d7170

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<ULandscapeHeightfieldCollisionComponent_*>::ResizeAllocation
          (ForElementType<ULandscapeHeightfieldCollisionComponent_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<ULandscapeHeightfieldCollisionComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1498d7200

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<FPCGPoint_const_*,float>_>::ResizeAllocation
          (ForElementType<TTuple<FPCGPoint_const_*,float>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TTuple<FPCGPoint_const_*,float>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<TTuple<FPCGPoint_const_*,float>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<FPCGPoint_const_*,float>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1498d7290

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>::ResizeAllocation
          (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)0x0)
    {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xa0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>)
                   0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xa0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1498d7330

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>
::ResizeAllocation(ForElementType<UE::Math::TVector2<double>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector2<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
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

// ResizeAllocation @ 1498d73c0

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FCollisionShape>::
ResizeAllocation(ForElementType<FCollisionShape> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FCollisionShape> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<FCollisionShape>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FCollisionShape>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1498d7460

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<``UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>::operator()'::__l2::FKeptPoint>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x800);
  if ((uint)param_2 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x800),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x800),this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x800),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1498d7500

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPoint>::
ResizeAllocation(ForElementType<FPCGPoint> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGPoint> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<FPCGPoint>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xd0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGPoint>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xd0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1498d75a0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPointRef>::
ResizeAllocation(ForElementType<FPCGPointRef> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGPointRef> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FPCGPointRef>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 6);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGPointRef>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 6);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1498d7640

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
ResizeAllocation(ForElementType<FSoftObjectPath> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSoftObjectPath> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<FSoftObjectPath>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSoftObjectPath>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1498d76e0

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPhysicsShapeAdapter_Chaos>::ResizeAllocation
          (ForElementType<FPhysicsShapeAdapter_Chaos> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPhysicsShapeAdapter_Chaos> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<FPhysicsShapeAdapter_Chaos>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPhysicsShapeAdapter_Chaos>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1498d7780

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::ResizeAllocation
          (ForElementType<__int64> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<__int64> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<__int64>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<__int64>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0b670

void __thiscall
TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
ResizeAllocation(ForElementType<unsigned_char> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_char> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x1801) {
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

// ResizeAllocation @ 149a0b710

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::ResizeAllocation
          (ForElementType<float> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<float> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
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

// ResizeAllocation @ 149a0b7b0

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::ResizeAllocation
          (ForElementType<double> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<double> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<double>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<double>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0b850

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<PCGDataTypeHierarchy::FNode_const_*>::ResizeAllocation
          (ForElementType<PCGDataTypeHierarchy::FNode_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<PCGDataTypeHierarchy::FNode_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0b8f0

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>
::ResizeAllocation(ForElementType<UE::Math::TQuat<double>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TQuat<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<UE::Math::TQuat<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TQuat<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0b990

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TRotator<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TRotator<double>_> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::Math::TRotator<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<UE::Math::TRotator<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TRotator<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0ba30

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TTransform<double>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Math::TTransform<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
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

// ResizeAllocation @ 149a0bad0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>::ResizeAllocation
          (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0bb70

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>::ResizeAllocation
          (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0bc10

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TVector2<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TVector2<double>_> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::Math::TVector2<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
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

// ResizeAllocation @ 149a0bcb0

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TVector4<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TVector4<double>_> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::Math::TVector4<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<UE::Math::TVector4<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector4<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0bd50

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TVector<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TVector<double>_> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UE::Math::TVector<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
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

// ResizeAllocation @ 149a0bdf0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<PCGExportSelectedAttributes::FAccessorData>::ResizeAllocation
          (ForElementType<PCGExportSelectedAttributes::FAccessorData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<PCGExportSelectedAttributes::FAccessorData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<PCGExportSelectedAttributes::FAccessorData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x50);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<PCGExportSelectedAttributes::FAccessorData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x50);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0be90

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeBaseId>::
ResizeAllocation(ForElementType<FPCGDataTypeBaseId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGDataTypeBaseId> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FPCGDataTypeBaseId>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGDataTypeBaseId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0bf30

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeIdentifier>::
ResizeAllocation(ForElementType<FPCGDataTypeIdentifier> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FPCGDataTypeIdentifier> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FPCGDataTypeIdentifier>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGDataTypeIdentifier>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0bfd0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGSelectGrammarCriterion>
::ResizeAllocation(ForElementType<FPCGSelectGrammarCriterion> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FPCGSelectGrammarCriterion> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FPCGSelectGrammarCriterion>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGSelectGrammarCriterion>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0c070

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>::
ResizeAllocation(ForElementType<FSoftClassPath> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSoftClassPath> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<FSoftClassPath>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSoftClassPath>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0c110

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
          (ForElementType<FName> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FName> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<FName>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FName>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0c1b0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::ResizeAllocation
          (ForElementType<FString> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FString> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FString>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FString>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149a0c240

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>::ResizeAllocation
          (ForElementType<bool> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<bool> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<bool>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<bool>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b24b50

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::ResizeAllocation
          (ForElementType<float> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<float> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
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

// ResizeAllocation @ 149b24bf0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::ResizeAllocation
          (ForElementType<double> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<double> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<double>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<double>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b24c90

void __thiscall
TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::ResizeAllocation
          (ForElementType<double> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<double> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x401) {
    if (_Src == (ForElementType<double>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<double>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b24d30

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>::
ResizeAllocation(ForElementType<UActorComponent_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UActorComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<UActorComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UActorComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b24dd0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>::
ResizeAllocation(ForElementType<UE::Math::TQuat<double>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UE::Math::TQuat<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<UE::Math::TQuat<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TQuat<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b24e70

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>
::ResizeAllocation(ForElementType<UE::Math::TRotator<double>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TRotator<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Math::TRotator<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TRotator<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b24f00

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TRotator<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TRotator<double>_> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::Math::TRotator<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<UE::Math::TRotator<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TRotator<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b24fa0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TTransform<double>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Math::TTransform<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
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

// ResizeAllocation @ 149b25040

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TVector2<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TVector2<double>_> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::Math::TVector2<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
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

// ResizeAllocation @ 149b250e0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Math::TVector4<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TVector4<double>_> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::Math::TVector4<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<UE::Math::TVector4<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector4<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b25180

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>
::ResizeAllocation(ForElementType<UE::Math::TVector<double>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
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

// ResizeAllocation @ 149b25220

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>::
ResizeAllocation(ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x140);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x140);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b252c0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>::
ResizeAllocation(ForElementType<FSoftClassPath> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSoftClassPath> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FSoftClassPath>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSoftClassPath>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b25360

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>::
ResizeAllocation(ForElementType<FSoftClassPath> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSoftClassPath> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<FSoftClassPath>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSoftClassPath>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b25400

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
ResizeAllocation(ForElementType<FSoftObjectPath> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSoftObjectPath> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FSoftObjectPath>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSoftObjectPath>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b254a0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
ResizeAllocation(ForElementType<FSoftObjectPath> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSoftObjectPath> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<FSoftObjectPath>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSoftObjectPath>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b25540

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::ResizeAllocation
          (ForElementType<FString> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FString> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<FString>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FString>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b255e0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::ResizeAllocation
          (ForElementType<__int64> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<__int64> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<__int64>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<__int64>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b97a20

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>::
ResizeAllocation(ForElementType<UActorComponent_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UActorComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UActorComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UActorComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149b97ac0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>::
ResizeAllocation(ForElementType<UPCGComponent_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UPCGComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UPCGComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UPCGComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149c336c0

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<PCGPointOctree::FPointRef_const_*>::ResizeAllocation
          (ForElementType<PCGPointOctree::FPointRef_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<PCGPointOctree::FPointRef_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<PCGPointOctree::FPointRef_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<PCGPointOctree::FPointRef_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149c85a60

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>::
ResizeAllocation(ForElementType<FConstStructView> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FConstStructView> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FConstStructView>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FConstStructView>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149cd8d60

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>::
ResizeAllocation(ForElementType<FPCGComponentRef> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGComponentRef> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FPCGComponentRef>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x50);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGComponentRef>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x50);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149cd8e00

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>::ResizeAllocation
          (ForElementType<FPCGCrc> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGCrc> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FPCGCrc>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGCrc>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149cd8ea0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGGraphTask>::
ResizeAllocation(ForElementType<FPCGGraphTask> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGGraphTask> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FPCGGraphTask>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x148);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGGraphTask>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x148);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149cd8f40

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>::
ResizeAllocation(ForElementType<FPCGTaggedData> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGTaggedData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FPCGTaggedData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x78);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGTaggedData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x78);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149cd8fe0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
ResizeAllocation(ForElementType<unsigned___int64> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned___int64> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
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

// ResizeAllocation @ 149d622a0

void __thiscall
TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
ResizeAllocation(ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xe) {
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

// ResizeAllocation @ 149d62330

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGNode_*>::
ResizeAllocation(ForElementType<UPCGNode_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UPCGNode_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UPCGNode_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UPCGNode_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149d623d0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>::
ResizeAllocation(ForElementType<FProperty_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FProperty_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FProperty_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FProperty_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149d62470

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<void_const_*>::
ResizeAllocation(ForElementType<void_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<void_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<void_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<void_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149d62510

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<PCG::IO::Accessor::FCacheEntry>::ResizeAllocation
          (ForElementType<PCG::IO::Accessor::FCacheEntry> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<PCG::IO::Accessor::FCacheEntry> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<PCG::IO::Accessor::FCacheEntry>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x50);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<PCG::IO::Accessor::FCacheEntry>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x50);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149d625b0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<PCGIndexing::FPCGIndexRange>::ResizeAllocation
          (ForElementType<PCGIndexing::FPCGIndexRange> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<PCGIndexing::FPCGIndexRange> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149d62650

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::ResizeAllocation
          (ForElementType<__int64> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<__int64> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<__int64>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<__int64>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149e864a0

void __thiscall
TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>::
ResizeAllocation(ForElementType<__int64_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<__int64_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x201) {
    if (_Src == (ForElementType<__int64_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<__int64_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149e86540

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_const_*>::
ResizeAllocation(ForElementType<__int64_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<__int64_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<__int64_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<__int64_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149f110c0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataCollection>::
ResizeAllocation(ForElementType<FPCGDataCollection> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FPCGDataCollection> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FPCGDataCollection>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGDataCollection>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149f5e530

void __thiscall
TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x401) {
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

// ResizeAllocation @ 149f5e5d0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGNode_*>::
ResizeAllocation(ForElementType<UPCGNode_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UPCGNode_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UPCGNode_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UPCGNode_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149f5e660

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>::
ResizeAllocation(ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149f5e700

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>::
ResizeAllocation(ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149f5e7a0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>::ResizeAllocation
          (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 7);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 7);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149f5e840

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>::ResizeAllocation
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x24);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x24);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 149f5e8e0

void __thiscall
TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::
ForElementType<PCGSpatialAlgo::AStar::FNode>::ResizeAllocation
          (ForElementType<PCGSpatialAlgo::AStar::FNode> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<PCGSpatialAlgo::AStar::FNode> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x401) {
    if (_Src == (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

