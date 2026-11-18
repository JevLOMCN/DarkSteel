// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 67

// TPolyBezierSpline<float> @ 147a23c20

TPolyBezierSpline<float> * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::TPolyBezierSpline<float>
          (TPolyBezierSpline<float> *this)

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
  
  TBSpline<float,3>::TBSpline<float,3>((TBSpline<float,3> *)this);
  this->_padding_ =
       (longlong)
       &
       ___7__TSelfRegisteringSpline_V__TPolyBezierSpline_M_Spline_Geometry_UE__M_Spline_Geometry_UE__6B_
  ;
  if (`protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float>::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float>(void)___ptr64'
      ::__l2::bRegistered == false) {
    `protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float>::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float>(void)___ptr64'
    ::__l2::bRegistered = true;
    puVar2 = GetStaticTypeId();
    uVar1 = *puVar2;
    ::FString::FString(&local_48,L"PolyBezier");
    _Src = TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance;
    lVar3 = (longlong)TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<float>::Name.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,TSplineValueTypeTraits<float>::Name.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_58,TSplineValueTypeTraits<float>::Name.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,lVar3 * 2);
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TPolyBezierSpline_M_Spline_Geometry_UE__U__TDefaultDelete_V__TPolyBezierSpline_M_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `UE::Geometry::Spline::
               TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float>::
               RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<float>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
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
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__Spline__TSplineInterface<float>__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float>__
  ;
  this->_padding_ = (longlong)&___7__TPolyBezierSpline_M_Spline_Geometry_UE__6B_;
  return this;
}

// TPolyBezierSpline<UE::Math::TQuat<double>_> @ 147a23da0

TPolyBezierSpline<UE::Math::TQuat<double>_> * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::
TPolyBezierSpline<UE::Math::TQuat<double>_>(TPolyBezierSpline<UE::Math::TQuat<double>_> *this)

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
  
  TBSpline<UE::Math::TQuat<double>,3>::TBSpline<UE::Math::TQuat<double>,3>
            ((TBSpline<UE::Math::TQuat<double>,3> *)this);
  this->_padding_ =
       (longlong)
       &
       ___7__TSelfRegisteringSpline_V__TPolyBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE__U__TQuat_N_Math_4__Spline_Geometry_UE__6B_
  ;
  if (`protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>(void)___ptr64'
      ::__l2::bRegistered == false) {
    `protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>(void)___ptr64'
    ::__l2::bRegistered = true;
    puVar2 = GetStaticTypeId();
    uVar1 = *puVar2;
    ::FString::FString(&local_48,L"PolyBezier");
    _Src = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.AllocatorInstance;
    lVar3 = (longlong)TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_58,
                 TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,lVar3 * 2);
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TPolyBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TPolyBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `UE::Geometry::Spline::
               TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
               ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
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
       (longlong)&_vftable__for__UE__Geometry__Spline__TSplineInterface<UE::Math::TQuat<double>_>__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>__
  ;
  this->_padding_ = (longlong)&___7__TPolyBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE__6B_;
  return this;
}

// ~TPolyBezierSpline<float> @ 147a288b0

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::~TPolyBezierSpline<float>
          (TPolyBezierSpline<float> *this)

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

// ~TPolyBezierSpline<UE::Math::TQuat<double>_> @ 147a28900

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::
~TPolyBezierSpline<UE::Math::TQuat<double>_>(TPolyBezierSpline<UE::Math::TQuat<double>_> *this)

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

// operator= @ 147a2aa40

TPolyBezierSpline<float> * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::operator=
          (TPolyBezierSpline<float> *this,TPolyBezierSpline<float> *param_1)

{
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&param_1->_padding_)
  ;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  this->LastEvaluatedSegment = param_1->LastEvaluatedSegment;
  return this;
}

// operator= @ 147a2aac0

TPolyBezierSpline<UE::Math::TQuat<double>_> * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::operator=
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,
          TPolyBezierSpline<UE::Math::TQuat<double>_> *param_1)

{
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&param_1->_padding_)
  ;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  this->LastEvaluatedSegment = param_1->LastEvaluatedSegment;
  return this;
}

// AddBezierSegmentInternal @ 147a2eff0

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::AddBezierSegmentInternal
          (TPolyBezierSpline<float> *this,int param_1,float *param_2,float *param_3,float *param_4,
          float *param_5,EParameterizationPolicy param_6,bool param_7)

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
  fVar16 = __real_3f800000;
  if (param_6 != Uniform) {
    if (param_6 == ChordLength) {
      fVar16 = (float)((uint)(*param_5 - *param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    else if (param_6 == Centripetal) {
      fVar16 = SQRT((float)((uint)(*param_5 - *param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff));
    }
  }
  iVar10 = iVar13 * 4;
  TBSpline<float,3>::InsertValue((TBSpline<float,3> *)this,iVar10,param_2);
  TBSpline<float,3>::InsertValue((TBSpline<float,3> *)this,iVar10 + 1,param_3);
  TBSpline<float,3>::InsertValue((TBSpline<float,3> *)this,iVar10 + 2,param_4);
  TBSpline<float,3>::InsertValue((TBSpline<float,3> *)this,iVar10 + 3,param_5);
  if (param_7) {
    iVar10 = (int)this->_padding_ + -1;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if (iVar13 <= iVar10 + -1) goto LAB_147a2f1c0;
    bVar4 = true;
LAB_147a2f0f5:
    bVar3 = false;
  }
  else {
LAB_147a2f1c0:
    bVar4 = false;
    if ((param_7) || (iVar13 != 0)) goto LAB_147a2f0f5;
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
    TBSpline<float,3>::InsertKnot((TBSpline<float,3> *)this,(FKnot)((ulonglong)uVar7 << 0x20));
    uVar7 = 4;
    if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
      uVar7 = 1;
    }
    FVar2.Multiplicity = uVar7;
    FVar2.Value = 1.0;
    TBSpline<float,3>::InsertKnot((TBSpline<float,3> *)this,FVar2);
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
      fVar15 = *(float *)(this->_padding_ + -8 + (longlong)(int)this->_padding_ * 8);
      fVar14 = Spline::Internal::NextafterNoSubnormal(fVar15,true);
      fVar15 = fVar15 + fVar16;
      uVar7 = 3;
      if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
        uVar7 = 1;
      }
      if (fVar14 <= fVar15) {
        fVar14 = fVar15;
      }
      FVar9.Multiplicity = uVar7;
      FVar9.Value = fVar14;
    }
    else {
      if (!bVar3) goto LAB_147a2f2f2;
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
      fVar15 = *(float *)this->_padding_;
      fVar14 = Spline::Internal::NextafterNoSubnormal(fVar15,false);
      fVar15 = fVar15 - fVar16;
      uVar7 = 3;
      if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
        uVar7 = 1;
      }
      if (fVar15 <= fVar14) {
        fVar14 = fVar15;
      }
      FVar9.Multiplicity = uVar7;
      FVar9.Value = fVar14;
    }
    TBSpline<float,3>::InsertKnot((TBSpline<float,3> *)this,FVar9);
  }
LAB_147a2f2f2:
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
      *(undefined4 *)(lVar12 + 4 + this->_padding_) = 3;
      lVar12 = lVar12 + 8;
    } while ((int)uVar11 < (int)this->_padding_ + -1);
  }
  TBSpline<float,3>::Dump((TBSpline<float,3> *)this);
  return iVar13;
}

// AddBezierSegmentInternal @ 147a2f410

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AddBezierSegmentInternal
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,int param_1,TQuat<double> *param_2,
          TQuat<double> *param_3,TQuat<double> *param_4,TQuat<double> *param_5,
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
  TBSpline<UE::Math::TQuat<double>,3>::InsertValue
            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar10,param_2);
  TBSpline<UE::Math::TQuat<double>,3>::InsertValue
            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar10 + 1,param_3);
  TBSpline<UE::Math::TQuat<double>,3>::InsertValue
            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar10 + 2,param_4);
  TBSpline<UE::Math::TQuat<double>,3>::InsertValue
            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar10 + 3,param_5);
  if (param_7) {
    iVar10 = (int)this->_padding_ + -1;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if (iVar13 <= iVar10 + -1) goto LAB_147a2f5c9;
    bVar4 = true;
LAB_147a2f4fd:
    bVar3 = false;
  }
  else {
LAB_147a2f5c9:
    bVar4 = false;
    if ((param_7) || (iVar13 != 0)) goto LAB_147a2f4fd;
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
    TBSpline<UE::Math::TQuat<double>,3>::InsertKnot
              ((TBSpline<UE::Math::TQuat<double>,3> *)this,(FKnot)((ulonglong)uVar7 << 0x20));
    uVar7 = 4;
    if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
      uVar7 = 1;
    }
    FVar2.Multiplicity = uVar7;
    FVar2.Value = 1.0;
    TBSpline<UE::Math::TQuat<double>,3>::InsertKnot
              ((TBSpline<UE::Math::TQuat<double>,3> *)this,FVar2);
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
      if (!bVar3) goto LAB_147a2f6fb;
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
    TBSpline<UE::Math::TQuat<double>,3>::InsertKnot
              ((TBSpline<UE::Math::TQuat<double>,3> *)this,FVar9);
  }
LAB_147a2f6fb:
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
  TBSpline<UE::Math::TQuat<double>,3>::Dump((TBSpline<UE::Math::TQuat<double>,3> *)this);
  return iVar13;
}

// Clear @ 147a377a0

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::Clear(TPolyBezierSpline<float> *this)

{
  int *piVar1;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  return;
}

// Clear @ 147a37820

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::Clear
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this)

{
  int *piVar1;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  return;
}

// Clone @ 147a37ac0

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall UE::Geometry::Spline::TPolyBezierSpline<float>::Clone(TPolyBezierSpline<float> *this)

{
  TPolyBezierSpline<float> *this_00;
  ISplineInterface IVar1;
  ISplineInterface *in_RDX;
  
  this_00 = ::operator_new(0x60);
  if (this_00 == (TPolyBezierSpline<float> *)0x0) {
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
    IVar1 = (ISplineInterface)TPolyBezierSpline<float>(this_00);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)IVar1 + 0x18),
             (TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_);
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

// Clone @ 147a37b60

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::Clone
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this)

{
  TPolyBezierSpline<UE::Math::TQuat<double>_> *this_00;
  ISplineInterface IVar1;
  ISplineInterface *in_RDX;
  
  this_00 = ::operator_new(0x60);
  if (this_00 == (TPolyBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
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
    IVar1 = (ISplineInterface)TPolyBezierSpline<UE::Math::TQuat<double>_>(this_00);
  }
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)((longlong)IVar1 + 0x18)
             ,(TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)&this->_padding_);
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

// ComputeSegmentLength @ 147a39cd0

float __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::ComputeSegmentLength
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,TQuat<double> *param_1,
          TQuat<double> *param_2,EParameterizationPolicy param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  
  if (param_3 != Uniform) {
    if (param_3 == ChordLength) {
      dVar1 = param_2->X - param_1->X;
      dVar2 = param_2->Y - param_1->Y;
      dVar6 = param_2->Z - param_1->Z;
      dVar7 = param_2->W - param_1->W;
      return (float)SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar6 * dVar6 + dVar7 * dVar7);
    }
    if (param_3 == Centripetal) {
      dVar1 = param_2->X - param_1->X;
      dVar2 = param_2->Y - param_1->Y;
      dVar6 = param_2->Z - param_1->Z;
      dVar7 = param_2->W - param_1->W;
      auVar3._8_4_ = SUB84(dVar2,0);
      auVar3._0_8_ = dVar1;
      auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar4._8_8_ = auVar3._8_8_;
      auVar4._0_8_ = dVar1 * dVar1 + dVar2 * dVar2 + dVar6 * dVar6 + dVar7 * dVar7;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = SQRT(auVar4._0_8_);
      auVar5 = sqrtpd(auVar4,auVar5);
      return (float)auVar5._0_8_;
    }
  }
  return __real_3f800000;
}

// FindIndexForParameter @ 147a44e40

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::FindIndexForParameter
          (TPolyBezierSpline<float> *this,float param_1,float *param_2)

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

// FindIndexForParameter @ 147a44fd0

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::FindIndexForParameter
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,float param_1,float *param_2)

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

// FindNearest @ 147a45eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::FindNearest
          (TPolyBezierSpline<float> *this,float *param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_118 [32];
  float local_f8 [2];
  undefined8 local_f0;
  float *local_e8;
  float *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  TArrayView<float,int> local_c8;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  ulonglong local_a8;
  
  fVar4 = __real_7f7fffff;
  fVar3 = __real_40400000;
  fVar2 = __real_3f800000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_118;
  iVar5 = (int)this->_padding_;
  iVar10 = 0;
  fVar14 = 0.0;
  iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
  if (iVar5 < 1) {
    *param_2 = __real_7f7fffff;
    fVar14 = 0.0;
  }
  else {
    iVar11 = 2;
    fVar13 = __real_7f7fffff;
    local_f0 = param_1;
    local_e8 = param_2;
    do {
      iVar1 = (int)this->_padding_;
      if (iVar10 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
        pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,iVar11 + -2);
        pfVar7 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,iVar11 + -1);
        pfVar8 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,iVar11);
        pfVar9 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,iVar11 + 1);
        local_b8 = *pfVar6 - *param_1;
        uStack_d0 = 4;
        local_b4 = (*pfVar7 - *pfVar6) * fVar3;
        local_b0 = ((*pfVar8 - (*pfVar7 + *pfVar7)) + *pfVar6) * fVar3;
        local_d8 = &local_b8;
        local_c8._12_4_ = uStack_cc;
        local_c8.ArrayNum = 4;
        local_ac = ((*pfVar9 - *pfVar8 * fVar3) + *pfVar7 * fVar3) - *pfVar6;
        local_c8.DataPtr = local_d8;
        fVar12 = Spline::Math::FindNearestPoint_Cubic<float>(&local_c8,0.0,fVar2,local_f8);
        (**(code **)(this->_padding_ + 0x58))(this,&local_f0,iVar10);
        fVar12 = (fVar2 - fVar12) * (float)local_f0 + local_f0._4_4_ * fVar12;
      }
      else {
        fVar12 = 0.0;
        local_f8[0] = fVar4;
      }
      if (local_f8[0] < fVar13) {
        fVar13 = local_f8[0];
        fVar14 = fVar12;
      }
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + 4;
    } while (iVar10 < iVar5);
    *local_e8 = fVar13;
  }
  return fVar14;
}

// FindNearest @ 147a46140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::FindNearest
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,TQuat<double> *param_1,float *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  int iVar8;
  TQuat<double> *pTVar9;
  TQuat<double> *pTVar10;
  TQuat<double> *pTVar11;
  TQuat<double> *pTVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_188 [32];
  float local_168 [2];
  undefined8 local_160;
  float *local_158;
  TQuat<double> *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TArrayView<UE::Math::TQuat<double>,int> local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ulonglong local_a8;
  
  fVar7 = __real_7f7fffff;
  dVar6 = _UNK_15076baf8;
  dVar5 = ___xmm_40080000000000004008000000000000;
  fVar4 = __real_3f800000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_188;
  iVar8 = (int)this->_padding_;
  iVar13 = 0;
  fVar17 = 0.0;
  iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2;
  if (iVar8 < 1) {
    *param_2 = __real_7f7fffff;
    fVar17 = 0.0;
  }
  else {
    iVar14 = 2;
    fVar16 = __real_7f7fffff;
    local_160 = param_1;
    local_158 = param_2;
    do {
      iVar1 = (int)this->_padding_;
      if (iVar13 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
        pTVar9 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                           ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar14 + -2);
        pTVar10 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar14 + -1);
        pTVar11 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar14);
        pTVar12 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar14 + 1);
        dVar3 = pTVar9->Y - param_1->Y;
        uStack_140 = 4;
        dVar2 = pTVar9->W - param_1->W;
        local_128._8_4_ = SUB84(dVar3,0);
        local_128._0_8_ = pTVar9->X - param_1->X;
        local_128._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_118._8_4_ = SUB84(dVar2,0);
        local_118._0_8_ = pTVar9->Z - param_1->Z;
        local_118._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        dVar3 = (pTVar10->Y - pTVar9->Y) * dVar6;
        dVar2 = (pTVar10->W - pTVar9->W) * dVar6;
        local_108._8_4_ = SUB84(dVar3,0);
        local_108._0_8_ = (pTVar10->X - pTVar9->X) * dVar5;
        local_108._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_f8._8_4_ = SUB84(dVar2,0);
        local_f8._0_8_ = (pTVar10->Z - pTVar9->Z) * dVar5;
        local_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        dVar2 = ((pTVar11->Y - (pTVar10->Y + pTVar10->Y)) + pTVar9->Y) * dVar6;
        local_e8._8_4_ = SUB84(dVar2,0);
        local_e8._0_8_ = ((pTVar11->X - (pTVar10->X + pTVar10->X)) + pTVar9->X) * dVar5;
        local_e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        dVar2 = ((pTVar11->W - (pTVar10->W + pTVar10->W)) + pTVar9->W) * dVar6;
        local_d8._8_4_ = SUB84(dVar2,0);
        local_d8._0_8_ = ((pTVar11->Z - (pTVar10->Z + pTVar10->Z)) + pTVar9->Z) * dVar5;
        local_d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_148 = (TQuat<double> *)local_128;
        dVar3 = ((pTVar12->Y - dVar6 * pTVar11->Y) + dVar6 * pTVar10->Y) - pTVar9->Y;
        local_138._12_4_ = uStack_13c;
        local_138.ArrayNum = 4;
        dVar2 = ((pTVar12->W - dVar6 * pTVar11->W) + dVar6 * pTVar10->W) - pTVar9->W;
        local_c8._8_4_ = SUB84(dVar3,0);
        local_c8._0_8_ = ((pTVar12->X - dVar5 * pTVar11->X) + dVar5 * pTVar10->X) - pTVar9->X;
        local_c8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_b8._8_4_ = SUB84(dVar2,0);
        local_b8._0_8_ = ((pTVar12->Z - dVar5 * pTVar11->Z) + dVar5 * pTVar10->Z) - pTVar9->Z;
        local_b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_138.DataPtr = local_148;
        fVar15 = Spline::Math::FindNearestPoint_Cubic<UE::Math::TQuat<double>_>
                           (&local_138,0.0,fVar4,local_168);
        (**(code **)(this->_padding_ + 0x58))(this,&local_160,iVar13);
        fVar15 = (fVar4 - fVar15) * (float)local_160 + local_160._4_4_ * fVar15;
      }
      else {
        fVar15 = 0.0;
        local_168[0] = fVar7;
      }
      if (local_168[0] < fVar16) {
        fVar16 = local_168[0];
        fVar17 = fVar15;
      }
      iVar13 = iVar13 + 1;
      iVar14 = iVar14 + 4;
    } while (iVar13 < iVar8);
    *local_158 = fVar16;
  }
  return fVar17;
}

