// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// TSplineInterface<float> @ 147a24040

TSplineInterface<float> * __thiscall
UE::Geometry::Spline::TSplineInterface<float>::TSplineInterface<float>
          (TSplineInterface<float> *this)

{
  ForAnyElementType _Src;
  int iVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7__TSplineInterface_M_Spline_Geometry_UE__6B_;
  this->PreInfinityMode = Zero;
  iVar1 = TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
  _Src = TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance;
  this->PostInfinityMode = Zero;
  if (TypeName.Data.ArrayNum < 2) {
    lVar2 = (longlong)TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
    TypeName.Data.ArrayNum = TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
    if ((TSplineValueTypeTraits<float>::Name.Data.ArrayNum == 0) && (TypeName.Data.ArrayMax == 0)) {
      TypeName.Data.ArrayMax = 0;
      return this;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,TSplineValueTypeTraits<float>::Name.Data.ArrayNum,TypeName.Data.ArrayMax,
               (ForAnyElementType *)&TypeName,TSplineValueTypeTraits<float>::Name.Data.ArrayNum,
               &TypeName.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(TypeName.Data.AllocatorInstance.Data,_Src.Data,lVar2 * 2);
    }
  }
  return this;
}

// TSplineInterface<UE::Math::TQuat<double>_> @ 147a24120

TSplineInterface<UE::Math::TQuat<double>_> * __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::
TSplineInterface<UE::Math::TQuat<double>_>(TSplineInterface<UE::Math::TQuat<double>_> *this)

{
  ForAnyElementType _Src;
  int iVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7__TSplineInterface_U__TQuat_N_Math_UE___Spline_Geometry_UE__6B_;
  this->PreInfinityMode = Zero;
  iVar1 = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
  _Src = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.AllocatorInstance;
  this->PostInfinityMode = Zero;
  if (TypeName.Data.ArrayNum < 2) {
    lVar2 = (longlong)TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    TypeName.Data.ArrayNum = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    if ((TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum == 0) &&
       (TypeName.Data.ArrayMax == 0)) {
      TypeName.Data.ArrayMax = 0;
      return this;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum,
               TypeName.Data.ArrayMax,(ForAnyElementType *)&TypeName,
               TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum,
               &TypeName.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(TypeName.Data.AllocatorInstance.Data,_Src.Data,lVar2 * 2);
    }
  }
  return this;
}

// ~TSplineInterface<float> @ 147a29640

void __thiscall
UE::Geometry::Spline::TSplineInterface<float>::~TSplineInterface<float>
          (TSplineInterface<float> *this)

{
  return;
}

// ~TSplineInterface<UE::Math::TQuat<double>_> @ 147a29650

void __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::
~TSplineInterface<UE::Math::TQuat<double>_>(TSplineInterface<UE::Math::TQuat<double>_> *this)

{
  return;
}

// Evaluate @ 147a42420

TVector<double> * __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::Evaluate
          (TSplineInterface<UE::Math::TVector<double>_> *this,
          TVector<double> *__return_storage_ptr__,float param_1)

{
  EOutOfBoundsHandlingMode EVar1;
  code *pcVar2;
  float *pfVar3;
  float fVar4;
  float local_res8;
  float local_resc;
  
  pfVar3 = (float *)(**(code **)(this->_padding_ + 0x30))(this,&local_res8);
  if (pfVar3[1] <= *pfVar3 && *pfVar3 != pfVar3[1]) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  pcVar2 = *(code **)(this->_padding_ + 0x90);
  (**(code **)(this->_padding_ + 0x30))(this,&local_res8);
  if (local_res8 <= param_1) {
    fVar4 = param_1;
    if (param_1 <= local_resc) goto LAB_147a424e4;
    EVar1 = this->PostInfinityMode;
    fVar4 = local_resc;
  }
  else {
    EVar1 = this->PreInfinityMode;
    fVar4 = local_res8;
  }
  if (EVar1 == Zero) {
    fVar4 = 0.0;
  }
  else if ((EVar1 != Constant) && (fVar4 = param_1, EVar1 == Cycle)) {
    fVar4 = FGenericPlatformMath::Fmod(param_1 - local_res8,local_resc - local_res8);
    fVar4 = fVar4 + local_res8;
  }
LAB_147a424e4:
  (*pcVar2)(this,__return_storage_ptr__,fVar4);
  return __return_storage_ptr__;
}

