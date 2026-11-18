// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 13

// StaticStruct @ 14d677cb0

UScriptStruct * __cdecl FImageCenterFocusPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FImageCenterFocusPoint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FImageCenterFocusPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FImageCenterFocusPoint,(UObject *)pUVar1,
                         L"ImageCenterFocusPoint");
  }
  return Z_Registration_Info_UScriptStruct_FImageCenterFocusPoint.OuterSingleton;
}

// GetFocus @ 14d677cf0

float __thiscall FImageCenterFocusPoint::GetFocus(FImageCenterFocusPoint *this)

{
  return this->Focus;
}

// GetNumPoints @ 14d677d00

int __thiscall FImageCenterFocusPoint::GetNumPoints(FImageCenterFocusPoint *this)

{
  return (this->Cx).Keys.ArrayNum;
}

// GetZoom @ 14d677d50

float __thiscall FImageCenterFocusPoint::GetZoom(FImageCenterFocusPoint *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Cx).Keys.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)((this->Cx).Keys.AllocatorInstance.Data + (longlong)param_1 * 0x1c + 4);
}

// FImageCenterFocusPoint @ 14d6a7b10

FImageCenterFocusPoint * __thiscall
FImageCenterFocusPoint::FImageCenterFocusPoint(FImageCenterFocusPoint *this)

{
  this->_padding_ = (longlong)&___7FImageCenterFocusPoint__6B_;
  this->Focus = 0.0;
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
  (this->Cx).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cx).Keys.ArrayNum = 0;
  (this->Cx).Keys.ArrayMax = 0;
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
  (this->Cy).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cy).Keys.ArrayNum = 0;
  (this->Cy).Keys.ArrayMax = 0;
  return this;
}

// ~FImageCenterFocusPoint @ 14d6ac460

void __thiscall FImageCenterFocusPoint::~FImageCenterFocusPoint(FImageCenterFocusPoint *this)

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

// AddPoint @ 14d6b5660

bool __thiscall
FImageCenterFocusPoint::AddPoint
          (FImageCenterFocusPoint *this,float param_1,FImageCenterInfo *param_2,float param_3,
          bool param_4)

{
  bool bVar1;
  undefined1 in_R9B;
  undefined1 uVar2;
  float fVar3;
  uint in_stack_ffffffffffffffc8;
  FKeyHandle FVar4;
  FKeyHandle local_28;
  FKeyHandle local_24 [7];
  
  fVar3 = param_1;
  bVar1 = SetPoint(this,param_1,param_2,param_3);
  if (!bVar1) {
    FKeyHandle::FKeyHandle(local_24);
    FVar4.Index = in_stack_ffffffffffffffc8 & 0xffffff00;
    FRichCurve::AddKey(&this->Cx,fVar3,param_1,(bool)in_R9B,FVar4);
    uVar2 = 1;
    FRichCurve::SetKeyTangentMode(&this->Cx,local_28,RCTM_Auto,true);
    FRichCurve::SetKeyInterpMode(&this->Cx,local_28,RCIM_Cubic);
    FRichCurve::AddKey(&this->Cy,fVar3,param_1,(bool)uVar2,(FKeyHandle)(FVar4.Index & 0xffffff00));
    FRichCurve::SetKeyTangentMode(&this->Cy,local_28,RCTM_Auto,true);
    FRichCurve::SetKeyInterpMode(&this->Cy,local_28,RCIM_Cubic);
  }
  return true;
}

// GetCurveForParameter @ 14d6d3290

FRichCurve * __thiscall
FImageCenterFocusPoint::GetCurveForParameter(FImageCenterFocusPoint *this,int param_1)

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

// GetCurveForParameter @ 14d6d32c0

FRichCurve * __thiscall
FImageCenterFocusPoint::GetCurveForParameter(FImageCenterFocusPoint *this,int param_1)

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

// GetPoint @ 14d6d7410

bool __thiscall
FImageCenterFocusPoint::GetPoint
          (FImageCenterFocusPoint *this,float param_1,FImageCenterInfo *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FKeyHandle FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar5;
  FKeyHandle local_res8;
  FKeyHandle local_38;
  
  fVar5 = param_1;
  FRealCurve::FindKey((FRealCurve *)&this->Cx,param_1,param_1);
  FVar4 = FKeyHandle::Invalid();
  if (local_res8.Index == *(uint *)CONCAT44(extraout_var,FVar4.Index)) {
    bVar2 = false;
  }
  else {
    FRealCurve::FindKey((FRealCurve *)&this->Cy,fVar5,param_1);
    FVar4 = FKeyHandle::Invalid();
    if (local_38.Index == *(uint *)CONCAT44(extraout_var_00,FVar4.Index)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CyHandle != FKeyHandle::Invalid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\ImageCenterTable.cpp"
                         ,0x1a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    fVar5 = FRichCurve::GetKeyValue(&this->Cx,local_res8);
    (param_2->PrincipalPoint).field0_0x0._s_0.X = (double)fVar5;
    fVar5 = FRichCurve::GetKeyValue(&this->Cy,local_38);
    bVar2 = true;
    (param_2->PrincipalPoint).field0_0x0._s_0.Y = (double)fVar5;
  }
  return bVar2;
}

// IsEmpty @ 14d6e1960

bool __thiscall FImageCenterFocusPoint::IsEmpty(FImageCenterFocusPoint *this)

{
  return (this->Cx).Keys.ArrayNum == 0;
}

// RemovePoint @ 14d6e8630

void __thiscall FImageCenterFocusPoint::RemovePoint(FImageCenterFocusPoint *this,float param_1)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar2;
  FKeyHandle local_res8;
  FKeyHandle local_res18;
  
  fVar2 = param_1;
  FRealCurve::FindKey((FRealCurve *)&this->Cx,param_1,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
    FRichCurve::DeleteKey(&this->Cx,local_res8);
  }
  FRealCurve::FindKey((FRealCurve *)&this->Cy,fVar2,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res18.Index != *(uint *)CONCAT44(extraout_var_00,FVar1.Index)) {
    FRichCurve::DeleteKey(&this->Cy,local_res18);
  }
  return;
}

// SetPoint @ 14d6eddd0

bool __thiscall
FImageCenterFocusPoint::SetPoint
          (FImageCenterFocusPoint *this,float param_1,FImageCenterInfo *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FKeyHandle FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar5;
  FKeyHandle local_res8;
  FKeyHandle local_38;
  
  fVar5 = param_1;
  FRealCurve::FindKey((FRealCurve *)&this->Cx,param_1,param_1);
  FVar4 = FKeyHandle::Invalid();
  if (local_res8.Index == *(uint *)CONCAT44(extraout_var,FVar4.Index)) {
    bVar2 = false;
  }
  else {
    FRealCurve::FindKey((FRealCurve *)&this->Cy,fVar5,param_1);
    FVar4 = FKeyHandle::Invalid();
    if (local_38.Index == *(uint *)CONCAT44(extraout_var_00,FVar4.Index)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CyHandle != FKeyHandle::Invalid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\ImageCenterTable.cpp"
                         ,0x40,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FRichCurve::SetKeyValue
              (&this->Cx,local_res8,(float)(param_2->PrincipalPoint).field0_0x0._s_0.X,true);
    FRichCurve::SetKeyValue
              (&this->Cy,local_38,(float)(param_2->PrincipalPoint).field0_0x0._s_0.Y,true);
    bVar2 = true;
  }
  return bVar2;
}

