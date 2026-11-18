// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 12

// ResizeAllocation @ 14693cce0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UWidget_*>::
ResizeAllocation(ForElementType<UWidget_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UWidget_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UWidget_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UWidget_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14693cd80

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
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

// ResizeAllocation @ 14693ce20

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
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

// ResizeAllocation @ 14693cec0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
::ResizeAllocation(ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14693cf50

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
::ResizeAllocation(ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14693cfe0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>::ResizeAllocation
          (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14693d080

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>::ResizeAllocation
          (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14693d1f0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
ResizeAllocation(ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetElementId> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 146a0dd60

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSubclassOf<UUserWidget>_>::
ResizeAllocation(ForElementType<TSubclassOf<UUserWidget>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<TSubclassOf<UUserWidget>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TSubclassOf<UUserWidget>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSubclassOf<UUserWidget>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 146a912f0

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SRetainerWidget_*>::
ResizeAllocation(ForElementType<SRetainerWidget_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<SRetainerWidget_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<SRetainerWidget_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<SRetainerWidget_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 146a91380

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>::
ResizeAllocation(ForElementType<UUserWidgetExtension_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UUserWidgetExtension_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<UUserWidgetExtension_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UUserWidgetExtension_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 146a91420

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SMeshWidget::FRenderData>::
ResizeAllocation(ForElementType<SMeshWidget::FRenderData> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<SMeshWidget::FRenderData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<SMeshWidget::FRenderData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x50);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x50);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

