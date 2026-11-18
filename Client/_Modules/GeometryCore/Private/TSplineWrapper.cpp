// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 36

// ~TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_> @ 143568d70

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::
~TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
           *this)

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

// ~TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_> @ 143568dc0

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
~TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
          (TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->InternalSpline).TangentModes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->InternalSpline)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->InternalSpline)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->InternalSpline)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// Clear @ 14357aa40

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::Clear
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014357aa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->InternalSpline)._padding_ + 8))(&this->InternalSpline);
  return;
}

// Clear @ 14357aa60

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::Clear
          (TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014357aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->InternalSpline)._padding_ + 8))(&this->InternalSpline);
  return;
}

// Clone @ 14357ac10

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::Clone
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
           *this)

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
    ((TSplineInterface<UE::Math::TVector<double>_> *)((longlong)this_00 + 0x10))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x18) = 0;
    ((TSplineInterface<UE::Math::TVector<double>_> *)((longlong)this_00 + 0x20))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x28) = 0;
    ((TSplineInterface<UE::Math::TVector<double>_> *)((longlong)this_00 + 0x30))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x38) = 0;
    ((TSplineInterface<UE::Math::TVector<double>_> *)((longlong)this_00 + 0x40))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x48) = 0;
    ((TSplineInterface<UE::Math::TVector<double>_> *)((longlong)this_00 + 0x50))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x58) = 0;
    ((TSplineInterface<UE::Math::TVector<double>_> *)((longlong)this_00 + 0x60))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x68) = 0;
    TSplineInterface<UE::Math::TVector<double>_>::TSplineInterface<UE::Math::TVector<double>_>
              ((TSplineInterface<UE::Math::TVector<double>_> *)this_00);
    *(undefined ***)this_00 =
         &
         ___7__TSplineWrapper_V__TPolyBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE__6B_
    ;
    TPolyBezierSpline<UE::Math::TVector<double>_>::TPolyBezierSpline<UE::Math::TVector<double>_>
              ((TPolyBezierSpline<UE::Math::TVector<double>_> *)((longlong)this_00 + 0x10));
  }
  TPolyBezierSpline<UE::Math::TVector<double>_>::operator=
            ((TPolyBezierSpline<UE::Math::TVector<double>_> *)((longlong)this_00 + 0x10),
             &this->InternalSpline);
  *(EOutOfBoundsHandlingMode *)((longlong)this_00 + 8) = (EOutOfBoundsHandlingMode)this->_padding_;
  *(EOutOfBoundsHandlingMode *)((longlong)this_00 + 0xc) =
       *(EOutOfBoundsHandlingMode *)((longlong)&this->_padding_ + 4);
  *in_RDX = this_00;
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )in_RDX;
}

// Clone @ 14357acb0

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::Clone
          (TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this)

{
  ISplineInterface this_00;
  ISplineInterface *in_RDX;
  
  this_00 = (ISplineInterface)::operator_new(0xa8);
  if (this_00 == (ISplineInterface)0x0) {
    this_00 = (ISplineInterface)0x0;
  }
  else {
    memset((void *)this_00,0,0xa8);
    TSplineInterface<UE::Math::TVector<double>_>::TSplineInterface<UE::Math::TVector<double>_>
              ((TSplineInterface<UE::Math::TVector<double>_> *)this_00);
    *(undefined ***)this_00 =
         &
         ___7__TSplineWrapper_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE__6B_
    ;
    TTangentBezierSpline<UE::Math::TVector<double>_>::
    TTangentBezierSpline<UE::Math::TVector<double>_>
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)((longlong)this_00 + 0x10));
  }
  if (this_00 != (ISplineInterface)this) {
    *(float *)((longlong)this_00 + 0x88) = (this->InternalSpline).Tension;
    TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::operator=
              ((TSplineInterface<UE::Math::TVector<double>_> *)((longlong)this_00 + 0x90),
               &(this->InternalSpline).TangentModes);
    *(bool *)&((TSplineInterface<UE::Math::TVector<double>_> *)((longlong)this_00 + 0xa0))->
              _padding_ = (this->InternalSpline).bStationaryEndpoint;
    TPolyBezierSpline<UE::Math::TVector<double>_>::operator=
              ((TPolyBezierSpline<UE::Math::TVector<double>_> *)((longlong)this_00 + 0x20),
               (TPolyBezierSpline<UE::Math::TVector<double>_> *)&(this->InternalSpline)._padding_);
  }
  *(EOutOfBoundsHandlingMode *)((longlong)this_00 + 8) = (EOutOfBoundsHandlingMode)this->_padding_;
  *(EOutOfBoundsHandlingMode *)((longlong)this_00 + 0xc) =
       *(EOutOfBoundsHandlingMode *)((longlong)&this->_padding_ + 4);
  *in_RDX = this_00;
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )in_RDX;
}

