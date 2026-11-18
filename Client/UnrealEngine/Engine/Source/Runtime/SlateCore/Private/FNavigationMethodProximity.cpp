// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 21

// StaticStruct @ 1424c4bd0

UScriptStruct * __cdecl FNavigationMethodProximity::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavigationMethodProximity.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FNavigationMethodProximity.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationMethodProximity,(UObject *)pUVar1,
                         L"NavigationMethodProximity");
  }
  return Z_Registration_Info_UScriptStruct_FNavigationMethodProximity.OuterSingleton;
}

// FindNextFocusableWidget @ 1424c4c10

TSharedPtr<SWidget,1> * __thiscall
FNavigationMethodProximity::FindNextFocusableWidget
          (FNavigationMethodProximity *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FArrangedWidget *param_1,EUINavigation param_2,FNavigationReply *param_3,
          FArrangedWidget *param_4,int param_5)

{
  FHittestGrid *pFVar1;
  TSharedPtr<SWidget,1> local_38;
  FSlateRect local_28;
  FSlateRect local_18;
  
  local_38.Object = (param_1->Widget).Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->Widget).SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
  Emplace<TSharedPtr<SWidget,1>_>
            ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
              *)&this->_padding_,(TSharedPtr<SWidget,1> *)&stack0x00000008,(bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  local_38.Object = (param_1->Widget).Object;
  pFVar1 = (FHittestGrid *)this->_padding_;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->Widget).SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FHittestGrid::GetWidgetRenderBoundingRect(pFVar1,&local_28,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  pFVar1 = (FHittestGrid *)this->_padding_;
  local_38.Object = (param_4->Widget).Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_4->Widget).SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FHittestGrid::GetWidgetRenderBoundingRect(pFVar1,&local_18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  PrepareDrawDebugData(this,&local_28,param_2);
  FindFocusableWidgetFromRect
            (this,__return_storage_ptr__,&local_28,&local_18,param_2,param_3,param_5);
  return __return_storage_ptr__;
}

// Initialize @ 1424c4d60

void __thiscall
FNavigationMethodProximity::Initialize
          (FNavigationMethodProximity *this,FHittestGrid *param_1,
          TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  FDrawDebugData *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_2;
  bVar8 = 1 < (int)this->_padding_;
  if (!bVar8) {
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                    *)&this->_padding_);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->_padding_,0,(int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar6 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar8) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    Rehash((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
            *)&this->_padding_);
  }
  bVar8 = 1 < (this->VisitedWidgets).HashSize;
  if (!bVar8) {
    TSet<SWidget_*,DefaultKeyFuncs<SWidget_*,0>,FDefaultSetAllocator>::UnhashElements
              (&this->VisitedWidgets);
  }
  puVar4 = &(this->VisitedWidgets).Elements.field_0xc;
  *(undefined4 *)&(this->VisitedWidgets).Elements.field_0x8 = 0;
  if (*(int *)puVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->VisitedWidgets,0,(int *)puVar4);
  }
  *(undefined4 *)&(this->VisitedWidgets).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisitedWidgets).Elements.field_0x34 = 0;
  iVar6 = *(int *)&(this->VisitedWidgets).Elements.field_0x2c;
  *(undefined4 *)&(this->VisitedWidgets).Elements.field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(this->VisitedWidgets).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VisitedWidgets).Elements.field_0x10,0
              );
  }
  if (bVar8) {
    (this->VisitedWidgets).HashSize = 1;
    TSet<SWidget_*,DefaultKeyFuncs<SWidget_*,0>,FDefaultSetAllocator>::Rehash(&this->VisitedWidgets)
    ;
  }
  pFVar5 = &this->DrawDebugData;
  if (pFVar5 != (FDrawDebugData *)local_48) {
    pFVar7 = (pFVar5->LabelPositions).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar5->LabelPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DrawDebugData).LabelPositions.ArrayNum = 0;
    (this->DrawDebugData).LabelPositions.ArrayMax = 0;
  }
  pTVar2 = &(this->DrawDebugData).Distances;
  if (pTVar2 != (TArray<float,TSizedDefaultAllocator<32>_> *)local_38) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DrawDebugData).Distances.ArrayNum = 0;
    (this->DrawDebugData).Distances.ArrayMax = 0;
  }
  pTVar3 = &(this->DrawDebugData).Points;
  if (pTVar3 != (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)local_28) {
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DrawDebugData).Points.ArrayNum = 0;
    (this->DrawDebugData).Points.ArrayMax = 0;
  }
  pTVar9 = &(this->DrawDebugData).Colors;
  if (pTVar9 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)local_18) {
    pFVar7 = (pTVar9->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DrawDebugData).Colors.ArrayNum = 0;
    (this->DrawDebugData).Colors.ArrayMax = 0;
  }
  return;
}

// DrawDebug @ 1424c5a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FNavigationMethodProximity::DrawDebug
          (FNavigationMethodProximity *this,int param_1,FGeometry *param_2,
          FSlateWindowElementList *param_3)

{
  float fVar1;
  undefined1 uVar2;
  FScriptContainerElement *pFVar3;
  TVector2<float>_u_0 TVar4;
  FDeprecateSlateVector2D FVar5;
  code *pcVar6;
  float afVar7 [2];
  float afVar8 [2];
  float afVar9 [2];
  float afVar10 [2];
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  FName *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  FString *pFVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_278;
  uint local_268;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_260;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_250;
  undefined8 local_240;
  float local_238;
  float fStack_234;
  FGeometry *local_230;
  TTransform2<float> *local_228;
  FSlateWindowElementList *local_220;
  TVector2<float>_u_0_s_0 local_214;
  FFontOutlineSettings local_208;
  FTextFormat local_1e8;
  FText local_1d8;
  FFormatArgumentValue local_1c8;
  TVector2<float>_u_0 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  FDeprecateSlateVector2D local_194;
  float local_18c [2];
  float afStack_184 [2];
  TVector2<float>_u_0 local_17c;
  byte local_174;
  TVector2<float>_u_0 local_170;
  float local_168;
  undefined8 local_164;
  FDeprecateSlateVector2D local_15c;
  float local_154 [2];
  float afStack_14c [2];
  TVector2<float>_u_0 local_144;
  byte local_13c;
  FName local_138;
  FText local_130;
  FLinearColor_u_0 local_120;
  TTransform2<float> local_110;
  TTransform2<float> local_f8;
  FTextFormat local_e0;
  FSlateFontInfo local_c8;
  
  local_268 = param_1;
  local_230 = param_2;
  local_220 = param_3;
  if (((this->DrawDebugData).Colors.ArrayNum != (this->DrawDebugData).Points.ArrayNum) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8351810579928711746>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethodProximity.cpp"
                          ,0x242,"DrawDebugData.Colors.Num() == DrawDebugData.Points.Num()"), bVar13
     )) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_260.ArrayNum = (this->DrawDebugData).Colors.ArrayNum;
  lVar20 = (longlong)local_260.ArrayNum;
  lVar21 = 0;
  pFVar3 = (this->DrawDebugData).Colors.AllocatorInstance.Data;
  local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_260.ArrayNum == 0) {
    local_260.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_260.ArrayNum,0,&local_260.AllocatorInstance,local_260.ArrayNum,
               &local_260.ArrayMax);
    memcpy(local_260.AllocatorInstance.Data,pFVar3,lVar20 << 4);
  }
  local_250.ArrayNum = (this->DrawDebugData).Points.ArrayNum;
  lVar20 = (longlong)local_250.ArrayNum;
  pFVar3 = (this->DrawDebugData).Points.AllocatorInstance.Data;
  local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_250.ArrayNum == 0) {
    local_250.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_250.ArrayNum,0,&local_250.AllocatorInstance,local_250.ArrayNum,
               &local_250.ArrayMax);
    memcpy(local_250.AllocatorInstance.Data,pFVar3,lVar20 << 3);
  }
  local_17c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_1a8 = (param_2->AbsolutePosition).field0_0x0;
  local_1a0 = param_2->Scale;
  local_194 = param_2->Size;
  local_228 = &param_2->AccumulatedRenderTransform;
  local_18c = (local_228->M).M[0];
  afStack_184 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_19c = 0;
  local_174 = param_2->bHasRenderTransform * '\x02' | local_174 & 0xfc;
  FSlateDrawElement::MakeLines
            (param_3,param_1,(FPaintGeometry *)&local_1a8._s_0,&local_250,&local_260,None,
             &FLinearColor::White,true,__real_3f800000);
  local_208.OutlineSize = 0;
  local_208.bMiteredCorners = false;
  local_208.bSeparateFillAlpha = false;
  local_208.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_208.bApplyOutlineToDropShadows = false;
  local_208.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar15 = ::FName::FName(&local_138,"Regular");
  FCoreStyle::GetDefaultFontStyle(&local_c8,*pFVar15,__real_41000000,&local_208);
  uVar12 = _UNK_15090c6c8;
  uVar11 = ___xmm_3f8000003d4ccccd3f63d70a00000000;
  afVar9 = _UNK_15076b188;
  afVar7 = ___xmm_3f80000000000000000000003f800000;
  iVar19 = (this->DrawDebugData).Distances.ArrayNum;
  uVar22 = 0;
  if (0 < iVar19) {
    lVar20 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar22 < iVar19) {
        uVar14 = ~uVar22 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = *(float *)((this->DrawDebugData).Distances.AllocatorInstance.Data + lVar20);
      uVar14 = 0;
      if ((int)uVar22 < (this->DrawDebugData).LabelPositions.ArrayNum) {
        uVar14 = ~uVar22 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TVar4 = (TVector2<float>_u_0)
              *(TVector2<float>_u_0 *)
               &((TVector2<float>_u_0 *)
                ((this->DrawDebugData).LabelPositions.AllocatorInstance.Data + lVar21))->_s_0;
      local_120._0_8_ = uVar11;
      local_120._8_8_ = uVar12;
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_130,L"NavigationMethodProximity",L"NavigationLabel",L"{0}");
      pFVar17 = FTextFormat::FTextFormat(&local_e0,pFVar16,Default);
      local_1c8.Type = Float;
      local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_1c8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.ArrayNum = 1;
      local_1c8.field1_0x8.FloatValue = fVar1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_278.AllocatorInstance,1,&local_278.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_278.AllocatorInstance.Data,&local_1c8,1);
      local_1e8.TextFormatData.Object = (pFVar17->TextFormatData).Object;
      local_1e8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar17->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_1e8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1e8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1e8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_1d8,&local_1e8,&local_278);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_278.AllocatorInstance.Data,local_278.ArrayNum);
      if ((FFormatArgumentValue *)local_278.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_278.AllocatorInstance.Data);
      }
      if (local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar17->TextFormatData).SharedReferenceCount.ReferenceController);
      if (local_130.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
      }
      afVar10 = _UNK_15076b188;
      afVar8 = ___xmm_3f80000000000000000000003f800000;
      fVar1 = param_2->Scale;
      local_214 = (param_2->AbsolutePosition).field0_0x0._s_0;
      FVar5 = local_230->Size;
      local_240._0_4_ = TVar4._s_0.X;
      local_240._4_4_ = TVar4._s_0.Y;
      local_238 = (float)local_240 * fVar1 + local_214.X;
      ___xmm_3f80000000000000000000003f800000 = afVar7[0];
      _UNK_15076b184 = afVar7[1];
      local_110.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_110.M.M[0][1] = _UNK_15076b184;
      _UNK_15076b188 = afVar9[0];
      _UNK_15076b18c = afVar9[1];
      local_110.M.M[1][0] = _UNK_15076b188;
      local_110.M.M[1][1] = _UNK_15076b18c;
      fStack_234 = local_240._4_4_ * fVar1 + local_214.Y;
      ___xmm_3f80000000000000000000003f800000 = afVar8;
      _UNK_15076b188 = afVar10;
      local_240 = TVar4;
      local_110.Trans.field0_0x0 = TVar4;
      Concatenate<TTransform2<float>_>(&local_f8,&local_110,local_228);
      local_170._s_0.Y = fStack_234;
      local_170._s_0.X = local_238;
      local_13c = param_2->bHasRenderTransform * '\x02' | local_13c & 0xfc;
      local_164 = 0;
      local_154[0] = local_f8.M.M[0][0];
      local_154[1] = local_f8.M.M[0][1];
      afStack_14c[0] = local_f8.M.M[1][0];
      afStack_14c[1] = local_f8.M.M[1][1];
      local_144 = local_f8.Trans.field0_0x0;
      local_168 = fVar1;
      local_15c = FVar5;
      pFVar18 = FText::ToString(&local_1d8);
      FSlateDrawElement::MakeText
                (local_220,local_268,(FPaintGeometry *)&local_170._s_0,pFVar18,&local_c8,None,
                 (FLinearColor *)&local_120._s_0);
      if (local_1d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
      }
      iVar19 = (this->DrawDebugData).Distances.ArrayNum;
      uVar22 = uVar22 + 1;
      lVar20 = lVar20 + 4;
      lVar21 = lVar21 + 8;
      param_2 = local_230;
    } while ((int)uVar22 < iVar19);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// FNavigationMethodProximity @ 1424e9e80

