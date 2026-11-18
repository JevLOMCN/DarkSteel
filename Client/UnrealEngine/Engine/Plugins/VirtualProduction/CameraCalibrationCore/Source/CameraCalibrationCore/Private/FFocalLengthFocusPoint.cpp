// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 15

// StaticStruct @ 14d67f2a0

UScriptStruct * __cdecl FFocalLengthFocusPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFocalLengthFocusPoint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FFocalLengthFocusPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFocalLengthFocusPoint,(UObject *)pUVar1,
                         L"FocalLengthFocusPoint");
  }
  return Z_Registration_Info_UScriptStruct_FFocalLengthFocusPoint.OuterSingleton;
}

// GetFocus @ 14d67f320

float __thiscall FFocalLengthFocusPoint::GetFocus(FFocalLengthFocusPoint *this)

{
  return this->Focus;
}

// GetNumPoints @ 14d67f330

int __thiscall FFocalLengthFocusPoint::GetNumPoints(FFocalLengthFocusPoint *this)

{
  return (this->Fx).Keys.ArrayNum;
}

// GetZoom @ 14d67f340

float __thiscall FFocalLengthFocusPoint::GetZoom(FFocalLengthFocusPoint *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Fx).Keys.ArrayNum) {
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
  return *(float *)((this->Fx).Keys.AllocatorInstance.Data + (longlong)param_1 * 0x1c + 4);
}

// FFocalLengthFocusPoint @ 14d6a7930

FFocalLengthFocusPoint * __thiscall
FFocalLengthFocusPoint::FFocalLengthFocusPoint(FFocalLengthFocusPoint *this)

{
  this->_padding_ = (longlong)&___7FFocalLengthFocusPoint__6B_;
  this->Focus = 0.0;
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
  (this->Fx).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fx).Keys.ArrayNum = 0;
  (this->Fx).Keys.ArrayMax = 0;
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
  (this->Fy).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fy).Keys.ArrayNum = 0;
  (this->Fy).Keys.ArrayMax = 0;
  (this->ZoomPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoomPoints).ArrayNum = 0;
  (this->ZoomPoints).ArrayMax = 0;
  return this;
}

// ~FFocalLengthFocusPoint @ 14d6ac2d0

void __thiscall FFocalLengthFocusPoint::~FFocalLengthFocusPoint(FFocalLengthFocusPoint *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ZoomPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// AddPoint @ 14d6b51b0

bool __thiscall
FFocalLengthFocusPoint::AddPoint
          (FFocalLengthFocusPoint *this,float param_1,FFocalLengthInfo *param_2,float param_3,
          bool param_4)

{
  int *piVar1;
  TArray<FFocalLengthZoomPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 in_R9B;
  float fVar11;
  uint in_stack_ffffffffffffff88;
  FKeyHandle FVar12;
  FKeyHandle local_48;
  FKeyHandle local_44 [3];
  float local_38;
  undefined4 uStack_34;
  double dStack_30;
  double dStack_28;
  bool bStack_20;
  undefined7 uStack_1f;
  
  fVar11 = param_1;
  bVar5 = SetPoint(this,param_1,param_2,param_3);
  if (!bVar5) {
    FKeyHandle::FKeyHandle(local_44);
    FVar12.Index = in_stack_ffffffffffffff88 & 0xffffff00;
    FRichCurve::AddKey(&this->Fx,fVar11,param_1,(bool)in_R9B,FVar12);
    uVar6 = 1;
    FRichCurve::SetKeyTangentMode(&this->Fx,local_48,RCTM_Auto,true);
    FRichCurve::SetKeyInterpMode(&this->Fx,local_48,RCIM_Cubic);
    FRichCurve::AddKey(&this->Fy,fVar11,param_1,(bool)uVar6,(FKeyHandle)(FVar12.Index & 0xffffff00))
    ;
    FRichCurve::SetKeyTangentMode(&this->Fy,local_48,RCTM_Auto,true);
    FRichCurve::SetKeyInterpMode(&this->Fy,local_48,RCIM_Cubic);
    iVar7 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)&this->Fx,local_48);
    dStack_30 = (param_2->FxFy).field0_0x0._s_0.X;
    dStack_28 = (param_2->FxFy).field0_0x0._s_0.Y;
    pTVar2 = &this->ZoomPoints;
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    bStack_20 = param_4;
    local_38 = param_1;
    if ((pFVar9 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar9 + (longlong)(this->ZoomPoints).ArrayMax * 0x20
       )) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar8 = (this->ZoomPoints).ArrayNum;
    piVar1 = &(this->ZoomPoints).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    (this->ZoomPoints).ArrayNum = iVar8 + 1;
    lVar10 = (longlong)iVar7 * 0x20;
    pFVar9 = pFVar9 + lVar10;
    memmove(pFVar9 + 0x20,pFVar9,(longlong)(iVar8 - iVar7) << 5);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pFVar9 = pFVar3 + lVar10;
    *(ulonglong *)pFVar9 = CONCAT44(uStack_34,local_38);
    *(double *)(pFVar9 + 8) = dStack_30;
    pFVar3 = pFVar3 + lVar10 + 0x10;
    *(double *)pFVar3 = dStack_28;
    *(ulonglong *)(pFVar3 + 8) = CONCAT71(uStack_1f,bStack_20);
  }
  return true;
}

