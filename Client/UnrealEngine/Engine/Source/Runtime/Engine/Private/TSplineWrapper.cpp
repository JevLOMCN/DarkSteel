// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// ~TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> @ 147a29660

void __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::
~TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this)

{
  void *pvVar1;
  
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// ~TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> @ 147a296b0

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::
~TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this)

{
  void *pvVar1;
  
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// Clear @ 147a378a0

void __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::Clear
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147a378a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->InternalSpline)._padding_ + 8))(&this->InternalSpline);
  return;
}

// Clear @ 147a378c0

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::Clear
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147a378c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->InternalSpline)._padding_ + 8))(&this->InternalSpline);
  return;
}

// Clone @ 147a37c00

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::Clone
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this)

{
  ISplineInterface this_00;
  ISplineInterface *in_RDX;
  
  this_00 = (ISplineInterface)::operator_new(0x70);
  if (this_00 == (ISplineInterface)0x0) {
    this_00 = (ISplineInterface)0x0;
  }
  else {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)((longlong)this_00 + 8) = 0;
    ((TSplineInterface<float> *)((longlong)this_00 + 0x10))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x18) = 0;
    ((TSplineInterface<float> *)((longlong)this_00 + 0x20))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x28) = 0;
    ((TSplineInterface<float> *)((longlong)this_00 + 0x30))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x38) = 0;
    ((TSplineInterface<float> *)((longlong)this_00 + 0x40))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x48) = 0;
    ((TSplineInterface<float> *)((longlong)this_00 + 0x50))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x58) = 0;
    ((TSplineInterface<float> *)((longlong)this_00 + 0x60))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x68) = 0;
    TSplineInterface<float>::TSplineInterface<float>((TSplineInterface<float> *)this_00);
    *(undefined ***)this_00 =
         &___7__TSplineWrapper_V__TPolyBezierSpline_M_Spline_Geometry_UE___Spline_Geometry_UE__6B_;
    TPolyBezierSpline<float>::TPolyBezierSpline<float>
              ((TPolyBezierSpline<float> *)((longlong)this_00 + 0x10));
  }
  TPolyBezierSpline<float>::operator=
            ((TPolyBezierSpline<float> *)((longlong)this_00 + 0x10),&this->InternalSpline);
  *(EOutOfBoundsHandlingMode *)((longlong)this_00 + 8) = (EOutOfBoundsHandlingMode)this->_padding_;
  *(EOutOfBoundsHandlingMode *)((longlong)this_00 + 0xc) =
       *(EOutOfBoundsHandlingMode *)((longlong)&this->_padding_ + 4);
  *in_RDX = this_00;
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )in_RDX;
}

// Clone @ 147a37ca0

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::Clone
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this)

{
  ISplineInterface this_00;
  ISplineInterface *in_RDX;
  
  this_00 = (ISplineInterface)::operator_new(0x70);
  if (this_00 == (ISplineInterface)0x0) {
    this_00 = (ISplineInterface)0x0;
  }
  else {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)((longlong)this_00 + 8) = 0;
    ((TSplineInterface<UE::Math::TQuat<double>_> *)((longlong)this_00 + 0x10))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x18) = 0;
    ((TSplineInterface<UE::Math::TQuat<double>_> *)((longlong)this_00 + 0x20))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x28) = 0;
    ((TSplineInterface<UE::Math::TQuat<double>_> *)((longlong)this_00 + 0x30))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x38) = 0;
    ((TSplineInterface<UE::Math::TQuat<double>_> *)((longlong)this_00 + 0x40))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x48) = 0;
    ((TSplineInterface<UE::Math::TQuat<double>_> *)((longlong)this_00 + 0x50))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x58) = 0;
    ((TSplineInterface<UE::Math::TQuat<double>_> *)((longlong)this_00 + 0x60))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x68) = 0;
    TSplineInterface<UE::Math::TQuat<double>_>::TSplineInterface<UE::Math::TQuat<double>_>
              ((TSplineInterface<UE::Math::TQuat<double>_> *)this_00);
    *(undefined ***)this_00 =
         &
         ___7__TSplineWrapper_V__TPolyBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE__6B_
    ;
    TPolyBezierSpline<UE::Math::TQuat<double>_>::TPolyBezierSpline<UE::Math::TQuat<double>_>
              ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)((longlong)this_00 + 0x10));
  }
  TPolyBezierSpline<UE::Math::TQuat<double>_>::operator=
            ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)((longlong)this_00 + 0x10),
             &this->InternalSpline);
  *(EOutOfBoundsHandlingMode *)((longlong)this_00 + 8) = (EOutOfBoundsHandlingMode)this->_padding_;
  *(EOutOfBoundsHandlingMode *)((longlong)this_00 + 0xc) =
       *(EOutOfBoundsHandlingMode *)((longlong)&this->_padding_ + 4);
  *in_RDX = this_00;
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )in_RDX;
}