FNavigationMethodProximity * __thiscall
FNavigationMethodProximity::FNavigationMethodProximity(FNavigationMethodProximity *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNavigationMethodProximity__6B_;
  *(undefined8 *)&(this->VisitedWidgets).Elements = 0;
  *(undefined8 *)&(this->VisitedWidgets).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisitedWidgets).Elements.field_0x20 = 0;
  this->AlignmentFactor = 1.0;
  this->SearchAngleDegrees = 45.0;
  this->OverlapThreshold = 20.0;
  *(undefined4 *)&(this->VisitedWidgets).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisitedWidgets).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisitedWidgets).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisitedWidgets).Elements.field_0x34 = 0;
  (this->VisitedWidgets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisitedWidgets).HashSize = 0;
  (this->DrawDebugData).LabelPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawDebugData).LabelPositions.ArrayNum = 0;
  (this->DrawDebugData).LabelPositions.ArrayMax = 0;
  (this->DrawDebugData).Distances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawDebugData).Distances.ArrayNum = 0;
  (this->DrawDebugData).Distances.ArrayMax = 0;
  (this->DrawDebugData).Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawDebugData).Points.ArrayNum = 0;
  (this->DrawDebugData).Points.ArrayMax = 0;
  (this->DrawDebugData).Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawDebugData).Colors.ArrayNum = 0;
  (this->DrawDebugData).Colors.ArrayMax = 0;
  return this;
}

// ~FNavigationMethodProximity @ 1424ec850

void __thiscall
FNavigationMethodProximity::~FNavigationMethodProximity(FNavigationMethodProximity *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = (this->DrawDebugData).Colors.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DrawDebugData).Points.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DrawDebugData).Distances.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DrawDebugData).LabelPositions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->VisitedWidgets).HashSize = 0;
  FVar2 = (this->VisitedWidgets).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<SWidget_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<SWidget_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VisitedWidgets).Elements);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// operator() @ 1424f9e00

