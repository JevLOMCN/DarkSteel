// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 11

// StaticStruct @ 14d6804e0

UScriptStruct * __cdecl FFocalLengthFocusCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFocalLengthFocusCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FFocalLengthFocusCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFocalLengthFocusCurve,(UObject *)pUVar1,
                         L"FocalLengthFocusCurve");
  }
  return Z_Registration_Info_UScriptStruct_FFocalLengthFocusCurve.OuterSingleton;
}

// FFocalLengthFocusCurve @ 14d6a7850

FFocalLengthFocusCurve * __thiscall
FFocalLengthFocusCurve::FFocalLengthFocusCurve(FFocalLengthFocusCurve *this)

{
  (this->Fx)._padding_ = 0;
  (this->Fx)._padding_ = 0;
  (this->Fx)._padding_ = 0;
  *(undefined4 *)&(this->Fx)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Fx)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Fx)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Fx)._padding_ + 4) = 0;
  (this->Fx)._padding_ = 0;
  *(undefined4 *)&(this->Fx)._padding_ = 0;
  (this->Fx)._padding_ = 0;
  (this->Fx)._padding_ = 0;
  (this->Fx)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->Fx)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->Fx)._padding_ + 4) = 0x404;
  (this->Fx).Keys.ArrayNum = 0;
  (this->Fx).Keys.ArrayMax = 0;
  (this->Fx).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fy)._padding_ = 0;
  (this->Fy)._padding_ = 0;
  (this->Fy)._padding_ = 0;
  *(undefined4 *)&(this->Fy)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Fy)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Fy)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Fy)._padding_ + 4) = 0;
  (this->Fy)._padding_ = 0;
  *(undefined4 *)&(this->Fy)._padding_ = 0;
  (this->Fy)._padding_ = 0;
  (this->Fy)._padding_ = 0;
  (this->Fy)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->Fy)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->Fy)._padding_ + 4) = 0x404;
  (this->Fy).Keys.ArrayNum = 0;
  (this->Fy).Keys.ArrayMax = 0;
  this->Zoom = 0.0;
  (this->Fy).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return this;
}

// ~FFocalLengthFocusCurve @ 14d6ac210

void __thiscall FFocalLengthFocusCurve::~FFocalLengthFocusCurve(FFocalLengthFocusCurve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Fy).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Fy)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Fy)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Fy)._padding_ = 0;
  pvVar2 = (void *)(this->Fy)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Fy)._padding_);
  pFVar1 = (this->Fx).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Fx)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Fx)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Fx)._padding_ = 0;
  pvVar2 = (void *)(this->Fx)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Fx)._padding_);
  return;
}

// AddPoint @ 14d6b5100

void __thiscall
FFocalLengthFocusCurve::AddPoint
          (FFocalLengthFocusCurve *this,float param_1,FFocalLengthInfo *param_2,float param_3)

{
  float in_XMM2_Da;
  FKeyHandle local_res18 [4];
  
  FKeyHandle::FKeyHandle(local_res18);
  FBaseFocusCurve::AddPointToCurve
            ((FBaseFocusCurve *)this,(FRichCurve *)&stack0x00000008,in_XMM2_Da,param_1,
             (float)(param_2->FxFy).field0_0x0._s_0.X,(FKeyHandle)param_3);
  FBaseFocusCurve::AddPointToCurve
            ((FBaseFocusCurve *)this,(FRichCurve *)&stack0x00000008,in_XMM2_Da,param_1,
             (float)(param_2->FxFy).field0_0x0._s_0.Y,(FKeyHandle)param_3);
  return;
}

// ChangeFocus @ 14d6b9320

