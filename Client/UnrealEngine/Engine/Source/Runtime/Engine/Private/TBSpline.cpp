// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 91

// TBSpline<float,3> @ 147a23850

TBSpline<float,3> * __thiscall
UE::Geometry::Spline::TBSpline<float,3>::TBSpline<float,3>(TBSpline<float,3> *this)

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
  
  TSplineInterface<float>::TSplineInterface<float>((TSplineInterface<float> *)this);
  this->_padding_ =
       (longlong)
       &___7__TSelfRegisteringSpline_V__TBSpline_M_02_Spline_Geometry_UE__M_Spline_Geometry_UE__6B_;
  if (`protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float>::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float>(void)___ptr64'
      ::__l2::bRegistered == false) {
    `protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float>::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float>(void)___ptr64'
    ::__l2::bRegistered = true;
    puVar2 = GetStaticTypeId();
    uVar1 = *puVar2;
    ::FString::FString(&local_48,L"BSpline3");
    _Src = TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance;
    lVar3 = (longlong)TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<float>::Name.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
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
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TBSpline_M_02_Spline_Geometry_UE__U__TDefaultDelete_V__TBSpline_M_02_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `UE::Geometry::Spline::
               TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float>::RegisterType'
               ::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TBSpline<float,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<float,3>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
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
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__Spline__TSplineInterface<float>__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float>__
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

// TBSpline<UE::Math::TQuat<double>,3> @ 147a239e0

TBSpline<UE::Math::TQuat<double>,3> * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::TBSpline<UE::Math::TQuat<double>,3>
          (TBSpline<UE::Math::TQuat<double>,3> *this)

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
  
  TSplineInterface<UE::Math::TQuat<double>_>::TSplineInterface<UE::Math::TQuat<double>_>
            ((TSplineInterface<UE::Math::TQuat<double>_> *)this);
  this->_padding_ =
       (longlong)
       &
       ___7__TSelfRegisteringSpline_V__TBSpline_U__TQuat_N_Math_UE___02_Spline_Geometry_UE__U__TQuat_N_Math_4__Spline_Geometry_UE__6B_
  ;
  if (`protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>(void)___ptr64'
      ::__l2::bRegistered == false) {
    `protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>(void)___ptr64'
    ::__l2::bRegistered = true;
    puVar2 = GetStaticTypeId();
    uVar1 = *puVar2;
    ::FString::FString(&local_48,L"BSpline3");
    _Src = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.AllocatorInstance;
    lVar3 = (longlong)TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
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
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TBSpline_U__TQuat_N_Math_UE___02_Spline_Geometry_UE__U__TDefaultDelete_V__TBSpline_U__TQuat_N_Math_UE___02_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `UE::Geometry::Spline::
               TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>
               ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
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
       (longlong)&_vftable__for__UE__Geometry__Spline__TSplineInterface<UE::Math::TQuat<double>_>__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>__
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

// ~TBSpline<float,3> @ 147a28660

void __thiscall UE::Geometry::Spline::TBSpline<float,3>::~TBSpline<float,3>(TBSpline<float,3> *this)

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

// ~TBSpline<UE::Math::TQuat<double>,3> @ 147a286b0

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::~TBSpline<UE::Math::TQuat<double>,3>
          (TBSpline<UE::Math::TQuat<double>,3> *this)

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

// operator== @ 147a2c260

bool __thiscall
UE::Geometry::Spline::TBSpline<float,3>::operator==
          (TBSpline<float,3> *this,TBSpline<float,3> *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (this->Values).ArrayNum;
  if (iVar2 == (param_1->Values).ArrayNum) {
    if ((iVar2 != 0) &&
       (iVar2 = memcmp((this->Values).AllocatorInstance.Data,
                       (param_1->Values).AllocatorInstance.Data,(longlong)iVar2 << 2), iVar2 != 0))
    {
      return false;
    }
    iVar2 = (this->PairKnots).ArrayNum;
    if ((((iVar2 == (param_1->PairKnots).ArrayNum) &&
         (bVar1 = CompareItems<UE::Geometry::Spline::FKnot,int>
                            ((FKnot *)(this->PairKnots).AllocatorInstance.Data,
                             (FKnot *)(param_1->PairKnots).AllocatorInstance.Data,iVar2), bVar1)) &&
        (this->bIsClosedLoop == param_1->bIsClosedLoop)) &&
       (this->bClampEnds == param_1->bClampEnds)) {
      return true;
    }
  }
  return false;
}

// operator== @ 147a2c2f0

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::operator==
          (TBSpline<UE::Math::TQuat<double>,3> *this,TBSpline<UE::Math::TQuat<double>,3> *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 == (param_1->Values).ArrayNum) {
    bVar2 = CompareItems<UE::Math::TQuat<double>,int>
                      ((TQuat<double> *)(this->Values).AllocatorInstance.Data,
                       (TQuat<double> *)(param_1->Values).AllocatorInstance.Data,iVar1);
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

// AddValue @ 147a316a0

int __thiscall
UE::Geometry::Spline::TBSpline<float,3>::AddValue(TBSpline<float,3> *this,float *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->Values;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Values).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = (this->Values).ArrayNum;
  piVar2 = &(this->Values).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  (this->Values).ArrayNum = iVar6 + 1;
  *(float *)(pFVar3 + (longlong)iVar6 * 4) = *param_1;
  return iVar6;
}

// AddValue @ 147a31750

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::AddValue
          (TBSpline<UE::Math::TQuat<double>,3> *this,TQuat<double> *param_1)

{
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TQuat<double> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  
  pTVar1 = &this->Values;
  pTVar4 = (TQuat<double> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar4 <= param_1) && (param_1 < pTVar4 + (this->Values).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      iVar9 = (*pcVar6)();
      return iVar9;
    }
  }
  iVar9 = (this->Values).ArrayNum;
  piVar2 = &(this->Values).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1020,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Values).ArrayNum = iVar9 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  dVar7 = param_1->Y;
  pFVar3 = pFVar5 + (longlong)iVar9 * 0x20;
  *(double *)pFVar3 = param_1->X;
  *(double *)(pFVar3 + 8) = dVar7;
  dVar7 = param_1->W;
  pFVar5 = pFVar5 + (longlong)iVar9 * 0x20 + 0x10;
  *(double *)pFVar5 = param_1->Z;
  *(double *)(pFVar5 + 8) = dVar7;
  return iVar9;
}

// Clear @ 147a376a0

void __thiscall UE::Geometry::Spline::TBSpline<float,3>::Clear(TBSpline<float,3> *this)

{
  int *piVar1;
  
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PairKnots).ArrayMax;
  (this->PairKnots).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PairKnots).AllocatorInstance,0,piVar1);
  }
  return;
}

// Clear @ 147a37720

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::Clear
          (TBSpline<UE::Math::TQuat<double>,3> *this)

{
  int *piVar1;
  
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PairKnots).ArrayMax;
  (this->PairKnots).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PairKnots).AllocatorInstance,0,piVar1);
  }
  return;
}

// Clone @ 147a37980

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall UE::Geometry::Spline::TBSpline<float,3>::Clone(TBSpline<float,3> *this)

{
  TBSpline<float,3> *this_00;
  ISplineInterface IVar1;
  ISplineInterface *in_RDX;
  
  this_00 = ::operator_new(0x50);
  if (this_00 == (TBSpline<float,3> *)0x0) {
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
    IVar1 = (ISplineInterface)TBSpline<float,3>(this_00);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)IVar1 + 0x18),&this->Values);
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

// Clone @ 147a37a20

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::Clone
          (TBSpline<UE::Math::TQuat<double>,3> *this)

{
  TBSpline<UE::Math::TQuat<double>,3> *this_00;
  ISplineInterface IVar1;
  ISplineInterface *in_RDX;
  
  this_00 = ::operator_new(0x50);
  if (this_00 == (TBSpline<UE::Math::TQuat<double>,3> *)0x0) {
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
    IVar1 = (ISplineInterface)TBSpline<UE::Math::TQuat<double>,3>(this_00);
  }
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)((longlong)IVar1 + 0x18)
             ,&this->Values);
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