bool __thiscall
`FNavigationMethodProximity::FindBestWidgetInCell'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<SWidget,1> *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  ForAnyElementType *pFVar6;
  longlong *plVar7;
  FNavigationMethod *this_00;
  code *pcVar8;
  undefined8 uVar9;
  TRefCountPtr<ITextData> TVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  FNavigationMethodProximity *this_01;
  FScriptContainerElement *pFVar16;
  float fVar17;
  SWidget *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  SWidget *local_90;
  FSlateRect local_88;
  FText local_78;
  TSharedPtr<SWidget_const_,1> local_68;
  longlong local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  lVar3 = *(longlong *)this;
  local_90 = param_1->Object;
  uVar14 = ((uint)((ulonglong)local_90 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_90 >> 4)) *
           -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  if (*(int *)(lVar3 + 0x80) != *(int *)(lVar3 + 0xac)) {
    lVar15 = *(longlong *)(lVar3 + 0xb8);
    if (*(longlong *)(lVar3 + 0xb8) == 0) {
      lVar15 = lVar3 + 0xb0;
    }
    iVar13 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar3 + 0xc0) - 1U & (uVar14 >> 0x10 ^ uVar14))
                               * 4);
    if (iVar13 != -1) {
      do {
        if (*(SWidget **)(*(longlong *)(lVar3 + 0x78) + (longlong)iVar13 * 0x10) == local_90) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->SharedReferenceCount).ReferenceController);
          return false;
        }
        iVar13 = *(int *)(*(longlong *)(lVar3 + 0x78) + 8 + (longlong)iVar13 * 0x10);
      } while (iVar13 != -1);
    }
  }
  TSet<SWidget_*,DefaultKeyFuncs<SWidget_*,0>,FDefaultSetAllocator>::Emplace<SWidget_*>
            ((TSet<SWidget_*,DefaultKeyFuncs<SWidget_*,0>,FDefaultSetAllocator> *)(lVar3 + 0x78),
             &local_res8,(bool *)&local_90);
  FHittestGrid::GetWidgetRenderBoundingRect
            (*(FHittestGrid **)(*(longlong *)this + 8),&local_88,param_1);
  this_01 = *(FNavigationMethodProximity **)this;
  lVar3 = *(longlong *)((longlong)this + 0x10);
  cVar2 = **(char **)((longlong)this + 8);
  if (cVar2 == '\0') {
    bVar11 = local_88.Right - this_01->OverlapThreshold < *(float *)(lVar3 + 8);
LAB_1424f9fa7:
    if (bVar11) {
      fVar17 = FNavigationMethodProximity::CalculateDistance
                         (this_01,**(EUINavigation **)((longlong)this + 8),(FSlateRect *)(lVar3 + 8)
                          ,&local_88);
      FNavigationMethodProximity::DebugCandidateDistance
                (*(FNavigationMethodProximity **)this,**(EUINavigation **)((longlong)this + 8),
                 (FSlateRect *)(*(longlong *)((longlong)this + 0x10) + 8),&local_88,fVar17);
      plVar7 = *(longlong **)((longlong)this + 0x18);
      if ((*plVar7 != 0) && (*(float *)(plVar7 + 6) <= fVar17)) {
        this_00 = *(FNavigationMethod **)this;
        local_78.TextData.Reference =
             FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference;
        if (FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference !=
            (ITextData *)0x0) {
          (**(code **)((longlong)
                       *FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference
                      + 8))(FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.
                            Reference,local_98);
        }
        pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
        local_78.Flags = FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.Flags;
        local_68.Object = param_1->Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.SharedReferenceCount.ReferenceController = pTVar4;
        FNavigationMethod::AddDebugIntermediateResult(this_00,&local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return false;
      }
      pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
      pSVar5 = param_1->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58 = *plVar7;
      pTStack_50 = (TReferenceControllerBase<1> *)plVar7[1];
      *plVar7 = (longlong)pSVar5;
      plVar7[1] = (longlong)pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_50);
      lVar3 = *(longlong *)((longlong)this + 0x18);
      *(ulonglong *)(lVar3 + 0x10) = CONCAT44(local_88.Top,local_88.Left);
      *(ulonglong *)(lVar3 + 0x18) = CONCAT44(local_88.Bottom,local_88.Right);
      *(float *)(*(longlong *)((longlong)this + 0x18) + 0x30) = fVar17;
      lVar3 = *(longlong *)((longlong)this + 0x18);
      uVar9 = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x10);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 8);
      *(undefined8 *)(lVar3 + 0x28) = uVar9;
      *(undefined4 *)(*(longlong *)((longlong)this + 0x18) + 0x34) = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
  }
  else {
    if (cVar2 == '\x01') {
      fVar17 = local_88.Left + this_01->OverlapThreshold;
      bVar11 = *(float *)(lVar3 + 0x10) <= fVar17 && fVar17 != *(float *)(lVar3 + 0x10);
      goto LAB_1424f9fa7;
    }
    if (cVar2 == '\x02') {
      bVar11 = local_88.Bottom - this_01->OverlapThreshold < *(float *)(lVar3 + 0xc);
      goto LAB_1424f9fa7;
    }
    if (cVar2 == '\x03') {
      fVar17 = local_88.Top + this_01->OverlapThreshold;
      bVar11 = *(float *)(lVar3 + 0x14) <= fVar17 && fVar17 != *(float *)(lVar3 + 0x14);
      goto LAB_1424f9fa7;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethodProximity.cpp"
                        ,0x1ba,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    this_01 = *(FNavigationMethodProximity **)this;
  }
  TVar10.Reference = FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference;
  if (FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference +
                8))(FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference,
                    local_res10);
  }
  uVar14 = FNavigationMethod::FDebuggingText::DoesNotIntersect.Flags;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar5 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar6 = (ForAnyElementType *)this_01->_padding_;
  if (pFVar6 == (ForAnyElementType *)0x0) {
    if (TVar10.Reference == (ITextData *)0x0) goto LAB_1424fa090;
  }
  else {
    iVar13 = *(int *)&pFVar6[1].Data;
    piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,pFVar6,piVar1);
    }
    pFVar16 = pFVar6->Data + (longlong)iVar13 * 0x20;
    *(int *)&pFVar6[1].Data = iVar13 + 1;
    if (TVar10.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar10.Reference + 8))(TVar10.Reference,local_res18);
    }
    *(SWidget **)pFVar16 = pSVar5;
    *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(ITextData **)(pFVar16 + 0x10) = TVar10.Reference;
    if (TVar10.Reference == (ITextData *)0x0) {
      *(uint *)(pFVar16 + 0x18) = uVar14;
      goto LAB_1424fa090;
    }
    (**(code **)((longlong)*TVar10.Reference + 8))(TVar10.Reference,local_res20);
    *(uint *)(pFVar16 + 0x18) = uVar14;
    (**(code **)((longlong)*TVar10.Reference + 0x10))(TVar10.Reference);
  }
  (**(code **)((longlong)*TVar10.Reference + 0x10))(TVar10.Reference);
LAB_1424fa090:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// CalculateDistance @ 142502f30

float __thiscall
FNavigationMethodProximity::CalculateDistance
          (FNavigationMethodProximity *this,EUINavigation param_1,FSlateRect *param_2,
          FSlateRect *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TVector2<float>_u_0 local_res8 [4];
  TVector2<float>_u_0 local_38 [6];
  
  CalculateSamplePoints
            (this,param_1,param_2,param_3,(TVector2<float> *)&local_res8[0]._s_0,
             (TVector2<float> *)&local_38[0]._s_0);
  fVar3 = this->AlignmentFactor;
  if (this->AlignmentFactor <= 0.0) {
    fVar3 = __real_00800000;
  }
  fVar1 = powf((float)((uint)((float)local_res8[0]._4_4_ - (float)local_38[0]._4_4_) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff),fVar3);
  fVar2 = powf((float)((uint)((float)local_res8[0]._0_4_ - (float)local_38[0]._0_4_) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff),fVar3);
  fVar3 = powf(fVar1 + fVar2,__real_3f800000 / fVar3);
  return fVar3;
}

// CalculateSamplePoints @ 142503570

void __thiscall
FNavigationMethodProximity::CalculateSamplePoints
          (FNavigationMethodProximity *this,EUINavigation param_1,FSlateRect *param_2,
          FSlateRect *param_3,TVector2<float> *param_4,TVector2<float> *param_5)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res18;
  
  fVar8 = __real_bf800000;
  if ((param_1 == Left) || (fVar8 = __real_3f800000, param_1 == Right)) {
    fVar7 = 0.0;
  }
  else if (param_1 == Up) {
    fVar8 = 0.0;
    fVar7 = __real_bf800000;
  }
  else if (param_1 == Down) {
    fVar8 = 0.0;
    fVar7 = __real_3f800000;
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethodProximity.cpp"
                       ,0x177,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res18._4_4_ = 0.0;
    local_res18._0_4_ = 0.0;
    fVar7 = (float)local_res18._4_4_;
    fVar8 = (float)(undefined4)local_res18;
  }
  fVar3 = __real_3f000000;
  fVar5 = param_2->Right - param_2->Left;
  fVar6 = param_2->Bottom - param_2->Top;
  local_res18._4_4_ = fVar6 * __real_3f000000 + param_2->Top + fVar6 * __real_3f000000 * fVar7;
  local_res18._0_4_ = fVar5 * __real_3f000000 + param_2->Left + fVar5 * __real_3f000000 * fVar8;
  param_4->field0_0x0 = local_res18;
  fVar5 = param_3->Right - param_3->Left;
  fVar6 = param_3->Bottom - param_3->Top;
  TVar2._s_0.Y = fVar6 * fVar3 + param_3->Top + fVar6 * __real_bf000000 * fVar7;
  TVar2._s_0.X = fVar5 * fVar3 + param_3->Left + fVar5 * __real_bf000000 * fVar8;
  param_5->field0_0x0 = TVar2;
  return;
}

// DebugCandidateDistance @ 1425063e0

void __thiscall
FNavigationMethodProximity::DebugCandidateDistance
          (FNavigationMethodProximity *this,EUINavigation param_1,FSlateRect *param_2,
          FSlateRect *param_3,float param_4)

{
  int *piVar1;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  FDrawDebugData *pFVar3;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TVector2<float>_u_0 *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TVector2<float>_u_0 local_28;
  TVector2<float>_u_0 local_20;
  float local_18;
  float fStack_14;
  
  CalculateSamplePoints
            (this,param_1,param_2,param_3,(TVector2<float> *)&local_20._s_0,
             (TVector2<float> *)&local_28._s_0);
  pTVar2 = &(this->DrawDebugData).Points;
  pTVar6 = (TVector2<float>_u_0 *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar6 <= &local_20) && (&local_20 < pTVar6 + (this->DrawDebugData).Points.ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar10 == (this->DrawDebugData).Points.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar10 + 1;
  *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) =
       CONCAT44(local_20._s_0.Y,local_20._s_0.X);
  pTVar6 = (TVector2<float>_u_0 *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar6 <= &local_28) && (&local_28 < pTVar6 + (this->DrawDebugData).Points.ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar10 == (this->DrawDebugData).Points.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar10 + 1;
  pFVar3 = &this->DrawDebugData;
  *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) =
       CONCAT44(local_28._s_0.Y,local_28._s_0.X);
  pFVar7 = (pFVar3->LabelPositions).AllocatorInstance.Data;
  local_18 = (local_20._s_0.X + local_28._s_0.X) * __real_3f000000;
  fStack_14 = (local_28._s_0.Y + local_20._s_0.Y) * __real_3f000000;
  if ((pFVar7 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar7 + (longlong)(this->DrawDebugData).LabelPositions.ArrayMax * 8)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->DrawDebugData).LabelPositions.ArrayNum;
  piVar1 = &(this->DrawDebugData).LabelPositions.ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)pFVar3,piVar1);
  }
  (this->DrawDebugData).LabelPositions.ArrayNum = iVar10 + 1;
  pTVar4 = &(this->DrawDebugData).Colors;
  *(ulonglong *)((pFVar3->LabelPositions).AllocatorInstance.Data + (longlong)iVar10 * 8) =
       CONCAT44(fStack_14,local_18);
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  if ((pFVar7 < (FScriptContainerElement *)((longlong)&FLinearColor::Green.field0_0x0 + 1)) &&
     (&FLinearColor::Green < pFVar7 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar10 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar4->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar10 + 1;
  ((FLinearColor_u_0 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  if ((pFVar7 < (FScriptContainerElement *)((longlong)&FLinearColor::Green.field0_0x0 + 1)) &&
     (&FLinearColor::Green < pFVar7 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar10 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar4->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar10 + 1;
  pTVar5 = &(this->DrawDebugData).Distances;
  ((FLinearColor_u_0 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  pFVar7 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&param_4) &&
     ((FScriptContainerElement *)&param_4 <
      pFVar7 + (longlong)(this->DrawDebugData).Distances.ArrayMax * 4)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->DrawDebugData).Distances.ArrayNum;
  piVar1 = &(this->DrawDebugData).Distances.ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar5->AllocatorInstance,piVar1);
  }
  (this->DrawDebugData).Distances.ArrayNum = iVar10 + 1;
  *(float *)((pTVar5->AllocatorInstance).Data + (longlong)iVar10 * 4) = param_4;
  return;
}

// DebugSearchCell @ 142506810

void __thiscall
FNavigationMethodProximity::DebugSearchCell
          (FNavigationMethodProximity *this,FCellSearchInfo *param_1)

{
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [9];
  
  pTVar1 = &(this->DrawDebugData).Points;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  fVar8 = (float)(param_1->CurrentCellPoint).field0_0x0._s_0.Y *
          FHittestGrid::CellSize.field0_0x0._s_0.Y;
  fVar9 = (float)(param_1->CurrentCellPoint).field0_0x0._s_0.X *
          FHittestGrid::CellSize.field0_0x0._s_0.X;
  fVar10 = fVar8 + FHittestGrid::CellSize.field0_0x0._s_0.Y;
  fVar7 = FHittestGrid::CellSize.field0_0x0._s_0.X + fVar9;
  local_98 = CONCAT44(fVar8,fVar9);
  if ((pFVar2 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 <
      pFVar2 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Points.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar5 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_98;
  local_90 = CONCAT44(fVar8,fVar7);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_90) &&
     ((FScriptContainerElement *)&local_90 <
      pFVar2 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Points.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar5 + 1;
  pTVar6 = &(this->DrawDebugData).Colors;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_90;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 < (FScriptContainerElement *)0x15067ec01) &&
     (&FLinearColor::Red < pFVar2 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar6->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar5 + 1;
  ((FLinearColor_u_0 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 < (FScriptContainerElement *)0x15067ec01) &&
     (&FLinearColor::Red < pFVar2 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar6->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar5 + 1;
  ((FLinearColor_u_0 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  local_88 = CONCAT44(fVar8,fVar7);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar2 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Points.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar5 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_88;
  local_80 = CONCAT44(fVar10,fVar7);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_80) &&
     ((FScriptContainerElement *)&local_80 <
      pFVar2 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Points.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar5 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_80;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 < (FScriptContainerElement *)0x15067ec01) &&
     (&FLinearColor::Red < pFVar2 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar6->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar5 + 1;
  ((FLinearColor_u_0 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 < (FScriptContainerElement *)0x15067ec01) &&
     (&FLinearColor::Red < pFVar2 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar6->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar5 + 1;
  ((FLinearColor_u_0 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  local_78 = CONCAT44(fVar10,fVar7);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar2 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Points.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar5 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_78;
  local_70 = CONCAT44(fVar10,fVar9);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_70) &&
     ((FScriptContainerElement *)&local_70 <
      pFVar2 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Points.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar5 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_70;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 < (FScriptContainerElement *)0x15067ec01) &&
     (&FLinearColor::Red < pFVar2 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar6->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar5 + 1;
  ((FLinearColor_u_0 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 < (FScriptContainerElement *)0x15067ec01) &&
     (&FLinearColor::Red < pFVar2 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar6->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar5 + 1;
  ((FLinearColor_u_0 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  local_68 = CONCAT44(fVar8,fVar9);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar2 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Points.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar5 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_68;
  local_60[0] = CONCAT44(fVar10,fVar9);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_60) &&
     ((FScriptContainerElement *)local_60 <
      pFVar2 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Points.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar5 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_60[0];
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 < (FScriptContainerElement *)0x15067ec01) &&
     (&FLinearColor::Red < pFVar2 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar6->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar5 + 1;
  ((FLinearColor_u_0 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 < (FScriptContainerElement *)0x15067ec01) &&
     (&FLinearColor::Red < pFVar2 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar5 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar6->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar5 + 1;
  ((FLinearColor_u_0 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  return;
}

// FindBestWidgetInCell @ 142509240

FCellSearchResult * __thiscall
FNavigationMethodProximity::FindBestWidgetInCell
          (FNavigationMethodProximity *this,FCellSearchResult *__return_storage_ptr__,
          FCellSearchInfo *param_1,FSlateRect *param_2,EUINavigation param_3,
          FNavigationReply *param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  int iStackX_c;
  code *local_48 [5];
  undefined8 *local_20;
  
  (__return_storage_ptr__->Widget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->WidgetRect).Left = -1.0;
  (__return_storage_ptr__->WidgetRect).Top = -1.0;
  (__return_storage_ptr__->WidgetRect).Right = -1.0;
  (__return_storage_ptr__->WidgetRect).Bottom = -1.0;
  (__return_storage_ptr__->SearchRect).Left = -1.0;
  (__return_storage_ptr__->SearchRect).Top = -1.0;
  (__return_storage_ptr__->SearchRect).Right = -1.0;
  (__return_storage_ptr__->SearchRect).Bottom = -1.0;
  __return_storage_ptr__->Distance = 3.4028235e+38;
  __return_storage_ptr__->Action = ContinueSearch;
  iVar3 = (param_1->CurrentCellPoint).field0_0x0._s_0.X;
  if ((((-1 < iVar3) && (iVar3 < *(int *)(this->_padding_ + 0xc0))) &&
      (iVar3 = (param_1->CurrentCellPoint).field0_0x0._s_0.Y, -1 < iVar3)) &&
     (iVar3 < *(int *)(this->_padding_ + 0xc4))) {
    local_48[0] = (code *)0x0;
    TVar4 = (param_1->CurrentCellPoint).field0_0x0._s_0;
    local_20 = FMemory::Malloc(0x28,8);
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FNavigationMethodProximity::FindBestWidgetInCell'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_20[1] = this;
    local_20[2] = &param_3;
    local_20[3] = param_1;
    local_20[4] = __return_storage_ptr__;
    if (local_20 + 1 != (undefined8 *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNavigationMethodProximity::FindBestWidgetInCell'::__l2::<lambda_1>,bool,TSharedPtr<SWidget,1>_>
                    ::Call;
    }
    iStackX_c = TVar4.Y;
    FNavigationMethod::ForEachFocusableWidgetsInCell
              ((FNavigationMethod *)this,TVar4.X,iStackX_c,param_4,param_5,
               (TFunction<bool___cdecl(TSharedPtr<SWidget,1>)> *)local_48);
    if ((__return_storage_ptr__->Widget).Object == (SWidget *)0x0) {
      return __return_storage_ptr__;
    }
    pfVar1 = &(__return_storage_ptr__->WidgetRect).Right;
    if (((param_2->Left < *pfVar1 || param_2->Left == *pfVar1) &&
        (fVar2 = (__return_storage_ptr__->WidgetRect).Left,
        fVar2 < param_2->Right || fVar2 == param_2->Right)) &&
       ((pfVar1 = &(__return_storage_ptr__->WidgetRect).Bottom,
        param_2->Top < *pfVar1 || param_2->Top == *pfVar1 &&
        (fVar2 = (__return_storage_ptr__->WidgetRect).Top,
        fVar2 < param_2->Bottom || fVar2 == param_2->Bottom)))) {
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Action = ApplyBoundaryRule;
  return __return_storage_ptr__;
}

// FindFocusableWidgetFromRect @ 1425093c0

/* WARNING: Removing unreachable block (ram,0x000142509679) */
/* WARNING: Removing unreachable block (ram,0x000142509665) */
/* WARNING: Removing unreachable block (ram,0x00014250967b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<SWidget,1> * __thiscall
FNavigationMethodProximity::FindFocusableWidgetFromRect
          (FNavigationMethodProximity *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FSlateRect *param_1,FSlateRect *param_2,EUINavigation param_3,FNavigationReply *param_4,
          int param_5)

{
  int *piVar1;
  FSlateWidgetPersistentState *pFVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  atomic<int> aVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FSharedReferencer<1> FVar15;
  bool bVar16;
  uint uVar17;
  atomic<int> aVar18;
  int iVar19;
  TSharedPtr<SWidget,1> *pTVar20;
  FSharedReferencer<1> FVar21;
  int iVar22;
  FSharedReferencer<1> FVar23;
  SWidget *pSVar24;
  FCellSearchInfo *pFVar25;
  uint uVar26;
  longlong lVar27;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar28;
  float fVar29;
  EUINavigation local_178 [8];
  TArray<FNavigationMethodProximity::FCellSearchInfo,TSizedDefaultAllocator<32>_> local_170;
  TReferenceControllerBase<1> *local_160;
  int local_158;
  FCellSearchResult local_150;
  int local_118;
  SWidget *local_110;
  SWidget *local_108;
  TSharedPtr<SWidget,1> local_100;
  FSlateRect local_e8;
  FSlateRect local_d8;
  FSlateRect local_c8;
  FSlateRect local_b8;
  code *local_a8 [5];
  undefined8 *local_80;
  
  local_158 = 0;
  GetSearchDirectionRadians(this,param_3);
  __libm_sse2_sincosf_();
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  local_118 = (int)ROUND(extraout_XMM0_Db + extraout_XMM0_Db + __real_3f000000) >> 1;
  local_158 = (int)ROUND(extraout_XMM0_Da + extraout_XMM0_Da + __real_3f000000) >> 1;
  PopulateCellsToSearch(this,param_1,param_3,false,&local_170);
  uVar13 = _UNK_15076c668;
  uVar11 = ___xmm_bf800000bf800000bf800000bf800000;
  FVar23.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_110 = (SWidget *)0x0;
  FVar21.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_108 = (SWidget *)0x0;
  local_160 = (TReferenceControllerBase<1> *)0x0;
  iVar22 = local_170.ArrayNum;
  fVar28 = __real_7f7fffff;
  fVar29 = __real_7f7fffff;
  do {
    do {
      if (iVar22 == 0) {
        if (local_110 == (SWidget *)0x0) {
          __return_storage_ptr__->Object = local_108;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               FVar23.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          __return_storage_ptr__->Object = local_110;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               FVar21.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar23.ReferenceController);
          FVar21.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar21.ReferenceController);
        if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      uVar26 = iVar22 - 1;
    } while ((int)uVar26 < 0);
    lVar27 = (longlong)(int)uVar26 * 0x30;
    do {
      uVar17 = 0;
      if ((int)uVar26 < iVar22) {
        uVar17 = ~uVar26 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        pTVar20 = (TSharedPtr<SWidget,1> *)(*pcVar5)();
        return pTVar20;
      }
      uVar14 = _UNK_15076c668;
      uVar12 = ___xmm_bf800000bf800000bf800000bf800000;
      pFVar25 = (FCellSearchInfo *)(local_170.AllocatorInstance.Data + lVar27);
      local_150.Widget.Object = (SWidget *)0x0;
      local_150.Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      local_150.Distance = 3.4028235e+38;
      local_150.Action = ContinueSearch;
      fVar6 = param_2->Left;
      fVar7 = param_2->Top;
      fVar8 = param_2->Right;
      fVar9 = param_2->Bottom;
      ___xmm_bf800000bf800000bf800000bf800000 = (float)uVar11;
      _UNK_15076c664 = SUB84(uVar11,4);
      local_150.WidgetRect.Left = ___xmm_bf800000bf800000bf800000bf800000;
      local_150.WidgetRect.Top = _UNK_15076c664;
      _UNK_15076c668 = (float)uVar13;
      _UNK_15076c66c = SUB84(uVar13,4);
      local_150.WidgetRect.Right = _UNK_15076c668;
      local_150.WidgetRect.Bottom = _UNK_15076c66c;
      local_178[0] = param_3;
      ___xmm_bf800000bf800000bf800000bf800000 = (float)uVar11;
      _UNK_15076c664 = SUB84(uVar11,4);
      local_150.SearchRect.Left = ___xmm_bf800000bf800000bf800000bf800000;
      local_150.SearchRect.Top = _UNK_15076c664;
      _UNK_15076c668 = (float)uVar13;
      _UNK_15076c66c = SUB84(uVar13,4);
      local_150.SearchRect.Right = _UNK_15076c668;
      local_150.SearchRect.Bottom = _UNK_15076c66c;
      iVar22 = (pFVar25->CurrentCellPoint).field0_0x0._s_0.X;
      iVar19 = (pFVar25->CurrentCellPoint).field0_0x0._s_0.Y;
      ___xmm_bf800000bf800000bf800000bf800000 = uVar12;
      _UNK_15076c668 = uVar14;
      if ((((iVar22 < 0) || (*(int *)(this->_padding_ + 0xc0) <= iVar22)) || (iVar19 < 0)) ||
         (*(int *)(this->_padding_ + 0xc4) <= iVar19)) {
        local_150.Distance = 3.4028235e+38;
        local_150.Action = ApplyBoundaryRule;
      }
      else {
        TVar3 = (pFVar25->CurrentCellPoint).field0_0x0._s_0;
        local_a8[0] = (code *)0x0;
        local_80 = (undefined8 *)0x0;
        local_100.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar3;
        local_80 = FMemory::Malloc(0x28,8);
        *local_80 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FNavigationMethodProximity::FindBestWidgetInCell'::`2'::<lambda_1>,0,1>
                     ::_vftable_;
        local_80[1] = this;
        local_80[2] = local_178;
        local_80[3] = pFVar25;
        local_80[4] = &local_150;
        if (local_80 + 1 != (undefined8 *)0x0) {
          local_a8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FNavigationMethodProximity::FindBestWidgetInCell'::__l2::<lambda_1>,bool,TSharedPtr<SWidget,1>_>
                        ::Call;
        }
        FNavigationMethod::ForEachFocusableWidgetsInCell
                  ((FNavigationMethod *)this,TVar3.X,
                   local_100.SharedReferenceCount.ReferenceController._4_4_,param_4,param_5,
                   (TFunction<bool___cdecl(TSharedPtr<SWidget,1>)> *)local_a8);
        if ((local_150.Widget.Object != (SWidget *)0x0) &&
           (((local_150.WidgetRect.Right < fVar6 || (fVar8 < local_150.WidgetRect.Left)) ||
            ((local_150.WidgetRect.Bottom < fVar7 || (fVar9 < local_150.WidgetRect.Top)))))) {
          local_150.Action = ApplyBoundaryRule;
        }
      }
      (pFVar25->CurrentCellPoint).field0_0x0._s_0.X =
           (pFVar25->CurrentCellPoint).field0_0x0._s_0.X + local_118;
      piVar1 = &(pFVar25->CurrentCellPoint).field0_0x0._s_0.Y;
      *piVar1 = *piVar1 + local_158;
      pSVar24 = local_150.Widget.Object;
      while (pSVar24 != (SWidget *)0x0) {
        if (pSVar24->EnabledStateAttribute ==
            (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
          TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
          ::Emplace<TSharedPtr<SWidget,1>_const_&>
                    ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                      *)&this->_padding_,&local_100,(bool *)&local_150);
          local_c8.Left = param_2->Left;
          local_c8.Top = param_2->Top;
          local_c8.Right = param_2->Right;
          local_c8.Bottom = param_2->Bottom;
          local_b8.Left = param_1->Left;
          local_b8.Top = param_1->Top;
          local_b8.Right = param_1->Right;
          local_b8.Bottom = param_1->Bottom;
          FindFocusableWidgetFromRect
                    (this,__return_storage_ptr__,&local_b8,&local_c8,param_3,param_4,param_5);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_150.Widget.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_160);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar21.ReferenceController);
          if (local_170.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_170.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
        pTVar4 = (pSVar24->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
        pFVar2 = &pSVar24->PersistentState;
        pSVar24 = (SWidget *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          aVar10 = pTVar4->SharedReferenceCount;
          do {
            if (aVar10 == (atomic<int>)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              goto LAB_1425096ee;
            }
            LOCK();
            aVar18 = pTVar4->SharedReferenceCount;
            bVar16 = aVar10 == aVar18;
            if (bVar16) {
              pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
              aVar18 = aVar10;
            }
            UNLOCK();
            aVar10 = aVar18;
          } while (!bVar16);
          pSVar24 = (pFVar2->PaintParent).Object;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
LAB_1425096ee:
      if (local_150.Action == EndSearch) {
        uVar17 = 0;
        if ((int)uVar26 < local_170.ArrayNum) {
          uVar17 = ~uVar26 >> 0x1f;
        }
        if (uVar17 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar5 = (code *)swi(3);
            pTVar20 = (TSharedPtr<SWidget,1> *)(*pcVar5)();
            return pTVar20;
          }
        }
        iVar19 = (local_170.ArrayNum - uVar26) + -1;
        iVar22 = local_170.ArrayNum;
        if (iVar19 != 0) {
          memmove(local_170.AllocatorInstance.Data + (ulonglong)uVar26 * 0x30,
                  local_170.AllocatorInstance.Data + (ulonglong)uVar26 * 0x30 + 0x30,
                  (longlong)iVar19 * 0x30);
          iVar22 = local_170.ArrayNum;
        }
        local_170.ArrayNum = iVar22 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&local_170.AllocatorInstance,iVar22 + -1,&local_170.ArrayMax);
LAB_1425098c4:
      }
      else if (local_150.Action == ApplyBoundaryRule) {
        uVar17 = 0;
        if ((int)uVar26 < local_170.ArrayNum) {
          uVar17 = ~uVar26 >> 0x1f;
        }
        if (uVar17 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar5 = (code *)swi(3);
            pTVar20 = (TSharedPtr<SWidget,1> *)(*pcVar5)();
            return pTVar20;
          }
        }
        iVar19 = (local_170.ArrayNum - uVar26) + -1;
        iVar22 = local_170.ArrayNum;
        if (iVar19 != 0) {
          memmove(local_170.AllocatorInstance.Data + (ulonglong)uVar26 * 0x30,
                  local_170.AllocatorInstance.Data + (ulonglong)uVar26 * 0x30 + 0x30,
                  (longlong)iVar19 * 0x30);
          iVar22 = local_170.ArrayNum;
        }
        local_170.ArrayNum = iVar22 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&local_170.AllocatorInstance,iVar22 + -1,&local_170.ArrayMax);
        local_e8.Left = param_2->Left;
        local_e8.Top = param_2->Top;
        local_e8.Right = param_2->Right;
        local_e8.Bottom = param_2->Bottom;
        local_d8.Left = param_1->Left;
        local_d8.Top = param_1->Top;
        local_d8.Right = param_1->Right;
        local_d8.Bottom = param_1->Bottom;
        HandleBoundaryRule(this,&local_d8,&local_e8,param_3,param_4,&local_150,pFVar25,&local_170);
        goto LAB_1425098c4;
      }
      FVar15.ReferenceController = local_150.Widget.SharedReferenceCount.ReferenceController;
      pTVar4 = local_160;
      FVar23.ReferenceController = local_160;
      if (local_150.Widget.Object != (SWidget *)0x0) {
        if ((pFVar25->bWrapped) || (local_150.Action == ApplyBoundaryRule)) {
          if (local_150.Distance < fVar29) {
            if (local_150.Widget.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_150.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_150.Widget.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            local_160 = local_150.Widget.SharedReferenceCount.ReferenceController;
            local_108 = local_150.Widget.Object;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            FVar23.ReferenceController = FVar15.ReferenceController;
            fVar29 = local_150.Distance;
          }
        }
        else if (local_150.Distance < fVar28) {
          if (local_150.Widget.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_150.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_150.Widget.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_110 = local_150.Widget.Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar21.ReferenceController);
          FVar23.ReferenceController = local_160;
          FVar21.ReferenceController = FVar15.ReferenceController;
          fVar28 = local_150.Distance;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_150.Widget.SharedReferenceCount.ReferenceController);
      lVar27 = lVar27 + -0x30;
      uVar26 = uVar26 - 1;
      iVar22 = local_170.ArrayNum;
    } while (-1 < (int)uVar26);
  } while( true );
}

