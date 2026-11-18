// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 28

// TPolyBezierSpline<UE::Math::TVector<double>_> @ 143567030

TPolyBezierSpline<UE::Math::TVector<double>_> * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::
TPolyBezierSpline<UE::Math::TVector<double>_>(TPolyBezierSpline<UE::Math::TVector<double>_> *this)

{
  uint uVar1;
  ForAnyElementType _Src;
  uint *puVar2;
  longlong lVar3;
  FString local_58;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  TBSpline<UE::Math::TVector<double>,3>::TBSpline<UE::Math::TVector<double>,3>
            ((TBSpline<UE::Math::TVector<double>,3> *)this);
  this->_padding_ =
       (longlong)
       &
       ___7__TSelfRegisteringSpline_V__TPolyBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE__U__TVector_N_Math_4__Spline_Geometry_UE__6B_
  ;
  if (`protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>(void)___ptr64'
      ::__l2::bRegistered == false) {
    `protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>(void)___ptr64'
    ::__l2::bRegistered = true;
    puVar2 = GetStaticTypeId();
    uVar1 = *puVar2;
    ::FString::FString(&local_48,L"PolyBezier");
    _Src = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.AllocatorInstance;
    lVar3 = (longlong)TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax =
           TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_58,
                 TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,lVar3 * 2);
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TPolyBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TPolyBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `UE::Geometry::Spline::
               TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>
               ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
                  ::Call;
    FSplineTypeRegistry::RegisterType
              (uVar1,&local_48,&local_58,
               (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
                *)local_38);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  this->LastEvaluatedSegment = -1;
  this->_padding_ =
       (longlong)
       &_vftable__for__UE__Geometry__Spline__TSplineInterface<UE::Math::TVector<double>_>__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_>__
  ;
  this->_padding_ =
       (longlong)&___7__TPolyBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE__6B_;
  return this;
}

// ~TPolyBezierSpline<UE::Math::TVector<double>_> @ 1435688c0

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::
~TPolyBezierSpline<UE::Math::TVector<double>_>(TPolyBezierSpline<UE::Math::TVector<double>_> *this)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// operator= @ 143569710

TPolyBezierSpline<UE::Math::TVector<double>_> * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::operator=
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,
          TPolyBezierSpline<UE::Math::TVector<double>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&param_1->_padding_)
  ;
  plVar1 = &this->_padding_;
  if (plVar1 != &param_1->_padding_) {
    iVar3 = *(int *)((longlong)&this->_padding_ + 4);
    piVar2 = (int *)((longlong)&this->_padding_ + 4);
    _Src = (void *)param_1->_padding_;
    iVar4 = (int)param_1->_padding_;
    *(int *)&this->_padding_ = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,iVar3,(ForAnyElementType *)plVar1,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((void *)*plVar1,_Src,(longlong)iVar4 << 2);
      }
    }
  }
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  this->LastEvaluatedSegment = param_1->LastEvaluatedSegment;
  return this;
}

// AddBezierSegmentInternal @ 1435737c0

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AddBezierSegmentInternal
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,int param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,
          EParameterizationPolicy param_6,bool param_7)

{
  code *pcVar1;
  FKnot FVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FKnot FVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar10 = (int)this->_padding_;
  iVar5 = (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2;
  iVar10 = iVar5;
  if (param_1 < iVar5) {
    iVar10 = param_1;
  }
  iVar13 = 0;
  if (0 < iVar10) {
    iVar13 = iVar10;
  }
  fVar14 = ComputeSegmentLength(this,param_2,param_5,param_6);
  iVar10 = iVar13 * 4;
  TBSpline<UE::Math::TVector<double>,3>::InsertValue
            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar10,param_2);
  TBSpline<UE::Math::TVector<double>,3>::InsertValue
            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar10 + 1,param_3);
  TBSpline<UE::Math::TVector<double>,3>::InsertValue
            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar10 + 2,param_4);
  TBSpline<UE::Math::TVector<double>,3>::InsertValue
            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar10 + 3,param_5);
  if (param_7) {
    iVar10 = (int)this->_padding_ + -1;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if (iVar13 <= iVar10 + -1) goto LAB_143573979;
    bVar4 = true;
LAB_1435738ad:
    bVar3 = false;
  }
  else {
LAB_143573979:
    bVar4 = false;
    if ((param_7) || (iVar13 != 0)) goto LAB_1435738ad;
    bVar3 = true;
  }
  lVar12 = 8;
  uVar11 = 1;
  uVar6 = 0;
  if (iVar5 == 0) {
    iVar10 = *(int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar10 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)&this->_padding_,0,
                 (int *)((longlong)&this->_padding_ + 4));
    }
    iVar10 = *(int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar10 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&this->_padding_,0,
                 (int *)((longlong)&this->_padding_ + 4));
    }
    uVar7 = 4;
    if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
      uVar7 = 1;
    }
    TBSpline<UE::Math::TVector<double>,3>::InsertKnot
              ((TBSpline<UE::Math::TVector<double>,3> *)this,(FKnot)((ulonglong)uVar7 << 0x20));
    uVar7 = 4;
    if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
      uVar7 = 1;
    }
    FVar2.Multiplicity = uVar7;
    FVar2.Value = 1.0;
    TBSpline<UE::Math::TVector<double>,3>::InsertKnot
              ((TBSpline<UE::Math::TVector<double>,3> *)this,FVar2);
  }
  else {
    if (bVar4) {
      iVar10 = (int)this->_padding_;
      uVar8 = iVar10 - 1;
      uVar7 = uVar6;
      if ((int)uVar8 < iVar10) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        iVar10 = (*pcVar1)();
        return iVar10;
      }
      fVar16 = *(float *)(this->_padding_ + -8 + (longlong)(int)this->_padding_ * 8);
      fVar15 = Spline::Internal::NextafterNoSubnormal(fVar16,true);
      fVar16 = fVar16 + fVar14;
      uVar7 = 3;
      if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
        uVar7 = 1;
      }
      if (fVar15 <= fVar16) {
        fVar15 = fVar16;
      }
      FVar9.Multiplicity = uVar7;
      FVar9.Value = fVar15;
    }
    else {
      if (!bVar3) goto LAB_143573aab;
      if (((int)this->_padding_ < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        iVar10 = (*pcVar1)();
        return iVar10;
      }
      fVar16 = *(float *)this->_padding_;
      fVar15 = Spline::Internal::NextafterNoSubnormal(fVar16,false);
      fVar16 = fVar16 - fVar14;
      uVar7 = 3;
      if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
        uVar7 = 1;
      }
      if (fVar16 <= fVar15) {
        fVar15 = fVar16;
      }
      FVar9.Multiplicity = uVar7;
      FVar9.Value = fVar15;
    }
    TBSpline<UE::Math::TVector<double>,3>::InsertKnot
              ((TBSpline<UE::Math::TVector<double>,3> *)this,FVar9);
  }
LAB_143573aab:
  if ((*(char *)((longlong)&this->_padding_ + 2) != '\0') && (0 < (int)this->_padding_)) {
    *(undefined4 *)(this->_padding_ + 4) = 4;
    iVar10 = (int)this->_padding_;
    uVar8 = iVar10 - 1;
    uVar7 = uVar6;
    if ((int)uVar8 < iVar10) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      iVar10 = (*pcVar1)();
      return iVar10;
    }
    *(undefined4 *)(this->_padding_ + -4 + (longlong)(int)this->_padding_ * 8) = 4;
    *(undefined1 *)&this->_padding_ = 1;
  }
  if (1 < (int)this->_padding_ + -1) {
    do {
      uVar7 = uVar6;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        iVar10 = (*pcVar1)();
        return iVar10;
      }
      uVar11 = uVar11 + 1;
      *(undefined4 *)(this->_padding_ + 4 + lVar12) = 3;
      lVar12 = lVar12 + 8;
    } while ((int)uVar11 < (int)this->_padding_ + -1);
  }
  TBSpline<UE::Math::TVector<double>,3>::Dump((TBSpline<UE::Math::TVector<double>,3> *)this);
  return iVar13;
}

// AppendBezierSegment @ 143575930

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendBezierSegment
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,EParameterizationPolicy param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TVector<double> *pTVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float local_res8;
  undefined1 local_resc;
  float *local_58;
  TPolyBezierSpline<UE::Math::TVector<double>_> *local_50;
  TVector<double>_u_0 local_48;
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    local_resc = 0;
  }
  else {
    iVar4 = (int)this->_padding_;
    uVar7 = iVar4 - 2;
    uVar6 = 0;
    if ((int)uVar7 < iVar4) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = (int)this->_padding_;
    lVar1 = this->_padding_;
    uVar8 = iVar4 - 1;
    uVar6 = 0;
    if ((int)uVar8 < iVar4) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    local_res8 = *(float *)(this->_padding_ + (longlong)(int)uVar8 * 8) -
                 *(float *)(lVar1 + (longlong)(int)uVar7 * 8);
    local_resc = 1;
  }
  (**(code **)(this->_padding_ + 0x38))(this,0);
  local_58 = &local_res8;
  local_50 = this;
  pTVar5 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                     ((TBSpline<UE::Math::TVector<double>,3> *)this,(int)this->_padding_ + -1);
  local_48._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  local_48._s_0.Y = (pTVar5->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  iVar4 = (int)this->_padding_;
  iVar4 = AddBezierSegmentInternal
                    (this,(int)((iVar4 >> 0x1f & 3U) + iVar4) >> 2,(TVector<double> *)&local_48._s_0
                     ,param_1,param_2,param_3,param_4,true);
  ScopeExitSupport::
  TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendBezierSegment'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendBezierSegment_::__l2::<lambda_1>_>
            (&local_58);
  return iVar4;
}

// Clear @ 14357a9c0

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::Clear
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this)

{
  int *piVar1;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  return;
}

// Clone @ 14357ab70

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::Clone
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this)

{
  TPolyBezierSpline<UE::Math::TVector<double>_> *this_00;
  ISplineInterface IVar1;
  ISplineInterface *in_RDX;
  
  this_00 = ::operator_new(0x60);
  if (this_00 == (TPolyBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    IVar1 = (ISplineInterface)0x0;
  }
  else {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    *(undefined8 *)&this_00->LastEvaluatedSegment = 0;
    IVar1 = (ISplineInterface)TPolyBezierSpline<UE::Math::TVector<double>_>(this_00);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             ((longlong)IVar1 + 0x18),
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)
             ((longlong)IVar1 + 0x28),
             (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  *(undefined1 *)((longlong)IVar1 + 0x49) = *(undefined1 *)((longlong)&this->_padding_ + 1);
  *(undefined1 *)((longlong)IVar1 + 0x4a) = *(undefined1 *)((longlong)&this->_padding_ + 2);
  *(int *)((longlong)IVar1 + 8) = (int)this->_padding_;
  *(undefined4 *)((longlong)IVar1 + 0xc) = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *in_RDX = IVar1;
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )in_RDX;
}

// ComputeSegmentLength @ 143582190

float __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::ComputeSegmentLength
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,TVector<double> *param_1,
          TVector<double> *param_2,EParameterizationPolicy param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  
  if (param_3 != Uniform) {
    if (param_3 == ChordLength) {
      dVar8 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
      dVar2 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
      dVar6 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
      auVar5._0_8_ = dVar2 * dVar2;
      auVar5._8_8_ = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar8 * dVar8 + dVar6 * dVar6 + auVar5._0_8_;
      auVar4 = sqrtpd(auVar5,auVar4);
      return (float)auVar4._0_8_;
    }
    if (param_3 == Centripetal) {
      dVar8 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
      dVar6 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
      dVar2 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
      auVar7._0_8_ = dVar6 * dVar6;
      auVar7._8_8_ = 0;
      auVar3._0_8_ = dVar2 * dVar2;
      auVar3._8_8_ = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar8 * dVar8 + auVar7._0_8_ + auVar3._0_8_;
      auVar4 = sqrtpd(auVar3,auVar1);
      auVar4 = sqrtpd(auVar7,auVar4);
      return (float)auVar4._0_8_;
    }
  }
  return __real_3f800000;
}

// FindIndexForParameter @ 143591510

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::FindIndexForParameter
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar7 = (int)this->_padding_;
  uVar8 = 0;
  iVar5 = iVar7 + -1;
  if (0 < iVar5) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      fVar1 = *(float *)(this->_padding_ + lVar9 * 8);
      uVar6 = 0;
      if ((int)(uVar8 + 1) < (int)this->_padding_) {
        uVar6 = ~(uVar8 + 1) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      fVar2 = *(float *)(this->_padding_ + 8 + lVar9 * 8);
      if ((uVar8 == iVar7 - 2U) && (param_1 == fVar2)) {
        *param_2 = 1.0;
        return uVar8 * 4;
      }
      if ((fVar1 <= param_1) && (param_1 < fVar2)) {
        if (__real_34000000 < fVar2 - fVar1) {
          *param_2 = (param_1 - fVar1) / (fVar2 - fVar1);
          return uVar8 * 4;
        }
        *param_2 = 0.0;
        return uVar8 * 4;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar5);
  }
  *param_2 = 0.0;
  return 0;
}

// FindNearest @ 143592a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::FindNearest
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,TVector<double> *param_1,
          float *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  TVector<double> *pTVar11;
  TVector<double> *pTVar12;
  TVector<double> *pTVar13;
  TVector<double> *pTVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_178 [32];
  float local_158 [2];
  undefined8 local_150;
  float *local_148;
  TVector<double> *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  TArrayView<UE::Math::TVector<double>,int> local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined1 local_f8 [16];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  fVar9 = __real_7f7fffff;
  dVar8 = _UNK_15076baf8;
  dVar7 = ___xmm_40080000000000004008000000000000;
  dVar6 = __real_4008000000000000;
  fVar5 = __real_3f800000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_178;
  iVar10 = (int)this->_padding_;
  iVar15 = 0;
  fVar19 = 0.0;
  iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2;
  if (iVar10 < 1) {
    *param_2 = __real_7f7fffff;
    fVar19 = 0.0;
  }
  else {
    iVar16 = 2;
    fVar18 = __real_7f7fffff;
    local_150 = param_1;
    local_148 = param_2;
    do {
      iVar3 = (int)this->_padding_;
      if (iVar15 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) {
        pTVar11 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar16 + -2);
        pTVar12 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar16 + -1);
        pTVar13 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar16);
        pTVar14 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar16 + 1);
        local_110 = (pTVar11->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
        local_118 = (pTVar11->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
        local_108 = (pTVar11->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
        uStack_130 = 4;
        local_100 = ((pTVar12->field0_0x0)._s_0.X - (pTVar11->field0_0x0)._s_0.X) * dVar6;
        dVar4 = ((pTVar12->field0_0x0)._s_0.Z - (pTVar11->field0_0x0)._s_0.Z) * dVar8;
        local_f8._8_4_ = SUB84(dVar4,0);
        local_f8._0_8_ = ((pTVar12->field0_0x0)._s_0.Y - (pTVar11->field0_0x0)._s_0.Y) * dVar7;
        local_f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        dVar4 = (pTVar12->field0_0x0)._s_0.Y;
        dVar1 = (pTVar12->field0_0x0)._s_0.X;
        dVar2 = (pTVar12->field0_0x0)._s_0.Z;
        local_e0 = (((pTVar13->field0_0x0)._s_0.Y - (dVar4 + dVar4)) + (pTVar11->field0_0x0)._s_0.Y)
                   * dVar6;
        local_e8 = (((pTVar13->field0_0x0)._s_0.X - (dVar1 + dVar1)) + (pTVar11->field0_0x0)._s_0.X)
                   * dVar6;
        local_d8 = (((pTVar13->field0_0x0)._s_0.Z - (dVar2 + dVar2)) + (pTVar11->field0_0x0)._s_0.Z)
                   * dVar6;
        local_138 = (TVector<double> *)&local_118;
        local_d0 = (((pTVar14->field0_0x0)._s_0.X - (pTVar13->field0_0x0)._s_0.X * dVar6) +
                   (pTVar12->field0_0x0)._s_0.X * dVar6) - (pTVar11->field0_0x0)._s_0.X;
        local_128._12_4_ = uStack_12c;
        local_128.ArrayNum = 4;
        dVar4 = (((pTVar14->field0_0x0)._s_0.Z - dVar8 * (pTVar13->field0_0x0)._s_0.Z) +
                (pTVar12->field0_0x0)._s_0.Z * dVar8) - (pTVar11->field0_0x0)._s_0.Z;
        local_c8._8_4_ = SUB84(dVar4,0);
        local_c8._0_8_ =
             (((pTVar14->field0_0x0)._s_0.Y - dVar7 * (pTVar13->field0_0x0)._s_0.Y) +
             (pTVar12->field0_0x0)._s_0.Y * dVar7) - (pTVar11->field0_0x0)._s_0.Y;
        local_c8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        local_128.DataPtr = local_138;
        fVar17 = Spline::Math::FindNearestPoint_Cubic<UE::Math::TVector<double>_>
                           (&local_128,0.0,fVar5,local_158);
        (**(code **)(this->_padding_ + 0x58))(this,&local_150,iVar15);
        fVar17 = (fVar5 - fVar17) * (float)local_150 + local_150._4_4_ * fVar17;
      }
      else {
        fVar17 = 0.0;
        local_158[0] = fVar9;
      }
      if (local_158[0] < fVar18) {
        fVar18 = local_158[0];
        fVar19 = fVar17;
      }
      iVar15 = iVar15 + 1;
      iVar16 = iVar16 + 4;
    } while (iVar15 < iVar10);
    *local_148 = fVar18;
  }
  return fVar19;
}

// FindWindow @ 143594d10

TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::FindWindow
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,
          TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *__return_storage_ptr__,
          float param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *pTVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_res8 [2];
  float local_res20 [2];
  
  __return_storage_ptr__->Elements[0] = (TVector<double> *)0x0;
  __return_storage_ptr__->Elements[1] = (TVector<double> *)0x0;
  __return_storage_ptr__->Elements[2] = (TVector<double> *)0x0;
  __return_storage_ptr__->Elements[3] = (TVector<double> *)0x0;
  iVar8 = (int)this->_padding_;
  if (iVar8 < 4) {
    return __return_storage_ptr__;
  }
  iVar8 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
  MapGlobalParameterToLocalSegment(this,param_1,local_res8,local_res20);
  cVar1 = *(char *)((longlong)&this->_padding_ + 1);
  if ((cVar1 == '\0') || (local_res8[0] = local_res8[0] % iVar8, -1 < local_res8[0])) {
    iVar8 = (int)this->_padding_;
    uVar9 = local_res8[0] * 4;
    if (cVar1 == '\0') {
      uVar7 = uVar9 + 3;
      if (iVar8 <= (int)uVar7) {
        return __return_storage_ptr__;
      }
      uVar6 = 0;
      if ((int)uVar9 < iVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      uVar6 = uVar9 + 1;
      __return_storage_ptr__->Elements[0] =
           (TVector<double> *)(this->_padding_ + (longlong)(int)uVar9 * 0x18);
      uVar4 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      uVar9 = uVar9 + 2;
      __return_storage_ptr__->Elements[1] =
           (TVector<double> *)(this->_padding_ + (longlong)(int)uVar6 * 0x18);
      uVar6 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      __return_storage_ptr__->Elements[2] =
           (TVector<double> *)(this->_padding_ + (longlong)(int)uVar9 * 0x18);
      uVar9 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      goto LAB_1435950ca;
    }
  }
  else {
    local_res8[0] = local_res8[0] + iVar8;
    iVar8 = (int)this->_padding_;
    uVar9 = local_res8[0] * 4;
  }
  uVar6 = (iVar8 + (int)uVar9 % iVar8) % iVar8;
  uVar7 = 0;
  if ((int)uVar6 < iVar8) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Elements[0] =
       (TVector<double> *)(this->_padding_ + (longlong)(int)uVar6 * 0x18);
  uVar6 = (iVar8 + (int)(uVar9 + 1) % iVar8) % iVar8;
  uVar7 = 0;
  if ((int)uVar6 < (int)this->_padding_) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Elements[1] =
       (TVector<double> *)(this->_padding_ + (longlong)(int)uVar6 * 0x18);
  uVar6 = (iVar8 + (int)(uVar9 + 2) % iVar8) % iVar8;
  uVar7 = 0;
  if ((int)uVar6 < (int)this->_padding_) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Elements[2] =
       (TVector<double> *)(this->_padding_ + (longlong)(int)uVar6 * 0x18);
  uVar7 = (iVar8 + (int)(uVar9 + 3) % iVar8) % iVar8;
  uVar9 = 0;
  if ((int)uVar7 < (int)this->_padding_) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
LAB_1435950ca:
  __return_storage_ptr__->Elements[3] =
       (TVector<double> *)(this->_padding_ + (longlong)(int)uVar7 * 0x18);
  return __return_storage_ptr__;
}

// FlipSegment @ 143595100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::FlipSegment
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  uint uVar31;
  
  iVar23 = (**(code **)(this->_padding_ + 0x50))();
  if ((-1 < param_1) && (param_1 < iVar23)) {
    if ((5 < (byte)Spline::LogSpline._0_1_) &&
       (Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::FlipSegment(int)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
       5 < (byte)Spline::LogSpline._0_1_)) {
      Logging::Private::BasicLog<6>
                (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::FlipSegment(int)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
    TBSpline<UE::Math::TVector<double>,3>::Dump((TBSpline<UE::Math::TVector<double>,3> *)this);
    uVar28 = param_1 * 4;
    uVar31 = uVar28 + 3;
    if (((int)uVar28 < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce6,L""), bVar22)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar9 = (int)this->_padding_;
    if (((iVar9 <= (int)uVar28) || (iVar9 <= (int)(uVar28 + 3))) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce7,L""), bVar22)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    lVar10 = this->_padding_;
    lVar30 = (longlong)(int)uVar28;
    uVar5 = *(undefined8 *)(lVar10 + 0x10 + lVar30 * 0x18);
    puVar3 = (undefined8 *)(lVar10 + 0x48 + lVar30 * 0x18);
    uVar11 = puVar3[1];
    puVar2 = (undefined8 *)(lVar10 + lVar30 * 0x18);
    uVar20 = *puVar2;
    uVar21 = puVar2[1];
    puVar2 = (undefined8 *)(lVar10 + lVar30 * 0x18);
    *puVar2 = *puVar3;
    puVar2[1] = uVar11;
    *(undefined8 *)(lVar10 + 0x10 + lVar30 * 0x18) = *(undefined8 *)(lVar10 + 0x58 + lVar30 * 0x18);
    puVar2 = (undefined8 *)(lVar10 + 0x48 + lVar30 * 0x18);
    *puVar2 = uVar20;
    puVar2[1] = uVar21;
    *(undefined8 *)(lVar10 + 0x58 + lVar30 * 0x18) = uVar5;
    if (((int)(uVar28 + 1) < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce6,L""), bVar22)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar9 = (int)this->_padding_;
    if (((iVar9 <= (int)(uVar28 + 1)) || (iVar9 <= (int)(uVar28 + 2))) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce7,L""), bVar22)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    lVar10 = this->_padding_;
    uVar5 = *(undefined8 *)(lVar10 + 0x28 + lVar30 * 0x18);
    puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar30 * 0x18);
    uVar11 = puVar2[1];
    puVar3 = (undefined8 *)(lVar10 + 0x18 + lVar30 * 0x18);
    uVar20 = *puVar3;
    uVar21 = puVar3[1];
    puVar3 = (undefined8 *)(lVar10 + 0x18 + lVar30 * 0x18);
    *puVar3 = *puVar2;
    puVar3[1] = uVar11;
    *(undefined8 *)(lVar10 + 0x28 + lVar30 * 0x18) = *(undefined8 *)(lVar10 + 0x40 + lVar30 * 0x18);
    puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar30 * 0x18);
    *puVar2 = uVar20;
    puVar2[1] = uVar21;
    *(undefined8 *)(lVar10 + 0x40 + lVar30 * 0x18) = uVar5;
    if (param_1 != 0) {
      uVar1 = uVar28 - 1;
      uVar29 = ~uVar1 >> 0x1f;
      uVar24 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar24 = uVar29;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar25 = (longlong)(int)uVar1;
      uVar27 = ~(uVar28 - 2) >> 0x1f;
      lVar10 = this->_padding_;
      uVar24 = 0;
      if ((int)(uVar28 - 2) < (int)this->_padding_) {
        uVar24 = uVar27;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar26 = (longlong)(int)(uVar28 - 2);
      dVar6 = *(double *)(lVar10 + lVar25 * 0x18);
      pdVar4 = (double *)(lVar10 + 8 + lVar25 * 0x18);
      dVar16 = *pdVar4;
      dVar15 = pdVar4[1];
      pdVar4 = (double *)(this->_padding_ + 8 + lVar26 * 0x18);
      dVar17 = *pdVar4;
      dVar18 = pdVar4[1];
      dVar7 = *(double *)(this->_padding_ + lVar26 * 0x18);
      uVar24 = 0;
      if ((int)uVar28 < (int)this->_padding_) {
        uVar24 = ~uVar28 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar2 = (undefined8 *)(this->_padding_ + lVar30 * 0x18);
      uVar11 = *puVar2;
      uVar20 = puVar2[1];
      uVar5 = *(undefined8 *)(this->_padding_ + 0x10 + lVar30 * 0x18);
      uVar24 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar24 = uVar29;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar10 = this->_padding_;
      puVar2 = (undefined8 *)(lVar10 + lVar25 * 0x18);
      *puVar2 = uVar11;
      puVar2[1] = uVar20;
      *(undefined8 *)(lVar10 + 0x10 + lVar25 * 0x18) = uVar5;
      uVar24 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar24 = uVar29;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      dVar8 = *(double *)(this->_padding_ + lVar25 * 0x18);
      pdVar4 = (double *)(this->_padding_ + 8 + lVar25 * 0x18);
      dVar19 = *pdVar4;
      uVar1 = 0;
      if ((int)(uVar28 - 2) < (int)this->_padding_) {
        uVar1 = uVar27;
      }
      dVar15 = pdVar4[1] - (dVar15 - dVar18);
      if (uVar1 == 0) {
        lVar26 = (longlong)(int)(uVar28 - 2);
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar22) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      lVar10 = this->_padding_;
      *(double *)(lVar10 + lVar26 * 0x18) = dVar8 - (dVar6 - dVar7);
      auVar13._8_4_ = SUB84(dVar15,0);
      auVar13._0_8_ = dVar19 - (dVar16 - dVar17);
      auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      *(undefined1 (*) [16])(lVar10 + 8 + lVar26 * 0x18) = auVar13;
    }
    if (param_1 != iVar23 + -1) {
      uVar1 = uVar28 + 4;
      uVar28 = uVar28 + 5;
      uVar29 = ~uVar1 >> 0x1f;
      uVar24 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar24 = uVar29;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar30 = (longlong)(int)uVar1;
      lVar10 = this->_padding_;
      uVar24 = 0;
      if ((int)uVar28 < (int)this->_padding_) {
        uVar24 = ~uVar28 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      dVar6 = *(double *)(lVar10 + lVar30 * 0x18);
      pdVar4 = (double *)(lVar10 + 8 + lVar30 * 0x18);
      dVar16 = *pdVar4;
      dVar15 = pdVar4[1];
      pdVar4 = (double *)(this->_padding_ + 8 + (longlong)(int)uVar28 * 0x18);
      dVar17 = *pdVar4;
      dVar18 = pdVar4[1];
      dVar7 = *(double *)(this->_padding_ + (longlong)(int)uVar28 * 0x18);
      uVar24 = 0;
      if ((int)uVar31 < (int)this->_padding_) {
        uVar24 = ~uVar31 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar2 = (undefined8 *)(this->_padding_ + (longlong)(int)uVar31 * 0x18);
      uVar11 = *puVar2;
      uVar20 = puVar2[1];
      uVar5 = *(undefined8 *)(this->_padding_ + 0x10 + (longlong)(int)uVar31 * 0x18);
      uVar31 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar31 = uVar29;
      }
      if ((uVar31 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar10 = this->_padding_;
      puVar2 = (undefined8 *)(lVar10 + lVar30 * 0x18);
      *puVar2 = uVar11;
      puVar2[1] = uVar20;
      *(undefined8 *)(lVar10 + 0x10 + lVar30 * 0x18) = uVar5;
      uVar31 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar31 = uVar29;
      }
      if ((uVar31 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      dVar8 = *(double *)(this->_padding_ + lVar30 * 0x18);
      pdVar4 = (double *)(this->_padding_ + 8 + lVar30 * 0x18);
      dVar19 = *pdVar4;
      uVar31 = 0;
      if ((int)uVar28 < (int)this->_padding_) {
        uVar31 = ~uVar28 >> 0x1f;
      }
      dVar15 = pdVar4[1] - (dVar15 - dVar18);
      if ((uVar31 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar10 = this->_padding_;
      *(double *)(lVar10 + (longlong)(int)uVar28 * 0x18) = dVar8 - (dVar6 - dVar7);
      auVar14._8_4_ = SUB84(dVar15,0);
      auVar14._0_8_ = dVar19 - (dVar16 - dVar17);
      auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      *(undefined1 (*) [16])(lVar10 + 8 + (longlong)(int)uVar28 * 0x18) = auVar14;
    }
    uVar31 = param_1 + 1;
    if (((-1 < (int)uVar31) && (iVar23 = (int)this->_padding_, param_1 < iVar23)) &&
       ((int)uVar31 < iVar23)) {
      uVar5 = *(undefined8 *)(this->_padding_ + (longlong)param_1 * 8);
      uVar28 = 0;
      if ((int)uVar31 < iVar23) {
        uVar28 = ~uVar31 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar28 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar28 = (uint)~param_1 >> 0x1f;
      }
      uVar11 = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar31 * 8);
      if ((uVar28 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(undefined8 *)(this->_padding_ + (longlong)param_1 * 8) = uVar11;
      uVar28 = 0;
      if ((int)uVar31 < (int)this->_padding_) {
        uVar28 = ~uVar31 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(undefined8 *)(this->_padding_ + (longlong)(int)uVar31 * 8) = uVar5;
    }
    if ((5 < (byte)Spline::LogSpline._0_1_) &&
       (Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::FlipSegment(int)___ptr64'
                    ::__l47::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
       5 < (byte)Spline::LogSpline._0_1_)) {
      Logging::Private::BasicLog<6>
                (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::FlipSegment(int)___ptr64'
                  ::__l64::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
    TBSpline<UE::Math::TVector<double>,3>::Dump((TBSpline<UE::Math::TVector<double>,3> *)this);
  }
  return;
}

// GenerateDistanceKnotsForBezier @ 1435a1d00

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GenerateDistanceKnotsForBezier
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,EParameterizationPolicy param_1)

{
  float fVar1;
  void *_Src;
  code *pcVar2;
  undefined1 auVar3 [16];
  FKnot FVar4;
  FKnot FVar5;
  FKnot FVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  FValidKnotSearchParams local_res20;
  float local_a8;
  float local_a4;
  undefined4 uStack_a0;
  float local_9c;
  undefined4 uStack_98;
  float local_94;
  undefined4 uStack_90;
  ForAnyElementType local_88;
  int local_80;
  int iStack_7c;
  ForAnyElementType local_78;
  int local_70;
  int local_6c [11];
  
  local_70 = (int)this->_padding_;
  lVar13 = (longlong)local_70;
  uVar14 = 0;
  _Src = (void *)this->_padding_;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_70 == 0) {
    local_6c[0] = 0;
    iVar12 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_70,0,&local_78,local_70,local_6c);
    memcpy(local_78.Data,_Src,lVar13 * 0x18);
    iVar12 = local_70;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  iStack_7c = 0;
  uVar9 = (int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2;
  lVar13 = (longlong)(int)uVar9;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar9,&local_88,0,&iStack_7c);
    iVar12 = local_70;
  }
  fVar23 = __real_3f800000;
  uVar15 = 0;
  if (0 < (int)uVar9) {
    uVar16 = 3;
    uVar17 = uVar14;
    do {
      if ((int)uVar16 < iVar12) {
        uVar10 = 0;
        if ((int)uVar16 < iVar12) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar12 = local_70, bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar7.Data = local_78.Data;
        uVar10 = uVar15;
        if ((int)(uVar16 - 3) < iVar12) {
          uVar10 = ~(uVar16 - 3) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_a8 = fVar23;
        if (param_1 != Uniform) {
          if (param_1 == ChordLength) {
            auVar21._0_8_ =
                 (*(double *)(FVar7.Data + uVar17 + 0x58) -
                 *(double *)(local_78.Data + uVar17 + 0x10)) *
                 (*(double *)(FVar7.Data + uVar17 + 0x58) -
                 *(double *)(local_78.Data + uVar17 + 0x10));
            auVar21._8_8_ = 0;
            auVar20._8_8_ = 0;
            auVar20._0_8_ =
                 (*(double *)(FVar7.Data + uVar17 + 0x50) - *(double *)(local_78.Data + uVar17 + 8))
                 * (*(double *)(FVar7.Data + uVar17 + 0x50) -
                   *(double *)(local_78.Data + uVar17 + 8)) +
                 (*(double *)(FVar7.Data + uVar17 + 0x48) - *(double *)(local_78.Data + uVar17)) *
                 (*(double *)(FVar7.Data + uVar17 + 0x48) - *(double *)(local_78.Data + uVar17)) +
                 auVar21._0_8_;
            auVar20 = sqrtpd(auVar21,auVar20);
            local_a8 = (float)auVar20._0_8_;
          }
          else if (param_1 == Centripetal) {
            auVar22._0_8_ =
                 (*(double *)(FVar7.Data + uVar17 + 0x48) - *(double *)(local_78.Data + uVar17)) *
                 (*(double *)(FVar7.Data + uVar17 + 0x48) - *(double *)(local_78.Data + uVar17));
            auVar22._8_8_ = 0;
            auVar19._0_8_ =
                 (*(double *)(FVar7.Data + uVar17 + 0x58) -
                 *(double *)(local_78.Data + uVar17 + 0x10)) *
                 (*(double *)(FVar7.Data + uVar17 + 0x58) -
                 *(double *)(local_78.Data + uVar17 + 0x10));
            auVar19._8_8_ = 0;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (*(double *)(FVar7.Data + uVar17 + 0x50) -
                           *(double *)(local_78.Data + uVar17 + 8)) *
                           (*(double *)(FVar7.Data + uVar17 + 0x50) -
                           *(double *)(local_78.Data + uVar17 + 8)) + auVar22._0_8_ + auVar19._0_8_;
            auVar20 = sqrtpd(auVar19,auVar3);
            auVar20 = sqrtpd(auVar22,auVar20);
            local_a8 = (float)auVar20._0_8_;
          }
        }
        if (((local_88.Data <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < local_88.Data + (longlong)iStack_7c * 4)) &&
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
        if (local_80 == iStack_7c) {
          local_80 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_88,&iStack_7c);
        }
        lVar11 = (longlong)local_80;
        local_80 = local_80 + 1;
        *(float *)(local_88.Data + lVar11 * 4) = local_a8;
        iVar12 = local_70;
      }
      uVar16 = uVar16 + 4;
      uVar17 = uVar17 + 0x60;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  iVar12 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar12 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  local_res20.bSearchRight = true;
  local_res20.bSearchLeft = false;
  local_res20.DesiredParameter = 0.0;
  local_a4 = TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue
                       ((TBSpline<UE::Math::TVector<double>,3> *)this,&local_res20);
  uStack_a0 = 4;
  FVar4.Multiplicity = 4;
  FVar4.Value = local_a4;
  TBSpline<UE::Math::TVector<double>,3>::InsertKnot
            ((TBSpline<UE::Math::TVector<double>,3> *)this,FVar4);
  fVar23 = 0.0;
  uVar17 = uVar14;
  fVar18 = fVar23;
  iVar12 = local_80;
  if (0 < (int)(uVar9 - 1)) {
    do {
      uVar16 = (uint)uVar14;
      fVar23 = fVar18;
      if ((int)uVar16 < iVar12) {
        uVar10 = uVar15;
        if ((int)uVar16 < iVar12) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar1 = *(float *)(local_88.Data + uVar17);
        if ((fVar1 != 0.0) && (fVar23 = fVar1 + fVar18, fVar23 == fVar18)) {
          fVar23 = Spline::Internal::NextafterNoSubnormal(fVar18,0.0 < fVar1);
        }
        local_res20.DesiredParameter = fVar23;
        local_9c = TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue
                             ((TBSpline<UE::Math::TVector<double>,3> *)this,&local_res20);
        uStack_98 = 3;
        FVar5.Multiplicity = 3;
        FVar5.Value = local_9c;
        TBSpline<UE::Math::TVector<double>,3>::InsertKnot
                  ((TBSpline<UE::Math::TVector<double>,3> *)this,FVar5);
        iVar12 = local_80;
      }
      uVar14 = (ulonglong)(uVar16 + 1);
      uVar17 = uVar17 + 4;
      fVar18 = fVar23;
    } while ((int)(uVar16 + 1) < (int)(uVar9 - 1));
  }
  fVar18 = fVar23;
  if (0 < iVar12) {
    if ((int)(iVar12 - 1U) < iVar12) {
      uVar15 = ~(iVar12 - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar12 = local_80, bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar1 = *(float *)(local_88.Data + (longlong)(iVar12 + -1) * 4);
    if ((fVar1 != 0.0) && (fVar18 = fVar1 + fVar23, fVar1 + fVar23 == fVar23)) {
      fVar18 = Spline::Internal::NextafterNoSubnormal(fVar23,0.0 < fVar1);
    }
  }
  local_res20.DesiredParameter = fVar18;
  local_94 = TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue
                       ((TBSpline<UE::Math::TVector<double>,3> *)this,&local_res20);
  uStack_90 = 4;
  FVar6.Multiplicity = 4;
  FVar6.Value = local_94;
  TBSpline<UE::Math::TVector<double>,3>::InsertKnot
            ((TBSpline<UE::Math::TVector<double>,3> *)this,FVar6);
  *(undefined1 *)&this->_padding_ = 1;
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// GetExpectedNumKnots @ 1435b1020

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetExpectedNumKnots
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this)

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1 * 3 + 5;
}

// GetImplementationName @ 1435b11b0

FString * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetImplementationName
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"PolyBezier");
  return __return_storage_ptr__;
}

// GetNumberOfSegments @ 1435b2050

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetNumberOfSegments
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this)

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  return (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
}

// GetParameter @ 1435b23d0

float __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetParameter
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 == 0) {
    return 0.0;
  }
  uVar6 = iVar1 - 1;
  uVar8 = param_1 >> 0x1f & 3;
  uVar5 = param_1 + uVar8;
  uVar9 = (int)uVar5 >> 2;
  if ((int)uVar9 < (int)uVar6) {
    uVar6 = uVar9 + 1;
    uVar7 = 0;
    if ((int)uVar6 < iVar1) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
    }
    lVar2 = this->_padding_;
    uVar7 = 0;
    if ((int)uVar9 < (int)this->_padding_) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
    }
    fVar10 = (float)(int)((uVar5 & 3) - uVar8) * __real_3eaaaaab;
    fVar10 = (__real_3f800000 - fVar10) * *(float *)(this->_padding_ + (longlong)(int)uVar9 * 8) +
             fVar10 * *(float *)(lVar2 + (longlong)(int)uVar6 * 8);
  }
  else {
    uVar5 = 0;
    if ((int)uVar6 < iVar1) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
    }
    fVar10 = *(float *)(this->_padding_ + -8 + (longlong)(int)this->_padding_ * 8);
  }
  return fVar10;
}

// GetParameterSpace @ 1435b2670

TInterval1<float> __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetParameterSpace
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TInterval1<float> TVar5;
  uint uVar6;
  TInterval1<float> in_RDX;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = (int)this->_padding_;
  uVar7 = __real_7f7fffff;
  uVar8 = __real_ff7fffff;
  if (0 < iVar1) {
    uVar6 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar6 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TInterval1<float>)(*pcVar3)();
      return TVar5;
    }
    iVar1 = (int)this->_padding_;
    lVar2 = this->_padding_;
    if ((iVar1 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TInterval1<float>)(*pcVar3)();
      return TVar5;
    }
    uVar7 = *(undefined4 *)this->_padding_;
    uVar8 = *(undefined4 *)(lVar2 + -8 + (longlong)iVar1 * 8);
  }
  *(undefined4 *)in_RDX = uVar7;
  *(undefined4 *)((longlong)in_RDX + 4) = uVar8;
  return in_RDX;
}

// GetSegmentParameterRange @ 1435b2b60

TInterval1<float> __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetSegmentParameterRange
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  TInterval1<float> TVar5;
  uint uVar6;
  float in_register_00000014;
  uint uVar7;
  uint in_R8D;
  
  TVar5.Max = in_register_00000014;
  TVar5.Min = (float)param_1;
  *(undefined4 *)TVar5 = 0x7f7fffff;
  *(undefined4 *)((longlong)TVar5 + 4) = 0xff7fffff;
  if (-1 < (int)in_R8D) {
    iVar1 = (int)this->_padding_;
    if ((int)in_R8D < iVar1 + -1) {
      uVar6 = 0;
      if ((int)in_R8D < iVar1) {
        uVar6 = ~in_R8D >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          TVar5 = (TInterval1<float>)(*pcVar2)();
          return TVar5;
        }
      }
      lVar3 = this->_padding_;
      uVar7 = in_R8D + 1;
      *(undefined4 *)TVar5 = *(undefined4 *)(this->_padding_ + (longlong)(int)in_R8D * 8);
      uVar6 = 0;
      if ((int)uVar7 < (int)lVar3) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          TVar5 = (TInterval1<float>)(*pcVar2)();
          return TVar5;
        }
      }
      *(undefined4 *)((longlong)TVar5 + 4) =
           *(undefined4 *)(this->_padding_ + (longlong)(int)uVar7 * 8);
    }
  }
  return TVar5;
}

// GetStaticTypeId @ 1435b2f00

uint * __cdecl
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)

{
  ushort uVar1;
  uint uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pwVar4 = L"";
    uVar5 = 0x811c9dc5;
    pwVar3 = L"PolyBezier";
    if (TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)
               TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.AllocatorInstance;
    }
    uVar7 = 0x811c9dc5;
    uVar6 = 0x50;
    do {
      pwVar3 = pwVar3 + 1;
      uVar2 = uVar6 ^ uVar7;
      uVar7 = uVar2 * 0x1000193;
      uVar6 = (uint)(ushort)*pwVar3;
    } while (*pwVar3 != L'\0');
    uVar1 = *pwVar4;
    while (uVar1 != 0) {
      pwVar4 = (wchar_t *)((longlong)pwVar4 + 2);
      uVar5 = (uVar1 ^ uVar5) * 0x1000193;
      uVar1 = *pwVar4;
    }
    `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
    ::__l2::CachedTypeId = uVar2 * 0x1930000 | uVar5 & 0xffff;
    _Init_thread_footer(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
          ::__l2::CachedTypeId;
}

// GetTypeId @ 1435b52b0

uint __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetTypeId
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this)

