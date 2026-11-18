// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 15

// ResizeAllocation @ 142cb95d0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>::ResizeAllocation
          (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142cb9660

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142cb96f0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142cb9780

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142cb9820

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
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

// ResizeAllocation @ 142cb98b0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>::ResizeAllocation
          (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142cb9950

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Editor::DataStorage::FColumnMetaData>::ResizeAllocation
          (ForElementType<UE::Editor::DataStorage::FColumnMetaData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xb8);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xb8);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142cb99f0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
          (ForElementType<FName> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FName> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
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

// ResizeAllocation @ 142cb9a80

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
          (ForElementType<FName> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FName> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
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

// ResizeAllocation @ 142cb9b20

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x20);
  if ((uint)param_2 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x20),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x20),this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x20),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142cb9bb0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x20);
  if ((uint)param_2 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x20),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x20),this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x20),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142cb9c40

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x10);
  if ((uint)param_2 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 * 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x10),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x10),this,(longlong)param_1 * 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x10),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142cb9cd0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 8);
  if ((uint)param_2 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 8),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 8),this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 8),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142cb9d60

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 8);
  if ((uint)param_2 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 8),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 8),this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 8),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142cb9df0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x40);
  if ((uint)param_2 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x40),this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x40),param_1,param_2,param_3);
  return;
}

