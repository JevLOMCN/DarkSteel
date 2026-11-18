// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 24

// ResizeAllocation @ 142450810

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<FSlateInvalidationWidgetHeapElement>::ResizeAllocation
          (ForElementType<FSlateInvalidationWidgetHeapElement> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FSlateInvalidationWidgetHeapElement> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1424508b0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<FSlateInvalidationWidgetHeapElement>::ResizeAllocation
          (ForElementType<FSlateInvalidationWidgetHeapElement> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FSlateInvalidationWidgetHeapElement> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142450950

void __thiscall
TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
ForElementType<FSlateInvalidationWidgetHeapElement>::ResizeAllocation
          (ForElementType<FSlateInvalidationWidgetHeapElement> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FSlateInvalidationWidgetHeapElement> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x65) {
    if (_Src == (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1424509f0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>::
ResizeAllocation(ForElementType<FArrangedWidget> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FArrangedWidget> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FArrangedWidget>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x48);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FArrangedWidget>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x48);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142450a90

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
ResizeAllocation(ForElementType<unsigned___int64> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned___int64> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
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

// ResizeAllocation @ 1424a62c0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FCachedTypefaceData::FCachedFontData>::ResizeAllocation
          (ForElementType<FCachedTypefaceData::FCachedFontData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FCachedTypefaceData::FCachedFontData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FCachedTypefaceData::FCachedFontData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FCachedTypefaceData::FCachedFontData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1424a6350

void __thiscall
TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::
ForElementType<`anonymous_namespace'::FHarfBuzzTextSequenceEntry>::ResizeAllocation
          (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xd) {
    if (_Src == (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x38);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x38);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1424a63f0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<`anonymous_namespace'::FKerningOnlyTextSequenceEntry>::ResizeAllocation
          (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1424a6490

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSharedPtr<FCachedTypefaceData,1>_>::ResizeAllocation
          (ForElementType<TSharedPtr<FCachedTypefaceData,1>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1424a6520

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>::ResizeAllocation
          (ForElementType<bool> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<bool> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
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

// ResizeAllocation @ 14251d5d0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementData_*>::
ResizeAllocation(ForElementType<FSlateCachedElementData_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FSlateCachedElementData_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FSlateCachedElementData_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSlateCachedElementData_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14251d660

void __thiscall
TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementList_*>
::ResizeAllocation(ForElementType<FSlateCachedElementList_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FSlateCachedElementList_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x33) {
    if (_Src == (ForElementType<FSlateCachedElementList_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSlateCachedElementList_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14251d700

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid_const_*>::
ResizeAllocation(ForElementType<FHittestGrid_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FHittestGrid_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FHittestGrid_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FHittestGrid_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14251d840

void __thiscall
TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::
ForElementType<FSlateWindowElementList::FWidgetDrawElementState>::ResizeAllocation
          (ForElementType<FSlateWindowElementList::FWidgetDrawElementState> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x33) {
    if (_Src == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14251d8e0

void __thiscall
TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
ForElementType<FHittestGrid::FWidgetIndex>::ResizeAllocation
          (ForElementType<FHittestGrid::FWidgetIndex> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FHittestGrid::FWidgetIndex> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x65) {
    if (_Src == (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14251d980

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedClipState>::
ResizeAllocation(ForElementType<FSlateCachedClipState> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<FSlateCachedClipState> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FSlateCachedClipState>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSlateCachedClipState>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14251da10

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EWidgetPixelSnapping>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 8);
  if ((uint)param_2 < 5) {
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

// ResizeAllocation @ 1425f9720

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
::ResizeAllocation(ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 6);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 6);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1425f97c0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FSlateAttributeDescriptor::FContainer>::ResizeAllocation
          (ForElementType<FSlateAttributeDescriptor::FContainer> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FSlateAttributeDescriptor::FContainer> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1425f9850

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<FSlateAttributeMetaData::FGetterItem>::ResizeAllocation
          (ForElementType<FSlateAttributeMetaData::FGetterItem> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FSlateAttributeMetaData::FGetterItem> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1425f98f0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x180);
  if ((uint)param_2 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x180),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x180),this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x180),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1425f9990

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<`ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x200);
  if ((uint)param_2 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x200),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x200),this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x200),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1425f9a30

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<`ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x200);
  if ((uint)param_2 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x200),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x200),this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x200),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1425f9ad0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<TWeakPtr<SWidget_const_,1>_>::ResizeAllocation
          (ForElementType<TWeakPtr<SWidget_const_,1>_> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<TWeakPtr<SWidget_const_,1>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<TWeakPtr<SWidget_const_,1>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TWeakPtr<SWidget_const_,1>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

