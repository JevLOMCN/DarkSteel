// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 9

// TSplineInterface<UE::Math::TVector<double>_> @ 1435673d0

TSplineInterface<UE::Math::TVector<double>_> * __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::
TSplineInterface<UE::Math::TVector<double>_>(TSplineInterface<UE::Math::TVector<double>_> *this)

{
  ForAnyElementType _Src;
  int iVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7__TSplineInterface_U__TVector_N_Math_UE___Spline_Geometry_UE__6B_
  ;
  this->PreInfinityMode = Zero;
  iVar1 = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
  _Src = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.AllocatorInstance;
  this->PostInfinityMode = Zero;
  if (TypeName.Data.ArrayNum < 2) {
    lVar2 = (longlong)TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    TypeName.Data.ArrayNum = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    if ((TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum == 0) &&
       (TypeName.Data.ArrayMax == 0)) {
      TypeName.Data.ArrayMax = 0;
      return this;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum,
               TypeName.Data.ArrayMax,(ForAnyElementType *)&TypeName,
               TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum,
               &TypeName.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(TypeName.Data.AllocatorInstance.Data,_Src.Data,lVar2 * 2);
    }
  }
  return this;
}

// ~TSplineInterface<UE::Math::TVector<double>_> @ 143568d60

void __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::
~TSplineInterface<UE::Math::TVector<double>_>(TSplineInterface<UE::Math::TVector<double>_> *this)

{
  return;
}

// GetPostInfinityMode @ 1435b2a00

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::GetPostInfinityMode
          (TSplineInterface<UE::Math::TVector<double>_> *this)

{
  return this->PostInfinityMode;
}

// GetPreInfinityMode @ 1435b2a50

EOutOfBoundsHandlingMode __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::GetPreInfinityMode
          (TSplineInterface<UE::Math::TVector<double>_> *this)

{
  return this->PreInfinityMode;
}

// GetTypeId @ 1435b52d0

uint __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::GetTypeId
          (TSplineInterface<UE::Math::TVector<double>_> *this)

{
  return 0;
}

// GetValueTypeName @ 1435b54b0

FString * __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::GetValueTypeName
          (TSplineInterface<UE::Math::TVector<double>_> *this,FString *__return_storage_ptr__)

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

// Serialize @ 1435c0f70

bool __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::Serialize
          (TSplineInterface<UE::Math::TVector<double>_> *this,FArchive *param_1)

{
  longlong *plVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [4];
  
  local_res20[0] = 1;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_1->field_0x28 & 4) != 0) {
    local_28[0] = (**(code **)(this->_padding_ + 0x48))(this);
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_28,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_28);
    }
  }
  else {
    local_28[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  local_res10[0] = (undefined1)this->PreInfinityMode;
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res18[0] = (undefined1)this->PostInfinityMode;
  if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
  }
  else {
    local_res10[0] = *(undefined1 *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
  }
  else {
    local_res18[0] = *(undefined1 *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this->PreInfinityMode = (uint)(byte)local_res10[0];
    this->PostInfinityMode = (uint)(byte)local_res18[0];
  }
  return true;
}

// SetPostInfinityMode @ 1435c37b0

void __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::SetPostInfinityMode
          (TSplineInterface<UE::Math::TVector<double>_> *this,EOutOfBoundsHandlingMode param_1)

{
  this->PostInfinityMode = param_1;
  return;
}

// SetPreInfinityMode @ 1435c3820

void __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::SetPreInfinityMode
          (TSplineInterface<UE::Math::TVector<double>_> *this,EOutOfBoundsHandlingMode param_1)

{
  this->PreInfinityMode = param_1;
  return;
}

