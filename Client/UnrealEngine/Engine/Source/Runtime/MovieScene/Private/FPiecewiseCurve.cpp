// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// operator() @ 14609bfa0

bool __thiscall
`UE::MovieScene::FPiecewiseCurve::InverseEvaluate'::__l2::<lambda_1>::operator()
          (void *this,FFrameTime param_1)

{
  byte bVar1;
  undefined8 uVar2;
  int *piVar3;
  FFrameTime *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FFrameNumber FVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  float fVar11;
  double dVar12;
  float fStackX_c;
  FFrameTime local_res10;
  undefined8 local_res18;
  int local_38 [8];
  
  bVar1 = *(byte *)this;
  FVar9 = param_1.FrameNumber.Value;
  fStackX_c = param_1.SubFrame;
  if ((((bVar1 & 4) != 0) || (FVar9.Value != (int)*(undefined8 *)((longlong)this + 4))) ||
     (local_res18._4_4_ = (float)((ulonglong)*(undefined8 *)((longlong)this + 4) >> 0x20),
     fStackX_c != local_res18._4_4_)) {
    if ((bVar1 & 2) == 0) {
      iVar8 = (int)*(undefined8 *)((longlong)this + 4);
      if (FVar9.Value < iVar8) {
        return false;
      }
      if ((FVar9.Value == iVar8) &&
         (local_res18._4_4_ = (float)((ulonglong)*(undefined8 *)((longlong)this + 4) >> 0x20),
         fStackX_c < local_res18._4_4_)) {
        return false;
      }
    }
    if ((bVar1 & 1) == 0) {
      iVar8 = (int)*(undefined8 *)((longlong)this + 4);
      if (iVar8 < FVar9.Value) {
        return false;
      }
      if ((FVar9.Value == iVar8) &&
         (local_res18._4_4_ = (float)((ulonglong)*(undefined8 *)((longlong)this + 4) >> 0x20),
         local_res18._4_4_ < fStackX_c)) {
        return false;
      }
    }
    if (((bVar1 & 8) != 0) || (*(int *)((longlong)this + 0xc) == 0)) {
      uVar2 = *(undefined8 *)((longlong)this + 4);
      local_res18._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      auVar10 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - local_res18._4_4_)),1);
      fVar11 = (fStackX_c - local_res18._4_4_) - auVar10._0_4_;
      if (::FFrameTime::MaxSubframe <= fVar11) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      iVar8 = *(int *)((longlong)this + 0xc);
      if (iVar8 < 0) {
        iVar8 = -iVar8;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      dVar12 = (double)((int)auVar10._0_4_ + (FVar9.Value - (int)uVar2)) + (double)fVar11;
      dVar12 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      if (*(char *)(*(longlong *)((longlong)this + 0x18) + 8) != '\0') {
        piVar3 = *(int **)((longlong)this + 0x28);
        if (((char)piVar3[1] == '\0') &&
           (local_res18 = uVar2,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (*piVar3 < iVar8) {
          return false;
        }
        if (**(double **)((longlong)this + 0x20) <= dVar12 &&
            dVar12 != **(double **)((longlong)this + 0x20)) {
          return false;
        }
      }
      pFVar4 = *(FFrameTime **)((longlong)this + 0x18);
      if (&local_res10 != pFVar4) {
        *pFVar4 = param_1;
        *(undefined1 *)&pFVar4[1].FrameNumber.Value = 1;
      }
      **(double **)((longlong)this + 0x20) = dVar12;
      piVar3 = *(int **)((longlong)this + 0x28);
      if (local_38 != piVar3) {
        *piVar3 = iVar8;
        *(undefined1 *)(piVar3 + 1) = 1;
      }
      return true;
    }
  }
  return false;
}

// Derivative @ 1460bc690

FPiecewiseCurve * __thiscall
UE::MovieScene::FPiecewiseCurve::Derivative
          (FPiecewiseCurve *this,FPiecewiseCurve *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FPiecewiseCurve *pFVar6;
  FCachedInterpolation *this_00;
  FScriptContainerElement *pFVar7;
  FCachedInterpolation *pFVar8;
  undefined1 local_res8 [8];
  TOptional<UE::MovieScene::Interpolation::FCachedInterpolation> local_98;
  
  (__return_storage_ptr__->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Values).ArrayNum = 0;
  (__return_storage_ptr__->Values).ArrayMax = 0;
  iVar1 = (this->Values).ArrayNum;
  this_00 = (FCachedInterpolation *)(this->Values).AllocatorInstance.Data;
  pFVar8 = this_00 + iVar1;
  while( true ) {
    if ((this->Values).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::Interpolation::FCachedInterpolation_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar8) break;
    Interpolation::FCachedInterpolation::ComputeDerivative(this_00,&local_98);
    if (local_98.bIsSet == false) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5801598066309988312>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieScenePiecewiseCurve.cpp"
                         ,0x28,"DerivativePiece.IsSet()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FPiecewiseCurve *)(*pcVar2)();
        return pFVar6;
      }
    }
    else {
      iVar5 = (__return_storage_ptr__->Values).ArrayNum;
      if (iVar5 == (__return_storage_ptr__->Values).ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x860,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->Values).ArrayMax);
      }
      uVar3 = local_98.TypedValue.Data._80_8_;
      (__return_storage_ptr__->Values).ArrayNum = iVar5 + 1;
      pFVar7 = (__return_storage_ptr__->Values).AllocatorInstance.Data + (longlong)iVar5 * 0x60;
      pFVar7[0x50] = local_98.TypedValue.Data.TypeIndex;
      if (7 < (byte)local_98.TypedValue.Data.TypeIndex) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xec,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FPiecewiseCurve *)(*pcVar2)();
          return pFVar6;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                  ::__l2::CopyConstructors)[uVar3 & 0xff])(pFVar7,&local_98);
      *(FCachedInterpolationRange *)(pFVar7 + 0x58) = local_98.TypedValue.Range;
    }
    this_00 = this_00 + 1;
  }
  return __return_storage_ptr__;
}

// Evaluate @ 1460c2dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::MovieScene::FPiecewiseCurve::Evaluate(FPiecewiseCurve *this,FFrameTime param_1,double *param_2)

{
  bool bVar1;
  undefined1 auStack_98 [32];
  FCachedInterpolation local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  GetInterpolationForTime(this,&local_78,param_1);
  if (local_78.Range.Start.Value < local_78.Range.End.Value) {
    bVar1 = Interpolation::FCachedInterpolation::Evaluate(&local_78,param_1,param_2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// GetInterpolationForTime @ 1460cce00

FCachedInterpolation * __thiscall
UE::MovieScene::FPiecewiseCurve::GetInterpolationForTime
          (FPiecewiseCurve *this,FCachedInterpolation *__return_storage_ptr__,FFrameTime param_1)

{
  int iVar1;
  FCachedInterpolationRange FVar2;
  int iVar3;
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  *pTVar4;
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  *pTVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Values).ArrayNum;
  pTVar5 = (TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
            *)(this->Values).AllocatorInstance.Data;
  pTVar4 = (TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
            *)((longlong)pTVar5 + (longlong)iVar1 * 0x60);
  while( true ) {
    if ((this->Values).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::MovieScene::Interpolation::FCachedInterpolation_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar5 == pTVar4) break;
    if (((int)pTVar5[1]._padding_ <= param_1.FrameNumber.Value.Value) &&
       ((iVar3 = (int)((ulonglong)pTVar5[1]._padding_ >> 0x20),
        param_1.FrameNumber.Value.Value < iVar3 || (iVar3 == 0x7fffffff)))) {
      TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
      ::
      TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
                (&__return_storage_ptr__->Data,pTVar5);
      FVar2 = (FCachedInterpolationRange)pTVar5[1]._padding_;
LAB_1460cce88:
      __return_storage_ptr__->Range = FVar2;
      return __return_storage_ptr__;
    }
    pTVar5 = (TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
              *)&pTVar5[1]._padding_;
  }
  (__return_storage_ptr__->Data).TypeIndex = '\0';
  FVar2.Start.Value = 0;
  FVar2.End.Value = -1;
  goto LAB_1460cce88;
}

// Integral @ 1460d6bf0

FPiecewiseCurve * __thiscall
UE::MovieScene::FPiecewiseCurve::Integral
          (FPiecewiseCurve *this,FPiecewiseCurve *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  FFrameTime FVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FPiecewiseCurve *pFVar7;
  FCachedInterpolation *this_00;
  FCachedInterpolation *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  double local_res10;
  uint local_res18;
  undefined4 uStackX_1c;
  TOptional<UE::MovieScene::Interpolation::FCachedInterpolation> local_a8;
  
  (__return_storage_ptr__->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Values).ArrayNum = 0;
  (__return_storage_ptr__->Values).ArrayMax = 0;
  iVar1 = (this->Values).ArrayNum;
  this_00 = (FCachedInterpolation *)(this->Values).AllocatorInstance.Data;
  local_res10 = 0.0;
  pFVar8 = this_00 + iVar1;
  while( true ) {
    if ((this->Values).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::Interpolation::FCachedInterpolation_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar8) break;
    Interpolation::FCachedInterpolation::ComputeIntegral(this_00,&local_a8,local_res10);
    if (local_a8.bIsSet == false) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5801598066309988332>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieScenePiecewiseCurve.cpp"
                         ,0x14,"IntegralPiece.IsSet()");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FPiecewiseCurve *)(*pcVar2)();
        return pFVar7;
      }
    }
    else {
      local_res18 = (uint)(this_00->Range).End;
      uStackX_1c = 0;
      FVar3.SubFrame = 0.0;
      FVar3.FrameNumber.Value = local_res18;
      Interpolation::FCachedInterpolation::Evaluate(&local_a8.TypedValue,FVar3,&local_res10);
      if (local_a8.bIsSet == false) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FPiecewiseCurve *)(*pcVar2)();
          return pFVar7;
        }
      }
      iVar6 = (__return_storage_ptr__->Values).ArrayNum;
      if (iVar6 == (__return_storage_ptr__->Values).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x860,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->Values).ArrayMax);
      }
      uVar4 = local_a8.TypedValue.Data._80_8_;
      (__return_storage_ptr__->Values).ArrayNum = iVar6 + 1;
      pFVar9 = (__return_storage_ptr__->Values).AllocatorInstance.Data + (longlong)iVar6 * 0x60;
      pFVar9[0x50] = local_a8.TypedValue.Data.TypeIndex;
      if (7 < (byte)local_a8.TypedValue.Data.TypeIndex) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xec,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FPiecewiseCurve *)(*pcVar2)();
          return pFVar7;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                  ::__l2::CopyConstructors)[uVar4 & 0xff])(pFVar9,&local_a8);
      *(FCachedInterpolationRange *)(pFVar9 + 0x58) = local_a8.TypedValue.Range;
    }
    this_00 = this_00 + 1;
  }
  return __return_storage_ptr__;
}

// InverseEvaluate @ 1460d7df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FFrameTime> * __thiscall
UE::MovieScene::FPiecewiseCurve::InverseEvaluate
          (FPiecewiseCurve *this,TOptional<FFrameTime> *__return_storage_ptr__,double param_1,
          FFrameTime param_2,EInverseEvaluateFlags param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  FFrameTime FVar5;
  FFrameTime FVar6;
  FFrameTime FVar7;
  FPiecewiseCurve *this_00;
  bool bVar8;
  uint uVar9;
  TOptional<FFrameTime> *pTVar10;
  FCachedInterpolation *pFVar11;
  FFrameTime *pFVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  FFrameTime local_338;
  bool local_330;
  uint local_328;
  undefined4 uStack_324;
  uint local_320;
  undefined4 uStack_31c;
  FPiecewiseCurve *local_318;
  uint local_310;
  undefined4 uStack_30c;
  ulonglong local_308;
  undefined8 local_300;
  undefined1 local_2f8 [4];
  undefined1 local_2f4;
  TOptional<FFrameTime> *local_2f0;
  EInverseEvaluateFlags local_2e8 [4];
  FFrameTime local_2e4;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  FFrameTime *local_2d0;
  undefined8 *local_2c8;
  undefined1 *local_2c0;
  FCachedInterpolation local_2b8;
  FCachedInterpolation local_258;
  FCachedInterpolation local_1f8;
  FCachedInterpolation local_198;
  FCachedInterpolation local_138;
  FCachedInterpolation local_d8;
  FFrameTime local_78 [4];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_368;
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 != 0) {
    iVar13 = 0;
    local_318 = this;
    local_2f0 = __return_storage_ptr__;
    if (iVar1 < 1) {
      local_348 = 0;
      local_340 = (longlong)iVar1;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TOptional<FFrameTime> *)(*pcVar4)();
        return pTVar10;
      }
    }
    iVar2 = (this->Values).ArrayNum;
    uVar15 = iVar2 - 1;
    uVar3 = *(undefined4 *)((this->Values).AllocatorInstance.Data + 0x58);
    uVar9 = 0;
    if ((int)uVar15 < iVar2) {
      uVar9 = ~uVar15 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_348 = (longlong)(int)uVar15;
      local_340 = (longlong)iVar2;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TOptional<FFrameTime> *)(*pcVar4)();
        return pTVar10;
      }
    }
    local_308 = *(ulonglong *)
                 ((this->Values).AllocatorInstance.Data +
                 (longlong)(this->Values).ArrayNum * 0x60 + -8) >> 0x20;
    GetInterpolationForTime(this,&local_2b8,param_2);
    if (local_2b8.Range.Start.Value < local_2b8.Range.End.Value) {
      if ((param_3 & Backwards) == 0) {
        local_1f8.Data.TypeIndex = '\0';
        local_1f8.Range.Start.Value = 0;
        local_1f8.Range.End.Value = -1;
        pFVar11 = &local_1f8;
      }
      else {
        local_328 = local_2b8.Range.Start.Value - 1;
        uStack_324 = 0;
        FVar5.SubFrame = 0.0;
        FVar5.FrameNumber.Value = local_328;
        pFVar11 = GetInterpolationForTime(this,&local_198,FVar5);
      }
      TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
      ::
      TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
                (&local_258.Data,&pFVar11->Data);
      this_00 = local_318;
      local_258.Range = pFVar11->Range;
      local_2d4 = (undefined4)local_308;
      local_2d0 = &local_338;
      local_2c8 = &local_300;
      local_2c0 = local_2f8;
      local_300 = __real_7fefffffffffffff;
      local_78[0].FrameNumber.Value = 0;
      local_78[0].SubFrame = 0.0;
      local_78[1].FrameNumber.Value = 0;
      local_78[1].SubFrame = 0.0;
      local_78[2].FrameNumber.Value = 0;
      local_78[2].SubFrame = 0.0;
      local_78[3].FrameNumber.Value = 0;
      local_78[3].SubFrame = 0.0;
      local_330 = false;
      local_2f4 = 0;
      local_2e8[0] = param_3;
      local_2dc = 0;
      local_2e4 = param_2;
      local_2d8 = uVar3;
      if (local_2b8.Range.Start.Value < local_2b8.Range.End.Value) {
        while (iVar13 < iVar1) {
          iVar13 = iVar13 + 1;
          uVar9 = Interpolation::FCachedInterpolation::InverseEvaluate(&local_2b8,param_1,local_78);
          if (0 < (int)uVar9) {
            pFVar12 = local_78;
            uVar14 = (ulonglong)uVar9;
            do {
              `UE::MovieScene::FPiecewiseCurve::InverseEvaluate'::__l2::<lambda_1>::operator()
                        (local_2e8,*pFVar12);
              pFVar12 = pFVar12 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          if (((local_330 != false) || ((param_3 & Forwards) == 0)) ||
             (0x7ffffffe < local_2b8.Range.End.Value)) break;
          local_320 = local_2b8.Range.End.Value + 1;
          uStack_31c = 0;
          FVar6.SubFrame = 0.0;
          FVar6.FrameNumber.Value = local_320;
          pFVar11 = GetInterpolationForTime(this_00,&local_138,FVar6);
          Interpolation::FCachedInterpolation::operator=(&local_2b8,pFVar11);
          if (local_2b8.Range.End.Value <= local_2b8.Range.Start.Value) break;
        }
      }
      if (local_258.Range.Start.Value < local_258.Range.End.Value) {
        while (iVar13 < iVar1) {
          iVar13 = iVar13 + 1;
          uVar9 = Interpolation::FCachedInterpolation::InverseEvaluate(&local_258,param_1,local_78);
          if (0 < (int)uVar9) {
            pFVar12 = local_78;
            uVar14 = (ulonglong)uVar9;
            do {
              `UE::MovieScene::FPiecewiseCurve::InverseEvaluate'::__l2::<lambda_1>::operator()
                        (local_2e8,*pFVar12);
              pFVar12 = pFVar12 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          if ((local_330 != false) || (local_258.Range.Start.Value.Value < -0x7fffffff)) break;
          local_310 = local_258.Range.Start.Value.Value - 1;
          uStack_30c = 0;
          FVar7.SubFrame = 0.0;
          FVar7.FrameNumber.Value = local_310;
          pFVar11 = GetInterpolationForTime(this_00,&local_d8,FVar7);
          Interpolation::FCachedInterpolation::operator=(&local_258,pFVar11);
          if (local_258.Range.End.Value <= local_258.Range.Start.Value) break;
        }
      }
      local_2f0->bIsSet = local_330;
      if (local_330 == false) {
        return local_2f0;
      }
      local_2f0->TypedValue = local_338;
      return local_2f0;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// InverseEvaluateBetween @ 1460d84c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::MovieScene::FPiecewiseCurve::InverseEvaluateBetween
          (FPiecewiseCurve *this,double param_1,FFrameTime param_2,FFrameTime param_3,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uchar uVar12;
  char cVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  FFrameNumber FVar17;
  int iVar18;
  FCachedInterpolationRange FVar19;
  longlong lVar20;
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  *pTVar21;
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  *pTVar22;
  ulonglong uVar23;
  undefined1 auStack_248 [32];
  undefined1 local_228 [8];
  uint local_220;
  undefined4 uStack_21c;
  ulonglong local_218;
  ulonglong local_210;
  FFrameTime local_208;
  FCachedInterpolation local_200;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  local_f0;
  FCachedInterpolationRange local_98;
  ulonglong local_90 [11];
  
  local_90[4] = __security_cookie.value ^ (ulonglong)auStack_248;
  if ((this->Values).ArrayNum != 0) {
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    GetInterpolationForTime(this,&local_200,param_2);
    if (local_200.Range.Start.Value < local_200.Range.End.Value) {
      do {
        lVar20 = 0;
        iVar16 = Interpolation::FCachedInterpolation::InverseEvaluate
                           (&local_200,param_1,(FFrameTime *)local_90);
        if (0 < iVar16) {
          do {
            local_218 = local_90[lVar20];
            cVar13 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_218);
            if (cVar13 == '\0') {
              return false;
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < iVar16);
        }
        FVar17 = local_200.Range.End.Value;
        if (FVar17.Value == 0x7fffffff) {
LAB_1460d8753:
          uVar2 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uVar3 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          local_f8 = local_f8 & 0xffffffffffffff00;
          uVar23 = local_f8;
          FVar17.Value = -1;
          uVar4 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uVar5 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          local_200.Range.Start.Value = 0;
          local_200.Range.End.Value = -1;
          FVar19.Start.Value = 0;
          FVar19.End.Value = 0;
          local_f8 = local_200.Data._80_8_;
          local_200.Data._padding_._0_4_ = (undefined4)local_148;
          local_200.Data._padding_._4_4_ = local_148._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)uStack_140;
          local_200.Data._padding_._4_4_ = uStack_140._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)local_138;
          local_200.Data._padding_._4_4_ = local_138._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)uStack_130;
          local_200.Data._padding_._4_4_ = uStack_130._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)local_128;
          local_200.Data._padding_._4_4_ = local_128._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)uStack_120;
          local_200.Data._padding_._4_4_ = uStack_120._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)local_118;
          local_200.Data._padding_._4_4_ = local_118._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)uStack_110;
          local_200.Data._padding_._4_4_ = uStack_110._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)local_108;
          local_200.Data._padding_._4_4_ = local_108._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)uStack_100;
          local_200.Data._padding_._4_4_ = uStack_100._4_4_;
          local_148 = uVar2;
          uStack_140 = uVar3;
          local_138 = uVar4;
          uStack_130 = uVar5;
          local_128 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uStack_120 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_)
          ;
          local_118 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uStack_110 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_)
          ;
          local_108 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uStack_100 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_)
          ;
        }
        else {
          uStack_21c = 0;
          local_210 = (ulonglong)(uint)FVar17.Value;
          local_220 = FVar17.Value;
          local_208 = param_3;
          if ((param_3.FrameNumber.Value.Value <= FVar17.Value) &&
             ((FVar17.Value != param_3.FrameNumber.Value.Value ||
              (local_208.SubFrame = param_3.SubFrame, bVar14 = local_208.SubFrame <= 0.0, bVar14))))
          goto LAB_1460d8753;
          iVar16 = (this->Values).ArrayNum;
          pTVar21 = (TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
                     *)(this->Values).AllocatorInstance.Data;
          pTVar22 = (TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
                     *)((longlong)pTVar21 + (longlong)iVar16 * 0x60);
          while( true ) {
            if ((this->Values).ArrayNum != iVar16) {
              local_228[0] = 0;
              `TCheckedPointerIterator<UE::MovieScene::Interpolation::FCachedInterpolation_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_228);
            }
            if (pTVar21 == pTVar22) {
              local_f0.TypeIndex = 0;
              local_98.Start.Value = 0;
              local_98.End.Value = -1;
              goto LAB_1460d86a0;
            }
            if (((int)pTVar21[1]._padding_ <= (int)(FVar17.Value + 1U)) &&
               ((iVar18 = (int)((ulonglong)pTVar21[1]._padding_ >> 0x20),
                (int)(FVar17.Value + 1U) < iVar18 || (iVar18 == 0x7fffffff)))) break;
            pTVar21 = (TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
                       *)&pTVar21[1]._padding_;
          }
          TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
          ::
          TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
                    (&local_f0,pTVar21);
          local_98 = (FCachedInterpolationRange)pTVar21[1]._padding_;
LAB_1460d86a0:
          uVar12 = local_f0.TypeIndex;
          local_150 = CONCAT71(local_150._1_7_,local_f0.TypeIndex);
          if ((7 < local_f0.TypeIndex) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0x105,L""), bVar14)) {
            pcVar1 = (code *)swi(3);
            uVar15 = (*pcVar1)();
            return (bool)uVar15;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar12])(&local_1a0,&local_f0);
          uVar23 = local_150;
          uVar2 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uVar3 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uVar4 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uVar5 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          local_200.Range = local_98;
          FVar17 = local_98.End.Value;
          uVar6 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uVar7 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uVar8 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uVar9 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uVar10 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          uVar11 = CONCAT44(local_200.Data._padding_._4_4_,(undefined4)local_200.Data._padding_);
          local_150 = local_200.Data._80_8_;
          FVar19 = local_98;
          local_200.Data._padding_._0_4_ = (undefined4)local_1a0;
          local_200.Data._padding_._4_4_ = local_1a0._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)uStack_198;
          local_200.Data._padding_._4_4_ = uStack_198._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)local_190;
          local_200.Data._padding_._4_4_ = local_190._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)uStack_188;
          local_200.Data._padding_._4_4_ = uStack_188._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)local_180;
          local_200.Data._padding_._4_4_ = local_180._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)uStack_178;
          local_200.Data._padding_._4_4_ = uStack_178._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)local_170;
          local_200.Data._padding_._4_4_ = local_170._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)uStack_168;
          local_200.Data._padding_._4_4_ = uStack_168._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)local_160;
          local_200.Data._padding_._4_4_ = local_160._4_4_;
          local_200.Data._padding_._0_4_ = (undefined4)uStack_158;
          local_200.Data._padding_._4_4_ = uStack_158._4_4_;
          local_1a0 = uVar2;
          uStack_198 = uVar3;
          local_190 = uVar4;
          uStack_188 = uVar5;
          local_180 = uVar6;
          uStack_178 = uVar7;
          local_170 = uVar8;
          uStack_168 = uVar9;
          local_160 = uVar10;
          uStack_158 = uVar11;
        }
        local_200.Data._80_8_ = uVar23;
      } while (FVar19.Start.Value.Value < FVar17.Value);
    }
  }
  return true;
}

