// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FDisplayDebugManager @ 148907140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDisplayDebugManager * __thiscall
FDisplayDebugManager::FDisplayDebugManager(FDisplayDebugManager *this)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  ITextData *pIVar4;
  FText *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  TVector2<double>_u_0 local_18;
  
  pFVar5 = FText::GetEmpty();
  local_18._s_0.X = 0.0;
  local_18._s_0.Y = 0.0;
  FCanvasTextItemBase::FCanvasTextItemBase
            ((FCanvasTextItemBase *)this,(TVector2<double> *)&local_18._s_0,&FLinearColor::White);
  uVar6 = 0;
  (this->DebugTextItem)._padding_ = (longlong)&___7FCanvasTextItem__6B_;
  (this->DebugTextItem)._padding_ = 0;
  *(undefined1 *)&(this->DebugTextItem)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->DebugTextItem)._padding_ + 4) = 2;
  (this->DebugTextItem).Text.TextData.Reference = (ITextData *)0x0;
  pIVar4 = (pFVar5->TextData).Reference;
  (this->DebugTextItem).Text.TextData.Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  (this->DebugTextItem).Text.Flags = pFVar5->Flags;
  (this->CurrentPos).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->NextColumXPos = 0.0;
  this->MaxCharHeight = 0.0;
  (this->InitialPos).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->Canvas = (UCanvas *)0x0;
  this->ColumnCount = 0;
  (this->DebugTextItem)._padding_ = 0x3ff0000000000000;
  (this->DebugTextItem)._padding_ = 0x3ff0000000000000;
  *(FLinearColor_u_0 *)&(this->DebugTextItem)._padding_ =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  dVar2 = (double)(this->DebugTextItem)._padding_;
  dVar3 = (double)(this->DebugTextItem)._padding_;
  if (dVar3 * dVar3 + dVar2 * dVar2 != 0.0) {
    uVar6 = 2;
  }
  plVar1 = &(this->DebugTextItem)._padding_;
  *(uint *)plVar1 = (uint)*plVar1 & 0xfffffffd;
  plVar1 = &(this->DebugTextItem)._padding_;
  *(uint *)plVar1 = (uint)*plVar1 | uVar6;
  return this;
}

// AddColumnIfNeeded @ 148916730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FDisplayDebugManager::AddColumnIfNeeded(FDisplayDebugManager *this)

{
  float *pfVar1;
  int iVar2;
  UCanvas *pUVar3;
  float fVar4;
  float fVar5;
  
  pUVar3 = this->Canvas;
  if (pUVar3 != (UCanvas *)0x0) {
    fVar4 = GetYStep(this);
    fVar5 = fVar4 + (this->CurrentPos).field0_0x0._s_0.Y;
    pfVar1 = &pUVar3->ClipY;
    if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
      iVar2 = this->ColumnCount;
      (this->CurrentPos).field0_0x0._s_0.Y = (this->InitialPos).field0_0x0._s_0.Y;
      fVar4 = fVar4 + fVar4 + this->NextColumXPos;
      (this->CurrentPos).field0_0x0._s_0.X = fVar4;
      if (iVar2 == 0) {
        DisplayDebugManagerCvars::MaxColumnsCreated = DisplayDebugManagerCvars::LastKnownColumnCount
        ;
      }
      DisplayDebugManagerCvars::LastKnownColumnCount = iVar2 + 1;
      this->ColumnCount = DisplayDebugManagerCvars::LastKnownColumnCount;
      if (DisplayDebugManagerCvars::ColumnOffsetIndex < 1) {
        DisplayDebugManagerCvars::StoredDebugMenuOffset = 0;
      }
      else if (DisplayDebugManagerCvars::LastKnownColumnCount ==
               DisplayDebugManagerCvars::ColumnOffsetIndex) {
        DisplayDebugManagerCvars::StoredDebugMenuOffset = (int)fVar4;
        return;
      }
    }
  }
  return;
}

// DrawString @ 148935120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDisplayDebugManager::DrawString(FDisplayDebugManager *this,FString *param_1,float *param_2)