// Dump @ 147a3fb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Geometry::Spline::TBSpline<float,3>::Dump(TBSpline<float,3> *this)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  if (5 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_void___cdecl_UE::Geometry::Spline::TBSpline<float,3>::Dump(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  uVar5 = 0;
  bVar3 = Spline::LogSpline._0_1_;
  if (0 < (this->Values).ArrayNum) {
    do {
      if (5 < bVar3) {
        uVar4 = 0;
        if ((int)uVar5 < (this->Values).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
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
                  (&`public:_void___cdecl_UE::Geometry::Spline::TBSpline<float,3>::Dump(void)const___ptr64'
                    ::__l25::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
        bVar3 = Spline::LogSpline._0_1_;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->Values).ArrayNum);
  }
  if (5 < bVar3) {
    Logging::Private::BasicLog<6>
              (&`public:_void___cdecl_UE::Geometry::Spline::TBSpline<float,3>::Dump(void)const___ptr64'
                ::__l44::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  PrintKnotVector(this);
  return;
}

// Dump @ 147a3fc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::Dump
          (TBSpline<UE::Math::TQuat<double>,3> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString local_18;
  
  if (5 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::Dump(void)const___ptr64'
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
        ::FString::PrintfImpl(&local_18,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
        Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::Dump(void)const___ptr64'
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
              (&`public:_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::Dump(void)const___ptr64'
                ::__l46::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  PrintKnotVector(this);
  return;
}

// EvaluateImpl @ 147a42e00

float __thiscall
UE::Geometry::Spline::TBSpline<float,3>::EvaluateImpl(TBSpline<float,3> *this,float param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  longlong *local_48;
  undefined4 uStack_40;
  longlong local_38 [6];
  
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pfVar2 = GetValue(this,0);
      return *pfVar2;
    }
    (**(code **)(this->_padding_ + 200))(this,local_38,param_1);
    if (local_38[0] != 0) {
      local_48 = local_38;
      uStack_40 = 4;
      fVar3 = (float)(**(code **)(this->_padding_ + 0xd0))(this,&local_48,param_1);
      return fVar3;
    }
  }
  return 0.0;
}

// EvaluateImpl @ 147a42ea0

TQuat<double> * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::EvaluateImpl
          (TBSpline<UE::Math::TQuat<double>,3> *this,TQuat<double> *__return_storage_ptr__,
          float param_1)

{
  int iVar1;
  double dVar2;
  TQuat<double> *pTVar3;
  longlong *local_48;
  undefined4 uStack_40;
  longlong local_38 [6];
  
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pTVar3 = GetValue(this,0);
      dVar2 = pTVar3->Y;
      __return_storage_ptr__->X = pTVar3->X;
      __return_storage_ptr__->Y = dVar2;
      dVar2 = pTVar3->W;
      __return_storage_ptr__->Z = pTVar3->Z;
      __return_storage_ptr__->W = dVar2;
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
  __return_storage_ptr__->X = 0.0;
  __return_storage_ptr__->Y = 0.0;
  __return_storage_ptr__->Z = 0.0;
  __return_storage_ptr__->W = 0.0;
  return __return_storage_ptr__;
}

// FindIndexForParameter @ 147a44940

int __thiscall
UE::Geometry::Spline::TBSpline<float,3>::FindIndexForParameter
          (TBSpline<float,3> *this,float param_1,float *param_2)

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

// FindIndexForParameter @ 147a44bc0

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::FindIndexForParameter
          (TBSpline<UE::Math::TQuat<double>,3> *this,float param_1,float *param_2)

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

// FindKnotSpan @ 147a458f0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TBSpline<float,3>::FindKnotSpan(TBSpline<float,3> *this,float param_1)

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
                    (&`private:_int___cdecl_UE::Geometry::Spline::TBSpline<float,3>::FindKnotSpan(float)const___ptr64'
                      ::__l42::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
        }
      }
      return 3;
    }
    if (1 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<2>
                (&`private:_int___cdecl_UE::Geometry::Spline::TBSpline<float,3>::FindKnotSpan(float)const___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
  }
  return 0;
}

// FindKnotSpan @ 147a45bc0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::FindKnotSpan
          (TBSpline<UE::Math::TQuat<double>,3> *this,float param_1)

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
                    (&`private:_int___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::FindKnotSpan(float)const___ptr64'
                      ::__l42::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
        }
      }
      return 3;
    }
    if (1 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<2>
                (&`private:_int___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::FindKnotSpan(float)const___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
  }
  return 0;
}

// FindNearest @ 147a45e90

float __thiscall
UE::Geometry::Spline::TBSpline<float,3>::FindNearest
          (TBSpline<float,3> *this,float *param_1,float *param_2)

{
  return 0.0;
}

// FindNearest @ 147a45ea0

float __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::FindNearest
          (TBSpline<UE::Math::TQuat<double>,3> *this,TQuat<double> *param_1,float *param_2)

{
  return 0.0;
}

// FindWindow @ 147a47e80

TStaticArray<float_const_*,4,4294967295> * __thiscall
UE::Geometry::Spline::TBSpline<float,3>::FindWindow
          (TBSpline<float,3> *this,TStaticArray<float_const_*,4,4294967295> *__return_storage_ptr__,
          float param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TStaticArray<float_const_*,4,4294967295> *pTVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  
  __return_storage_ptr__->Elements[0] = (float *)0x0;
  __return_storage_ptr__->Elements[1] = (float *)0x0;
  __return_storage_ptr__->Elements[2] = (float *)0x0;
  __return_storage_ptr__->Elements[3] = (float *)0x0;
  if (3 < (this->Values).ArrayNum) {
    iVar6 = FindKnotSpan(this,param_1);
    iVar1 = iVar6 + -3;
    cVar4 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar4 == '\0') {
      if ((-1 < iVar1) && (iVar1 < (this->Values).ArrayNum)) {
        pfVar8 = GetValue(this,iVar1);
        __return_storage_ptr__->Elements[0] = pfVar8;
      }
      iVar1 = iVar6 + -2;
      if ((-1 < iVar1) && (iVar1 < (this->Values).ArrayNum)) {
        pfVar8 = GetValue(this,iVar1);
        __return_storage_ptr__->Elements[1] = pfVar8;
      }
      iVar1 = iVar6 + -1;
      if ((-1 < iVar1) && (iVar1 < (this->Values).ArrayNum)) {
        pfVar8 = GetValue(this,iVar1);
        __return_storage_ptr__->Elements[2] = pfVar8;
      }
      if ((-1 < iVar6) && (iVar6 < (this->Values).ArrayNum)) {
        pfVar8 = GetValue(this,iVar6);
        __return_storage_ptr__->Elements[3] = pfVar8;
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
        pTVar7 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->Elements[0] =
           (float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
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
        pTVar7 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->Elements[1] =
           (float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
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
        pTVar7 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->Elements[2] =
           (float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
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
        pTVar7 = (TStaticArray<float_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->Elements[3] =
           (float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
    }
  }
  return __return_storage_ptr__;
}

// FindWindow @ 147a48100

TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::FindWindow
          (TBSpline<UE::Math::TQuat<double>,3> *this,
          TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *__return_storage_ptr__,
          float param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *pTVar7;
  TQuat<double> *pTVar8;
  uint uVar9;
  uint uVar10;
  
  __return_storage_ptr__->Elements[0] = (TQuat<double> *)0x0;
  __return_storage_ptr__->Elements[1] = (TQuat<double> *)0x0;
  __return_storage_ptr__->Elements[2] = (TQuat<double> *)0x0;
  __return_storage_ptr__->Elements[3] = (TQuat<double> *)0x0;
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
      if (iVar6 < 0) {
        return __return_storage_ptr__;
      }
      if ((this->Values).ArrayNum <= iVar6) {
        return __return_storage_ptr__;
      }
      pTVar8 = GetValue(this,iVar6);
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
        pTVar7 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->Elements[0] =
           (TQuat<double> *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
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
        pTVar7 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->Elements[1] =
           (TQuat<double> *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
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
        pTVar7 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->Elements[2] =
           (TQuat<double> *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
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
        pTVar7 = (TStaticArray<UE::Math::TQuat<double>_const_*,4,4294967295> *)(*pcVar3)();
        return pTVar7;
      }
      pTVar8 = (TQuat<double> *)
               ((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
    }
    __return_storage_ptr__->Elements[3] = pTVar8;
  }
  return __return_storage_ptr__;
}

// GenerateCentripetalKnots @ 147a49ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<float,3>::GenerateCentripetalKnots
          (TBSpline<float,3> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  ForAnyElementType FVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
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
  
  iVar9 = (this->Values).ArrayNum;
  if (iVar9 < 2) {
    GenerateUniformKnots(this,param_1);
    return;
  }
  cVar7 = (**(code **)(this->_padding_ + 0x40))();
  local_res8 = param_1;
  if (cVar7 != '\0') {
    local_res8 = iVar9 + 7;
  }
  piVar1 = &(this->PairKnots).ArrayMax;
  iVar15 = 0;
  (this->PairKnots).ArrayNum = 0;
  if ((this->PairKnots).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PairKnots).AllocatorInstance,0,piVar1);
  }
  uVar16 = (this->Values).ArrayNum - 1;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iStack_ec = 0;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (0 < (int)uVar16) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&local_f8,0,&iStack_ec);
  }
  uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar12 = (this->Values).ArrayNum;
  uVar13 = 1;
  fVar20 = 0.0;
  fVar19 = 0.0;
  if (1 < iVar12) {
    lVar17 = 4;
    do {
      uVar14 = 0;
      if ((int)(uVar13 - 1) < iVar12) {
        uVar14 = -uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Values).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)uVar13 < (this->Values).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_e8 = SQRT((float)((uint)(*(float *)(pFVar2 + lVar17 + -4) -
                                    *(float *)((this->Values).AllocatorInstance.Data + lVar17)) &
                             uVar16));
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < local_f8.Data + (longlong)iStack_ec * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_f8,&iStack_ec);
      }
      lVar11 = (longlong)local_f0;
      uVar13 = uVar13 + 1;
      lVar17 = lVar17 + 4;
      local_f0 = local_f0 + 1;
      *(float *)(local_f8.Data + lVar11 * 4) = local_e8;
      iVar12 = (this->Values).ArrayNum;
      fVar19 = fVar19 + local_e8;
    } while ((int)uVar13 < iVar12);
  }
  cVar7 = (**(code **)(this->_padding_ + 0x40))(this);
  uVar13 = 0;
  if ((cVar7 != '\0') && (iVar12 = (this->Values).ArrayNum, 0 < iVar12)) {
    uVar14 = uVar13;
    if ((int)(iVar12 - 1U) < iVar12) {
      uVar14 = ~(iVar12 - 1U) >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar12 = (this->Values).ArrayNum;
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((iVar12 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_e4 = SQRT((float)((uint)(*(float *)(pFVar2 + (longlong)iVar12 * 4 + -4) -
                                  *(float *)(this->Values).AllocatorInstance.Data) & uVar16));
    if (((local_f8.Data <= (FScriptContainerElement *)&local_e4) &&
        ((FScriptContainerElement *)&local_e4 < local_f8.Data + (longlong)iStack_ec * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_f0 == iStack_ec) {
      local_f0 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_f8,&iStack_ec);
    }
    *(float *)(local_f8.Data + (longlong)local_f0 * 4) = local_e4;
    fVar19 = fVar19 + local_e4;
    local_f0 = local_f0 + 1;
  }
  cVar7 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar7 == '\0') {
    if (this->bClampEnds == false) {
      if (0 < param_1) {
        fVar20 = __real_3f800000 / (float)(param_1 + -1);
        do {
          pFVar2 = (this->PairKnots).AllocatorInstance.Data;
          uStack_ac = 1;
          local_b0 = (float)iVar15 * fVar20 * fVar19;
          if (((pFVar2 <= (FScriptContainerElement *)&local_b0) &&
              ((FScriptContainerElement *)&local_b0 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (this->PairKnots).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          iVar15 = iVar15 + 1;
          (this->PairKnots).ArrayNum = iVar9 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar9 * 8) =
               CONCAT44(uStack_ac,local_b0);
        } while (iVar15 < param_1);
      }
    }
    else {
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      local_c8 = 0;
      uStack_c4 = 4;
      if (((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (this->PairKnots).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      fVar5 = __real_3f800000;
      (this->PairKnots).ArrayNum = iVar9 + 1;
      local_a8 = param_1 + -8;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar9 * 8) =
           CONCAT44(uStack_c4,local_c8);
      if (0 < local_a8) {
        local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.ArrayNum = 0;
        local_e0.ArrayMax = 0;
        TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_e0,(this->Values).ArrayNum,Default)
        ;
        if ((local_e0.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar16 = 1;
        *(undefined4 *)local_e0.AllocatorInstance.Data = 0;
        fVar4 = __real_322bcc77;
        if (1 < (this->Values).ArrayNum) {
          lVar17 = 4;
          do {
            uVar14 = uVar13;
            if ((int)(uVar16 - 1) < local_f0) {
              uVar14 = -uVar16 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar20 = fVar20 + *(float *)(local_f8.Data + lVar17 + -4);
            if (fVar19 <= fVar4) {
              fVar18 = (float)(int)uVar16 / (float)((this->Values).ArrayNum + -1);
            }
            else {
              fVar18 = fVar20 / fVar19;
            }
            uVar14 = uVar13;
            if ((int)uVar16 < local_e0.ArrayNum) {
              uVar14 = ~uVar16 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar16 = uVar16 + 1;
            *(float *)(local_e0.AllocatorInstance.Data + lVar17) = fVar18;
            lVar17 = lVar17 + 4;
          } while ((int)uVar16 < (this->Values).ArrayNum);
        }
        fVar19 = __real_3f000000;
        do {
          iVar15 = iVar15 + 1;
          iVar9 = (this->Values).ArrayNum;
          uVar16 = iVar9 - 1;
          fVar20 = (float)iVar15 * (fVar5 / (float)(param_1 + -7));
          uVar14 = (int)ROUND((fVar20 + fVar20) * (float)(int)uVar16 - fVar19) >> 1;
          if ((int)(uVar14 + 1) < (int)uVar16) {
            uVar16 = uVar14 + 1;
          }
          uVar10 = uVar13;
          if ((int)uVar16 < local_e0.ArrayNum) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FVar6.Data = local_e0.AllocatorInstance.Data;
          uVar10 = uVar13;
          if ((int)uVar14 < local_e0.ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_bc = 1;
          pFVar2 = (this->PairKnots).AllocatorInstance.Data;
          local_c0 = (float)(int)(~uVar14 + iVar9) * fVar20 *
                     (*(float *)(FVar6.Data + (longlong)(int)uVar16 * 4) -
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar14 * 4)) +
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
          if (((pFVar2 <= (FScriptContainerElement *)&local_c0) &&
              ((FScriptContainerElement *)&local_c0 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (this->PairKnots).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          (this->PairKnots).ArrayNum = iVar9 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar9 * 8) =
               CONCAT44(uStack_bc,local_c0);
        } while (iVar15 < local_a8);
        if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.AllocatorInstance.Data);
        }
      }
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      local_b8 = 0x3f800000;
      uStack_b4 = 4;
      if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (this->PairKnots).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      (this->PairKnots).ArrayNum = iVar9 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar9 * 8) =
           CONCAT44(uStack_b4,local_b8);
    }
  }
  else if (0 < local_res8) {
    fVar20 = __real_3f800000 / (float)(iVar9 + 3);
    do {
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      uStack_cc = 1;
      local_d0 = (float)iVar15 * fVar19 * fVar20;
      if (((pFVar2 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (this->PairKnots).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      iVar15 = iVar15 + 1;
      (this->PairKnots).ArrayNum = iVar9 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar9 * 8) =
           CONCAT44(uStack_cc,local_d0);
    } while (iVar15 < local_res8);
  }
  this->bFlatKnotsCacheDirty = true;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// GenerateCentripetalKnots @ 147a4aa20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GenerateCentripetalKnots
          (TBSpline<UE::Math::TQuat<double>,3> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  float fVar8;
  float fVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  FScriptContainerElement *local_a8;
  
  iVar12 = (this->Values).ArrayNum;
  if (iVar12 < 2) {
    GenerateUniformKnots(this,param_1);
    return;
  }
  cVar10 = (**(code **)(this->_padding_ + 0x40))();
  local_res8 = param_1;
  if (cVar10 != '\0') {
    local_res8 = iVar12 + 7;
  }
  piVar1 = &(this->PairKnots).ArrayMax;
  iVar18 = 0;
  (this->PairKnots).ArrayNum = 0;
  if ((this->PairKnots).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PairKnots).AllocatorInstance,0,piVar1);
  }
  uVar19 = (this->Values).ArrayNum - 1;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iStack_ec = 0;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (0 < (int)uVar19) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&local_f8,0,&iStack_ec);
  }
  iVar15 = (this->Values).ArrayNum;
  uVar19 = 1;
  fVar34 = 0.0;
  fVar33 = 0.0;
  if (1 < iVar15) {
    lVar20 = 0x20;
    do {
      uVar16 = 0;
      if ((int)(uVar19 - 1) < iVar15) {
        uVar16 = -uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->Values).AllocatorInstance.Data;
      uVar16 = 0;
      if ((int)uVar19 < (this->Values).ArrayNum) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->Values).AllocatorInstance.Data;
      pFVar2 = pFVar4 + lVar20 + -0x10;
      pFVar4 = pFVar4 + lVar20 + -0x20;
      pFVar3 = pFVar5 + lVar20 + 0x10;
      dVar21 = *(double *)pFVar2 - *(double *)pFVar3;
      dVar24 = *(double *)(pFVar2 + 8) - *(double *)(pFVar3 + 8);
      pFVar5 = pFVar5 + lVar20;
      dVar30 = *(double *)pFVar4 - *(double *)pFVar5;
      dVar31 = *(double *)(pFVar4 + 8) - *(double *)(pFVar5 + 8);
      auVar25._8_4_ = SUB84(dVar24,0);
      auVar25._0_8_ = dVar21;
      auVar25._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      auVar26._8_8_ = auVar25._8_8_;
      auVar7._4_8_ = dVar24;
      auVar7._0_4_ = (int)((ulonglong)dVar30 >> 0x20);
      auVar27._0_8_ = auVar7._0_8_ << 0x20;
      auVar27._8_4_ = SUB84(dVar31,0);
      auVar27._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar26._0_8_ =
           dVar21 * dVar21 + dVar24 * dVar24 + auVar27._8_8_ * auVar27._8_8_ + dVar30 * dVar30;
      auVar22._0_8_ = SQRT(auVar26._0_8_);
      auVar22._8_8_ = 0;
      auVar27 = sqrtpd(auVar26,auVar22);
      local_e8 = (float)auVar27._0_8_;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < local_f8.Data + (longlong)iStack_ec * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_f8,&iStack_ec);
      }
      lVar14 = (longlong)local_f0;
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 0x20;
      local_f0 = local_f0 + 1;
      *(float *)(local_f8.Data + lVar14 * 4) = local_e8;
      iVar15 = (this->Values).ArrayNum;
      fVar33 = fVar33 + local_e8;
    } while ((int)uVar19 < iVar15);
  }
  cVar10 = (**(code **)(this->_padding_ + 0x40))(this);
  uVar19 = 0;
  if ((cVar10 != '\0') && (iVar15 = (this->Values).ArrayNum, 0 < iVar15)) {
    uVar16 = uVar19;
    if ((int)(iVar15 - 1U) < iVar15) {
      uVar16 = ~(iVar15 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar15 = (this->Values).ArrayNum;
    pFVar4 = (this->Values).AllocatorInstance.Data;
    lVar20 = (longlong)iVar15 * 0x20;
    if ((iVar15 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar2 = (this->Values).AllocatorInstance.Data;
    pFVar5 = pFVar4 + lVar20 + -0x20;
    pFVar4 = pFVar4 + lVar20 + -0x10;
    dVar21 = *(double *)pFVar5 - *(double *)pFVar2;
    dVar24 = *(double *)(pFVar5 + 8) - *(double *)(pFVar2 + 8);
    dVar30 = *(double *)pFVar4 - *(double *)(pFVar2 + 0x10);
    dVar31 = *(double *)(pFVar4 + 8) - *(double *)(pFVar2 + 0x18);
    auVar28._8_4_ = SUB84(dVar24,0);
    auVar28._0_8_ = dVar21;
    auVar28._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    auVar29._8_8_ = auVar28._8_8_;
    auVar29._0_8_ = dVar21 * dVar21 + dVar24 * dVar24 + dVar30 * dVar30 + dVar31 * dVar31;
    auVar23._0_8_ = SQRT(auVar29._0_8_);
    auVar23._8_8_ = 0;
    auVar27 = sqrtpd(auVar29,auVar23);
    local_e4 = (float)auVar27._0_8_;
    if (((local_f8.Data <= (FScriptContainerElement *)&local_e4) &&
        ((FScriptContainerElement *)&local_e4 < local_f8.Data + (longlong)iStack_ec * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_f0 == iStack_ec) {
      local_f0 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_f8,&iStack_ec);
    }
    *(float *)(local_f8.Data + (longlong)local_f0 * 4) = local_e4;
    fVar33 = fVar33 + local_e4;
    local_f0 = local_f0 + 1;
  }
  cVar10 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar10 == '\0') {
    if (this->bClampEnds == false) {
      if (0 < param_1) {
        fVar34 = __real_3f800000 / (float)(param_1 + -1);
        do {
          pFVar4 = (this->PairKnots).AllocatorInstance.Data;
          uStack_ac = 1;
          local_b0 = (float)iVar18 * fVar34 * fVar33;
          if (((pFVar4 <= (FScriptContainerElement *)&local_b0) &&
              ((FScriptContainerElement *)&local_b0 < pFVar4 + (longlong)*piVar1 * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = (this->PairKnots).ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          iVar18 = iVar18 + 1;
          (this->PairKnots).ArrayNum = iVar12 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar12 * 8) =
               CONCAT44(uStack_ac,local_b0);
        } while (iVar18 < param_1);
      }
    }
    else {
      pFVar4 = (this->PairKnots).AllocatorInstance.Data;
      local_c8 = 0;
      uStack_c4 = 4;
      if (((pFVar4 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->PairKnots).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      fVar9 = __real_3f800000;
      (this->PairKnots).ArrayNum = iVar12 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           CONCAT44(uStack_c4,local_c8);
      if (0 < param_1 + -8) {
        local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.ArrayNum = 0;
        local_e0.ArrayMax = 0;
        TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_e0,(this->Values).ArrayNum,Default)
        ;
        if ((local_e0.ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = 1;
        *(undefined4 *)local_e0.AllocatorInstance.Data = 0;
        fVar8 = __real_322bcc77;
        if (1 < (this->Values).ArrayNum) {
          lVar20 = 4;
          do {
            uVar17 = uVar19;
            if ((int)(uVar16 - 1) < local_f0) {
              uVar17 = -uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar34 = fVar34 + *(float *)(local_f8.Data + lVar20 + -4);
            if (fVar33 <= fVar8) {
              fVar32 = (float)(int)uVar16 / (float)((this->Values).ArrayNum + -1);
            }
            else {
              fVar32 = fVar34 / fVar33;
            }
            uVar17 = uVar19;
            if ((int)uVar16 < local_e0.ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar16 = uVar16 + 1;
            *(float *)(local_e0.AllocatorInstance.Data + lVar20) = fVar32;
            lVar20 = lVar20 + 4;
          } while ((int)uVar16 < (this->Values).ArrayNum);
        }
        fVar33 = __real_3f000000;
        do {
          iVar18 = iVar18 + 1;
          iVar12 = (this->Values).ArrayNum;
          uVar16 = iVar12 - 1;
          fVar34 = (float)iVar18 * (fVar9 / (float)(param_1 + -7));
          uVar17 = (int)ROUND((fVar34 + fVar34) * (float)(int)uVar16 - fVar33) >> 1;
          if ((int)(uVar17 + 1) < (int)uVar16) {
            uVar16 = uVar17 + 1;
          }
          uVar13 = uVar19;
          if ((int)uVar16 < local_e0.ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          local_a8 = local_e0.AllocatorInstance.Data;
          uVar13 = uVar19;
          if ((int)uVar17 < local_e0.ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uStack_bc = 1;
          pFVar4 = (this->PairKnots).AllocatorInstance.Data;
          local_c0 = (float)(int)(iVar12 + ~uVar17) * fVar34 *
                     (*(float *)(local_a8 + (longlong)(int)uVar16 * 4) -
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar17 * 4)) +
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
          if (((pFVar4 <= (FScriptContainerElement *)&local_c0) &&
              ((FScriptContainerElement *)&local_c0 < pFVar4 + (longlong)*piVar1 * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = (this->PairKnots).ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          (this->PairKnots).ArrayNum = iVar12 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar12 * 8) =
               CONCAT44(uStack_bc,local_c0);
        } while (iVar18 < param_1 + -8);
        if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.AllocatorInstance.Data);
        }
      }
      pFVar4 = (this->PairKnots).AllocatorInstance.Data;
      local_b8 = 0x3f800000;
      uStack_b4 = 4;
      if (((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->PairKnots).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      (this->PairKnots).ArrayNum = iVar12 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           CONCAT44(uStack_b4,local_b8);
    }
  }
  else if (0 < local_res8) {
    fVar34 = __real_3f800000 / (float)(iVar12 + 3);
    do {
      pFVar4 = (this->PairKnots).AllocatorInstance.Data;
      uStack_cc = 1;
      local_d0 = (float)iVar18 * fVar33 * fVar34;
      if (((pFVar4 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->PairKnots).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      iVar18 = iVar18 + 1;
      (this->PairKnots).ArrayNum = iVar12 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           CONCAT44(uStack_cc,local_d0);
    } while (iVar18 < local_res8);
  }
  this->bFlatKnotsCacheDirty = true;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// GenerateChordLengthKnots @ 147a4b5f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<float,3>::GenerateChordLengthKnots
          (TBSpline<float,3> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  ForAnyElementType FVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
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
  
  iVar9 = (this->Values).ArrayNum;
  if (iVar9 < 2) {
    GenerateUniformKnots(this,param_1);
    return;
  }
  cVar7 = (**(code **)(this->_padding_ + 0x40))();
  local_res8 = param_1;
  if (cVar7 != '\0') {
    local_res8 = iVar9 + 7;
  }
  piVar1 = &(this->PairKnots).ArrayMax;
  iVar15 = 0;
  (this->PairKnots).ArrayNum = 0;
  if ((this->PairKnots).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PairKnots).AllocatorInstance,0,piVar1);
  }
  uVar16 = (this->Values).ArrayNum - 1;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iStack_ec = 0;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (0 < (int)uVar16) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&local_f8,0,&iStack_ec);
  }
  uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar12 = (this->Values).ArrayNum;
  uVar13 = 1;
  fVar20 = 0.0;
  fVar19 = 0.0;
  if (1 < iVar12) {
    lVar17 = 4;
    do {
      uVar14 = 0;
      if ((int)(uVar13 - 1) < iVar12) {
        uVar14 = -uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Values).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)uVar13 < (this->Values).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_e8 = (float)((uint)(*(float *)(pFVar2 + lVar17 + -4) -
                               *(float *)((this->Values).AllocatorInstance.Data + lVar17)) & uVar16)
      ;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < local_f8.Data + (longlong)iStack_ec * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_f8,&iStack_ec);
      }
      lVar11 = (longlong)local_f0;
      uVar13 = uVar13 + 1;
      lVar17 = lVar17 + 4;
      local_f0 = local_f0 + 1;
      *(float *)(local_f8.Data + lVar11 * 4) = local_e8;
      iVar12 = (this->Values).ArrayNum;
      fVar19 = fVar19 + local_e8;
    } while ((int)uVar13 < iVar12);
  }
  cVar7 = (**(code **)(this->_padding_ + 0x40))(this);
  uVar13 = 0;
  if ((cVar7 != '\0') && (iVar12 = (this->Values).ArrayNum, 0 < iVar12)) {
    uVar14 = uVar13;
    if ((int)(iVar12 - 1U) < iVar12) {
      uVar14 = ~(iVar12 - 1U) >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar12 = (this->Values).ArrayNum;
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((iVar12 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_e4 = (float)((uint)(*(float *)(pFVar2 + (longlong)iVar12 * 4 + -4) -
                             *(float *)(this->Values).AllocatorInstance.Data) & uVar16);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_e4) &&
        ((FScriptContainerElement *)&local_e4 < local_f8.Data + (longlong)iStack_ec * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_f0 == iStack_ec) {
      local_f0 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_f8,&iStack_ec);
    }
    *(float *)(local_f8.Data + (longlong)local_f0 * 4) = local_e4;
    fVar19 = fVar19 + local_e4;
    local_f0 = local_f0 + 1;
  }
  cVar7 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar7 == '\0') {
    if (this->bClampEnds == false) {
      if (0 < param_1) {
        fVar20 = __real_3f800000 / (float)(param_1 + -1);
        do {
          pFVar2 = (this->PairKnots).AllocatorInstance.Data;
          uStack_ac = 1;
          local_b0 = (float)iVar15 * fVar20 * fVar19;
          if (((pFVar2 <= (FScriptContainerElement *)&local_b0) &&
              ((FScriptContainerElement *)&local_b0 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (this->PairKnots).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          iVar15 = iVar15 + 1;
          (this->PairKnots).ArrayNum = iVar9 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar9 * 8) =
               CONCAT44(uStack_ac,local_b0);
        } while (iVar15 < param_1);
      }
    }
    else {
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      local_c8 = 0;
      uStack_c4 = 4;
      if (((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (this->PairKnots).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      fVar5 = __real_3f800000;
      (this->PairKnots).ArrayNum = iVar9 + 1;
      local_a8 = param_1 + -8;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar9 * 8) =
           CONCAT44(uStack_c4,local_c8);
      if (0 < local_a8) {
        local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.ArrayNum = 0;
        local_e0.ArrayMax = 0;
        TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_e0,(this->Values).ArrayNum,Default)
        ;
        if ((local_e0.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar16 = 1;
        *(undefined4 *)local_e0.AllocatorInstance.Data = 0;
        fVar4 = __real_322bcc77;
        if (1 < (this->Values).ArrayNum) {
          lVar17 = 4;
          do {
            uVar14 = uVar13;
            if ((int)(uVar16 - 1) < local_f0) {
              uVar14 = -uVar16 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar20 = fVar20 + *(float *)(local_f8.Data + lVar17 + -4);
            if (fVar19 <= fVar4) {
              fVar18 = (float)(int)uVar16 / (float)((this->Values).ArrayNum + -1);
            }
            else {
              fVar18 = fVar20 / fVar19;
            }
            uVar14 = uVar13;
            if ((int)uVar16 < local_e0.ArrayNum) {
              uVar14 = ~uVar16 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar16 = uVar16 + 1;
            *(float *)(local_e0.AllocatorInstance.Data + lVar17) = fVar18;
            lVar17 = lVar17 + 4;
          } while ((int)uVar16 < (this->Values).ArrayNum);
        }
        fVar19 = __real_3f000000;
        do {
          iVar15 = iVar15 + 1;
          iVar9 = (this->Values).ArrayNum;
          uVar16 = iVar9 - 1;
          fVar20 = (float)iVar15 * (fVar5 / (float)(param_1 + -7));
          uVar14 = (int)ROUND((fVar20 + fVar20) * (float)(int)uVar16 - fVar19) >> 1;
          if ((int)(uVar14 + 1) < (int)uVar16) {
            uVar16 = uVar14 + 1;
          }
          uVar10 = uVar13;
          if ((int)uVar16 < local_e0.ArrayNum) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FVar6.Data = local_e0.AllocatorInstance.Data;
          uVar10 = uVar13;
          if ((int)uVar14 < local_e0.ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_bc = 1;
          pFVar2 = (this->PairKnots).AllocatorInstance.Data;
          local_c0 = (float)(int)(~uVar14 + iVar9) * fVar20 *
                     (*(float *)(FVar6.Data + (longlong)(int)uVar16 * 4) -
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar14 * 4)) +
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
          if (((pFVar2 <= (FScriptContainerElement *)&local_c0) &&
              ((FScriptContainerElement *)&local_c0 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (this->PairKnots).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          (this->PairKnots).ArrayNum = iVar9 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar9 * 8) =
               CONCAT44(uStack_bc,local_c0);
        } while (iVar15 < local_a8);
        if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.AllocatorInstance.Data);
        }
      }
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      local_b8 = 0x3f800000;
      uStack_b4 = 4;
      if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (this->PairKnots).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      (this->PairKnots).ArrayNum = iVar9 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar9 * 8) =
           CONCAT44(uStack_b4,local_b8);
    }
  }
  else if (0 < local_res8) {
    fVar20 = __real_3f800000 / (float)(iVar9 + 3);
    do {
      pFVar2 = (this->PairKnots).AllocatorInstance.Data;
      uStack_cc = 1;
      local_d0 = (float)iVar15 * fVar19 * fVar20;
      if (((pFVar2 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (this->PairKnots).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      iVar15 = iVar15 + 1;
      (this->PairKnots).ArrayNum = iVar9 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar9 * 8) =
           CONCAT44(uStack_cc,local_d0);
    } while (iVar15 < local_res8);
  }
  this->bFlatKnotsCacheDirty = true;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// GenerateChordLengthKnots @ 147a4c140

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GenerateChordLengthKnots
          (TBSpline<UE::Math::TQuat<double>,3> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  ForAnyElementType FVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
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
  
  iVar12 = (this->Values).ArrayNum;
  if (iVar12 < 2) {
    GenerateUniformKnots(this,param_1);
    return;
  }
  cVar10 = (**(code **)(this->_padding_ + 0x40))();
  local_res8 = param_1;
  if (cVar10 != '\0') {
    local_res8 = iVar12 + 7;
  }
  piVar1 = &(this->PairKnots).ArrayMax;
  iVar18 = 0;
  (this->PairKnots).ArrayNum = 0;
  if ((this->PairKnots).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PairKnots).AllocatorInstance,0,piVar1);
  }
  uVar19 = (this->Values).ArrayNum - 1;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iStack_ec = 0;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (0 < (int)uVar19) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&local_f8,0,&iStack_ec);
  }
  iVar15 = (this->Values).ArrayNum;
  uVar19 = 1;
  fVar27 = 0.0;
  fVar26 = 0.0;
  if (1 < iVar15) {
    lVar20 = 0x20;
    do {
      uVar16 = 0;
      if ((int)(uVar19 - 1) < iVar15) {
        uVar16 = -uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->Values).AllocatorInstance.Data;
      uVar16 = 0;
      if ((int)uVar19 < (this->Values).ArrayNum) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->Values).AllocatorInstance.Data;
      pFVar3 = pFVar4 + lVar20 + -0x20;
      pFVar4 = pFVar4 + lVar20 + -0x10;
      pFVar2 = pFVar5 + lVar20;
      dVar21 = *(double *)pFVar3 - *(double *)pFVar2;
      dVar22 = *(double *)(pFVar3 + 8) - *(double *)(pFVar2 + 8);
      pFVar5 = pFVar5 + lVar20 + 0x10;
      dVar23 = *(double *)pFVar4 - *(double *)pFVar5;
      dVar24 = *(double *)(pFVar4 + 8) - *(double *)(pFVar5 + 8);
      local_e8 = (float)SQRT(dVar21 * dVar21 + dVar22 * dVar22 + dVar23 * dVar23 + dVar24 * dVar24);
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < local_f8.Data + (longlong)iStack_ec * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_f8,&iStack_ec);
      }
      lVar14 = (longlong)local_f0;
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 0x20;
      local_f0 = local_f0 + 1;
      *(float *)(local_f8.Data + lVar14 * 4) = local_e8;
      iVar15 = (this->Values).ArrayNum;
      fVar26 = fVar26 + local_e8;
    } while ((int)uVar19 < iVar15);
  }
  cVar10 = (**(code **)(this->_padding_ + 0x40))(this);
  uVar19 = 0;
  if ((cVar10 != '\0') && (iVar15 = (this->Values).ArrayNum, 0 < iVar15)) {
    uVar16 = uVar19;
    if ((int)(iVar15 - 1U) < iVar15) {
      uVar16 = ~(iVar15 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar15 = (this->Values).ArrayNum;
    pFVar4 = (this->Values).AllocatorInstance.Data;
    lVar20 = (longlong)iVar15 * 0x20;
    if ((iVar15 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (this->Values).AllocatorInstance.Data;
    pFVar2 = pFVar4 + lVar20 + -0x20;
    pFVar4 = pFVar4 + lVar20 + -0x10;
    dVar21 = *(double *)pFVar2 - *(double *)pFVar3;
    dVar22 = *(double *)(pFVar2 + 8) - *(double *)(pFVar3 + 8);
    dVar23 = *(double *)pFVar4 - *(double *)(pFVar3 + 0x10);
    dVar24 = *(double *)(pFVar4 + 8) - *(double *)(pFVar3 + 0x18);
    local_e4 = (float)SQRT(dVar21 * dVar21 + dVar22 * dVar22 + dVar23 * dVar23 + dVar24 * dVar24);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_e4) &&
        ((FScriptContainerElement *)&local_e4 < local_f8.Data + (longlong)iStack_ec * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
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
  cVar10 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar10 == '\0') {
    if (this->bClampEnds == false) {
      if (0 < param_1) {
        fVar27 = __real_3f800000 / (float)(param_1 + -1);
        do {
          pFVar4 = (this->PairKnots).AllocatorInstance.Data;
          uStack_ac = 1;
          local_b0 = (float)iVar18 * fVar27 * fVar26;
          if (((pFVar4 <= (FScriptContainerElement *)&local_b0) &&
              ((FScriptContainerElement *)&local_b0 < pFVar4 + (longlong)*piVar1 * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = (this->PairKnots).ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          iVar18 = iVar18 + 1;
          (this->PairKnots).ArrayNum = iVar12 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar12 * 8) =
               CONCAT44(uStack_ac,local_b0);
        } while (iVar18 < param_1);
      }
    }
    else {
      pFVar4 = (this->PairKnots).AllocatorInstance.Data;
      local_c8 = 0;
      uStack_c4 = 4;
      if (((pFVar4 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->PairKnots).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      fVar8 = __real_3f800000;
      (this->PairKnots).ArrayNum = iVar12 + 1;
      local_a8 = param_1 + -8;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           CONCAT44(uStack_c4,local_c8);
      if (0 < local_a8) {
        local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.ArrayNum = 0;
        local_e0.ArrayMax = 0;
        TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_e0,(this->Values).ArrayNum,Default)
        ;
        if ((local_e0.ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = 1;
        *(undefined4 *)local_e0.AllocatorInstance.Data = 0;
        fVar7 = __real_322bcc77;
        if (1 < (this->Values).ArrayNum) {
          lVar20 = 4;
          do {
            uVar17 = uVar19;
            if ((int)(uVar16 - 1) < local_f0) {
              uVar17 = -uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar27 = fVar27 + *(float *)(local_f8.Data + lVar20 + -4);
            if (fVar26 <= fVar7) {
              fVar25 = (float)(int)uVar16 / (float)((this->Values).ArrayNum + -1);
            }
            else {
              fVar25 = fVar27 / fVar26;
            }
            uVar17 = uVar19;
            if ((int)uVar16 < local_e0.ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar16 = uVar16 + 1;
            *(float *)(local_e0.AllocatorInstance.Data + lVar20) = fVar25;
            lVar20 = lVar20 + 4;
          } while ((int)uVar16 < (this->Values).ArrayNum);
        }
        fVar26 = __real_3f000000;
        do {
          iVar18 = iVar18 + 1;
          iVar12 = (this->Values).ArrayNum;
          uVar16 = iVar12 - 1;
          fVar27 = (float)iVar18 * (fVar8 / (float)(param_1 + -7));
          uVar17 = (int)ROUND((fVar27 + fVar27) * (float)(int)uVar16 - fVar26) >> 1;
          if ((int)(uVar17 + 1) < (int)uVar16) {
            uVar16 = uVar17 + 1;
          }
          uVar13 = uVar19;
          if ((int)uVar16 < local_e0.ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          FVar9.Data = local_e0.AllocatorInstance.Data;
          uVar13 = uVar19;
          if ((int)uVar17 < local_e0.ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uStack_bc = 1;
          pFVar4 = (this->PairKnots).AllocatorInstance.Data;
          local_c0 = (float)(int)(~uVar17 + iVar12) * fVar27 *
                     (*(float *)(FVar9.Data + (longlong)(int)uVar16 * 4) -
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar17 * 4)) +
                     *(float *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
          if (((pFVar4 <= (FScriptContainerElement *)&local_c0) &&
              ((FScriptContainerElement *)&local_c0 < pFVar4 + (longlong)*piVar1 * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = (this->PairKnots).ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
          }
          (this->PairKnots).ArrayNum = iVar12 + 1;
          *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar12 * 8) =
               CONCAT44(uStack_bc,local_c0);
        } while (iVar18 < local_a8);
        if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.AllocatorInstance.Data);
        }
      }
      pFVar4 = (this->PairKnots).AllocatorInstance.Data;
      local_b8 = 0x3f800000;
      uStack_b4 = 4;
      if (((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->PairKnots).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      (this->PairKnots).ArrayNum = iVar12 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           CONCAT44(uStack_b4,local_b8);
    }
  }
  else if (0 < local_res8) {
    fVar27 = __real_3f800000 / (float)(iVar12 + 3);
    do {
      pFVar4 = (this->PairKnots).AllocatorInstance.Data;
      uStack_cc = 1;
      local_d0 = (float)iVar18 * fVar26 * fVar27;
      if (((pFVar4 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->PairKnots).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PairKnots).AllocatorInstance,piVar1);
      }
      iVar18 = iVar18 + 1;
      (this->PairKnots).ArrayNum = iVar12 + 1;
      *(ulonglong *)((this->PairKnots).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           CONCAT44(uStack_cc,local_d0);
    } while (iVar18 < local_res8);
  }
  this->bFlatKnotsCacheDirty = true;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// GenerateUniformKnots @ 147a4e010

void __thiscall
UE::Geometry::Spline::TBSpline<float,3>::GenerateUniformKnots(TBSpline<float,3> *this,int param_1)

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
LAB_147a4e17e:
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
            goto LAB_147a4e17e;
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

// GenerateUniformKnots @ 147a4e260

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GenerateUniformKnots
          (TBSpline<UE::Math::TQuat<double>,3> *this,int param_1)

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
LAB_147a4e3ce:
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
            goto LAB_147a4e3ce;
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

// GetExpectedNumKnots @ 147a50a10

int __thiscall UE::Geometry::Spline::TBSpline<float,3>::GetExpectedNumKnots(TBSpline<float,3> *this)

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

// GetExpectedNumKnots @ 147a50a40

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetExpectedNumKnots
          (TBSpline<UE::Math::TQuat<double>,3> *this)

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

// GetImplementationName @ 147a50ec0

FString * __thiscall
UE::Geometry::Spline::TBSpline<float,3>::GetImplementationName
          (TBSpline<float,3> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"BSpline3");
  return __return_storage_ptr__;
}

// GetImplementationName @ 147a50ef0

FString * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetImplementationName
          (TBSpline<UE::Math::TQuat<double>,3> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"BSpline3");
  return __return_storage_ptr__;
}

// GetNearestAvailableKnotValue @ 147a52e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue
          (TBSpline<float,3> *this,FValidKnotSearchParams *param_1)

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
      (bVar4 = `UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue'::__l3::
               <lambda_1>::operator()(local_148), !bVar4)) ||
     ((param_1->bSearchLeft == false &&
      ((param_1->bSearchRight == false &&
       (bVar4 = `UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue'::__l3::
                <lambda_2>::operator()(local_148), !bVar4)))))) {
LAB_147a52ef8:
    return param_1->DesiredParameter;
  }
  uVar9 = (this->PairKnots).ArrayNum;
  if (uVar9 == 0) goto LAB_147a52ef8;
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
          goto LAB_147a52fd7;
        }
      }
      else {
LAB_147a52fd7:
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
          goto LAB_147a530df;
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
LAB_147a530df:
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
        if (iVar16 == -1) goto LAB_147a53259;
        uVar12 = (ulonglong)param_1->bSearchLeft;
        uVar13 = (ulonglong)param_1->bSearchRight;
        iVar16 = 0x1000;
        fVar18 = fVar17;
        fVar19 = fVar17;
        goto LAB_147a53310;
      }
    }
  }
  fVar17 = param_1->DesiredParameter;
LAB_147a53259:
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
LAB_147a53310:
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
      if (local_e8._8_4_ == local_b4) goto LAB_147a53259;
      FVar8.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_a8.Data;
      }
      iVar2 = *(int *)(FVar8.Data + (ulonglong)(local_a0 - 1 & (uint)fVar18) * 4);
      while( true ) {
        if (iVar2 == -1) goto LAB_147a53259;
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
      if (local_e8._8_4_ == local_b4) goto LAB_147a53259;
      FVar8.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_a8.Data;
      }
      iVar2 = *(int *)(FVar8.Data + (ulonglong)(local_a0 - 1 & (uint)fVar19) * 4);
      while( true ) {
        if (iVar2 == -1) goto LAB_147a53259;
        if (fVar19 == *(float *)(local_e8._0_8_ + (longlong)iVar2 * 0xc)) break;
        iVar2 = *(int *)(local_e8._0_8_ + (longlong)iVar2 * 0xc + 4);
      }
      if (fVar21 <= fVar17) {
        uVar13 = uVar15;
      }
    }
  }
  if ((((char)uVar12 == '\0') && ((char)uVar13 == '\0')) || (!bVar4)) goto LAB_147a5345b;
  iVar16 = iVar16 + -1;
  fVar19 = fVar17;
  if (iVar16 < 1) goto code_r0x000147a53451;
  goto LAB_147a53310;
code_r0x000147a53451:
  `UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue'::__l49::<lambda_3>::
  operator()(local_148);
LAB_147a5345b:
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
          `UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue'::__l50::<lambda_4>
          ::operator()(local_148);
          break;
        }
      }
    }
  }
  goto LAB_147a53259;
}

// GetNearestAvailableKnotValue @ 147a53580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue
          (TBSpline<UE::Math::TQuat<double>,3> *this,FValidKnotSearchParams *param_1)

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
      (bVar4 = `UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::
               GetNearestAvailableKnotValue'::__l3::<lambda_1>::operator()(local_148), !bVar4)) ||
     ((param_1->bSearchLeft == false &&
      ((param_1->bSearchRight == false &&
       (bVar4 = `UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::
                GetNearestAvailableKnotValue'::__l3::<lambda_2>::operator()(local_148), !bVar4))))))
  {
LAB_147a535e8:
    return param_1->DesiredParameter;
  }
  uVar9 = (this->PairKnots).ArrayNum;
  if (uVar9 == 0) goto LAB_147a535e8;
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
          goto LAB_147a536c7;
        }
      }
      else {
LAB_147a536c7:
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
          goto LAB_147a537cf;
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
LAB_147a537cf:
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
        if (iVar16 == -1) goto LAB_147a53949;
        uVar12 = (ulonglong)param_1->bSearchLeft;
        uVar13 = (ulonglong)param_1->bSearchRight;
        iVar16 = 0x1000;
        fVar18 = fVar17;
        fVar19 = fVar17;
        goto LAB_147a53a00;
      }
    }
  }
  fVar17 = param_1->DesiredParameter;
LAB_147a53949:
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
LAB_147a53a00:
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
      if (local_e8._8_4_ == local_b4) goto LAB_147a53949;
      FVar8.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_a8.Data;
      }
      iVar2 = *(int *)(FVar8.Data + (ulonglong)(local_a0 - 1 & (uint)fVar18) * 4);
      while( true ) {
        if (iVar2 == -1) goto LAB_147a53949;
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
      if (local_e8._8_4_ == local_b4) goto LAB_147a53949;
      FVar8.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_a8.Data;
      }
      iVar2 = *(int *)(FVar8.Data + (ulonglong)(local_a0 - 1 & (uint)fVar19) * 4);
      while( true ) {
        if (iVar2 == -1) goto LAB_147a53949;
        if (fVar19 == *(float *)(local_e8._0_8_ + (longlong)iVar2 * 0xc)) break;
        iVar2 = *(int *)(local_e8._0_8_ + (longlong)iVar2 * 0xc + 4);
      }
      if (fVar21 <= fVar17) {
        uVar13 = uVar15;
      }
    }
  }
  if ((((char)uVar12 == '\0') && ((char)uVar13 == '\0')) || (!bVar4)) goto LAB_147a53b4b;
  iVar16 = iVar16 + -1;
  fVar19 = fVar17;
  if (iVar16 < 1) goto code_r0x000147a53b41;
  goto LAB_147a53a00;
code_r0x000147a53b41:
  `UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue'::__l49::
  <lambda_3>::operator()(local_148);
LAB_147a53b4b:
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
          `UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue'
          ::__l50::<lambda_4>::operator()(local_148);
          break;
        }
      }
    }
  }
  goto LAB_147a53949;
}

// GetNumberOfSegments @ 147a541b0

int __thiscall UE::Geometry::Spline::TBSpline<float,3>::GetNumberOfSegments(TBSpline<float,3> *this)

{
  undefined1 local_res10 [24];
  
  `UE::Geometry::Spline::TBSpline<float,3>::GetNumberOfSegments'::__l2::<lambda_1>::operator()
            (local_res10);
  return -1;
}

// GetNumberOfSegments @ 147a541d0

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNumberOfSegments
          (TBSpline<UE::Math::TQuat<double>,3> *this)

{
  undefined1 local_res10 [24];
  
  `UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNumberOfSegments'::__l2::<lambda_1>
  ::operator()(local_res10);
  return -1;
}

// GetParameter @ 147a54e40

float __thiscall
UE::Geometry::Spline::TBSpline<float,3>::GetParameter(TBSpline<float,3> *this,int param_1)

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

// GetParameter @ 147a54fd0

float __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetParameter
          (TBSpline<UE::Math::TQuat<double>,3> *this,int param_1)

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

// GetParameterSpace @ 147a55860

TInterval1<float> __thiscall
UE::Geometry::Spline::TBSpline<float,3>::GetParameterSpace(TBSpline<float,3> *this)

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

// GetParameterSpace @ 147a55960

TInterval1<float> __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetParameterSpace
          (TBSpline<UE::Math::TQuat<double>,3> *this)

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

// GetSegmentParameterRange @ 147a58c90

TInterval1<float> __thiscall
UE::Geometry::Spline::TBSpline<float,3>::GetSegmentParameterRange
          (TBSpline<float,3> *this,int param_1)

{
  TInterval1<float> TVar1;
  float in_register_00000014;
  undefined1 local_res10 [24];
  
  TVar1.Max = in_register_00000014;
  TVar1.Min = (float)param_1;
  `UE::Geometry::Spline::TBSpline<float,3>::GetSegmentParameterRange'::__l2::<lambda_1>::operator()
            (local_res10);
  *(undefined4 *)TVar1 = 0x7f7fffff;
  *(undefined4 *)((longlong)TVar1 + 4) = 0xff7fffff;
  return TVar1;
}

// GetSegmentParameterRange @ 147a58cc0

TInterval1<float> __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetSegmentParameterRange
          (TBSpline<UE::Math::TQuat<double>,3> *this,int param_1)

{
  TInterval1<float> TVar1;
  float in_register_00000014;
  undefined1 local_res10 [24];
  
  TVar1.Max = in_register_00000014;
  TVar1.Min = (float)param_1;
  `UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetSegmentParameterRange'::__l2::
  <lambda_1>::operator()(local_res10);
  *(undefined4 *)TVar1 = 0x7f7fffff;
  *(undefined4 *)((longlong)TVar1 + 4) = 0xff7fffff;
  return TVar1;
}

// GetStaticTypeId @ 147a59e40

uint * __cdecl UE::Geometry::Spline::TBSpline<float,3>::GetStaticTypeId(void)

{
  wchar_t wVar1;
  ushort uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ushort uVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetStaticTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetStaticTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetStaticTypeId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pwVar4 = L"";
    pwVar3 = L"BSpline3";
    if (TSplineValueTypeTraits<float>::Name.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance;
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
    `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetStaticTypeId(void)'
    ::__l2::CachedTypeId = (uint)uVar6 << 0x10 | uVar5 & 0xffff;
    _Init_thread_footer(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetStaticTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetStaticTypeId(void)'
          ::__l2::CachedTypeId;
}

// GetStaticTypeId @ 147a59f30

uint * __cdecl UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetStaticTypeId(void)

{
  wchar_t wVar1;
  ushort uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ushort uVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetStaticTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetStaticTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetStaticTypeId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pwVar4 = L"";
    pwVar3 = L"BSpline3";
    if (TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)
               TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.AllocatorInstance;
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
    `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetStaticTypeId(void)'
    ::__l2::CachedTypeId = (uint)uVar6 << 0x10 | uVar5 & 0xffff;
    _Init_thread_footer(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetStaticTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetStaticTypeId(void)'
          ::__l2::CachedTypeId;
}

// GetTypeId @ 147a5b000

uint __thiscall UE::Geometry::Spline::TBSpline<float,3>::GetTypeId(TBSpline<float,3> *this)

{
  uint *puVar1;
  
  puVar1 = GetStaticTypeId();
  return *puVar1;
}

// GetTypeId @ 147a5b020

uint __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetTypeId
          (TBSpline<UE::Math::TQuat<double>,3> *this)

{
  uint *puVar1;
  
  puVar1 = GetStaticTypeId();
  return *puVar1;
}

// GetValue @ 147a5b2f0

float * __thiscall
UE::Geometry::Spline::TBSpline<float,3>::GetValue(TBSpline<float,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
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
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)((this->Values).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// GetValue @ 147a5b370

TQuat<double> * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetValue
          (TBSpline<UE::Math::TQuat<double>,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TQuat<double> *pTVar4;
  
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
      pTVar4 = (TQuat<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TQuat<double> *)((this->Values).AllocatorInstance.Data + (longlong)param_1 * 0x20);
}

// InsertKnot @ 147a5f1d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TBSpline<float,3>::InsertKnot(TBSpline<float,3> *this,FKnot param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FKnot local_res10;
  
  iVar9 = 0;
  iVar8 = (this->PairKnots).ArrayNum + -1;
  local_res10 = param_1;
  if (-1 < iVar8) {
    do {
      iVar6 = iVar8 - iVar9;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      uVar1 = (iVar6 >> 1) + iVar9;
      uVar7 = 0;
      if ((int)uVar1 < (this->PairKnots).ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (local_res10.Value ==
          *(float *)((this->PairKnots).AllocatorInstance.Data + (longlong)(int)uVar1 * 8)) {
        if (2 < (byte)Spline::LogSpline._0_1_) {
          Logging::Private::BasicLog<3>
                    (&`protected:_bool___cdecl_UE::Geometry::Spline::TBSpline<float,3>::InsertKnot(UE::Geometry::Spline::FKnot)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
        }
        return false;
      }
      uVar7 = 0;
      if ((int)uVar1 < (this->PairKnots).ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->PairKnots).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
      if (local_res10.Value < *(float *)pFVar2 || local_res10.Value == *(float *)pFVar2) {
        iVar8 = uVar1 - 1;
      }
      else {
        iVar9 = uVar1 + 1;
      }
    } while (iVar9 <= iVar8);
  }
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::Insert
            (&this->PairKnots,&local_res10,iVar9);
  this->bFlatKnotsCacheDirty = true;
  return true;
}

// InsertKnot @ 147a5f330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::InsertKnot
          (TBSpline<UE::Math::TQuat<double>,3> *this,FKnot param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FKnot local_res10;
  
  iVar9 = 0;
  iVar8 = (this->PairKnots).ArrayNum + -1;
  local_res10 = param_1;
  if (-1 < iVar8) {
    do {
      iVar6 = iVar8 - iVar9;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      uVar1 = (iVar6 >> 1) + iVar9;
      uVar7 = 0;
      if ((int)uVar1 < (this->PairKnots).ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (local_res10.Value ==
          *(float *)((this->PairKnots).AllocatorInstance.Data + (longlong)(int)uVar1 * 8)) {
        if (2 < (byte)Spline::LogSpline._0_1_) {
          Logging::Private::BasicLog<3>
                    (&`protected:_bool___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::InsertKnot(UE::Geometry::Spline::FKnot)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
        }
        return false;
      }
      uVar7 = 0;
      if ((int)uVar1 < (this->PairKnots).ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->PairKnots).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
      if (local_res10.Value < *(float *)pFVar2 || local_res10.Value == *(float *)pFVar2) {
        iVar8 = uVar1 - 1;
      }
      else {
        iVar9 = uVar1 + 1;
      }
    } while (iVar9 <= iVar8);
  }
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>::Insert
            (&this->PairKnots,&local_res10,iVar9);
  this->bFlatKnotsCacheDirty = true;
  return true;
}

// InsertValue @ 147a61d70

int __thiscall
UE::Geometry::Spline::TBSpline<float,3>::InsertValue
          (TBSpline<float,3> *this,int param_1,float *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((-1 < param_1) && (param_1 <= (this->Values).ArrayNum)) {
    pTVar1 = &this->Values;
    pFVar3 = (this->Values).AllocatorInstance.Data;
    if ((pFVar3 <= param_2) && (param_2 < pFVar3 + (longlong)(this->Values).ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    iVar6 = (this->Values).ArrayNum;
    piVar2 = &(this->Values).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Values).ArrayNum = iVar6 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 4;
    memmove(pFVar3 + 4,pFVar3,(longlong)(iVar6 - param_1) << 2);
    *(float *)((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 4) = *param_2;
    return param_1;
  }
  pFVar3 = (this->Values).AllocatorInstance.Data;
  if ((pFVar3 <= param_2) && (param_2 < pFVar3 + (longlong)(this->Values).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = (this->Values).ArrayNum;
  piVar2 = &(this->Values).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Values).AllocatorInstance,piVar2);
  }
  pFVar3 = (this->Values).AllocatorInstance.Data;
  (this->Values).ArrayNum = iVar6 + 1;
  *(float *)(pFVar3 + (longlong)iVar6 * 4) = *param_2;
  return iVar6;
}

// InsertValue @ 147a61ef0

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::InsertValue
          (TBSpline<UE::Math::TQuat<double>,3> *this,int param_1,TQuat<double> *param_2)

{
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TQuat<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  
  if ((-1 < param_1) && (param_1 <= (this->Values).ArrayNum)) {
    pTVar1 = &this->Values;
    pTVar3 = (TQuat<double> *)(this->Values).AllocatorInstance.Data;
    if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->Values).ArrayMax)) {
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
                        (0x1020,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar9 = (pTVar1->AllocatorInstance).Data;
    (this->Values).ArrayNum = iVar8 + 1;
    lVar10 = (longlong)param_1 * 0x20;
    pFVar9 = pFVar9 + lVar10;
    memmove(pFVar9 + 0x20,pFVar9,(longlong)(iVar8 - param_1) << 5);
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    dVar6 = param_2->Y;
    pFVar9 = pFVar4 + lVar10;
    *(double *)pFVar9 = param_2->X;
    *(double *)(pFVar9 + 8) = dVar6;
    dVar6 = param_2->W;
    pFVar4 = pFVar4 + lVar10 + 0x10;
    *(double *)pFVar4 = param_2->Z;
    *(double *)(pFVar4 + 8) = dVar6;
    return param_1;
  }
  pTVar3 = (TQuat<double> *)(this->Values).AllocatorInstance.Data;
  if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->Values).ArrayMax)) {
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
                      (0x1020,&(this->Values).AllocatorInstance,piVar2);
  }
  (this->Values).ArrayNum = iVar8 + 1;
  pFVar4 = (this->Values).AllocatorInstance.Data;
  dVar6 = param_2->Y;
  pFVar9 = pFVar4 + (longlong)iVar8 * 0x20;
  *(double *)pFVar9 = param_2->X;
  *(double *)(pFVar9 + 8) = dVar6;
  dVar6 = param_2->W;
  pFVar4 = pFVar4 + (longlong)iVar8 * 0x20 + 0x10;
  *(double *)pFVar4 = param_2->Z;
  *(double *)(pFVar4 + 8) = dVar6;
  return iVar8;
}

// InterpolateWindow @ 147a62160

float __thiscall
UE::Geometry::Spline::TBSpline<float,3>::InterpolateWindow
          (TBSpline<float,3> *this,TArrayView<float_const_*_const,int> *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  TArray<float,TSizedDefaultAllocator<32>_> local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<float_const_,int> local_38;
  TArrayView<float_const_*_const,int> local_28 [2];
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if ((this->PairKnots).ArrayNum == 0) {
    fVar4 = 0.0;
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
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    local_28[0].DataPtr = param_1->DataPtr;
    local_28[0].ArrayNum = param_1->ArrayNum;
    local_28[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_38._12_4_ = uStack_3c;
    local_38.ArrayNum = iStack_40;
    local_38.DataPtr = (float *)local_48;
    fVar4 = TSplineInterpolationPolicy<float>::InterpolateWithBasis(local_28,&local_38);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return fVar4;
}

// InterpolateWindow @ 147a62260

TQuat<double> * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::InterpolateWindow
          (TBSpline<UE::Math::TQuat<double>,3> *this,TQuat<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TQuat<double>_const_*_const,int> *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TQuat<double> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<float_const_,int> local_38;
  TArrayView<UE::Math::TQuat<double>_const_*_const,int> local_28 [2];
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if ((this->PairKnots).ArrayNum == 0) {
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
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
        pTVar4 = (TQuat<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    local_28[0].DataPtr = param_1->DataPtr;
    local_28[0].ArrayNum = param_1->ArrayNum;
    local_28[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_38._12_4_ = uStack_3c;
    local_38.ArrayNum = iStack_40;
    local_38.DataPtr = (float *)local_48;
    TSplineInterpolationPolicy<UE::Math::TQuat<double>_>::InterpolateWithBasis
              (__return_storage_ptr__,local_28,&local_38);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// IsClosedLoop @ 147a62ed0

bool __thiscall UE::Geometry::Spline::TBSpline<float,3>::IsClosedLoop(TBSpline<float,3> *this)

{
  return this->bIsClosedLoop;
}

// IsClosedLoop @ 147a62ee0

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::IsClosedLoop
          (TBSpline<UE::Math::TQuat<double>,3> *this)

{
  return this->bIsClosedLoop;
}

// IsEqual @ 147a63040

bool __thiscall
UE::Geometry::Spline::TBSpline<float,3>::IsEqual(TBSpline<float,3> *this,ISplineInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 0x48);
  iVar3 = (**(code **)((longlong)*param_1 + 0x48))(param_1);
  iVar4 = (*pcVar1)(this);
  if (iVar3 == iVar4) {
    bVar2 = operator==(this,(TBSpline<float,3> *)param_1);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// IsEqual @ 147a630b0

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::IsEqual
          (TBSpline<UE::Math::TQuat<double>,3> *this,ISplineInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 0x48);
  iVar3 = (**(code **)((longlong)*param_1 + 0x48))(param_1);
  iVar4 = (*pcVar1)(this);
  if (iVar3 == iVar4) {
    bVar2 = operator==(this,(TBSpline<UE::Math::TQuat<double>,3> *)param_1);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// PrintKnotVector @ 147a683c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Geometry::Spline::TBSpline<float,3>::PrintKnotVector(TBSpline<float,3> *this)

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
                  (&`protected:_void___cdecl_UE::Geometry::Spline::TBSpline<float,3>::PrintKnotVector(void)const___ptr64'
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
                  (&`protected:_void___cdecl_UE::Geometry::Spline::TBSpline<float,3>::PrintKnotVector(void)const___ptr64'
                    ::__l24::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->FlatKnots).ArrayNum);
  }
  return;
}

// PrintKnotVector @ 147a68520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::PrintKnotVector
          (TBSpline<UE::Math::TQuat<double>,3> *this)

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
                  (&`protected:_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::PrintKnotVector(void)const___ptr64'
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
                  (&`protected:_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::PrintKnotVector(void)const___ptr64'
                    ::__l24::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->FlatKnots).ArrayNum);
  }
  return;
}

// RemoveValue @ 147a7eeb0

bool __thiscall
UE::Geometry::Spline::TBSpline<float,3>::RemoveValue(TBSpline<float,3> *this,int param_1)

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
    _Dst = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 4;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 4,(longlong)iVar6 << 2);
    }
    piVar1 = &(this->Values).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->Values).AllocatorInstance,(this->Values).ArrayNum,
               &(this->Values).ArrayMax);
    return true;
  }
  return false;
}

// RemoveValue @ 147a7ef80

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::RemoveValue
          (TBSpline<UE::Math::TQuat<double>,3> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *_Dst;
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
    _Dst = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 0x20;
    iVar6 = (this->Values).ArrayNum + ~param_1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x20,(longlong)iVar6 << 5);
    }
    piVar1 = &(this->Values).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,&(this->Values).AllocatorInstance,(this->Values).ArrayNum,
               &(this->Values).ArrayMax);
    return true;
  }
  return false;
}

// Reparameterize @ 147a7f1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<float,3>::Reparameterize
          (TBSpline<float,3> *this,EParameterizationPolicy param_1)

{
  int iVar1;
  
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 < 4) {
    if (2 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_UE::Geometry::Spline::TBSpline<float,3>::Reparameterize(UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
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
                (&`public:_virtual_void___cdecl_UE::Geometry::Spline::TBSpline<float,3>::Reparameterize(UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                  ::__l25::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
  }
  return;
}

// Reparameterize @ 147a7f2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::Reparameterize
          (TBSpline<UE::Math::TQuat<double>,3> *this,EParameterizationPolicy param_1)

{
  int iVar1;
  
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 < 4) {
    if (2 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::Reparameterize(UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
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
                (&`public:_virtual_void___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::Reparameterize(UE::Geometry::Spline::EParameterizationPolicy)___ptr64'
                  ::__l25::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
  }
  return;
}

// Serialize @ 147a87430

bool __thiscall
UE::Geometry::Spline::TBSpline<float,3>::Serialize(TBSpline<float,3> *this,FArchive *param_1)

{
  bool bVar1;
  
  bVar1 = TSplineInterface<float>::Serialize((TSplineInterface<float> *)this,param_1);
  if (!bVar1) {
    return false;
  }
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&this->Values);
  TArrayPrivateFriend::Serialize<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>
            (param_1,&this->PairKnots);
  ::operator<<(param_1,&this->bIsClosedLoop);
  ::operator<<(param_1,&this->bClampEnds);
  this->bFlatKnotsCacheDirty = true;
  return true;
}

// Serialize @ 147a874a0

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::Serialize
          (TBSpline<UE::Math::TQuat<double>,3> *this,FArchive *param_1)

{
  bool bVar1;
  
  bVar1 = TSplineInterface<UE::Math::TQuat<double>_>::Serialize
                    ((TSplineInterface<UE::Math::TQuat<double>_> *)this,param_1);
  if (!bVar1) {
    return false;
  }
  TArrayPrivateFriend::Serialize<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Values);
  TArrayPrivateFriend::Serialize<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>
            (param_1,&this->PairKnots);
  ::operator<<(param_1,&this->bIsClosedLoop);
  ::operator<<(param_1,&this->bClampEnds);
  this->bFlatKnotsCacheDirty = true;
  return true;
}

// SetClosedLoop @ 147a8b250

void __thiscall
UE::Geometry::Spline::TBSpline<float,3>::SetClosedLoop(TBSpline<float,3> *this,bool param_1)

{
  this->bIsClosedLoop = param_1;
  return;
}

// SetClosedLoop @ 147a8b260

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetClosedLoop
          (TBSpline<UE::Math::TQuat<double>,3> *this,bool param_1)

{
  this->bIsClosedLoop = param_1;
  return;
}

// SetCustomKnots @ 147a8e720

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TBSpline<float,3>::SetCustomKnots
          (TBSpline<float,3> *this,
          TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 local_res8 [8];
  
  iVar8 = (**(code **)(this->_padding_ + 0xc0))();
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar14 = 0;
  iVar10 = param_1->ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar10 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::Spline::FKnot_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar2) break;
    if (*(int *)(pFVar11 + 4) == 0) {
      if ((byte)Spline::LogSpline._0_1_ < 3) {
        return false;
      }
      Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<float,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      return false;
    }
    iVar14 = iVar14 + *(int *)(pFVar11 + 4);
    pFVar11 = pFVar11 + 8;
  }
  if (iVar14 < iVar8) {
    if ((byte)Spline::LogSpline._0_1_ < 3) {
      return false;
    }
    Logging::Private::BasicLog<3>
              (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<float,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    return false;
  }
  iVar10 = param_1->ArrayNum;
  uVar13 = 1;
  if (1 < iVar10) {
    lVar12 = 8;
    do {
      uVar9 = 0;
      if ((int)uVar13 < iVar10) {
        uVar9 = ~uVar13 >> 0x1f;
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
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)(uVar13 - 1) < param_1->ArrayNum) {
        uVar9 = -uVar13 >> 0x1f;
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
      fVar4 = *(float *)((param_1->AllocatorInstance).Data + lVar12 + -8);
      pFVar2 = pFVar2 + lVar12;
      if (*(float *)pFVar2 <= fVar4 && fVar4 != *(float *)pFVar2) {
        if ((byte)Spline::LogSpline._0_1_ < 3) {
          return false;
        }
        Logging::Private::BasicLog<3>
                  (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<float,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l52::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
        return false;
      }
      iVar10 = param_1->ArrayNum;
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar13 < iVar10);
  }
  pTVar3 = &this->PairKnots;
  if (pTVar3 != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    piVar1 = &(this->PairKnots).ArrayMax;
    (this->PairKnots).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar10,*piVar1,&pTVar3->AllocatorInstance,iVar10,piVar1);
      if (iVar10 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar2,(longlong)iVar10 << 3);
      }
    }
  }
  this->bFlatKnotsCacheDirty = true;
  if (5 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<float,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l69::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  PrintKnotVector(this);
  return true;
}

// SetCustomKnots @ 147a8e990

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetCustomKnots
          (TBSpline<UE::Math::TQuat<double>,3> *this,
          TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 local_res8 [8];
  
  iVar8 = (**(code **)(this->_padding_ + 0xc0))();
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar14 = 0;
  iVar10 = param_1->ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar10 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::Spline::FKnot_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar2) break;
    if (*(int *)(pFVar11 + 4) == 0) {
      if ((byte)Spline::LogSpline._0_1_ < 3) {
        return false;
      }
      Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      return false;
    }
    iVar14 = iVar14 + *(int *)(pFVar11 + 4);
    pFVar11 = pFVar11 + 8;
  }
  if (iVar14 < iVar8) {
    if ((byte)Spline::LogSpline._0_1_ < 3) {
      return false;
    }
    Logging::Private::BasicLog<3>
              (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    return false;
  }
  iVar10 = param_1->ArrayNum;
  uVar13 = 1;
  if (1 < iVar10) {
    lVar12 = 8;
    do {
      uVar9 = 0;
      if ((int)uVar13 < iVar10) {
        uVar9 = ~uVar13 >> 0x1f;
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
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)(uVar13 - 1) < param_1->ArrayNum) {
        uVar9 = -uVar13 >> 0x1f;
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
      fVar4 = *(float *)((param_1->AllocatorInstance).Data + lVar12 + -8);
      pFVar2 = pFVar2 + lVar12;
      if (*(float *)pFVar2 <= fVar4 && fVar4 != *(float *)pFVar2) {
        if ((byte)Spline::LogSpline._0_1_ < 3) {
          return false;
        }
        Logging::Private::BasicLog<3>
                  (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l52::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
        return false;
      }
      iVar10 = param_1->ArrayNum;
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar13 < iVar10);
  }
  pTVar3 = &this->PairKnots;
  if (pTVar3 != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    piVar1 = &(this->PairKnots).ArrayMax;
    (this->PairKnots).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar10,*piVar1,&pTVar3->AllocatorInstance,iVar10,piVar1);
      if (iVar10 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar2,(longlong)iVar10 << 3);
      }
    }
  }
  this->bFlatKnotsCacheDirty = true;
  if (5 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l69::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  PrintKnotVector(this);
  return true;
}

// SetCustomKnots @ 147a8ec00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
          (TBSpline<UE::Math::TVector<double>,3> *this,
          TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 local_res8 [8];
  
  iVar8 = (**(code **)(this->_padding_ + 0xc0))();
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar14 = 0;
  iVar10 = param_1->ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar10 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::Spline::FKnot_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar2) break;
    if (*(int *)(pFVar11 + 4) == 0) {
      if ((byte)Spline::LogSpline._0_1_ < 3) {
        return false;
      }
      Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      return false;
    }
    iVar14 = iVar14 + *(int *)(pFVar11 + 4);
    pFVar11 = pFVar11 + 8;
  }
  if (iVar14 < iVar8) {
    if ((byte)Spline::LogSpline._0_1_ < 3) {
      return false;
    }
    Logging::Private::BasicLog<3>
              (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    return false;
  }
  iVar10 = param_1->ArrayNum;
  uVar13 = 1;
  if (1 < iVar10) {
    lVar12 = 8;
    do {
      uVar9 = 0;
      if ((int)uVar13 < iVar10) {
        uVar9 = ~uVar13 >> 0x1f;
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
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)(uVar13 - 1) < param_1->ArrayNum) {
        uVar9 = -uVar13 >> 0x1f;
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
      fVar4 = *(float *)((param_1->AllocatorInstance).Data + lVar12 + -8);
      pFVar2 = pFVar2 + lVar12;
      if (*(float *)pFVar2 <= fVar4 && fVar4 != *(float *)pFVar2) {
        if ((byte)Spline::LogSpline._0_1_ < 3) {
          return false;
        }
        Logging::Private::BasicLog<3>
                  (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l52::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
        return false;
      }
      iVar10 = param_1->ArrayNum;
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar13 < iVar10);
  }
  pTVar3 = &this->PairKnots;
  if (pTVar3 != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    piVar1 = &(this->PairKnots).ArrayMax;
    (this->PairKnots).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar10,*piVar1,&pTVar3->AllocatorInstance,iVar10,piVar1);
      if (iVar10 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar2,(longlong)iVar10 << 3);
      }
    }
  }
  this->bFlatKnotsCacheDirty = true;
  if (5 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_bool___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots(TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l69::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  PrintKnotVector(this);
  return true;
}

// SetKnot @ 147a8ff50

void __thiscall
UE::Geometry::Spline::TBSpline<float,3>::SetKnot(TBSpline<float,3> *this,int param_1,float param_2)

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

// SetKnot @ 147a8fff0

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetKnot
          (TBSpline<UE::Math::TQuat<double>,3> *this,int param_1,float param_2)

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

// SetParameter @ 147a91220

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TBSpline<float,3>::SetParameter
          (TBSpline<float,3> *this,int param_1,float param_2)

{
  if (2 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<3>
              (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TBSpline<float,3>::SetParameter(int,float)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  return -1;
}

// SetParameter @ 147a91250

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetParameter
          (TBSpline<UE::Math::TQuat<double>,3> *this,int param_1,float param_2)

{
  if (2 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<3>
              (&`public:_virtual_int___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetParameter(int,float)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  return -1;
}

// UpdateFlatKnotsCache @ 147a9b260

void __thiscall
UE::Geometry::Spline::TBSpline<float,3>::UpdateFlatKnotsCache(TBSpline<float,3> *this)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bFlatKnotsCacheDirty != false) {
    pTVar3 = FKnot::ConvertPairToFlatKnots(&local_18,&this->PairKnots);
    pTVar1 = &this->FlatKnots;
    if (pTVar1 != pTVar3) {
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->FlatKnots).ArrayNum = pTVar3->ArrayNum;
      (this->FlatKnots).ArrayMax = pTVar3->ArrayMax;
      pTVar3->ArrayNum = 0;
      pTVar3->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    this->bFlatKnotsCacheDirty = false;
  }
  return;
}

// UpdateFlatKnotsCache @ 147a9b2f0

void __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::UpdateFlatKnotsCache
          (TBSpline<UE::Math::TQuat<double>,3> *this)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bFlatKnotsCacheDirty != false) {
    pTVar3 = FKnot::ConvertPairToFlatKnots(&local_18,&this->PairKnots);
    pTVar1 = &this->FlatKnots;
    if (pTVar1 != pTVar3) {
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->FlatKnots).ArrayNum = pTVar3->ArrayNum;
      (this->FlatKnots).ArrayMax = pTVar3->ArrayMax;
      pTVar3->ArrayNum = 0;
      pTVar3->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    this->bFlatKnotsCacheDirty = false;
  }
  return;
}

// operator() @ 150516850

bool __thiscall
`UE::Geometry::Spline::TBSpline<float,3>::GetNumberOfSegments'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563305213>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563305213>,
                       &`public:___cdecl_`public:_virtual_int___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetNumberOfSegments(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150516890

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNumberOfSegments'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563305213>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563305213>,
                       &`public:___cdecl_`public:_virtual_int___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNumberOfSegments(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505168d0

bool __thiscall
`UE::Geometry::Spline::TBSpline<float,3>::GetSegmentParameterRange'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563305201>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563305201>,
                       &`public:___cdecl_`public:_virtual_struct_UE::Geometry::TInterval1<float>___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetSegmentParameterRange(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150516910

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetSegmentParameterRange'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563305201>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563305201>,
                       &`public:___cdecl_`public:_virtual_struct_UE::Geometry::TInterval1<float>___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetSegmentParameterRange(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150516a10

bool __thiscall
`UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563304789>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304789>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<float,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150516a50

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue'::__l3::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563304789>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304789>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<struct_UE::Math::TQuat<double>,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505174e0

bool __thiscall
`UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue'::__l3::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563304788>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304788>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<float,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`3'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517520

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue'::__l3::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7309629674563304788>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304788>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<struct_UE::Math::TQuat<double>,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`3'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517d40

bool __thiscall
`UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue'::__l49::<lambda_3>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7309629674563304704>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304704>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<float,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`49'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517d80

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue'::__l49::
<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7309629674563304704>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304704>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<struct_UE::Math::TQuat<double>,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`49'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517ea0

bool __thiscall
`UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue'::__l50::<lambda_4>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7309629674563304673>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304673>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<float,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<float,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`50'::<lambda_4>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517ee0

bool __thiscall
`UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue'::__l50::
<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7309629674563304673>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7309629674563304673>,
                       &`public:___cdecl_`protected:_float___cdecl_UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::GetNearestAvailableKnotValue(UE::Geometry::Spline::TBSpline<struct_UE::Math::TQuat<double>,3>::FValidKnotSearchParams_const&___ptr64)const___ptr64'::`50'::<lambda_4>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