// EvaluateImpl @ 14358fa80

TVector<double> * __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::EvaluateImpl
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
           *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x90))(&this->InternalSpline);
  return __return_storage_ptr__;
}

// EvaluateImpl @ 14358fab0

TVector<double> * __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
EvaluateImpl(TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
             *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x90))(&this->InternalSpline);
  return __return_storage_ptr__;
}

// FindNearest @ 143592d60

float __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::FindNearest
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
           *this,TVector<double> *param_1,float *param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143592d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((this->InternalSpline)._padding_ + 0x68))(&this->InternalSpline);
  return fVar1;
}

// FindNearest @ 143592d80

float __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FindNearest
          (TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,TVector<double> *param_1,float *param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143592d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((this->InternalSpline)._padding_ + 0x68))(&this->InternalSpline);
  return fVar1;
}

// GetImplementationName @ 1435b11e0

FString * __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::
GetImplementationName
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
           *this,FString *__return_storage_ptr__)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x28))(&this->InternalSpline);
  return __return_storage_ptr__;
}

// GetImplementationName @ 1435b1210

FString * __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetImplementationName
          (TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FString *__return_storage_ptr__)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x28))(&this->InternalSpline);
  return __return_storage_ptr__;
}

// GetNumberOfSegments @ 1435b2070

int __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::
GetNumberOfSegments(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
                    *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435b2078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x50))(&this->InternalSpline);
  return iVar1;
}

// GetNumberOfSegments @ 1435b2090

int __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetNumberOfSegments(TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                    *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435b2098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x50))(&this->InternalSpline);
  return iVar1;
}

// GetParameterSpace @ 1435b2770

TInterval1<float> __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::
GetParameterSpace(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
                  *this)

{
  TInterval1<float> in_RDX;
  
  (**(code **)((this->InternalSpline)._padding_ + 0x30))(&this->InternalSpline);
  return in_RDX;
}

// GetParameterSpace @ 1435b27a0

TInterval1<float> __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetParameterSpace(TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                  *this)

{
  TInterval1<float> in_RDX;
  
  (**(code **)((this->InternalSpline)._padding_ + 0x30))(&this->InternalSpline);
  return in_RDX;
}

// GetPostInfinityMode @ 1435b2a10

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::
GetPostInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
                    *this)

{
  EOutOfBoundsHandlingMode EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435b2a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x88))(&this->InternalSpline);
  return EVar1;
}

// GetPostInfinityMode @ 1435b2a30

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetPostInfinityMode(TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                    *this)

{
  EOutOfBoundsHandlingMode EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435b2a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x88))(&this->InternalSpline);
  return EVar1;
}

// GetPreInfinityMode @ 1435b2a60

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::
GetPreInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
                   *this)

{
  EOutOfBoundsHandlingMode EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435b2a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x80))(&this->InternalSpline);
  return EVar1;
}

// GetPreInfinityMode @ 1435b2a80

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetPreInfinityMode(TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                   *this)

{
  EOutOfBoundsHandlingMode EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435b2a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x80))(&this->InternalSpline);
  return EVar1;
}

// GetSegmentParameterRange @ 1435b2c70

TInterval1<float> __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::
GetSegmentParameterRange
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
           *this,int param_1)

{
  TInterval1<float> TVar1;
  float in_register_00000014;
  
  TVar1.Max = in_register_00000014;
  TVar1.Min = (float)param_1;
  (**(code **)((this->InternalSpline)._padding_ + 0x58))(&this->InternalSpline);
  return TVar1;
}

