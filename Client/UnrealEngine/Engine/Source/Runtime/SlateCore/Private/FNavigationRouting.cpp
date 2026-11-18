// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 10

// <lambda_invoker_cdecl> @ 1424c7340

float __cdecl
`FNavigationRouting::RouteNavigationFocus'::__l20::<lambda_1>::<lambda_invoker_cdecl>
          (FSlateRect *param_1)

{
  return param_1->Top;
}

// <lambda_invoker_cdecl> @ 1424c7350

float __cdecl
`FNavigationRouting::RouteNavigationFocus'::__l21::<lambda_2>::<lambda_invoker_cdecl>
          (FSlateRect *param_1)

{
  return param_1->Bottom;
}

// <lambda_invoker_cdecl> @ 1424c7360

float __cdecl
`FNavigationRouting::RouteNavigationFocus'::__l22::<lambda_3>::<lambda_invoker_cdecl>
          (FSlateRect *param_1)

{
  return param_1->Left;
}

// <lambda_invoker_cdecl> @ 1424c7370

float __cdecl
`FNavigationRouting::RouteNavigationFocus'::__l23::<lambda_4>::<lambda_invoker_cdecl>
          (FSlateRect *param_1)

{
  return param_1->Right;
}

// <lambda_invoker_cdecl> @ 1424c7380

float __cdecl
`FNavigationRouting::RouteNavigationFocus'::__l24::<lambda_5>::<lambda_invoker_cdecl>
          (FSlateRect *param_1)

{
  return param_1->Left;
}

// <lambda_invoker_cdecl> @ 1424c7390

float __cdecl
`FNavigationRouting::RouteNavigationFocus'::__l25::<lambda_6>::<lambda_invoker_cdecl>
          (FSlateRect *param_1)

{
  return param_1->Right;
}

// <lambda_invoker_cdecl> @ 1424c73a0

float __cdecl
`FNavigationRouting::RouteNavigationFocus'::__l26::<lambda_7>::<lambda_invoker_cdecl>
          (FSlateRect *param_1)

{
  return param_1->Left;
}

// <lambda_invoker_cdecl> @ 1424c73b0

float __cdecl
`FNavigationRouting::RouteNavigationFocus'::__l27::<lambda_8>::<lambda_invoker_cdecl>
          (FSlateRect *param_1)

{
  return param_1->Right;
}

// RouteNavigationFocus @ 14251df10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<SWidget,1> * __cdecl
FNavigationRouting::RouteNavigationFocus
          (TSharedPtr<SWidget,1> *__return_storage_ptr__,FNavigationRoutingParams *param_1)

