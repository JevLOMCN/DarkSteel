// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 24

// TTangentBezierSpline<UE::Math::TVector<double>_> @ 1435674b0

TTangentBezierSpline<UE::Math::TVector<double>_> * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
TTangentBezierSpline<UE::Math::TVector<double>_>
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this)

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
       ___7__TSplineWrapper_V__TPolyBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE__6B_
  ;
  TPolyBezierSpline<UE::Math::TVector<double>_>::TPolyBezierSpline<UE::Math::TVector<double>_>
            ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  this->_padding_ =
       (longlong)
       &
       ___7__TSelfRegisteringSpline_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE__U__TVector_N_Math_4__Spline_Geometry_UE__6B_
  ;
  if (`protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>(void)___ptr64'
      ::__l2::bRegistered == false) {
    `protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>(void)___ptr64'
    ::__l2::bRegistered = true;
    puVar2 = GetStaticTypeId();
    uVar1 = *puVar2;
    ::FString::FString(&local_48,L"TangentBezier");
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
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `UE::Geometry::Spline::
               TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>
               ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
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
  this->Tension = 0.0;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>__
  ;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>__
  ;
  (this->TangentModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TangentModes).ArrayNum = 0;
  (this->TangentModes).ArrayMax = 0;
  this->bStationaryEndpoint = false;
  return this;
}

// ~TTangentBezierSpline<UE::Math::TVector<double>_> @ 143568e20

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
~TTangentBezierSpline<UE::Math::TVector<double>_>
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TangentModes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// operator== @ 143569b40

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::operator==
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,
          TTangentBezierSpline<UE::Math::TVector<double>_> *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = TBSpline<UE::Math::TVector<double>,3>::operator==
                    ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,
                     (TBSpline<UE::Math::TVector<double>,3> *)&param_1->_padding_);
  if ((bVar1) && (param_1->Tension == this->Tension)) {
    iVar2 = (this->TangentModes).ArrayNum;
    if (iVar2 == (param_1->TangentModes).ArrayNum) {
      if ((iVar2 != 0) &&
         (iVar2 = memcmp((this->TangentModes).AllocatorInstance.Data,
                         (param_1->TangentModes).AllocatorInstance.Data,(longlong)iVar2), iVar2 != 0
         )) {
        return false;
      }
      if (this->bStationaryEndpoint == param_1->bStationaryEndpoint) {
        return true;
      }
    }
  }
  return false;
}

// Clear @ 14357aa80

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::Clear
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this)

{
  int *piVar1;
  
  (**(code **)(this->_padding_ + 8))();
  piVar1 = &(this->TangentModes).ArrayMax;
  (this->TangentModes).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->TangentModes).AllocatorInstance,0,piVar1);
  }
  return;
}

// Clone @ 14357ad70

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::Clone
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this)

{
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  ISplineInterface IVar1;
  ISplineInterface *in_RDX;
  
  this_00 = ::operator_new(0x98);
  if (this_00 == (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
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
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    *(undefined8 *)&this_00->Tension = 0;
    (this_00->TangentModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->TangentModes).ArrayNum = 0;
    (this_00->TangentModes).ArrayMax = 0;
    *(undefined8 *)&this_00->bStationaryEndpoint = 0;
    IVar1 = (ISplineInterface)TTangentBezierSpline<UE::Math::TVector<double>_>(this_00);
  }
  TPolyBezierSpline<UE::Math::TVector<double>_>::operator=
            ((TPolyBezierSpline<UE::Math::TVector<double>_> *)((longlong)IVar1 + 0x10),
             (TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  *(float *)((longlong)IVar1 + 0x78) = this->Tension;
  TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *)
             ((longlong)IVar1 + 0x80),&this->TangentModes);
  *(bool *)((longlong)IVar1 + 0x90) = this->bStationaryEndpoint;
  *(int *)((longlong)IVar1 + 8) = (int)this->_padding_;
  *(undefined4 *)((longlong)IVar1 + 0xc) = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *in_RDX = IVar1;
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )in_RDX;
}

// FindNearest @ 143592da0

float __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::FindNearest
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,TVector<double> *param_1,
          float *param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143592da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x68))(&this->_padding_);
  return fVar1;
}

// GetImplementationName @ 1435b1240

FString * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetImplementationName
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TangentBezier");
  return __return_storage_ptr__;
}

// GetNumPoints @ 1435b1fc0

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  int iVar2;
  undefined1 local_res8 [32];
  
  iVar2 = (int)this->_padding_;
  if (iVar2 == 0) {
    return 0;
  }
  if ((iVar2 == 1) || (iVar2 == 2)) {
    `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4::
    <lambda_1>::operator()(local_res8);
    return 1;
  }
  if (iVar2 == 3) {
    return 1;
  }
  cVar1 = (**(code **)(this->_padding_ + 0x40))();
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x50);
  if (cVar1 == '\0') {
    iVar2 = (*UNRECOVERED_JUMPTABLE)(this);
    return iVar2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b1ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*UNRECOVERED_JUMPTABLE)();
  return iVar2;
}