// GetSegmentParameterRange @ 1435b2ca0

TInterval1<float> __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetSegmentParameterRange
          (TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,int param_1)

{
  TInterval1<float> TVar1;
  float in_register_00000014;
  
  TVar1.Max = in_register_00000014;
  TVar1.Min = (float)param_1;
  (**(code **)((this->InternalSpline)._padding_ + 0x58))(&this->InternalSpline);
  return TVar1;
}

// GetValueTypeName @ 1435b5540

FString * __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::
GetValueTypeName(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
                 *this,FString *__return_storage_ptr__)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x20))(&this->InternalSpline);
  return __return_storage_ptr__;
}

// GetValueTypeName @ 1435b5570

FString * __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetValueTypeName(TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                 *this,FString *__return_storage_ptr__)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x20))(&this->InternalSpline);
  return __return_storage_ptr__;
}

// IsClosedLoop @ 1435b9c50

bool __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::IsClosedLoop
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
           *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435b9c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x40))(&this->InternalSpline);
  return (bool)uVar1;
}

// IsClosedLoop @ 1435b9c70

bool __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
IsClosedLoop(TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
             *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435b9c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x40))(&this->InternalSpline);
  return (bool)uVar1;
}

// IsEqual @ 1435ba290

bool __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::IsEqual
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
           *this,ISplineInterface *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435ba298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x18))(&this->InternalSpline);
  return (bool)uVar1;
}

// IsEqual @ 1435ba2b0

bool __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::IsEqual
          (TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,ISplineInterface *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001435ba2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->InternalSpline)._padding_ + 0x18))(&this->InternalSpline);
  return (bool)uVar1;
}

// Serialize @ 1435c10d0

bool __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::Serialize
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
           *this,FArchive *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = TSplineInterface<UE::Math::TVector<double>_>::Serialize
                    ((TSplineInterface<UE::Math::TVector<double>_> *)this,param_1);
  if (!bVar1) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x0001435c1109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((this->InternalSpline)._padding_ + 0x60))(&this->InternalSpline,param_1);
  return (bool)uVar2;
}

// Serialize @ 1435c1120

bool __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::Serialize
          (TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FArchive *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = TSplineInterface<UE::Math::TVector<double>_>::Serialize
                    ((TSplineInterface<UE::Math::TVector<double>_> *)this,param_1);
  if (!bVar1) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x0001435c1159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((this->InternalSpline)._padding_ + 0x60))(&this->InternalSpline,param_1);
  return (bool)uVar2;
}

// SetClosedLoop @ 1435c1cc0

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::SetClosedLoop
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
           *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435c1cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->InternalSpline)._padding_ + 0x38))(&this->InternalSpline);
  return;
}

// SetClosedLoop @ 1435c1ce0

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
SetClosedLoop(TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435c1ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->InternalSpline)._padding_ + 0x38))(&this->InternalSpline);
  return;
}

// SetPostInfinityMode @ 1435c37c0

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::
SetPostInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
                    *this,EOutOfBoundsHandlingMode param_1)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x78))(&this->InternalSpline);
  *(EOutOfBoundsHandlingMode *)((longlong)&this->_padding_ + 4) = param_1;
  return;
}

// SetPostInfinityMode @ 1435c37f0

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
SetPostInfinityMode(TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                    *this,EOutOfBoundsHandlingMode param_1)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x78))(&this->InternalSpline);
  *(EOutOfBoundsHandlingMode *)((longlong)&this->_padding_ + 4) = param_1;
  return;
}

// SetPreInfinityMode @ 1435c3830

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>::
SetPreInfinityMode(TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>
                   *this,EOutOfBoundsHandlingMode param_1)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x70))(&this->InternalSpline);
  *(EOutOfBoundsHandlingMode *)&this->_padding_ = param_1;
  return;
}

// SetPreInfinityMode @ 1435c3860

void __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
SetPreInfinityMode(TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                   *this,EOutOfBoundsHandlingMode param_1)

{
  (**(code **)((this->InternalSpline)._padding_ + 0x70))(&this->InternalSpline);
  *(EOutOfBoundsHandlingMode *)&this->_padding_ = param_1;
  return;
}

