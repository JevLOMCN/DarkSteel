// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 45

// TBSpline<UE::Math::TVector<double>,3> @ 143566810

TBSpline<UE::Math::TVector<double>,3> * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::TBSpline<UE::Math::TVector<double>,3>
          (TBSpline<UE::Math::TVector<double>,3> *this)

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
  
  TSplineInterface<UE::Math::TVector<double>_>::TSplineInterface<UE::Math::TVector<double>_>
            ((TSplineInterface<UE::Math::TVector<double>_> *)this);
  this->_padding_ =
       (longlong)
       &
       ___7__TSelfRegisteringSpline_V__TBSpline_U__TVector_N_Math_UE___02_Spline_Geometry_UE__U__TVector_N_Math_4__Spline_Geometry_UE__6B_
  ;
  if (`protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_>(void)___ptr64'
      ::__l2::bRegistered == false) {
    `protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_>(void)___ptr64'
    ::__l2::bRegistered = true;
    puVar2 = GetStaticTypeId();
    uVar1 = *puVar2;
    ::FString::FString(&local_48,L"BSpline3");
    _Src = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.AllocatorInstance;
    lVar3 = (longlong)TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
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
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TBSpline_U__TVector_N_Math_UE___02_Spline_Geometry_UE__U__TDefaultDelete_V__TBSpline_U__TVector_N_Math_UE___02_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `UE::Geometry::Spline::
               TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_>
               ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
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
  this->bIsClosedLoop = false;
  this->bClampEnds = true;
  this->_padding_ =
       (longlong)
       &_vftable__for__UE__Geometry__Spline__TSplineInterface<UE::Math::TVector<double>_>__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_>__
  ;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->PairKnots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PairKnots).ArrayNum = 0;
  (this->PairKnots).ArrayMax = 0;
  (this->FlatKnots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlatKnots).ArrayNum = 0;
  (this->FlatKnots).ArrayMax = 0;
  return this;
}

// ~TBSpline<UE::Math::TVector<double>,3> @ 1435684a0

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::~TBSpline<UE::Math::TVector<double>,3>
          (TBSpline<UE::Math::TVector<double>,3> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FlatKnots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PairKnots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator== @ 1435698d0

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::operator==
          (TBSpline<UE::Math::TVector<double>,3> *this,
          TBSpline<UE::Math::TVector<double>,3> *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 == (param_1->Values).ArrayNum) {
    bVar2 = CompareItems<UE::Math::TVector<double>,int>
                      ((TVector<double> *)(this->Values).AllocatorInstance.Data,
                       (TVector<double> *)(param_1->Values).AllocatorInstance.Data,iVar1);
    if ((bVar2) && (iVar1 = (this->PairKnots).ArrayNum, iVar1 == (param_1->PairKnots).ArrayNum)) {
      bVar2 = CompareItems<UE::Geometry::Spline::FKnot,int>
                        ((FKnot *)(this->PairKnots).AllocatorInstance.Data,
                         (FKnot *)(param_1->PairKnots).AllocatorInstance.Data,iVar1);
      if ((bVar2) &&
         ((this->bIsClosedLoop == param_1->bIsClosedLoop &&
          (this->bClampEnds == param_1->bClampEnds)))) {
        return true;
      }
    }
  }
  return false;
}

// AddValue @ 143574dd0

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::AddValue
          (TBSpline<UE::Math::TVector<double>,3> *this,TVector<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  
  pFVar2 = (this->Values).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Values).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  iVar7 = (this->Values).ArrayNum;
  piVar1 = &(this->Values).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Values).AllocatorInstance,piVar1);
  }
  (this->Values).ArrayNum = iVar7 + 1;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  pFVar3 = (this->Values).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar7 * 0x18;
  *(double *)pFVar2 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + 8) = dVar5;
  *(double *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  return iVar7;
}

// Clear @ 14357a880

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Clear
          (TBSpline<UE::Math::TVector<double>,3> *this)

{
  int *piVar1;
  
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PairKnots).ArrayMax;
  (this->PairKnots).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PairKnots).AllocatorInstance,0,piVar1);
  }
  return;
}

// Clone @ 14357aad0

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Clone
          (TBSpline<UE::Math::TVector<double>,3> *this)

{
  TBSpline<UE::Math::TVector<double>,3> *this_00;
  ISplineInterface IVar1;
  ISplineInterface *in_RDX;
  
  this_00 = ::operator_new(0x50);
  if (this_00 == (TBSpline<UE::Math::TVector<double>,3> *)0x0) {
    IVar1 = (ISplineInterface)0x0;
  }
  else {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    (this_00->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Values).ArrayNum = 0;
    (this_00->Values).ArrayMax = 0;
    (this_00->PairKnots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->PairKnots).ArrayNum = 0;
    (this_00->PairKnots).ArrayMax = 0;
    (this_00->FlatKnots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->FlatKnots).ArrayNum = 0;
    (this_00->FlatKnots).ArrayMax = 0;
    this_00->bFlatKnotsCacheDirty = false;
    this_00->bIsClosedLoop = false;
    this_00->bClampEnds = false;
    *(undefined5 *)&this_00->field_0x4b = 0;
    IVar1 = (ISplineInterface)TBSpline<UE::Math::TVector<double>,3>(this_00);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             ((longlong)IVar1 + 0x18),&this->Values);
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)
             ((longlong)IVar1 + 0x28),&this->PairKnots);
  *(bool *)((longlong)IVar1 + 0x49) = this->bIsClosedLoop;
  *(bool *)((longlong)IVar1 + 0x4a) = this->bClampEnds;
  *(int *)((longlong)IVar1 + 8) = (int)this->_padding_;
  *(undefined4 *)((longlong)IVar1 + 0xc) = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *in_RDX = IVar1;
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )in_RDX;
}

// Dump @ 14358d320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Dump
          (TBSpline<UE::Math::TVector<double>,3> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString local_18;
  
  if (5 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Dump(void)const___ptr64'
                ::__l10::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  uVar4 = 0;
  if (0 < (this->Values).ArrayNum) {
    do {
      if (5 < (byte)Spline::LogSpline._0_1_) {
        uVar3 = 0;
        if ((int)uVar4 < (this->Values).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
        Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Dump(void)const___ptr64'
                    ::__l29::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->Values).ArrayNum);
  }
  if (5 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Dump(void)const___ptr64'
                ::__l46::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  PrintKnotVector(this);
  return;
}

// EvaluateImpl @ 14358f9a0

TVector<double> * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::EvaluateImpl
          (TBSpline<UE::Math::TVector<double>,3> *this,TVector<double> *__return_storage_ptr__,
          float param_1)

{
  int iVar1;
  double dVar2;
  TVector<double> *pTVar3;
  longlong *local_48;
  undefined4 uStack_40;
  longlong local_38 [6];
  
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pTVar3 = GetValue(this,0);
      dVar2 = (pTVar3->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar3->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
      return __return_storage_ptr__;
    }
    (**(code **)(this->_padding_ + 200))(this,local_38);
    if (local_38[0] != 0) {
      local_48 = local_38;
      uStack_40 = 4;
      (**(code **)(this->_padding_ + 0xd0))(this,__return_storage_ptr__,&local_48,param_1);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// FindIndexForParameter @ 143591290

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::FindIndexForParameter
          (TBSpline<UE::Math::TVector<double>,3> *this,float param_1,float *param_2)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  UpdateFlatKnotsCache(this);
  iVar5 = (this->FlatKnots).ArrayNum;
  if (iVar5 != 0) {
    if ((iVar5 < 4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    iVar5 = (this->FlatKnots).ArrayNum;
    uVar7 = iVar5 - 4;
    fVar10 = *(float *)((this->FlatKnots).AllocatorInstance.Data + 0xc);
    uVar6 = 0;
    if ((int)uVar7 < iVar5) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    fVar3 = __real_322bcc77;
    fVar1 = *(float *)((this->FlatKnots).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
    if ((float)((uint)(param_1 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77
       ) {
      *param_2 = 0.0;
      return (this->Values).ArrayNum;
    }
    if (fVar1 - __real_322bcc77 <= param_1) {
      *param_2 = 1.0;
      return (this->Values).ArrayNum + -2;
    }
    if (param_1 <= fVar10 + __real_322bcc77) {
      *param_2 = 0.0;
      return 0;
    }
    uVar6 = FindKnotSpan(this,param_1);
    if ((2 < (int)uVar6) && (iVar5 = (this->FlatKnots).ArrayNum, (int)uVar6 < iVar5 + -1)) {
      uVar7 = 0;
      if ((int)uVar6 < iVar5) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      uVar8 = uVar6 + 1;
      fVar10 = *(float *)((this->FlatKnots).AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
      uVar7 = 0;
      if ((int)uVar8 < (this->FlatKnots).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      fVar9 = param_1 - fVar10;
      fVar1 = *(float *)((this->FlatKnots).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
      fVar10 = fVar1 - fVar10;
      if (fVar3 <= fVar10) {
        *param_2 = fVar9 / fVar10;
        return uVar6 - 3;
      }
      if (fVar9 < fVar1 - param_1) {
        *param_2 = 0.0;
        return uVar6 - 3;
      }
      *param_2 = __real_3f800000;
      return uVar6 - 3;
    }
  }
  return -1;
}

// FindKnotSpan @ 1435916a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::FindKnotSpan
          (TBSpline<UE::Math::TVector<double>,3> *this,float param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  UpdateFlatKnotsCache(this);
  iVar4 = (this->FlatKnots).ArrayNum;
  if (iVar4 != 0) {
    iVar8 = (this->Values).ArrayNum;
    if (0 < iVar8) {
      uVar6 = 0;
      if ((int)(iVar4 - 1U) < iVar4) {
        uVar6 = ~(iVar4 - 1U) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      fVar2 = __real_322bcc77;
      iVar4 = (this->FlatKnots).ArrayNum;
      if (*(float *)((this->FlatKnots).AllocatorInstance.Data + (longlong)iVar4 * 4 + -4) -
          __real_322bcc77 <= param_1) {
        return iVar8 + -1;
      }
      if ((iVar4 < 4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(float *)((this->FlatKnots).AllocatorInstance.Data + 0xc) + fVar2 < param_1) {
        iVar8 = 3;
        iVar4 = (this->FlatKnots).ArrayNum + -4;
        if (2 < iVar4) {
          do {
            uVar5 = (iVar4 + iVar8) / 2;
            uVar6 = 0;
            if ((int)uVar5 < (this->FlatKnots).ArrayNum) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              iVar4 = (*pcVar1)();
              return iVar4;
            }
            if (*(float *)((this->FlatKnots).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) <=
                param_1) {
              uVar7 = uVar5 + 1;
              uVar6 = 0;
              if ((int)uVar7 < (this->FlatKnots).ArrayNum) {
                uVar6 = ~uVar7 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar1 = (code *)swi(3);
                iVar4 = (*pcVar1)();
                return iVar4;
              }
              if (param_1 < *(float *)((this->FlatKnots).AllocatorInstance.Data +
                                      (longlong)(int)uVar7 * 4)) {
                return uVar5;
              }
            }
            uVar6 = 0;
            if ((int)uVar5 < (this->FlatKnots).ArrayNum) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              iVar4 = (*pcVar1)();
              return iVar4;
            }
            if (*(float *)((this->FlatKnots).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) <=
                param_1) {
              iVar8 = uVar5 + 1;
            }
            else {
              iVar4 = uVar5 - 1;
            }
          } while (iVar8 <= iVar4);
        }
        if (2 < (byte)Spline::LogSpline._0_1_) {
          Logging::Private::BasicLog<3>
                    (&`private:_int___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::FindKnotSpan(float)const___ptr64'
                      ::__l42::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
        }
      }
      return 3;
    }
    if (1 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<2>
                (&`private:_int___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::FindKnotSpan(float)const___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
  }
  return 0;
}

// FindNearest @ 1435929f0

float __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::FindNearest
          (TBSpline<UE::Math::TVector<double>,3> *this,TVector<double> *param_1,float *param_2)

{
  return 0.0;
}

// FindWindow @ 143594a80

TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::FindWindow
          (TBSpline<UE::Math::TVector<double>,3> *this,
          TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *__return_storage_ptr__,
          float param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *pTVar7;
  TVector<double> *pTVar8;
  uint uVar9;
  uint uVar10;
  
  __return_storage_ptr__->Elements[0] = (TVector<double> *)0x0;
  __return_storage_ptr__->Elements[1] = (TVector<double> *)0x0;
  __return_storage_ptr__->Elements[2] = (TVector<double> *)0x0;
  __return_storage_ptr__->Elements[3] = (TVector<double> *)0x0;
  if (3 < (this->Values).ArrayNum) {
    iVar6 = FindKnotSpan(this,param_1);
    iVar1 = iVar6 + -3;
    cVar4 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar4 == '\0') {
      if ((-1 < iVar1) && (iVar1 < (this->Values).ArrayNum)) {
        pTVar8 = GetValue(this,iVar1);
        __return_storage_ptr__->Elements[0] = pTVar8;
      }
      iVar1 = iVar6 + -2;
      if ((-1 < iVar1) && (iVar1 < (this->Values).ArrayNum)) {
        pTVar8 = GetValue(this,iVar1);
        __return_storage_ptr__->Elements[1] = pTVar8;
      }
      iVar1 = iVar6 + -1;
      if ((-1 < iVar1) && (iVar1 < (this->Values).ArrayNum)) {
        pTVar8 = GetValue(this,iVar1);
        __return_storage_ptr__->Elements[2] = pTVar8;
      }
      if ((-1 < iVar6) && (iVar6 < (this->Values).ArrayNum)) {
        pTVar8 = GetValue(this,iVar6);
        __return_storage_ptr__->Elements[3] = pTVar8;
      }
    }
    else {
      iVar2 = (this->Values).ArrayNum;
      uVar9 = iVar1 % iVar2;
      uVar10 = uVar9 + iVar2;
      if (-1 < (int)uVar9) {
        uVar10 = uVar9;
      }
      uVar9 = 0;
      if ((int)uVar10 < iVar2) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->Elements[0] =
           (TVector<double> *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18)
      ;
      uVar9 = (iVar6 + -2) % iVar2;
      uVar10 = uVar9 + iVar2;
      if (-1 < (int)uVar9) {
        uVar10 = uVar9;
      }
      uVar9 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->Elements[1] =
           (TVector<double> *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18)
      ;
      uVar9 = (iVar6 + -1) % iVar2;
      uVar10 = uVar9 + iVar2;
      if (-1 < (int)uVar9) {
        uVar10 = uVar9;
      }
      uVar9 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->Elements[2] =
           (TVector<double> *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18)
      ;
      uVar9 = iVar6 % iVar2;
      uVar10 = uVar9 + iVar2;
      if (-1 < (int)uVar9) {
        uVar10 = uVar9;
      }
      uVar9 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TStaticArray<UE::Math::TVector<double>_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->Elements[3] =
           (TVector<double> *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18)
      ;
    }
  }
  return __return_storage_ptr__;
}

// GenerateCentripetalKnots @ 1435a0590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GenerateCentripetalKnots
          (TBSpline<UE::Math::TVector<double>,3> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  ForAnyElementType FVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  int local_res8;
  ForAnyElementType local_f8;
  int local_f0;
  int iStack_ec;
  float local_e8;
  float local_e4;
  TArray<float,TSizedDefaultAllocator<32>_> local_e0;
  float local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float local_b0;
  undefined4 uStack_ac;
  int local_a8;
  
  iVar11 = (this->Values).ArrayNum;
  if (iVar11 < 2) {
    GenerateUniformKnots(this,param_1);
    return;
  }
  cVar9 = (**(code **)(this->_padding_ + 0x40))();
  local_res8 = param_1;
  if (cVar9 != '\0') {
    local_res8 = iVar11 + 7;
  }
  piVar1 = &(this->PairKnots).ArrayMax;
  iVar17 = 0;
  (this->PairKnots).ArrayNum = 0;
  if ((this->PairKnots).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PairKnots).AllocatorInstance,0,piVar1);
  }
  uVar18 = (this->Values).ArrayNum - 1;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iStack_ec = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&local_f8,0,&iStack_ec);
  }
  iVar14 = (this->Values).ArrayNum;
  uVar18 = 1;
  fVar27 = 0.0;
  fVar26 = 0.0;
  if (1 < iVar14) {
    lVar19 = 0x18;
    do {
      uVar15 = 0;
      if ((int)(uVar18 - 1) < iVar14) {
        uVar15 = -uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->Values).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar18 < (this->Values).ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Values).AllocatorInstance.Data;
      auVar23._0_8_ =
           (*(double *)(pFVar2 + lVar19 + -0x18) - *(double *)(pFVar3 + lVar19)) *
           (*(double *)(pFVar2 + lVar19 + -0x18) - *(double *)(pFVar3 + lVar19));
      auVar23._8_8_ = 0;
      auVar20._0_8_ =
           (*(double *)(pFVar2 + lVar19 + -8) - *(double *)(pFVar3 + lVar19 + 0x10)) *
           (*(double *)(pFVar2 + lVar19 + -8) - *(double *)(pFVar3 + lVar19 + 0x10));
      auVar20._8_8_ = 0;
      auVar21._8_8_ = 0;
      auVar21._0_8_ =
           (*(double *)(pFVar2 + lVar19 + -0x10) - *(double *)(pFVar3 + lVar19 + 8)) *
           (*(double *)(pFVar2 + lVar19 + -0x10) - *(double *)(pFVar3 + lVar19 + 8)) + auVar23._0_8_
           + auVar20._0_8_;
      auVar21 = sqrtpd(auVar20,auVar21);
      auVar21 = sqrtpd(auVar23,auVar21);
      local_e8 = (float)auVar21._0_8_;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < local_f8.Data + (longlong)iStack_ec * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_f8,&iStack_ec);
      }
      lVar13 = (longlong)local_f0;
      uVar18 = uVar18 + 1;
      lVar19 = lVar19 + 0x18;
      local_f0 = local_f0 + 1;
      *(float *)(local_f8.Data + lVar13 * 4) = local_e8;
      iVar14 = (this->Values).ArrayNum;
      fVar26 = fVar26 + local_e8;
    } while ((int)uVar18 < iVar14);
  }
  cVar9 = (**(code **)(this->_padding_ + 0x40))(this);
  uVar18 = 0;
  if ((cVar9 != '\0') && (iVar14 = (this->Values).ArrayNum, 0 < iVar14)) {
    uVar15 = uVar18;
    if ((int)(iVar14 - 1U) < iVar14) {
      uVar15 = ~(iVar14 - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar14 = (this->Values).ArrayNum;
    lVar19 = (longlong)iVar14;
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((iVar14 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->Values).AllocatorInstance.Data;
    auVar24._0_8_ =
         (*(double *)(pFVar2 + lVar19 * 0x18 + -0x18) - *(double *)pFVar3) *
         (*(double *)(pFVar2 + lVar19 * 0x18 + -0x18) - *(double *)pFVar3);
    auVar24._8_8_ = 0;
    auVar22._0_8_ =
         (*(double *)(pFVar2 + lVar19 * 0x18 + -8) - *(double *)(pFVar3 + 0x10)) *
         (*(double *)(pFVar2 + lVar19 * 0x18 + -8) - *(double *)(pFVar3 + 0x10));
    auVar22._8_8_ = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (*(double *)(pFVar2 + lVar19 * 0x18 + -0x10) - *(double *)(pFVar3 + 8)) *
                   (*(double *)(pFVar2 + lVar19 * 0x18 + -0x10) - *(double *)(pFVar3 + 8)) +
                   auVar24._0_8_ + auVar22._0_8_;
    auVar21 = sqrtpd(auVar22,auVar5);
    auVar21 = sqrtpd(auVar24,auVar21);
    local_e4 = (float)auVar21._0_8_;
    if (((local_f8.Data <= (FScriptContainerElement *)&local_e4) &&
        ((FScriptContainerElement *)&local_e4 < local_f8.Data + (longlong)iStack_ec * 4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_f0 == iStack_ec) {
      local_f0 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_f8,&iStack_ec);
    }
    *(float *)(local_f8.Data + (longlong)local_f0 * 4) = local_e4;
    fVar26 = fVar26 + local_e4;
    local_f0 = local_f0 + 1;
  }
  cVar9 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar9 == '\0') {
    if (this->bClampEnds == false) {
      if (0 < param_1) {
        fVar27 = __real_3f800000 / (float)(param_1 + -1);
        do {
          pFVar2 = (this->PairKnots).AllocatorInstance.Data;
          uStack_ac = 1;
          local_b0 = (float)iVar17 * fVar27 * fVar26;
          if (((pFVar2 <= (FScriptContainerElement *)&local_b0) &&
              ((FScriptContainerElement *)&local_b0 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = (this->PairKnots).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          iVar17 = iVar17 + 1;
          (this->PairKnots).ArrayNum = iVar11 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(uStack_ac,local_b0);
        } while (iVar17 < param_1);
      }
    }
    else {
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      local_c8 = 0;
      uStack_c4 = 4;
      if (((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (this->PairKnots).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      fVar7 = __real_3f800000;
      (this->PairKnots).ArrayNum = iVar11 + 1;
      local_a8 = param_1 + -8;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           CONCAT44(uStack_c4,local_c8);
      if (0 < local_a8) {
        local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.ArrayNum = 0;
        local_e0.ArrayMax = 0;
        TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_e0,(this->Values).ArrayNum,Default)
        ;
        if ((local_e0.ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar15 = 1;
        *(undefined4 *)local_e0.AllocatorInstance.Data = 0;
        fVar6 = __real_322bcc77;
        if (1 < (this->Values).ArrayNum) {
          lVar19 = 4;
          do {
            uVar16 = uVar18;
            if ((int)(uVar15 - 1) < local_f0) {
              uVar16 = -uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar27 = fVar27 + *(float *)(local_f8.Data + lVar19 + -4);
            if (fVar26 <= fVar6) {
              fVar25 = (float)(int)uVar15 / (float)((this->Values).ArrayNum + -1);
            }
            else {
              fVar25 = fVar27 / fVar26;
            }
            uVar16 = uVar18;
            if ((int)uVar15 < local_e0.ArrayNum) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar15 = uVar15 + 1;
            *(float *)(local_e0.AllocatorInstance.Data + lVar19) = fVar25;
            lVar19 = lVar19 + 4;
          } while ((int)uVar15 < (this->Values).ArrayNum);
        }
        fVar26 = __real_3f000000;
        do {
          iVar17 = iVar17 + 1;
          iVar11 = (this->Values).ArrayNum;
          uVar15 = iVar11 - 1;
          fVar27 = (float)iVar17 * (fVar7 / (float)(param_1 + -7));
          uVar16 = (int)ROUND((fVar27 + fVar27) * (float)(int)uVar15 - fVar26) >> 1;
          if ((int)(uVar16 + 1) < (int)uVar15) {
            uVar15 = uVar16 + 1;
          }
          uVar12 = uVar18;
          if ((int)uVar15 < local_e0.ArrayNum) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FVar8.Data = local_e0.AllocatorInstance.Data;
          uVar12 = uVar18;
          if ((int)uVar16 < local_e0.ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uStack_bc = 1;
          pFVar2 = (this->PairKnots).AllocatorInstance.Data;
          local_c0 = (float)(int)(~uVar16 + iVar11) * fVar27 *
                     (*(float *)(FVar8.Data + (longlong)(int)uVar15 * 4) -
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar16 * 4)) +
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
          if (((pFVar2 <= (FScriptContainerElement *)&local_c0) &&
              ((FScriptContainerElement *)&local_c0 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = (this->PairKnots).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          (this->PairKnots).ArrayNum = iVar11 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(uStack_bc,local_c0);
        } while (iVar17 < local_a8);
        if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.AllocatorInstance.Data);
        }
      }
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      local_b8 = 0x3f800000;
      uStack_b4 = 4;
      if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (this->PairKnots).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      (this->PairKnots).ArrayNum = iVar11 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           CONCAT44(uStack_b4,local_b8);
    }
  }
  else if (0 < local_res8) {
    fVar27 = __real_3f800000 / (float)(iVar11 + 3);
    do {
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      uStack_cc = 1;
      local_d0 = (float)iVar17 * fVar26 * fVar27;
      if (((pFVar2 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (this->PairKnots).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      iVar17 = iVar17 + 1;
      (this->PairKnots).ArrayNum = iVar11 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           CONCAT44(uStack_cc,local_d0);
    } while (iVar17 < local_res8);
  }
  this->bFlatKnotsCacheDirty = true;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// GenerateChordLengthKnots @ 1435a1150

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GenerateChordLengthKnots
          (TBSpline<UE::Math::TVector<double>,3> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  ForAnyElementType FVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  int local_res8;
  ForAnyElementType local_f8;
  int local_f0;
  int iStack_ec;
  float local_e8;
  float local_e4;
  TArray<float,TSizedDefaultAllocator<32>_> local_e0;
  float local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float local_b0;
  undefined4 uStack_ac;
  int local_a8;
  
  iVar11 = (this->Values).ArrayNum;
  if (iVar11 < 2) {
    GenerateUniformKnots(this,param_1);
    return;
  }
  cVar9 = (**(code **)(this->_padding_ + 0x40))();
  local_res8 = param_1;
  if (cVar9 != '\0') {
    local_res8 = iVar11 + 7;
  }
  piVar1 = &(this->PairKnots).ArrayMax;
  iVar17 = 0;
  (this->PairKnots).ArrayNum = 0;
  if ((this->PairKnots).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PairKnots).AllocatorInstance,0,piVar1);
  }
  uVar18 = (this->Values).ArrayNum - 1;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iStack_ec = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&local_f8,0,&iStack_ec);
  }
  iVar14 = (this->Values).ArrayNum;
  uVar18 = 1;
  fVar25 = 0.0;
  fVar24 = 0.0;
  if (1 < iVar14) {
    lVar19 = 0x18;
    do {
      uVar15 = 0;
      if ((int)(uVar18 - 1) < iVar14) {
        uVar15 = -uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->Values).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar18 < (this->Values).ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Values).AllocatorInstance.Data;
      auVar20._0_8_ =
           (*(double *)(pFVar2 + lVar19 + -8) - *(double *)(pFVar3 + lVar19 + 0x10)) *
           (*(double *)(pFVar2 + lVar19 + -8) - *(double *)(pFVar3 + lVar19 + 0x10));
      auVar20._8_8_ = 0;
      auVar21._8_8_ = 0;
      auVar21._0_8_ =
           (*(double *)(pFVar2 + lVar19 + -0x10) - *(double *)(pFVar3 + lVar19 + 8)) *
           (*(double *)(pFVar2 + lVar19 + -0x10) - *(double *)(pFVar3 + lVar19 + 8)) +
           (*(double *)(pFVar2 + lVar19 + -0x18) - *(double *)(pFVar3 + lVar19)) *
           (*(double *)(pFVar2 + lVar19 + -0x18) - *(double *)(pFVar3 + lVar19)) + auVar20._0_8_;
      auVar21 = sqrtpd(auVar20,auVar21);
      local_e8 = (float)auVar21._0_8_;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < local_f8.Data + (longlong)iStack_ec * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_f8,&iStack_ec);
      }
      lVar13 = (longlong)local_f0;
      uVar18 = uVar18 + 1;
      lVar19 = lVar19 + 0x18;
      local_f0 = local_f0 + 1;
      *(float *)(local_f8.Data + lVar13 * 4) = local_e8;
      iVar14 = (this->Values).ArrayNum;
      fVar24 = fVar24 + local_e8;
    } while ((int)uVar18 < iVar14);
  }
  cVar9 = (**(code **)(this->_padding_ + 0x40))(this);
  uVar18 = 0;
  if ((cVar9 != '\0') && (iVar14 = (this->Values).ArrayNum, 0 < iVar14)) {
    uVar15 = uVar18;
    if ((int)(iVar14 - 1U) < iVar14) {
      uVar15 = ~(iVar14 - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar14 = (this->Values).ArrayNum;
    lVar19 = (longlong)iVar14;
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((iVar14 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->Values).AllocatorInstance.Data;
    auVar22._0_8_ =
         (*(double *)(pFVar2 + lVar19 * 0x18 + -8) - *(double *)(pFVar3 + 0x10)) *
         (*(double *)(pFVar2 + lVar19 * 0x18 + -8) - *(double *)(pFVar3 + 0x10));
    auVar22._8_8_ = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (*(double *)(pFVar2 + lVar19 * 0x18 + -0x10) - *(double *)(pFVar3 + 8)) *
                   (*(double *)(pFVar2 + lVar19 * 0x18 + -0x10) - *(double *)(pFVar3 + 8)) +
                   (*(double *)(pFVar2 + lVar19 * 0x18 + -0x18) - *(double *)pFVar3) *
                   (*(double *)(pFVar2 + lVar19 * 0x18 + -0x18) - *(double *)pFVar3) + auVar22._0_8_
    ;
    auVar21 = sqrtpd(auVar22,auVar5);
    local_e4 = (float)auVar21._0_8_;
    if (((local_f8.Data <= (FScriptContainerElement *)&local_e4) &&
        ((FScriptContainerElement *)&local_e4 < local_f8.Data + (longlong)iStack_ec * 4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_f0 == iStack_ec) {
      local_f0 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_f8,&iStack_ec);
    }
    *(float *)(local_f8.Data + (longlong)local_f0 * 4) = local_e4;
    fVar24 = fVar24 + local_e4;
    local_f0 = local_f0 + 1;
  }
  cVar9 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar9 == '\0') {
    if (this->bClampEnds == false) {
      if (0 < param_1) {
        fVar25 = __real_3f800000 / (float)(param_1 + -1);
        do {
          pFVar2 = (this->PairKnots).AllocatorInstance.Data;
          uStack_ac = 1;
          local_b0 = (float)iVar17 * fVar25 * fVar24;
          if (((pFVar2 <= (FScriptContainerElement *)&local_b0) &&
              ((FScriptContainerElement *)&local_b0 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = (this->PairKnots).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          iVar17 = iVar17 + 1;
          (this->PairKnots).ArrayNum = iVar11 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(uStack_ac,local_b0);
        } while (iVar17 < param_1);
      }
    }
    else {
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      local_c8 = 0;
      uStack_c4 = 4;
      if (((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (this->PairKnots).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      fVar7 = __real_3f800000;
      (this->PairKnots).ArrayNum = iVar11 + 1;
      local_a8 = param_1 + -8;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           CONCAT44(uStack_c4,local_c8);
      if (0 < local_a8) {
        local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.ArrayNum = 0;
        local_e0.ArrayMax = 0;
        TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_e0,(this->Values).ArrayNum,Default)
        ;
        if ((local_e0.ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar15 = 1;
        *(undefined4 *)local_e0.AllocatorInstance.Data = 0;
        fVar6 = __real_322bcc77;
        if (1 < (this->Values).ArrayNum) {
          lVar19 = 4;
          do {
            uVar16 = uVar18;
            if ((int)(uVar15 - 1) < local_f0) {
              uVar16 = -uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar25 = fVar25 + *(float *)(local_f8.Data + lVar19 + -4);
            if (fVar24 <= fVar6) {
              fVar23 = (float)(int)uVar15 / (float)((this->Values).ArrayNum + -1);
            }
            else {
              fVar23 = fVar25 / fVar24;
            }
            uVar16 = uVar18;
            if ((int)uVar15 < local_e0.ArrayNum) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar15 = uVar15 + 1;
            *(float *)(local_e0.AllocatorInstance.Data + lVar19) = fVar23;
            lVar19 = lVar19 + 4;
          } while ((int)uVar15 < (this->Values).ArrayNum);
        }
        fVar24 = __real_3f000000;
        do {
          iVar17 = iVar17 + 1;
          iVar11 = (this->Values).ArrayNum;
          uVar15 = iVar11 - 1;
          fVar25 = (float)iVar17 * (fVar7 / (float)(param_1 + -7));
          uVar16 = (int)ROUND((fVar25 + fVar25) * (float)(int)uVar15 - fVar24) >> 1;
          if ((int)(uVar16 + 1) < (int)uVar15) {
            uVar15 = uVar16 + 1;
          }
          uVar12 = uVar18;
          if ((int)uVar15 < local_e0.ArrayNum) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FVar8.Data = local_e0.AllocatorInstance.Data;
          uVar12 = uVar18;
          if ((int)uVar16 < local_e0.ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uStack_bc = 1;
          pFVar2 = (this->PairKnots).AllocatorInstance.Data;
          local_c0 = (float)(int)(~uVar16 + iVar11) * fVar25 *
                     (*(float *)(FVar8.Data + (longlong)(int)uVar15 * 4) -
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar16 * 4)) +
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
          if (((pFVar2 <= (FScriptContainerElement *)&local_c0) &&
              ((FScriptContainerElement *)&local_c0 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = (this->PairKnots).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          (this->PairKnots).ArrayNum = iVar11 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(uStack_bc,local_c0);
        } while (iVar17 < local_a8);
        if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.AllocatorInstance.Data);
        }
      }
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      local_b8 = 0x3f800000;
      uStack_b4 = 4;
      if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (this->PairKnots).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      (this->PairKnots).ArrayNum = iVar11 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           CONCAT44(uStack_b4,local_b8);
    }
  }
  else if (0 < local_res8) {
    fVar25 = __real_3f800000 / (float)(iVar11 + 3);
    do {
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      uStack_cc = 1;
      local_d0 = (float)iVar17 * fVar24 * fVar25;
      if (((pFVar2 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (this->PairKnots).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      iVar17 = iVar17 + 1;
      (this->PairKnots).ArrayNum = iVar11 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           CONCAT44(uStack_cc,local_d0);
    } while (iVar17 < local_res8);
  }
  this->bFlatKnotsCacheDirty = true;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// GenerateUniformKnots @ 1435ae5e0

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GenerateUniformKnots
          (TBSpline<UE::Math::TVector<double>,3> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float local_38;
  undefined4 uStack_34;
  float local_30;
  undefined4 uStack_2c;
  
  piVar1 = &(this->PairKnots).ArrayMax;
  uVar7 = 0;
  (this->PairKnots).ArrayNum = 0;
  if ((this->PairKnots).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PairKnots).AllocatorInstance,0,piVar1);
  }
  iVar8 = (this->Values).ArrayNum;
  cVar4 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar4 == '\0') {
    if (0 < param_1) {
      do {
        uVar9 = uVar7;
        if (this->bClampEnds == false) {
LAB_1435ae74e:
          local_30 = (float)(int)uVar9;
        }
        else {
          if (3 < uVar7) {
            if ((int)uVar7 < param_1 + -4) {
              uVar9 = uVar7 - 3;
            }
            else {
              uVar9 = param_1 - 6;
            }
            goto LAB_1435ae74e;
          }
          local_30 = 0.0;
        }
        pFVar2 = (this->PairKnots).AllocatorInstance.Data;
        uStack_2c = 1;
        if (((pFVar2 <= (FScriptContainerElement *)&local_30) &&
            ((FScriptContainerElement *)&local_30 < pFVar2 + (longlong)*piVar1 * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (this->PairKnots).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
        }
        uVar7 = uVar7 + 1;
        (this->PairKnots).ArrayNum = iVar8 + 1;
        *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             CONCAT44(uStack_2c,local_30);
      } while ((int)uVar7 < param_1);
    }
  }
  else {
    iVar8 = iVar8 + 7;
    if (0 < iVar8) {
      do {
        pFVar2 = (this->PairKnots).AllocatorInstance.Data;
        uStack_34 = 1;
        local_38 = (float)(int)uVar7;
        if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)*piVar1 * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->PairKnots).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
        }
        uVar7 = uVar7 + 1;
        (this->PairKnots).ArrayNum = iVar6 + 1;
        *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar6 * 8) =
             CONCAT44(uStack_34,local_38);
      } while ((int)uVar7 < iVar8);
    }
  }
  this->bFlatKnotsCacheDirty = true;
  return;
}

// GetExpectedNumKnots @ 1435b0ff0

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetExpectedNumKnots
          (TBSpline<UE::Math::TVector<double>,3> *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = (this->Values).ArrayNum;
  cVar2 = (**(code **)(this->_padding_ + 0x40))();
  iVar3 = 7;
  if (cVar2 == '\0') {
    iVar3 = 4;
  }
  return iVar1 + iVar3;
}

// GetImplementationName @ 1435b1120

FString * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetImplementationName
          (TBSpline<UE::Math::TVector<double>,3> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"BSpline3");
  return __return_storage_ptr__;
}

// GetNearestAvailableKnotValue @ 1435b18d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue
          (TBSpline<UE::Math::TVector<double>,3> *this,FValidKnotSearchParams *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  short sVar5;
  ulonglong uVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  ulonglong uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_168 [32];
  undefined1 local_148 [4];
  float local_144;
  uint local_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_138;
  undefined4 local_130;
  uint uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  float local_120 [2];
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_168;
  sVar5 = _fdclass(param_1->DesiredParameter);
  if (((sVar5 == 2) &&
      (bVar4 = `UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::
               GetNearestAvailableKnotValue'::__l3::<lambda_1>::operator()(local_148), !bVar4)) ||
     ((param_1->bSearchLeft == false &&
      ((param_1->bSearchRight == false &&
       (bVar4 = `UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::
                GetNearestAvailableKnotValue'::__l3::<lambda_2>::operator()(local_148), !bVar4))))))
  {
LAB_1435b1938:
    return param_1->DesiredParameter;
  }
  uVar9 = (this->PairKnots).ArrayNum;
  if (uVar9 == 0) goto LAB_1435b1938;
  uVar15 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_e8,uVar9);
  if (uVar9 < 4) {
    uVar9 = 1;
  }
  else {
    uVar12 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar9 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_a0 == 0) || ((int)local_a0 < (int)uVar9)) {
    local_a0 = uVar9;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
    }
    if (uVar9 != 0) {
      uVar11 = uVar9;
      if (uVar9 < 2) {
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          uVar11 = 0;
          goto LAB_1435b1a17;
        }
      }
      else {
LAB_1435b1a17:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar11,4);
      }
      if (0 < (int)uVar9) {
        uVar13 = (ulonglong)uVar9;
        uVar12 = uVar15;
        do {
          FVar8.Data = local_b0;
          if (local_a8.Data != (FScriptContainerElement *)0x0) {
            FVar8.Data = local_a8.Data;
          }
          uVar6 = uVar12 & (longlong)(int)uVar9 - 1U;
          uVar12 = uVar12 + 1;
          *(undefined4 *)(FVar8.Data + uVar6 * 4) = 0xffffffff;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    if (local_a0 != 0) {
      pTStack_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      local_140 = 0;
      uStack_13c = 1;
      uStack_12c = 0;
      uStack_128 = 0;
      uVar12 = uVar15;
      if (local_c0 != 0) {
        FVar14 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
        if (local_c8 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_c8;
        }
        uVar9 = *(uint *)FVar14;
        uVar13 = uVar15;
        while (uVar9 == 0) {
          uStack_128 = (int)uVar13 + 0x20;
          uVar13 = (ulonglong)uStack_128;
          iVar16 = (int)uVar12;
          local_140 = iVar16 + 1;
          uVar12 = (ulonglong)local_140;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_140)
          goto LAB_1435b1b1f;
          uVar9 = ((uint *)((longlong)FVar14 + 4))[iVar16];
        }
        uStack_13c = -uVar9 & uVar9;
        uVar12 = (ulonglong)uStack_13c * 2 + 1;
        lVar3 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uStack_12c = (uStack_128 - 1) + (int)lVar3;
        uVar12 = (ulonglong)uStack_12c;
        if ((int)local_c0 < (int)uStack_12c) {
LAB_1435b1b1f:
          uVar12 = (ulonglong)local_c0;
          uStack_12c = local_c0;
        }
      }
      local_130 = 0xffffffff;
      local_118 = (longlong *)local_e8;
      local_110._padding_ = CONCAT44(uStack_13c,local_140);
      local_110.CurrentBitIndex = uStack_12c;
      local_110.UnvisitedBitMask = 0xffffffff;
      local_110._28_4_ = uStack_124;
      local_110.BaseBitIndex = uStack_128;
      local_110.Array = pTStack_138;
      if ((int)uVar12 < (int)local_c0) {
        do {
          lVar3 = *local_118;
          lVar7 = (longlong)(int)uVar12;
          uVar9 = local_a0 - 1 & *(uint *)(lVar3 + lVar7 * 0xc);
          *(uint *)(lVar3 + 8 + lVar7 * 0xc) = uVar9;
          FVar8.Data = local_b0;
          if (local_a8.Data != (FScriptContainerElement *)0x0) {
            FVar8.Data = local_a8.Data;
          }
          uVar13 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar9;
          *(undefined4 *)(lVar3 + 4 + lVar7 * 0xc) = *(undefined4 *)(FVar8.Data + uVar13 * 4);
          *(int *)(FVar8.Data + uVar13 * 4) = (int)uVar12;
          local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
          uVar12 = (ulonglong)(uint)local_110.CurrentBitIndex;
        } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
      }
    }
  }
  pFVar10 = (this->PairKnots).AllocatorInstance.Data;
  iVar16 = (this->PairKnots).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar16 * 8;
  while( true ) {
    if ((this->PairKnots).ArrayNum != iVar16) {
      `TCheckedPointerIterator<UE::Geometry::Spline::FKnot_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_148);
    }
    fVar21 = __real_7f7fffff;
    fVar20 = __real_ff7fffff;
    if (pFVar10 == pFVar1) break;
    local_144 = *(float *)pFVar10;
    if (local_144 == 0.0) {
      local_144 = 0.0;
    }
    TSet<float,DefaultKeyFuncs<float,0>,FDefaultSetAllocator>::Emplace<float>
              ((TSet<float,DefaultKeyFuncs<float,0>,FDefaultSetAllocator> *)local_e8,local_120,
               (bool *)&local_144);
    pFVar10 = pFVar10 + 8;
  }
  fVar17 = param_1->DesiredParameter;
  if (fVar17 == 0.0) {
    fVar17 = 0.0;
  }
  if (local_e8._8_4_ != local_b4) {
    FVar8.Data = local_b0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FVar8.Data = local_a8.Data;
    }
    for (iVar16 = *(int *)(FVar8.Data + (ulonglong)(local_a0 - 1 & (uint)fVar17) * 4); iVar16 != -1;
        iVar16 = *(int *)(local_e8._0_8_ + (longlong)iVar16 * 0xc + 4)) {
      if (fVar17 == *(float *)(local_e8._0_8_ + (longlong)iVar16 * 0xc)) {
        fVar17 = param_1->DesiredParameter;
        if (iVar16 == -1) goto LAB_1435b1c99;
        uVar12 = (ulonglong)param_1->bSearchLeft;
        uVar13 = (ulonglong)param_1->bSearchRight;
        iVar16 = 0x1000;
        fVar18 = fVar17;
        fVar19 = fVar17;
        goto LAB_1435b1d50;
      }
    }
  }
  fVar17 = param_1->DesiredParameter;
LAB_1435b1c99:
  local_a0 = 0;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  TSparseArray<TSparseSetElement<float>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<float>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<float>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return fVar17;
LAB_1435b1d50:
  bVar4 = false;
  if ((char)uVar12 != '\0') {
    fVar17 = Spline::Internal::NextafterNoSubnormal(fVar18,false);
    if (fVar17 == fVar18) {
      uVar12 = 0;
    }
    else {
      bVar4 = true;
      fVar18 = fVar17;
      if (fVar17 == 0.0) {
        fVar18 = 0.0;
      }
      if (local_e8._8_4_ == local_b4) goto LAB_1435b1c99;
      FVar8.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_a8.Data;
      }
      iVar2 = *(int *)(FVar8.Data + (ulonglong)(local_a0 - 1 & (uint)fVar18) * 4);
      while( true ) {
        if (iVar2 == -1) goto LAB_1435b1c99;
        if (fVar18 == *(float *)(local_e8._0_8_ + (longlong)iVar2 * 0xc)) break;
        iVar2 = *(int *)(local_e8._0_8_ + (longlong)iVar2 * 0xc + 4);
      }
      fVar18 = fVar17;
      if (fVar17 <= fVar20) {
        uVar12 = uVar15;
      }
    }
  }
  fVar17 = fVar19;
  if ((char)uVar13 != '\0') {
    fVar17 = Spline::Internal::NextafterNoSubnormal(fVar19,true);
    if (fVar17 == fVar19) {
      uVar13 = 0;
      fVar17 = fVar19;
    }
    else {
      bVar4 = true;
      fVar19 = fVar17;
      if (fVar17 == 0.0) {
        fVar19 = 0.0;
      }
      if (local_e8._8_4_ == local_b4) goto LAB_1435b1c99;
      FVar8.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_a8.Data;
      }
      iVar2 = *(int *)(FVar8.Data + (ulonglong)(local_a0 - 1 & (uint)fVar19) * 4);
      while( true ) {
        if (iVar2 == -1) goto LAB_1435b1c99;
        if (fVar19 == *(float *)(local_e8._0_8_ + (longlong)iVar2 * 0xc)) break;
        iVar2 = *(int *)(local_e8._0_8_ + (longlong)iVar2 * 0xc + 4);
      }
      if (fVar21 <= fVar17) {
        uVar13 = uVar15;
      }
    }
  }
  if ((((char)uVar12 == '\0') && ((char)uVar13 == '\0')) || (!bVar4)) goto LAB_1435b1e9b;
  iVar16 = iVar16 + -1;
  fVar19 = fVar17;
  if (iVar16 < 1) goto code_r0x0001435b1e91;
  goto LAB_1435b1d50;
code_r0x0001435b1e91:
  `UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue'::__l49
  ::<lambda_3>::operator()(local_148);
LAB_1435b1e9b:
  fVar20 = param_1->DesiredParameter;
  fVar21 = fVar20;
  if (fVar20 == 0.0) {
    fVar21 = 0.0;
  }
  if ((param_1->bSearchRight == false) ||
     ((param_1->bSearchLeft != false && (((uint)fVar21 & 1) == 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  fVar17 = Spline::Internal::NextafterNoSubnormal(fVar20,bVar4);
  fVar20 = fVar17;
  if (fVar17 == 0.0) {
    fVar20 = 0.0;
  }
  if (local_e8._8_4_ != local_b4) {
    FVar8.Data = local_b0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FVar8.Data = local_a8.Data;
    }
    for (iVar16 = *(int *)(FVar8.Data + (ulonglong)(local_a0 - 1 & (uint)fVar20) * 4); iVar16 != -1;
        iVar16 = *(int *)(local_e8._0_8_ + (longlong)iVar16 * 0xc + 4)) {
      if (fVar20 == *(float *)(local_e8._0_8_ + (longlong)iVar16 * 0xc)) {
        fVar17 = Spline::Internal::NextafterNoSubnormal(param_1->DesiredParameter,(bool)(bVar4 ^ 1))
        ;
        fVar20 = fVar17;
        if (fVar17 == 0.0) {
          fVar20 = 0.0;
        }
        break;
      }
    }
    if (local_e8._8_4_ != local_b4) {
      FVar8.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_a8.Data;
      }
      for (iVar16 = *(int *)(FVar8.Data + (ulonglong)(local_a0 - 1 & (uint)fVar20) * 4);
          iVar16 != -1; iVar16 = *(int *)(local_e8._0_8_ + (longlong)iVar16 * 0xc + 4)) {
        if (fVar20 == *(float *)(local_e8._0_8_ + (longlong)iVar16 * 0xc)) {
          `UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::
          GetNearestAvailableKnotValue'::__l50::<lambda_4>::operator()(local_148);
          break;
        }
      }
    }
  }
  goto LAB_1435b1c99;
}