// GetSearchDirection @ 14250f280

TVector2<float> __thiscall
FNavigationMethodProximity::GetSearchDirection
          (FNavigationMethodProximity *this,EUINavigation param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector2<float> TVar3;
  undefined7 in_register_00000011;
  TVector2<float>_u_0 TVar4;
  char in_R8B;
  
  TVar4._1_7_ = in_register_00000011;
  TVar4._0_1_ = param_1;
  if (in_R8B == '\0') {
    *(undefined4 *)TVar4 = 0xbf800000;
    *(undefined4 *)((longlong)TVar4 + 4) = 0;
    return (TVector2<float>)TVar4;
  }
  if (in_R8B == '\x01') {
    *(undefined8 *)TVar4 = 0x3f800000;
    return (TVector2<float>)TVar4;
  }
  if (in_R8B == '\x02') {
    *(undefined4 *)TVar4 = 0;
    *(undefined4 *)((longlong)TVar4 + 4) = 0xbf800000;
    return (TVector2<float>)TVar4;
  }
  if (in_R8B != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethodProximity.cpp"
                       ,0x177,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
      return (TVector2<float>)TVar3.field0_0x0;
    }
    *(undefined8 *)TVar4 = 0;
    return (TVector2<float>)TVar4;
  }
  *(undefined4 *)TVar4 = 0;
  *(undefined4 *)((longlong)TVar4 + 4) = 0x3f800000;
  return (TVector2<float>)TVar4;
}