// EvaluateImpl @ 147a42f70

float __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::EvaluateImpl
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this,float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a42f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((this->InternalSpline)._padding_ + 0x90))(&this->InternalSpline);
  return fVar1;
}

// EvaluateImpl @ 147a42f90

TQuat<double> * __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::EvaluateImpl
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this,
          TQuat<double> *__return_storage_ptr__,float param_1)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x90))(&this->InternalSpline);
  return __return_storage_ptr__;
}

// FindNearest @ 147a46440

float __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::FindNearest
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this,float *param_1,
          float *param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a46448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((this->InternalSpline)._padding_ + 0x68))(&this->InternalSpline);
  return fVar1;
}

// FindNearest @ 147a46460

float __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::FindNearest
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this,
          TQuat<double> *param_1,float *param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a46468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((this->InternalSpline)._padding_ + 0x68))(&this->InternalSpline);
  return fVar1;
}

// GetImplementationName @ 147a50f80

FString * __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::
GetImplementationName
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this,
          FString *__return_storage_ptr__)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x28))(&this->InternalSpline);
  return __return_storage_ptr__;
}

// GetImplementationName @ 147a50fb0

FString * __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::
GetImplementationName
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this,
          FString *__return_storage_ptr__)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x28))(&this->InternalSpline);
  return __return_storage_ptr__;
}

// GetNumberOfSegments @ 147a54230

int __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::
GetNumberOfSegments(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a54238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x50))(&this->InternalSpline);
  return iVar1;
}

// GetNumberOfSegments @ 147a54250

int __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::
GetNumberOfSegments(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>
                    *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a54258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x50))(&this->InternalSpline);
  return iVar1;
}

// GetParameterSpace @ 147a55c60

TInterval1<float> __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::
GetParameterSpace(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this)

{
  TInterval1<float> in_RDX;
  
  (**(code **)((this->InternalSpline)._padding_ + 0x30))(&this->InternalSpline);
  return in_RDX;
}

// GetParameterSpace @ 147a55c90

TInterval1<float> __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::
GetParameterSpace(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>
                  *this)

{
  TInterval1<float> in_RDX;
  
  (**(code **)((this->InternalSpline)._padding_ + 0x30))(&this->InternalSpline);
  return in_RDX;
}

// GetPostInfinityMode @ 147a56680

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::
GetPostInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this)

{
  EOutOfBoundsHandlingMode EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a56688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x88))(&this->InternalSpline);
  return EVar1;
}

// GetPostInfinityMode @ 147a566a0

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::
GetPostInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>
                    *this)

{
  EOutOfBoundsHandlingMode EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a566a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x88))(&this->InternalSpline);
  return EVar1;
}

// GetPreInfinityMode @ 147a566e0

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::
GetPreInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this)

{
  EOutOfBoundsHandlingMode EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a566e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x80))(&this->InternalSpline);
  return EVar1;
}

// GetPreInfinityMode @ 147a56700

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::
GetPreInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>
                   *this)

{
  EOutOfBoundsHandlingMode EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a56708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x80))(&this->InternalSpline);
  return EVar1;
}

// GetSegmentParameterRange @ 147a58f10

TInterval1<float> __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::
GetSegmentParameterRange
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this,int param_1)