{
  undefined8 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FHittestGrid *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TVector2<float>_u_0_s_0 TVar8;
  atomic<int> aVar9;
  FSharedReferencer<1> FVar10;
  FNavigationMetaData *pFVar11;
  atomic<int> aVar12;
  TSharedPtr<SWidget,1> *pTVar13;
  FGeometry *pFVar14;
  FSlateRotatedRect *pFVar15;
  TVector2<float>_u_0 *pTVar16;
  SWidget *this;
  int iVar17;
  int iVar18;
  EWidgetNavigationRoutingPolicy EVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  TFunction<float___cdecl(FSlateRect_const_&)> *pTVar25;
  undefined8 local_368;
  undefined8 local_360;
  FSlateRect local_358;
  SWidget *local_348;
  FSharedReferencer<1> local_340;
  undefined8 local_338;
  FSharedReferencer<1> local_330;
  TSharedPtr<FNavigationMetaData,1> local_328;
  FSlateRect local_318;
  TVector2<float>_u_0 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined4 local_2f4;
  TVector2<float>_u_0 local_2f0;
  TVector2<float>_u_0 local_2e8;
  TVector2<float>_u_0 local_2e0;
  TVector2<float>_u_0 local_2d8;
  TVector2<float>_u_0 local_2d0;
  TVector2<float>_u_0 local_2c8;
  TVector2<float>_u_0 local_2c0;
  undefined8 local_2b4;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  TTransform2<float> TStack_28c;
  undefined4 uStack_274;
  TTransform2<float> local_270;
  TTransform2<float> local_258;
  code *local_238 [2];
  undefined **local_228;
  code *local_220;
  undefined8 local_210;
  code *local_208 [2];
  undefined **local_1f8;
  code *local_1f0;
  undefined8 local_1e0;
  code *local_1d8 [2];
  undefined **local_1c8;
  code *local_1c0;
  undefined8 local_1b0;
  code *local_1a8 [2];
  undefined **local_198;
  code *local_190;
  undefined8 local_180;
  code *local_178 [2];
  undefined **local_168;
  code *local_160;
  undefined8 local_150;
  code *local_148 [2];
  undefined **local_138;
  code *local_130;
  undefined8 local_120;
  code *local_118 [2];
  undefined **local_108;
  code *local_100;
  undefined8 local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  code *local_d0;
  undefined8 local_c0;
  TVector2<float>_u_0_s_0 local_b8;
  FSlateRotatedRect local_98 [4];
  
  local_340.ReferenceController = (param_1->FocusedWidget).SharedReferenceCount.ReferenceController;
  EVar19 = AcceptFocus;
  this = (param_1->FocusedWidget).Object;
  if (local_340.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_340.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_340.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar20 = this == (SWidget *)0x0;
  local_348 = this;
  if (!bVar20) {
    do {
      this = local_348;
      SWidget::GetMetaData<FNavigationMetaData>(local_348,&local_328);
      pFVar11 = local_328.Object;
      if (local_328.Object != (FNavigationMetaData *)0x0) {
        if ((local_328.Object == (FNavigationMetaData *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar13;
        }
        EVar19 = pFVar11->NavigationRoutingPolicy;
        if (EVar19 != AcceptFocus) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_328.SharedReferenceCount.ReferenceController);
          break;
        }
      }
      if ((this == (SWidget *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar13;
      }
      local_330.ReferenceController = (this->ParentWidgetPtr).WeakReferenceCount.ReferenceController
      ;
      local_348 = (SWidget *)0x0;
      if (local_330.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar9 = (local_330.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar9 == (atomic<int>)0x0) {
            local_330.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14251e017;
          }
          LOCK();
          aVar12 = (local_330.ReferenceController)->SharedReferenceCount;
          bVar20 = aVar9 == aVar12;
          if (bVar20) {
            (local_330.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
            aVar12 = aVar9;
          }
          UNLOCK();
          aVar9 = aVar12;
        } while (!bVar20);
        local_348 = (this->ParentWidgetPtr).Object;
      }
LAB_14251e017:
      local_338 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_340,&local_330);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_330.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_328.SharedReferenceCount.ReferenceController);
      this = local_348;
    } while (local_348 != (SWidget *)0x0);
    bVar20 = this == (SWidget *)0x0;
  }
  FVar10.ReferenceController = local_340.ReferenceController;
  if (this == (SWidget *)0x0) {
    __return_storage_ptr__->Object = (param_1->FocusedWidget).Object;
    pTVar2 = (param_1->FocusedWidget).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_340.ReferenceController);
    return __return_storage_ptr__;
  }
  FHittestGrid::GetWidgetRenderBoundingRect
            (param_1->HittestGrid,&local_318,&param_1->StartingWidget);
  pFVar3 = param_1->HittestGrid;
  if (bVar20) {
    local_358.Left = ___xmm_bf800000bf800000bf800000bf800000;
    local_358.Top = _UNK_15076c664;
    local_358.Right = _UNK_15076c668;
    local_358.Bottom = _UNK_15076c66c;
  }
  else {
    pFVar14 = SWidget::GetPaintSpaceGeometry(this);
    uVar1 = *(undefined8 *)&(pFVar14->AbsolutePosition).field0_0x0._s_0.Y;
    uVar5 = *(undefined8 *)&(pFVar14->Position).field0_0x0._s_0.Y;
    uVar6 = *(undefined8 *)((pFVar14->AccumulatedRenderTransform).M.M[0] + 1);
    uVar7 = *(undefined8 *)((pFVar14->AccumulatedRenderTransform).M.M[1] + 1);
    local_2a8 = *(undefined4 *)&pFVar14->Size;
    uStack_2a4 = *(undefined4 *)&(pFVar14->Size).field_0x4;
    fVar21 = pFVar14->Scale;
    fStack_29c = (pFVar14->AbsolutePosition).field0_0x0._s_0.X;
    TVar8 = (pFVar14->AbsolutePosition).field0_0x0._s_0;
    fStack_298 = (float)uVar1;
    uStack_294 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_290 = (undefined4)uVar5;
    TStack_28c.M.M[0][0] = (float)((ulonglong)uVar5 >> 0x20);
    uVar1 = *(undefined8 *)&(pFVar14->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
    TStack_28c.Trans.field0_0x0._s_0.Y = (float)uVar1;
    uStack_274 = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_270.Trans.field0_0x0._s_0.Y =
         (float)((uint)(pFVar3->GridWindowOrigin).field0_0x0._s_0.Y ^
                __xmm_80000000800000008000000080000000);
    TStack_28c.M.M[0][1] = (float)uVar6;
    TStack_28c.M.M[1][0] = (float)((ulonglong)uVar6 >> 0x20);
    TStack_28c.M.M[1][1] = (float)uVar7;
    TStack_28c.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar7 >> 0x20);
    local_270.Trans.field0_0x0._s_0.X =
         (float)((uint)(pFVar3->GridWindowOrigin).field0_0x0._s_0.X ^
                __xmm_80000000800000008000000080000000);
    local_360 = CONCAT44(local_270.Trans.field0_0x0._s_0.Y,local_270.Trans.field0_0x0._s_0.X);
    uVar1 = local_360;
    local_2b4 = local_360;
    local_360._0_4_ = TVar8.X;
    local_368._0_4_ = local_270.Trans.field0_0x0._s_0.X + (float)local_360;
    local_360._4_4_ = TVar8.Y;
    local_368._4_4_ = local_270.Trans.field0_0x0._s_0.Y + local_360._4_4_;
    local_270.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_270.M.M[0][1] = _UNK_15076b184;
    local_270.M.M[1][0] = _UNK_15076b188;
    local_270.M.M[1][1] = _UNK_15076b18c;
    local_360 = uVar1;
    fStack_2a0 = fVar21;
    Concatenate<TTransform2<float>_>(&local_258,&TStack_28c,&local_270);
    fStack_29c = (float)(undefined4)local_368;
    fStack_298 = (float)local_368._4_4_;
    local_368._4_4_ = uStack_2a4;
    local_368._0_4_ = local_2a8;
    TStack_28c.M.M[0][0] = local_258.M.M[0][0];
    TStack_28c.M.M[0][1] = local_258.M.M[0][1];
    TStack_28c.M.M[1][0] = local_258.M.M[1][0];
    TStack_28c.M.M[1][1] = local_258.M.M[1][1];
    local_308 = (TVector2<float>_u_0)0x0;
    TStack_28c.Trans.field0_0x0._s_0.X = local_258.Trans.field0_0x0._0_4_;
    TStack_28c.Trans.field0_0x0._s_0.Y = local_258.Trans.field0_0x0._4_4_;
    local_300 = local_2a8;
    local_2f4 = uStack_2a4;
    local_2fc = 0;
    fStack_2a0 = fVar21;
    pFVar15 = TransformRect<TTransform2<float>_>
                        (local_98,&TStack_28c,(FSlateRotatedRect *)&local_308._s_0);
    local_358.Right = (pFVar15->TopLeft).field0_0x0._s_0.X;
    fVar21 = (pFVar15->ExtentY).field0_0x0._s_0.X;
    fVar23 = local_358.Right + (pFVar15->ExtentX).field0_0x0._s_0.X;
    fVar24 = (pFVar15->TopLeft).field0_0x0._s_0.Y;
    fVar22 = (pFVar15->ExtentY).field0_0x0._s_0.Y;
    local_358.Right = fVar21 + local_358.Right;
    local_b8 = (pFVar15->TopLeft).field0_0x0._s_0;
    local_358.Bottom = fVar22 + fVar24;
    fVar21 = fVar21 + fVar23;
    fVar24 = fVar24 + (pFVar15->ExtentX).field0_0x0._s_0.Y;
    local_358.Left = local_358.Right;
    if (fVar23 <= local_358.Right) {
      local_358.Left = fVar23;
    }
    fVar22 = fVar22 + fVar24;
    if (fVar21 <= local_358.Left) {
      local_358.Left = fVar21;
    }
    if (local_b8.X <= local_358.Left) {
      local_358.Left = local_b8.X;
    }
    if (local_358.Right <= fVar23) {
      local_358.Right = fVar23;
    }
    local_358.Top = local_358.Bottom;
    if (fVar24 <= local_358.Bottom) {
      local_358.Top = fVar24;
    }
    if (local_358.Bottom <= fVar24) {
      local_358.Bottom = fVar24;
    }
    if (local_358.Right <= fVar21) {
      local_358.Right = fVar21;
    }
    if (fVar22 <= local_358.Top) {
      local_358.Top = fVar22;
    }
    if (local_358.Bottom <= fVar22) {
      local_358.Bottom = fVar22;
    }
    if (local_358.Right <= local_b8.X) {
      local_358.Right = local_b8.X;
    }
    if (local_b8.Y <= local_358.Top) {
      local_358.Top = local_b8.Y;
    }
    if (local_358.Bottom <= local_b8.Y) {
      local_358.Bottom = local_b8.Y;
    }
  }
  if ((((local_318.Left <= local_358.Right) && (local_358.Left <= local_318.Right)) &&
      (local_318.Top <= local_358.Bottom)) && (local_358.Top <= local_318.Bottom)) {
switchD_14251e33c_caseD_0:
    __return_storage_ptr__->Object = (param_1->FocusedWidget).Object;
    pTVar2 = (param_1->FocusedWidget).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    goto LAB_14251e6d2;
  }
  switch(EVar19) {
  default:
    goto switchD_14251e33c_caseD_0;
  case RouteToTopMostChild:
    local_228 = &
                ___7__TFunction_OwnedObject_P6AMAEBVFSlateRect___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_368._4_4_ = local_358.Top;
    local_368._0_4_ = local_358.Left;
    local_220 = `FNavigationRouting::RouteNavigationFocus'::__l20::<lambda_1>::
                <lambda_invoker_cdecl>;
    local_210 = 0;
    local_238[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<float_(__cdecl*)(FSlateRect_const_&),float,FSlateRect_const_&>
                   ::Call;
    RouteNavigationFocusToEdge
              (__return_storage_ptr__,param_1,1,1,&local_358,(TVector2<float> *)&local_368,
               (TFunction<float___cdecl(FSlateRect_const_&)> *)local_238);
    goto LAB_14251e6d2;
  case RouteToBottomMostChild:
    local_1f8 = &
                ___7__TFunction_OwnedObject_P6AMAEBVFSlateRect___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_1f0 = `FNavigationRouting::RouteNavigationFocus'::__l21::<lambda_2>::
                <lambda_invoker_cdecl>;
    local_208[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<float_(__cdecl*)(FSlateRect_const_&),float,FSlateRect_const_&>
                   ::Call;
    local_368._4_4_ = local_358.Bottom;
    local_368._0_4_ = local_358.Left;
    local_2f0 = local_368;
    pTVar25 = (TFunction<float___cdecl(FSlateRect_const_&)> *)local_208;
    pTVar16 = &local_2f0;
    local_1e0 = 0;
    break;
  case RouteToLeftMostChild:
    local_1c8 = &
                ___7__TFunction_OwnedObject_P6AMAEBVFSlateRect___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_368._4_4_ = local_358.Top;
    local_368._0_4_ = local_358.Left;
    local_1c0 = `FNavigationRouting::RouteNavigationFocus'::__l22::<lambda_3>::
                <lambda_invoker_cdecl>;
    local_1b0 = 0;
    local_1d8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<float_(__cdecl*)(FSlateRect_const_&),float,FSlateRect_const_&>
                   ::Call;
    local_2e8 = local_368;
    RouteNavigationFocusToEdge
              (__return_storage_ptr__,param_1,1,0,&local_358,(TVector2<float> *)&local_2e8._s_0,
               (TFunction<float___cdecl(FSlateRect_const_&)> *)local_1d8);
    goto LAB_14251e6d2;
  case RouteToRightMostChild:
    local_198 = &
                ___7__TFunction_OwnedObject_P6AMAEBVFSlateRect___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    iVar17 = 0;
    local_368._4_4_ = local_358.Top;
    local_368._0_4_ = local_358.Right;
    local_190 = `FNavigationRouting::RouteNavigationFocus'::__l23::<lambda_4>::
                <lambda_invoker_cdecl>;
    local_1a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<float_(__cdecl*)(FSlateRect_const_&),float,FSlateRect_const_&>
                   ::Call;
    local_2e0 = local_368;
    pTVar25 = (TFunction<float___cdecl(FSlateRect_const_&)> *)local_1a8;
    pTVar16 = &local_2e0;
    local_180 = 0;
    goto LAB_14251e41e;
  case RouteToTopLeftChild:
    local_168 = &
                ___7__TFunction_OwnedObject_P6AMAEBVFSlateRect___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_368._4_4_ = local_358.Top;
    local_368._0_4_ = local_358.Left;
    local_160 = `FNavigationRouting::RouteNavigationFocus'::__l24::<lambda_5>::
                <lambda_invoker_cdecl>;
    iVar17 = 1;
    iVar18 = 1;
    local_150 = 0;
    local_178[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<float_(__cdecl*)(FSlateRect_const_&),float,FSlateRect_const_&>
                   ::Call;
    local_2d8 = local_368;
    pTVar25 = (TFunction<float___cdecl(FSlateRect_const_&)> *)local_178;
    pTVar16 = &local_2d8;
    goto LAB_14251e424;
  case RouteToTopRightChild:
    local_138 = &
                ___7__TFunction_OwnedObject_P6AMAEBVFSlateRect___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_368._4_4_ = local_358.Top;
    local_368._0_4_ = local_358.Left;
    local_130 = `FNavigationRouting::RouteNavigationFocus'::__l25::<lambda_6>::
                <lambda_invoker_cdecl>;
    iVar18 = 1;
    local_120 = 0;
    local_148[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<float_(__cdecl*)(FSlateRect_const_&),float,FSlateRect_const_&>
                   ::Call;
    local_2d0 = local_368;
    pTVar25 = (TFunction<float___cdecl(FSlateRect_const_&)> *)local_148;
    pTVar16 = &local_2d0;
    iVar17 = iVar18;
    goto LAB_14251e424;
  case RouteToBottomLeftChild:
    local_108 = &
                ___7__TFunction_OwnedObject_P6AMAEBVFSlateRect___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_100 = `FNavigationRouting::RouteNavigationFocus'::__l26::<lambda_7>::
                <lambda_invoker_cdecl>;
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<float_(__cdecl*)(FSlateRect_const_&),float,FSlateRect_const_&>
                   ::Call;
    local_368._4_4_ = local_358.Bottom;
    local_368._0_4_ = local_358.Left;
    local_2c8 = local_368;
    pTVar25 = (TFunction<float___cdecl(FSlateRect_const_&)> *)local_118;
    pTVar16 = &local_2c8;
    local_f0 = 0;
    break;
  case RouteToBottomRightChild:
    local_d8 = &
               ___7__TFunction_OwnedObject_P6AMAEBVFSlateRect___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_d0 = `FNavigationRouting::RouteNavigationFocus'::__l27::<lambda_8>::<lambda_invoker_cdecl>
    ;
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<float_(__cdecl*)(FSlateRect_const_&),float,FSlateRect_const_&>
                  ::Call;
    local_368._4_4_ = local_358.Bottom;
    local_368._0_4_ = local_358.Left;
    local_2c0 = local_368;
    pTVar25 = (TFunction<float___cdecl(FSlateRect_const_&)> *)local_e8;
    pTVar16 = &local_2c0;
    local_c0 = 0;
  }
  local_368._4_4_ = local_358.Bottom;
  local_368._0_4_ = local_358.Left;
  iVar17 = 1;
LAB_14251e41e:
  iVar18 = -1;
LAB_14251e424:
  RouteNavigationFocusToEdge
            (__return_storage_ptr__,param_1,iVar18,iVar17,&local_358,
             (TVector2<float> *)&pTVar16->_s_0,pTVar25);
LAB_14251e6d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  return __return_storage_ptr__;
}

// RouteNavigationFocusToEdge @ 14251e730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<SWidget,1> * __cdecl
FNavigationRouting::RouteNavigationFocusToEdge
          (TSharedPtr<SWidget,1> *__return_storage_ptr__,FNavigationRoutingParams *param_1,
          int param_2,int param_3,FSlateRect *param_4,TVector2<float> *param_5,
          TFunction<float___cdecl(FSlateRect_const_&)> *param_6)

{
  FSlateWidgetPersistentState *pFVar1;
  code *pcVar2;
  FNavigationReply *pFVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  FHittestGrid *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  atomic<int> aVar10;
  uint uVar11;
  uint uVar12;
  float afVar13 [2];
  float afVar14 [2];
  float afVar15 [2];
  float afVar16 [2];
  float fVar17;
  bool bVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  atomic<int> aVar24;
  undefined8 uVar25;
  TSharedPtr<SWidget,1> *pTVar26;
  FWidgetData *pFVar27;
  FGeometry *pFVar28;
  FSlateRotatedRect *pFVar29;
  int iVar30;
  ForElementType<FHittestGrid::FWidgetIndex> FVar31;
  longlong *plVar32;
  SWidget *pSVar33;
  int *piVar34;
  longlong lVar35;
  TIntPoint<int>_u_0_s_0 TVar36;
  TReferenceControllerBase<1> *pTVar37;
  int iVar38;
  TReferenceControllerBase<1> *pTVar39;
  TVector2<float>_u_0_s_0 TVar40;
  TVector2<float>_u_0_s_0 this;
  uint uVar41;
  uint uVar42;
  TReferenceControllerBase<1> *pTVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_8f8 [32];
  longlong local_8d8;
  longlong local_8d0;
  TVector2<float>_u_0_s_0 local_8c8;
  int local_8c0;
  int iStack_8bc;
  uint local_8b8;
  undefined8 local_8b0;
  TVector2<float>_u_0_s_0 local_8a8;
  int local_8a0;
  int local_89c;
  uint local_898;
  int local_894;
  uint local_890;
  TReferenceControllerBase<1> *local_888;
  TFunction<float___cdecl(FSlateRect_const_&)> *local_880;
  TReferenceControllerBase<1> *local_878;
  int local_870;
  FNavigationRoutingParams *local_868;
  undefined8 local_860;
  float local_858;
  float fStack_854;
  longlong local_850;
  float local_848;
  float fStack_844;
  TSharedPtr<SWidget,1> *local_840;
  float local_838;
  float local_834;
  float local_830;
  float local_82c;
  TVector2<float>_u_0 local_828;
  undefined4 local_820;
  undefined8 local_81c;
  undefined4 local_814;
  TIntPoint<int>_u_0_s_0 local_810;
  FSlateRect *local_808;
  int *local_800;
  TIntPoint<int>_u_0_s_0 local_7f8;
  int *local_7f0;
  undefined8 local_7e4;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  float fStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  TTransform2<float> TStack_7bc;
  undefined4 uStack_7a4;
  TTransform2<float> local_7a0;
  TTransform2<float> local_788;
  TVector2<float>_u_0_s_0 local_770;
  FSlateRotatedRect local_750;
  TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_738;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_8f8;
  uVar41 = 0;
  local_808 = param_4;
  local_880 = param_6;
  local_8b8 = 0;
  local_890 = param_3;
  local_870 = param_2;
  local_868 = param_1;
  local_840 = __return_storage_ptr__;
  UE::Core::Private::Function::CheckCallable(*(void **)param_6);
  pcVar2 = *(code **)param_6;
  plVar32 = (longlong *)&param_6->field_0x10;
  if (*(longlong **)&param_6->field_0x28 != (longlong *)0x0) {
    plVar32 = *(longlong **)&param_6->field_0x28;
  }
  uVar25 = (**(code **)(*plVar32 + 8))();
  fVar44 = (float)(*pcVar2)(uVar25);
  fVar17 = __real_7f7fffff;
  afVar15 = _UNK_15076b188;
  afVar13 = ___xmm_3f80000000000000000000003f800000;
  uVar12 = __xmm_80000000800000008000000080000000;
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_8a8 = (param_5->field0_0x0)._s_0;
  TVar36 = (param_1->HittestGrid->NumCells).field0_0x0._s_0;
  iVar23 = TVar36.Y;
  iVar38 = iVar23 + -1;
  iVar22 = TVar36.X;
  local_8a0 = iVar22 + -1;
  iVar20 = (int)ROUND((local_8a8.Y / FHittestGrid::CellSize.field0_0x0._s_0.Y +
                      local_8a8.Y / FHittestGrid::CellSize.field0_0x0._s_0.Y) - __real_3f000000) >>
           1;
  iVar30 = 0;
  if (0 < iVar20) {
    iVar30 = iVar20;
  }
  iVar21 = (int)ROUND((local_8a8.X / FHittestGrid::CellSize.field0_0x0._s_0.X +
                      local_8a8.X / FHittestGrid::CellSize.field0_0x0._s_0.X) - __real_3f000000) >>
           1;
  iVar20 = 0;
  if (0 < iVar21) {
    iVar20 = iVar21;
  }
  local_8c0 = local_8a0;
  if (iVar20 < local_8a0) {
    local_8c0 = iVar20;
  }
  iStack_8bc = iVar38;
  if (iVar30 < iVar38) {
    iStack_8bc = iVar30;
  }
  if (local_890 == 0) {
    iVar20 = 1;
    fVar45 = (__real_40000000 / FHittestGrid::CellSize.field0_0x0._s_0.Y) * param_4->Bottom;
    iVar30 = (int)ROUND((__real_40000000 / FHittestGrid::CellSize.field0_0x0._s_0.Y) * param_4->Top
                        - __real_3f000000) >> 1;
    iVar22 = 0;
    if (0 < iVar30) {
      iVar22 = iVar30;
    }
    local_8a0 = iVar38;
    if (iVar22 < iVar38) {
      local_8a0 = iVar22;
    }
  }
  else {
    iVar20 = 0;
    fVar45 = (__real_40000000 / FHittestGrid::CellSize.field0_0x0._s_0.X) * param_4->Right;
    iVar23 = (int)ROUND((__real_40000000 / FHittestGrid::CellSize.field0_0x0._s_0.X) * param_4->Left
                        - __real_3f000000) >> 1;
    iVar30 = 0;
    if (0 < iVar23) {
      iVar30 = iVar23;
    }
    iVar23 = iVar22;
    if (iVar30 < local_8a0) {
      local_8a0 = iVar30;
    }
  }
  iVar30 = (int)ROUND(fVar45 - __real_3f000000) >> 1;
  iVar22 = 0;
  if (0 < iVar30) {
    iVar22 = iVar30;
  }
  TVar40 = local_8c8;
  uVar42 = local_890;
  local_89c = iVar23 + -1;
  local_894 = iVar20;
  local_810 = TVar36;
  local_7f8 = TVar36;
  if (iVar22 < iVar23 + -1) {
    local_89c = iVar22;
  }
  while( true ) {
    if ((1 < uVar42) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar26;
    }
    iVar22 = iStack_8bc;
    if (uVar42 == 0) {
      iVar22 = local_8c0;
    }
    if (iVar22 < 0) break;
    if ((1 < uVar42) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar26;
    }
    piVar34 = &iStack_8bc;
    if (uVar42 == 0) {
      piVar34 = &local_8c0;
    }
    local_7f0 = piVar34;
    if ((1 < uVar42) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar26;
    }
    iVar22 = local_810.Y;
    if (uVar42 == 0) {
      iVar22 = TVar36.X;
    }
    if (iVar22 <= *piVar34) break;
    local_8b0 = CONCAT44(iStack_8bc,local_8c0);
    local_8a8.X = 0.0;
    local_8a8.Y = 0.0;
    local_800 = (int *)((longlong)&local_8b0 + 4);
    if (iVar20 == 0) {
      local_800 = (int *)&local_8b0;
    }
    local_888 = (TReferenceControllerBase<1> *)0x0;
    *local_800 = local_8a0;
    pTVar37 = local_878;
    fVar45 = fVar17;
    while( true ) {
      TVar36 = local_7f8;
      pTVar26 = local_840;
      uVar42 = local_890;
      iVar22 = local_8b0._4_4_;
      iVar30 = (int)local_8b0;
      iVar23 = local_8b0._4_4_;
      if (iVar20 == 0) {
        iVar23 = iVar30;
      }
      if (local_89c < iVar23) break;
      local_738.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid::FWidgetIndex>)0x0;
      local_738.ArrayNum = 0;
      local_738.ArrayMax = 100;
      FHittestGrid::GetCollapsedWidgets(param_1->HittestGrid,&local_738,iVar30,local_8b0._4_4_);
      local_898 = local_738.ArrayNum - 1;
      if (-1 < (int)local_898) {
        local_850 = (longlong)(int)local_898;
        lVar35 = local_850 << 4;
        do {
          uVar42 = 0;
          if ((int)local_898 < local_738.ArrayNum) {
            uVar42 = ~local_898 >> 0x1f;
          }
          local_878 = (TReferenceControllerBase<1> *)lVar35;
          if (uVar42 == 0) {
            local_8d0 = (longlong)local_738.ArrayNum;
            local_8d8 = local_850;
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar2 = (code *)swi(3);
              pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
              return pTVar26;
            }
          }
          FVar31 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_738;
          if (local_738.AllocatorInstance.SecondaryData !=
              (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
            FVar31 = local_738.AllocatorInstance.SecondaryData;
          }
          pFVar27 = FHittestGrid::FWidgetIndex::GetWidgetData
                              ((FWidgetIndex *)((longlong)FVar31 + lVar35));
          this.X = 0.0;
          this.Y = 0.0;
          pTVar39 = (pFVar27->WeakWidget).WeakReferenceCount.ReferenceController;
          if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
            aVar10 = pTVar39->SharedReferenceCount;
            do {
              if (aVar10 == (atomic<int>)0x0) {
                pTVar39 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_14251ef32;
              }
              LOCK();
              aVar24 = pTVar39->SharedReferenceCount;
              bVar18 = aVar10 == aVar24;
              if (bVar18) {
                pTVar39->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
                aVar24 = aVar10;
              }
              UNLOCK();
              aVar10 = aVar24;
            } while (!bVar18);
            this = (TVector2<float>_u_0_s_0)(pFVar27->WeakWidget).Object;
          }
          if ((this != (TVector2<float>_u_0_s_0)0x0) &&
             (((local_868->UserIndex == -1 || (pFVar27->UserIndex == -1)) ||
              (local_868->UserIndex == pFVar27->UserIndex)))) {
            pFVar3 = local_868->NavigationReply;
            uVar42 = uVar41;
            if (pFVar3->BoundaryRule == Escape) {
LAB_14251ec99:
              bVar18 = false;
            }
            else {
              pSVar4 = (pFVar3->EventHandler).Object;
              uVar42 = uVar41 | 1;
              TVar40 = (TVector2<float>_u_0_s_0)
                       (pFVar3->EventHandler).SharedReferenceCount.ReferenceController;
              if (TVar40 != (TVector2<float>_u_0_s_0)0x0) {
                LOCK();
                ((TReferenceControllerBase<1> *)TVar40)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)((TReferenceControllerBase<1> *)TVar40)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_8c8 = TVar40;
              if (pSVar4 == (SWidget *)0x0) goto LAB_14251ec99;
              local_8b8 = uVar41 | 3;
              pTVar37 = (local_868->NavigationReply->EventHandler).SharedReferenceCount.
                        ReferenceController;
              pSVar4 = (local_868->NavigationReply->EventHandler).Object;
              if (pTVar37 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar37->SharedReferenceCount =
                     (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
                UNLOCK();
              }
              pTVar43 = (pFVar27->WeakWidget).WeakReferenceCount.ReferenceController;
              pSVar33 = (SWidget *)0x0;
              if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
                aVar10 = pTVar43->SharedReferenceCount;
                do {
                  if (aVar10 == (atomic<int>)0x0) {
                    pTVar43 = (TReferenceControllerBase<1> *)0x0;
                    goto LAB_14251ec14;
                  }
                  LOCK();
                  aVar24 = pTVar43->SharedReferenceCount;
                  bVar18 = aVar10 == aVar24;
                  if (bVar18) {
                    pTVar43->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
                    aVar24 = aVar10;
                  }
                  UNLOCK();
                  aVar10 = aVar24;
                } while (!bVar18);
                pSVar33 = (pFVar27->WeakWidget).Object;
              }
LAB_14251ec14:
              if (pSVar33 != pSVar4) {
                while (pSVar33 != (SWidget *)0x0) {
                  if (pSVar4 == pSVar33) {
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar43);
                    TVar40 = local_8c8;
                    uVar42 = local_8b8;
                    goto LAB_14251ec99;
                  }
                  pTVar5 = (pSVar33->PersistentState).PaintParent.WeakReferenceCount.
                           ReferenceController;
                  pFVar1 = &pSVar33->PersistentState;
                  pSVar33 = (SWidget *)0x0;
                  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                    aVar10 = pTVar5->SharedReferenceCount;
                    do {
                      if (aVar10 == (atomic<int>)0x0) {
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)0x0);
                        goto LAB_14251ec55;
                      }
                      LOCK();
                      aVar24 = pTVar5->SharedReferenceCount;
                      bVar18 = aVar10 == aVar24;
                      if (bVar18) {
                        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
                        aVar24 = aVar10;
                      }
                      UNLOCK();
                      aVar10 = aVar24;
                    } while (!bVar18);
                    pSVar33 = (pFVar1->PaintParent).Object;
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar5);
                }
              }
LAB_14251ec55:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar43);
              bVar18 = true;
              TVar40 = local_8c8;
              uVar42 = local_8b8;
            }
            if ((uVar42 & 2) != 0) {
              uVar42 = uVar42 & 0xfffffffd;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar37);
            }
            if ((uVar42 & 1) != 0) {
              uVar42 = uVar42 & 0xfffffffe;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)TVar40);
            }
            uVar41 = uVar42;
            if (((!bVar18) &&
                (*(TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
                  ((longlong)this + 0x3a) !=
                 (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) &&
               (cVar19 = (**(code **)(*(longlong *)this + 0x198))(this), cVar19 != '\0')) {
              pFVar6 = local_868->HittestGrid;
              pFVar28 = SWidget::GetPaintSpaceGeometry((SWidget *)this);
              afVar16 = _UNK_15076b188;
              afVar14 = ___xmm_3f80000000000000000000003f800000;
              ___xmm_3f80000000000000000000003f800000 = afVar13[0];
              _UNK_15076b184 = afVar13[1];
              local_7a0.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
              local_7a0.M.M[0][1] = _UNK_15076b184;
              _UNK_15076b188 = afVar15[0];
              _UNK_15076b18c = afVar15[1];
              local_7a0.M.M[1][0] = _UNK_15076b188;
              local_7a0.M.M[1][1] = _UNK_15076b18c;
              uVar25 = *(undefined8 *)&(pFVar28->AbsolutePosition).field0_0x0._s_0.Y;
              uVar7 = *(undefined8 *)&(pFVar28->Position).field0_0x0._s_0.Y;
              uVar8 = *(undefined8 *)((pFVar28->AccumulatedRenderTransform).M.M[0] + 1);
              uVar9 = *(undefined8 *)((pFVar28->AccumulatedRenderTransform).M.M[1] + 1);
              local_7d8 = *(undefined4 *)&pFVar28->Size;
              uStack_7d4 = *(undefined4 *)&(pFVar28->Size).field_0x4;
              fVar46 = pFVar28->Scale;
              fStack_7cc = (pFVar28->AbsolutePosition).field0_0x0._s_0.X;
              local_8c8 = (pFVar28->AbsolutePosition).field0_0x0._s_0;
              fStack_7c8 = (float)uVar25;
              uStack_7c4 = (undefined4)((ulonglong)uVar25 >> 0x20);
              uStack_7c0 = (undefined4)uVar7;
              TStack_7bc.M.M[0][0] = (float)((ulonglong)uVar7 >> 0x20);
              uVar25 = *(undefined8 *)&(pFVar28->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y
              ;
              TStack_7bc.Trans.field0_0x0._s_0.Y = (float)uVar25;
              uStack_7a4 = (undefined4)((ulonglong)uVar25 >> 0x20);
              TStack_7bc.M.M[0][1] = (float)uVar8;
              TStack_7bc.M.M[1][0] = (float)((ulonglong)uVar8 >> 0x20);
              TStack_7bc.M.M[1][1] = (float)uVar9;
              TStack_7bc.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar9 >> 0x20);
              fStack_844 = (float)((uint)(pFVar6->GridWindowOrigin).field0_0x0._s_0.Y ^ uVar12);
              local_848 = (float)((uint)(pFVar6->GridWindowOrigin).field0_0x0._s_0.X ^ uVar12);
              local_860 = CONCAT44(fStack_844,local_848);
              local_858 = local_848 + local_8c8.X;
              fStack_854 = fStack_844 + local_8c8.Y;
              ___xmm_3f80000000000000000000003f800000 = afVar14;
              _UNK_15076b188 = afVar16;
              local_7e4 = local_860;
              fStack_7d0 = fVar46;
              local_7a0.Trans.field0_0x0._s_0.X = local_848;
              local_7a0.Trans.field0_0x0._s_0.Y = fStack_844;
              Concatenate<TTransform2<float>_>(&local_788,&TStack_7bc,&local_7a0);
              TStack_7bc.M.M[0][0] = local_788.M.M[0][0];
              TStack_7bc.M.M[0][1] = local_788.M.M[0][1];
              TStack_7bc.M.M[1][0] = local_788.M.M[1][0];
              TStack_7bc.M.M[1][1] = local_788.M.M[1][1];
              fStack_7cc = local_858;
              fStack_7c8 = fStack_854;
              local_8c8 = (TVector2<float>_u_0_s_0)CONCAT44(uStack_7d4,local_7d8);
              local_820 = local_7d8;
              local_814 = uStack_7d4;
              TStack_7bc.Trans.field0_0x0._s_0.X = local_788.Trans.field0_0x0._0_4_;
              TStack_7bc.Trans.field0_0x0._s_0.Y = local_788.Trans.field0_0x0._4_4_;
              local_828 = (TVector2<float>_u_0)0x0;
              local_81c = 0;
              fStack_7d0 = fVar46;
              pFVar29 = TransformRect<TTransform2<float>_>
                                  (&local_750,&TStack_7bc,(FSlateRotatedRect *)&local_828._s_0);
              local_770 = (pFVar29->TopLeft).field0_0x0._s_0;
              fVar46 = (pFVar29->ExtentY).field0_0x0._s_0.X;
              fVar48 = (pFVar29->TopLeft).field0_0x0._s_0.X;
              fVar49 = (pFVar29->TopLeft).field0_0x0._s_0.Y;
              local_830 = fVar46 + fVar48;
              fVar47 = (pFVar29->ExtentY).field0_0x0._s_0.Y;
              fVar48 = fVar48 + (pFVar29->ExtentX).field0_0x0._s_0.X;
              local_82c = fVar47 + fVar49;
              fVar49 = fVar49 + (pFVar29->ExtentX).field0_0x0._s_0.Y;
              local_838 = local_830;
              if (fVar48 <= local_830) {
                local_838 = fVar48;
              }
              fVar46 = fVar46 + fVar48;
              fVar47 = fVar47 + fVar49;
              if (fVar46 <= local_838) {
                local_838 = fVar46;
              }
              if (local_770.X <= local_838) {
                local_838 = local_770.X;
              }
              if (local_830 <= fVar48) {
                local_830 = fVar48;
              }
              local_834 = local_82c;
              if (fVar49 <= local_82c) {
                local_834 = fVar49;
              }
              if (local_82c <= fVar49) {
                local_82c = fVar49;
              }
              if (local_830 <= fVar46) {
                local_830 = fVar46;
              }
              if (fVar47 <= local_834) {
                local_834 = fVar47;
              }
              if (local_82c <= fVar47) {
                local_82c = fVar47;
              }
              if (local_830 <= local_770.X) {
                local_830 = local_770.X;
              }
              if (local_770.Y <= local_834) {
                local_834 = local_770.Y;
              }
              if (local_82c <= local_770.Y) {
                local_82c = local_770.Y;
              }
              if (((local_808->Left <= local_830) &&
                  (local_838 < local_808->Right || local_838 == local_808->Right)) &&
                 ((local_808->Top <= local_82c &&
                  (local_834 < local_808->Bottom || local_834 == local_808->Bottom)))) {
                UE::Core::Private::Function::CheckCallable(*(void **)local_880);
                pcVar2 = *(code **)local_880;
                plVar32 = *(longlong **)&local_880->field_0x28;
                if (*(longlong **)&local_880->field_0x28 == (longlong *)0x0) {
                  plVar32 = (longlong *)&local_880->field_0x10;
                }
                uVar25 = (**(code **)(*plVar32 + 8))();
                fVar46 = (float)(*pcVar2)(uVar25);
                pTVar43 = local_888;
                fVar46 = (float)((uint)(fVar46 - fVar44) & uVar11);
                if ((local_8a8 == (TVector2<float>_u_0_s_0)0x0) || (fVar46 < fVar45)) {
                  if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar39->SharedReferenceCount =
                         (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_8a8 = this;
                  local_888 = pTVar39;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar43);
                  fVar45 = fVar46;
                }
              }
            }
          }
LAB_14251ef32:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar39);
          local_898 = local_898 - 1;
          local_850 = local_850 + -1;
          lVar35 = (longlong)local_878 + -0x10;
        } while (-1 < (int)local_898);
        iVar30 = (int)local_8b0;
        param_1 = local_868;
        iVar22 = local_8b0._4_4_;
        iVar20 = local_894;
        local_878 = pTVar37;
      }
      if (local_738.AllocatorInstance.SecondaryData !=
          (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
        FMemory::Free((void *)local_738.AllocatorInstance.SecondaryData);
      }
      if (iVar20 == 0) {
        iVar22 = iVar30;
      }
      *local_800 = iVar22 + 1;
    }
    if (local_8a8 != (TVector2<float>_u_0_s_0)0x0) {
      local_840->Object = (SWidget *)local_8a8;
      (local_840->SharedReferenceCount).ReferenceController = local_888;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (*(longlong *)local_880 == 0) {
        return pTVar26;
      }
      plVar32 = (longlong *)&local_880->field_0x10;
      if (*(longlong **)&local_880->field_0x28 != (longlong *)0x0) {
        plVar32 = *(longlong **)&local_880->field_0x28;
      }
      (**(code **)(*plVar32 + 0x10))();
      return pTVar26;
    }
    if ((1 < local_890) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar26;
    }
    iVar22 = iStack_8bc;
    if (uVar42 == 0) {
      iVar22 = local_8c0;
    }
    *local_7f0 = iVar22 + local_870;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_888);
  }
  pTVar26 = local_840;
  local_840->Object = (param_1->FocusedWidget).Object;
  pTVar37 = (param_1->FocusedWidget).SharedReferenceCount.ReferenceController;
  (local_840->SharedReferenceCount).ReferenceController = pTVar37;
  if (pTVar37 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (*(longlong *)local_880 != 0) {
    plVar32 = (longlong *)&local_880->field_0x10;
    if (*(longlong **)&local_880->field_0x28 != (longlong *)0x0) {
      plVar32 = *(longlong **)&local_880->field_0x28;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  return pTVar26;
}

