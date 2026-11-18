// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 30

// Construct<FColorGradingSpinBoxStyle> @ 14d82a020

void __cdecl UE::CoreUObject::Private::Construct<FColorGradingSpinBoxStyle>(void *param_1)

{
  TVector2<float>_u_0 aTStackX_8 [4];
  FMargin FStack_c8;
  FSlateBrush FStack_b8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FColorGradingSpinBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  aTStackX_8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_c8.Left = 0.0;
  FStack_c8.Top = 0.0;
  FStack_c8.Right = 0.0;
  FStack_c8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&FStack_b8,NoDrawType,(FName)0x0,&FStack_c8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&aTStackX_8[0]._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  FStack_b8.bIsSet = '\0';
  FStack_b8._padding_ = (longlong)&___7FSlateOptionalBrush__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0),&FStack_b8);
  FStack_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined4 *)((longlong)param_1 + 0x2d0) = 0x3f800000;
  return;
}

// ConstructForTests<FColorGradingSpinBoxStyle> @ 14d82a030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FColorGradingSpinBoxStyle>(void *param_1)

{
  TVector2<float>_u_0 aTStackX_8 [4];
  FMargin FStack_c8;
  FSlateBrush FStack_b8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FColorGradingSpinBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  aTStackX_8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_c8.Left = 0.0;
  FStack_c8.Top = 0.0;
  FStack_c8.Right = 0.0;
  FStack_c8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&FStack_b8,NoDrawType,(FName)0x0,&FStack_c8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&aTStackX_8[0]._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  FStack_b8.bIsSet = '\0';
  FStack_b8._padding_ = (longlong)&___7FSlateOptionalBrush__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0),&FStack_b8);
  FStack_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined4 *)((longlong)param_1 + 0x2d0) = 0x3f800000;
  return;
}

// Destruct<FColorGradingSpinBoxStyle> @ 14d82a040

void __cdecl UE::CoreUObject::Private::Destruct<FColorGradingSpinBoxStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FColorGradingSpinBoxStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FColorGradingSpinBoxStyle> @ 14d82a050

bool __cdecl
UE::CoreUObject::Private::Copy<FColorGradingSpinBoxStyle>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    puVar1 = (undefined4 *)((longlong)param_2 + 0x2d0);
    param_2 = (void *)((longlong)param_2 + 0x2e0);
    *(undefined4 *)((longlong)param_1 + 0x2d0) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x2e0);
  }
  return true;
}

// DeleterFunc<UE::PropertyViewer::Private::FPropertyValueFactoryImpl> @ 14d82c180

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::PropertyViewer::Private::FPropertyValueFactoryImpl>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x60));
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0xb0);
  return;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&> @ 14d82c200

FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&> @ 14d82c220

FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&> @ 14d82c240

SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
          (SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&> @ 14d82c260

STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
          (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&> @ 14d82c280

TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
          (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&> @ 14d82c2a0

FPropertyViewerImpl * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
          (FPropertyViewerImpl **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::PropertyViewer::SBoolPropertyValue,UE::PropertyViewer::SBoolPropertyValue_*_&> @ 14d82c2c0

SBoolPropertyValue * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::PropertyViewer::SBoolPropertyValue,UE::PropertyViewer::SBoolPropertyValue_*_&>
          (SBoolPropertyValue **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::ColorGrading::SColorGradingComponentViewer,UE::ColorGrading::SColorGradingComponentViewer_*_&> @ 14d82c2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

SColorGradingComponentViewer * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::ColorGrading::SColorGradingComponentViewer,UE::ColorGrading::SColorGradingComponentViewer_*_&>
          (SColorGradingComponentViewer **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&> @ 14d82c300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

SColorGradingPicker * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
          (SColorGradingPicker **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::PropertyViewer::SDefaultPropertyValue,UE::PropertyViewer::SDefaultPropertyValue_*_&> @ 14d82c320

SDefaultPropertyValue * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::PropertyViewer::SDefaultPropertyValue,UE::PropertyViewer::SDefaultPropertyValue_*_&>
          (SDefaultPropertyValue **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::PropertyViewer::SEnumPropertyValue,UE::PropertyViewer::SEnumPropertyValue_*_&> @ 14d82c340

SEnumPropertyValue * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::PropertyViewer::SEnumPropertyValue,UE::PropertyViewer::SEnumPropertyValue_*_&>
          (SEnumPropertyValue **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_*_&> @ 14d82c360

SListViewPinnedRowWidget * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_*_&>
          (SListViewPinnedRowWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&> @ 14d82c380

SNumericPropertyValue * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
          (SNumericPropertyValue **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::PropertyViewer::SStringPropertyValue,UE::PropertyViewer::SStringPropertyValue_*_&> @ 14d82c3a0

SStringPropertyValue * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::PropertyViewer::SStringPropertyValue,UE::PropertyViewer::SStringPropertyValue_*_&>
          (SStringPropertyValue **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<URadialSlider,URadialSlider_*_&> @ 14d82c3c0

URadialSlider * __cdecl
UE::Core::Private::DereferenceIfNecessary<URadialSlider,URadialSlider_*_&>(URadialSlider **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_> @ 14d8301d0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FProperty_const_*> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_> @ 14d830270

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_>
          (ushort param_1,ForElementType<FProperty_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>_> @ 14d830340

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>_>
          (ushort param_1,ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_> @ 14d830410

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>
          (ushort param_1,
          ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_> @ 14d8304e0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *param_4,int param_5
          ,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// GenerateNumericEditor @ 14d863e60

TSharedPtr<SWidget,1> * __cdecl
UE::PropertyViewer::Private::GenerateNumericEditor
          (TSharedPtr<SWidget,1> *__return_storage_ptr__,FGenerateArgs *param_1)

{
  ForElementType<FProperty_const_*> FVar1;
  code *pcVar2;
  bool bVar3;
  FProperty *pFVar4;
  TSharedPtr<SWidget,1> *pTVar5;
  longlong lVar6;
  FGenerateArgs local_88;
  FGenerateArgs local_48;
  
  pFVar4 = FPropertyPath::GetLastProperty(&param_1->Path);
  if (pFVar4 != (FProperty *)0x0) {
    if ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x18 & 1) == 0) {
      pFVar4 = (FProperty *)0x0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    lVar6 = (**(code **)(pFVar4->_padding_ + 0x1e0))(pFVar4);
    if (lVar6 != 0) {
      FPropertyPath::FPropertyPath(&local_88.Path,&param_1->Path);
      local_88.NotifyHook = param_1->NotifyHook;
      local_88.bCanEditValue = param_1->bCanEditValue;
      SEnumPropertyValue::CreateInstance(__return_storage_ptr__,&local_88);
      goto LAB_14d863f46;
    }
  }
  FPropertyPath::FPropertyPath(&local_48.Path,&param_1->Path);
  local_48.NotifyHook = param_1->NotifyHook;
  local_48.bCanEditValue = param_1->bCanEditValue;
  SNumericPropertyValue::CreateInstance(__return_storage_ptr__,&local_48);
LAB_14d863f46:
  FVar1 = (param_1->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return __return_storage_ptr__;
}

// GetColor @ 14d866330

FSlateColor * __cdecl
UE::PropertyViewer::Private::GetColor
          (FSlateColor *__return_storage_ptr__,FFieldColorSettings *param_1,FProperty *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  FTopLevelAssetPath *this;
  FString *pFVar6;
  FLinearColor *pFVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FString local_28;
  FTopLevelAssetPath local_18;
  
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 10 & 1) != 0)) {
    uVar2 = *(undefined8 *)&(param_1->ClassTypeColor).field0_0x0;
    uVar3 = *(undefined8 *)((longlong)&(param_1->ClassTypeColor).field0_0x0 + 8);
    __return_storage_ptr__->ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
    return __return_storage_ptr__;
  }
  if (param_2 == (FProperty *)0x0) {
LAB_14d866412:
    if (param_2 == (FProperty *)0x0) {
LAB_14d86651a:
      fVar8 = (param_1->DefaultTypeColor).field0_0x0._s_0.R;
      fVar9 = (param_1->DefaultTypeColor).field0_0x0._s_0.G;
      fVar10 = (param_1->DefaultTypeColor).field0_0x0._s_0.B;
      fVar11 = (param_1->DefaultTypeColor).field0_0x0._s_0.A;
    }
    else if ((*(uint *)(param_2->_padding_ + 0x18) >> 0x11 & 1) == 0) {
      if (param_2 == (FProperty *)0x0) goto LAB_14d86651a;
      if ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x1000000000000) == 0) {
        if (param_2 == (FProperty *)0x0) goto LAB_14d86651a;
        uVar1 = *(uint *)(param_2->_padding_ + 0x18);
        if (((uVar1 >> 0xe & 1) == 0) && ((uVar1 >> 0x1e & 1) == 0)) {
          if ((*(uint *)(param_2->_padding_ + 0x18) >> 0xd & 1) == 0) {
            if (param_2 != (FProperty *)0x0) {
              uVar1 = *(uint *)(param_2->_padding_ + 0x18);
              if (((uVar1 >> 0x19 & 1) != 0) || ((uVar1 >> 0x17 & 1) != 0)) {
                fVar8 = (param_1->DelegateTypeColor).field0_0x0._s_0.R;
                fVar9 = (param_1->DelegateTypeColor).field0_0x0._s_0.G;
                fVar10 = (param_1->DelegateTypeColor).field0_0x0._s_0.B;
                fVar11 = (param_1->DelegateTypeColor).field0_0x0._s_0.A;
                goto LAB_14d86651d;
              }
              if ((uVar1 >> 0x14 & 1) != 0) {
                this = UStruct::GetStructPathName((UStruct *)param_2[1]._padding_,&local_18);
                pFVar6 = FTopLevelAssetPath::ToString(this,&local_28);
                pFVar7 = TMapBase<FString,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>_>
                         ::Find((TMapBase<FString,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>_>
                                 *)&param_1->StructColors,pFVar6);
                if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_28.Data.AllocatorInstance.Data);
                }
                __return_storage_ptr__->ColorUseRule = UseColor_Specified;
                if (pFVar7 == (FLinearColor *)0x0) {
                  fVar8 = (param_1->DefaultStructTypeColor).field0_0x0._s_0.R;
                  fVar9 = (param_1->DefaultStructTypeColor).field0_0x0._s_0.G;
                  fVar10 = (param_1->DefaultStructTypeColor).field0_0x0._s_0.B;
                  fVar11 = (param_1->DefaultStructTypeColor).field0_0x0._s_0.A;
                }
                else {
                  fVar8 = (pFVar7->field0_0x0)._s_0.R;
                  fVar9 = (pFVar7->field0_0x0)._s_0.G;
                  fVar10 = (pFVar7->field0_0x0)._s_0.B;
                  fVar11 = (pFVar7->field0_0x0)._s_0.A;
                }
                goto LAB_14d866524;
              }
            }
            goto LAB_14d86651a;
          }
          fVar8 = (param_1->TextTypeColor).field0_0x0._s_0.R;
          fVar9 = (param_1->TextTypeColor).field0_0x0._s_0.G;
          fVar10 = (param_1->TextTypeColor).field0_0x0._s_0.B;
          fVar11 = (param_1->TextTypeColor).field0_0x0._s_0.A;
        }
        else {
          fVar8 = (param_1->StringTypeColor).field0_0x0._s_0.R;
          fVar9 = (param_1->StringTypeColor).field0_0x0._s_0.G;
          fVar10 = (param_1->StringTypeColor).field0_0x0._s_0.B;
          fVar11 = (param_1->StringTypeColor).field0_0x0._s_0.A;
        }
      }
      else {
LAB_14d866488:
        fVar8 = (param_1->EnumTypeColor).field0_0x0._s_0.R;
        fVar9 = (param_1->EnumTypeColor).field0_0x0._s_0.G;
        fVar10 = (param_1->EnumTypeColor).field0_0x0._s_0.B;
        fVar11 = (param_1->EnumTypeColor).field0_0x0._s_0.A;
      }
    }
    else {
      fVar8 = (param_1->BooleanTypeColor).field0_0x0._s_0.R;
      fVar9 = (param_1->BooleanTypeColor).field0_0x0._s_0.G;
      fVar10 = (param_1->BooleanTypeColor).field0_0x0._s_0.B;
      fVar11 = (param_1->BooleanTypeColor).field0_0x0._s_0.A;
    }
  }
  else {
    uVar1 = *(uint *)(param_2->_padding_ + 0x18);
    if ((uVar1 >> 0x1a & 1) == 0) {
      if ((uVar1 >> 0xc & 1) == 0) {
        if ((*(uint *)(param_2->_padding_ + 0x18) >> 0x18 & 1) == 0) goto LAB_14d866412;
        lVar5 = (**(code **)(param_2->_padding_ + 0x1e0))(param_2);
        if (lVar5 != 0) goto LAB_14d866488;
        cVar4 = (**(code **)(param_2->_padding_ + 0x1d0))(param_2);
        if (cVar4 == '\0') {
          cVar4 = (**(code **)(param_2->_padding_ + 0x1d8))(param_2);
          if (cVar4 == '\0') goto LAB_14d866412;
          fVar8 = (param_1->IntTypeColor).field0_0x0._s_0.R;
          fVar9 = (param_1->IntTypeColor).field0_0x0._s_0.G;
          fVar10 = (param_1->IntTypeColor).field0_0x0._s_0.B;
          fVar11 = (param_1->IntTypeColor).field0_0x0._s_0.A;
        }
        else {
          fVar8 = (param_1->FloatTypeColor).field0_0x0._s_0.R;
          fVar9 = (param_1->FloatTypeColor).field0_0x0._s_0.G;
          fVar10 = (param_1->FloatTypeColor).field0_0x0._s_0.B;
          fVar11 = (param_1->FloatTypeColor).field0_0x0._s_0.A;
        }
      }
      else {
        fVar8 = (param_1->InterfaceTypeColor).field0_0x0._s_0.R;
        fVar9 = (param_1->InterfaceTypeColor).field0_0x0._s_0.G;
        fVar10 = (param_1->InterfaceTypeColor).field0_0x0._s_0.B;
        fVar11 = (param_1->InterfaceTypeColor).field0_0x0._s_0.A;
      }
    }
    else {
      fVar8 = (param_1->ObjectTypeColor).field0_0x0._s_0.R;
      fVar9 = (param_1->ObjectTypeColor).field0_0x0._s_0.G;
      fVar10 = (param_1->ObjectTypeColor).field0_0x0._s_0.B;
      fVar11 = (param_1->ObjectTypeColor).field0_0x0._s_0.A;
    }
  }
LAB_14d86651d:
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
LAB_14d866524:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = fVar8;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar9;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar10;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar11;
  return __return_storage_ptr__;
}

// GetColorGradingComponent @ 14d866550

EColorGradingComponent __cdecl
UE::ColorGrading::GetColorGradingComponent(EColorGradingColorDisplayMode param_1,int param_2)

{
  int local_res10 [2];
  int *local_res18 [2];
  
  if (3 < (uint)param_2) {
    local_res18[0] = local_res10;
    local_res10[0] = param_2;
    `UE::ColorGrading::GetColorGradingComponent'::__l2::<lambda_1>::operator()(local_res18);
    param_2 = local_res10[0];
  }
  if (param_2 == 3) {
    return Luminance;
  }
  if (param_1 == RGB) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        return Green;
      }
      if (param_2 == 2) {
        return Blue;
      }
    }
  }
  else if (param_1 == HSV) {
    if (param_2 == 0) {
      return Hue;
    }
    if (param_2 == 1) {
      return Saturation;
    }
    if (param_2 == 2) {
      return Value;
    }
  }
  return Red;
}

// InternalIsValid @ 14d8717f0

bool __cdecl UE::PropertyViewer::Private::InternalIsValid(UStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (bool)((byte)((uint)*(undefined4 *)((longlong)&param_1[1]._padding_ + 4) >> 0x1f) ^ 1);
    }
  }
  if (param_1 != (UStruct *)0x0) {
    pUVar2 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (bool)(~(byte)((uint)param_1[1]._padding_ >> 0x17) & 1);
    }
  }
  return false;
}

// operator() @ 150587630

bool __thiscall
`UE::ColorGrading::GetColorGradingComponent'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3972068652504580107>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3972068652504580107>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

