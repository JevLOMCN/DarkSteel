// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 35

// StaticStruct @ 14d67d6a0

UScriptStruct * __cdecl FDistortionTable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDistortionTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FDistortionTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDistortionTable,(UObject *)pUVar1,
                         L"DistortionTable");
  }
  return Z_Registration_Info_UScriptStruct_FDistortionTable.OuterSingleton;
}

// AddPoint @ 14d6b5070

bool __thiscall
FDistortionTable::AddPoint
          (FDistortionTable *this,float param_1,float param_2,FDistortionInfo *param_3,float param_4
          ,bool param_5)

{
  bool bVar1;
  
  bVar1 = LensDataTableUtils::AddPoint<FDistortionFocusPoint,FDistortionInfo>
                    (&this->FocusPoints,param_1,param_2,param_3,param_4,param_5);
  if (bVar1) {
    LensDataTableUtils::AddPointToFocusCurve<FDistortionFocusCurve,FDistortionInfo>
              (&this->FocusCurves,param_1,param_2,param_3,param_4);
  }
  return bVar1;
}

// BuildFocusCurves @ 14d6b74d0

void __thiscall FDistortionTable::BuildFocusCurves(FDistortionTable *this)

{
  int *piVar1;
  
  DestructItems<FDistortionFocusCurve,int>
            ((FDistortionFocusCurve *)(this->FocusCurves).AllocatorInstance.Data,
             (this->FocusCurves).ArrayNum);
  piVar1 = &(this->FocusCurves).ArrayMax;
  (this->FocusCurves).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,&(this->FocusCurves).AllocatorInstance,0,piVar1);
  }
  LensDataTableUtils::BuildFocusCurves<FDistortionFocusPoint,FDistortionFocusCurve>
            (&this->FocusPoints,&this->FocusCurves);
  return;
}