// GetNumberOfSegments @ 1435b20b0

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumberOfSegments
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435b20b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 0x50))(&this->_padding_);
  return iVar1;
}

// GetParameterSpace @ 1435b27d0

TInterval1<float> __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetParameterSpace
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this)

{
  int iVar1;
  TInterval1<float> in_RDX;
  
  iVar1 = GetNumPoints(this);
  if (iVar1 == 1) {
    *(undefined8 *)in_RDX = 0;
    return in_RDX;
  }
  (**(code **)(this->_padding_ + 0x30))(&this->_padding_);
  return in_RDX;
}

// GetSegmentParameterRange @ 1435b2cd0

TInterval1<float> __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetSegmentParameterRange
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1)

{
  TInterval1<float> TVar1;
  float in_register_00000014;
  
  TVar1.Max = in_register_00000014;
  TVar1.Min = (float)param_1;
  (**(code **)(this->_padding_ + 0x58))(&this->_padding_);
  return TVar1;
}

// GetStaticTypeId @ 1435b2ff0

uint * __cdecl
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)

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
       `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pwVar4 = L"";
    uVar5 = 0x811c9dc5;
    pwVar3 = L"TangentBezier";
    if (TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)
               TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.AllocatorInstance;
    }
    uVar7 = 0x811c9dc5;
    uVar6 = 0x54;
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
    `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
    ::__l2::CachedTypeId = uVar2 * 0x1930000 | uVar5 & 0xffff;
    _Init_thread_footer(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId(void)'
          ::__l2::CachedTypeId;
}

// GetTangentIn @ 1435b4700

TVector<double> * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentIn
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,
          TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  TVector<double> *pTVar6;
  
  iVar5 = GetNumPoints(this);
  if (1 < iVar5) {
    if (param_1 == 0) {
      cVar4 = (**(code **)(this->_padding_ + 0x40))(this);
      if (cVar4 != '\0') {
        GetTangentIn(this,__return_storage_ptr__,iVar5);
        return __return_storage_ptr__;
      }
      GetTangentOut(this,__return_storage_ptr__,0);
      return __return_storage_ptr__;
    }
    iVar5 = param_1 * 4 + -1;
    if (iVar5 < (int)this->_padding_) {
      pTVar6 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                         ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,iVar5);
      dVar3 = (pTVar6->field0_0x0)._s_0.X;
      dVar2 = (pTVar6->field0_0x0)._s_0.Y;
      dVar1 = (pTVar6->field0_0x0)._s_0.Z;
      pTVar6 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                         ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,param_1 * 4 + -2
                         );
      dVar2 = (dVar2 - (pTVar6->field0_0x0)._s_0.Y) * __real_4008000000000000;
      dVar1 = (dVar1 - (pTVar6->field0_0x0)._s_0.Z) * __real_4008000000000000;
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (dVar3 - (pTVar6->field0_0x0)._s_0.X) * __real_4008000000000000;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetTangentOut @ 1435b4810