{
  uint *puVar1;
  
  puVar1 = GetStaticTypeId();
  return *puVar1;
}

// InterpolateWindow @ 1435b91e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::InterpolateWindow
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,
          TVector<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_*_const,int> *param_1,float param_2)

{
  undefined1 auStack_a8 [32];
  float local_88 [4];
  TArrayView<float_const_,int> local_78;
  int local_68 [4];
  TArrayView<UE::Math::TVector<double>_const_*_const,int> local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1->ArrayNum < 4) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    (**(code **)(this->_padding_ + 0x50))();
    MapGlobalParameterToLocalSegment(this,param_2,local_68,local_88);
    local_78.DataPtr = &local_48;
    local_40 = __real_3f800000 - local_88[0];
    local_78.ArrayNum = 4;
    local_48 = local_40 * local_40 * local_40;
    local_44 = local_88[0] * __real_40400000 * local_40 * local_40;
    local_58.DataPtr = param_1->DataPtr;
    local_58.ArrayNum = param_1->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_40 = local_88[0] * local_88[0] * __real_40400000 * local_40;
    local_3c = local_88[0] * local_88[0] * local_88[0];
    TSplineInterpolationPolicy<UE::Math::TVector<double>_>::InterpolateWithBasis
              (__return_storage_ptr__,&local_58,&local_78);
  }
  return __return_storage_ptr__;
}

