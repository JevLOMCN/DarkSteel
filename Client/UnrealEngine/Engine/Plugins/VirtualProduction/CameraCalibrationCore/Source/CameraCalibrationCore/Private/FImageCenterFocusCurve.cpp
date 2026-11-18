// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 11

// StaticStruct @ 14d677e10

UScriptStruct * __cdecl FImageCenterFocusCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FImageCenterFocusCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FImageCenterFocusCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FImageCenterFocusCurve,(UObject *)pUVar1,
                         L"ImageCenterFocusCurve");
  }
  return Z_Registration_Info_UScriptStruct_FImageCenterFocusCurve.OuterSingleton;
}

// FImageCenterFocusCurve @ 14d6a7a30

FImageCenterFocusCurve * __thiscall
FImageCenterFocusCurve::FImageCenterFocusCurve(FImageCenterFocusCurve *this)

{
  (this->Cx)._padding_ = 0;
  (this->Cx)._padding_ = 0;
  (this->Cx)._padding_ = 0;
  *(undefined4 *)&(this->Cx)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Cx)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Cx)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Cx)._padding_ + 4) = 0;
  (this->Cx)._padding_ = 0;
  *(undefined4 *)&(this->Cx)._padding_ = 0;
  (this->Cx)._padding_ = 0;
  (this->Cx)._padding_ = 0;
  (this->Cx)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->Cx)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->Cx)._padding_ + 4) = 0x404;
  (this->Cx).Keys.ArrayNum = 0;
  (this->Cx).Keys.ArrayMax = 0;
  (this->Cx).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cy)._padding_ = 0;
  (this->Cy)._padding_ = 0;
  (this->Cy)._padding_ = 0;
  *(undefined4 *)&(this->Cy)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Cy)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Cy)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Cy)._padding_ + 4) = 0;
  (this->Cy)._padding_ = 0;
  *(undefined4 *)&(this->Cy)._padding_ = 0;
  (this->Cy)._padding_ = 0;
  (this->Cy)._padding_ = 0;
  (this->Cy)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->Cy)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->Cy)._padding_ + 4) = 0x404;
  (this->Cy).Keys.ArrayNum = 0;
  (this->Cy).Keys.ArrayMax = 0;
  this->Zoom = 0.0;
  (this->Cy).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return this;
}

// ~FImageCenterFocusCurve @ 14d6ac3a0

void __thiscall FImageCenterFocusCurve::~FImageCenterFocusCurve(FImageCenterFocusCurve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Cy).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Cy)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Cy)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Cy)._padding_ = 0;
  pvVar2 = (void *)(this->Cy)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Cy)._padding_);
  pFVar1 = (this->Cx).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Cx)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Cx)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Cx)._padding_ = 0;
  pvVar2 = (void *)(this->Cx)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Cx)._padding_);
  return;
}

// AddPoint @ 14d6b55b0

void __thiscall
FImageCenterFocusCurve::AddPoint
          (FImageCenterFocusCurve *this,float param_1,FImageCenterInfo *param_2,float param_3)

{
  float in_XMM2_Da;
  FKeyHandle local_res18 [4];
  
  FKeyHandle::FKeyHandle(local_res18);
  FBaseFocusCurve::AddPointToCurve
            ((FBaseFocusCurve *)this,(FRichCurve *)&stack0x00000008,in_XMM2_Da,param_1,
             (float)(param_2->PrincipalPoint).field0_0x0._s_0.X,(FKeyHandle)param_3);
  FBaseFocusCurve::AddPointToCurve
            ((FBaseFocusCurve *)this,(FRichCurve *)&stack0x00000008,in_XMM2_Da,param_1,
             (float)(param_2->PrincipalPoint).field0_0x0._s_0.Y,(FKeyHandle)param_3);
  return;
}

// ChangeFocus @ 14d6b93d0

void __thiscall
FImageCenterFocusCurve::ChangeFocus
          (FImageCenterFocusCurve *this,float param_1,float param_2,float param_3)

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
    FRichCurve::SetKeyTime(&this->Cx,local_res8,param_2);
  }
  FRealCurve::FindKey((FRealCurve *)&this->Cy,fVar2,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var_00,FVar1.Index)) {
    FRichCurve::SetKeyTime(&this->Cy,local_res8,param_2);
  }
  return;
}

// GetCurveForParameter @ 14d6d3230

FRichCurve * __thiscall
FImageCenterFocusCurve::GetCurveForParameter(FImageCenterFocusCurve *this,int param_1)

{
  if ((uint)param_1 < 2) {
    if (param_1 == 0) {
      return &this->Cx;
    }
    if (param_1 == 1) {
      return &this->Cy;
    }
  }
  return (FRichCurve *)0x0;
}

// GetCurveForParameter @ 14d6d3260

FRichCurve * __thiscall
FImageCenterFocusCurve::GetCurveForParameter(FImageCenterFocusCurve *this,int param_1)

{
  FRichCurve *pFVar1;
  
  if (1 < (uint)param_1) {
    return (FRichCurve *)0x0;
  }
  if (param_1 == 0) {
    return &this->Cx;
  }
  pFVar1 = (FRichCurve *)0x0;
  if (param_1 == 1) {
    pFVar1 = &this->Cy;
  }
  return pFVar1;
}

// IsEmpty @ 14d6e1940

bool __thiscall FImageCenterFocusCurve::IsEmpty(FImageCenterFocusCurve *this)

{
  if (((this->Cx).Keys.ArrayNum == 0) && ((this->Cy).Keys.ArrayNum == 0)) {
    return true;
  }
  return false;
}

// MergeFocus @ 14d6e3ad0

void __thiscall
FImageCenterFocusCurve::MergeFocus
          (FImageCenterFocusCurve *this,float param_1,float param_2,bool param_3,float param_4)

{
  FBaseFocusCurve::MergeFocusInCurve
            ((FBaseFocusCurve *)this,&this->Cx,param_1,param_2,param_3,param_4);
  FBaseFocusCurve::MergeFocusInCurve
            ((FBaseFocusCurve *)this,&this->Cy,param_1,param_2,param_3,param_4);
  return;
}

// RemovePoint @ 14d6e85a0

void __thiscall
FImageCenterFocusCurve::RemovePoint(FImageCenterFocusCurve *this,float param_1,float param_2)

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
    FRichCurve::DeleteKey(&this->Cx,local_res8);
  }
  FRealCurve::FindKey((FRealCurve *)&this->Cy,fVar2,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var_00,FVar1.Index)) {
    FRichCurve::DeleteKey(&this->Cy,local_res8);
  }
  return;
}

// SetPoint @ 14d6edd00

void __thiscall
FImageCenterFocusCurve::SetPoint
          (FImageCenterFocusCurve *this,float param_1,FImageCenterInfo *param_2,float param_3)

{
  double dVar1;
  FKeyHandle FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar3;
  FKeyHandle local_res8;
  
  dVar1 = (param_2->PrincipalPoint).field0_0x0._s_0.X;
  fVar3 = param_1;
  FRealCurve::FindKey((FRealCurve *)this,param_1,param_1);
  FVar2 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var,FVar2.Index)) {
    FRichCurve::SetKeyValue(&this->Cx,local_res8,(float)dVar1,true);
  }
  dVar1 = (param_2->PrincipalPoint).field0_0x0._s_0.Y;
  FRealCurve::FindKey((FRealCurve *)&this->Cy,fVar3,param_1);
  FVar2 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var_00,FVar2.Index)) {
    FRichCurve::SetKeyValue(&this->Cy,local_res8,(float)dVar1,true);
  }
  return;
}

