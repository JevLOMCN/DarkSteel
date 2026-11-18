// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 4

// operator() @ 142e1ca20

/* WARNING: Type propagation algorithm not settling */

TOptional<FPaintGeometry> * __thiscall
`FNavigationSimulationOverlay::PaintLiveNode'::__l6::<lambda_1>::operator()
          (void *this,TOptional<FPaintGeometry> *__return_storage_ptr__,
          FNavigationSimulationWidgetInfo *param_1)

{
  undefined8 uVar1;
  FWidgetGeometryMap *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  FPaintGeometry *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  TSharedRef<SWidget_const_,1> local_18;
  
  pTVar9 = (param_1->WidgetLive).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar9->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142e1ca50;
      }
      LOCK();
      aVar7 = pTVar9->SharedReferenceCount;
      bVar10 = aVar6 == aVar7;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar10);
    local_18.Object = (param_1->WidgetLive).Object;
    if (local_18.Object != (SWidget *)0x0) {
      this_00 = *(FWidgetGeometryMap **)this;
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      local_18.SharedReferenceCount.ReferenceController = pTVar9;
      pFVar8 = NavigationSimulationOverlay::FWidgetGeometryMap::GetGeometry(this_00,&local_18);
      __return_storage_ptr__->bIsSet = true;
      uVar1 = *(undefined8 *)&pFVar8->DrawScale;
      uVar2 = *(undefined8 *)((longlong)&(pFVar8->DrawSize).field0_0x0 + 4);
      uVar3 = *(undefined8 *)((longlong)&(pFVar8->LocalSize).field0_0x0 + 4);
      (__return_storage_ptr__->TypedValue).DrawPosition.field0_0x0 =
           (pFVar8->DrawPosition).field0_0x0;
      *(undefined8 *)&(__return_storage_ptr__->TypedValue).DrawScale = uVar1;
      uVar4 = *(undefined8 *)((pFVar8->AccumulatedRenderTransform).M.M[0] + 1);
      uVar5 = *(undefined8 *)((pFVar8->AccumulatedRenderTransform).M.M[1] + 1);
      *(undefined8 *)((longlong)&(__return_storage_ptr__->TypedValue).DrawSize.field0_0x0 + 4) =
           uVar2;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->TypedValue).LocalSize.field0_0x0 + 4) =
           uVar3;
      uVar1 = *(undefined8 *)((longlong)&(pFVar8->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
      *(undefined8 *)((__return_storage_ptr__->TypedValue).AccumulatedRenderTransform.M.M[0] + 1) =
           uVar4;
      *(undefined8 *)((__return_storage_ptr__->TypedValue).AccumulatedRenderTransform.M.M[1] + 1) =
           uVar5;
      *(undefined8 *)
       ((longlong)&(__return_storage_ptr__->TypedValue).AccumulatedRenderTransform.Trans.field0_0x0
       + 4) = uVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      return __return_storage_ptr__;
    }
  }
LAB_142e1ca50:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// operator() @ 142e1cae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<FPaintGeometry> * __thiscall
`FNavigationSimulationOverlay::PaintSnapshotNode'::__l6::<lambda_1>::operator()
          (void *this,TOptional<FPaintGeometry> *__return_storage_ptr__,
          FNavigationSimulationWidgetInfo *param_1)