// GetNumberOfSegments @ 1435b2030

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNumberOfSegments
          (TBSpline<UE::Math::TVector<double>,3> *this)

{
  undefined1 local_res10 [24];
  
  `UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNumberOfSegments'::__l2::
  <lambda_1>::operator()(local_res10);
  return -1;
}

// GetParameter @ 1435b2240

float __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetParameter
          (TBSpline<UE::Math::TVector<double>,3> *this,int param_1)

{
  uint uVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  UpdateFlatKnotsCache(this);
  if ((-1 < param_1) && (uVar1 = param_1 + 3, (int)uVar1 < (this->FlatKnots).ArrayNum + -1)) {
    uVar5 = param_1 + 1;
    uVar6 = 0;
    if ((int)uVar5 < (this->FlatKnots).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar7 = (float)(*pcVar3)();
        return fVar7;
      }
    }
    uVar6 = param_1 + 2;
    fVar7 = *(float *)((this->FlatKnots).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
    uVar5 = 0;
    if ((int)uVar6 < (this->FlatKnots).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar7 = (float)(*pcVar3)();
        return fVar7;
      }
    }
    fVar2 = *(float *)((this->FlatKnots).AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
    uVar5 = 0;
    if ((int)uVar1 < (this->FlatKnots).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar7 = (float)(*pcVar3)();
        return fVar7;
      }
    }
    return (fVar7 + fVar2 +
           *(float *)((this->FlatKnots).AllocatorInstance.Data + (longlong)(int)uVar1 * 4)) *
           __real_3eaaaaab;
  }
  return 0.0;
}

// GetParameterSpace @ 1435b2570

TInterval1<float> __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetParameterSpace
          (TBSpline<UE::Math::TVector<double>,3> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TInterval1<float> TVar5;
  uint uVar6;
  uint uVar7;
  TInterval1<float> in_RDX;
  undefined4 uVar8;
  undefined4 uVar9;
  
  UpdateFlatKnotsCache(this);
  uVar8 = __real_ff7fffff;
  uVar9 = __real_7f7fffff;
  if (-1 < (this->FlatKnots).ArrayNum + -4) {
    iVar1 = (this->PairKnots).ArrayNum;
    uVar7 = iVar1 - 1;
    uVar6 = 0;
    if ((int)uVar7 < iVar1) {
      uVar6 = ~uVar7 >> 0x1f;
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
    iVar1 = (this->PairKnots).ArrayNum;
    pFVar2 = (this->PairKnots).AllocatorInstance.Data;
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
    uVar8 = *(undefined4 *)(pFVar2 + (longlong)iVar1 * 8 + -8);
    uVar9 = *(undefined4 *)(this->PairKnots).AllocatorInstance.Data;
  }
  *(undefined4 *)in_RDX = uVar9;
  *(undefined4 *)((longlong)in_RDX + 4) = uVar8;
  return in_RDX;
}

// GetSegmentParameterRange @ 1435b2b30

TInterval1<float> __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetSegmentParameterRange
          (TBSpline<UE::Math::TVector<double>,3> *this,int param_1)

{
  TInterval1<float> TVar1;
  float in_register_00000014;
  undefined1 local_res10 [24];
  
  TVar1.Max = in_register_00000014;
  TVar1.Min = (float)param_1;
  `UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetSegmentParameterRange'::__l2::
  <lambda_1>::operator()(local_res10);
  *(undefined4 *)TVar1 = 0x7f7fffff;
  *(undefined4 *)((longlong)TVar1 + 4) = 0xff7fffff;
  return TVar1;
}