TVector<double> * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentOut
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,
          TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  TVector<double> *pTVar5;
  double dVar6;
  
  iVar4 = GetNumPoints(this);
  if (1 < iVar4) {
    if (param_1 == iVar4 + -1) {
      cVar3 = (**(code **)(this->_padding_ + 0x40))(this);
      if (cVar3 == '\0') {
        GetTangentIn(this,__return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
    }
    iVar4 = param_1 * 4 + 1;
    if (iVar4 < (int)this->_padding_) {
      pTVar5 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                         ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,param_1 * 4);
      dVar2 = (pTVar5->field0_0x0)._s_0.X;
      dVar6 = (pTVar5->field0_0x0)._s_0.Y;
      dVar1 = (pTVar5->field0_0x0)._s_0.Z;
      pTVar5 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                         ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,iVar4);
      dVar2 = ((pTVar5->field0_0x0)._s_0.X - dVar2) * __real_4008000000000000;
      dVar6 = ((pTVar5->field0_0x0)._s_0.Y - dVar6) * __real_4008000000000000;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           ((pTVar5->field0_0x0)._s_0.Z - dVar1) * __real_4008000000000000;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetTypeId @ 1435b52e0

uint __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTypeId
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this)

{
  uint *puVar1;
  
  puVar1 = GetStaticTypeId();
  return *puVar1;
}

// GetValue @ 1435b53d0

TVector<double> * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,
          TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  TVector<double> *pTVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (int)this->_padding_;
  if (((iVar2 == 0) || (param_1 < 0)) || (iVar2 == 0)) goto LAB_1435b547d;
  if ((iVar2 == 1) || (iVar2 == 2)) {
    `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4::
    <lambda_1>::operator()(local_res8);
LAB_1435b543f:
    iVar6 = 1;
  }
  else {
    if (iVar2 == 3) goto LAB_1435b543f;
    cVar5 = (**(code **)(this->_padding_ + 0x40))();
    pcVar3 = *(code **)(this->_padding_ + 0x50);
    if (cVar5 == '\0') {
      iVar6 = (*pcVar3)(this);
      iVar6 = iVar6 + 1;
    }
    else {
      iVar6 = (*pcVar3)();
    }
  }
  if (iVar6 <= param_1) {
LAB_1435b547d:
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  if (iVar2 == 1) {
    if (param_1 != 0) goto LAB_1435b547d;
  }
  else if (param_1 != 0) {
    iVar6 = param_1 * 4 + -1;
    if (iVar2 <= iVar6) goto LAB_1435b547d;
    goto LAB_1435b5453;
  }
  iVar6 = 0;
LAB_1435b5453:
  pTVar7 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                     ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,iVar6);
  dVar4 = (pTVar7->field0_0x0)._s_0.Y;
  dVar1 = (pTVar7->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// IsAutoTangent @ 1435b9950

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::IsAutoTangent
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->TangentModes).ArrayNum <= param_1)) {
LAB_1435b9a32:
    bVar2 = false;
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->TangentModes).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
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
    if ((this->TangentModes).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if (param_1 < (this->TangentModes).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if (uVar4 == 0) {
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
      if ((this->TangentModes).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x1)
      goto LAB_1435b9a32;
    }
    bVar2 = true;
  }
  return bVar2;
}

// IsClosedLoop @ 1435b9c90

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::IsClosedLoop
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435b9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
  return (bool)uVar1;
}

// IsEqual @ 1435ba2d0

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::IsEqual
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,ISplineInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 0x48);
  iVar3 = (**(code **)((longlong)*param_1 + 0x48))(param_1);
  iVar4 = (*pcVar1)(this);
  if (iVar3 == iVar4) {
    bVar2 = operator==(this,(TTangentBezierSpline<UE::Math::TVector<double>_> *)param_1);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// Serialize @ 1435c1170

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::Serialize
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,FArchive *param_1)

{
  float *pfVar1;
  int *piVar2;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *pTVar3;
  float *pfVar4;
  longlong *plVar5;
  code *pcVar6;
  FScriptContainerElement FVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  FScriptContainerElement *_Dst;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement local_res18 [8];
  uint local_res20 [2];
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  
  bVar8 = TSplineInterface<UE::Math::TVector<double>_>::Serialize
                    ((TSplineInterface<UE::Math::TVector<double>_> *)this,param_1);
  if ((!bVar8) ||
     (cVar9 = (**(code **)(this->_padding_ + 0x60))(&this->_padding_,param_1), cVar9 == '\0')) {
    return false;
  }
  pfVar1 = &this->Tension;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &(this->TangentModes).ArrayNum;
  plVar5 = *(longlong **)&param_1->field_0x8;
  local_res20[0] = *piVar2;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  uVar13 = local_res20[0];
  if ((param_1->field_0x28 & 1) != 0) {
    lVar14 = (longlong)(int)local_res20[0];
    pTVar3 = &this->TangentModes;
    iVar12 = (this->TangentModes).ArrayNum;
    if (iVar12 < (int)local_res20[0]) {
      iVar12 = local_res20[0] - iVar12;
      iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar12,&pTVar3->AllocatorInstance,piVar2,
                          &(this->TangentModes).ArrayMax);
      memset((pTVar3->AllocatorInstance).Data + iVar11,0,(longlong)iVar12);
    }
    else {
      if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
      }
      if ((int)local_res20[0] < iVar12) {
        uVar15 = iVar12 - local_res20[0];
        if (((int)(uVar15 | local_res20[0]) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        if (uVar15 != 0) {
          _Dst = (pTVar3->AllocatorInstance).Data + lVar14;
          iVar12 = ((this->TangentModes).ArrayNum - uVar15) - uVar13;
          if (iVar12 != 0) {
            memmove(_Dst,_Dst + (int)uVar15,(longlong)iVar12);
          }
          piVar2 = &(this->TangentModes).ArrayNum;
          *piVar2 = *piVar2 - uVar15;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&pTVar3->AllocatorInstance,(this->TangentModes).ArrayNum,
                     &(this->TangentModes).ArrayMax);
        }
      }
    }
    iVar12 = (int)this->_padding_;
    if (iVar12 == 1) {
      local_58._s_0.X = 0.0;
      local_58._s_0.Y = 0.0;
      local_58._s_0.Z = 0.0;
      TBSpline<UE::Math::TVector<double>,3>::AddValue
                ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,
                 (TVector<double> *)&local_58._s_0);
    }
    else if (iVar12 != 2) goto LAB_1435c139e;
    local_40._s_0.X = 0.0;
    local_40._s_0.Y = 0.0;
    local_40._s_0.Z = 0.0;
    TBSpline<UE::Math::TVector<double>,3>::AddValue
              ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,
               (TVector<double> *)&local_40._s_0);
  }
LAB_1435c139e:
  uVar13 = 0;
  if (0 < (int)local_res20[0]) {
    lVar14 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar13 < (this->TangentModes).ArrayNum) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      local_res18[0] = (this->TangentModes).AllocatorInstance.Data[lVar14];
      plVar5 = *(longlong **)&param_1->field_0x8;
      if ((FScriptContainerElement *)plVar5[1] < (FScriptContainerElement *)*plVar5 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
      }
      else {
        local_res18[0] = *(FScriptContainerElement *)*plVar5;
        *plVar5 = *plVar5 + 1;
      }
      FVar7 = local_res18[0];
      if ((param_1->field_0x28 & 1) != 0) {
        uVar15 = 0;
        if ((int)uVar13 < (this->TangentModes).ArrayNum) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        (this->TangentModes).AllocatorInstance.Data[lVar14] = FVar7;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 1;
    } while ((int)uVar13 < (int)local_res20[0]);
  }
  ::operator<<(param_1,&this->bStationaryEndpoint);
  return true;
}

// SetClosedLoop @ 1435c1d00

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetClosedLoop
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,bool param_1)

{
  code *pcVar1;
  double *pdVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TVector<double> *pTVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 local_res10 [8];
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double> local_80 [4];
  
  cVar3 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
  if (param_1 == (bool)cVar3) {
    return;
  }
  if (!param_1) {
    iVar5 = (**(code **)(this->_padding_ + 0x50))();
    if (0 < iVar5) {
      TPolyBezierSpline<UE::Math::TVector<double>_>::RemoveSegment
                ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,iVar5 + -1);
    }
    goto LAB_1435c201b;
  }
  iVar5 = GetNumPoints(this);
  if (iVar5 < 2) goto LAB_1435c201b;
  iVar6 = (int)this->_padding_;
  if (iVar6 == 0) {
LAB_1435c1dd3:
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    local_e8 = 0;
    local_f8 = 0.0;
    dStack_f0 = 0.0;
  }
  else {
    if ((iVar6 == 1) || (iVar6 == 2)) {
      local_res10[0] = 0;
      `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4::
      <lambda_1>::operator()(local_res10);
    }
    else if (iVar6 != 3) {
      cVar3 = (**(code **)(this->_padding_ + 0x40))(this);
      pcVar1 = *(code **)(this->_padding_ + 0x50);
      if (cVar3 == '\0') {
        iVar6 = (*pcVar1)(this);
        iVar6 = iVar6 + 1;
      }
      else {
        iVar6 = (*pcVar1)();
      }
      if (iVar6 < 1) goto LAB_1435c1dd3;
    }
    pTVar7 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                       ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,0);
    local_e8 = *(undefined8 *)((longlong)&pTVar7->field0_0x0 + 0x10);
    uVar20 = (undefined4)local_e8;
    uVar21 = (undefined4)((ulonglong)local_e8 >> 0x20);
    uVar16 = *(undefined4 *)&pTVar7->field0_0x0;
    uVar17 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
    local_f8 = (pTVar7->field0_0x0)._s_0.X;
    pdVar2 = &(pTVar7->field0_0x0)._s_0.Y;
    uVar18 = *(undefined4 *)pdVar2;
    uVar19 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
    dStack_f0 = *pdVar2;
  }
  GetValue(this,(TVector<double> *)&local_110._s_0,iVar5 + -1);
  bVar4 = IsAutoTangent(this,iVar5 + -1);
  if ((bVar4) && (bVar4 = IsAutoTangent(this,0), bVar4)) {
    dVar11 = (double)(__real_3f800000 - this->Tension);
    uVar9 = (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar13 = ((double)CONCAT44(uVar19,uVar18) - local_110._s_0.Y) * dVar11;
    dVar14 = ((double)CONCAT44(uVar21,uVar20) - local_110._s_0.Z) * dVar11;
    dVar11 = ((double)CONCAT44(uVar17,uVar16) - local_110._s_0.X) * dVar11;
    uVar22 = SUB84(dVar14,0) ^ uVar9;
    uVar23 = (uint)((ulonglong)dVar14 >> 0x20) ^ uVar10;
    uVar12 = CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar10,SUB84(dVar11,0) ^ uVar9);
    uVar15 = CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar10,SUB84(dVar13,0) ^ uVar9);
  }
  else {
    pTVar7 = GetTangentOut(this,local_80,iVar5 + -1);
    local_e0 = (pTVar7->field0_0x0)._s_0.X;
    dStack_d8 = (pTVar7->field0_0x0)._s_0.Y;
    local_d0 = (pTVar7->field0_0x0)._s_0.Z;
    iVar5 = GetNumPoints(this);
    if (iVar5 < 2) {
      local_128._s_0.X = 0.0;
      local_128._s_0.Y = 0.0;
      local_128._s_0.Z = 0.0;
    }
    else {
      cVar3 = (**(code **)(this->_padding_ + 0x40))(this);
      if (cVar3 == '\0') {
        GetTangentOut(this,(TVector<double> *)&local_128._s_0,0);
      }
      else {
        GetTangentIn(this,(TVector<double> *)&local_128._s_0,iVar5);
      }
    }
    uVar22 = SUB84(local_128._s_0.Z,0);
    uVar23 = (uint)((ulonglong)local_128._16_8_ >> 0x20);
    uVar12 = local_128._s_0.X;
    dVar11 = local_e0;
    dVar13 = dStack_d8;
    dVar14 = local_d0;
    uVar15 = local_128._s_0.Y;
  }
  local_b0._s_0.X = dVar11 * __real_3fd5555555555555 + local_110._s_0.X;
  local_b0._s_0.Y = dVar13 * __real_3fd5555555555555 + local_110._s_0.Y;
  local_b0._s_0.Z = dVar14 * __real_3fd5555555555555 + local_110._s_0.Z;
  local_c8._s_0.X = (double)CONCAT44(uVar17,uVar16) - (double)uVar12 * __real_3fd5555555555555;
  local_c8._s_0.Y = (double)CONCAT44(uVar19,uVar18) - (double)uVar15 * __real_3fd5555555555555;
  local_c8._s_0.Z =
       (double)CONCAT44(uVar21,uVar20) - (double)CONCAT44(uVar23,uVar22) * __real_3fd5555555555555;
  local_98._s_0.Z = (double)CONCAT44(uVar21,uVar20);
  local_98._0_4_ = uVar16;
  local_98._4_4_ = uVar17;
  local_98._8_4_ = uVar18;
  local_98._12_4_ = uVar19;
  TPolyBezierSpline<UE::Math::TVector<double>_>::AppendBezierSegment
            ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
             (TVector<double> *)&local_b0._s_0,(TVector<double> *)&local_c8._s_0,
             (TVector<double> *)&local_98._s_0,Centripetal);