// GetSearchDirectionRadians @ 14250f330

float __thiscall
FNavigationMethodProximity::GetSearchDirectionRadians
          (FNavigationMethodProximity *this,EUINavigation param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == Left) {
    return __real_40490fdb;
  }
  if (param_1 != Right) {
    if (param_1 == Up) {
      return __real_bfc90fdb;
    }
    if (param_1 == Down) {
      return __real_3fc90fdb;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethodProximity.cpp"
                       ,0x1a8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return 0.0;
}

// GetSearchPoints @ 14250f3b0

void __thiscall
FNavigationMethodProximity::GetSearchPoints
          (FNavigationMethodProximity *this,EUINavigation param_1,FSlateRect *param_2,
          TVector2<float> *param_3,TVector2<float> *param_4)

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float> TVar5;
  float fVar6;
  float fVar7;
  
  if (!GNavigationSearchFromCorners) {
    TVar5 = GetSearchDirection(this,0xd8);
    fVar7 = param_2->Bottom - param_2->Top;
    fVar6 = param_2->Right - param_2->Left;
    TVar1._s_0.Y = fVar7 * __real_3f000000 + param_2->Top +
                   fVar7 * __real_3f000000 * *(float *)((longlong)TVar5.field0_0x0 + 4);
    TVar1._s_0.X = fVar6 * __real_3f000000 + param_2->Left +
                   fVar6 * __real_3f000000 * *(float *)TVar5.field0_0x0;
    param_3->field0_0x0 = TVar1;
    param_4->field0_0x0 = TVar1;
    return;
  }
  if (param_1 == Left) {
    fVar6 = param_2->Top;
    *(float *)&param_3->field0_0x0 = param_2->Left;
    *(float *)((longlong)&param_3->field0_0x0 + 4) = fVar6;
    fVar6 = param_2->Left;
  }
  else {
    if (param_1 == Right) {
      fVar6 = param_2->Right;
      fVar7 = param_2->Top;
    }
    else {
      if (param_1 == Up) {
        fVar6 = param_2->Top;
        *(float *)&param_4->field0_0x0 = param_2->Left;
        *(float *)((longlong)&param_4->field0_0x0 + 4) = fVar6;
        TVar3._s_0.Y = param_2->Top;
        TVar3._s_0.X = param_2->Right;
        param_4->field0_0x0 = TVar3;
        return;
      }
      if (param_1 != Down) {
        return;
      }
      fVar6 = param_2->Left;
      fVar7 = param_2->Bottom;
    }
    TVar2._s_0.Y = fVar7;
    TVar2._s_0.X = fVar6;
    param_3->field0_0x0 = TVar2;
    fVar6 = param_2->Right;
  }
  TVar4._s_0.Y = param_2->Bottom;
  TVar4._s_0.X = fVar6;
  param_4->field0_0x0 = TVar4;
  return;
}

