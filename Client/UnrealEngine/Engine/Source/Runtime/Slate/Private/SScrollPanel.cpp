// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// ComputeDesiredSize @ 1428e1820

TVector2<double> * __thiscall
SScrollPanel::ComputeDesiredSize
          (SScrollPanel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  EVisibility EVar5;
  bool bVar6;
  TVector2<double> *pTVar7;
  FDeprecateSlateVector2D FVar8;
  FGeometry *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  float local_res8;
  float fStackX_c;
  
  uVar11 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  iVar13 = (this->Children).Children.ArrayNum;
  if (0 < iVar13) {
    lVar12 = 0;
    EVar5 = EVisibility::Collapsed;
    do {
      uVar10 = 0;
      if ((int)uVar11 < iVar13) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar5 = EVisibility::Collapsed, bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVector2<double> *)(*pcVar3)();
        return pTVar7;
      }
      lVar2 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar12);
      if ((TEnumAsByte<EVisibility::Private>)(*(SWidget **)(lVar2 + 0x10))->VisibilityAttribute !=
          EVar5.Value.Value) {
        FVar8 = SWidget::GetDesiredSize(*(SWidget **)(lVar2 + 0x10));
        fVar1 = *(float *)((longlong)FVar8 + 4);
        dVar4 = (double)(*(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x28)) +
                (double)*(float *)FVar8;
        if (this->Orientation == Orient_Vertical) {
          dVar14 = (__return_storage_ptr__->field0_0x0)._s_0.X;
          if (dVar4 <= dVar14) {
            dVar4 = dVar14;
          }
          (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
          dVar14 = (double)(*(float *)(lVar2 + 0x34) + *(float *)(lVar2 + 0x2c)) + (double)fVar1 +
                   (__return_storage_ptr__->field0_0x0)._s_0.Y;
        }
        else {
          (__return_storage_ptr__->field0_0x0)._s_0.X =
               dVar4 + (__return_storage_ptr__->field0_0x0)._s_0.X;
          dVar14 = (double)(*(float *)(lVar2 + 0x34) + *(float *)(lVar2 + 0x2c)) + (double)fVar1;
          dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
          if (dVar14 <= dVar4) {
            dVar14 = dVar4;
          }
        }
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar14;
        EVar5 = EVisibility::Collapsed;
      }
      iVar13 = (this->Children).Children.ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar11 < iVar13);
  }
  if (this->Orientation == Orient_Vertical) {
    pFVar9 = SWidget::GetTickSpaceGeometry((SWidget *)this);
    fStackX_c = SUB84(pFVar9->Size,4);
  }
  else {
    pFVar9 = SWidget::GetTickSpaceGeometry((SWidget *)this);
    local_res8 = SUB84(pFVar9->Size,0);
    fStackX_c = local_res8;
  }
  pTVar7 = __return_storage_ptr__;
  if (this->Orientation == Orient_Vertical) {
    pTVar7 = (TVector2<double> *)((longlong)&__return_storage_ptr__->field0_0x0 + 8);
  }
  if (this->BackPadScrolling == false) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = (double)fStackX_c;
  }
  dVar14 = (double)fStackX_c;
  dVar4 = dVar4 + (pTVar7->field0_0x0)._s_0.X;
  (pTVar7->field0_0x0)._s_0.X = dVar4;
  if (this->FrontPadScrolling == false) {
    dVar14 = 0.0;
  }
  (pTVar7->field0_0x0)._s_0.X = dVar14 + dVar4;
  return __return_storage_ptr__;
}

// Construct @ 142903ce0

void __thiscall
SScrollPanel::Construct
          (SScrollPanel *this,FArguments *param_1,
          TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_18;
  
  this->PhysicalOffset = 0.0;
  local_18.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18.ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  TPanelChildren<SScrollBox::FSlot>::AddSlots(&this->Children,&local_18);
  this->Orientation = param_1->_Orientation;
  this->BackPadScrolling = param_1->_BackPadScrolling;
  this->FrontPadScrolling = param_1->_FrontPadScrolling;
  this->bAllowContentToShrink = param_1->_AllowContentToShrink;
  DestructItems<SScrollBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetChildren @ 14293e560

FChildren * __thiscall SScrollPanel::GetChildren(SScrollPanel *this)

{
  return (FChildren *)&this->Children;
}

// OnArrangeChildren @ 142960950

void __thiscall
SScrollPanel::OnArrangeChildren(SScrollPanel *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  float local_res8;
  float fStackX_c;
  
  if (this->Orientation == Orient_Vertical) {
    fStackX_c = SUB84(param_1->Size,4);
  }
  else {
    local_res8 = SUB84(param_1->Size,0);
    fStackX_c = local_res8;
  }
  if (this->BackPadScrolling == false) {
    fStackX_c = 0.0;
  }
  fStackX_c = fStackX_c - this->PhysicalOffset;
  if (this->Orientation == Orient_Horizontal) {
    ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>
              (GSlateFlowDirection,&this->Children,param_1,param_2,fStackX_c,
               this->bAllowContentToShrink,&this->ArrangedSize);
    return;
  }
  ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>
            (GSlateFlowDirection,&this->Children,param_1,param_2,fStackX_c,
             this->bAllowContentToShrink,&this->ArrangedSize);
  return;
}

