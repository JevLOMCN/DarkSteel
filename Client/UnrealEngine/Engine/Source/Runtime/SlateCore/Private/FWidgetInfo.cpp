// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FWidgetInfo @ 14242dc10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FWidgetInfo * __thiscall
FConsoleSlateDebuggerUpdate::FWidgetInfo::FWidgetInfo
          (FWidgetInfo *this,SWidget *param_1,EWidgetUpdateFlags param_2)

{
  FString *pFVar1;
  TWeakPtr<SWidget,1> *pTVar2;
  FDeprecateSlateVector2D FVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  double dVar6;
  atomic<int> aVar7;
  char cVar8;
  atomic<int> aVar9;
  FSlateApplicationBase *pFVar10;
  FString *pFVar11;
  bool bVar12;
  float fVar13;
  undefined8 local_res8;
  FString local_28;
  
  this->UpdateFlags = param_2;
  pFVar1 = &this->WidgetName;
  this->WindowId = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetName).Data.ArrayNum = 0;
  (this->WidgetName).Data.ArrayMax = 0;
  pFVar10 = FSlateApplicationBase::Get();
  dVar6 = (double)(**(code **)(*(longlong *)pFVar10 + 0x60))(pFVar10);
  this->LastInvalidationTime = dVar6;
  local_res8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_res8._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  fVar13 = (float)local_res8._4_4_ *
           (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][0];
  local_res8._4_4_ =
       (float)local_res8._4_4_ *
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][1] +
       (float)(undefined4)local_res8 *
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][1] +
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.
       Y;
  local_res8._0_4_ =
       fVar13 + (float)(undefined4)local_res8 *
                (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][0] +
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.
       X;
  (this->PaintLocation).field0_0x0 = local_res8;
  FVar3 = (param_1->PersistentState).AllottedGeometry.Size;
  local_res8._4_4_ = FVar3._4_4_;
  local_res8._0_4_ = FVar3._0_4_;
  fVar13 = (float)local_res8._4_4_ *
           (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][0];
  local_res8._4_4_ =
       (float)local_res8._4_4_ *
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][1] +
       (float)(undefined4)local_res8 *
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][1];
  local_res8._0_4_ =
       fVar13 + (float)(undefined4)local_res8 *
                (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][0];
  (this->PaintSize).field0_0x0 = local_res8;
  pFVar11 = FReflectionMetaData::GetWidgetDebugInfo(&local_28,param_1);
  if (pFVar1 != pFVar11) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->WidgetName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (this->WidgetName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  do {
    if (param_1 == (SWidget *)0x0) {
LAB_14242ddb5:
      this->WindowId = 0;
      return this;
    }
    cVar8 = (**(code **)(param_1->_padding_ + 0x208))();
    if (cVar8 != '\0') {
      this->WindowId = param_1->UniqueIdentifier;
      return this;
    }
    pTVar2 = &param_1->ParentWidgetPtr;
    pTVar5 = (param_1->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
    param_1 = (SWidget *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar7 = pTVar5->SharedReferenceCount;
      do {
        if (aVar7 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14242ddb5;
        }
        LOCK();
        aVar9 = pTVar5->SharedReferenceCount;
        bVar12 = aVar7 == aVar9;
        if (bVar12) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar9 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar9;
      } while (!bVar12);
      param_1 = pTVar2->Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  } while( true );
}

// Update @ 142455a30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerUpdate::FWidgetInfo::Update
          (FWidgetInfo *this,SWidget *param_1,EWidgetUpdateFlags param_2)

{
  FDeprecateSlateVector2D FVar1;
  double dVar2;
  FSlateApplicationBase *pFVar3;
  float fVar4;
  undefined8 local_res8;
  
  this->UpdateFlags = param_2;
  pFVar3 = FSlateApplicationBase::Get();
  dVar2 = (double)(**(code **)(*(longlong *)pFVar3 + 0x60))(pFVar3);
  this->LastInvalidationTime = dVar2;
  local_res8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_res8._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  fVar4 = (float)local_res8._4_4_ *
          (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][0];
  local_res8._4_4_ =
       (float)(undefined4)local_res8 *
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][1] +
       (float)local_res8._4_4_ *
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][1] +
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.
       Y;
  local_res8._0_4_ =
       fVar4 + (float)(undefined4)local_res8 *
               (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][0] +
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.
       X;
  (this->PaintLocation).field0_0x0 = local_res8;
  FVar1 = (param_1->PersistentState).AllottedGeometry.Size;
  local_res8._4_4_ = FVar1._4_4_;
  local_res8._0_4_ = FVar1._0_4_;
  fVar4 = (float)local_res8._4_4_ *
          (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][0];
  local_res8._4_4_ =
       (float)(undefined4)local_res8 *
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][1] +
       (float)local_res8._4_4_ *
       (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][1];
  local_res8._0_4_ =
       fVar4 + (float)(undefined4)local_res8 *
               (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][0];
  (this->PaintSize).field0_0x0 = local_res8;
  return;
}