// GetStaticTypeId @ 1435b2d00

uint * __cdecl UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetStaticTypeId(void)

{
  wchar_t wVar1;
  ushort uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ushort uVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetStaticTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetStaticTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetStaticTypeId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pwVar4 = L"";
    pwVar3 = L"BSpline3";
    if (TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)
               TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.AllocatorInstance;
    }
    uVar5 = 0x811c9dc5;
    uVar6 = 0x9dc5;
    wVar1 = u_BSpline3[0];
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      uVar6 = (wVar1 ^ uVar6) * 0x193;
      wVar1 = *pwVar3;
    }
    uVar2 = *pwVar4;
    while (uVar2 != 0) {
      pwVar4 = (wchar_t *)((longlong)pwVar4 + 2);
      uVar5 = (uVar2 ^ uVar5) * 0x1000193;
      uVar2 = *pwVar4;
    }
    `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetStaticTypeId(void)'
    ::__l2::CachedTypeId = (uint)uVar6 << 0x10 | uVar5 & 0xffff;
    _Init_thread_footer(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetStaticTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetStaticTypeId(void)'
          ::__l2::CachedTypeId;
}

// GetTypeId @ 1435b5270

uint __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetTypeId
          (TBSpline<UE::Math::TVector<double>,3> *this)

{
  uint *puVar1;
  
  puVar1 = GetStaticTypeId();
  return *puVar1;
}

// GetValue @ 1435b5300

TVector<double> * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetValue
          (TBSpline<UE::Math::TVector<double>,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Values).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double> *)((this->Values).AllocatorInstance.Data + (longlong)param_1 * 0x18);
}

// InsertKnot @ 1435b8cf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::InsertKnot
          (TBSpline<UE::Math::TVector<double>,3> *this,FKnot param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FKnot *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FKnot local_res10;
  
  iVar11 = 0;
  iVar10 = (this->PairKnots).ArrayNum + -1;
  local_res10 = param_1;
  if (-1 < iVar10) {
    do {
      iVar8 = iVar10 - iVar11;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1;
      }
      uVar2 = (iVar8 >> 1) + iVar11;
      uVar9 = 0;
      if ((int)uVar2 < (this->PairKnots).ArrayNum) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (local_res10.Value ==
          *(float *)((this->PairKnots).AllocatorInstance.Data + (longlong)(int)uVar2 * 8)) {
        if (2 < (byte)Spline::LogSpline._0_1_) {
          Logging::Private::BasicLog<3>
                    (&`protected:_bool___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::InsertKnot(UE::Geometry::Spline::FKnot)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
        }
        return false;
      }
      uVar9 = 0;
      if ((int)uVar2 < (this->PairKnots).ArrayNum) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar3 = (this->PairKnots).AllocatorInstance.Data + (longlong)(int)uVar2 * 8;
      if (local_res10.Value < *(float *)pFVar3 || local_res10.Value == *(float *)pFVar3) {
        iVar10 = uVar2 - 1;
      }
      else {
        iVar11 = uVar2 + 1;
      }
    } while (iVar11 <= iVar10);
  }
  pFVar4 = (FKnot *)(this->PairKnots).AllocatorInstance.Data;
  if (((pFVar4 <= &local_res10) && (&local_res10 < pFVar4 + (this->PairKnots).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar10 = (this->PairKnots).ArrayNum;
  piVar1 = &(this->PairKnots).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
    (this->PairKnots).ArrayNum = iVar10;
  }
  (this->PairKnots).ArrayNum = iVar10 + 1;
  pFVar3 = (this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8;
  memmove(pFVar3 + 8,pFVar3,(longlong)(iVar10 - iVar11) << 3);
  *(FKnot *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_res10;
  this->bFlatKnotsCacheDirty = true;
  return true;
}

// InsertValue @ 1435b8f10

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::InsertValue
          (TBSpline<UE::Math::TVector<double>,3> *this,int param_1,TVector<double> *param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  if ((-1 < param_1) && (param_1 <= (this->Values).ArrayNum)) {
    pFVar9 = (this->Values).AllocatorInstance.Data;
    pTVar1 = &this->Values;
    if ((pFVar9 <= param_2) && (param_2 < pFVar9 + (longlong)(this->Values).ArrayMax * 0x18)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
    }
    iVar8 = (this->Values).ArrayNum;
    piVar2 = &(this->Values).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    lVar3 = (longlong)param_1 * 0x18;
    pFVar9 = (pTVar1->AllocatorInstance).Data + lVar3;
    memmove(pFVar9 + 0x18,pFVar9,(longlong)(iVar8 - param_1) * 0x18);
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    pFVar9 = pFVar4 + lVar3;
    *(double *)pFVar9 = (param_2->field0_0x0)._s_0.X;
    *(double *)(pFVar9 + 8) = dVar6;
    *(double *)(pFVar4 + lVar3 + 0x10) = (param_2->field0_0x0)._s_0.Z;
    return param_1;
  }
  pFVar9 = (this->Values).AllocatorInstance.Data;
  if ((pFVar9 <= param_2) && (param_2 < pFVar9 + (longlong)(this->Values).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  iVar8 = (this->Values).ArrayNum;
  piVar2 = &(this->Values).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Values).AllocatorInstance,piVar2);
  }
  (this->Values).ArrayNum = iVar8 + 1;
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  pFVar4 = (this->Values).AllocatorInstance.Data;
  pFVar9 = pFVar4 + (longlong)iVar8 * 0x18;
  *(double *)pFVar9 = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar9 + 8) = dVar6;
  *(double *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  return iVar8;
}

// InterpolateWindow @ 1435b90d0

TVector<double> * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::InterpolateWindow
          (TBSpline<UE::Math::TVector<double>,3> *this,TVector<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_*_const,int> *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TVector<double> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<float_const_,int> local_38;
  TArrayView<UE::Math::TVector<double>_const_*_const,int> local_28 [2];
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if ((this->PairKnots).ArrayNum == 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    UpdateFlatKnotsCache(this);
    iVar3 = FindKnotSpan(this,param_2);
    Spline::Math::ComputeBSplineBasisFunctions(&this->FlatKnots,iVar3,param_2,3,&local_58);
    iStack_40 = local_58.ArrayNum;
    local_48 = local_58.AllocatorInstance.Data;
    if (local_58.ArrayNum < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVector<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    local_28[0].DataPtr = param_1->DataPtr;
    local_28[0].ArrayNum = param_1->ArrayNum;
    local_28[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_38._12_4_ = uStack_3c;
    local_38.ArrayNum = iStack_40;
    local_38.DataPtr = (float *)local_48;
    TSplineInterpolationPolicy<UE::Math::TVector<double>_>::InterpolateWithBasis
              (__return_storage_ptr__,local_28,&local_38);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// IsClosedLoop @ 1435b9c40

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::IsClosedLoop
          (TBSpline<UE::Math::TVector<double>,3> *this)

{
  return this->bIsClosedLoop;
}

// IsEqual @ 1435ba1b0

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::IsEqual
          (TBSpline<UE::Math::TVector<double>,3> *this,ISplineInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 0x48);
  iVar3 = (**(code **)((longlong)*param_1 + 0x48))(param_1);
  iVar4 = (*pcVar1)(this);
  if (iVar3 == iVar4) {
    bVar2 = operator==(this,(TBSpline<UE::Math::TVector<double>,3> *)param_1);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// PrintKnotVector @ 1435bdfc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::PrintKnotVector
          (TBSpline<UE::Math::TVector<double>,3> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (0 < (this->PairKnots).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->PairKnots).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (5 < (byte)Spline::LogSpline._0_1_) {
        Logging::Private::BasicLog<6>
                  (&`protected:_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::PrintKnotVector(void)const___ptr64'
                    ::__l5::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->PairKnots).ArrayNum);
  }
  uVar4 = 0;
  if (0 < (this->FlatKnots).ArrayNum) {
    do {
      if (5 < (byte)Spline::LogSpline._0_1_) {
        uVar3 = 0;
        if ((int)uVar4 < (this->FlatKnots).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        Logging::Private::BasicLog<6>
                  (&`protected:_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::PrintKnotVector(void)const___ptr64'
                    ::__l24::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->FlatKnots).ArrayNum);
  }
  return;
}

// RemoveKnot @ 1435bfb40

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::RemoveKnot
          (TBSpline<UE::Math::TVector<double>,3> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if ((-1 < param_1) && (param_1 < (this->PairKnots).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = (this->PairKnots).ArrayNum + ~param_1;
    _Dst = (this->PairKnots).AllocatorInstance.Data + (longlong)param_1 * 8;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar5 << 3);
    }
    piVar1 = &(this->PairKnots).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&(this->PairKnots).AllocatorInstance,(this->PairKnots).ArrayNum,
               &(this->PairKnots).ArrayMax);
    this->bFlatKnotsCacheDirty = true;
    return true;
  }
  return false;
}

// RemoveValue @ 1435bfef0

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::RemoveValue
          (TBSpline<UE::Math::TVector<double>,3> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  
  if ((-1 < param_1) && (param_1 < (this->Values).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->Values).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar6 = (this->Values).ArrayNum + ~param_1;
    _Dst = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 0x18;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x18,(longlong)iVar6 * 0x18);
    }
    piVar1 = &(this->Values).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&(this->Values).AllocatorInstance,(this->Values).ArrayNum,
               &(this->Values).ArrayMax);
    return true;
  }
  return false;
}

// Reparameterize @ 1435bffd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Reparameterize
          (TBSpline<UE::Math::TVector<double>,3> *this,EParameterizationPolicy param_1)

{
  int iVar1;
  
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 < 4) {
    if (2 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Reparameterize(UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      return;
    }
  }
  else {
    iVar1 = iVar1 + 4;
    (this->PairKnots).ArrayNum = 0;
    if ((this->PairKnots).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->PairKnots).AllocatorInstance,0,&(this->PairKnots).ArrayMax);
    }
    if (param_1 == Uniform) {
      GenerateUniformKnots(this,iVar1);
    }
    else if (param_1 == ChordLength) {
      GenerateChordLengthKnots(this,iVar1);
    }
    else if (param_1 == Centripetal) {
      GenerateCentripetalKnots(this,iVar1);
    }
    this->bFlatKnotsCacheDirty = true;
    if (5 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<6>
                (&`public:_virtual_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Reparameterize(UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                  ::__l25::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
  }
  return;
}

// Serialize @ 1435c0ea0

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Serialize
          (TBSpline<UE::Math::TVector<double>,3> *this,FArchive *param_1)

{
  bool bVar1;
  
  bVar1 = TSplineInterface<UE::Math::TVector<double>_>::Serialize
                    ((TSplineInterface<UE::Math::TVector<double>_> *)this,param_1);
  if (!bVar1) {
    return false;
  }
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Values);
  TArrayPrivateFriend::Serialize<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>
            (param_1,&this->PairKnots);
  ::operator<<(param_1,&this->bIsClosedLoop);
  ::operator<<(param_1,&this->bClampEnds);
  this->bFlatKnotsCacheDirty = true;
  return true;
}

// SetClosedLoop @ 1435c1aa0

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetClosedLoop
          (TBSpline<UE::Math::TVector<double>,3> *this,bool param_1)

{
  this->bIsClosedLoop = param_1;
  return;
}

// SetKnot @ 1435c2560

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetKnot
          (TBSpline<UE::Math::TVector<double>,3> *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->PairKnots).ArrayNum)) {
    if (param_2 != *(float *)((this->PairKnots).AllocatorInstance.Data + (longlong)param_1 * 8)) {
      uVar3 = 0;
      if (param_1 < (this->PairKnots).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(float *)((this->PairKnots).AllocatorInstance.Data + (longlong)param_1 * 8) = param_2;
    }
  }
  return;
}

// SetParameter @ 1435c3230

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetParameter
          (TBSpline<UE::Math::TVector<double>,3> *this,int param_1,float param_2)

{
  if (2 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<3>
              (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetParameter(int,float)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  return -1;
}

// UpdateFlatKnotsCache @ 1435ca090

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::UpdateFlatKnotsCache
          (TBSpline<UE::Math::TVector<double>,3> *this)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  uint local_30;
  uint uStack_2c;
  
  if (this->bFlatKnotsCacheDirty != false) {
    pFVar8 = (this->PairKnots).AllocatorInstance.Data;
    iVar3 = (this->PairKnots).ArrayNum;
    local_38.Data = (FScriptContainerElement *)0x0;
    pFVar2 = pFVar8 + (longlong)iVar3 * 8;
    local_30 = 0;
    uStack_2c = 0;
    uVar7 = 0;
    while( true ) {
      if ((this->PairKnots).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::Spline::FKnot_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        uVar7 = local_30;
      }
      if (pFVar8 == pFVar2) break;
      uVar9 = 0;
      if (*(int *)(pFVar8 + 4) != 0) {
        do {
          uVar6 = uVar7;
          if (((local_38.Data <= pFVar8) && (pFVar8 < local_38.Data + (longlong)(int)uStack_2c * 4))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), uVar6 = local_30, bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar6 == uStack_2c) {
            uVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_38,(int *)&uStack_2c);
          }
          uVar7 = uVar6 + 1;
          uVar9 = uVar9 + 1;
          *(undefined4 *)(local_38.Data + (longlong)(int)uVar6 * 4) = *(undefined4 *)pFVar8;
          local_30 = uVar7;
        } while (uVar9 < *(uint *)(pFVar8 + 4));
      }
      pFVar8 = pFVar8 + 8;
    }
    pTVar1 = &this->FlatKnots;
    if (pTVar1 != (TArray<float,TSizedDefaultAllocator<32>_> *)&local_38) {
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
        uVar7 = local_30;
      }
      (pTVar1->AllocatorInstance).Data = local_38.Data;
      (this->FlatKnots).ArrayMax = uStack_2c;
      local_30 = 0;
      uStack_2c = 0;
      local_38.Data = (FScriptContainerElement *)0x0;
      (this->FlatKnots).ArrayNum = uVar7;
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    this->bFlatKnotsCacheDirty = false;
  }
  return;
}

// operator() @ 15049f7f0

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNumberOfSegments'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563305213>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563305213>,
                       &`public:___cdecl_`public:_virtual_int___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNumberOfSegments(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f830

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetSegmentParameterRange'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563305201>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563305201>,
                       &`public:___cdecl_`public:_virtual_struct_UE::Geometry::TInterval1<float>___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetSegmentParameterRange(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f870

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue'::__l3::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563304789>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304789>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<struct_UE::Math::TVector<double>,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f980

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue'::__l3::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563304788>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304788>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<struct_UE::Math::TVector<double>,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`3'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049fa10

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue'::__l49::
<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7309629674563304704>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304704>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<struct_UE::Math::TVector<double>,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`49'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049faa0

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue'::__l50::
<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7309629674563304673>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304673>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<struct_UE::Math::TVector<double>,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`50'::<lambda_4>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