// MapGlobalParameterToLocalSegment @ 1435ba930

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::
MapGlobalParameterToLocalSegment
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,float param_1,int *param_2,
          float *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  
  if ((int)this->_padding_ < 2) {
    *param_2 = 0;
    *param_3 = 0.0;
    return false;
  }
  if (param_1 < *(float *)this->_padding_ || param_1 == *(float *)this->_padding_) {
    *param_2 = 0;
    *param_3 = 0.0;
    return true;
  }
  iVar11 = (int)this->_padding_;
  uVar9 = iVar11 - 1;
  uVar10 = 0;
  if ((int)uVar9 < iVar11) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (*(float *)(this->_padding_ + -8 + (longlong)(int)this->_padding_ * 8) <= param_1) {
    *param_2 = (int)this->_padding_ + -2;
    *param_3 = 1.0;
    return true;
  }
  iVar11 = this->LastEvaluatedSegment;
  if ((iVar11 != -1) && (iVar8 = (int)this->_padding_, iVar11 < iVar8 + -1)) {
    uVar10 = iVar11 + 1;
    uVar9 = 0;
    if ((int)uVar10 < iVar8) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (param_1 < *(float *)(this->_padding_ + (longlong)(int)uVar10 * 8)) {
      uVar10 = this->LastEvaluatedSegment;
      uVar9 = 0;
      if ((int)uVar10 < (int)this->_padding_) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((*(float *)(this->_padding_ + (longlong)(int)uVar10 * 8) <= param_1) &&
         (uVar10 = this->LastEvaluatedSegment, this->LastEvaluatedSegment != 0xffffffff))
      goto LAB_1435bac18;
    }
  }
  uVar9 = 0;
  iVar11 = (int)this->_padding_ + -2;
  uVar5 = iVar11 / 2;
  uVar10 = uVar5;
  if (-1 < iVar11) {
    do {
      iVar8 = iVar11 - uVar9;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1;
      }
      uVar10 = (iVar8 >> 1) + uVar9;
      uVar6 = 0;
      if ((int)uVar10 < (int)this->_padding_) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = uVar10 + 1;
      lVar1 = this->_padding_;
      uVar7 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (param_1 < *(float *)(lVar1 + (longlong)(int)uVar10 * 8)) {
        iVar11 = uVar10 - 1;
      }
      else {
        uVar9 = uVar6;
        if (param_1 < *(float *)(this->_padding_ + (longlong)(int)uVar6 * 8)) break;
      }
      uVar10 = uVar5;
    } while ((int)uVar9 <= iVar11);
  }