{
  TInterval1<float> TVar1;
  float in_register_00000014;
  
  TVar1.Max = in_register_00000014;
  TVar1.Min = (float)param_1;
  (**(code **)((this->InternalSpline)._padding_ + 0x58))(&this->InternalSpline);
  return TVar1;
}

// GetSegmentParameterRange @ 147a58f40

TInterval1<float> __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::
GetSegmentParameterRange
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this,
          int param_1)

{
  TInterval1<float> TVar1;
  float in_register_00000014;
  
  TVar1.Max = in_register_00000014;
  TVar1.Min = (float)param_1;
  (**(code **)((this->InternalSpline)._padding_ + 0x58))(&this->InternalSpline);
  return TVar1;
}

// GetValueTypeName @ 147a5be80

FString * __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::
GetValueTypeName(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this,
                FString *__return_storage_ptr__)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x20))(&this->InternalSpline);
  return __return_storage_ptr__;
}

// GetValueTypeName @ 147a5beb0

FString * __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::GetValueTypeName
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this,
          FString *__return_storage_ptr__)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x20))(&this->InternalSpline);
  return __return_storage_ptr__;
}

// IsClosedLoop @ 147a62ef0

bool __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::IsClosedLoop
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a62ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x40))(&this->InternalSpline);
  return (bool)uVar1;
}

// IsClosedLoop @ 147a62f10

bool __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::IsClosedLoop
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a62f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x40))(&this->InternalSpline);
  return (bool)uVar1;
}

// IsEqual @ 147a63120

bool __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::IsEqual
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this,
          ISplineInterface *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a63128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x18))(&this->InternalSpline);
  return (bool)uVar1;
}

// IsEqual @ 147a63140

bool __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::IsEqual
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this,
          ISplineInterface *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a63148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x18))(&this->InternalSpline);
  return (bool)uVar1;
}

// Serialize @ 147a876b0

bool __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::Serialize
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this,FArchive *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = TSplineInterface<float>::Serialize((TSplineInterface<float> *)this,param_1);
  if (!bVar1) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x000147a876e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((this->InternalSpline)._padding_ + 0x60))(&this->InternalSpline,param_1);
  return (bool)uVar2;
}

// Serialize @ 147a87700

bool __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::Serialize
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this,
          FArchive *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = TSplineInterface<UE::Math::TQuat<double>_>::Serialize
                    ((TSplineInterface<UE::Math::TQuat<double>_> *)this,param_1);
  if (!bVar1) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x000147a87739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((this->InternalSpline)._padding_ + 0x60))(&this->InternalSpline,param_1);
  return (bool)uVar2;
}

// SetClosedLoop @ 147a8b6a0

void __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::SetClosedLoop
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147a8b6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->InternalSpline)._padding_ + 0x38))(&this->InternalSpline);
  return;
}

// SetClosedLoop @ 147a8b6c0

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::SetClosedLoop
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this,
          bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147a8b6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->InternalSpline)._padding_ + 0x38))(&this->InternalSpline);
  return;
}

// SetPostInfinityMode @ 147a922e0

void __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::
SetPostInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this,
                   EOutOfBoundsHandlingMode param_1)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x78))(&this->InternalSpline);
  *(EOutOfBoundsHandlingMode *)((longlong)&this->_padding_ + 4) = param_1;
  return;
}

// SetPostInfinityMode @ 147a92310

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::
SetPostInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>
                    *this,EOutOfBoundsHandlingMode param_1)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x78))(&this->InternalSpline);
  *(EOutOfBoundsHandlingMode *)((longlong)&this->_padding_ + 4) = param_1;
  return;
}

// SetPreInfinityMode @ 147a92360

void __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::
SetPreInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this,
                  EOutOfBoundsHandlingMode param_1)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x70))(&this->InternalSpline);
  *(EOutOfBoundsHandlingMode *)&this->_padding_ = param_1;
  return;
}

// SetPreInfinityMode @ 147a92390

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::
SetPreInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>
                   *this,EOutOfBoundsHandlingMode param_1)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x70))(&this->InternalSpline);
  *(EOutOfBoundsHandlingMode *)&this->_padding_ = param_1;
  return;
}