// HandleBoundaryRule @ 14250fed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNavigationMethodProximity::HandleBoundaryRule
          (FNavigationMethodProximity *this,FSlateRect *param_1,FSlateRect *param_2,
          EUINavigation param_3,FNavigationReply *param_4,FCellSearchResult *param_5,
          FCellSearchInfo *param_6,
          TArray<FNavigationMethodProximity::FCellSearchInfo,TSizedDefaultAllocator<32>_> *param_7)

{
  EUINavigationRule EVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FSlateRect *pFVar6;
  longlong *plVar7;
  float fVar8;
  FSlateRect local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [64];
  
  EVar1 = param_4->BoundaryRule;
  if (EVar1 == Explicit) {
    if (!GNavigationIgnoreCustomRules) {
      TSharedPtr<SWidget,1>::operator=(&param_5->Widget,&param_4->FocusRecipient);
    }
    goto LAB_142510180;
  }
  if (EVar1 != Wrap) {
    if (EVar1 == Stop) {
      local_48._0_8_ = (SWidget *)0x0;
      local_48._8_8_ = (TReferenceControllerBase<1> *)0x0;
      if (param_5 != (FCellSearchResult *)local_48) {
        (param_5->Widget).Object = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_5->Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_48 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_48._8_8_);
    }
    else if (((EVar1 == Custom) || (EVar1 == CustomBoundary)) && (!GNavigationIgnoreCustomRules)) {
      bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_4->FocusDelegate);
      if (bVar5) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_4->FocusDelegate
                   ,(FReadAccessScope *)(local_48 + 0x20));
        if (*(int *)&(param_4->FocusDelegate).field_0x10 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)&(param_4->FocusDelegate).field_0x8;
        }
        (**(code **)(*plVar7 + 0x60))(plVar7,local_58,param_3);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_48 + 0x20));
        if (param_5 != (FCellSearchResult *)local_58) {
          (param_5->Widget).Object = (SWidget *)local_58._0_8_;
          local_58._0_8_ = (SWidget *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(param_5->Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_58 + 8))
          ;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_58._8_8_);
      }
    }
    goto LAB_142510180;
  }
  if (param_6->bWrapped) goto LAB_142510180;
  if (param_3 == Left) {
    local_48._16_4_ = param_1->Left;
    local_48._20_4_ = param_1->Top;
    local_48._24_4_ = param_1->Right;
    local_48._28_4_ = param_1->Bottom;
    local_68.Left = param_2->Right;
    local_68.Right = local_68.Left + ((float)local_48._24_4_ - (float)local_48._16_4_);
LAB_142510121:
    local_68.Bottom = (float)local_48._28_4_;
    local_68.Top = (float)local_48._20_4_;
  }
  else {
    if (param_3 == Right) {
      local_48._16_4_ = param_1->Left;
      local_48._20_4_ = param_1->Top;
      local_48._24_4_ = param_1->Right;
      local_48._28_4_ = param_1->Bottom;
      local_68.Right = param_2->Left;
      local_68.Left = local_68.Right - ((float)local_48._24_4_ - (float)local_48._16_4_);
      goto LAB_142510121;
    }
    if (param_3 == Up) {
      local_48._16_4_ = param_1->Left;
      local_48._20_4_ = param_1->Top;
      local_48._24_4_ = param_1->Right;
      local_48._28_4_ = param_1->Bottom;
      local_68.Top = param_2->Bottom;
      local_68.Left = (float)local_48._16_4_;
      local_68.Bottom = param_2->Bottom + ((float)local_48._28_4_ - (float)local_48._20_4_);
      local_68.Right = (float)local_48._24_4_;
    }
    else if (param_3 == Down) {
      local_48._16_4_ = param_1->Left;
      local_48._20_4_ = param_1->Top;
      local_48._24_4_ = param_1->Right;
      local_48._28_4_ = param_1->Bottom;
      local_68.Top = param_2->Top - ((float)local_48._28_4_ - (float)local_48._20_4_);
      local_68.Left = (float)local_48._16_4_;
      local_68.Bottom = param_2->Top;
      local_68.Right = (float)local_48._24_4_;
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethodProximity.cpp"
                         ,0x1e4,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_68.Left = ___xmm_bf800000bf800000bf800000bf800000;
      local_68.Top = _UNK_15076c664;
      local_68.Right = _UNK_15076c668;
      local_68.Bottom = _UNK_15076c66c;
    }
  }
  PopulateCellsToSearch(this,&local_68,param_3,true,param_7);
  param_6->bWrapped = true;
  TSharedPtr<SWidget,1>::operator=(&param_5->Widget,(FNullTag *)0x0);