// FindNearestOnSegment @ 147a46620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::FindNearestOnSegment
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,TVector<double> *param_1,int param_2,
          float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  TVector<double> *pTVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  int iStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_108;
  if ((param_2 < 0) ||
     (iVar8 = (int)this->_padding_, (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2 <= param_2)) {
    *param_3 = 3.4028235e+38;
    fVar10 = 0.0;
  }
  else {
    iVar8 = param_2 * 4;
    pTVar4 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                       ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar8);
    pTVar5 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                       ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar8 + 1);
    pTVar6 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                       ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar8 + 2);
    pTVar7 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                       ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar8 + 3);
    fVar10 = __real_3f800000;
    local_d0 = (pTVar4->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    local_d8 = (pTVar4->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    local_c8 = (pTVar4->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    local_c0 = ((pTVar5->field0_0x0)._s_0.X - (pTVar4->field0_0x0)._s_0.X) * __real_4008000000000000
    ;
    dVar3 = ((pTVar5->field0_0x0)._s_0.Z - (pTVar4->field0_0x0)._s_0.Z) * _UNK_15076baf8;
    local_b8._8_4_ = SUB84(dVar3,0);
    local_b8._0_8_ =
         ((pTVar5->field0_0x0)._s_0.Y - (pTVar4->field0_0x0)._s_0.Y) *
         ___xmm_40080000000000004008000000000000;
    local_b8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    dVar3 = (pTVar5->field0_0x0)._s_0.Y;
    dVar1 = (pTVar5->field0_0x0)._s_0.X;
    dVar2 = (pTVar5->field0_0x0)._s_0.Z;
    local_a0 = (((pTVar6->field0_0x0)._s_0.Y - (dVar3 + dVar3)) + (pTVar4->field0_0x0)._s_0.Y) *
               __real_4008000000000000;
    local_98 = (((pTVar6->field0_0x0)._s_0.Z - (dVar2 + dVar2)) + (pTVar4->field0_0x0)._s_0.Z) *
               __real_4008000000000000;
    local_a8 = (((pTVar6->field0_0x0)._s_0.X - (dVar1 + dVar1)) + (pTVar4->field0_0x0)._s_0.X) *
               __real_4008000000000000;
    local_90 = (((pTVar7->field0_0x0)._s_0.X - (pTVar6->field0_0x0)._s_0.X * __real_4008000000000000
                ) + (pTVar5->field0_0x0)._s_0.X * __real_4008000000000000) -
               (pTVar4->field0_0x0)._s_0.X;
    dVar3 = (((pTVar7->field0_0x0)._s_0.Z - (pTVar6->field0_0x0)._s_0.Z * _UNK_15076baf8) +
            _UNK_15076baf8 * (pTVar5->field0_0x0)._s_0.Z) - (pTVar4->field0_0x0)._s_0.Z;
    local_e8 = (undefined1  [8])&local_d8;
    iStack_e0 = 4;
    local_88._8_4_ = SUB84(dVar3,0);
    local_88._0_8_ =
         (((pTVar7->field0_0x0)._s_0.Y -
          (pTVar6->field0_0x0)._s_0.Y * ___xmm_40080000000000004008000000000000) +
         ___xmm_40080000000000004008000000000000 * (pTVar5->field0_0x0)._s_0.Y) -
         (pTVar4->field0_0x0)._s_0.Y;
    local_88._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    fVar9 = Spline::Math::FindNearestPoint_Cubic<UE::Math::TVector<double>_>
                      ((TArrayView<UE::Math::TVector<double>,int> *)local_e8,0.0,__real_3f800000,
                       param_3);
    (**(code **)(this->_padding_ + 0x58))(this,local_e8,param_2);
    fVar10 = (fVar10 - fVar9) * (float)local_e8._0_4_ + (float)local_e8._4_4_ * fVar9;
  }
  return fVar10;
}

// FindWindow @ 147a48380

TStaticArray<float_const_*,4,4294967295> * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::FindWindow
          (TPolyBezierSpline<float> *this,
          TStaticArray<float_const_*,4,4294967295> *__return_storage_ptr__,float param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TStaticArray<float_const_*,4,4294967295> *pTVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  int local_res8 [2];
  float local_res20 [2];
  
  __return_storage_ptr__->Elements[0] = (float *)0x0;
  __return_storage_ptr__->Elements[1] = (float *)0x0;
  __return_storage_ptr__->Elements[2] = (float *)0x0;
  __return_storage_ptr__->Elements[3] = (float *)0x0;
  iVar9 = (int)this->_padding_;
  if (iVar9 < 4) {
    return __return_storage_ptr__;
  }
  iVar9 = (int)((iVar9 >> 0x1f & 3U) + iVar9) >> 2;
  MapGlobalParameterToLocalSegment(this,param_1,local_res8,local_res20);
  cVar1 = *(char *)((longlong)&this->_padding_ + 1);
  if ((cVar1 == '\0') || (local_res8[0] = local_res8[0] % iVar9, -1 < local_res8[0])) {
    iVar9 = (int)this->_padding_;
    uVar10 = local_res8[0] * 4;
    if (cVar1 == '\0') {
      uVar7 = uVar10 + 3;
      if (iVar9 <= (int)uVar7) {
        return __return_storage_ptr__;
      }
      uVar6 = 0;
      if ((int)uVar10 < iVar9) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      uVar6 = uVar10 + 1;
      __return_storage_ptr__->Elements[0] = (float *)(this->_padding_ + (longlong)(int)uVar10 * 4);
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
        pTVar5 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      uVar10 = uVar10 + 2;
      __return_storage_ptr__->Elements[1] = (float *)(this->_padding_ + (longlong)(int)uVar6 * 4);
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
        pTVar5 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      __return_storage_ptr__->Elements[2] = (float *)(this->_padding_ + (longlong)(int)uVar10 * 4);
      uVar10 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      pfVar8 = (float *)(this->_padding_ + (longlong)(int)uVar7 * 4);
      goto LAB_147a48715;
    }
  }
  else {
    local_res8[0] = local_res8[0] + iVar9;
    iVar9 = (int)this->_padding_;
    uVar10 = local_res8[0] * 4;
  }
  uVar6 = (iVar9 + (int)uVar10 % iVar9) % iVar9;
  uVar7 = 0;
  if ((int)uVar6 < iVar9) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Elements[0] = (float *)(this->_padding_ + (longlong)(int)uVar6 * 4);
  uVar6 = (iVar9 + (int)(uVar10 + 1) % iVar9) % iVar9;
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
    pTVar5 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Elements[1] = (float *)(this->_padding_ + (longlong)(int)uVar6 * 4);
  uVar6 = (iVar9 + (int)(uVar10 + 2) % iVar9) % iVar9;
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
    pTVar5 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Elements[2] = (float *)(this->_padding_ + (longlong)(int)uVar6 * 4);
  uVar7 = (iVar9 + (int)(uVar10 + 3) % iVar9) % iVar9;
  uVar10 = 0;
  if ((int)uVar7 < (int)this->_padding_) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
  pfVar8 = (float *)(this->_padding_ + (longlong)(int)uVar7 * 4);
LAB_147a48715:
  __return_storage_ptr__->Elements[3] = pfVar8;
  return __return_storage_ptr__;
}

// FindWindow @ 147a48750

TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::FindWindow
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,
          TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *__return_storage_ptr__,
          float param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *pTVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_res8 [2];
  float local_res20 [2];
  
  __return_storage_ptr__->Elements[0] = (TQuat<double> *)0x0;
  __return_storage_ptr__->Elements[1] = (TQuat<double> *)0x0;
  __return_storage_ptr__->Elements[2] = (TQuat<double> *)0x0;
  __return_storage_ptr__->Elements[3] = (TQuat<double> *)0x0;
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
        pTVar5 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      uVar6 = uVar9 + 1;
      __return_storage_ptr__->Elements[0] =
           (TQuat<double> *)((longlong)(int)uVar9 * 0x20 + this->_padding_);
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
        pTVar5 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      uVar9 = uVar9 + 2;
      __return_storage_ptr__->Elements[1] =
           (TQuat<double> *)((longlong)(int)uVar6 * 0x20 + this->_padding_);
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
        pTVar5 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      __return_storage_ptr__->Elements[2] =
           (TQuat<double> *)((longlong)(int)uVar9 * 0x20 + this->_padding_);
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
        pTVar5 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar2)();
        return pTVar5;
      }
      goto LAB_147a48ae1;
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
    pTVar5 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Elements[0] =
       (TQuat<double> *)((longlong)(int)uVar6 * 0x20 + this->_padding_);
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
    pTVar5 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Elements[1] =
       (TQuat<double> *)((longlong)(int)uVar6 * 0x20 + this->_padding_);
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
    pTVar5 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Elements[2] =
       (TQuat<double> *)((longlong)(int)uVar6 * 0x20 + this->_padding_);
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
    pTVar5 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar2)();
    return pTVar5;
  }
LAB_147a48ae1:
  __return_storage_ptr__->Elements[3] =
       (TQuat<double> *)((longlong)(int)uVar7 * 0x20 + this->_padding_);
  return __return_storage_ptr__;
}