// Offset @ 1460dac00

void __thiscall UE::MovieScene::FPiecewiseCurve::Offset(FPiecewiseCurve *this,double param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Values).ArrayNum;
  pFVar6 = (this->Values).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x60;
  do {
    while( true ) {
      if ((this->Values).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::MovieScene::Interpolation::FCachedInterpolation,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar7) {
        return;
      }
      FVar1 = pFVar6[0x50];
      if (FVar1 != (FScriptContainerElement)0x1) break;
      if (pFVar6 == (FScriptContainerElement *)0x0) {
LAB_1460dad1e:
        pFVar5 = pFVar6;
        if (FVar1 != (FScriptContainerElement)0x7) {
          pFVar5 = (FScriptContainerElement *)0x0;
        }
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          *(double *)(pFVar5 + 8) = param_1 + *(double *)(pFVar5 + 8);
          *(double *)(pFVar5 + 0x28) = param_1 + *(double *)(pFVar5 + 0x28);
        }
        pFVar6 = pFVar6 + 0x60;
      }
      else {
        *(double *)pFVar6 = param_1 + *(double *)pFVar6;
        pFVar6 = pFVar6 + 0x60;
      }
    }
    if (FVar1 == (FScriptContainerElement)0x2) {
      if (pFVar6 == (FScriptContainerElement *)0x0) goto LAB_1460dad1e;
      *(double *)(pFVar6 + 8) = param_1 + *(double *)(pFVar6 + 8);
      pFVar6 = pFVar6 + 0x60;
    }
    else if (FVar1 == (FScriptContainerElement)0x3) {
      if (pFVar6 == (FScriptContainerElement *)0x0) goto LAB_1460dad1e;
      *(double *)(pFVar6 + 0x10) = param_1 + *(double *)(pFVar6 + 0x10);
      pFVar6 = pFVar6 + 0x60;
    }
    else if (FVar1 == (FScriptContainerElement)0x4) {
      if (pFVar6 == (FScriptContainerElement *)0x0) goto LAB_1460dad1e;
      *(double *)(pFVar6 + 0x18) = param_1 + *(double *)(pFVar6 + 0x18);
      pFVar6 = pFVar6 + 0x60;
    }
    else if (FVar1 == (FScriptContainerElement)0x5) {
      if (pFVar6 == (FScriptContainerElement *)0x0) goto LAB_1460dad1e;
      *(double *)(pFVar6 + 0x20) = param_1 + *(double *)(pFVar6 + 0x20);
      pFVar6 = pFVar6 + 0x60;
    }
    else {
      if ((FVar1 != (FScriptContainerElement)0x6) || (pFVar6 == (FScriptContainerElement *)0x0))
      goto LAB_1460dad1e;
      auVar3._8_4_ = SUB84(*(double *)(pFVar6 + 0x10) + param_1,0);
      auVar3._0_8_ = *(double *)(pFVar6 + 8) + param_1;
      auVar3._12_4_ = (int)((ulonglong)(*(double *)(pFVar6 + 0x10) + param_1) >> 0x20);
      *(undefined1 (*) [16])(pFVar6 + 8) = auVar3;
      auVar4._8_4_ = SUB84(*(double *)(pFVar6 + 0x20) + param_1,0);
      auVar4._0_8_ = *(double *)(pFVar6 + 0x18) + param_1;
      auVar4._12_4_ = (int)((ulonglong)(*(double *)(pFVar6 + 0x20) + param_1) >> 0x20);
      *(undefined1 (*) [16])(pFVar6 + 0x18) = auVar4;
      pFVar6 = pFVar6 + 0x60;
    }
  } while( true );
}