{
  float fVar1;
  byte bVar2;
  TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
  *this_00;
  longlong lVar3;
  TVector2<float>_u_0_s_0 TVar4;
  FDeprecateSlateVector2D FVar5;
  undefined8 uVar6;
  FPaintGeometry *pFVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  TVector2<float>_u_0 local_b8;
  float local_b0;
  float fStack_ac;
  TTransform2<float> local_a8;
  TTransform2<float> local_90;
  TVector2<float>_u_0 local_78;
  float local_70;
  undefined8 local_6c;
  undefined8 local_64;
  float local_5c [2];
  float afStack_54 [2];
  TVector2<float>_u_0 local_4c;
  byte local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1->bHasGeometry == false) {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    this_00 = *(TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
                **)this;
    lVar3 = *(longlong *)((longlong)this + 8);
    pFVar7 = TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
             ::Find(this_00,param_1->WidgetPtr);
    if (pFVar7 == (FPaintGeometry *)0x0) {
      TVar4 = (param_1->WidgetGeometry).AbsolutePosition.field0_0x0._s_0;
      fStack_ac = (param_1->WidgetGeometry).Scale;
      bVar2 = *(byte *)(lVar3 + 0x34);
      local_c0._0_4_ = TVar4.X;
      local_c0._0_4_ = (float)*(double *)((longlong)this + 0x10) + (float)(undefined4)local_c0;
      local_c0._4_4_ = TVar4.Y;
      local_c0._4_4_ = (float)*(double *)((longlong)this + 0x18) + (float)local_c0._4_4_;
      fVar1 = *(float *)(lVar3 + 8);
      FVar5 = (param_1->WidgetGeometry).Size;
      local_c8._0_4_ = FVar5._0_4_;
      local_b0 = fStack_ac * (float)(undefined4)local_c8;
      local_c8._4_4_ = FVar5._4_4_;
      fStack_ac = fStack_ac * (float)local_c8._4_4_;
      local_a8.M.M[0][1] = (float)*(undefined8 *)(lVar3 + 0xc);
      local_a8.M.M[1][0] = (float)((ulonglong)*(undefined8 *)(lVar3 + 0xc) >> 0x20);
      local_b8 = local_c0;
      local_a8.Trans.field0_0x0 = local_c0;
      local_c8._0_4_ = fVar1 * (float)(undefined4)local_c0 + local_a8.M.M[0][1];
      local_c8._4_4_ = fVar1 * (float)local_c0._4_4_ + local_a8.M.M[1][0];
      local_a8.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
      local_a8.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
      local_a8.M.M[1][0] = (float)_UNK_15076b188;
      local_a8.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
      Concatenate<TTransform2<float>_>(&local_90,&local_a8,(TTransform2<float> *)(lVar3 + 0x1c));
      local_78 = local_c8;
      local_64 = CONCAT44(fStack_ac,local_b0);
      local_44 = (bVar2 & 1) * '\x02' | local_44 & 0xfc;
      local_6c = 0;
      local_5c[0] = local_90.M.M[0][0];
      local_5c[1] = local_90.M.M[0][1];
      afStack_54[0] = local_90.M.M[1][0];
      afStack_54[1] = local_90.M.M[1][1];
      local_4c = local_90.Trans.field0_0x0;
      local_70 = fVar1;
      TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
      ::Emplace<unsigned___int64_const_&,FPaintGeometry>
                (this_00,&param_1->WidgetPtr,(FPaintGeometry *)&local_78._s_0);
      pFVar7 = TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
               ::Find(this_00,param_1->WidgetPtr);
    }
    uVar6 = *(undefined8 *)&pFVar7->DrawScale;
    (__return_storage_ptr__->TypedValue).DrawPosition.field0_0x0 = (pFVar7->DrawPosition).field0_0x0
    ;
    *(undefined8 *)&(__return_storage_ptr__->TypedValue).DrawScale = uVar6;
    uVar6 = *(undefined8 *)((longlong)&(pFVar7->LocalSize).field0_0x0 + 4);
    *(undefined8 *)((longlong)&(__return_storage_ptr__->TypedValue).DrawSize.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(pFVar7->DrawSize).field0_0x0 + 4);
    *(undefined8 *)((longlong)&(__return_storage_ptr__->TypedValue).LocalSize.field0_0x0 + 4) =
         uVar6;
    uVar6 = *(undefined8 *)((pFVar7->AccumulatedRenderTransform).M.M[1] + 1);
    *(undefined8 *)((__return_storage_ptr__->TypedValue).AccumulatedRenderTransform.M.M[0] + 1) =
         *(undefined8 *)((pFVar7->AccumulatedRenderTransform).M.M[0] + 1);
    *(undefined8 *)((__return_storage_ptr__->TypedValue).AccumulatedRenderTransform.M.M[1] + 1) =
         uVar6;
    *(undefined8 *)
     ((longlong)&(__return_storage_ptr__->TypedValue).AccumulatedRenderTransform.Trans.field0_0x0 +
     4) = *(undefined8 *)((longlong)&(pFVar7->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    __return_storage_ptr__->bIsSet = true;
  }
  return __return_storage_ptr__;
}

// PaintLiveNode @ 142ee15b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
FNavigationSimulationOverlay::PaintLiveNode
          (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
           *param_1,FGeometry *param_2,FSlateWindowElementList *param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar3;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar4;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  ForAnyElementType *local_e0;
  code *local_d8;
  ForAnyElementType **local_d0;
  FOverlayBrushes local_c8;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_78.MaxBits = 0x80;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  NavigationSimulationOverlay::FOverlayBrushes::FOverlayBrushes(&local_c8);
  iVar1 = param_1->ArrayNum;
  pTVar3 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(param_1->AllocatorInstance).Data;
  pTVar4 = pTVar3 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_e8);
    }
    if (pTVar3 == pTVar4) break;
    local_e0 = &local_88;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FNavigationSimulationOverlay::PaintLiveNode'::__l6::<lambda_1>,TOptional<FPaintGeometry>,FNavigationSimulationWidgetInfo_const_&>
               ::Call;
    local_d0 = &local_e0;
    NavigationSimulationOverlay::Paint
              (&local_c8,pTVar3,
               (TFunctionRef<TOptional<FPaintGeometry>___cdecl(FNavigationSimulationWidgetInfo_const_&)>
                *)&local_d8,param_3,param_4 + 1);
    pTVar3 = pTVar3 + 1;
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  uVar2 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return param_4 + 1;
}

// PaintSnapshotNode @ 142ee2cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
FNavigationSimulationOverlay::PaintSnapshotNode
          (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
           *param_1,FGeometry *param_2,FSlateWindowElementList *param_3,int param_4,
          TVector2<double> *param_5)

{
  int iVar1;
  ulonglong uVar2;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar3;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar4;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  code *local_100;
  ForAnyElementType **local_f8;
  ForAnyElementType *local_f0;
  FGeometry *local_e8;
  double local_e0;
  double dStack_d8;
  FOverlayBrushes local_c8;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_78.MaxBits = 0x80;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  NavigationSimulationOverlay::FOverlayBrushes::FOverlayBrushes(&local_c8);
  iVar1 = param_1->ArrayNum;
  pTVar3 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(param_1->AllocatorInstance).Data;
  pTVar4 = pTVar3 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (pTVar3 == pTVar4) break;
    local_f0 = &local_88;
    local_100 = UE::Core::Private::Function::
                TFunctionRefCaller<`FNavigationSimulationOverlay::PaintSnapshotNode'::__l6::<lambda_1>,TOptional<FPaintGeometry>,FNavigationSimulationWidgetInfo_const_&>
                ::Call;
    local_e0 = (param_5->field0_0x0)._s_0.X;
    dStack_d8 = (param_5->field0_0x0)._s_0.Y;
    local_f8 = &local_f0;
    local_e8 = param_2;
    NavigationSimulationOverlay::Paint
              (&local_c8,pTVar3,
               (TFunctionRef<TOptional<FPaintGeometry>___cdecl(FNavigationSimulationWidgetInfo_const_&)>
                *)&local_100,param_3,param_4 + 1);
    pTVar3 = pTVar3 + 1;
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  uVar2 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return param_4 + 1;
}