LAB_142510180:
  fVar8 = __real_7f7fffff;
  if ((param_5->Widget).Object != (SWidget *)0x0) {
    pFVar6 = FHittestGrid::GetWidgetRenderBoundingRect
                       ((FHittestGrid *)this->_padding_,(FSlateRect *)(local_48 + 0x10),
                        &param_5->Widget);
    fVar8 = pFVar6->Top;
    fVar3 = pFVar6->Right;
    fVar4 = pFVar6->Bottom;
    (param_5->WidgetRect).Left = pFVar6->Left;
    (param_5->WidgetRect).Top = fVar8;
    (param_5->WidgetRect).Right = fVar3;
    (param_5->WidgetRect).Bottom = fVar4;
    fVar8 = CalculateDistance(this,param_3,&param_5->SearchRect,&param_5->WidgetRect);
  }
  param_5->Distance = fVar8;
  return;
}

// IsOutsideNavigationEdge @ 142511310

bool __thiscall
FNavigationMethodProximity::IsOutsideNavigationEdge
          (FNavigationMethodProximity *this,EUINavigation param_1,FSlateRect *param_2,
          FSlateRect *param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == Left) {
    return param_3->Right - this->OverlapThreshold < param_2->Left;
  }
  if (param_1 == Right) {
    fVar3 = this->OverlapThreshold + param_3->Left;
    return param_2->Right <= fVar3 && fVar3 != param_2->Right;
  }
  if (param_1 == Up) {
    return param_3->Bottom - this->OverlapThreshold < param_2->Top;
  }
  if (param_1 != Down) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethodProximity.cpp"
                       ,0x1ba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
    return false;
  }
  fVar3 = this->OverlapThreshold + param_3->Top;
  return param_2->Bottom <= fVar3 && fVar3 != param_2->Bottom;
}

// PopulateCellsToSearch @ 1425183e0