// GetCurveForParameter @ 14d6d31d0

FRichCurve * __thiscall
FFocalLengthFocusPoint::GetCurveForParameter(FFocalLengthFocusPoint *this,int param_1)

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

// GetCurveForParameter @ 14d6d3200

FRichCurve * __thiscall
FFocalLengthFocusPoint::GetCurveForParameter(FFocalLengthFocusPoint *this,int param_1)

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

// GetPoint @ 14d6d7270

bool __thiscall
FFocalLengthFocusPoint::GetPoint
          (FFocalLengthFocusPoint *this,float param_1,FFocalLengthInfo *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FKeyHandle FVar4;
  int iVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar6;
  FKeyHandle local_res8;
  FKeyHandle local_48;
  
  fVar6 = param_1;
  FRealCurve::FindKey((FRealCurve *)&this->Fx,param_1,param_1);
  FVar4 = FKeyHandle::Invalid();
  if (local_res8.Index == *(uint *)CONCAT44(extraout_var,FVar4.Index)) {
    bVar2 = false;
  }
  else {
    FRealCurve::FindKey((FRealCurve *)&this->Fy,fVar6,param_1);
    iVar5 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)&this->Fx,local_res8);
    FVar4 = FKeyHandle::Invalid();
    if (((local_48.Index == *(uint *)CONCAT44(extraout_var_00,FVar4.Index)) || (iVar5 < 0)) ||
       ((this->ZoomPoints).ArrayNum <= iVar5)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FyHandle != FKeyHandle::Invalid() && ZoomPoints.IsValidIndex(PointIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\FocalLengthTable.cpp"
                         ,0x1b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    fVar6 = FRichCurve::GetKeyValue(&this->Fx,local_res8);
    (param_2->FxFy).field0_0x0._s_0.X = (double)fVar6;
    fVar6 = FRichCurve::GetKeyValue(&this->Fy,local_48);
    bVar2 = true;
    (param_2->FxFy).field0_0x0._s_0.Y = (double)fVar6;
  }
  return bVar2;
}

// GetValue @ 14d6dc7d0