void __thiscall
FFocalLengthFocusCurve::ChangeFocus
          (FFocalLengthFocusCurve *this,float param_1,float param_2,float param_3)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar2;
  FKeyHandle local_res8;
  
  fVar2 = param_1;
  FRealCurve::FindKey((FRealCurve *)this,param_1,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
    FRichCurve::SetKeyTime(&this->Fx,local_res8,param_2);
  }
  FRealCurve::FindKey((FRealCurve *)&this->Fy,fVar2,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var_00,FVar1.Index)) {
    FRichCurve::SetKeyTime(&this->Fy,local_res8,param_2);
  }
  return;
}

// GetCurveForParameter @ 14d6d3170

FRichCurve * __thiscall
FFocalLengthFocusCurve::GetCurveForParameter(FFocalLengthFocusCurve *this,int param_1)

{
  if ((uint)param_1 < 2) {
    if (param_1 == 0) {
      return &this->Fx;
    }
    if (param_1 == 1) {
      return &this->Fy;
    }
  }
  return (FRichCurve *)0x0;
}

// GetCurveForParameter @ 14d6d31a0

FRichCurve * __thiscall
FFocalLengthFocusCurve::GetCurveForParameter(FFocalLengthFocusCurve *this,int param_1)

{
  FRichCurve *pFVar1;
  
  if (1 < (uint)param_1) {
    return (FRichCurve *)0x0;
  }
  if (param_1 == 0) {
    return &this->Fx;
  }
  pFVar1 = (FRichCurve *)0x0;
  if (param_1 == 1) {
    pFVar1 = &this->Fy;
  }
  return pFVar1;
}

// IsEmpty @ 14d6e1900

bool __thiscall FFocalLengthFocusCurve::IsEmpty(FFocalLengthFocusCurve *this)

{
  if (((this->Fx).Keys.ArrayNum == 0) && ((this->Fy).Keys.ArrayNum == 0)) {
    return true;
  }
  return false;
}

// MergeFocus @ 14d6e3a40

void __thiscall
FFocalLengthFocusCurve::MergeFocus
          (FFocalLengthFocusCurve *this,float param_1,float param_2,bool param_3,float param_4)

{
  FBaseFocusCurve::MergeFocusInCurve
            ((FBaseFocusCurve *)this,&this->Fx,param_1,param_2,param_3,param_4);
  FBaseFocusCurve::MergeFocusInCurve
            ((FBaseFocusCurve *)this,&this->Fy,param_1,param_2,param_3,param_4);
  return;
}

// RemovePoint @ 14d6e8360

void __thiscall
FFocalLengthFocusCurve::RemovePoint(FFocalLengthFocusCurve *this,float param_1,float param_2)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar2;
  FKeyHandle local_res8;
  
  fVar2 = param_1;
  FRealCurve::FindKey((FRealCurve *)this,param_1,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
    FRichCurve::DeleteKey(&this->Fx,local_res8);
  }
  FRealCurve::FindKey((FRealCurve *)&this->Fy,fVar2,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var_00,FVar1.Index)) {
    FRichCurve::DeleteKey(&this->Fy,local_res8);
  }
  return;
}

// SetPoint @ 14d6ed7e0

void __thiscall
FFocalLengthFocusCurve::SetPoint
          (FFocalLengthFocusCurve *this,float param_1,FFocalLengthInfo *param_2,float param_3)

{
  double dVar1;
  FKeyHandle FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar3;
  FKeyHandle local_res8;
  
  dVar1 = (param_2->FxFy).field0_0x0._s_0.X;
  fVar3 = param_1;
  FRealCurve::FindKey((FRealCurve *)this,param_1,param_1);
  FVar2 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var,FVar2.Index)) {
    FRichCurve::SetKeyValue(&this->Fx,local_res8,(float)dVar1,true);
  }
  dVar1 = (param_2->FxFy).field0_0x0._s_0.Y;
  FRealCurve::FindKey((FRealCurve *)&this->Fy,fVar3,param_1);
  FVar2 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var_00,FVar2.Index)) {
    FRichCurve::SetKeyValue(&this->Fy,local_res8,(float)dVar1,true);
  }
  return;
}