// GetPostInfinityMode @ 147a56660

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::TSplineInterface<float>::GetPostInfinityMode(TSplineInterface<float> *this)

{
  return this->PostInfinityMode;
}

// GetPostInfinityMode @ 147a56670

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::GetPostInfinityMode
          (TSplineInterface<UE::Math::TQuat<double>_> *this)

{
  return this->PostInfinityMode;
}

// GetPreInfinityMode @ 147a566c0

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::TSplineInterface<float>::GetPreInfinityMode(TSplineInterface<float> *this)

{
  return this->PreInfinityMode;
}

// GetPreInfinityMode @ 147a566d0

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::GetPreInfinityMode
          (TSplineInterface<UE::Math::TQuat<double>_> *this)

{
  return this->PreInfinityMode;
}

// GetTypeId @ 147a5b080

uint __thiscall
UE::Geometry::Spline::TSplineInterface<float>::GetTypeId(TSplineInterface<float> *this)

{
  return 0;
}

// GetTypeId @ 147a5b090

uint __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::GetTypeId
          (TSplineInterface<UE::Math::TQuat<double>_> *this)

{
  return 0;
}

// GetValueTypeName @ 147a5bd60

FString * __thiscall
UE::Geometry::Spline::TSplineInterface<float>::GetValueTypeName
          (TSplineInterface<float> *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = TypeName.Data.ArrayNum;
  _Src = TypeName.Data.AllocatorInstance;
  lVar3 = (longlong)TypeName.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = TypeName.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

// GetValueTypeName @ 147a5bdf0

FString * __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::GetValueTypeName
          (TSplineInterface<UE::Math::TQuat<double>_> *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = TypeName.Data.ArrayNum;
  _Src = TypeName.Data.AllocatorInstance;
  lVar3 = (longlong)TypeName.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = TypeName.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

// Serialize @ 147a87510

bool __thiscall
UE::Geometry::Spline::TSplineInterface<float>::Serialize
          (TSplineInterface<float> *this,FArchive *param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  bVar2 = ISplineInterface::Serialize((ISplineInterface *)this,param_1);
  if (!bVar2) {
    return false;
  }
  local_res18[0] = (undefined1)this->PreInfinityMode;
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res20[0] = (undefined1)this->PostInfinityMode;
  if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
  }
  else {
    local_res18[0] = *(undefined1 *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,1);
  }
  else {
    local_res20[0] = *(undefined1 *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this->PreInfinityMode = (uint)(byte)local_res18[0];
    this->PostInfinityMode = (uint)(byte)local_res20[0];
  }
  return true;
}

// Serialize @ 147a875e0

bool __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::Serialize
          (TSplineInterface<UE::Math::TQuat<double>_> *this,FArchive *param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  bVar2 = ISplineInterface::Serialize((ISplineInterface *)this,param_1);
  if (!bVar2) {
    return false;
  }
  local_res18[0] = (undefined1)this->PreInfinityMode;
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res20[0] = (undefined1)this->PostInfinityMode;
  if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
  }
  else {
    local_res18[0] = *(undefined1 *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,1);
  }
  else {
    local_res20[0] = *(undefined1 *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this->PreInfinityMode = (uint)(byte)local_res18[0];
    this->PostInfinityMode = (uint)(byte)local_res20[0];
  }
  return true;
}

// SetPostInfinityMode @ 147a922c0

void __thiscall
UE::Geometry::Spline::TSplineInterface<float>::SetPostInfinityMode
          (TSplineInterface<float> *this,EOutOfBoundsHandlingMode param_1)

{
  this->PostInfinityMode = param_1;
  return;
}

// SetPostInfinityMode @ 147a922d0

void __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::SetPostInfinityMode
          (TSplineInterface<UE::Math::TQuat<double>_> *this,EOutOfBoundsHandlingMode param_1)

{
  this->PostInfinityMode = param_1;
  return;
}

// SetPreInfinityMode @ 147a92340

void __thiscall
UE::Geometry::Spline::TSplineInterface<float>::SetPreInfinityMode
          (TSplineInterface<float> *this,EOutOfBoundsHandlingMode param_1)

{
  this->PreInfinityMode = param_1;
  return;
}

// SetPreInfinityMode @ 147a92350

void __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::SetPreInfinityMode
          (TSplineInterface<UE::Math::TQuat<double>_> *this,EOutOfBoundsHandlingMode param_1)

{
  this->PreInfinityMode = param_1;
  return;
}