bool __thiscall
FFocalLengthFocusPoint::GetValue(FFocalLengthFocusPoint *this,int param_1,FFocalLengthInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  if ((-1 < param_1) && (param_1 < (this->ZoomPoints).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (this->ZoomPoints).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pFVar1 = (this->ZoomPoints).AllocatorInstance.Data + (longlong)param_1 * 0x20 + 8;
    dVar3 = *(double *)(pFVar1 + 8);
    (param_2->FxFy).field0_0x0._s_0.X = *(double *)pFVar1;
    (param_2->FxFy).field0_0x0._s_0.Y = dVar3;
    return true;
  }
  return false;
}

// IsCalibrationPoint @ 14d6e1620

bool __thiscall
FFocalLengthFocusPoint::IsCalibrationPoint(FFocalLengthFocusPoint *this,float param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FKeyHandle FVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_var;
  FKeyHandle local_res8;
  
  FRealCurve::FindKey((FRealCurve *)&this->Fx,param_1,param_1);
  FVar4 = FKeyHandle::Invalid();
  if (local_res8.Index == *(uint *)CONCAT44(extraout_var,FVar4.Index)) {
    return false;
  }
  uVar5 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)&this->Fx,local_res8);
  if (((int)uVar5 < 0) || ((this->ZoomPoints).ArrayNum <= (int)uVar5)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ZoomPoints.IsValidIndex(PointIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\FocalLengthTable.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar6 = 0;
  if ((int)uVar5 < (this->ZoomPoints).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return (bool)(this->ZoomPoints).AllocatorInstance.Data[(longlong)(int)uVar5 * 0x20 + 0x18];
}

// IsEmpty @ 14d6e1920

bool __thiscall FFocalLengthFocusPoint::IsEmpty(FFocalLengthFocusPoint *this)

{
  return (this->Fx).Keys.ArrayNum == 0;
}

// RemovePoint @ 14d6e83f0

void __thiscall FFocalLengthFocusPoint::RemovePoint(FFocalLengthFocusPoint *this,float param_1)

{
  int *piVar1;
  TArray<FFocalLengthZoomPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FKeyHandle FVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  FKeyHandle local_res8;
  FKeyHandle local_res10;
  
  pTVar2 = &this->ZoomPoints;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  iVar8 = (this->ZoomPoints).ArrayNum;
  pFVar10 = pFVar7;
  fVar11 = param_1;
  do {
    if (pFVar10 == pFVar7 + (longlong)iVar8 * 0x20) {
LAB_14d6e8503:
      FRealCurve::FindKey((FRealCurve *)&this->Fx,fVar11,param_1);
      FVar6 = FKeyHandle::Invalid();
      if (local_res10.Index != *(uint *)CONCAT44(extraout_var,FVar6.Index)) {
        FRichCurve::DeleteKey(&this->Fx,local_res10);
      }
      FRealCurve::FindKey((FRealCurve *)&this->Fy,fVar11,param_1);
      FVar6 = FKeyHandle::Invalid();
      if (local_res8.Index != *(uint *)CONCAT44(extraout_var_00,FVar6.Index)) {
        FRichCurve::DeleteKey(&this->Fy,local_res8);
      }
      return;
    }
    fVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if ((float)((uint)(*(float *)pFVar10 - param_1) & (uint)__xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_322bcc77) {
      uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar7 >> 5);
      if (uVar9 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar9 < iVar8) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20;
        iVar8 = (this->ZoomPoints).ArrayNum + ~uVar9;
        if (iVar8 != 0) {
          memmove(pFVar7,pFVar7 + 0x20,(longlong)iVar8 << 5);
        }
        piVar1 = &(this->ZoomPoints).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&pTVar2->AllocatorInstance,(this->ZoomPoints).ArrayNum,
                   &(this->ZoomPoints).ArrayMax);
      }
      goto LAB_14d6e8503;
    }
    pFVar10 = pFVar10 + 0x20;
  } while( true );
}

// SetPoint @ 14d6ed8b0

bool __thiscall
FFocalLengthFocusPoint::SetPoint
          (FFocalLengthFocusPoint *this,float param_1,FFocalLengthInfo *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  FKeyHandle FVar7;
  uint uVar8;
  uint uVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar10;
  FKeyHandle local_res8;
  FKeyHandle local_48;
  
  fVar10 = param_1;
  FRealCurve::FindKey((FRealCurve *)&this->Fx,param_1,param_1);
  FVar7 = FKeyHandle::Invalid();
  if (local_res8.Index == *(uint *)CONCAT44(extraout_var,FVar7.Index)) {
    bVar5 = false;
  }
  else {
    FRealCurve::FindKey((FRealCurve *)&this->Fy,fVar10,param_1);
    uVar8 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)&this->Fx,local_res8);
    FVar7 = FKeyHandle::Invalid();
    if (((local_48.Index == *(uint *)CONCAT44(extraout_var_00,FVar7.Index)) || ((int)uVar8 < 0)) ||
       ((this->ZoomPoints).ArrayNum <= (int)uVar8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FyHandle != FKeyHandle::Invalid() && ZoomPoints.IsValidIndex(PointIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\FocalLengthTable.cpp"
                         ,0x48,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    FRichCurve::SetKeyValue(&this->Fx,local_res8,(float)(param_2->FxFy).field0_0x0._s_0.X,true);
    FRichCurve::SetKeyValue(&this->Fy,local_48,(float)(param_2->FxFy).field0_0x0._s_0.Y,true);
    dVar3 = (param_2->FxFy).field0_0x0._s_0.X;
    dVar4 = (param_2->FxFy).field0_0x0._s_0.Y;
    uVar9 = 0;
    if ((int)uVar8 < (this->ZoomPoints).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    pFVar1 = (this->ZoomPoints).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20 + 8;
    *(double *)pFVar1 = dVar3;
    *(double *)(pFVar1 + 8) = dVar4;
    bVar5 = true;
  }
  return bVar5;
}