LAB_1435bac18:
  *param_2 = uVar10;
  this->LastEvaluatedSegment = uVar10;
  uVar9 = 0;
  if ((int)uVar10 < (int)this->_padding_) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar9 = uVar10 + 1;
  lVar1 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar9 < (int)this->_padding_) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  fVar12 = *(float *)(this->_padding_ + (longlong)(int)uVar9 * 8) -
           *(float *)(lVar1 + (longlong)(int)uVar10 * 8);
  if (fVar12 <= __real_322bcc77) {
    fVar12 = 0.0;
  }
  else {
    uVar9 = 0;
    if ((int)uVar10 < (int)this->_padding_) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    fVar12 = (param_1 - *(float *)(this->_padding_ + (longlong)(int)uVar10 * 8)) / fVar12;
  }
  *param_3 = fVar12;
  return true;
}

// RemovePoint @ 1435bfc70

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::RemovePoint
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar4 = (**(code **)(this->_padding_ + 0x50))();
  if ((-1 < param_1) && (param_1 <= iVar4)) {
    bVar6 = true;
    uVar9 = iVar4 - 1U;
    if (param_1 < (int)(iVar4 - 1U)) {
      uVar9 = param_1;
    }
    uVar5 = 0;
    if (0 < (int)uVar9) {
      uVar5 = uVar9;
    }
    if (param_1 == 0) {
      iVar7 = 3;
      iVar4 = uVar5 * 4 + 3;
      do {
        bVar2 = TBSpline<UE::Math::TVector<double>,3>::RemoveValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar4);
        bVar6 = (bool)(bVar6 & bVar2);
        iVar4 = iVar4 + -1;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      TBSpline<UE::Math::TVector<double>,3>::RemoveKnot
                ((TBSpline<UE::Math::TVector<double>,3> *)this,0);
      if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
        if ((int)this->_padding_ < 1) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        *(undefined4 *)(this->_padding_ + 4) = 4;
      }
    }
    else {
      iVar4 = (**(code **)(this->_padding_ + 0x50))(this);
      if (param_1 == iVar4) {
        iVar7 = 3;
        iVar4 = uVar5 * 4 + 3;
        do {
          bVar2 = TBSpline<UE::Math::TVector<double>,3>::RemoveValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar4);
          bVar6 = (bool)(bVar6 & bVar2);
          iVar4 = iVar4 + -1;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        TBSpline<UE::Math::TVector<double>,3>::RemoveKnot
                  ((TBSpline<UE::Math::TVector<double>,3> *)this,uVar5 + 1);
        if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
          iVar4 = (int)this->_padding_;
          uVar5 = iVar4 - 1;
          uVar9 = 0;
          if ((int)uVar5 < iVar4) {
            uVar9 = ~uVar5 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          *(undefined4 *)(this->_padding_ + -4 + (longlong)(int)this->_padding_ * 8) = 4;
        }
      }
      else {
        lVar8 = 4;
        do {
          TBSpline<UE::Math::TVector<double>,3>::RemoveValue
                    ((TBSpline<UE::Math::TVector<double>,3> *)this,param_1 * 4 + -2);
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        TBSpline<UE::Math::TVector<double>,3>::RemoveKnot
                  ((TBSpline<UE::Math::TVector<double>,3> *)this,param_1);
      }
    }
    TBSpline<UE::Math::TVector<double>,3>::Dump((TBSpline<UE::Math::TVector<double>,3> *)this);
    return bVar6;
  }
  return false;
}

