// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> @ 149e33720

FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> * __thiscall
FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>
          (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *this,UPCGPolygon2DData *param_1
          ,bool param_2)

{
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FPCGAttributeAccessorKeysPolyLineData_VUPCGPolygon2DData____6B_
  ;
  this->_padding_ = (longlong)param_1;
  this->bGlobalData = param_2;
  return this;
}

// FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> @ 149e33740

FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> * __thiscall
FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>
          (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *this,UPCGPolygon2DData *param_1
          ,bool param_2)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7__FPCGAttributeAccessorKeysPolyLineData_VUPCGPolygon2DData____6B_
  ;
  this->_padding_ = (longlong)param_1;
  this->bGlobalData = param_2;
  return this;
}

// FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> @ 149e33760

FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> * __thiscall
FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>
          (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7__FPCGAttributeAccessorKeysPolyLineData_VUPCGPolygon2DData____6B_
  ;
  this->_padding_ = 0;
  this->bGlobalData = false;
  return this;
}

// FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> @ 149e33790

FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> * __thiscall
FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>
          (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *this,UPCGSplineData *param_1,
          bool param_2)

{
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FPCGAttributeAccessorKeysPolyLineData_VUPCGSplineData____6B_;
  this->_padding_ = (longlong)param_1;
  this->bGlobalData = param_2;
  return this;
}

// FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> @ 149e337b0

FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> * __thiscall
FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>
          (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *this,UPCGSplineData *param_1,
          bool param_2)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7__FPCGAttributeAccessorKeysPolyLineData_VUPCGSplineData____6B_;
  this->_padding_ = (longlong)param_1;
  this->bGlobalData = param_2;
  return this;
}

// FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> @ 149e337d0

FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> * __thiscall
FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>
          (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7__FPCGAttributeAccessorKeysPolyLineData_VUPCGSplineData____6B_;
  this->_padding_ = 0;
  this->bGlobalData = false;
  return this;
}

// ~FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> @ 149e36590

void __thiscall
FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
~FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>
          (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *this)

{
  return;
}

// ~FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> @ 149e365a0

void __thiscall
FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
~FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>
          (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *this)

{
  return;
}

// GetNum @ 149e5c2f0

int __thiscall
FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::GetNum
          (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *this)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if (this->bGlobalData != false) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000149e5c30e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*plVar1 + 0x4a8))(plVar1);
  return iVar2;
}

// GetNum @ 149e5c320

int __thiscall
FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::GetNum
          (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *this)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if (this->bGlobalData != false) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000149e5c33e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*plVar1 + 0x4a8))(plVar1);
  return iVar2;
}