// BuildParameterCurveAtFocus @ 14d6b7e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FDistortionTable::BuildParameterCurveAtFocus
          (FDistortionTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  float *pfVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  float *pfVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  float fVar11;
  FKeyHandle local_res8;
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffffb8;
  FKeyHandle local_38 [4];
  
  pFVar9 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar7 = pFVar9 + (longlong)(this->FocusPoints).ArrayNum * 0xa0;
  while( true ) {
    if (pFVar9 == pFVar7) {
      return false;
    }
    if ((float)((uint)(*(float *)(pFVar9 + 8) - param_1) &
               (uint)__xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) break;
    pFVar9 = pFVar9 + 0xa0;
  }
  if (pFVar9 == (FScriptContainerElement *)0x0) {
    return false;
  }
  pfVar8 = *(float **)(pFVar9 + 0x90);
  iVar2 = *(int *)(pFVar9 + 0x98);
  pfVar1 = pfVar8 + (longlong)iVar2 * 6;
  pwVar10 = (wchar_t *)param_3;
  fVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  while( true ) {
    if (*(int *)(pFVar9 + 0x98) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDistortionZoomPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pfVar8 == pfVar1) break;
    if ((param_2 < 0) || ((int)pfVar8[4] <= param_2)) {
      FRichCurve::operator=(param_3,(FRichCurve *)(pFVar9 + 0x10));
      return true;
    }
    FKeyHandle::FKeyHandle(local_38);
    uVar6 = 0;
    if (param_2 < (int)pfVar8[4]) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      pwVar10 = L"Array index out of bounds: %lld into an array of size %lld";
      in_stack_ffffffffffffffb8 = (longlong)param_2;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffffffffff00;
    FRichCurve::AddKey(param_3,fVar11,*pfVar8,SUB81(pwVar10,0),
                       (FKeyHandle)(uint)in_stack_ffffffffffffffb8);
    FRichCurve::SetKeyInterpMode(param_3,local_res8,RCIM_Linear);
    pfVar8 = pfVar8 + 6;
  }
  return true;
}

// BuildParameterCurveAtZoom @ 14d6b84e0

bool __thiscall
FDistortionTable::BuildParameterCurveAtZoom
          (FDistortionTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FRichCurveKey *pFVar7;
  FRichCurve *pFVar8;
  FRichCurve *pFVar9;
  FDistortionFocusPoint *pFVar10;
  FDistortionFocusPoint *this_00;
  wchar_t *pwVar11;
  float fVar12;
  undefined1 local_res18 [16];
  ulonglong in_stack_ffffffffffffff78;
  FKeyHandle local_78;
  FKeyHandle local_74;
  FDistortionInfo local_70 [4];
  
  fVar3 = __real_38d1b717;
  if (param_2 == -1) {
    pFVar9 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
    pFVar8 = (FRichCurve *)((longlong)pFVar9 + (longlong)(this->FocusCurves).ArrayNum * 0x88);
    if (pFVar9 == pFVar8) {
LAB_14d6b86d5:
      bVar4 = false;
    }
    else {
      do {
        if ((float)((uint)(*(float *)&pFVar9[1]._padding_ - param_1) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) {
          FRichCurve::operator=(param_3,pFVar9);
          goto LAB_14d6b857c;
        }
        pFVar9 = (FRichCurve *)&pFVar9[1]._padding_;
      } while (pFVar9 != pFVar8);
      bVar4 = false;
    }
  }
  else {
    iVar1 = (this->FocusPoints).ArrayNum;
    this_00 = (FDistortionFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
    pFVar10 = this_00 + iVar1;
    pwVar11 = (wchar_t *)param_3;
    while( true ) {
      if ((this->FocusPoints).ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FDistortionFocusPoint_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (this_00 == pFVar10) break;
      local_70[0].Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70[0].Parameters.ArrayNum = 0;
      local_70[0].Parameters.ArrayMax = 0;
      fVar12 = param_1;
      bVar4 = FDistortionFocusPoint::GetPoint(this_00,param_1,local_70,fVar3);
      if (bVar4) {
        if ((param_2 < 0) || (local_70[0].Parameters.ArrayNum <= param_2)) {
          if (local_70[0].Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70[0].Parameters.AllocatorInstance.Data);
          }
          goto LAB_14d6b86d5;
        }
        uVar6 = 0;
        if (param_2 < local_70[0].Parameters.ArrayNum) {
          uVar6 = (uint)~param_2 >> 0x1f;
        }
        if (uVar6 == 0) {
          pwVar11 = L"Array index out of bounds: %lld into an array of size %lld";
          in_stack_ffffffffffffff78 = (longlong)param_2;
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
        FKeyHandle::FKeyHandle(&local_74);
        in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 & 0xffffffffffffff00;
        FRichCurve::AddKey(param_3,fVar12,this_00->Focus,SUB81(pwVar11,0),
                           (FKeyHandle)(uint)in_stack_ffffffffffffff78);
        pFVar7 = FRichCurve::GetKey(param_3,local_78);
        pFVar7->InterpMode = '\0';
        pFVar7->TangentMode = '\x03';
      }
      if (local_70[0].Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70[0].Parameters.AllocatorInstance.Data);
      }
      this_00 = this_00 + 1;
    }
LAB_14d6b857c:
    bVar4 = true;
  }
  return bVar4;
}

// CanEditCurveKeyAttributes @ 14d6b91f0

bool __thiscall FDistortionTable::CanEditCurveKeyAttributes(FDistortionTable *this,int param_1)

{
  return param_1 == -1;
}

// CanEditCurveKeyPositions @ 14d6b9270

bool __thiscall FDistortionTable::CanEditCurveKeyPositions(FDistortionTable *this,int param_1)

{
  return param_1 != -1;
}

// ChangeFocusPoint @ 14d6b9640

void __thiscall
FDistortionTable::ChangeFocusPoint(FDistortionTable *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  FKeyHandle FVar2;
  undefined4 extraout_var;
  FRichCurve *this_00;
  FRichCurve *pFVar3;
  float fVar4;
  undefined1 local_res8 [8];
  FKeyHandle local_48;
  
  fVar4 = param_1;
  LensDataTableUtils::ChangeFocusPoint<FDistortionFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3);
  iVar1 = (this->FocusCurves).ArrayNum;
  this_00 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar3 = (FRichCurve *)((longlong)this_00 + (longlong)iVar1 * 0x88);
  while( true ) {
    if ((this->FocusCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDistortionFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    FRealCurve::FindKey((FRealCurve *)this_00,fVar4,param_1);
    FVar2 = FKeyHandle::Invalid();
    if (local_48.Index != *(uint *)CONCAT44(extraout_var,FVar2.Index)) {
      FRichCurve::SetKeyTime(this_00,local_48,param_2);
    }
    this_00 = (FRichCurve *)&this_00[1]._padding_;
  }
  return;
}

// ChangeZoomPoint @ 14d6b9f80

void __thiscall
FDistortionTable::ChangeZoomPoint
          (FDistortionTable *this,float param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  FDistortionInfo local_58 [5];
  
  LensDataTableUtils::ChangeZoomPoint<FDistortionFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3,param_4);
  local_58[0].Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].Parameters.ArrayNum = 0;
  local_58[0].Parameters.ArrayMax = 0;
  bVar1 = GetPoint(this,param_1,param_3,local_58,param_4);
  if (bVar1) {
    LensDataTableUtils::ChangeZoomInFocusCurves<FDistortionFocusCurve,FDistortionInfo>
              (&this->FocusCurves,param_1,param_2,param_3,local_58,param_4);
  }
  if (local_58[0].Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Parameters.AllocatorInstance.Data);
  }
  return;
}

// DoesFocusPointExists @ 14d6c0870

bool __thiscall
FDistortionTable::DoesFocusPointExists(FDistortionTable *this,float param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->FocusPoints).ArrayNum * 0xa0;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if ((float)((uint)(*(float *)(pFVar2 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= param_2) break;
    pFVar2 = pFVar2 + 0xa0;
  }
  return true;
}

// DoesZoomPointExists @ 14d6c0a60

bool __thiscall
FDistortionTable::DoesZoomPointExists
          (FDistortionTable *this,float param_1,float param_2,float param_3)

{
  bool bVar1;
  FDistortionInfo local_18;
  
  local_18.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Parameters.ArrayNum = 0;
  local_18.Parameters.ArrayMax = 0;
  bVar1 = GetPoint(this,param_1,param_2,&local_18,param_3);
  if (local_18.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Parameters.AllocatorInstance.Data);
  }
  return bVar1;
}

// ForEachPoint @ 14d6cb380

void __thiscall
FDistortionTable::ForEachPoint
          (FDistortionTable *this,TFunction<void___cdecl(FBaseFocusPoint_const_&)> *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_38 [16];
  
  pFVar6 = (this->FocusPoints).AllocatorInstance.Data;
  iVar1 = (this->FocusPoints).ArrayNum;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0xa0;
  while( true ) {
    if ((this->FocusPoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDistortionFocusPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_38);
    }
    if (pFVar6 == pFVar5) break;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar4 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar4 = (longlong *)&param_1->field_0x10;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,pFVar6);
    pFVar6 = pFVar6 + 0xa0;
  }
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// GetBaseFocusPoint @ 14d6d1dd0

FBaseFocusPoint * __thiscall FDistortionTable::GetBaseFocusPoint(FDistortionTable *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBaseFocusPoint *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->FocusPoints).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->FocusPoints).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBaseFocusPoint *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FBaseFocusPoint *)
           ((this->FocusPoints).AllocatorInstance.Data + (longlong)param_1 * 0xa0);
  }
  return (FBaseFocusPoint *)0x0;
}