// RemoveSegment @ 1435bfe50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::RemoveSegment
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,int param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1 < 0) ||
     (iVar2 = (int)this->_padding_, iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2,
     iVar2 <= param_1)) {
    return false;
  }
  if (5 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_bool___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::RemoveSegment(int)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  if (param_1 == iVar2 + -1) {
    iVar2 = (**(code **)(this->_padding_ + 0x50))();
    bVar1 = RemovePoint(this,iVar2);
    return bVar1;
  }
  bVar1 = RemovePoint(this,param_1);
  return bVar1;
}

// Reparameterize @ 1435c00d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::Reparameterize
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,EParameterizationPolicy param_1)

{
  GenerateDistanceKnotsForBezier(this,param_1);
  if (5 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_virtual_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::Reparameterize(UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  TBSpline<UE::Math::TVector<double>,3>::PrintKnotVector
            ((TBSpline<UE::Math::TVector<double>,3> *)this);
  return;
}

// SetClosedLoop @ 1435c1ab0

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::SetClosedLoop
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,bool param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  TVector<double> *pTVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78 [4];
  
  cVar5 = (**(code **)(this->_padding_ + 0x40))();
  if (param_1 != (bool)cVar5) {
    iVar6 = (**(code **)(this->_padding_ + 0x50))(this);
    if (param_1) {
      if (0 < iVar6) {
        pTVar7 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                           ((TBSpline<UE::Math::TVector<double>,3> *)this,0);
        local_a8._s_0.X = (pTVar7->field0_0x0)._s_0.X;
        local_a8._s_0.Y = (pTVar7->field0_0x0)._s_0.Y;
        local_a8._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
        pTVar7 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                           ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar6 * 4 + -1);
        dVar3 = (pTVar7->field0_0x0)._s_0.X;
        dVar4 = (pTVar7->field0_0x0)._s_0.Y;
        dVar1 = (pTVar7->field0_0x0)._s_0.Z;
        dVar2 = local_a8._s_0.X - dVar3;
        uVar8 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar9 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if (((__real_3e45798ee0000000 <= (double)CONCAT44(uVar9,uVar8) &&
              (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee0000000) ||
            (uVar8 = SUB84(local_a8._s_0.Y - dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
            , uVar9 = (uint)((ulonglong)(local_a8._s_0.Y - dVar4) >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3e45798ee0000000 <= (double)CONCAT44(uVar9,uVar8) &&
            (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee0000000)) ||
           (uVar8 = SUB84(local_a8._s_0.Z - dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar9 = (uint)((ulonglong)(local_a8._s_0.Z - dVar1) >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           __real_3e45798ee0000000 <= (double)CONCAT44(uVar9,uVar8) &&
           (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee0000000)) {
          local_90._s_0.X = local_a8._s_0.X - dVar2 * __real_3fd51eb860000000;
          dVar11 = (local_a8._s_0.Y - dVar4) * __real_3fd51eb860000000;
          dVar10 = (local_a8._s_0.Z - dVar1) * __real_3fd51eb860000000;
          local_78[0]._0_8_ = dVar2 * __real_3fd51eb860000000 + dVar3;
          local_90._s_0.Y = local_a8._s_0.Y - dVar11;
          local_78[0]._8_8_ = dVar11 + dVar4;
          local_90._s_0.Z = local_a8._s_0.Z - dVar10;
          local_78[0]._16_8_ = dVar10 + dVar1;
          AppendBezierSegment(this,(TVector<double> *)&local_78[0]._s_0,
                              (TVector<double> *)&local_90._s_0,(TVector<double> *)&local_a8._s_0,
                              Centripetal);
        }
      }
    }
    else if (0 < iVar6) {
      RemoveSegment(this,iVar6 + -1);
    }
    *(bool *)((longlong)&this->_padding_ + 1) = param_1;
  }
  return;
}

// SetParameter @ 1435c3260

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::SetParameter
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,int param_1,float param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  FValidKnotSearchParams local_res20;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [40];
  
  if (((param_1 < 0) || (iVar4 = (int)this->_padding_, iVar4 <= param_1)) || (iVar4 < 4)) {
    return -1;
  }
  uVar12 = (uint)param_1 >> 2;
  iVar4 = (**(code **)(this->_padding_ + 0x50))();
  uVar10 = uVar12 + 1;
  uVar11 = (ulonglong)uVar10;
  uVar13 = param_1 & 3;
  uVar9 = (ulonglong)uVar12;
  if (uVar13 != 0) {
    uVar9 = uVar11;
  }
  uVar8 = (uint)uVar9;
  uVar5 = 0;
  if ((int)uVar8 < (int)this->_padding_) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  fVar1 = *(float *)(this->_padding_ + uVar9 * 8);
  if (fVar1 == param_2) {
    return param_1;
  }
  if ((5 < (byte)Spline::LogSpline._0_1_) &&
     (Logging::Private::BasicLog<6>
                (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::SetParameter(int,float)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
     5 < (byte)Spline::LogSpline._0_1_)) {
    Logging::Private::BasicLog<6>
              (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::SetParameter(int,float)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  TBSpline<UE::Math::TVector<double>,3>::Dump((TBSpline<UE::Math::TVector<double>,3> *)this);
  local_res20.bSearchRight = true;
  local_res20.bSearchLeft = true;
  local_res20.DesiredParameter = param_2;
  fVar15 = TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue
                     ((TBSpline<UE::Math::TVector<double>,3> *)this,&local_res20);
  if ((float)((uint)(param_2 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)(param_2 - fVar15) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    return param_1;
  }
  iVar14 = -1;
  if (uVar13 == 0) {
    TBSpline<UE::Math::TVector<double>,3>::SetKnot
              ((TBSpline<UE::Math::TVector<double>,3> *)this,uVar8,param_2);
    if (fVar1 <= param_2) {
      if (fVar1 < param_2) {
        for (; (int)uVar12 <= iVar4 + -1; uVar12 = uVar12 + 1) {
          pcVar2 = *(code **)(this->_padding_ + 0x58);
          pfVar6 = (float *)(*pcVar2)(this,local_78,uVar12);
          lVar7 = (*pcVar2)(this,local_70,uVar12);
          if (*pfVar6 <= *(float *)(lVar7 + 4)) break;
          FlipSegment(this,uVar12);
        }
      }
    }
    else {
      uVar10 = uVar12 - 1;
      if (-1 < (int)(uVar12 - 1)) {
        do {
          uVar13 = uVar10;
          pcVar2 = *(code **)(this->_padding_ + 0x58);
          pfVar6 = (float *)(*pcVar2)(this,local_88,uVar13);
          lVar7 = (*pcVar2)(this,local_80,uVar13);
          if (*pfVar6 <= *(float *)(lVar7 + 4)) goto LAB_1435c34a1;
          FlipSegment(this,uVar13);
          uVar12 = uVar13;
          uVar10 = uVar13 - 1;
        } while (-1 < (int)(uVar13 - 1));
        iVar14 = uVar13 * 4;
        goto LAB_1435c356c;
      }
    }
LAB_1435c34a1:
    iVar14 = uVar12 * 4;
  }
  else if (uVar13 == 3) {
    TBSpline<UE::Math::TVector<double>,3>::SetKnot
              ((TBSpline<UE::Math::TVector<double>,3> *)this,uVar8,param_2);
    if (fVar1 <= param_2) {
      if (fVar1 < param_2) {
        while ((int)uVar10 <= iVar4 + -1) {
          uVar13 = (uint)uVar11;
          pcVar2 = *(code **)(this->_padding_ + 0x58);
          pfVar6 = (float *)(*pcVar2)(this,local_58,uVar11);
          lVar7 = (*pcVar2)(this,local_50,uVar11);
          if (*pfVar6 <= *(float *)(lVar7 + 4)) break;
          FlipSegment(this,uVar13);
          uVar10 = uVar13 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar12 = uVar13;
        }
      }
    }
    else {
      do {
        pcVar2 = *(code **)(this->_padding_ + 0x58);
        pfVar6 = (float *)(*pcVar2)(this,local_68,uVar12);
        lVar7 = (*pcVar2)(this,local_60,uVar12);
        if (*pfVar6 <= *(float *)(lVar7 + 4)) break;
        FlipSegment(this,uVar12);
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    iVar14 = uVar12 * 4 + 3;
  }
LAB_1435c356c:
  if ((5 < (byte)Spline::LogSpline._0_1_) &&
     (Logging::Private::BasicLog<6>
                (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::SetParameter(int,float)___ptr64'
                  ::__l75::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
     5 < (byte)Spline::LogSpline._0_1_)) {
    Logging::Private::BasicLog<6>
              (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::SetParameter(int,float)___ptr64'
                ::__l92::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  TBSpline<UE::Math::TVector<double>,3>::Dump((TBSpline<UE::Math::TVector<double>,3> *)this);
  return iVar14;
}

