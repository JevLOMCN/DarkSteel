// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 8

// Execute @ 14d6c4420

TOptional<FDistortionInfo> * __thiscall
TDelegate<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy>
::Execute(TDelegate<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy>
          *this,TOptional<FDistortionInfo> *__return_storage_ptr__,FDistortionFocusPoint *param_1,
         FDistortionFocusCurve *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&this->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,__return_storage_ptr__,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return __return_storage_ptr__;
}

// Execute @ 14d6c4490

TOptional<FDistortionInfo> * __thiscall
TDelegate<TOptional<FDistortionInfo>___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&),FDefaultDelegateUserPolicy>
::Execute(TDelegate<TOptional<FDistortionInfo>___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&),FDefaultDelegateUserPolicy>
          *this,TOptional<FDistortionInfo> *__return_storage_ptr__,FSTMapFocusPoint *param_1,
         FSTMapFocusCurve *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&this->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,__return_storage_ptr__,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return __return_storage_ptr__;
}

// Execute @ 14d6c4500

float __thiscall
TDelegate<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy>
::Execute(TDelegate<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy>
          *this,FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2,
         UTextureRenderTarget2D *param_3,UTextureRenderTarget2D *param_4)

{
  longlong *plVar1;
  float fVar2;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,local_38);
  if (*(int *)&this->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&this->field_0x8;
  }
  fVar2 = (float)(**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3,param_4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return fVar2;
}

// Execute @ 14d6c4590

float __thiscall
TDelegate<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy>
::Execute(TDelegate<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy>
          *this,FSTMapFocusPoint *param_1,FSTMapFocusCurve *param_2,UTextureRenderTarget2D *param_3,
         UTextureRenderTarget2D *param_4)

{
  longlong *plVar1;
  float fVar2;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,local_38);
  if (*(int *)&this->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&this->field_0x8;
  }
  fVar2 = (float)(**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3,param_4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return fVar2;
}

// ExecuteIfBound @ 14d6c86d0

bool __thiscall
TDelegate<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy>
                 *this,FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2,
                UTextureRenderTarget2D **param_3,UTextureRenderTarget2D **param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3,param_4);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// ExecuteIfBound @ 14d6c8760

bool __thiscall
TDelegate<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy>
                 *this,FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2,
                FLensDistortionState *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// ExecuteIfBound @ 14d6c87e0

bool __thiscall
TDelegate<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy>
                 *this,FSTMapFocusPoint *param_1,FSTMapFocusCurve *param_2,
                UTextureRenderTarget2D **param_3,UTextureRenderTarget2D **param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3,param_4);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// ExecuteIfBound @ 14d6c8870

bool __thiscall
TDelegate<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy>
                 *this,FSTMapFocusPoint *param_1,FSTMapFocusCurve *param_2,
                FLensDistortionState *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