// GetFocusCurve @ 14d6d3c90

FDistortionFocusCurve * __thiscall
FDistortionTable::GetFocusCurve(FDistortionTable *this,float param_1,float param_2)

{
  FDistortionFocusCurve *pFVar1;
  FDistortionFocusCurve *pFVar2;
  
  pFVar2 = (FDistortionFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusCurves).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FDistortionFocusCurve *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)
    break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusCurve @ 14d6d3ce0

FDistortionFocusCurve * __thiscall
FDistortionTable::GetFocusCurve(FDistortionTable *this,float param_1,float param_2)

{
  FDistortionFocusCurve *pFVar1;
  FDistortionFocusCurve *pFVar2;
  
  pFVar2 = (FDistortionFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusCurves).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FDistortionFocusCurve *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)
    break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusCurves @ 14d6d3fb0

TArray<FDistortionFocusCurve,TSizedDefaultAllocator<32>_> * __thiscall
FDistortionTable::GetFocusCurves(FDistortionTable *this)

{
  return &this->FocusCurves;
}

// GetFocusCurves @ 14d6d3fc0

TArrayView<FDistortionFocusCurve_const_,int> * __thiscall
FDistortionTable::GetFocusCurves
          (FDistortionTable *this,
          TArrayView<FDistortionFocusCurve_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FDistortionFocusCurve_const_,int> *pTVar4;
  
  iVar1 = (this->FocusCurves).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FDistortionFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FDistortionFocusCurve_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetFocusPoint @ 14d6d4310

FDistortionFocusPoint * __thiscall
FDistortionTable::GetFocusPoint(FDistortionTable *this,float param_1,float param_2)

{
  FDistortionFocusPoint *pFVar1;
  FDistortionFocusPoint *pFVar2;
  
  pFVar2 = (FDistortionFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FDistortionFocusPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2
       ) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusPoint @ 14d6d4370

FDistortionFocusPoint * __thiscall
FDistortionTable::GetFocusPoint(FDistortionTable *this,float param_1,float param_2)

{
  FDistortionFocusPoint *pFVar1;
  FDistortionFocusPoint *pFVar2;
  
  pFVar2 = (FDistortionFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FDistortionFocusPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2
       ) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusPointNum @ 14d6d46d0

int __thiscall FDistortionTable::GetFocusPointNum(FDistortionTable *this)

{
  return (this->FocusPoints).ArrayNum;
}

// GetFocusPoints @ 14d6d4720

TArray<FDistortionFocusPoint,TSizedDefaultAllocator<32>_> * __thiscall
FDistortionTable::GetFocusPoints(FDistortionTable *this)

{
  return &this->FocusPoints;
}

// GetFocusPoints @ 14d6d4730

TArrayView<FDistortionFocusPoint_const_,int> * __thiscall
FDistortionTable::GetFocusPoints
          (FDistortionTable *this,
          TArrayView<FDistortionFocusPoint_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FDistortionFocusPoint_const_,int> *pTVar4;
  
  iVar1 = (this->FocusPoints).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FDistortionFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FDistortionFocusPoint_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetLinkedCategories @ 14d6d5360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>_>
* __thiscall
FDistortionTable::GetLinkedCategories
          (FDistortionTable *this,
          TMap<ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_88 [32];
  ELensDataCategory local_68;
  FLinkPointMetadata local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63 [11];
  initializer_list<TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&>_> local_58
  ;
  TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&> local_48;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&> local_18;
  
  local_18.Key = (ELensDataCategory *)(__security_cookie.value ^ (ulonglong)auStack_88);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_48.Key = &local_68;
      local_68 = Zoom;
      local_48.Value = &local_67;
      local_67.bRemoveByDefault = true;
      local_38 = &local_66;
      local_66 = 4;
      local_30 = &local_65;
      local_28 = &local_64;
      local_20 = local_63;
      local_58._First = &local_48;
      local_58._Last = &local_18;
      local_65 = 1;
      local_64 = 6;
      local_63[0] = 0;
      TMap<enum_ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>_>
      ::
      TMap<enum_ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>_>
                (&LinkedToCategories,&local_58);
      atexit(`FDistortionTable::GetLinkedCategories'::__l2::
             _dynamic_atexit_destructor_for__LinkedToCategories__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<enum_ELensDataCategory,FLinkPointMetadata>,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>,FDefaultSetAllocator>
  ::operator=(__return_storage_ptr__,
              (TSet<TTuple<ELensDataCategory,FLinkPointMetadata>,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>,FDefaultSetAllocator>
               *)&LinkedToCategories);
  return __return_storage_ptr__;
}

// GetParameterValueLabel @ 14d6d6da0

FText * __thiscall
FDistortionTable::GetParameterValueLabel
          (FDistortionTable *this,FText *__return_storage_ptr__,int param_1)

{
  if (param_1 != -1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"FDistortionTable",L"ParameterValueLabel",L"(unitless)");
    return __return_storage_ptr__;
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPoint @ 14d6d7120

bool __thiscall
FDistortionTable::GetPoint
          (FDistortionTable *this,float param_1,float param_2,FDistortionInfo *param_3,float param_4
          )

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  bool bVar3;
  FDistortionFocusPoint *pFVar4;
  FDistortionFocusPoint *this_00;
  longlong lVar5;
  FDistortionInfo local_18;
  
  this_00 = (FDistortionFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar4 = this_00 + (this->FocusPoints).ArrayNum;
  if (this_00 != pFVar4) {
    while (param_4 < (float)((uint)(this_00->Focus - param_1) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      this_00 = this_00 + 1;
      if (this_00 == pFVar4) {
        return false;
      }
    }
    local_18.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Parameters.ArrayNum = 0;
    local_18.Parameters.ArrayMax = 0;
    bVar3 = FDistortionFocusPoint::GetPoint(this_00,param_2,&local_18,param_4);
    _Src.Data = local_18.Parameters.AllocatorInstance.Data;
    if (bVar3) {
      if (param_3 != &local_18) {
        iVar2 = local_18.Parameters.ArrayNum;
        lVar5 = (longlong)local_18.Parameters.ArrayNum;
        piVar1 = &(param_3->Parameters).ArrayMax;
        (param_3->Parameters).ArrayNum = local_18.Parameters.ArrayNum;
        if ((local_18.Parameters.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_18.Parameters.ArrayNum,*piVar1,(ForAnyElementType *)param_3,
                     local_18.Parameters.ArrayNum,piVar1);
          if (iVar2 != 0) {
            memcpy((param_3->Parameters).AllocatorInstance.Data,_Src.Data,lVar5 << 2);
          }
        }
      }
      if (local_18.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Parameters.AllocatorInstance.Data);
      }
      return true;
    }
    if (local_18.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Parameters.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetScriptStruct @ 14d6d8c20

UScriptStruct * __thiscall FDistortionTable::GetScriptStruct(FDistortionTable *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDistortionTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FDistortionTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDistortionTable,(UObject *)pUVar1,
                         L"DistortionTable");
  }
  return Z_Registration_Info_UScriptStruct_FDistortionTable.OuterSingleton;
}

// GetTotalPointNum @ 14d6dbf70

int __thiscall FDistortionTable::GetTotalPointNum(FDistortionTable *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FocusPoints).ArrayNum;
  iVar5 = 0;
  pFVar3 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0xa0;
  while( true ) {
    if ((this->FocusPoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDistortionFocusPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iVar2 = (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3);
    iVar5 = iVar5 + iVar2;
    pFVar3 = pFVar3 + 0xa0;
  }
  return iVar5;
}

// HasFocusPoint @ 14d6dd1b0

bool __thiscall FDistortionTable::HasFocusPoint(FDistortionTable *this,float param_1,float param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d6dd1b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 8))();
  return (bool)uVar1;
}

// HasZoomPoint @ 14d6ddb80

bool __thiscall
FDistortionTable::HasZoomPoint(FDistortionTable *this,float param_1,float param_2,float param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d6ddb83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  return (bool)uVar1;
}

// MergeFocusPoint @ 14d6e4110

void __thiscall
FDistortionTable::MergeFocusPoint
          (FDistortionTable *this,float param_1,float param_2,bool param_3,float param_4)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  undefined1 local_res8 [8];
  
  LensDataTableUtils::MergeFocusPoint<FDistortionFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3,param_4);
  iVar1 = (this->FocusCurves).ArrayNum;
  this_00 = (this->FocusCurves).AllocatorInstance.Data;
  pFVar2 = this_00 + (longlong)iVar1 * 0x88;
  while( true ) {
    if ((this->FocusCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDistortionFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FBaseFocusCurve::MergeFocusInCurve
              ((FBaseFocusCurve *)this_00,(FRichCurve *)this_00,param_1,param_2,param_3,param_4);
    this_00 = this_00 + 0x88;
  }
  return;
}

// RemoveFocusPoint @ 14d6e7e40

void __thiscall FDistortionTable::RemoveFocusPoint(FDistortionTable *this,float param_1)

{
  LensDataTableUtils::RemoveFocusPoint<FDistortionFocusPoint>(&this->FocusPoints,param_1);
  LensDataTableUtils::RemoveFocusFromFocusCurves<FDistortionFocusCurve>(&this->FocusCurves,param_1);
  return;
}

// RemoveZoomPoint @ 14d6e8a80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDistortionTable::RemoveZoomPoint(FDistortionTable *this,float param_1,float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar2 = (this->FocusPoints).AllocatorInstance.Data;
  iVar1 = (this->FocusPoints).ArrayNum;
  pFVar7 = pFVar2;
  do {
    if (pFVar7 == pFVar2 + (longlong)iVar1 * 0xa0) {
LAB_14d6e8c16:
      LensDataTableUtils::RemoveZoomFromFocusCurves<FDistortionFocusCurve>
                (&this->FocusCurves,param_1,param_2,__real_38d1b717);
      return;
    }
    if ((float)((uint)(*(float *)(pFVar7 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_322bcc77) {
      uVar4 = (uint)(((longlong)pFVar7 - (longlong)pFVar2) / 0xa0);
      if (uVar4 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar4 < iVar1) {
          uVar6 = ~uVar4 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FDistortionFocusPoint::RemovePoint
                  ((FDistortionFocusPoint *)
                   ((this->FocusPoints).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xa0),
                   param_2);
        uVar6 = 0;
        if ((int)uVar4 < (this->FocusPoints).ArrayNum) {
          uVar6 = ~uVar4 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)((this->FocusPoints).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xa0 + 0x88
                    ) == 0) {
          TArray<FDistortionFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->FocusPoints,uVar4,Default);
        }
      }
      goto LAB_14d6e8c16;
    }
    pFVar7 = pFVar7 + 0xa0;
  } while( true );
}

// SetParameterCurveKeysAtFocus @ 14d6ebe60

void __thiscall
FDistortionTable::SetParameterCurveKeysAtFocus
          (FDistortionTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  FKeyHandle FVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FRichCurveKey local_88 [3];
  
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_322bcc77;
  pFVar19 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar15 = pFVar19 + (longlong)(this->FocusPoints).ArrayNum * 0xa0;
  if (pFVar19 != pFVar15) {
    while (__real_38d1b717 <
           (float)((uint)(*(float *)(pFVar19 + 8) - param_1) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      pFVar19 = pFVar19 + 0xa0;
      if (pFVar19 == pFVar15) {
        return;
      }
    }
    if (pFVar19 != (FScriptContainerElement *)0x0) {
      uVar17 = 0;
      iVar16 = param_4->ArrayNum;
      if (0 < iVar16) {
        lVar20 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar17 < iVar16) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar1.Index = *(uint *)((longlong)&param_4->DataPtr->Index + lVar20);
          uVar13 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)param_3,FVar1);
          lVar18 = (longlong)(int)uVar13;
          if (uVar13 != 0xffffffff) {
            FRichCurve::GetKey(param_3,local_88,FVar1);
            fVar11 = local_88[0].LeaveTangentWeight;
            uVar10 = local_88[0]._16_8_;
            fVar9 = local_88[0].Value;
            fVar8 = local_88[0].Time;
            if (param_2 == -1) {
              uVar4 = CONCAT44(local_88[0].Time,local_88[0]._0_4_);
              uVar5 = CONCAT44(local_88[0].ArriveTangent,local_88[0].Value);
              uVar14 = 0;
              if ((int)uVar13 < *(int *)(pFVar19 + 0x88)) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar2 = *(longlong *)(pFVar19 + 0x80);
              lVar18 = lVar18 * 0x1c;
              *(undefined8 *)(lVar18 + lVar2) = uVar4;
              ((undefined8 *)(lVar18 + lVar2))[1] = uVar5;
              *(undefined8 *)(lVar18 + 0x10 + lVar2) = uVar10;
              *(float *)(lVar18 + 0x18 + lVar2) = fVar11;
            }
            else if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(pFVar19 + 0x98))) {
              uVar14 = 0;
              if ((int)uVar13 < *(int *)(pFVar19 + 0x98)) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((float)((uint)(*(float *)(*(longlong *)(pFVar19 + 0x90) + lVar18 * 0x18) - fVar8)
                         & uVar7) <= fVar6) {
                uVar14 = 0;
                if ((int)uVar13 < *(int *)(pFVar19 + 0x98)) {
                  uVar14 = ~uVar13 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar2 = *(longlong *)(pFVar19 + 0x90);
                uVar13 = 0;
                if (param_2 < *(int *)(lVar2 + 0x10 + lVar18 * 0x18)) {
                  uVar13 = (uint)~param_2 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                *(float *)(*(longlong *)(lVar2 + 8 + lVar18 * 0x18) + (longlong)param_2 * 4) = fVar9
                ;
              }
              else {
                bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<5901926900321747055>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\DistortionParametersTable.cpp"
                                    ,0x6f,
                                    "FMath::IsNearlyEqual(ZoomPoints[InZoomIndex].Zoom, InZoomValue)"
                                   );
                if (bVar12) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
            }
          }
          iVar16 = param_4->ArrayNum;
          uVar17 = uVar17 + 1;
          lVar20 = lVar20 + 4;
        } while ((int)uVar17 < iVar16);
      }
    }
  }
  return;
}

// SetParameterCurveKeysAtZoom @ 14d6ec950

void __thiscall
FDistortionTable::SetParameterCurveKeysAtZoom
          (FDistortionTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  FKeyHandle *pFVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  FDistortionFocusPoint *pFVar8;
  FRichCurve *pFVar9;
  FDistortionFocusPoint *this_00;
  FKeyHandle *pFVar10;
  FRichCurve *pFVar11;
  FDistortionInfo local_98;
  TArrayView<FKeyHandle_const_,int> local_88;
  FRichCurveKey local_78 [3];
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_38d1b717;
  if (param_2 == -1) {
    pFVar11 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
    pFVar9 = (FRichCurve *)((longlong)pFVar11 + (longlong)(this->FocusCurves).ArrayNum * 0x88);
    if (pFVar11 != pFVar9) {
      do {
        if ((float)((uint)(*(float *)&pFVar11[1]._padding_ - param_1) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) {
          local_88.DataPtr = param_4->DataPtr;
          local_88.ArrayNum = param_4->ArrayNum;
          local_88._12_4_ = *(undefined4 *)&param_4->field_0xc;
          FBaseLensTable::CopyCurveKeys((FBaseLensTable *)this,param_3,pFVar11,&local_88);
          return;
        }
        pFVar11 = (FRichCurve *)&pFVar11[1]._padding_;
      } while (pFVar11 != pFVar9);
      return;
    }
  }
  else {
    pFVar10 = param_4->DataPtr;
    pFVar1 = pFVar10 + param_4->ArrayNum;
    for (; pFVar10 != pFVar1; pFVar10 = pFVar10 + 1) {
      FRichCurve::GetKey(param_3,local_78,(FKeyHandle)pFVar10->Index);
      this_00 = (FDistortionFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
      pFVar8 = this_00 + (this->FocusPoints).ArrayNum;
      for (; this_00 != pFVar8; this_00 = this_00 + 1) {
        if ((float)((uint)(this_00->Focus - local_78[0].Time) & uVar4) <= fVar3) {
          local_98.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.Parameters.ArrayNum = 0;
          local_98.Parameters.ArrayMax = 0;
          bVar6 = FDistortionFocusPoint::GetPoint(this_00,param_1,&local_98,fVar3);
          fVar5 = local_78[0].Value;
          if (bVar6) {
            if ((param_2 < 0) || (local_98.Parameters.ArrayNum <= param_2)) {
              if (local_98.Parameters.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return;
              }
              FMemory::Free(local_98.Parameters.AllocatorInstance.Data);
              return;
            }
            uVar7 = 0;
            if (param_2 < local_98.Parameters.ArrayNum) {
              uVar7 = (uint)~param_2 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(float *)(local_98.Parameters.AllocatorInstance.Data + (longlong)param_2 * 4) = fVar5;
            FDistortionFocusPoint::SetPoint(this_00,param_1,&local_98,fVar3);
          }
          if (local_98.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Parameters.AllocatorInstance.Data);
          }
          break;
        }
      }
    }
  }
  return;
}

// SetPoint @ 14d6ed5d0

bool __thiscall
FDistortionTable::SetPoint
          (FDistortionTable *this,float param_1,float param_2,FDistortionInfo *param_3,float param_4
          )

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FDistortionFocusPoint *this_00;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar8 = 0;
  if (0 < (this->FocusPoints).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->FocusPoints).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (param_1 < *(float *)((this->FocusPoints).AllocatorInstance.Data + lVar9 + 8)) {
        return false;
      }
      uVar6 = 0;
      if ((int)uVar8 < (this->FocusPoints).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      this_00 = (FDistortionFocusPoint *)((this->FocusPoints).AllocatorInstance.Data + lVar9);
      if ((float)((uint)(this_00->Focus - param_1) & uVar3) <= param_4) {
        bVar4 = FDistortionFocusPoint::SetPoint(this_00,param_2,param_3,__real_38d1b717);
        if (!bVar4) {
          return false;
        }
        iVar7 = (this->FocusCurves).ArrayNum;
        uVar8 = 0;
        if (0 < iVar7) {
          lVar9 = 0;
          while( true ) {
            uVar6 = 0;
            if ((int)uVar8 < iVar7) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            fVar1 = *(float *)((this->FocusCurves).AllocatorInstance.Data + lVar9 + 0x80);
            if ((float)((uint)(fVar1 - param_2) & uVar3) <= param_4) {
              return true;
            }
            if (param_2 < fVar1) break;
            iVar7 = (this->FocusCurves).ArrayNum;
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 0x88;
            if (iVar7 <= (int)uVar8) {
              return true;
            }
          }
          return true;
        }
        return true;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0xa0;
    } while ((int)uVar8 < (this->FocusPoints).ArrayNum);
  }
  return false;
}