{
  int iVar1;
  UCanvas *pUVar2;
  FCanvas *this_00;
  FText *pFVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined1 local_38 [48];
  
  fVar8 = __real_3f800000;
  pUVar2 = this->Canvas;
  if (pUVar2 != (UCanvas *)0x0) {
    fVar5 = __real_3f800000;
    if (pUVar2->Canvas->bStereoRendering == false) {
      fVar5 = pUVar2->Canvas->DPIScale;
    }
    fVar5 = (float)pUVar2->SizeX * (__real_3a088889 / fVar5);
    if (fVar5 <= __real_3f800000) {
      fVar5 = __real_3f800000;
    }
    (this->DebugTextItem)._padding_ = (longlong)(double)fVar5;
    (this->DebugTextItem)._padding_ = (longlong)(double)fVar5;
    pFVar3 = FText::FromString((FText *)local_38,param_1);
    FText::operator=(&(this->DebugTextItem).Text,pFVar3);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    local_38._0_8_ =
         (undefined8)
         (((this->CurrentPos).field0_0x0._s_0.X + *param_2) -
         (float)DisplayDebugManagerCvars::StoredDebugMenuOffset);
    local_38._8_8_ = (undefined8)(this->CurrentPos).field0_0x0._s_0.Y;
    this_00 = this->Canvas->Canvas;
    (**(code **)((this->DebugTextItem)._padding_ + 0x10))(this,this_00,local_38);
    if (this_00->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this_00,false);
    }
    pUVar2 = this->Canvas;
    fVar5 = fVar8;
    if (pUVar2->Canvas->bStereoRendering == false) {
      fVar5 = pUVar2->Canvas->DPIScale;
    }
    fVar5 = (float)((double)(this->DebugTextItem)._padding_ / (double)fVar5 +
                   (double)((this->CurrentPos).field0_0x0._s_0.X + *param_2));
    if (fVar5 <= this->NextColumXPos) {
      fVar5 = this->NextColumXPos;
    }
    this->NextColumXPos = fVar5;
    if (pUVar2->Canvas->bStereoRendering == false) {
      fVar8 = pUVar2->Canvas->DPIScale;
    }
    fVar4 = GetYStep(this);
    dVar6 = (double)(this->DebugTextItem)._padding_ / (double)fVar8;
    dVar7 = (double)fVar4;
    if ((double)fVar4 <= dVar6) {
      dVar7 = dVar6;
    }
    fVar8 = (float)(dVar7 + (double)(this->CurrentPos).field0_0x0._s_0.Y);
    (this->CurrentPos).field0_0x0._s_0.Y = fVar8;
    if ((pUVar2 != (UCanvas *)0x0) &&
       (fVar4 = GetYStep(this), fVar8 = fVar4 + fVar8,
       pUVar2->ClipY <= fVar8 && fVar8 != pUVar2->ClipY)) {
      iVar1 = this->ColumnCount;
      (this->CurrentPos).field0_0x0._s_0.Y = (this->InitialPos).field0_0x0._s_0.Y;
      fVar5 = fVar4 + fVar4 + fVar5;
      (this->CurrentPos).field0_0x0._s_0.X = fVar5;
      if (iVar1 == 0) {
        DisplayDebugManagerCvars::MaxColumnsCreated = DisplayDebugManagerCvars::LastKnownColumnCount
        ;
      }
      DisplayDebugManagerCvars::LastKnownColumnCount = iVar1 + 1;
      this->ColumnCount = DisplayDebugManagerCvars::LastKnownColumnCount;
      if (DisplayDebugManagerCvars::ColumnOffsetIndex < 1) {
        DisplayDebugManagerCvars::StoredDebugMenuOffset = 0;
      }
      else if (DisplayDebugManagerCvars::LastKnownColumnCount ==
               DisplayDebugManagerCvars::ColumnOffsetIndex) {
        DisplayDebugManagerCvars::StoredDebugMenuOffset = (int)fVar5;
      }
    }
  }
  return;
}

// GetTextScale @ 14895e670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall FDisplayDebugManager::GetTextScale(FDisplayDebugManager *this)

{
  UCanvas *pUVar1;
  float fVar2;
  
  pUVar1 = this->Canvas;
  if (pUVar1 == (UCanvas *)0x0) {
    return __real_3f800000;
  }
  fVar2 = __real_3f800000;
  if (pUVar1->Canvas->bStereoRendering == false) {
    fVar2 = pUVar1->Canvas->DPIScale;
  }
  fVar2 = (float)pUVar1->SizeX * (__real_3a088889 / fVar2);
  if (fVar2 <= __real_3f800000) {
    fVar2 = __real_3f800000;
  }
  return fVar2;
}

// GetYStep @ 14895fca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall FDisplayDebugManager::GetYStep(FDisplayDebugManager *this)

{
  UCanvas *pUVar1;
  float fVar2;
  
  pUVar1 = this->Canvas;
  fVar2 = __real_3f800000;
  if (pUVar1 != (UCanvas *)0x0) {
    if (pUVar1->Canvas->bStereoRendering == false) {
      fVar2 = pUVar1->Canvas->DPIScale;
    }
    fVar2 = (float)pUVar1->SizeX * (__real_3a088889 / fVar2);
    if (fVar2 <= __real_3f800000) {
      fVar2 = __real_3f800000;
    }
  }
  return this->MaxCharHeight * __real_3f933333 * fVar2;
}

