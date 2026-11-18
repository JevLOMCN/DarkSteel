// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 19

// ResizeAllocation @ 142b18070

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_*>::
ResizeAllocation(ForElementType<FAssetData_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FAssetData_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FAssetData_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FAssetData_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142b18100

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>::
ResizeAllocation(ForElementType<FAssetData_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FAssetData_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<FAssetData_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FAssetData_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142b18190

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142b18220

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>::ResizeAllocation
          (ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142b182c0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>::ResizeAllocation
          (ForElementType<UE::AssetRegistry::Private::FCachedAssetKey> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<UE::AssetRegistry::Private::FCachedAssetKey> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142b18350

void __thiscall
TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::AssetDataGather::Private::FGatheredPathData>::ResizeAllocation
          (ForElementType<UE::AssetDataGather::Private::FGatheredPathData> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::AssetDataGather::Private::FGatheredPathData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x65) {
    if (_Src == (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142b183f0

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_>::ResizeAllocation
          (ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_> *this,int param_1
          ,int param_2,ulong64 param_3)

{
  ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142b18490

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArrayView<FAssetData_const_*_const,int>_>::ResizeAllocation
          (ForElementType<TArrayView<FAssetData_const_*_const,int>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TArrayView<FAssetData_const_*_const,int>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<TArrayView<FAssetData_const_*_const,int>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArrayView<FAssetData_const_*_const,int>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142b18530

void __thiscall
TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>::ResizeAllocation
          (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x65) {
    if (_Src == (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142b185d0

void __thiscall
TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
          (ForElementType<FName> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FName> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x65) {
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

// ResizeAllocation @ 142b18670

void __thiscall
TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FPackageDependencyData>::
ResizeAllocation(ForElementType<FPackageDependencyData> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FPackageDependencyData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x65) {
    if (_Src == (ForElementType<FPackageDependencyData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xe0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPackageDependencyData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xe0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142b18710

void __thiscall
TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::ResizeAllocation
          (ForElementType<FString> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FString> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x65) {
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

// ResizeAllocation @ 142b64c20

void __thiscall
TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
          (ForElementType<FName> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FName> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 6) {
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

// ResizeAllocation @ 142ba5bf0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>::ResizeAllocation
          (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142ba5c80

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>::
ResizeAllocation(ForElementType<UObject_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UObject_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
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

// ResizeAllocation @ 142ba5d10

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>::
ResizeAllocation(ForElementType<FAssetData_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FAssetData_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FAssetData_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FAssetData_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142ba5da0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData>::
ResizeAllocation(ForElementType<FAssetData> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FAssetData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<FAssetData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x68);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FAssetData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x68);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142ba5e40

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
ResizeAllocation(ForElementType<FSoftObjectPath> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSoftObjectPath> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
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

// ResizeAllocation @ 142ba5ed0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::ResizeAllocation
          (ForElementType<FString> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FString> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
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