LAB_1435c201b:
  *(bool *)((longlong)&this->_padding_ + 1) = param_1;
  iVar5 = GetNumPoints(this);
  if (1 < iVar5) {
    uVar22 = 0;
    if (0 < iVar5) {
      lVar8 = 0;
      do {
        uVar23 = 0;
        if ((int)uVar22 < (this->TangentModes).ArrayNum) {
          uVar23 = ~uVar22 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UpdatePointTangents(this,uVar22,
                            (ETangentMode)(this->TangentModes).AllocatorInstance.Data[lVar8]);
        uVar22 = uVar22 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar5);
    }
  }
  return;
}

// UpdateBezierControlPoint @ 1435c9ff0

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateBezierControlPoint
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1,
          TVector<double> *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  if ((param_1 < (int)this->_padding_) && (-1 < param_1)) {
    uVar5 = *(undefined4 *)&param_2->field0_0x0;
    uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    if ((param_1 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = this->_padding_;
    puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    *(double *)(lVar3 + 0x10 + (longlong)param_1 * 0x18) = dVar2;
  }
  return;
}

// UpdatePointTangents @ 1435ca230

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdatePointTangents
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1,ETangentMode param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [12];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  TVector<double>_u_0 *pTVar14;
  TVector<double>_u_0 *pTVar15;
  double *pdVar16;
  TVector<double> *pTVar17;
  longlong lVar18;
  int iVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 local_res10 [16];
  double local_res20;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b8;
  undefined1 local_2a0 [16];
  double local_290;
  TVector<double>_u_0 local_288;
  double local_270;
  double dStack_268;
  double local_260;
  undefined1 local_258 [16];
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_210;
  TVector<double>_u_0 local_1f8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  double local_1d0;
  TVector<double>_u_0 local_1c8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  TVector<double> local_138;
  TVector<double> local_120;
  TVector<double> local_108;
  double local_e0;
  
  iVar12 = GetNumPoints(this);
  if (param_1 < 0) {
    return;
  }
  if (iVar12 <= param_1) {
    return;
  }
  if ((byte)(param_2 - User) < 2) {
    return;
  }
  GetValue(this,(TVector<double> *)&local_288._s_0,param_1);
  iVar19 = iVar12 + -1;
  if (param_1 < 1) {
    cVar10 = (**(code **)(this->_padding_ + 0x40))();
    if (cVar10 == '\0') {
      pTVar15 = &local_210;
      local_210._s_0.Z = local_288._s_0.Z;
      local_210._0_4_ = local_288._0_4_;
      local_210._4_4_ = local_288._4_4_;
      local_210._8_4_ = local_288._8_4_;
      local_210._12_4_ = local_288._12_4_;
    }
    else {
      pTVar15 = &GetValue(this,&local_120,iVar19)->field0_0x0;
    }
    pTVar14 = &local_1f8;
    local_1f8._s_0.X = (((TVector<double>_u_0 *)&(pTVar15->_s_0).X)->_s_0).X;
    local_1f8._s_0.Y = (pTVar15->_s_0).Y;
    local_1f8._s_0.Z = (pTVar15->_s_0).Z;
  }
  else {
    pTVar14 = &GetValue(this,&local_138,param_1 + -1)->field0_0x0;
  }
  uVar9 = local_288._12_4_;
  uVar8 = local_288._8_4_;
  uVar7 = local_288._4_4_;
  uVar6 = local_288._0_4_;
  local_230 = (pTVar14->_s_0).Z;
  dVar21 = (((TVector<double>_u_0 *)&(pTVar14->_s_0).X)->_s_0).X;
  dVar24 = (pTVar14->_s_0).Y;
  local_240 = dVar21;
  dStack_238 = dVar24;
  if (param_1 < iVar19) {
    pTVar15 = &GetValue(this,&local_108,param_1 + 1)->field0_0x0;
  }
  else {
    cVar10 = (**(code **)(this->_padding_ + 0x40))();
    if (cVar10 == '\0') {
      local_1e0 = uVar6;
      uStack_1dc = uVar7;
      uStack_1d8 = uVar8;
      uStack_1d4 = uVar9;
      pdVar16 = (double *)&local_1e0;
      local_1d0 = local_288._s_0.Z;
    }
    else {
      iVar13 = (int)this->_padding_;
      if (iVar13 == 0) {
LAB_1435ca3be:
        local_260 = 0.0;
        pdVar16 = &local_270;
        local_270 = 0.0;
        dStack_268 = 0.0;
      }
      else {
        if ((iVar13 == 1) || (iVar13 == 2)) {
          local_res10[0] = 0;
          `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::
          __l4::<lambda_1>::operator()(local_res10);
        }
        else if (iVar13 != 3) {
          cVar10 = (**(code **)(this->_padding_ + 0x40))(this);
          pcVar2 = *(code **)(this->_padding_ + 0x50);
          if (cVar10 == '\0') {
            iVar13 = (*pcVar2)(this);
            iVar13 = iVar13 + 1;
          }
          else {
            iVar13 = (*pcVar2)();
          }
          if (iVar13 < 1) goto LAB_1435ca3be;
        }
        pTVar17 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                            ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,0);
        pdVar16 = &local_270;
        local_270 = (pTVar17->field0_0x0)._s_0.X;
        dStack_268 = (pTVar17->field0_0x0)._s_0.Y;
        local_260 = (pTVar17->field0_0x0)._s_0.Z;
      }
    }
    pTVar15 = &local_1c8;
    local_1c8._s_0.X = *pdVar16;
    local_1c8._s_0.Y = pdVar16[1];
    local_1c8._s_0.Z = pdVar16[2];
  }
  local_248 = (pTVar15->_s_0).Z;
  auVar30 = *(undefined1 (*) [16])&(pTVar15->_s_0).X;
  iVar13 = param_1 + -1;
  local_258 = auVar30;
  if ((param_1 < 1) &&
     (cVar10 = (**(code **)(this->_padding_ + 0x40))(this), iVar13 = param_1, cVar10 != '\0')) {
    iVar13 = iVar19;
  }
  fVar27 = (float)param_1;
  fVar25 = (float)iVar13;
  local_res20 = (double)CONCAT44(local_res20._4_4_,fVar27);
  if (param_1 < iVar19) {
    fVar27 = (float)(param_1 + 1);
  }
  else {
    cVar10 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar10 != '\0') {
      fVar27 = 0.0;
    }
  }
  cVar10 = (**(code **)(this->_padding_ + 0x40))(this);
  if ((cVar10 == '\0') || (param_1 != 0)) {
    cVar10 = (**(code **)(this->_padding_ + 0x40))(this);
    if ((cVar10 != '\0') && (param_1 == iVar19)) {
      fVar27 = fVar27 + (float)iVar12;
    }
  }
  else {
    fVar25 = fVar25 - (float)iVar12;
  }
  GetTangentIn(this,(TVector<double> *)&local_2e8._s_0,param_1);
  GetTangentOut(this,(TVector<double> *)&local_2d0._s_0,param_1);
  dVar26 = auVar30._0_8_;
  dVar4 = auVar30._8_8_;
  switch(param_2) {
  case Auto:
  case AutoClamped:
    fVar20 = fVar27 - fVar25;
    if (fVar27 - fVar25 <= __real_38d1b717) {
      fVar20 = __real_38d1b717;
    }
    auVar29._8_4_ = auVar30._8_4_;
    auVar29._0_8_ = dVar4;
    auVar29._12_4_ = auVar30._12_4_;
    dVar22 = __real_3ff0000000000000 / (double)fVar20;
    dVar28 = (double)(__real_3f800000 - this->Tension);
    local_2b8._s_0.X = (dVar26 - dVar21) * dVar22 * dVar28;
    local_2b8._s_0.Y = (dVar4 - dVar24) * dVar22 * dVar28;
    uVar3 = (local_248 - local_230) * dVar22 * dVar28;
    local_2b8._s_0.Z = (double)uVar3;
    if (param_2 == AutoClamped) {
      fVar20 = fVar27 - local_res20._0_4_;
      if (fVar27 - local_res20._0_4_ <= __real_38d1b717) {
        fVar20 = __real_38d1b717;
      }
      fVar27 = local_res20._0_4_ - fVar25;
      if (local_res20._0_4_ - fVar25 <= __real_38d1b717) {
        fVar27 = __real_38d1b717;
      }
      dVar28 = __real_3ff0000000000000 / (double)fVar27;
      dVar22 = ((double)CONCAT44(local_288._12_4_,local_288._8_4_) - dVar24) * dVar28;
      dVar23 = ((double)CONCAT44(local_288._4_4_,local_288._0_4_) - dVar21) * dVar28;
      dVar28 = (local_288._s_0.Z - local_230) * dVar28;
      dVar21 = __real_3ff0000000000000 / (double)fVar20;
      dVar4 = (dVar4 - (double)CONCAT44(local_288._12_4_,local_288._8_4_)) * dVar21;
      dVar24 = (dVar26 - (double)CONCAT44(local_288._4_4_,local_288._0_4_)) * dVar21;
      dVar21 = (local_248 - local_288._s_0.Z) * dVar21;
      fVar25 = (float)SQRT(dVar4 * dVar4 + dVar24 * dVar24 + dVar21 * dVar21);
      fVar27 = (float)SQRT(dVar22 * dVar22 + dVar23 * dVar23 + dVar28 * dVar28);
      if (fVar27 <= fVar25) {
        fVar25 = fVar27;
      }
      dVar24 = (double)fVar25;
      dVar21 = local_2b8._s_0.X * local_2b8._s_0.X + local_2b8._s_0.Y * local_2b8._s_0.Y +
               (double)uVar3 * (double)uVar3;
      if ((dVar24 < SQRT(dVar21)) && (__real_3e45798ee2308c3a < SQRT(dVar21))) {
        if (dVar21 == __real_3ff0000000000000) {
LAB_1435ca771:
          local_2a0._8_8_ = local_2b8._s_0.Y;
          local_2a0._0_8_ = local_2b8._s_0.X;
        }
        else {
          if (__real_3e45798ee0000000 <= dVar21) {
            local_res20 = __real_3ff0000000000000 / SQRT(dVar21);
            local_2b8._s_0.X = local_2b8._s_0.X * local_res20;
            local_2b8._s_0.Y = local_2b8._s_0.Y * local_res20;
            uVar3 = (double)uVar3 * local_res20;
            goto LAB_1435ca771;
          }
          local_2b8._s_0.X = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
          auVar5._4_8_ = auVar29._8_8_;
          auVar5._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          auVar30._0_8_ = auVar5._0_8_ << 0x20;
          auVar30._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          auVar30._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_2b8._s_0.Y = (double)auVar30._8_8_;
          local_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
          uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        local_2b8._s_0.X = local_2b8._s_0.X * dVar24;
        local_2b8._s_0.Y = local_2b8._s_0.Y * dVar24;
        local_2b8._s_0.Z = (double)uVar3 * dVar24;
        local_290 = (double)uVar3;
      }
    }
    if ((this->bStationaryEndpoint == false) ||
       (((param_1 != 0 && (param_1 != iVar19)) ||
        (cVar10 = (**(code **)(this->_padding_ + 0x40))(this), cVar10 != '\0')))) {
      local_2e8._0_4_ = local_2b8._0_4_;
      local_2e8._4_4_ = local_2b8._4_4_;
      local_2e8._8_4_ = local_2b8._8_4_;
      local_2e8._12_4_ = local_2b8._12_4_;
    }
    else {
      local_2b8._s_0.Z = 0.0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      local_2e8._0_4_ = 0;
      local_2e8._4_4_ = 0;
      local_2e8._8_4_ = 0;
      local_2e8._12_4_ = 0;
    }
    local_2e8._s_0.Z = local_2b8._s_0.Z;
    local_2d0._s_0.Z = local_2b8._s_0.Z;
    local_2d0._4_4_ = local_2e8._4_4_;
    local_2d0._0_4_ = local_2e8._0_4_;
    local_2d0._12_4_ = local_2e8._12_4_;
    local_2d0._8_4_ = local_2e8._8_4_;
    break;
  case User:
    break;
  default:
    dVar28 = (double)(__real_3f800000 - this->Tension);
    local_2e8._s_0.X = (dVar26 - dVar21) * dVar28;
    local_2e8._s_0.Y = (dVar4 - dVar24) * dVar28;
    local_2e8._s_0.Z = (local_248 - local_230) * dVar28;
    local_2d0._s_0.X = local_2e8._s_0.X;
    local_2d0._s_0.Y = local_2e8._s_0.Y;
    local_2d0._s_0.Z = local_2e8._s_0.Z;
    break;
  case Linear:
    if ((param_1 < 1) && (cVar10 = (**(code **)(this->_padding_ + 0x40))(this), cVar10 == '\0')) {
      local_2e8._s_0.Z = 0.0;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = 0;
      local_2e8._s_0.X = 0.0;
      local_2e8._s_0.Y = 0.0;
    }
    else {
      local_2e8._s_0.X = (double)CONCAT44(local_288._4_4_,local_288._0_4_) - dVar21;
      local_2e8._s_0.Y = (double)CONCAT44(local_288._12_4_,local_288._8_4_) - dVar24;
      local_2e8._s_0.Z = local_288._s_0.Z - local_230;
    }
    if ((param_1 < iVar19) || (cVar10 = (**(code **)(this->_padding_ + 0x40))(this), cVar10 != '\0')
       ) {
      local_2d0._s_0.X = dVar26 - (double)CONCAT44(local_288._4_4_,local_288._0_4_);
      local_2d0._s_0.Y = dVar4 - (double)CONCAT44(local_288._12_4_,local_288._8_4_);
      local_2d0._s_0.Z = local_248 - local_288._s_0.Z;
    }
    else {
      local_2d0._s_0.Z = 0.0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      local_2d0._s_0.X = 0.0;
      local_2d0._s_0.Y = 0.0;
    }
    break;
  case Constant:
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    local_2e8._s_0.X = 0.0;
    local_2e8._s_0.Y = 0.0;
    local_140 = 0;
    local_2e8._s_0.Z = 0.0;
    local_2d0._s_0.Z = 0.0;
    local_2d0._s_0.X = 0.0;
    local_2d0._s_0.Y = 0.0;
    local_150 = 0;
    uStack_148 = 0;
  }
  iVar12 = GetNumPoints(this);
  dVar21 = __real_3fd5555555555555;
  if (param_1 < iVar12) {
    if (param_1 == 0) {
      cVar10 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
      if ((cVar10 == '\0') || (iVar12 = (**(code **)(this->_padding_ + 0x50))(this), iVar12 < 1))
      goto LAB_1435caad5;
      iVar12 = (**(code **)(this->_padding_ + 0x50))(this);
      pTVar17 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,iVar12 * 4 + -1
                          );
      iVar12 = iVar12 * 4 + -2;
      pTVar15 = &local_2b8;
      local_228._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
      local_2b8._s_0.X = (pTVar17->field0_0x0)._s_0.X - local_2e8._s_0.X * dVar21;
      local_2b8._s_0.Y = (pTVar17->field0_0x0)._s_0.Y - local_2e8._s_0.Y * dVar21;
      local_2b8._s_0.Z = local_228._s_0.Z - local_2e8._s_0.Z * dVar21;
    }
    else {
      iVar12 = param_1 * 4 + -2;
      if ((int)this->_padding_ <= iVar12) goto LAB_1435caad5;
      pTVar17 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,
                           param_1 * 4 + -1);
      pTVar15 = &local_228;
      local_2b8._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
      local_228._s_0.X = (pTVar17->field0_0x0)._s_0.X - local_2e8._s_0.X * dVar21;
      local_228._s_0.Y = (pTVar17->field0_0x0)._s_0.Y - local_2e8._s_0.Y * dVar21;
      local_228._s_0.Z = local_2b8._s_0.Z - local_2e8._s_0.Z * dVar21;
    }
    UpdateBezierControlPoint(this,iVar12,(TVector<double> *)&pTVar15->_s_0);
  }
LAB_1435caad5:
  iVar12 = GetNumPoints(this);
  if ((param_1 != iVar12 + -1) ||
     (cVar10 = (**(code **)(this->_padding_ + 0x40))(this), cVar10 != '\0')) {
    iVar12 = param_1 * 4;
    iVar19 = iVar12 + 1;
    if (iVar19 < (int)this->_padding_) {
      pTVar17 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,iVar12);
      dVar24 = (pTVar17->field0_0x0)._s_0.X;
      dVar4 = (pTVar17->field0_0x0)._s_0.Y;
      local_e0 = (pTVar17->field0_0x0)._s_0.Z;
      dVar26 = local_2d0._s_0.X * dVar21;
      dVar28 = local_2d0._s_0.Y * dVar21;
      dVar21 = local_2d0._s_0.Z * dVar21 + local_e0;
      if ((iVar19 < (int)this->_padding_) && (-1 < iVar19)) {
        if ((iVar19 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar18 = (longlong)iVar12 + 1;
        lVar1 = this->_padding_;
        *(double *)(lVar1 + lVar18 * 0x18) = dVar26 + dVar24;
        *(double *)(lVar1 + 8 + lVar18 * 0x18) = dVar28 + dVar4;
        *(double *)(lVar1 + 0x10 + lVar18 * 0x18) = dVar21;
      }
    }
  }
  return;
}

// operator() @ 15049f8b0

bool __thiscall
`UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1057025785514165567>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1057025785514165567>,
                       &`public:___cdecl_`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints(void)const___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

