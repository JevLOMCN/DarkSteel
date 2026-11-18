// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FDeferredCleanupSlateBrush @ 148691790

FDeferredCleanupSlateBrush * __thiscall
FDeferredCleanupSlateBrush::FDeferredCleanupSlateBrush
          (FDeferredCleanupSlateBrush *this,FSlateBrush *param_1)

{
  undefined1 uVar1;
  UObject *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  double dVar5;
  TVector2<float>_u_0 TVar6;
  EStyleColor EVar7;
  undefined2 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TEnumAsByte<ESlateBrushRoundingType::Type> TVar12;
  bool bVar13;
  undefined6 uVar14;
  undefined3 uVar15;
  byte bVar16;
  
  this->_padding_ = (longlong)&___7ISlateBrushSource__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__ISlateBrushSource__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->InternalBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  uVar4 = *(undefined8 *)((longlong)&(param_1->TintColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->InternalBrush).TintColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TintColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->InternalBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar4;
  EVar7 = (param_1->TintColor).ColorTableId;
  uVar8 = *(undefined2 *)&(param_1->TintColor).field_0x12;
  (this->InternalBrush).TintColor.ColorUseRule = (param_1->TintColor).ColorUseRule;
  (this->InternalBrush).TintColor.ColorTableId = EVar7;
  *(undefined2 *)&(this->InternalBrush).TintColor.field_0x12 = uVar8;
  (this->InternalBrush).DrawAs.Value = (param_1->DrawAs).Value;
  (this->InternalBrush).Tiling.Value = (param_1->Tiling).Value;
  (this->InternalBrush).Mirroring.Value = (param_1->Mirroring).Value;
  (this->InternalBrush).ImageType.Value = (param_1->ImageType).Value;
  (this->InternalBrush).ImageSize = param_1->ImageSize;
  fVar9 = (param_1->Margin).Top;
  fVar10 = (param_1->Margin).Right;
  fVar11 = (param_1->Margin).Bottom;
  (this->InternalBrush).Margin.Left = (param_1->Margin).Left;
  (this->InternalBrush).Margin.Top = fVar9;
  (this->InternalBrush).Margin.Right = fVar10;
  (this->InternalBrush).Margin.Bottom = fVar11;
  pUVar2 = (param_1->ResourceObject).field0_0x0.DebugPtr;
  (this->InternalBrush).ResourceObject.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  dVar5 = (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Y;
  (this->InternalBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X =
       (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.X;
  (this->InternalBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.W;
  (this->InternalBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z =
       (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Z;
  (this->InternalBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = dVar5;
  uVar4 = *(undefined8 *)((longlong)&(param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->InternalBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->InternalBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) = uVar4;
  TVar12.Value = (param_1->OutlineSettings).RoundingType.Value;
  bVar13 = (param_1->OutlineSettings).bUseBrushTransparency;
  uVar14 = *(undefined6 *)&(param_1->OutlineSettings).field_0x3a;
  *(undefined8 *)&(this->InternalBrush).OutlineSettings.Color.ColorUseRule =
       *(undefined8 *)&(param_1->OutlineSettings).Color.ColorUseRule;
  (this->InternalBrush).OutlineSettings.RoundingType =
       (TEnumAsByte<ESlateBrushRoundingType::Type>)TVar12.Value;
  (this->InternalBrush).OutlineSettings.bUseBrushTransparency = bVar13;
  *(undefined6 *)&(this->InternalBrush).OutlineSettings.field_0x3a = uVar14;
  TVar6 = (param_1->UVRegion).Max.field0_0x0;
  (this->InternalBrush).UVRegion.Min.field0_0x0 = (param_1->UVRegion).Min.field0_0x0;
  (this->InternalBrush).UVRegion.Max.field0_0x0 = TVar6;
  uVar15 = *(undefined3 *)&(param_1->UVRegion).field_0x11;
  (this->InternalBrush).UVRegion.bIsValid = (param_1->UVRegion).bIsValid;
  *(undefined3 *)&(this->InternalBrush).UVRegion.field_0x11 = uVar15;
  uVar1 = (this->InternalBrush).field_0x94;
  bVar16 = ((this->InternalBrush).bIsDynamicallyLoaded ^ param_1->bIsDynamicallyLoaded) & 1 ^ uVar1;
  (this->InternalBrush).field_0x94 = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x94) & 2 ^ bVar16;
  (this->InternalBrush).field_0x94 = bVar16;
  (this->InternalBrush).field_0x94 = (bVar16 ^ param_1->field_0x94) & 4 ^ bVar16;
  (this->InternalBrush).ResourceHandle.Data.Object = (param_1->ResourceHandle).Data.Object;
  pTVar3 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  (this->InternalBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->InternalBrush).ResourceName = param_1->ResourceName;
  return this;
}

// AddReferencedObjects @ 1486a5db0

void __thiscall
FDeferredCleanupSlateBrush::AddReferencedObjects
          (FDeferredCleanupSlateBrush *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001486a5dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&(this->InternalBrush).Margin,0,0);
  return;
}

// CreateBrush @ 1486ac630

TSharedRef<FDeferredCleanupSlateBrush,1> * __cdecl
FDeferredCleanupSlateBrush::CreateBrush
          (TSharedRef<FDeferredCleanupSlateBrush,1> *__return_storage_ptr__,FSlateBrush *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDeferredCleanupSlateBrush *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FDeferredCleanupSlateBrush,1> *pTVar5;
  
  pFVar3 = ::operator_new(0xd0);
  if (pFVar3 == (FDeferredCleanupSlateBrush *)0x0) {
    pFVar3 = (FDeferredCleanupSlateBrush *)0x0;
  }
  else {
    pFVar3 = FDeferredCleanupSlateBrush(pFVar3,param_1);
  }
  __return_storage_ptr__->Object = pFVar3;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TReferenceControllerWithDeleter<FDeferredCleanupSlateBrush,`FDeferredCleanupSlateBrush::CreateBrush'::`2'::<lambda_1>,1>
          ::_vftable_;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pFVar3 == (FDeferredCleanupSlateBrush *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x115,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedRef<FDeferredCleanupSlateBrush,1> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// CreateBrush @ 1486ac6e0

TSharedRef<FDeferredCleanupSlateBrush,1> * __cdecl
FDeferredCleanupSlateBrush::CreateBrush
          (TSharedRef<FDeferredCleanupSlateBrush,1> *__return_storage_ptr__,UObject *param_1,
          FDeprecateVector2DParameter *param_2,FLinearColor *param_3,Type param_4,Type param_5,
          Type param_6,FMargin *param_7)

{
  code *pcVar1;
  bool bVar2;
  FDeferredCleanupSlateBrush *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FDeferredCleanupSlateBrush,1> *pTVar5;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  FSlateBrush::SetResourceObject(&local_b8,param_1);
  local_b8.ImageSize._0_4_ = *(undefined4 *)param_2;
  local_b8.ImageSize._4_4_ = *(undefined4 *)&param_2->field_0x4;
  local_b8.TintColor.SpecifiedColor.field0_0x0._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  local_b8.TintColor.SpecifiedColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  local_b8.TintColor.ColorUseRule = UseColor_Specified;
  local_b8.Margin.Left = param_7->Left;
  local_b8.Margin.Top = param_7->Top;
  local_b8.Margin.Right = param_7->Right;
  local_b8.Margin.Bottom = param_7->Bottom;
  local_b8.Tiling.Value = (undefined1)param_4;
  local_b8.ImageType.Value = (undefined1)param_5;
  local_b8.DrawAs.Value = (undefined1)param_6;
  pFVar3 = ::operator_new(0xd0);
  if (pFVar3 == (FDeferredCleanupSlateBrush *)0x0) {
    pFVar3 = (FDeferredCleanupSlateBrush *)0x0;
  }
  else {
    pFVar3 = FDeferredCleanupSlateBrush(pFVar3,&local_b8);
  }
  __return_storage_ptr__->Object = pFVar3;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TReferenceControllerWithDeleter<FDeferredCleanupSlateBrush,`FDeferredCleanupSlateBrush::CreateBrush'::`2'::<lambda_1>,1>
          ::_vftable_;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pFVar3 == (FDeferredCleanupSlateBrush *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x115,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedRef<FDeferredCleanupSlateBrush,1> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateBrush @ 1486ac840

TSharedRef<FDeferredCleanupSlateBrush,1> * __cdecl
FDeferredCleanupSlateBrush::CreateBrush
          (TSharedRef<FDeferredCleanupSlateBrush,1> *__return_storage_ptr__,UTexture *param_1,
          FLinearColor *param_2,Type param_3,Type param_4,Type param_5,FMargin *param_6)

{
  code *pcVar1;
  bool bVar2;
  FDeferredCleanupSlateBrush *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FDeferredCleanupSlateBrush,1> *pTVar5;
  undefined4 uVar6;
  FSlateBrush local_c8;
  
  FSlateBrush::FSlateBrush(&local_c8);
  FSlateBrush::SetResourceObject(&local_c8,(UObject *)param_1);
  uVar6 = (**(code **)(param_1->_padding_ + 0x370))(param_1);
  local_c8.ImageSize._0_4_ = (**(code **)(param_1->_padding_ + 0x368))(param_1);
  local_c8.TintColor.SpecifiedColor.field0_0x0._0_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_c8.TintColor.SpecifiedColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  local_c8.TintColor.ColorUseRule = UseColor_Specified;
  local_c8.Margin.Left = param_6->Left;
  local_c8.Margin.Top = param_6->Top;
  local_c8.Margin.Right = param_6->Right;
  local_c8.Margin.Bottom = param_6->Bottom;
  local_c8.ImageType.Value = (undefined1)param_4;
  local_c8.DrawAs.Value = (undefined1)param_5;
  local_c8.Tiling.Value = (uchar)param_3;
  local_c8.ImageSize._4_4_ = uVar6;
  pFVar3 = ::operator_new(0xd0);
  if (pFVar3 == (FDeferredCleanupSlateBrush *)0x0) {
    pFVar3 = (FDeferredCleanupSlateBrush *)0x0;
  }
  else {
    pFVar3 = FDeferredCleanupSlateBrush(pFVar3,&local_c8);
  }
  __return_storage_ptr__->Object = pFVar3;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TReferenceControllerWithDeleter<FDeferredCleanupSlateBrush,`FDeferredCleanupSlateBrush::CreateBrush'::`2'::<lambda_1>,1>
          ::_vftable_;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pFVar3 == (FDeferredCleanupSlateBrush *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x115,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedRef<FDeferredCleanupSlateBrush,1> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetReferencerName @ 1486c6210

FString * __thiscall
FDeferredCleanupSlateBrush::GetReferencerName
          (FDeferredCleanupSlateBrush *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FDeferredCleanupSlateBrush");
  return __return_storage_ptr__;
}

// GetSlateBrush @ 1486c7bb0

FSlateBrush * __thiscall FDeferredCleanupSlateBrush::GetSlateBrush(FDeferredCleanupSlateBrush *this)

{
  return &this->InternalBrush;
}