// FlipSegment @ 147a48b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::FlipSegment
          (TPolyBezierSpline<float> *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  
  iVar12 = (**(code **)(this->_padding_ + 0x50))();
  if ((-1 < param_1) && (param_1 < iVar12)) {
    if ((5 < (byte)Spline::LogSpline._0_1_) &&
       (Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::FlipSegment(int)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
       5 < (byte)Spline::LogSpline._0_1_)) {
      Logging::Private::BasicLog<6>
                (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::FlipSegment(int)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
    TBSpline<float,3>::Dump((TBSpline<float,3> *)this);
    uVar16 = param_1 * 4;
    uVar18 = uVar16 + 3;
    if (((int)uVar16 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce6,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar6 = (int)this->_padding_;
    if (((iVar6 <= (int)uVar16) || (iVar6 <= (int)(uVar16 + 3))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce7,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar7 = this->_padding_;
    lVar15 = (longlong)(int)uVar16;
    uVar2 = *(undefined4 *)(lVar7 + lVar15 * 4);
    *(undefined4 *)(lVar7 + lVar15 * 4) = *(undefined4 *)(lVar7 + 0xc + lVar15 * 4);
    *(undefined4 *)(lVar7 + 0xc + lVar15 * 4) = uVar2;
    if (((int)(uVar16 + 1) < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce6,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar6 = (int)this->_padding_;
    if (((iVar6 <= (int)(uVar16 + 1)) || (iVar6 <= (int)(uVar16 + 2))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce7,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar7 = this->_padding_;
    uVar2 = *(undefined4 *)(lVar7 + 4 + lVar15 * 4);
    *(undefined4 *)(lVar7 + 4 + lVar15 * 4) = *(undefined4 *)(lVar7 + 8 + lVar15 * 4);
    *(undefined4 *)(lVar7 + 8 + lVar15 * 4) = uVar2;
    if (param_1 != 0) {
      uVar1 = uVar16 - 2;
      uVar13 = uVar16 - 1;
      uVar14 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar14 = ~uVar1 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar7 = this->_padding_;
      uVar17 = ~uVar13 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar13 < (int)this->_padding_) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar19 = (longlong)(int)uVar13;
      fVar3 = *(float *)(this->_padding_ + lVar19 * 4);
      fVar4 = *(float *)(lVar7 + (longlong)(int)uVar1 * 4);
      uVar14 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar2 = *(undefined4 *)(this->_padding_ + lVar15 * 4);
      uVar14 = 0;
      if ((int)uVar13 < (int)this->_padding_) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(undefined4 *)(this->_padding_ + lVar19 * 4) = uVar2;
      uVar14 = 0;
      if ((int)uVar13 < (int)this->_padding_) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fVar5 = *(float *)(this->_padding_ + lVar19 * 4);
      uVar13 = 0;
      if ((int)(uVar16 - 2) < (int)this->_padding_) {
        uVar13 = ~uVar1 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(float *)(this->_padding_ + (longlong)(int)uVar1 * 4) = fVar5 - (fVar3 - fVar4);
    }
    if (param_1 != iVar12 + -1) {
      uVar1 = uVar16 + 5;
      uVar16 = uVar16 + 4;
      uVar13 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar13 = ~uVar1 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar7 = this->_padding_;
      uVar14 = ~uVar16 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar15 = (longlong)(int)uVar16;
      fVar3 = *(float *)(this->_padding_ + lVar15 * 4);
      fVar4 = *(float *)(lVar7 + (longlong)(int)uVar1 * 4);
      uVar13 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar2 = *(undefined4 *)(this->_padding_ + (longlong)(int)uVar18 * 4);
      uVar18 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar18 = uVar14;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(undefined4 *)(this->_padding_ + lVar15 * 4) = uVar2;
      uVar18 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar18 = uVar14;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fVar5 = *(float *)(this->_padding_ + lVar15 * 4);
      uVar18 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar18 = ~uVar1 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(float *)(this->_padding_ + (longlong)(int)uVar1 * 4) = fVar5 - (fVar3 - fVar4);
    }
    uVar18 = param_1 + 1;
    if (((-1 < (int)uVar18) && (iVar12 = (int)this->_padding_, param_1 < iVar12)) &&
       ((int)uVar18 < iVar12)) {
      uVar8 = *(undefined8 *)(this->_padding_ + (longlong)param_1 * 8);
      uVar16 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar16 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar16 = (uint)~param_1 >> 0x1f;
      }
      uVar9 = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar18 * 8);
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(undefined8 *)(this->_padding_ + (longlong)param_1 * 8) = uVar9;
      uVar16 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(undefined8 *)(this->_padding_ + (longlong)(int)uVar18 * 8) = uVar8;
    }
    if ((5 < (byte)Spline::LogSpline._0_1_) &&
       (Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::FlipSegment(int)___ptr64'
                    ::__l47::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
       5 < (byte)Spline::LogSpline._0_1_)) {
      Logging::Private::BasicLog<6>
                (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::FlipSegment(int)___ptr64'
                  ::__l64::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
    TBSpline<float,3>::Dump((TBSpline<float,3> *)this);
  }
  return;
}

// FlipSegment @ 147a49330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::FlipSegment
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  double *pdVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  int iVar26;
  uint uVar27;
  double *pdVar28;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  uint uVar35;
  longlong lVar36;
  
  iVar26 = (**(code **)(this->_padding_ + 0x50))();
  if ((-1 < param_1) && (param_1 < iVar26)) {
    if ((5 < (byte)Spline::LogSpline._0_1_) &&
       (Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::FlipSegment(int)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
       5 < (byte)Spline::LogSpline._0_1_)) {
      Logging::Private::BasicLog<6>
                (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::FlipSegment(int)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
    TBSpline<UE::Math::TQuat<double>,3>::Dump((TBSpline<UE::Math::TQuat<double>,3> *)this);
    uVar30 = param_1 * 4;
    uVar35 = uVar30 + 3;
    if (((int)uVar30 < 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce6,L""), bVar25)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar4 = (int)this->_padding_;
    if (((iVar4 <= (int)uVar30) || (iVar4 <= (int)(uVar30 + 3))) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce7,L""), bVar25)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar34 = this->_padding_;
    lVar33 = (longlong)(int)uVar30;
    lVar36 = lVar33 * 0x20;
    uVar5 = *(undefined8 *)(lVar36 + lVar34);
    uVar6 = ((undefined8 *)(lVar36 + lVar34))[1];
    puVar29 = (undefined8 *)((lVar33 + 3) * 0x20 + lVar34);
    puVar2 = (undefined8 *)(lVar36 + 0x10 + lVar34);
    uVar22 = *puVar2;
    uVar23 = puVar2[1];
    uVar24 = puVar29[1];
    *(undefined8 *)(lVar36 + lVar34) = *puVar29;
    ((undefined8 *)(lVar36 + lVar34))[1] = uVar24;
    uVar24 = puVar29[3];
    puVar2 = (undefined8 *)(lVar36 + 0x10 + lVar34);
    *puVar2 = puVar29[2];
    puVar2[1] = uVar24;
    *puVar29 = uVar5;
    puVar29[1] = uVar6;
    puVar29[2] = uVar22;
    puVar29[3] = uVar23;
    if (((int)(uVar30 + 1) < 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce6,L""), bVar25)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar4 = (int)this->_padding_;
    if (((iVar4 <= (int)(uVar30 + 1)) || (iVar4 <= (int)(uVar30 + 2))) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce7,L""), bVar25)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar34 = this->_padding_;
    puVar2 = (undefined8 *)(lVar34 + 0x20 + lVar36);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    puVar29 = (undefined8 *)((lVar33 + 2) * 0x20 + lVar34);
    puVar2 = (undefined8 *)(lVar34 + 0x30 + lVar36);
    uVar22 = *puVar2;
    uVar23 = puVar2[1];
    uVar24 = puVar29[1];
    puVar2 = (undefined8 *)(lVar34 + 0x20 + lVar36);
    *puVar2 = *puVar29;
    puVar2[1] = uVar24;
    uVar24 = puVar29[3];
    puVar2 = (undefined8 *)(lVar34 + 0x30 + lVar36);
    *puVar2 = puVar29[2];
    puVar2[1] = uVar24;
    *puVar29 = uVar5;
    puVar29[1] = uVar6;
    puVar29[2] = uVar22;
    puVar29[3] = uVar23;
    if (param_1 != 0) {
      uVar1 = uVar30 - 1;
      uVar31 = ~uVar1 >> 0x1f;
      uVar27 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar27 = uVar31;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar32 = ~(uVar30 - 2) >> 0x1f;
      lVar34 = (longlong)(int)uVar1 * 0x20;
      pdVar28 = (double *)(this->_padding_ + lVar34);
      uVar27 = 0;
      if ((int)(uVar30 - 2) < (int)this->_padding_) {
        uVar27 = uVar32;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar14 = *pdVar28;
      dVar10 = pdVar28[1];
      dVar15 = pdVar28[2];
      dVar13 = pdVar28[3];
      lVar33 = (longlong)(int)(uVar30 - 2) * 0x20;
      pdVar28 = (double *)(lVar33 + this->_padding_);
      dVar16 = *pdVar28;
      dVar17 = pdVar28[1];
      pdVar28 = (double *)(lVar33 + 0x10 + this->_padding_);
      dVar18 = *pdVar28;
      dVar19 = pdVar28[1];
      uVar27 = 0;
      if ((int)uVar30 < (int)this->_padding_) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar2 = (undefined8 *)(lVar36 + this->_padding_);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      puVar2 = (undefined8 *)(lVar36 + 0x10 + this->_padding_);
      uVar22 = *puVar2;
      uVar23 = puVar2[1];
      uVar27 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar27 = uVar31;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar36 = this->_padding_;
      puVar2 = (undefined8 *)(lVar36 + lVar34);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      puVar2 = (undefined8 *)(lVar36 + 0x10 + lVar34);
      *puVar2 = uVar22;
      puVar2[1] = uVar23;
      uVar27 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar27 = uVar31;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pdVar28 = (double *)(this->_padding_ + lVar34);
      dVar20 = *pdVar28;
      pdVar3 = (double *)(this->_padding_ + 0x10 + lVar34);
      dVar21 = *pdVar3;
      dVar10 = pdVar28[1] - (dVar10 - dVar17);
      uVar1 = 0;
      if ((int)(uVar30 - 2) < (int)this->_padding_) {
        uVar1 = uVar32;
      }
      dVar13 = pdVar3[1] - (dVar13 - dVar19);
      if ((uVar1 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar34 = this->_padding_;
      auVar8._8_4_ = SUB84(dVar10,0);
      auVar8._0_8_ = dVar20 - (dVar14 - dVar16);
      auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(lVar33 + lVar34) = auVar8;
      auVar11._8_4_ = SUB84(dVar13,0);
      auVar11._0_8_ = dVar21 - (dVar15 - dVar18);
      auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined1 (*) [16])(lVar33 + 0x10 + lVar34) = auVar11;
    }
    if (param_1 != iVar26 + -1) {
      uVar1 = uVar30 + 4;
      uVar30 = uVar30 + 5;
      uVar31 = ~uVar1 >> 0x1f;
      uVar27 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar27 = uVar31;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar34 = (longlong)(int)uVar1 * 0x20;
      pdVar28 = (double *)(this->_padding_ + lVar34);
      uVar27 = 0;
      if ((int)uVar30 < (int)this->_padding_) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar14 = *pdVar28;
      dVar10 = pdVar28[1];
      dVar15 = pdVar28[2];
      dVar13 = pdVar28[3];
      lVar33 = (longlong)(int)uVar30 * 0x20;
      pdVar28 = (double *)(lVar33 + this->_padding_);
      dVar16 = *pdVar28;
      dVar17 = pdVar28[1];
      pdVar28 = (double *)(lVar33 + 0x10 + this->_padding_);
      dVar18 = *pdVar28;
      dVar19 = pdVar28[1];
      uVar27 = 0;
      if ((int)uVar35 < (int)this->_padding_) {
        uVar27 = ~uVar35 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar2 = (undefined8 *)((longlong)(int)uVar35 * 0x20 + this->_padding_);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      puVar2 = (undefined8 *)((longlong)(int)uVar35 * 0x20 + 0x10 + this->_padding_);
      uVar22 = *puVar2;
      uVar23 = puVar2[1];
      uVar35 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar35 = uVar31;
      }
      if ((uVar35 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar36 = this->_padding_;
      puVar2 = (undefined8 *)(lVar34 + lVar36);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      puVar2 = (undefined8 *)(lVar34 + 0x10 + lVar36);
      *puVar2 = uVar22;
      puVar2[1] = uVar23;
      uVar35 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar35 = uVar31;
      }
      if ((uVar35 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pdVar28 = (double *)(lVar34 + this->_padding_);
      dVar20 = *pdVar28;
      pdVar3 = (double *)(lVar34 + 0x10 + this->_padding_);
      dVar21 = *pdVar3;
      dVar10 = pdVar28[1] - (dVar10 - dVar17);
      uVar35 = 0;
      if ((int)uVar30 < (int)this->_padding_) {
        uVar35 = ~uVar30 >> 0x1f;
      }
      dVar13 = pdVar3[1] - (dVar13 - dVar19);
      if ((uVar35 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar34 = this->_padding_;
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = dVar20 - (dVar14 - dVar16);
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(lVar33 + lVar34) = auVar9;
      auVar12._8_4_ = SUB84(dVar13,0);
      auVar12._0_8_ = dVar21 - (dVar15 - dVar18);
      auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined1 (*) [16])(lVar33 + 0x10 + lVar34) = auVar12;
    }
    uVar35 = param_1 + 1;
    if (((-1 < (int)uVar35) && (iVar26 = (int)this->_padding_, param_1 < iVar26)) &&
       ((int)uVar35 < iVar26)) {
      uVar5 = *(undefined8 *)((longlong)param_1 * 8 + this->_padding_);
      uVar30 = 0;
      if ((int)uVar35 < (int)this->_padding_) {
        uVar30 = ~uVar35 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar30 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar30 = (uint)~param_1 >> 0x1f;
      }
      uVar6 = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar35 * 8);
      if ((uVar30 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)((longlong)param_1 * 8 + this->_padding_) = uVar6;
      uVar30 = 0;
      if ((int)uVar35 < (int)this->_padding_) {
        uVar30 = ~uVar35 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(this->_padding_ + (longlong)(int)uVar35 * 8) = uVar5;
    }
    if ((5 < (byte)Spline::LogSpline._0_1_) &&
       (Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::FlipSegment(int)___ptr64'
                    ::__l47::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
       5 < (byte)Spline::LogSpline._0_1_)) {
      Logging::Private::BasicLog<6>
                (&`public:_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::FlipSegment(int)___ptr64'
                  ::__l64::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
    TBSpline<UE::Math::TQuat<double>,3>::Dump((TBSpline<UE::Math::TQuat<double>,3> *)this);
  }
  return;
}

// GenerateDistanceKnotsForBezier @ 147a4cd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::GenerateDistanceKnotsForBezier
          (TPolyBezierSpline<float> *this,EParameterizationPolicy param_1)

{
  longlong *this_00;
  float *pfVar1;
  void *_Src;
  code *pcVar2;
  FKnot FVar3;
  FKnot FVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_res20;
  ForAnyElementType local_b8;
  int local_b0;
  int iStack_ac;
  float local_a8 [2];
  FValidKnotSearchParams local_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  FKnot local_78;
  float local_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  float local_60;
  undefined4 uStack_5c;
  
  local_90 = (int)this->_padding_;
  lVar12 = (longlong)local_90;
  lVar13 = 0;
  _Src = (void *)this->_padding_;
  local_98.Data = (FScriptContainerElement *)0x0;
  if (local_90 == 0) {
    local_8c = 0;
    iVar16 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_90,0,&local_98,local_90,&local_8c);
    memcpy(local_98.Data,_Src,lVar12 << 2);
    iVar16 = local_90;
  }
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  iStack_ac = 0;
  uVar7 = (int)(iVar16 + (iVar16 >> 0x1f & 3U)) >> 2;
  lVar12 = (longlong)(int)uVar7;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar7,&local_b8,0,&iStack_ac);
    uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar19 = __real_3f800000;
    uVar14 = 3;
    iVar16 = local_90;
    do {
      if ((int)uVar14 < iVar16) {
        uVar8 = 0;
        if ((int)uVar14 < iVar16) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar16 = local_90, bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar5.Data = local_98.Data;
        uVar8 = 0;
        if ((int)(uVar14 - 3) < iVar16) {
          uVar8 = ~(uVar14 - 3) >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_a8[0] = fVar19;
        if (param_1 != Uniform) {
          if (param_1 == ChordLength) {
            local_a8[0] = (float)((uint)(*(float *)(FVar5.Data + lVar13 + 0xc) -
                                        *(float *)(local_98.Data + lVar13)) & uVar15);
          }
          else if (param_1 == Centripetal) {
            local_a8[0] = SQRT((float)((uint)(*(float *)(FVar5.Data + lVar13 + 0xc) -
                                             *(float *)(local_98.Data + lVar13)) & uVar15));
          }
        }
        if (((local_b8.Data <= (FScriptContainerElement *)local_a8) &&
            ((FScriptContainerElement *)local_a8 < local_b8.Data + (longlong)iStack_ac * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_b0 == iStack_ac) {
          local_b0 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_b8,&iStack_ac);
        }
        lVar10 = (longlong)local_b0;
        local_b0 = local_b0 + 1;
        *(float *)(local_b8.Data + lVar10 * 4) = local_a8[0];
        iVar16 = local_90;
      }
      uVar14 = uVar14 + 4;
      lVar13 = lVar13 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  this_00 = &this->_padding_;
  iVar16 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar16 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this_00,0,(int *)((longlong)&this->_padding_ + 4));
  }
  local_a0.bSearchRight = true;
  local_a0.bSearchLeft = false;
  local_a0.DesiredParameter = 0.0;
  local_70 = TBSpline<float,3>::GetNearestAvailableKnotValue((TBSpline<float,3> *)this,&local_a0);
  uStack_6c = 4;
  FVar3.Multiplicity = 4;
  FVar3.Value = local_70;
  TBSpline<float,3>::InsertKnot((TBSpline<float,3> *)this,FVar3);
  fVar19 = 0.0;
  local_res20 = 0;
  uVar15 = 0;
  iVar16 = local_b0;
  if (0 < (int)(uVar7 - 1)) {
    local_80 = 0;
    local_88 = 0;
    do {
      lVar13 = local_80;
      lVar12 = local_88;
      if ((int)local_res20 < iVar16) {
        uVar14 = 0;
        if ((int)local_res20 < iVar16) {
          uVar14 = ~local_res20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar18 = *(float *)(local_b8.Data + lVar13);
        fVar17 = fVar19;
        if ((fVar18 != 0.0) && (fVar17 = fVar18 + fVar19, fVar17 == fVar19)) {
          fVar17 = Spline::Internal::NextafterNoSubnormal(fVar19,0.0 < fVar18);
        }
        local_a0.DesiredParameter = fVar17;
        local_68 = TBSpline<float,3>::GetNearestAvailableKnotValue
                             ((TBSpline<float,3> *)this,&local_a0);
        iVar16 = (int)this->_padding_ + -1;
        uStack_64 = 3;
        local_78.Multiplicity = 3;
        local_78.Value = local_68;
        uVar14 = uVar15;
        uVar8 = 0;
        fVar19 = fVar17;
        if (-1 < iVar16) {
          do {
            iVar9 = iVar16 - uVar8;
            if (iVar9 < 0) {
              iVar9 = iVar9 + 1;
            }
            uVar11 = (iVar9 >> 1) + uVar8;
            uVar14 = uVar15;
            if ((int)uVar11 < (int)this->_padding_) {
              uVar14 = ~uVar11 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (local_78.Value == *(float *)(*this_00 + (longlong)(int)uVar11 * 8)) {
              iVar16 = local_b0;
              if (2 < (byte)Spline::LogSpline._0_1_) {
                Logging::Private::BasicLog<3>
                          (&`protected:_bool___cdecl_UE::Geometry::Spline::TBSpline<float,3>::InsertKnot(UE::Geometry::Spline::FKnot)___ptr64'
                            ::__l8::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
                iVar16 = local_b0;
              }
              goto LAB_147a4d200;
            }
            uVar14 = uVar15;
            if ((int)uVar11 < (int)this->_padding_) {
              uVar14 = ~uVar11 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pfVar1 = (float *)(*this_00 + (longlong)(int)uVar11 * 8);
            if (local_78.Value < *pfVar1 || local_78.Value == *pfVar1) {
              iVar16 = uVar11 - 1;
              uVar14 = uVar8;
            }
            else {
              uVar14 = uVar11 + 1;
            }
            lVar12 = local_88;
            lVar13 = local_80;
            uVar8 = uVar14;
          } while ((int)uVar14 <= iVar16);
        }
        TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::Insert
                  ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)this_00,
                   &local_78,uVar14);
        *(undefined1 *)&this->_padding_ = 1;
        local_88 = lVar12;
        local_80 = lVar13;
        iVar16 = local_b0;
      }
LAB_147a4d200:
      local_res20 = local_res20 + 1;
      local_88 = local_88 + 1;
      local_80 = local_80 + 4;
    } while ((int)local_res20 < (int)(uVar7 - 1));
  }
  fVar18 = fVar19;
  if (0 < iVar16) {
    if ((int)(iVar16 - 1U) < iVar16) {
      uVar15 = ~(iVar16 - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar16 = local_b0, bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar17 = *(float *)(local_b8.Data + (longlong)(iVar16 + -1) * 4);
    if ((fVar17 != 0.0) && (fVar18 = fVar17 + fVar19, fVar17 + fVar19 == fVar19)) {
      fVar18 = Spline::Internal::NextafterNoSubnormal(fVar19,0.0 < fVar17);
    }
  }
  local_a0.DesiredParameter = fVar18;
  local_60 = TBSpline<float,3>::GetNearestAvailableKnotValue((TBSpline<float,3> *)this,&local_a0);
  uStack_5c = 4;
  FVar4.Multiplicity = 4;
  FVar4.Value = local_60;
  TBSpline<float,3>::InsertKnot((TBSpline<float,3> *)this,FVar4);
  *(undefined1 *)&this->_padding_ = 1;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return;
}

// GenerateDistanceKnotsForBezier @ 147a4d370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GenerateDistanceKnotsForBezier
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,EParameterizationPolicy param_1)

{
  longlong *this_00;
  float *pfVar1;
  float fVar2;
  void *_Src;
  code *pcVar3;
  double dVar4;
  double dVar5;
  FKnot FVar6;
  FKnot FVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  float fVar27;
  uint local_res20;
  ForAnyElementType local_b8;
  int local_b0;
  int iStack_ac;
  float local_a8 [2];
  FValidKnotSearchParams local_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  FKnot local_78;
  float local_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  float local_60;
  undefined4 uStack_5c;
  
  local_90 = (int)this->_padding_;
  lVar16 = (longlong)local_90;
  uVar19 = 0;
  _Src = (void *)this->_padding_;
  local_98.Data = (FScriptContainerElement *)0x0;
  if (local_90 == 0) {
    local_8c = 0;
    iVar20 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,local_90,0,&local_98,local_90,&local_8c);
    memcpy(local_98.Data,_Src,lVar16 << 5);
    iVar20 = local_90;
  }
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  iStack_ac = 0;
  uVar10 = (int)(iVar20 + (iVar20 >> 0x1f & 3U)) >> 2;
  lVar16 = (longlong)(int)uVar10;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&local_b8,0,&iStack_ac);
    iVar20 = local_90;
  }
  fVar27 = __real_3f800000;
  if (0 < (int)uVar10) {
    uVar18 = 3;
    uVar17 = uVar19;
    do {
      if ((int)uVar18 < iVar20) {
        uVar15 = 0;
        if ((int)uVar18 < iVar20) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar20 = local_90, bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar8.Data = local_98.Data;
        uVar15 = 0;
        if ((int)(uVar18 - 3) < iVar20) {
          uVar15 = ~(uVar18 - 3) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_a8[0] = fVar27;
        if (param_1 != Uniform) {
          if (param_1 == ChordLength) {
            dVar4 = *(double *)(FVar8.Data + uVar17 + 0x60) - *(double *)(local_98.Data + uVar17);
            dVar5 = *(double *)(FVar8.Data + uVar17 + 0x60 + 8) -
                    *(double *)(local_98.Data + uVar17 + 8);
            dVar25 = *(double *)(FVar8.Data + uVar17 + 0x70) -
                     *(double *)(local_98.Data + uVar17 + 0x10);
            dVar26 = *(double *)(FVar8.Data + uVar17 + 0x70 + 8) -
                     *(double *)(local_98.Data + uVar17 + 0x10 + 8);
            local_a8[0] = (float)SQRT(dVar4 * dVar4 + dVar5 * dVar5 +
                                      dVar25 * dVar25 + dVar26 * dVar26);
          }
          else if (param_1 == Centripetal) {
            dVar4 = *(double *)(FVar8.Data + uVar17 + 0x60) - *(double *)(local_98.Data + uVar17);
            dVar5 = *(double *)(FVar8.Data + uVar17 + 0x60 + 8) -
                    *(double *)(local_98.Data + uVar17 + 8);
            dVar25 = *(double *)(FVar8.Data + uVar17 + 0x70) -
                     *(double *)(local_98.Data + uVar17 + 0x10);
            dVar26 = *(double *)(FVar8.Data + uVar17 + 0x70 + 8) -
                     *(double *)(local_98.Data + uVar17 + 0x10 + 8);
            auVar22._8_4_ = SUB84(dVar5,0);
            auVar22._0_8_ = dVar4;
            auVar22._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
            auVar23._8_8_ = auVar22._8_8_;
            auVar23._0_8_ = dVar4 * dVar4 + dVar5 * dVar5 + dVar25 * dVar25 + dVar26 * dVar26;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = SQRT(auVar23._0_8_);
            auVar24 = sqrtpd(auVar23,auVar24);
            local_a8[0] = (float)auVar24._0_8_;
          }
        }
        if (((local_b8.Data <= (FScriptContainerElement *)local_a8) &&
            ((FScriptContainerElement *)local_a8 < local_b8.Data + (longlong)iStack_ac * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_b0 == iStack_ac) {
          local_b0 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_b8,&iStack_ac);
        }
        lVar14 = (longlong)local_b0;
        local_b0 = local_b0 + 1;
        *(float *)(local_b8.Data + lVar14 * 4) = local_a8[0];
        iVar20 = local_90;
      }
      uVar18 = uVar18 + 4;
      uVar17 = uVar17 + 0x80;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  this_00 = &this->_padding_;
  iVar20 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar20 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this_00,0,(int *)((longlong)&this->_padding_ + 4));
  }
  local_a0.bSearchRight = true;
  local_a0.bSearchLeft = false;
  local_a0.DesiredParameter = 0.0;
  local_70 = TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue
                       ((TBSpline<UE::Math::TQuat<double>,3> *)this,&local_a0);
  uStack_6c = 4;
  FVar6.Multiplicity = 4;
  FVar6.Value = local_70;
  TBSpline<UE::Math::TQuat<double>,3>::InsertKnot((TBSpline<UE::Math::TQuat<double>,3> *)this,FVar6)
  ;
  fVar27 = 0.0;
  local_res20 = 0;
  iVar20 = local_b0;
  if (0 < (int)(uVar10 - 1)) {
    local_80 = 0;
    local_88 = 0;
    uVar17 = uVar19;
    fVar21 = fVar27;
    do {
      lVar14 = local_80;
      lVar16 = local_88;
      uVar18 = (uint)uVar17;
      fVar27 = fVar21;
      if ((int)uVar18 < iVar20) {
        uVar11 = 0;
        uVar15 = uVar11;
        if ((int)uVar18 < iVar20) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar2 = *(float *)(local_b8.Data + lVar14);
        if ((fVar2 != 0.0) && (fVar27 = fVar2 + fVar21, fVar27 == fVar21)) {
          fVar27 = Spline::Internal::NextafterNoSubnormal(fVar21,0.0 < fVar2);
        }
        local_a0.DesiredParameter = fVar27;
        local_68 = TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue
                             ((TBSpline<UE::Math::TQuat<double>,3> *)this,&local_a0);
        iVar20 = (int)this->_padding_ + -1;
        uStack_64 = 3;
        local_78.Multiplicity = 3;
        local_78.Value = local_68;
        uVar17 = uVar19;
        uVar15 = uVar11;
        if (-1 < iVar20) {
          do {
            iVar12 = iVar20 - (int)uVar17;
            if (iVar12 < 0) {
              iVar12 = iVar12 + 1;
            }
            uVar15 = (iVar12 >> 1) + (int)uVar17;
            uVar18 = uVar11;
            if ((int)uVar15 < (int)this->_padding_) {
              uVar18 = ~uVar15 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar18 = local_res20;
            if (local_78.Value == *(float *)(*this_00 + (longlong)(int)uVar15 * 8)) {
              iVar20 = local_b0;
              if (2 < (byte)Spline::LogSpline._0_1_) {
                Logging::Private::BasicLog<3>
                          (&`protected:_bool___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::InsertKnot(UE::Geometry::Spline::FKnot)___ptr64'
                            ::__l8::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
                iVar20 = local_b0;
              }
              goto LAB_147a4d8df;
            }
            uVar13 = uVar11;
            if ((int)uVar15 < (int)this->_padding_) {
              uVar13 = ~uVar15 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pfVar1 = (float *)(*this_00 + (longlong)(int)uVar15 * 8);
            if (local_78.Value < *pfVar1 || local_78.Value == *pfVar1) {
              iVar20 = uVar15 - 1;
            }
            else {
              uVar17 = (ulonglong)(uVar15 + 1);
            }
            uVar15 = (uint)uVar17;
            lVar14 = local_80;
            lVar16 = local_88;
          } while ((int)uVar15 <= iVar20);
        }
        TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::Insert
                  ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)this_00,
                   &local_78,uVar15);
        *(undefined1 *)&this->_padding_ = 1;
        local_80 = lVar14;
        local_88 = lVar16;
        iVar20 = local_b0;
      }
LAB_147a4d8df:
      local_res20 = uVar18 + 1;
      uVar17 = (ulonglong)local_res20;
      local_88 = local_88 + 1;
      local_80 = local_80 + 4;
      fVar21 = fVar27;
    } while ((int)local_res20 < (int)(uVar10 - 1));
  }
  fVar21 = fVar27;
  if (0 < iVar20) {
    uVar10 = 0;
    if ((int)(iVar20 - 1U) < iVar20) {
      uVar10 = ~(iVar20 - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar20 = local_b0, bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar2 = *(float *)(local_b8.Data + (longlong)(iVar20 + -1) * 4);
    if ((fVar2 != 0.0) && (fVar21 = fVar2 + fVar27, fVar2 + fVar27 == fVar27)) {
      fVar21 = Spline::Internal::NextafterNoSubnormal(fVar27,0.0 < fVar2);
    }
  }
  local_a0.DesiredParameter = fVar21;
  local_60 = TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue
                       ((TBSpline<UE::Math::TQuat<double>,3> *)this,&local_a0);
  uStack_5c = 4;
  FVar7.Multiplicity = 4;
  FVar7.Value = local_60;
  TBSpline<UE::Math::TQuat<double>,3>::InsertKnot((TBSpline<UE::Math::TQuat<double>,3> *)this,FVar7)
  ;
  *(undefined1 *)&this->_padding_ = 1;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return;
}

// GetExpectedNumKnots @ 147a50a70

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::GetExpectedNumKnots(TPolyBezierSpline<float> *this)

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1 * 3 + 5;
}

// GetExpectedNumKnots @ 147a50a90

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetExpectedNumKnots
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this)

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1 * 3 + 5;
}

// GetImplementationName @ 147a50f20

FString * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::GetImplementationName
          (TPolyBezierSpline<float> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"PolyBezier");
  return __return_storage_ptr__;
}

// GetImplementationName @ 147a50f50

FString * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetImplementationName
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"PolyBezier");
  return __return_storage_ptr__;
}

// GetLoopKnotDelta @ 147a52a30

TOptional<float> __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::GetLoopKnotDelta(TPolyBezierSpline<float> *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TOptional<float> TVar7;
  uint uVar8;
  TOptional<float> in_RDX;
  uint uVar9;
  uint uVar10;
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    *(undefined1 *)((longlong)in_RDX + 4) = 0;
    return in_RDX;
  }
  iVar3 = (int)this->_padding_;
  uVar9 = iVar3 - 2;
  uVar8 = 0;
  if ((int)uVar9 < iVar3) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      TVar7 = (TOptional<float>)(*pcVar5)();
      return TVar7;
    }
  }
  iVar3 = (int)this->_padding_;
  lVar4 = this->_padding_;
  uVar10 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar3) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      TVar7 = (TOptional<float>)(*pcVar5)();
      return TVar7;
    }
  }
  fVar1 = *(float *)(this->_padding_ + (longlong)(int)uVar10 * 8);
  fVar2 = *(float *)(lVar4 + (longlong)(int)uVar9 * 8);
  *(undefined1 *)((longlong)in_RDX + 4) = 1;
  *(float *)in_RDX = fVar1 - fVar2;
  return in_RDX;
}

// GetLoopKnotDelta @ 147a52b50

TOptional<float> __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetLoopKnotDelta
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TOptional<float> TVar7;
  uint uVar8;
  TOptional<float> in_RDX;
  uint uVar9;
  uint uVar10;
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    *(undefined1 *)((longlong)in_RDX + 4) = 0;
    return in_RDX;
  }
  iVar3 = (int)this->_padding_;
  uVar9 = iVar3 - 2;
  uVar8 = 0;
  if ((int)uVar9 < iVar3) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      TVar7 = (TOptional<float>)(*pcVar5)();
      return TVar7;
    }
  }
  iVar3 = (int)this->_padding_;
  lVar4 = this->_padding_;
  uVar10 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar3) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      TVar7 = (TOptional<float>)(*pcVar5)();
      return TVar7;
    }
  }
  fVar1 = *(float *)(this->_padding_ + (longlong)(int)uVar10 * 8);
  fVar2 = *(float *)(lVar4 + (longlong)(int)uVar9 * 8);
  *(undefined1 *)((longlong)in_RDX + 4) = 1;
  *(float *)in_RDX = fVar1 - fVar2;
  return in_RDX;
}

// GetLoopKnotDelta @ 147a52c70

TOptional<float> __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::GetLoopKnotDelta
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TOptional<float> TVar7;
  uint uVar8;
  TOptional<float> in_RDX;
  uint uVar9;
  uint uVar10;
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    *(undefined1 *)((longlong)in_RDX + 4) = 0;
    return in_RDX;
  }
  iVar3 = (int)this->_padding_;
  uVar9 = iVar3 - 2;
  uVar8 = 0;
  if ((int)uVar9 < iVar3) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      TVar7 = (TOptional<float>)(*pcVar5)();
      return TVar7;
    }
  }
  iVar3 = (int)this->_padding_;
  lVar4 = this->_padding_;
  uVar10 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar3) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      TVar7 = (TOptional<float>)(*pcVar5)();
      return TVar7;
    }
  }
  fVar1 = *(float *)(this->_padding_ + (longlong)(int)uVar10 * 8);
  fVar2 = *(float *)(lVar4 + (longlong)(int)uVar9 * 8);
  *(undefined1 *)((longlong)in_RDX + 4) = 1;
  *(float *)in_RDX = fVar1 - fVar2;
  return in_RDX;
}

// GetNumberOfSegments @ 147a541f0

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::GetNumberOfSegments(TPolyBezierSpline<float> *this)

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  return (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
}

// GetNumberOfSegments @ 147a54210

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetNumberOfSegments
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this)

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  return (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
}

// GetParameter @ 147a55160

float __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::GetParameter
          (TPolyBezierSpline<float> *this,int param_1)

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

// GetParameter @ 147a55300

float __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetParameter
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,int param_1)

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

// GetParameterSpace @ 147a55a60

TInterval1<float> __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::GetParameterSpace(TPolyBezierSpline<float> *this)

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

// GetParameterSpace @ 147a55b60

TInterval1<float> __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetParameterSpace
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this)

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

// GetSegmentParameterRange @ 147a58cf0

TInterval1<float> __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::GetSegmentParameterRange
          (TPolyBezierSpline<float> *this,int param_1)

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

// GetSegmentParameterRange @ 147a58e00

TInterval1<float> __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetSegmentParameterRange
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,int param_1)

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

// GetStaticTypeId @ 147a5a020

uint * __cdecl UE::Geometry::Spline::TPolyBezierSpline<float>::GetStaticTypeId(void)

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
       `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::GetStaticTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::GetStaticTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::GetStaticTypeId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pwVar4 = L"";
    uVar5 = 0x811c9dc5;
    pwVar3 = L"PolyBezier";
    if (TSplineValueTypeTraits<float>::Name.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance;
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
    `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::GetStaticTypeId(void)'
    ::__l2::CachedTypeId = uVar2 * 0x1930000 | uVar5 & 0xffff;
    _Init_thread_footer(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::GetStaticTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::GetStaticTypeId(void)'
          ::__l2::CachedTypeId;
}

// GetStaticTypeId @ 147a5a110

uint * __cdecl
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)

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
       `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pwVar4 = L"";
    uVar5 = 0x811c9dc5;
    pwVar3 = L"PolyBezier";
    if (TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)
               TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.AllocatorInstance;
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
    `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
    ::__l2::CachedTypeId = uVar2 * 0x1930000 | uVar5 & 0xffff;
    _Init_thread_footer(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
          ::__l2::CachedTypeId;
}

// GetTypeId @ 147a5b040

uint __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::GetTypeId(TPolyBezierSpline<float> *this)

{
  uint *puVar1;
  
  puVar1 = GetStaticTypeId();
  return *puVar1;
}

// GetTypeId @ 147a5b060

uint __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::GetTypeId
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this)

{
  uint *puVar1;
  
  puVar1 = GetStaticTypeId();
  return *puVar1;
}

// InitializeFirstSegment @ 147a5dde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::InitializeFirstSegment
          (TPolyBezierSpline<float> *this,float param_1,float *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 auStackY_d8 [32];
  TArray<float,TSizedDefaultAllocator<32>_> local_98 [2];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar6 = (int)this->_padding_;
  if (iVar6 < 3) {
    iVar6 = TBSpline<float,3>::AddValue((TBSpline<float,3> *)this,param_2);
    *param_3 = iVar6;
    bVar5 = true;
  }
  else if (iVar6 == 3) {
    pfVar7 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,0);
    pfVar8 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,1);
    pfVar9 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,2);
    fVar1 = *pfVar7;
    fVar2 = *pfVar8;
    fVar3 = *param_2;
    fVar4 = *pfVar9;
    local_98[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98[0].ArrayNum = 4;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,4,0,&local_98[0].AllocatorInstance,4,&local_98[0].ArrayMax);
    *(float *)local_98[0].AllocatorInstance.Data = fVar1;
    *(float *)(local_98[0].AllocatorInstance.Data + 4) = fVar2;
    *(float *)(local_98[0].AllocatorInstance.Data + 8) = fVar4;
    *(float *)(local_98[0].AllocatorInstance.Data + 0xc) = fVar3;
    SetControlPoints(this,local_98,Centripetal);
    if (local_98[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].AllocatorInstance.Data);
    }
    *param_3 = 3;
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// InitializeFirstSegment @ 147a5df80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::InitializeFirstSegment
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,float param_1,TQuat<double> *param_2,
          int *param_3)

{
  bool bVar1;
  int iVar2;
  TQuat<double> *pTVar3;
  TQuat<double> *pTVar4;
  TQuat<double> *pTVar5;
  undefined1 auStackY_188 [32];
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  iVar2 = (int)this->_padding_;
  if (iVar2 < 3) {
    iVar2 = TBSpline<UE::Math::TQuat<double>,3>::AddValue
                      ((TBSpline<UE::Math::TQuat<double>,3> *)this,param_2);
    *param_3 = iVar2;
    bVar1 = true;
  }
  else if (iVar2 == 3) {
    pTVar3 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                       ((TBSpline<UE::Math::TQuat<double>,3> *)this,0);
    pTVar4 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                       ((TBSpline<UE::Math::TQuat<double>,3> *)this,1);
    pTVar5 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                       ((TBSpline<UE::Math::TQuat<double>,3> *)this,2);
    local_128 = pTVar3->Z;
    dStack_120 = pTVar3->W;
    local_118 = pTVar4->X;
    dStack_110 = pTVar4->Y;
    local_138 = pTVar3->X;
    dStack_130 = pTVar3->Y;
    local_f8 = pTVar5->X;
    dStack_f0 = pTVar5->Y;
    local_108 = pTVar4->Z;
    dStack_100 = pTVar4->W;
    local_e8 = pTVar5->Z;
    dStack_e0 = pTVar5->W;
    local_d8 = param_2->X;
    dStack_d0 = param_2->Y;
    local_c8 = param_2->Z;
    dStack_c0 = param_2->W;
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 4;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,4,0,&local_148.AllocatorInstance,4,&local_148.ArrayMax);
    *(double *)local_148.AllocatorInstance.Data = local_138;
    *(double *)(local_148.AllocatorInstance.Data + 8) = dStack_130;
    *(double *)(local_148.AllocatorInstance.Data + 0x10) = local_128;
    *(double *)(local_148.AllocatorInstance.Data + 0x18) = dStack_120;
    *(double *)(local_148.AllocatorInstance.Data + 0x20) = local_118;
    *(double *)(local_148.AllocatorInstance.Data + 0x28) = dStack_110;
    *(double *)(local_148.AllocatorInstance.Data + 0x30) = local_108;
    *(double *)(local_148.AllocatorInstance.Data + 0x38) = dStack_100;
    *(double *)(local_148.AllocatorInstance.Data + 0x40) = local_f8;
    *(double *)(local_148.AllocatorInstance.Data + 0x48) = dStack_f0;
    *(double *)(local_148.AllocatorInstance.Data + 0x50) = local_e8;
    *(double *)(local_148.AllocatorInstance.Data + 0x58) = dStack_e0;
    *(double *)(local_148.AllocatorInstance.Data + 0x60) = local_d8;
    *(double *)(local_148.AllocatorInstance.Data + 0x68) = dStack_d0;
    *(double *)(local_148.AllocatorInstance.Data + 0x70) = local_c8;
    *(double *)(local_148.AllocatorInstance.Data + 0x78) = dStack_c0;
    SetControlPoints(this,&local_148,Centripetal);
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    *param_3 = 3;
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// InitializeFirstSegment @ 147a5e160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::InitializeFirstSegment
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,float param_1,
          TVector<double> *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  undefined1 auStackY_128 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  iVar2 = (int)this->_padding_;
  if (iVar2 < 3) {
    iVar2 = TBSpline<UE::Math::TVector<double>,3>::AddValue
                      ((TBSpline<UE::Math::TVector<double>,3> *)this,param_2);
    *param_3 = iVar2;
    bVar1 = true;
  }
  else if (iVar2 == 3) {
    pTVar3 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                       ((TBSpline<UE::Math::TVector<double>,3> *)this,0);
    pTVar4 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                       ((TBSpline<UE::Math::TVector<double>,3> *)this,1);
    pTVar5 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                       ((TBSpline<UE::Math::TVector<double>,3> *)this,2);
    local_b8 = (pTVar3->field0_0x0)._s_0.X;
    dStack_b0 = (pTVar3->field0_0x0)._s_0.Y;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 4;
    local_a8 = (pTVar5->field0_0x0)._s_0.X;
    dStack_a0 = (pTVar5->field0_0x0)._s_0.Y;
    local_d8 = *(undefined8 *)((longlong)&pTVar3->field0_0x0 + 0x10);
    local_80 = *(undefined8 *)&pTVar4->field0_0x0;
    uStack_78 = *(undefined8 *)((longlong)&pTVar4->field0_0x0 + 8);
    local_d0 = *(undefined8 *)((longlong)&pTVar4->field0_0x0 + 0x10);
    local_c8 = *(undefined8 *)((longlong)&pTVar5->field0_0x0 + 0x10);
    local_50 = *(undefined8 *)&param_2->field0_0x0;
    uStack_48 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    local_c0 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,4,0,&local_e8.AllocatorInstance,4,&local_e8.ArrayMax);
    *(double *)local_e8.AllocatorInstance.Data = local_b8;
    *(double *)(local_e8.AllocatorInstance.Data + 8) = dStack_b0;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x10) = (undefined4)local_d8;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x14) = local_d8._4_4_;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x18) = (undefined4)local_80;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x1c) = local_80._4_4_;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x20) = (undefined4)uStack_78;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x24) = uStack_78._4_4_;
    *(int *)(local_e8.AllocatorInstance.Data + 0x28) = (int)local_d0;
    *(int *)(local_e8.AllocatorInstance.Data + 0x2c) = (int)((ulonglong)local_d0 >> 0x20);
    *(double *)(local_e8.AllocatorInstance.Data + 0x30) = local_a8;
    *(double *)(local_e8.AllocatorInstance.Data + 0x38) = dStack_a0;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x40) = (undefined4)local_c8;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x44) = local_c8._4_4_;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x48) = (undefined4)local_50;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x4c) = local_50._4_4_;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x50) = (undefined4)uStack_48;
    *(undefined4 *)(local_e8.AllocatorInstance.Data + 0x54) = uStack_48._4_4_;
    *(int *)(local_e8.AllocatorInstance.Data + 0x58) = (int)local_c0;
    *(int *)(local_e8.AllocatorInstance.Data + 0x5c) = (int)((ulonglong)local_c0 >> 0x20);
    SetControlPoints(this,&local_e8,Centripetal);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    *param_3 = 3;
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// InsertPoint @ 147a5f490

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::InsertPoint
          (TPolyBezierSpline<float> *this,float param_1,float *param_2,
          EParameterizationPolicy param_3)

{
  float fVar1;
  code *pcVar2;
  FKnot FVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  int local_108;
  int local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  FValidKnotSearchParams local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint uStack_a4;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 *local_90;
  TPolyBezierSpline<float> *local_88;
  undefined1 *local_80;
  TPolyBezierSpline<float> *local_78;
  
  bVar4 = InitializeFirstSegment(this,param_1,param_2,&local_108);
  if (!bVar4) {
    local_c4.bSearchRight = true;
    local_c4.bSearchLeft = true;
    local_c4.DesiredParameter = param_1;
    fVar8 = TBSpline<float,3>::GetNearestAvailableKnotValue((TBSpline<float,3> *)this,&local_c4);
    (**(code **)(this->_padding_ + 0x30))(this,&local_b0);
    MapGlobalParameterToLocalSegment(this,fVar8,&local_104,&local_e8);
    iVar5 = local_104 * 4;
    pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,iVar5);
    local_d8 = *pfVar6;
    if (local_b0 < fVar8) {
      if (fVar8 < local_ac) {
        pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,iVar5 + 1);
        fVar8 = *pfVar6;
        pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,iVar5 + 2);
        fVar1 = *pfVar6;
        pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,iVar5 + 3);
        fVar9 = __real_3f800000 - local_e8;
        local_d4 = *pfVar6;
        local_dc = fVar9 * local_d8 + fVar8 * local_e8;
        fVar8 = fVar9 * fVar8 + fVar1 * local_e8;
        local_e0 = local_dc * fVar9 + fVar8 * local_e8;
        local_e4 = *param_2;
        local_d0 = fVar9 * fVar1 + local_d4 * local_e8;
        local_cc = fVar8 * fVar9 + local_d0 * local_e8;
        local_c8 = local_e4;
        (**(code **)(this->_padding_ + 0x58))(this,&local_b8,local_104);
        fVar8 = fVar9 * local_b8 + local_b4 * local_e8;
        if (fVar8 == local_b8) {
          fVar8 = Spline::Internal::NextafterNoSubnormal(fVar8,true);
        }
        if (fVar8 == local_b4) {
          fVar8 = Spline::Internal::NextafterNoSubnormal(fVar8,false);
        }
        lVar7 = 4;
        do {
          TBSpline<float,3>::RemoveValue((TBSpline<float,3> *)this,iVar5);
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        AddBezierSegmentInternal
                  (this,local_104,&local_d8,&local_dc,&local_e0,&local_e4,param_3,true);
        uStack_a4 = 3;
        if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
          uStack_a4 = 1;
        }
        FVar3.Multiplicity = uStack_a4;
        FVar3.Value = fVar8;
        local_a8 = fVar8;
        TBSpline<float,3>::InsertKnot((TBSpline<float,3> *)this,FVar3);
        local_108 = AddBezierSegmentInternal
                              (this,local_104 + 1,&local_c8,&local_cc,&local_d0,&local_d4,param_3,
                               true);
      }
      else {
        GetLoopKnotDelta(this);
        (**(code **)(this->_padding_ + 0x38))(this,0);
        local_80 = local_98;
        local_78 = this;
        pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,(int)this->_padding_ + -1);
        local_ec = *pfVar6;
        iVar5 = (int)this->_padding_;
        local_f0 = (*param_2 - local_ec) * __real_3ea8f5c3 + local_ec;
        local_f4 = (*param_2 - local_ec) * __real_3f28f5c3 + local_ec;
        iVar5 = AddBezierSegmentInternal
                          (this,(int)((iVar5 >> 0x1f & 3U) + iVar5) >> 2,&local_ec,&local_f0,
                           &local_f4,param_2,param_3,true);
        ScopeExitSupport::
        TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::AppendPoint'::__l2::<lambda_1>_>
        ::
        ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::AppendPoint_::__l2::<lambda_1>_>
                  (&local_80);
        local_108 = iVar5;
      }
    }
    else {
      GetLoopKnotDelta(this);
      (**(code **)(this->_padding_ + 0x38))(this);
      local_90 = local_a0;
      local_88 = this;
      if (((int)this->_padding_ < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      local_f8 = *param_2;
      local_100 = *(float *)this->_padding_;
      local_fc = (local_100 - local_f8) * __real_3f28f5c3 + local_f8;
      local_f8 = (local_100 - local_f8) * __real_3ea8f5c3 + local_f8;
      iVar5 = AddBezierSegmentInternal(this,0,param_2,&local_f8,&local_fc,&local_100,param_3,false);
      if ((iVar5 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewIndex == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Splines\\PolyBezierSpline.h"
                             ,0x701,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      ScopeExitSupport::
      TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::PrependPoint'::__l2::<lambda_1>_>
      ::
      ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::PrependPoint_::__l2::<lambda_1>_>
                (&local_90);
      local_108 = iVar5;
    }
  }
  return local_108;
}

// InsertPoint @ 147a5f950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::InsertPoint
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,float param_1,TQuat<double> *param_2,
          EParameterizationPolicy param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  FKnot FVar16;
  bool bVar17;
  int iVar18;
  TQuat<double> *pTVar19;
  longlong lVar20;
  float fVar21;
  float local_2e8;
  int local_2e4;
  int local_2e0;
  FValidKnotSearchParams local_2dc;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  uint uStack_2bc;
  undefined1 *local_2b8;
  TPolyBezierSpline<UE::Math::TQuat<double>_> *pTStack_2b0;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  undefined1 *local_298;
  TPolyBezierSpline<UE::Math::TQuat<double>_> *local_290;
  TQuat<double> local_288;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  TQuat<double> local_1e8;
  TQuat<double> local_1c8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  TQuat<double> local_168;
  TQuat<double> local_148;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  TQuat<double> local_e8;
  double local_c8;
  double dStack_c0;
  undefined1 *local_b8;
  double dStack_b0;
  
  bVar17 = InitializeFirstSegment(this,param_1,param_2,&local_2e4);
  if (!bVar17) {
    local_2dc.bSearchRight = true;
    local_2dc.bSearchLeft = true;
    local_2dc.DesiredParameter = param_1;
    fVar21 = TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue
                       ((TBSpline<UE::Math::TQuat<double>,3> *)this,&local_2dc);
    (**(code **)(this->_padding_ + 0x30))(this,&local_2c8);
    MapGlobalParameterToLocalSegment(this,fVar21,&local_2e0,&local_2e8);
    iVar18 = local_2e0 * 4;
    pTVar19 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                        ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar18);
    local_168.Z = pTVar19->Z;
    local_168.W = pTVar19->W;
    local_168.X = pTVar19->X;
    local_168.Y = pTVar19->Y;
    local_2b8 = (undefined1 *)local_168.Z;
    pTStack_2b0 = (TPolyBezierSpline<UE::Math::TQuat<double>_> *)local_168.W;
    local_c8 = local_168.X;
    dStack_c0 = local_168.Y;
    local_b8 = (undefined1 *)local_168.Z;
    dStack_b0 = local_168.W;
    if (local_2c8 < fVar21) {
      if (fVar21 < local_2c4) {
        pTVar19 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar18 + 1);
        dVar10 = pTVar19->X;
        dVar11 = pTVar19->Y;
        dVar5 = pTVar19->Z;
        dVar7 = pTVar19->W;
        pTVar19 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar18 + 2);
        dVar12 = pTVar19->X;
        dVar13 = pTVar19->Y;
        dVar14 = pTVar19->Z;
        dVar15 = pTVar19->W;
        pTVar19 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar18 + 3);
        fVar21 = __real_3f800000 - local_2e8;
        local_148.X = pTVar19->X;
        local_148.Y = pTVar19->Y;
        local_148.Z = pTVar19->Z;
        local_148.W = pTVar19->W;
        dVar9 = (double)fVar21;
        dVar8 = (double)local_2e8;
        dVar4 = dVar8 * dVar5;
        dVar6 = dVar8 * dVar7;
        dVar3 = dVar8 * dVar11 + dVar9 * local_168.Y;
        dVar2 = dVar6 + dVar9 * (double)pTStack_2b0;
        local_188._8_4_ = SUB84(dVar3,0);
        local_188._0_8_ = dVar8 * dVar10 + dVar9 * local_168.X;
        local_188._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_178._8_4_ = SUB84(dVar2,0);
        local_178._0_8_ = dVar4 + dVar9 * (double)local_2b8;
        local_178._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        dVar5 = dVar8 * dVar14 + dVar9 * dVar5;
        dVar7 = dVar8 * dVar15 + dVar9 * dVar7;
        dVar2 = (dVar9 * dVar11 + dVar8 * dVar13) * dVar8 +
                (dVar8 * dVar11 + dVar9 * local_168.Y) * dVar9;
        local_1a8._8_4_ = SUB84(dVar2,0);
        local_1a8._0_8_ =
             (dVar9 * dVar10 + dVar8 * dVar12) * dVar8 +
             (dVar8 * dVar10 + dVar9 * local_168.X) * dVar9;
        local_1a8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_1c8.Z = param_2->Z;
        local_1c8.W = param_2->W;
        dVar2 = (dVar6 + dVar9 * (double)pTStack_2b0) * dVar9 + dVar7 * dVar8;
        local_1c8.X = param_2->X;
        local_1c8.Y = param_2->Y;
        local_198._8_4_ = SUB84(dVar2,0);
        local_198._0_8_ = (dVar4 + dVar9 * (double)local_2b8) * dVar9 + dVar5 * dVar8;
        local_198._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        dVar6 = dVar9 * dVar12 + dVar8 * local_148.X;
        dVar2 = dVar9 * dVar13 + dVar8 * local_148.Y;
        dVar3 = dVar8 * local_148.Z + dVar9 * dVar14;
        dVar4 = dVar8 * local_148.W + dVar9 * dVar15;
        local_128._8_4_ = SUB84(dVar2,0);
        local_128._0_8_ = dVar6;
        local_128._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_118._8_4_ = SUB84(dVar4,0);
        local_118._0_8_ = dVar3;
        local_118._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        dVar2 = (dVar9 * dVar11 + dVar8 * dVar13) * dVar9 + dVar2 * dVar8;
        local_108._8_4_ = SUB84(dVar2,0);
        local_108._0_8_ = (dVar9 * dVar10 + dVar8 * dVar12) * dVar9 + dVar6 * dVar8;
        local_108._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        dVar2 = dVar4 * dVar8 + dVar7 * dVar9;
        local_f8._8_4_ = SUB84(dVar2,0);
        local_f8._0_8_ = dVar3 * dVar8 + dVar5 * dVar9;
        local_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_e8.X = local_1c8.X;
        local_e8.Y = local_1c8.Y;
        local_e8.Z = local_1c8.Z;
        local_e8.W = local_1c8.W;
        (**(code **)(this->_padding_ + 0x58))(this,&local_2d0,local_2e0);
        fVar21 = fVar21 * local_2d0 + local_2cc * local_2e8;
        if (fVar21 == local_2d0) {
          fVar21 = Spline::Internal::NextafterNoSubnormal(fVar21,true);
        }
        if (fVar21 == local_2cc) {
          fVar21 = Spline::Internal::NextafterNoSubnormal(fVar21,false);
        }
        lVar20 = 4;
        do {
          TBSpline<UE::Math::TQuat<double>,3>::RemoveValue
                    ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar18);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        AddBezierSegmentInternal
                  (this,local_2e0,&local_168,(TQuat<double> *)local_188,(TQuat<double> *)local_1a8,
                   &local_1c8,param_3,true);
        uStack_2bc = 3;
        if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
          uStack_2bc = 1;
        }
        FVar16.Multiplicity = uStack_2bc;
        FVar16.Value = fVar21;
        local_2c0 = fVar21;
        TBSpline<UE::Math::TQuat<double>,3>::InsertKnot
                  ((TBSpline<UE::Math::TQuat<double>,3> *)this,FVar16);
        local_2e4 = AddBezierSegmentInternal
                              (this,local_2e0 + 1,&local_e8,(TQuat<double> *)local_108,
                               (TQuat<double> *)local_128,&local_148,param_3,true);
      }
      else {
        GetLoopKnotDelta(this);
        (**(code **)(this->_padding_ + 0x38))(this,0);
        local_2b8 = local_2a0;
        pTStack_2b0 = this;
        pTVar19 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,(int)this->_padding_ + -1);
        local_1e8.X = pTVar19->X;
        local_1e8.Y = pTVar19->Y;
        dVar5 = param_2->X - local_1e8.X;
        dVar7 = param_2->Y - local_1e8.Y;
        local_1e8.Z = pTVar19->Z;
        local_1e8.W = pTVar19->W;
        iVar18 = (int)this->_padding_;
        dVar4 = param_2->Z - local_1e8.Z;
        dVar6 = param_2->W - local_1e8.W;
        dVar3 = dVar7 * _UNK_15183f908 + local_1e8.Y;
        dVar2 = dVar6 * _UNK_15183f908 + local_1e8.W;
        dVar7 = dVar7 * _UNK_15183f918 + local_1e8.Y;
        dVar6 = dVar6 * _UNK_15183f918 + local_1e8.W;
        local_1f8._8_4_ = SUB84(dVar2,0);
        local_1f8._0_8_ = dVar4 * ___xmm_3fd51eb8600000003fd51eb860000000 + local_1e8.Z;
        local_1f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_208._8_4_ = SUB84(dVar3,0);
        local_208._0_8_ = dVar5 * ___xmm_3fd51eb8600000003fd51eb860000000 + local_1e8.X;
        local_208._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_228._8_4_ = SUB84(dVar7,0);
        local_228._0_8_ = dVar5 * ___xmm_3fe51eb8600000003fe51eb860000000 + local_1e8.X;
        local_228._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_218._8_4_ = SUB84(dVar6,0);
        local_218._0_8_ = dVar4 * ___xmm_3fe51eb8600000003fe51eb860000000 + local_1e8.Z;
        local_218._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        iVar18 = AddBezierSegmentInternal
                           (this,(int)((iVar18 >> 0x1f & 3U) + iVar18) >> 2,&local_1e8,
                            (TQuat<double> *)local_208,(TQuat<double> *)local_228,param_2,param_3,
                            true);
        ScopeExitSupport::
        TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendPoint'::__l2::<lambda_1>_>
        ::
        ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendPoint_::__l2::<lambda_1>_>
                  (&local_2b8);
        local_2e4 = iVar18;
      }
    }
    else {
      GetLoopKnotDelta(this);
      (**(code **)(this->_padding_ + 0x38))(this);
      local_298 = local_2a8;
      local_290 = this;
      pTVar19 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                          ((TBSpline<UE::Math::TQuat<double>,3> *)this,0);
      dVar5 = param_2->X;
      dVar6 = param_2->Y;
      dVar7 = param_2->Z;
      dVar4 = param_2->W;
      local_288.X = pTVar19->X;
      local_288.Y = pTVar19->Y;
      local_288.Z = pTVar19->Z;
      local_288.W = pTVar19->W;
      dVar2 = (local_288.W - dVar4) * _UNK_15183f908 + dVar4;
      dVar3 = (local_288.Y - dVar6) * _UNK_15183f908 + dVar6;
      dVar6 = (local_288.Y - dVar6) * _UNK_15183f918 + dVar6;
      dVar4 = (local_288.W - dVar4) * _UNK_15183f918 + dVar4;
      local_238._8_4_ = SUB84(dVar2,0);
      local_238._0_8_ = (local_288.Z - dVar7) * ___xmm_3fd51eb8600000003fd51eb860000000 + dVar7;
      local_238._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_248._8_4_ = SUB84(dVar3,0);
      local_248._0_8_ = (local_288.X - dVar5) * ___xmm_3fd51eb8600000003fd51eb860000000 + dVar5;
      local_248._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_268._8_4_ = SUB84(dVar6,0);
      local_268._0_8_ = (local_288.X - dVar5) * ___xmm_3fe51eb8600000003fe51eb860000000 + dVar5;
      local_268._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_258._8_4_ = SUB84(dVar4,0);
      local_258._0_8_ = (local_288.Z - dVar7) * ___xmm_3fe51eb8600000003fe51eb860000000 + dVar7;
      local_258._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      iVar18 = AddBezierSegmentInternal
                         (this,0,param_2,(TQuat<double> *)local_248,(TQuat<double> *)local_268,
                          &local_288,param_3,false);
      if ((iVar18 != 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("NewIndex == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Splines\\PolyBezierSpline.h"
                              ,0x701,L""), bVar17)) {
        pcVar1 = (code *)swi(3);
        iVar18 = (*pcVar1)();
        return iVar18;
      }
      ScopeExitSupport::
      TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::PrependPoint'::__l2::<lambda_1>_>
      ::
      ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::PrependPoint_::__l2::<lambda_1>_>
                (&local_298);
      local_2e4 = iVar18;
    }
  }
  return local_2e4;
}

// InsertPoint @ 147a5ff90

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::InsertPoint
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,float param_1,
          TVector<double> *param_2,EParameterizationPolicy param_3)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FKnot FVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  TVector<double> *pTVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float local_268;
  float local_264;
  int local_260;
  FValidKnotSearchParams local_25c;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  uint uStack_23c;
  TVector<double>_u_0 local_238;
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  undefined1 *local_210;
  TPolyBezierSpline<UE::Math::TVector<double>_> *local_208;
  undefined1 *local_200;
  TPolyBezierSpline<UE::Math::TVector<double>_> *local_1f8;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0 [7];
  
  bVar11 = InitializeFirstSegment(this,param_1,param_2,&local_260);
  if (!bVar11) {
    local_25c.bSearchRight = true;
    local_25c.bSearchLeft = true;
    local_25c.DesiredParameter = param_1;
    fVar15 = TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue
                       ((TBSpline<UE::Math::TVector<double>,3> *)this,&local_25c);
    (**(code **)(this->_padding_ + 0x30))(this,&local_248);
    MapGlobalParameterToLocalSegment(this,fVar15,(int *)&local_268,&local_264);
    fVar10 = local_268;
    iVar12 = (int)local_268 * 4;
    pTVar13 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                        ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar12);
    local_100._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
    local_100._s_0.X = (pTVar13->field0_0x0)._s_0.X;
    local_100._s_0.Y = (pTVar13->field0_0x0)._s_0.Y;
    local_238._s_0.Z = local_100._s_0.Z;
    if (local_248 < fVar15) {
      if (fVar15 < local_244) {
        pTVar13 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar12 + 1);
        dVar17 = (pTVar13->field0_0x0)._s_0.X;
        dVar6 = (pTVar13->field0_0x0)._s_0.Y;
        dVar1 = (pTVar13->field0_0x0)._s_0.Z;
        pTVar13 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar12 + 2);
        dVar7 = (pTVar13->field0_0x0)._s_0.X;
        dVar8 = (pTVar13->field0_0x0)._s_0.Y;
        dVar16 = (pTVar13->field0_0x0)._s_0.Z;
        pTVar13 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar12 + 3);
        local_268 = __real_3f800000 - local_264;
        local_e8._s_0.X = (pTVar13->field0_0x0)._s_0.X;
        local_e8._s_0.Y = (pTVar13->field0_0x0)._s_0.Y;
        local_e8._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
        dVar4 = (double)local_264;
        dVar5 = (double)local_268;
        local_178._s_0.X = dVar4 * dVar17 + dVar5 * local_100._s_0.X;
        local_178._s_0.Y = dVar4 * dVar6 + dVar5 * local_100._s_0.Y;
        local_178._s_0.Z = dVar4 * dVar1 + dVar5 * local_238._s_0.Z;
        dVar3 = dVar4 * dVar7 + dVar5 * dVar17;
        dVar17 = dVar4 * dVar8 + dVar5 * dVar6;
        local_190._s_0.X = dVar3 * dVar4 + local_178._s_0.X * dVar5;
        dVar1 = dVar4 * dVar16 + dVar5 * dVar1;
        local_190._s_0.Y = dVar17 * dVar4 + local_178._s_0.Y * dVar5;
        local_190._s_0.Z = dVar1 * dVar4 + local_178._s_0.Z * dVar5;
        local_118._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_118._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_118._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        local_160._s_0.X = dVar4 * local_e8._s_0.X + dVar5 * dVar7;
        local_160._s_0.Y = dVar4 * local_e8._s_0.Y + dVar5 * dVar8;
        local_160._s_0.Z = dVar4 * local_e8._s_0.Z + dVar5 * dVar16;
        local_148._s_0.X = local_160._s_0.X * dVar4 + dVar3 * dVar5;
        local_148._s_0.Y = local_160._s_0.Y * dVar4 + dVar17 * dVar5;
        local_148._s_0.Z = local_160._s_0.Z * dVar4 + dVar1 * dVar5;
        local_d0[0]._0_8_ = local_118._s_0.X;
        local_d0[0]._8_8_ = local_118._s_0.Y;
        local_d0[0]._16_8_ = local_118._s_0.Z;
        (**(code **)(this->_padding_ + 0x58))(this,&local_250,fVar10);
        fVar15 = local_268 * local_250 + local_24c * local_264;
        if (fVar15 == local_250) {
          fVar15 = Spline::Internal::NextafterNoSubnormal(fVar15,true);
        }
        if (fVar15 == local_24c) {
          fVar15 = Spline::Internal::NextafterNoSubnormal(fVar15,false);
        }
        lVar14 = 4;
        do {
          TBSpline<UE::Math::TVector<double>,3>::RemoveValue
                    ((TBSpline<UE::Math::TVector<double>,3> *)this,iVar12);
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        AddBezierSegmentInternal
                  (this,(int)fVar10,(TVector<double> *)&local_100._s_0,
                   (TVector<double> *)&local_178._s_0,(TVector<double> *)&local_190._s_0,
                   (TVector<double> *)&local_118._s_0,param_3,true);
        uStack_23c = 3;
        if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
          uStack_23c = 1;
        }
        FVar9.Multiplicity = uStack_23c;
        FVar9.Value = fVar15;
        local_240 = fVar15;
        TBSpline<UE::Math::TVector<double>,3>::InsertKnot
                  ((TBSpline<UE::Math::TVector<double>,3> *)this,FVar9);
        local_260 = AddBezierSegmentInternal
                              (this,(int)fVar10 + 1,(TVector<double> *)&local_d0[0]._s_0,
                               (TVector<double> *)&local_148._s_0,(TVector<double> *)&local_160._s_0
                               ,(TVector<double> *)&local_e8._s_0,param_3,true);
      }
      else {
        GetLoopKnotDelta(this);
        (**(code **)(this->_padding_ + 0x38))(this,0);
        local_200 = local_218;
        local_1f8 = this;
        pTVar13 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)this,(int)this->_padding_ + -1
                            );
        local_238._s_0.X = (pTVar13->field0_0x0)._s_0.X;
        local_238._s_0.Y = (pTVar13->field0_0x0)._s_0.Y;
        dVar17 = (param_2->field0_0x0)._s_0.X - local_238._s_0.X;
        dVar1 = (param_2->field0_0x0)._s_0.Y - local_238._s_0.Y;
        local_238._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
        iVar12 = (int)this->_padding_;
        dVar16 = (param_2->field0_0x0)._s_0.Z - local_238._s_0.Z;
        local_1a8._s_0.X = dVar17 * __real_3fd51eb860000000 + local_238._s_0.X;
        local_1a8._s_0.Z = dVar16 * __real_3fd51eb860000000 + local_238._s_0.Z;
        local_1a8._s_0.Y = dVar1 * __real_3fd51eb860000000 + local_238._s_0.Y;
        local_1c0._s_0.X = dVar17 * __real_3fe51eb860000000 + local_238._s_0.X;
        local_1c0._s_0.Y = dVar1 * __real_3fe51eb860000000 + local_238._s_0.Y;
        local_1c0._s_0.Z = dVar16 * __real_3fe51eb860000000 + local_238._s_0.Z;
        iVar12 = AddBezierSegmentInternal
                           (this,(int)((iVar12 >> 0x1f & 3U) + iVar12) >> 2,
                            (TVector<double> *)&local_238._s_0,(TVector<double> *)&local_1a8._s_0,
                            (TVector<double> *)&local_1c0._s_0,param_2,param_3,true);
        ScopeExitSupport::
        TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendPoint'::__l2::<lambda_1>_>
        ::
        ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendPoint_::__l2::<lambda_1>_>
                  (&local_200);
        local_260 = iVar12;
      }
    }
    else {
      GetLoopKnotDelta(this);
      (**(code **)(this->_padding_ + 0x38))(this);
      local_210 = local_220;
      local_208 = this;
      pTVar13 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)this,0);
      dVar1 = (param_2->field0_0x0)._s_0.X;
      dVar16 = (param_2->field0_0x0)._s_0.Y;
      local_130._s_0.X = (pTVar13->field0_0x0)._s_0.X;
      local_130._s_0.Y = (pTVar13->field0_0x0)._s_0.Y;
      dVar17 = (param_2->field0_0x0)._s_0.Z;
      local_130._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
      local_1d8._s_0.X = (local_130._s_0.X - dVar1) * __real_3fd51eb860000000 + dVar1;
      local_1d8._s_0.Z = (local_130._s_0.Z - dVar17) * __real_3fd51eb860000000 + dVar17;
      local_1d8._s_0.Y = (local_130._s_0.Y - dVar16) * __real_3fd51eb860000000 + dVar16;
      local_1f0._s_0.X = (local_130._s_0.X - dVar1) * __real_3fe51eb860000000 + dVar1;
      local_1f0._s_0.Y = (local_130._s_0.Y - dVar16) * __real_3fe51eb860000000 + dVar16;
      local_1f0._s_0.Z = (local_130._s_0.Z - dVar17) * __real_3fe51eb860000000 + dVar17;
      iVar12 = AddBezierSegmentInternal
                         (this,0,param_2,(TVector<double> *)&local_1d8._s_0,
                          (TVector<double> *)&local_1f0._s_0,(TVector<double> *)&local_130._s_0,
                          param_3,false);
      if ((iVar12 != 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NewIndex == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Splines\\PolyBezierSpline.h"
                              ,0x701,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        iVar12 = (*pcVar2)();
        return iVar12;
      }
      ScopeExitSupport::
      TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::PrependPoint'::__l2::<lambda_1>_>
      ::
      ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::PrependPoint_::__l2::<lambda_1>_>
                (&local_210);
      local_260 = iVar12;
    }
  }
  return local_260;
}

// InsertPointAtSegmentParam @ 147a612c0

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::InsertPointAtSegmentParam
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,int param_1,float param_2,
          TVector<double> *param_3,EParameterizationPolicy param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_res8 [2];
  float local_28;
  float local_24;
  
  iVar2 = (int)this->_padding_;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  if ((iVar2 != 0) || (bVar1 = InitializeFirstSegment(this,0.0,param_3,local_res8), !bVar1)) {
    iVar2 = iVar2 + -1;
    if (param_1 < iVar2) {
      iVar2 = param_1;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    (**(code **)(this->_padding_ + 0x58))(this,&local_28,iVar3);
    local_res8[0] = InsertPoint(this,(local_24 - local_28) * param_2 + local_28,param_3,param_4);
  }
  return local_res8[0];
}

// InterpolateWindow @ 147a62370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::InterpolateWindow
          (TPolyBezierSpline<float> *this,TArrayView<float_const_*_const,int> *param_1,float param_2
          )

{
  float fVar1;
  undefined1 auStack_98 [32];
  float local_78 [4];
  TArrayView<float_const_,int> local_68;
  int local_58 [4];
  TArrayView<float_const_*_const,int> local_48;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1->ArrayNum < 4) {
    fVar1 = 0.0;
  }
  else {
    (**(code **)(this->_padding_ + 0x50))();
    MapGlobalParameterToLocalSegment(this,param_2,local_58,local_78);
    local_68.DataPtr = &local_38;
    local_30 = __real_3f800000 - local_78[0];
    local_68.ArrayNum = 4;
    local_38 = local_30 * local_30 * local_30;
    local_34 = local_78[0] * __real_40400000 * local_30 * local_30;
    local_48.DataPtr = param_1->DataPtr;
    local_48.ArrayNum = param_1->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_30 = local_78[0] * local_78[0] * __real_40400000 * local_30;
    local_2c = local_78[0] * local_78[0] * local_78[0];
    fVar1 = TSplineInterpolationPolicy<float>::InterpolateWithBasis(&local_48,&local_68);
  }
  return fVar1;
}

// InterpolateWindow @ 147a62490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<double> * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::InterpolateWindow
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,TQuat<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TQuat<double>_const_*_const,int> *param_1,float param_2)

{
  undefined1 auStack_a8 [32];
  float local_88 [4];
  TArrayView<float_const_,int> local_78;
  int local_68 [4];
  TArrayView<UE::Math::TQuat<double>_const_*_const,int> local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1->ArrayNum < 4) {
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
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
    TSplineInterpolationPolicy<UE::Math::TQuat<double>_>::InterpolateWithBasis
              (__return_storage_ptr__,&local_58,&local_78);
  }
  return __return_storage_ptr__;
}

// MapGlobalParameterToLocalSegment @ 147a64430

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::MapGlobalParameterToLocalSegment
          (TPolyBezierSpline<float> *this,float param_1,int *param_2,float *param_3)

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
      goto LAB_147a64718;
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
LAB_147a64718:
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

// MapGlobalParameterToLocalSegment @ 147a64880

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::MapGlobalParameterToLocalSegment
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,float param_1,int *param_2,
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
      goto LAB_147a64b68;
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
LAB_147a64b68:
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

// RemovePoint @ 147a7afa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::RemovePoint
          (TPolyBezierSpline<float> *this,int param_1)

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
        bVar2 = TBSpline<float,3>::RemoveValue((TBSpline<float,3> *)this,iVar4);
        bVar6 = (bool)(bVar6 & bVar2);
        iVar4 = iVar4 + -1;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      if (0 < (int)this->_padding_) {
        TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)
                   &this->_padding_,0,Default);
        *(undefined1 *)&this->_padding_ = 1;
      }
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
          bVar2 = TBSpline<float,3>::RemoveValue((TBSpline<float,3> *)this,iVar4);
          bVar6 = (bool)(bVar6 & bVar2);
          iVar4 = iVar4 + -1;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        iVar4 = uVar5 + 1;
        if ((-1 < iVar4) && (iVar4 < (int)this->_padding_)) {
          TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_,iVar4,Default);
          *(undefined1 *)&this->_padding_ = 1;
        }
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
          TBSpline<float,3>::RemoveValue((TBSpline<float,3> *)this,param_1 * 4 + -2);
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        if (param_1 < (int)this->_padding_) {
          TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_,param_1,Default);
          *(undefined1 *)&this->_padding_ = 1;
        }
      }
    }
    TBSpline<float,3>::Dump((TBSpline<float,3> *)this);
    return bVar6;
  }
  return false;
}

// RemovePoint @ 147a7b1d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::RemovePoint
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,int param_1)

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
        bVar2 = TBSpline<UE::Math::TQuat<double>,3>::RemoveValue
                          ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar4);
        bVar6 = (bool)(bVar6 & bVar2);
        iVar4 = iVar4 + -1;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      if (0 < (int)this->_padding_) {
        TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)
                   &this->_padding_,0,Default);
        *(undefined1 *)&this->_padding_ = 1;
      }
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
          bVar2 = TBSpline<UE::Math::TQuat<double>,3>::RemoveValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar4);
          bVar6 = (bool)(bVar6 & bVar2);
          iVar4 = iVar4 + -1;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        iVar4 = uVar5 + 1;
        if ((-1 < iVar4) && (iVar4 < (int)this->_padding_)) {
          TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_,iVar4,Default);
          *(undefined1 *)&this->_padding_ = 1;
        }
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
          TBSpline<UE::Math::TQuat<double>,3>::RemoveValue
                    ((TBSpline<UE::Math::TQuat<double>,3> *)this,param_1 * 4 + -2);
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        if (param_1 < (int)this->_padding_) {
          TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_,param_1,Default);
          *(undefined1 *)&this->_padding_ = 1;
        }
      }
    }
    TBSpline<UE::Math::TQuat<double>,3>::Dump((TBSpline<UE::Math::TQuat<double>,3> *)this);
    return bVar6;
  }
  return false;
}

// RemoveSegment @ 147a7ed70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::RemoveSegment
          (TPolyBezierSpline<float> *this,int param_1)

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
              (&`public:_bool___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::RemoveSegment(int)___ptr64'
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

// RemoveSegment @ 147a7ee10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::RemoveSegment
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,int param_1)

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
              (&`public:_bool___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::RemoveSegment(int)___ptr64'
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

// Reparameterize @ 147a7f3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::Reparameterize
          (TPolyBezierSpline<float> *this,EParameterizationPolicy param_1)

{
  GenerateDistanceKnotsForBezier(this,param_1);
  if (5 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_virtual_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::Reparameterize(UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  TBSpline<float,3>::PrintKnotVector((TBSpline<float,3> *)this);
  return;
}

// Reparameterize @ 147a7f400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::Reparameterize
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,EParameterizationPolicy param_1)

{
  GenerateDistanceKnotsForBezier(this,param_1);
  if (5 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_virtual_void___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::Reparameterize(UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  TBSpline<UE::Math::TQuat<double>,3>::PrintKnotVector((TBSpline<UE::Math::TQuat<double>,3> *)this);
  return;
}

// SetClosedLoop @ 147a8b270

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::SetClosedLoop
          (TPolyBezierSpline<float> *this,bool param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  undefined1 local_38 [8];
  undefined1 *local_30;
  TPolyBezierSpline<float> *local_28;
  
  cVar1 = (**(code **)(this->_padding_ + 0x40))();
  if (param_1 != (bool)cVar1) {
    iVar2 = (**(code **)(this->_padding_ + 0x50))(this);
    if (param_1) {
      if (0 < iVar2) {
        pfVar3 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,0);
        local_res10[0] = *pfVar3;
        pfVar3 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,iVar2 * 4 + -1);
        local_res18[0] = local_res10[0] - *pfVar3;
        if (__real_322bcc77 < (float)((uint)local_res18[0] & __xmm_7fffffff7fffffff7fffffff7fffffff)
           ) {
          local_res18[0] = local_res18[0] * __real_3ea8f5c3;
          local_res8[0] = local_res10[0] - local_res18[0];
          local_res18[0] = local_res18[0] + *pfVar3;
          GetLoopKnotDelta(this);
          (**(code **)(this->_padding_ + 0x38))(this,0);
          local_30 = local_38;
          local_28 = this;
          pfVar3 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,(int)this->_padding_ + -1);
          local_res20[0] = *pfVar3;
          iVar2 = (int)this->_padding_;
          AddBezierSegmentInternal
                    (this,(int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2,local_res20,local_res18,
                     local_res8,local_res10,Centripetal,true);
          ScopeExitSupport::
          TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment'::__l2::<lambda_1>_>
          ::
          ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment_::__l2::<lambda_1>_>
                    (&local_30);
          *(bool *)((longlong)&this->_padding_ + 1) = param_1;
          return;
        }
      }
    }
    else if (0 < iVar2) {
      RemoveSegment(this,iVar2 + -1);
    }
    *(bool *)((longlong)&this->_padding_ + 1) = param_1;
  }
  return;
}

// SetClosedLoop @ 147a8b400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::SetClosedLoop
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,bool param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  TQuat<double> *pTVar16;
  uint uVar17;
  TPolyBezierSpline<UE::Math::TQuat<double>_> *pTVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double local_res8;
  double *local_f8;
  TPolyBezierSpline<UE::Math::TQuat<double>_> *local_f0;
  TQuat<double> local_e8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  TQuat<double> local_88 [4];
  
  cVar13 = (**(code **)(this->_padding_ + 0x40))();
  if (param_1 != (bool)cVar13) {
    iVar14 = (**(code **)(this->_padding_ + 0x50))(this);
    if (param_1) {
      if (0 < iVar14) {
        pTVar16 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,0);
        local_e8.X = pTVar16->X;
        local_e8.Y = pTVar16->Y;
        local_e8.Z = pTVar16->Z;
        local_e8.W = pTVar16->W;
        pTVar18 = this;
        pTVar16 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,iVar14 * 4 + -1);
        dVar11 = pTVar16->Z;
        dVar6 = pTVar16->W;
        dVar12 = pTVar16->X;
        dVar5 = pTVar16->Y;
        dVar9 = local_e8.Z - dVar11;
        dVar10 = local_e8.W - dVar6;
        local_res8 = __real_3e45798ee0000000;
        auVar20._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              (uint)((ulonglong)dVar9 >> 0x20),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar9,0));
        auVar20._8_4_ = _UNK_15061cc88 & SUB84(dVar10,0);
        auVar20._12_4_ = _UNK_15061cc8c & (uint)((ulonglong)dVar10 >> 0x20);
        dVar7 = local_e8.X - dVar12;
        dVar8 = local_e8.Y - dVar5;
        lVar19 = -(ulonglong)(__real_3e45798ee0000000 < auVar20._8_8_);
        auVar1._8_4_ = (int)lVar19;
        auVar1._0_8_ = -(ulonglong)(__real_3e45798ee0000000 < auVar20._0_8_);
        auVar1._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
        iVar14 = movmskpd((int)pTVar18,auVar1);
        auVar21._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              (uint)((ulonglong)dVar7 >> 0x20),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar7,0));
        auVar21._8_4_ = _UNK_15061cc88 & SUB84(dVar8,0);
        auVar21._12_4_ = _UNK_15061cc8c & (uint)((ulonglong)dVar8 >> 0x20);
        lVar19 = -(ulonglong)(__real_3e45798ee0000000 < auVar21._8_8_);
        auVar2._8_4_ = (int)lVar19;
        auVar2._0_8_ = -(ulonglong)(__real_3e45798ee0000000 < auVar21._0_8_);
        auVar2._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
        uVar15 = movmskpd((int)pTVar16,auVar2);
        uVar17 = iVar14 << 2 | uVar15;
        if (uVar17 != 0) {
          lVar19 = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)(dVar6 + local_e8.W) >> 0x20) &
                                     _UNK_15061cc8c,SUB84(dVar6 + local_e8.W,0) & _UNK_15061cc88));
          auVar3._8_4_ = (int)lVar19;
          auVar3._0_8_ = -(ulonglong)
                          (__real_3e45798ee0000000 <
                          (double)CONCAT44((uint)((ulonglong)(dVar11 + local_e8.Z) >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar11 + local_e8.Z,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar3._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
          uVar17 = movmskpd(uVar17,auVar3);
          lVar19 = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)(dVar5 + local_e8.Y) >> 0x20) &
                                     _UNK_15061cc8c,SUB84(dVar5 + local_e8.Y,0) & _UNK_15061cc88));
          auVar4._8_4_ = (int)lVar19;
          auVar4._0_8_ = -(ulonglong)
                          (__real_3e45798ee0000000 <
                          (double)CONCAT44((uint)((ulonglong)(dVar12 + local_e8.X) >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar12 + local_e8.X,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar4._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
          iVar14 = movmskpd(uVar15,auVar4);
          if ((uVar17 & 0x3fffffff) != 0 || iVar14 != 0) {
            dVar5 = dVar5 + _UNK_15183f908 * dVar8;
            dVar8 = local_e8.Y - _UNK_15183f908 * dVar8;
            dVar6 = dVar6 + _UNK_15183f908 * dVar10;
            dVar10 = local_e8.W - _UNK_15183f908 * dVar10;
            local_a8._8_4_ = SUB84(dVar5,0);
            local_a8._0_8_ = dVar12 + ___xmm_3fd51eb8600000003fd51eb860000000 * dVar7;
            local_a8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
            local_c8._8_4_ = SUB84(dVar8,0);
            local_c8._0_8_ = local_e8.X - ___xmm_3fd51eb8600000003fd51eb860000000 * dVar7;
            local_c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            local_98._8_4_ = SUB84(dVar6,0);
            local_98._0_8_ = dVar11 + ___xmm_3fd51eb8600000003fd51eb860000000 * dVar9;
            local_98._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
            local_b8._8_4_ = SUB84(dVar10,0);
            local_b8._0_8_ = local_e8.Z - ___xmm_3fd51eb8600000003fd51eb860000000 * dVar9;
            local_b8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            GetLoopKnotDelta(this);
            (**(code **)(this->_padding_ + 0x38))(this,0);
            local_f8 = &local_res8;
            local_f0 = this;
            pTVar16 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                                ((TBSpline<UE::Math::TQuat<double>,3> *)this,
                                 (int)this->_padding_ + -1);
            local_88[0].X = pTVar16->X;
            local_88[0].Y = pTVar16->Y;
            local_88[0].Z = pTVar16->Z;
            local_88[0].W = pTVar16->W;
            iVar14 = (int)this->_padding_;
            AddBezierSegmentInternal
                      (this,(int)((iVar14 >> 0x1f & 3U) + iVar14) >> 2,local_88,
                       (TQuat<double> *)local_a8,(TQuat<double> *)local_c8,&local_e8,Centripetal,
                       true);
            ScopeExitSupport::
            TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment'::__l2::<lambda_1>_>
            ::
            ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment_::__l2::<lambda_1>_>
                      (&local_f8);
          }
        }
      }
    }
    else if (0 < iVar14) {
      RemoveSegment(this,iVar14 + -1);
    }
    *(bool *)((longlong)&this->_padding_ + 1) = param_1;
  }
  return;
}

// SetControlPoints @ 147a8bea0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::SetControlPoints
          (TPolyBezierSpline<float> *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          EParameterizationPolicy param_2)

{
  float fVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res20 [2];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  int local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 *local_90;
  TPolyBezierSpline<float> *local_88;
  undefined1 *local_80;
  TPolyBezierSpline<float> *local_78;
  
  local_b4 = param_1->ArrayNum;
  if (local_b4 < 4) {
    if (2 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::SetControlPoints(TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      return false;
    }
  }
  else {
    (**(code **)(this->_padding_ + 8))();
    fVar5 = __real_38d1b717;
    cVar2 = *(char *)((longlong)&this->_padding_ + 1);
    local_b8 = (int)(local_b4 + (local_b4 >> 0x1f & 3U)) >> 2;
    if (0 < local_b8) {
      iVar12 = 0;
      lVar14 = 8;
      do {
        uVar13 = iVar12 * 4;
        if (local_b4 <= (int)(uVar13 + 3)) break;
        uVar10 = ~uVar13 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar13 < param_1->ArrayNum) {
          uVar11 = uVar10;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        local_bc = *(float *)((param_1->AllocatorInstance).Data + lVar14 + -8);
        uVar11 = 0;
        if ((int)(uVar13 + 1) < param_1->ArrayNum) {
          uVar11 = uVar10;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        local_c0 = *(float *)((param_1->AllocatorInstance).Data + lVar14 + -4);
        uVar11 = 0;
        if ((int)(uVar13 + 2) < param_1->ArrayNum) {
          uVar11 = uVar10;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        local_c4 = *(float *)((param_1->AllocatorInstance).Data + lVar14);
        uVar11 = 0;
        if ((int)(uVar13 + 3) < param_1->ArrayNum) {
          uVar11 = uVar10;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        local_c8 = *(float *)((param_1->AllocatorInstance).Data + lVar14 + 4);
        if (iVar12 == 0) {
          iVar9 = 0;
LAB_147a8c1a4:
          AddBezierSegmentInternal(this,iVar9,&local_bc,&local_c0,&local_c4,&local_c8,param_2,true);
        }
        else {
          pfVar8 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,(int)this->_padding_ + -1);
          iVar9 = local_b8;
          if (fVar5 <= (local_bc - *pfVar8) * (local_bc - *pfVar8)) goto LAB_147a8c1a4;
          GetLoopKnotDelta(this);
          (**(code **)(this->_padding_ + 0x38))(this,0);
          local_90 = local_a0;
          local_88 = this;
          pfVar8 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,(int)this->_padding_ + -1);
          local_b0 = *pfVar8;
          iVar9 = (int)this->_padding_;
          AddBezierSegmentInternal
                    (this,(int)((iVar9 >> 0x1f & 3U) + iVar9) >> 2,&local_b0,&local_c0,&local_c4,
                     &local_c8,param_2,true);
          ScopeExitSupport::
          TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment'::__l2::<lambda_1>_>
          ::
          ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment_::__l2::<lambda_1>_>
                    (&local_90);
        }
        iVar12 = iVar12 + 1;
        lVar14 = lVar14 + 0x10;
      } while (iVar12 < local_b8);
      if (cVar2 == '\0') {
        uVar7 = 0;
      }
      else {
        if (((int)this->_padding_ < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        local_res20[0] = *(float *)this->_padding_;
        pfVar8 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,(int)this->_padding_ + -1);
        fVar1 = *pfVar8;
        if (fVar5 < (fVar1 - local_res20[0]) * (fVar1 - local_res20[0])) {
          iVar12 = local_b8 * 4;
          uVar11 = iVar12 - 2;
          uVar13 = 0;
          if ((int)uVar11 < param_1->ArrayNum) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar10 = iVar12 - 3;
          uVar13 = 0;
          if ((int)uVar10 < param_1->ArrayNum) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          fVar18 = *(float *)(pFVar3 + (longlong)(int)uVar11 * 4) -
                   *(float *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
          if ((param_1->ArrayNum < 2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          if ((param_1->ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          fVar16 = *(float *)(pFVar3 + 4) - *(float *)(param_1->AllocatorInstance).Data;
          if (fVar5 <= (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            fVar17 = __real_bf800000;
            if (0.0 < fVar18) {
              fVar17 = __real_3f800000;
            }
          }
          else {
            fVar17 = 0.0;
          }
          fVar15 = (float)((uint)(fVar1 - local_res20[0]) & __xmm_7fffffff7fffffff7fffffff7fffffff)
                   * __real_3ea8f5c3;
          fVar18 = 0.0;
          if ((fVar5 <= (float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
             (fVar18 = __real_bf800000, 0.0 < fVar16)) {
            fVar18 = __real_3f800000;
          }
          local_a8 = fVar15 * fVar17 + fVar1;
          local_ac = local_res20[0] - fVar18 * fVar15;
          GetLoopKnotDelta(this);
          (**(code **)(this->_padding_ + 0x38))(this,0);
          local_80 = local_98;
          local_78 = this;
          pfVar8 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this,(int)this->_padding_ + -1);
          local_a4 = *pfVar8;
          iVar12 = (int)this->_padding_;
          AddBezierSegmentInternal
                    (this,(int)((iVar12 >> 0x1f & 3U) + iVar12) >> 2,&local_a4,&local_a8,&local_ac,
                     local_res20,param_2,true);
          ScopeExitSupport::
          TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment'::__l2::<lambda_1>_>
          ::
          ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment_::__l2::<lambda_1>_>
                    (&local_80);
        }
        uVar7 = 1;
      }
      *(undefined1 *)((longlong)&this->_padding_ + 1) = uVar7;
      (**(code **)(this->_padding_ + 0xb8))(this,param_2);
      return true;
    }
    if (2 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::SetControlPoints(TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
  }
  return false;
}

// SetControlPoints @ 147a8c530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::SetControlPoints
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_1,
          EParameterizationPolicy param_2)

{
  char cVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  TQuat<double> *pTVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  double dVar25;
  undefined1 local_220 [8];
  undefined1 local_218 [16];
  TQuat<double> local_208;
  undefined1 *local_1e8;
  TPolyBezierSpline<UE::Math::TQuat<double>_> *local_1e0;
  undefined1 *local_1d8;
  TPolyBezierSpline<UE::Math::TQuat<double>_> *local_1d0;
  TQuat<double> local_1c8;
  TQuat<double> local_1a8;
  TQuat<double> local_188;
  TQuat<double> local_168;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  TQuat<double> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  TQuat<double> local_c8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 < 4) {
    if (2 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::SetControlPoints(TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_const&___ptr64,UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      return false;
    }
  }
  else {
    (**(code **)(this->_padding_ + 8))();
    dVar9 = __real_3f1a36e2e0000000;
    cVar1 = *(char *)((longlong)&this->_padding_ + 1);
    iVar16 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
    if (0 < iVar16) {
      lVar20 = 0x40;
      iVar22 = 0;
      do {
        uVar24 = iVar22 * 4;
        if (iVar2 <= (int)(uVar24 + 3)) break;
        uVar23 = ~uVar24 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar24 < param_1->ArrayNum) {
          uVar19 = uVar23;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar21 = pFVar3 + lVar20 + -0x40;
        local_1c8.X = *(double *)pFVar21;
        local_1c8.Y = *(double *)(pFVar21 + 8);
        pFVar3 = pFVar3 + lVar20 + -0x30;
        local_1c8.Z = *(double *)pFVar3;
        local_1c8.W = *(double *)(pFVar3 + 8);
        uVar19 = 0;
        if ((int)(uVar24 + 1) < param_1->ArrayNum) {
          uVar19 = uVar23;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar21 = pFVar3 + lVar20 + -0x20;
        local_168.X = *(double *)pFVar21;
        local_168.Y = *(double *)(pFVar21 + 8);
        pFVar3 = pFVar3 + lVar20 + -0x10;
        local_168.Z = *(double *)pFVar3;
        local_168.W = *(double *)(pFVar3 + 8);
        uVar19 = 0;
        if ((int)(uVar24 + 2) < param_1->ArrayNum) {
          uVar19 = uVar23;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar21 = pFVar3 + lVar20;
        local_188.X = *(double *)pFVar21;
        local_188.Y = *(double *)(pFVar21 + 8);
        pFVar3 = pFVar3 + lVar20 + 0x10;
        local_188.Z = *(double *)pFVar3;
        local_188.W = *(double *)(pFVar3 + 8);
        uVar19 = 0;
        if ((int)(uVar24 + 3) < param_1->ArrayNum) {
          uVar19 = uVar23;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar21 = pFVar3 + lVar20 + 0x20;
        local_1a8.X = *(double *)pFVar21;
        local_1a8.Y = *(double *)(pFVar21 + 8);
        pFVar3 = pFVar3 + lVar20 + 0x30;
        local_1a8.Z = *(double *)pFVar3;
        local_1a8.W = *(double *)(pFVar3 + 8);
        if (iVar22 == 0) {
          iVar18 = 0;
LAB_147a8c8b8:
          AddBezierSegmentInternal
                    (this,iVar18,&local_1c8,&local_168,&local_188,&local_1a8,param_2,true);
        }
        else {
          pTVar17 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                              ((TBSpline<UE::Math::TQuat<double>,3> *)this,(int)this->_padding_ + -1
                              );
          local_a8 = pTVar17->X;
          dStack_a0 = pTVar17->Y;
          local_98 = pTVar17->Z;
          dStack_90 = pTVar17->W;
          iVar18 = iVar16;
          if (dVar9 <= (local_1c8.Y - dStack_a0) * (local_1c8.Y - dStack_a0) +
                       (local_1c8.X - local_a8) * (local_1c8.X - local_a8) +
                       (local_1c8.W - dStack_90) * (local_1c8.W - dStack_90) +
                       (local_1c8.Z - local_98) * (local_1c8.Z - local_98)) goto LAB_147a8c8b8;
          GetLoopKnotDelta(this);
          (**(code **)(this->_padding_ + 0x38))(this,0);
          local_1e8 = local_220;
          local_1e0 = this;
          pTVar17 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                              ((TBSpline<UE::Math::TQuat<double>,3> *)this,(int)this->_padding_ + -1
                              );
          local_128.X = pTVar17->X;
          local_128.Y = pTVar17->Y;
          local_128.Z = pTVar17->Z;
          local_128.W = pTVar17->W;
          iVar18 = (int)this->_padding_;
          AddBezierSegmentInternal
                    (this,(int)((iVar18 >> 0x1f & 3U) + iVar18) >> 2,&local_128,&local_168,
                     &local_188,&local_1a8,param_2,true);
          ScopeExitSupport::
          TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment'::__l2::<lambda_1>_>
          ::
          ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment_::__l2::<lambda_1>_>
                    (&local_1e8);
        }
        iVar22 = iVar22 + 1;
        lVar20 = lVar20 + 0x80;
      } while (iVar22 < iVar16);
      if (cVar1 == '\0') {
        uVar15 = 0;
      }
      else {
        pTVar17 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,0);
        local_208.X = pTVar17->X;
        local_208.Y = pTVar17->Y;
        local_208.Z = pTVar17->Z;
        local_208.W = pTVar17->W;
        pTVar17 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                            ((TBSpline<UE::Math::TQuat<double>,3> *)this,(int)this->_padding_ + -1);
        local_138 = pTVar17->Z;
        dStack_130 = pTVar17->W;
        local_148 = pTVar17->X;
        dStack_140 = pTVar17->Y;
        if (dVar9 < (dStack_140 - local_208.Y) * (dStack_140 - local_208.Y) +
                    (local_148 - local_208.X) * (local_148 - local_208.X) +
                    (local_138 - local_208.Z) * (local_138 - local_208.Z) +
                    (dStack_130 - local_208.W) * (dStack_130 - local_208.W)) {
          uVar19 = iVar16 * 4 - 2;
          uVar24 = 0;
          if ((int)uVar19 < param_1->ArrayNum) {
            uVar24 = ~uVar19 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          uVar23 = iVar16 * 4 - 3;
          pFVar21 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x20;
          uVar24 = 0;
          if ((int)uVar23 < param_1->ArrayNum) {
            uVar24 = ~uVar23 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          dVar9 = *(double *)pFVar21;
          dVar5 = *(double *)(pFVar21 + 8);
          dVar10 = *(double *)(pFVar21 + 0x10);
          dVar6 = *(double *)(pFVar21 + 0x18);
          pFVar21 = pFVar3 + (longlong)(int)uVar23 * 0x20;
          dVar11 = *(double *)pFVar21;
          dVar7 = *(double *)(pFVar21 + 8);
          pFVar3 = pFVar3 + (longlong)(int)uVar23 * 0x20 + 0x10;
          dVar12 = *(double *)pFVar3;
          dVar13 = *(double *)(pFVar3 + 8);
          if ((param_1->ArrayNum < 2) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          pFVar21 = (param_1->AllocatorInstance).Data;
          if ((param_1->ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          dVar25 = (double)((float)SQRT((local_148 - local_208.X) * (local_148 - local_208.X) +
                                        (dStack_140 - local_208.Y) * (dStack_140 - local_208.Y) +
                                        (local_138 - local_208.Z) * (local_138 - local_208.Z) +
                                        (dStack_130 - local_208.W) * (dStack_130 - local_208.W)) *
                           __real_3ea8f5c3);
          dVar8 = dStack_140 + dVar25 * (dVar5 - dVar7);
          dVar7 = dStack_130 + dVar25 * (dVar6 - dVar13);
          dVar6 = local_208.Y - (*(double *)(pFVar21 + 0x28) - *(double *)(pFVar3 + 8)) * dVar25;
          dVar5 = local_208.W - (*(double *)(pFVar21 + 0x38) - *(double *)(pFVar3 + 0x18)) * dVar25;
          local_e8._8_4_ = SUB84(dVar8,0);
          local_e8._0_8_ = local_148 + dVar25 * (dVar9 - dVar11);
          local_e8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          local_d8._8_4_ = SUB84(dVar7,0);
          local_d8._0_8_ = local_138 + dVar25 * (dVar10 - dVar12);
          local_d8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          local_108._8_4_ = SUB84(dVar6,0);
          local_108._0_8_ = local_208.X - (*(double *)(pFVar21 + 0x20) - *(double *)pFVar3) * dVar25
          ;
          local_108._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          local_f8._8_4_ = SUB84(dVar5,0);
          local_f8._0_8_ =
               local_208.Z - (*(double *)(pFVar21 + 0x30) - *(double *)(pFVar3 + 0x10)) * dVar25;
          local_f8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          GetLoopKnotDelta(this);
          (**(code **)(this->_padding_ + 0x38))(this,0);
          local_1d8 = local_218;
          local_1d0 = this;
          pTVar17 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                              ((TBSpline<UE::Math::TQuat<double>,3> *)this,(int)this->_padding_ + -1
                              );
          local_c8.X = pTVar17->X;
          local_c8.Y = pTVar17->Y;
          local_c8.Z = pTVar17->Z;
          local_c8.W = pTVar17->W;
          iVar2 = (int)this->_padding_;
          AddBezierSegmentInternal
                    (this,(int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2,&local_c8,
                     (TQuat<double> *)local_e8,(TQuat<double> *)local_108,&local_208,param_2,true);
          ScopeExitSupport::
          TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment'::__l2::<lambda_1>_>
          ::
          ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment_::__l2::<lambda_1>_>
                    (&local_1d8);
        }
        uVar15 = 1;
      }
      *(undefined1 *)((longlong)&this->_padding_ + 1) = uVar15;
      (**(code **)(this->_padding_ + 0xb8))(this,param_2);
      return true;
    }
    if (2 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::SetControlPoints(TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_const&___ptr64,UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
  }
  return false;
}

// SetControlPoints @ 147a8ccc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::SetControlPoints
          (TPolyBezierSpline<UE::Math::TVector<double>_> *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          EParameterizationPolicy param_2)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  TVector<double> *pTVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  TVector<double>_u_0 local_230;
  TVector<double>_u_0 local_218;
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  undefined1 *local_190;
  TPolyBezierSpline<UE::Math::TVector<double>_> *local_188;
  undefined1 *local_180;
  TPolyBezierSpline<UE::Math::TVector<double>_> *local_178;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158 [2];
  undefined1 local_128 [16];
  TVector<double>_u_0 local_118 [9];
  
  iVar4 = param_1->ArrayNum;
  if (iVar4 < 4) {
    if (2 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::SetControlPoints(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64,UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      return false;
    }
  }
  else {
    (**(code **)(this->_padding_ + 8))();
    dVar7 = __real_3f1a36e2e0000000;
    cVar3 = *(char *)((longlong)&this->_padding_ + 1);
    iVar19 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
    if (0 < iVar19) {
      lVar24 = 0x30;
      iVar26 = 0;
      do {
        uVar27 = iVar26 * 4;
        if (iVar4 <= (int)(uVar27 + 3)) break;
        uVar25 = ~uVar27 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar27 < param_1->ArrayNum) {
          uVar23 = uVar25;
        }
        if ((uVar23 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar18 = (*pcVar6)();
          return (bool)uVar18;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        pFVar1 = pFVar5 + lVar24 + -0x30;
        local_218._s_0.X = (double)*(undefined8 *)pFVar1;
        local_218._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
        local_218._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar24 + -0x20);
        uVar23 = 0;
        if ((int)(uVar27 + 1) < param_1->ArrayNum) {
          uVar23 = uVar25;
        }
        if ((uVar23 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar18 = (*pcVar6)();
          return (bool)uVar18;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        pFVar1 = pFVar5 + lVar24 + -0x18;
        local_1c0._s_0.X = (double)*(undefined8 *)pFVar1;
        local_1c0._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
        local_1c0._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar24 + -8);
        uVar23 = 0;
        if ((int)(uVar27 + 2) < param_1->ArrayNum) {
          uVar23 = uVar25;
        }
        if ((uVar23 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar18 = (*pcVar6)();
          return (bool)uVar18;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        pFVar1 = pFVar5 + lVar24;
        local_1d8._s_0.X = (double)*(undefined8 *)pFVar1;
        local_1d8._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
        local_1d8._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar24 + 0x10);
        uVar23 = 0;
        if ((int)(uVar27 + 3) < param_1->ArrayNum) {
          uVar23 = uVar25;
        }
        if ((uVar23 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar18 = (*pcVar6)();
          return (bool)uVar18;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        pFVar1 = pFVar5 + lVar24 + 0x18;
        local_1f0._s_0.X = (double)*(undefined8 *)pFVar1;
        local_1f0._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
        local_1f0._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar24 + 0x28);
        if (iVar26 == 0) {
          iVar22 = 0;
LAB_147a8d043:
          AddBezierSegmentInternal
                    (this,iVar22,(TVector<double> *)&local_218._s_0,
                     (TVector<double> *)&local_1c0._s_0,(TVector<double> *)&local_1d8._s_0,
                     (TVector<double> *)&local_1f0._s_0,param_2,true);
        }
        else {
          pTVar20 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                              ((TBSpline<UE::Math::TVector<double>,3> *)this,
                               (int)this->_padding_ + -1);
          local_158[0]._16_8_ = (pTVar20->field0_0x0)._s_0.Z;
          dVar31 = local_218._s_0.X - (pTVar20->field0_0x0)._s_0.X;
          dVar30 = local_218._s_0.Y - (pTVar20->field0_0x0)._s_0.Y;
          iVar22 = iVar19;
          if (dVar7 <= dVar30 * dVar30 + dVar31 * dVar31 +
                       (local_218._s_0.Z - (double)local_158[0]._16_8_) *
                       (local_218._s_0.Z - (double)local_158[0]._16_8_)) goto LAB_147a8d043;
          GetLoopKnotDelta(this);
          (**(code **)(this->_padding_ + 0x38))(this,0);
          local_190 = local_200;
          local_188 = this;
          pTVar20 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                              ((TBSpline<UE::Math::TVector<double>,3> *)this,
                               (int)this->_padding_ + -1);
          local_158[0]._0_8_ = (pTVar20->field0_0x0)._s_0.X;
          local_158[0]._8_8_ = (pTVar20->field0_0x0)._s_0.Y;
          local_158[0]._16_8_ = (pTVar20->field0_0x0)._s_0.Z;
          iVar22 = (int)this->_padding_;
          AddBezierSegmentInternal
                    (this,(int)((iVar22 >> 0x1f & 3U) + iVar22) >> 2,
                     (TVector<double> *)&local_158[0]._s_0,(TVector<double> *)&local_1c0._s_0,
                     (TVector<double> *)&local_1d8._s_0,(TVector<double> *)&local_1f0._s_0,param_2,
                     true);
          ScopeExitSupport::
          TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendBezierSegment'::__l2::<lambda_1>_>
          ::
          ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendBezierSegment_::__l2::<lambda_1>_>
                    (&local_190);
        }
        iVar26 = iVar26 + 1;
        lVar24 = lVar24 + 0x60;
      } while (iVar26 < iVar19);
      if (cVar3 == '\0') {
        uVar18 = 0;
      }
      else {
        pTVar20 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)this,0);
        local_230._s_0.X = (pTVar20->field0_0x0)._s_0.X;
        local_230._s_0.Y = (pTVar20->field0_0x0)._s_0.Y;
        local_230._s_0.Z = (pTVar20->field0_0x0)._s_0.Z;
        pTVar20 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)this,(int)this->_padding_ + -1
                            );
        auVar2 = *(undefined1 (*) [16])&pTVar20->field0_0x0;
        dVar31 = (pTVar20->field0_0x0)._s_0.Z;
        dVar28 = auVar2._0_8_;
        dVar30 = auVar2._8_8_;
        local_128._8_4_ = auVar2._8_4_;
        local_128._0_8_ = dVar30;
        local_128._12_4_ = auVar2._12_4_;
        local_1a8._s_0.Z = dVar31;
        if (dVar7 < (dVar30 - local_230._s_0.Y) * (dVar30 - local_230._s_0.Y) +
                    (dVar28 - local_230._s_0.X) * (dVar28 - local_230._s_0.X) +
                    (dVar31 - local_230._s_0.Z) * (dVar31 - local_230._s_0.Z)) {
          uVar23 = iVar19 * 4 - 2;
          uVar27 = 0;
          if ((int)uVar23 < param_1->ArrayNum) {
            uVar27 = ~uVar23 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
          pFVar1 = (param_1->AllocatorInstance).Data;
          lVar24 = (longlong)(int)uVar23;
          uVar23 = iVar19 * 4 - 3;
          uVar27 = 0;
          if ((int)uVar23 < param_1->ArrayNum) {
            uVar27 = ~uVar23 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
          lVar21 = (longlong)(int)uVar23;
          pFVar5 = (param_1->AllocatorInstance).Data;
          dVar9 = *(double *)(pFVar1 + lVar24 * 0x18) - *(double *)(pFVar5 + lVar21 * 0x18);
          dVar7 = *(double *)(pFVar1 + lVar24 * 0x18 + 8) - *(double *)(pFVar5 + lVar21 * 0x18 + 8);
          dVar8 = *(double *)(pFVar1 + lVar24 * 0x18 + 0x10) -
                  *(double *)(pFVar5 + lVar21 * 0x18 + 0x10);
          if ((param_1->ArrayNum < 2) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
          pFVar1 = (param_1->AllocatorInstance).Data;
          if ((param_1->ArrayNum < 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
          pFVar5 = (param_1->AllocatorInstance).Data;
          dVar11 = *(double *)(pFVar1 + 0x18) - *(double *)pFVar5;
          dVar32 = *(double *)(pFVar1 + 0x20) - *(double *)(pFVar5 + 8);
          dVar10 = *(double *)(pFVar1 + 0x28) - *(double *)(pFVar5 + 0x10);
          dVar29 = dVar9 * dVar9 + dVar7 * dVar7 + dVar8 * dVar8;
          uVar12 = dVar9;
          uVar13 = dVar7;
          uVar14 = dVar8;
          if ((dVar29 != __real_3ff0000000000000) &&
             (uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
             uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
             uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             __real_3e45798ee0000000 <= dVar29)) {
            dVar29 = __real_3ff0000000000000 / SQRT(dVar29);
            uVar12 = dVar9 * dVar29;
            uVar13 = dVar7 * dVar29;
            uVar14 = dVar8 * dVar29;
          }
          dVar7 = (double)((float)SQRT((dVar30 - local_230._s_0.Y) * (dVar30 - local_230._s_0.Y) +
                                       (dVar28 - local_230._s_0.X) * (dVar28 - local_230._s_0.X) +
                                       (dVar31 - local_230._s_0.Z) * (dVar31 - local_230._s_0.Z)) *
                          __real_3ea8f5c3);
          dVar30 = dVar11 * dVar11 + dVar32 * dVar32 + dVar10 * dVar10;
          uVar33 = dVar32;
          uVar15 = dVar11;
          uVar16 = dVar10;
          if ((dVar30 != __real_3ff0000000000000) &&
             (uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
             uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
             uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             __real_3e45798ee0000000 <= dVar30)) {
            dVar30 = __real_3ff0000000000000 / SQRT(dVar30);
            uVar33 = dVar32 * dVar30;
            uVar15 = dVar11 * dVar30;
            uVar16 = dVar10 * dVar30;
          }
          local_1a8._s_0.X = (double)uVar12 * dVar7 + dVar28;
          local_1a8._s_0.Y = (double)uVar13 * dVar7 + (double)local_128._0_8_;
          local_1a8._s_0.Z = (double)uVar14 * dVar7 + dVar31;
          local_170._s_0.X = local_230._s_0.X - dVar7 * (double)uVar15;
          local_170._s_0.Y = local_230._s_0.Y - dVar7 * (double)uVar33;
          local_170._s_0.Z = local_230._s_0.Z - dVar7 * (double)uVar16;
          GetLoopKnotDelta(this);
          (**(code **)(this->_padding_ + 0x38))(this,0);
          local_180 = local_1f8;
          local_178 = this;
          pTVar20 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                              ((TBSpline<UE::Math::TVector<double>,3> *)this,
                               (int)this->_padding_ + -1);
          local_118[0]._0_8_ = (pTVar20->field0_0x0)._s_0.X;
          local_118[0]._8_8_ = (pTVar20->field0_0x0)._s_0.Y;
          local_118[0]._16_8_ = (pTVar20->field0_0x0)._s_0.Z;
          iVar4 = (int)this->_padding_;
          AddBezierSegmentInternal
                    (this,(int)((iVar4 >> 0x1f & 3U) + iVar4) >> 2,
                     (TVector<double> *)&local_118[0]._s_0,(TVector<double> *)&local_1a8._s_0,
                     (TVector<double> *)&local_170._s_0,(TVector<double> *)&local_230._s_0,param_2,
                     true);
          ScopeExitSupport::
          TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendBezierSegment'::__l2::<lambda_1>_>
          ::
          ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendBezierSegment_::__l2::<lambda_1>_>
                    (&local_180);
        }
        uVar18 = 1;
      }
      *(undefined1 *)((longlong)&this->_padding_ + 1) = uVar18;
      (**(code **)(this->_padding_ + 0xb8))(this,param_2);
      return true;
    }
    if (2 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::SetControlPoints(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64,UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
  }
  return false;
}

// SetParameter @ 147a91280

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::SetParameter
          (TPolyBezierSpline<float> *this,int param_1,float param_2)

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
                (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::SetParameter(int,float)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
     5 < (byte)Spline::LogSpline._0_1_)) {
    Logging::Private::BasicLog<6>
              (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::SetParameter(int,float)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  TBSpline<float,3>::Dump((TBSpline<float,3> *)this);
  local_res20.bSearchRight = true;
  local_res20.bSearchLeft = true;
  local_res20.DesiredParameter = param_2;
  fVar15 = TBSpline<float,3>::GetNearestAvailableKnotValue((TBSpline<float,3> *)this,&local_res20);
  if ((float)((uint)(param_2 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)(param_2 - fVar15) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    return param_1;
  }
  iVar14 = -1;
  if (uVar13 == 0) {
    TBSpline<float,3>::SetKnot((TBSpline<float,3> *)this,uVar8,param_2);
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
          if (*pfVar6 <= *(float *)(lVar7 + 4)) goto LAB_147a914c1;
          FlipSegment(this,uVar13);
          uVar12 = uVar13;
          uVar10 = uVar13 - 1;
        } while (-1 < (int)(uVar13 - 1));
        iVar14 = uVar13 * 4;
        goto LAB_147a9158c;
      }
    }
LAB_147a914c1:
    iVar14 = uVar12 * 4;
  }
  else if (uVar13 == 3) {
    TBSpline<float,3>::SetKnot((TBSpline<float,3> *)this,uVar8,param_2);
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
LAB_147a9158c:
  if ((5 < (byte)Spline::LogSpline._0_1_) &&
     (Logging::Private::BasicLog<6>
                (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::SetParameter(int,float)___ptr64'
                  ::__l75::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
     5 < (byte)Spline::LogSpline._0_1_)) {
    Logging::Private::BasicLog<6>
              (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<float>::SetParameter(int,float)___ptr64'
                ::__l92::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  TBSpline<float,3>::Dump((TBSpline<float,3> *)this);
  return iVar14;
}

// SetParameter @ 147a91640

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::SetParameter
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,int param_1,float param_2)

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
                (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::SetParameter(int,float)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
     5 < (byte)Spline::LogSpline._0_1_)) {
    Logging::Private::BasicLog<6>
              (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::SetParameter(int,float)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  TBSpline<UE::Math::TQuat<double>,3>::Dump((TBSpline<UE::Math::TQuat<double>,3> *)this);
  local_res20.bSearchRight = true;
  local_res20.bSearchLeft = true;
  local_res20.DesiredParameter = param_2;
  fVar15 = TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue
                     ((TBSpline<UE::Math::TQuat<double>,3> *)this,&local_res20);
  if ((float)((uint)(param_2 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)(param_2 - fVar15) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    return param_1;
  }
  iVar14 = -1;
  if (uVar13 == 0) {
    TBSpline<UE::Math::TQuat<double>,3>::SetKnot
              ((TBSpline<UE::Math::TQuat<double>,3> *)this,uVar8,param_2);
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
          if (*pfVar6 <= *(float *)(lVar7 + 4)) goto LAB_147a91881;
          FlipSegment(this,uVar13);
          uVar12 = uVar13;
          uVar10 = uVar13 - 1;
        } while (-1 < (int)(uVar13 - 1));
        iVar14 = uVar13 * 4;
        goto LAB_147a9194c;
      }
    }
LAB_147a91881:
    iVar14 = uVar12 * 4;
  }
  else if (uVar13 == 3) {
    TBSpline<UE::Math::TQuat<double>,3>::SetKnot
              ((TBSpline<UE::Math::TQuat<double>,3> *)this,uVar8,param_2);
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
LAB_147a9194c:
  if ((5 < (byte)Spline::LogSpline._0_1_) &&
     (Logging::Private::BasicLog<6>
                (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::SetParameter(int,float)___ptr64'
                  ::__l75::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
     5 < (byte)Spline::LogSpline._0_1_)) {
    Logging::Private::BasicLog<6>
              (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::SetParameter(int,float)___ptr64'
                ::__l92::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  TBSpline<UE::Math::TQuat<double>,3>::Dump((TBSpline<UE::Math::TQuat<double>,3> *)this);
  return iVar14;
}