void __thiscall
FNavigationMethodProximity::PopulateCellsToSearch
          (FNavigationMethodProximity *this,FSlateRect *param_1,EUINavigation param_2,bool param_3,
          TArray<FNavigationMethodProximity::FCellSearchInfo,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  TArray<FNavigationMethodProximity::FCellSearchInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  TIntPoint<int> TVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  FCellSearchInfo *pFVar14;
  FCellSearchInfo *pFVar15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  FNavigationMethodProximity *local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  int iStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  byte bStack_160;
  undefined7 uStack_15f;
  FNavigationMethodProximity *local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int iStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  byte bStack_130;
  undefined7 uStack_12f;
  FNavigationMethodProximity *local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int iStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  byte bStack_100;
  undefined7 uStack_ff;
  TVector2<float> local_f8;
  TVector2<float> local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [168];
  
  pTVar6 = param_4;
  GetSearchDirectionRadians(this,param_2);
  GetSearchPoints(this,param_2,param_1,&local_f8,&local_f0);
  TVar10 = FNavigationMethod::GetCellCoordinate((FNavigationMethod *)this,(TVector2<float>)local_e8)
  ;
  fVar21 = (float)(int)*(undefined8 *)TVar10.field0_0x0;
  fVar22 = (float)(int)((ulonglong)*(undefined8 *)TVar10.field0_0x0 >> 0x20);
  TVar10 = FNavigationMethod::GetCellCoordinate((FNavigationMethod *)this,(TVector2<float>)local_e0)
  ;
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  fVar23 = (float)(int)*(undefined8 *)TVar10.field0_0x0;
  fVar19 = (float)(int)((ulonglong)*(undefined8 *)TVar10.field0_0x0 >> 0x20);
  fVar18 = fVar23 - fVar21;
  fVar20 = fVar19 - fVar22;
  fVar16 = fVar20 * fVar20 + fVar18 * fVar18;
  if (fVar16 <= __real_322bcc77) {
    fVar18 = 0.0;
    fVar20 = 0.0;
  }
  else {
    fVar16 = __real_3f800000 / SQRT(fVar16);
    fVar18 = fVar18 * fVar16;
    fVar20 = fVar20 * fVar16;
  }
  if (fVar22 < fVar20 + fVar22) {
    fVar16 = fVar22;
    do {
      if (fVar21 < fVar18 + fVar21) {
        iVar12 = (int)ROUND(fVar16 + fVar16 + fVar5) >> 1;
        fVar17 = fVar21;
        do {
          uStack_180._0_4_ = param_1->Left;
          uStack_180._4_4_ = param_1->Top;
          uStack_178._0_4_ = param_1->Right;
          uStack_178._4_4_ = param_1->Bottom;
          pFVar1 = (pTVar6->AllocatorInstance).Data;
          iStack_170 = (int)ROUND(fVar17 + fVar17 + fVar5) >> 1;
          bStack_160 = bStack_160 & 0xfe | param_3;
          local_188 = this;
          iStack_16c = iVar12;
          local_168 = iStack_170;
          iStack_164 = iVar12;
          if (((pFVar1 <= (FScriptContainerElement *)&local_188) &&
              ((FScriptContainerElement *)&local_188 < pFVar1 + (longlong)pTVar6->ArrayMax * 0x30))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar9 = pTVar6->ArrayNum;
          if (iVar9 == pTVar6->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
          }
          lVar11 = (longlong)iVar9;
          pTVar6->ArrayNum = iVar9 + 1;
          fVar17 = fVar17 + fVar4;
          pFVar1 = (pTVar6->AllocatorInstance).Data;
          *(FNavigationMethodProximity **)(pFVar1 + lVar11 * 0x30) = local_188;
          *(undefined8 *)(pFVar1 + lVar11 * 0x30 + 8) = uStack_180;
          *(undefined8 *)(pFVar1 + lVar11 * 0x30 + 0x10) = uStack_178;
          *(ulonglong *)(pFVar1 + lVar11 * 0x30 + 0x10 + 8) = CONCAT44(iStack_16c,iStack_170);
          *(ulonglong *)(pFVar1 + lVar11 * 0x30 + 0x20) = CONCAT44(iStack_164,local_168);
          *(ulonglong *)(pFVar1 + lVar11 * 0x30 + 0x20 + 8) = CONCAT71(uStack_15f,bStack_160);
        } while (fVar17 < fVar18 + fVar21);
      }
      fVar16 = fVar16 + fVar4;
    } while (fVar16 < fVar20 + fVar22);
  }
  __libm_sse2_sincosf4_();
  bVar7 = true;
  do {
    if (!bVar7) break;
    if ((this->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("HittestGrid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethod.cpp"
                           ,0x29,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar11 = this->_padding_;
    if ((((int)fVar21 < 0) || (*(int *)(lVar11 + 0xc0) <= (int)fVar21)) ||
       (((int)fVar22 < 0 || (*(int *)(lVar11 + 0xc4) <= (int)fVar22)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((lVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("HittestGrid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethod.cpp"
                           ,0x29,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((((int)fVar23 < 0) || (*(int *)(this->_padding_ + 0xc0) <= (int)fVar23)) ||
        ((int)fVar19 < 0)) || (*(int *)(this->_padding_ + 0xc4) <= (int)fVar19)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar3) {
      uStack_150._0_4_ = param_1->Left;
      uStack_150._4_4_ = param_1->Top;
      uStack_148._0_4_ = param_1->Right;
      uStack_148._4_4_ = param_1->Bottom;
      pFVar1 = (pTVar6->AllocatorInstance).Data;
      iStack_140 = (int)ROUND(fVar21 + fVar21 + fVar5) >> 1;
      iStack_13c = (int)ROUND(fVar22 + fVar22 + fVar5) >> 1;
      bStack_130 = bStack_130 & 0xfe | param_3;
      local_158 = this;
      local_138 = iStack_140;
      iStack_134 = iStack_13c;
      if (((pFVar1 <= (FScriptContainerElement *)&local_158) &&
          ((FScriptContainerElement *)&local_158 < pFVar1 + (longlong)pTVar6->ArrayMax * 0x30)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar12 = pTVar6->ArrayNum;
      if (iVar12 == pTVar6->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
      }
      lVar11 = (longlong)iVar12;
      pTVar6->ArrayNum = iVar12 + 1;
      fVar21 = fVar21 + extraout_XMM0_Db;
      fVar22 = fVar22 + extraout_XMM0_Da;
      pFVar1 = (pTVar6->AllocatorInstance).Data;
      *(FNavigationMethodProximity **)(pFVar1 + lVar11 * 0x30) = local_158;
      *(undefined8 *)(pFVar1 + lVar11 * 0x30 + 8) = uStack_150;
      *(undefined8 *)(pFVar1 + lVar11 * 0x30 + 0x10) = uStack_148;
      *(ulonglong *)(pFVar1 + lVar11 * 0x30 + 0x10 + 8) = CONCAT44(iStack_13c,iStack_140);
      *(ulonglong *)(pFVar1 + lVar11 * 0x30 + 0x20) = CONCAT44(iStack_134,local_138);
      *(ulonglong *)(pFVar1 + lVar11 * 0x30 + 0x20 + 8) = CONCAT71(uStack_12f,bStack_130);
    }
    piVar13 = &pTVar6->ArrayMax;
    if (bVar7) {
      uStack_120._0_4_ = param_1->Left;
      uStack_120._4_4_ = param_1->Top;
      uStack_118._0_4_ = param_1->Right;
      uStack_118._4_4_ = param_1->Bottom;
      pFVar1 = (pTVar6->AllocatorInstance).Data;
      iStack_110 = (int)ROUND(fVar23 + fVar23 + fVar5) >> 1;
      iStack_10c = (int)ROUND(fVar19 + fVar19 + fVar5) >> 1;
      bStack_100 = bStack_100 & 0xfe | param_3;
      local_128 = this;
      local_108 = iStack_110;
      iStack_104 = iStack_10c;
      if (((pFVar1 <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 < pFVar1 + (longlong)*piVar13 * 0x30)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar12 = pTVar6->ArrayNum;
      if (iVar12 == *piVar13) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar6->AllocatorInstance,piVar13);
      }
      lVar11 = (longlong)iVar12;
      pTVar6->ArrayNum = iVar12 + 1;
      fVar23 = fVar23 + extraout_XMM0_Dd;
      fVar19 = fVar19 + extraout_XMM0_Dc;
      pFVar1 = (pTVar6->AllocatorInstance).Data;
      *(FNavigationMethodProximity **)(pFVar1 + lVar11 * 0x30) = local_128;
      *(undefined8 *)(pFVar1 + lVar11 * 0x30 + 8) = uStack_120;
      *(undefined8 *)(pFVar1 + lVar11 * 0x30 + 0x10) = uStack_118;
      *(ulonglong *)(pFVar1 + lVar11 * 0x30 + 0x10 + 8) = CONCAT44(iStack_10c,iStack_110);
      *(ulonglong *)(pFVar1 + lVar11 * 0x30 + 0x20) = CONCAT44(iStack_104,local_108);
      *(ulonglong *)(pFVar1 + lVar11 * 0x30 + 0x20 + 8) = CONCAT71(uStack_ff,bStack_100);
    }
  } while (bVar3);
  iVar12 = pTVar6->ArrayNum;
  pFVar15 = (FCellSearchInfo *)(pTVar6->AllocatorInstance).Data;
  pFVar14 = pFVar15 + iVar12;
  while( true ) {
    if (pTVar6->ArrayNum != iVar12) {
      `TCheckedPointerIterator<FNavigationMethodProximity::FCellSearchInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&param_4);
    }
    if (pFVar15 == pFVar14) break;
    DebugSearchCell(this,pFVar15);
    pFVar15 = pFVar15 + 1;
  }
  return;
}

// PrepareDrawDebugData @ 142518ad0

void __thiscall
FNavigationMethodProximity::PrepareDrawDebugData
          (FNavigationMethodProximity *this,FSlateRect *param_1,EUINavigation param_2)

{
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TVector2<float>_u_0 *pTVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  TVector2<float>_u_0 local_d8;
  TVector2<float>_u_0 local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [11];
  
  pTVar1 = &(this->DrawDebugData).Points;
  local_b8._0_4_ = param_1->Left;
  local_b8._4_4_ = param_1->Top;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
     ((FScriptContainerElement *)&local_b8 <
      pFVar3 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_b8;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_b0 = CONCAT44(param_1->Top,param_1->Right);
  if ((pFVar3 <= (FScriptContainerElement *)&local_b0) &&
     ((FScriptContainerElement *)&local_b0 <
      pFVar3 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  pTVar2 = &(this->DrawDebugData).Colors;
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_b0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Green.field0_0x0 + 1)) &&
     (&FLinearColor::Green < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Green.field0_0x0 + 1)) &&
     (&FLinearColor::Green < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_a8 = CONCAT44(param_1->Top,param_1->Right);
  if ((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 <
      pFVar3 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_a8;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_a0._0_4_ = param_1->Right;
  local_a0._4_4_ = param_1->Bottom;
  if ((pFVar3 <= (FScriptContainerElement *)&local_a0) &&
     ((FScriptContainerElement *)&local_a0 <
      pFVar3 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_a0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Green.field0_0x0 + 1)) &&
     (&FLinearColor::Green < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Green.field0_0x0 + 1)) &&
     (&FLinearColor::Green < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_98._0_4_ = param_1->Right;
  local_98._4_4_ = param_1->Bottom;
  if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 <
      pFVar3 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_98;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_90 = CONCAT44(param_1->Bottom,param_1->Left);
  if ((pFVar3 <= (FScriptContainerElement *)&local_90) &&
     ((FScriptContainerElement *)&local_90 <
      pFVar3 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Green.field0_0x0 + 1)) &&
     (&FLinearColor::Green < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Green.field0_0x0 + 1)) &&
     (&FLinearColor::Green < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_88._0_4_ = param_1->Left;
  local_88._4_4_ = param_1->Top;
  if ((pFVar3 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar3 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_88;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_80[0] = CONCAT44(param_1->Bottom,param_1->Left);
  if ((pFVar3 <= (FScriptContainerElement *)local_80) &&
     ((FScriptContainerElement *)local_80 <
      pFVar3 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_80[0];
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Green.field0_0x0 + 1)) &&
     (&FLinearColor::Green < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Green.field0_0x0 + 1)) &&
     (&FLinearColor::Green < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  GetSearchPoints(this,param_2,param_1,(TVector2<float> *)&local_d8._s_0,
                  (TVector2<float> *)&local_d0._s_0);
  GetSearchDirectionRadians(this,param_2);
  __libm_sse2_sincosf4_();
  pTVar4 = (TVector2<float>_u_0 *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar4 <= &local_d8) && (&local_d8 < pTVar4 + (this->DrawDebugData).Points.ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  fVar6 = __real_43fa0000;
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       CONCAT44(local_d8._s_0.Y,local_d8._s_0.X);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_c8 = extraout_XMM0_Db * fVar6 + local_d8._s_0.X;
  fStack_c4 = extraout_XMM0_Da * fVar6 + local_d8._s_0.Y;
  if ((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
     ((FScriptContainerElement *)&local_c8 <
      pFVar3 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       CONCAT44(fStack_c4,local_c8);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Blue.field0_0x0 + 1)) &&
     (&FLinearColor::Blue < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Blue.field0_0x0 + 1)) &&
     (&FLinearColor::Blue < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  pTVar4 = (TVector2<float>_u_0 *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar4 <= &local_d0) && (&local_d0 < pTVar4 + (this->DrawDebugData).Points.ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       CONCAT44(local_d0._s_0.Y,local_d0._s_0.X);
  local_c0 = extraout_XMM0_Dd * fVar6 + local_d0._s_0.X;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  fStack_bc = extraout_XMM0_Dc * fVar6 + local_d0._s_0.Y;
  if ((pFVar3 <= (FScriptContainerElement *)&local_c0) &&
     ((FScriptContainerElement *)&local_c0 <
      pFVar3 + (longlong)(this->DrawDebugData).Points.ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Points.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Points.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->DrawDebugData).Points.ArrayMax);
  }
  (this->DrawDebugData).Points.ArrayNum = iVar8 + 1;
  *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       CONCAT44(fStack_bc,local_c0);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Blue.field0_0x0 + 1)) &&
     (&FLinearColor::Blue < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 < (FScriptContainerElement *)((longlong)&FLinearColor::Blue.field0_0x0 + 1)) &&
     (&FLinearColor::Blue < pFVar3 + (longlong)(this->DrawDebugData).Colors.ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DrawDebugData).Colors.ArrayNum;
  if (iVar8 == (this->DrawDebugData).Colors.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,&(this->DrawDebugData).Colors.ArrayMax);
  }
  (this->DrawDebugData).Colors.ArrayNum = iVar8 + 1;
  ((FLinearColor_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  return;
}

// WrapRectWithinBoundary @ 142524320

FSlateRect * __thiscall
FNavigationMethodProximity::WrapRectWithinBoundary
          (FNavigationMethodProximity *this,FSlateRect *__return_storage_ptr__,EUINavigation param_1
          ,FSlateRect *param_2,FSlateRect *param_3)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  FSlateRect *pFVar8;
  
  if (param_1 == Left) {
    fVar3 = param_3->Left;
    fVar4 = param_3->Top;
    fVar5 = param_3->Right;
    fVar6 = param_3->Bottom;
    fVar1 = param_2->Right;
    __return_storage_ptr__->Left = fVar1;
    __return_storage_ptr__->Top = fVar4;
    __return_storage_ptr__->Right = fVar1 + (fVar5 - fVar3);
    __return_storage_ptr__->Bottom = fVar6;
    return __return_storage_ptr__;
  }
  if (param_1 == Right) {
    fVar3 = param_3->Top;
    fVar4 = param_3->Bottom;
    fVar1 = param_2->Left;
    __return_storage_ptr__->Left = fVar1 - (param_3->Right - param_3->Left);
    __return_storage_ptr__->Top = fVar3;
    __return_storage_ptr__->Right = fVar1;
    __return_storage_ptr__->Bottom = fVar4;
    return __return_storage_ptr__;
  }
  if (param_1 == Up) {
    fVar3 = param_3->Top;
    fVar4 = param_3->Right;
    fVar5 = param_3->Bottom;
    fVar1 = param_2->Bottom;
    __return_storage_ptr__->Left = param_3->Left;
    __return_storage_ptr__->Top = fVar1;
    __return_storage_ptr__->Right = fVar4;
    __return_storage_ptr__->Bottom = fVar1 + (fVar5 - fVar3);
    return __return_storage_ptr__;
  }
  if (param_1 != Down) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethodProximity.cpp"
                       ,0x1e4,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FSlateRect *)(*pcVar2)();
      return pFVar8;
    }
    __return_storage_ptr__->Left = -1.0;
    __return_storage_ptr__->Top = -1.0;
    __return_storage_ptr__->Right = -1.0;
    __return_storage_ptr__->Bottom = -1.0;
    return __return_storage_ptr__;
  }
  fVar3 = param_3->Top;
  fVar4 = param_3->Right;
  fVar5 = param_3->Bottom;
  fVar1 = param_2->Top;
  __return_storage_ptr__->Left = param_3->Left;
  __return_storage_ptr__->Top = fVar1 - (fVar5 - fVar3);
  __return_storage_ptr__->Right = fVar4;
  __return_storage_ptr__->Bottom = fVar1;
  return __return_storage_ptr__;
}

