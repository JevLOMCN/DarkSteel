// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 38

// StaticStruct @ 14d679890

UScriptStruct * __cdecl FNodalOffsetTable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNodalOffsetTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FNodalOffsetTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNodalOffsetTable,(UObject *)pUVar1,
                         L"NodalOffsetTable");
  }
  return Z_Registration_Info_UScriptStruct_FNodalOffsetTable.OuterSingleton;
}

// operator() @ 14d6b1d70

FRichCurve * __thiscall
`FNodalOffsetTable::SetParameterCurveKeysAtFocus'::__l8::<lambda_1>::operator()
          (void *this,float param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(*(longlong *)this + 0x20);
  lVar4 = (longlong)*(int *)(*(longlong *)this + 0x28) * 0x308 + lVar5;
  while( true ) {
    if (lVar5 == lVar4) {
      return (FRichCurve *)0x0;
    }
    if ((float)((uint)(*(float *)(lVar5 + 0x300) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff
               ) <= __real_38d1b717) break;
    lVar5 = lVar5 + 0x308;
  }
  if (lVar5 == 0) {
    return (FRichCurve *)0x0;
  }
  uVar1 = *(uint *)((longlong)this + 8);
  if (5 < uVar1) {
    return (FRichCurve *)0x0;
  }
  iVar3 = (int)uVar1 / 3 + ((int)uVar1 >> 0x1f) +
          (int)(((longlong)(int)uVar1 / 3 + ((longlong)(int)uVar1 >> 0x3f) & 0xffffffffU) >> 0x1f);
  iVar2 = uVar1 + iVar3 * -3;
  if (iVar3 != 0) {
    if (iVar3 != 1) {
      return (FRichCurve *)0x0;
    }
    return (FRichCurve *)(((longlong)iVar2 + 3) * 0x80 + lVar5);
  }
  return (FRichCurve *)((longlong)iVar2 * 0x80 + lVar5);
}

// operator() @ 14d6b1e10

FRichCurve * __thiscall
`FNodalOffsetTable::SetParameterCurveKeysAtZoom'::__l8::<lambda_1>::operator()
          (void *this,float param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(*(longlong *)this + 0x10);
  lVar4 = (longlong)*(int *)(*(longlong *)this + 0x18) * 0x310 + lVar5;
  while( true ) {
    if (lVar5 == lVar4) {
      return (FRichCurve *)0x0;
    }
    if ((float)((uint)(*(float *)(lVar5 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_38d1b717) break;
    lVar5 = lVar5 + 0x310;
  }
  uVar1 = *(uint *)((longlong)this + 8);
  if (5 < uVar1) {
    return (FRichCurve *)0x0;
  }
  iVar3 = (int)uVar1 / 3 + ((int)uVar1 >> 0x1f) +
          (int)(((longlong)(int)uVar1 / 3 + ((longlong)(int)uVar1 >> 0x3f) & 0xffffffffU) >> 0x1f);
  iVar2 = uVar1 + iVar3 * -3;
  if (iVar3 == 0) {
    return (FRichCurve *)((longlong)iVar2 * 0x80 + 0x10 + lVar5);
  }
  if (iVar3 != 1) {
    return (FRichCurve *)0x0;
  }
  return (FRichCurve *)((longlong)iVar2 * 0x80 + 400 + lVar5);
}

// AddPoint @ 14d6b5ea0

bool __thiscall
FNodalOffsetTable::AddPoint
          (FNodalOffsetTable *this,float param_1,float param_2,FNodalPointOffset *param_3,
          float param_4,bool param_5)

{
  bool bVar1;
  
  bVar1 = LensDataTableUtils::AddPoint<FNodalOffsetFocusPoint,FNodalPointOffset>
                    (&this->FocusPoints,param_1,param_2,param_3,param_4,param_5);
  if (bVar1) {
    LensDataTableUtils::AddPointToFocusCurve<FNodalOffsetFocusCurve,FNodalPointOffset>
              (&this->FocusCurves,param_1,param_2,param_3,param_4);
  }
  return bVar1;
}

// BuildFocusCurves @ 14d6b7620

void __thiscall FNodalOffsetTable::BuildFocusCurves(FNodalOffsetTable *this)

{
  int *piVar1;
  
  DestructItems<FNodalOffsetFocusCurve,int>
            ((FNodalOffsetFocusCurve *)(this->FocusCurves).AllocatorInstance.Data,
             (this->FocusCurves).ArrayNum);
  piVar1 = &(this->FocusCurves).ArrayMax;
  (this->FocusCurves).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x308,8,0,&(this->FocusCurves).AllocatorInstance,0,piVar1);
  }
  LensDataTableUtils::BuildFocusCurves<FNodalOffsetFocusPoint,FNodalOffsetFocusCurve>
            (&this->FocusPoints,&this->FocusCurves);
  return;
}

// BuildParameterCurveAtFocus @ 14d6b8380

bool __thiscall
FNodalOffsetTable::BuildParameterCurveAtFocus
          (FNodalOffsetTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  
  if ((uint)param_2 < 6) {
    pFVar1 = (this->FocusPoints).AllocatorInstance.Data;
    pFVar3 = pFVar1 + (longlong)(this->FocusPoints).ArrayNum * 0x310;
    for (; pFVar1 != pFVar3; pFVar1 = pFVar1 + 0x310) {
      if ((float)((uint)(*(float *)(pFVar1 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
          <= __real_38d1b717) {
        lVar2 = 0x10;
        if (param_2 / 3 != 0) {
          lVar2 = 400;
        }
        FRichCurve::operator=
                  (param_3,(FRichCurve *)(pFVar1 + lVar2 + (longlong)(param_2 % 3) * 0x80));
        return true;
      }
    }
  }
  return false;
}

// BuildParameterCurveAtZoom @ 14d6b8a40

bool __thiscall
FNodalOffsetTable::BuildParameterCurveAtZoom
          (FNodalOffsetTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  
  if ((uint)param_2 < 6) {
    pFVar1 = (this->FocusCurves).AllocatorInstance.Data;
    pFVar3 = pFVar1 + (longlong)(this->FocusCurves).ArrayNum * 0x308;
    for (; pFVar1 != pFVar3; pFVar1 = pFVar1 + 0x308) {
      if ((float)((uint)(*(float *)(pFVar1 + 0x300) - param_1) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) {
        lVar2 = (longlong)(param_2 % 3);
        if (param_2 / 3 != 0) {
          lVar2 = (longlong)(param_2 % 3) + 3;
        }
        FRichCurve::operator=(param_3,(FRichCurve *)(pFVar1 + lVar2 * 0x80));
        return true;
      }
    }
  }
  return false;
}

// CanEditCurveKeyAttributes @ 14d6b9220

bool __thiscall FNodalOffsetTable::CanEditCurveKeyAttributes(FNodalOffsetTable *this,int param_1)

{
  return true;
}

// CanEditCurveKeyPositions @ 14d6b92a0

bool __thiscall FNodalOffsetTable::CanEditCurveKeyPositions(FNodalOffsetTable *this,int param_1)

{
  return true;
}

// ChangeFocusPoint @ 14d6b9930

void __thiscall
FNodalOffsetTable::ChangeFocusPoint
          (FNodalOffsetTable *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  FKeyHandle FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  undefined1 local_res8 [8];
  FKeyHandle local_58;
  FKeyHandle local_54;
  
  fVar6 = param_1;
  LensDataTableUtils::ChangeFocusPoint<FNodalOffsetFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3);
  iVar1 = (this->FocusCurves).ArrayNum;
  pFVar4 = (this->FocusCurves).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x308;
  while( true ) {
    if ((this->FocusCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNodalOffsetFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    uVar3 = 0;
    do {
      FRealCurve::FindKey((FRealCurve *)(pFVar4 + (longlong)(int)uVar3 * 0x80),fVar6,param_1);
      FVar2 = FKeyHandle::Invalid();
      if (local_58.Index != *(uint *)CONCAT44(extraout_var,FVar2.Index)) {
        FRichCurve::SetKeyTime
                  ((FRichCurve *)(pFVar4 + (longlong)(int)uVar3 * 0x80),local_58,param_2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    uVar3 = 0;
    do {
      FRealCurve::FindKey((FRealCurve *)(pFVar4 + ((longlong)(int)uVar3 + 3) * 0x80),fVar6,param_1);
      FVar2 = FKeyHandle::Invalid();
      if (local_54.Index != *(uint *)CONCAT44(extraout_var_00,FVar2.Index)) {
        FRichCurve::SetKeyTime
                  ((FRichCurve *)(pFVar4 + ((longlong)(int)uVar3 + 3) * 0x80),local_54,param_2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    pFVar4 = pFVar4 + 0x308;
  }
  return;
}

// ChangeZoomPoint @ 14d6ba270

void __thiscall
FNodalOffsetTable::ChangeZoomPoint
          (FNodalOffsetTable *this,float param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  TVector<double>_u_0 local_88;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  
  LensDataTableUtils::ChangeZoomPoint<FNodalOffsetFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3,param_4);
  local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_68 = UE::Math::TQuat<double>::Identity.X;
  dStack_60 = UE::Math::TQuat<double>::Identity.Y;
  local_58 = UE::Math::TQuat<double>::Identity.Z;
  dStack_50 = UE::Math::TQuat<double>::Identity.W;
  bVar1 = GetPoint(this,param_1,param_3,(FNodalPointOffset *)&local_88._s_0,param_4);
  if (bVar1) {
    LensDataTableUtils::ChangeZoomInFocusCurves<FNodalOffsetFocusCurve,FNodalPointOffset>
              (&this->FocusCurves,param_1,param_2,param_3,(FNodalPointOffset *)&local_88._s_0,
               param_4);
  }
  return;
}

// DoesFocusPointExists @ 14d6c0980

bool __thiscall
FNodalOffsetTable::DoesFocusPointExists(FNodalOffsetTable *this,float param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->FocusPoints).ArrayNum * 0x310;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if ((float)((uint)(*(float *)(pFVar2 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= param_2) break;
    pFVar2 = pFVar2 + 0x310;
  }
  return true;
}

// DoesZoomPointExists @ 14d6c0bb0

bool __thiscall
FNodalOffsetTable::DoesZoomPointExists
          (FNodalOffsetTable *this,float param_1,float param_2,float param_3)

{
  bool bVar1;
  FNodalPointOffset local_48;
  
  bVar1 = GetPoint(this,param_1,param_2,&local_48,param_3);
  return bVar1;
}

// ForEachPoint @ 14d6cb5f0

void __thiscall
FNodalOffsetTable::ForEachPoint
          (FNodalOffsetTable *this,TFunction<void___cdecl(FBaseFocusPoint_const_&)> *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_38 [16];
  
  pFVar5 = (this->FocusPoints).AllocatorInstance.Data;
  iVar1 = (this->FocusPoints).ArrayNum;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x310;
  while( true ) {
    if ((this->FocusPoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNodalOffsetFocusPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_38);
    }
    if (pFVar5 == pFVar6) break;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar4 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar4 = (longlong *)&param_1->field_0x10;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,pFVar5);
    pFVar5 = pFVar5 + 0x310;
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

// GetBaseFocusPoint @ 14d6d1f80

FBaseFocusPoint * __thiscall
FNodalOffsetTable::GetBaseFocusPoint(FNodalOffsetTable *this,int param_1)

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
           ((this->FocusPoints).AllocatorInstance.Data + (longlong)param_1 * 0x310);
  }
  return (FBaseFocusPoint *)0x0;
}

// GetFocusCurve @ 14d6d3e70

FNodalOffsetFocusCurve * __thiscall
FNodalOffsetTable::GetFocusCurve(FNodalOffsetTable *this,float param_1,float param_2)

{
  FNodalOffsetFocusCurve *pFVar1;
  FNodalOffsetFocusCurve *pFVar2;
  
  pFVar2 = (FNodalOffsetFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusCurves).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FNodalOffsetFocusCurve *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)
    break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusCurve @ 14d6d3ec0

FNodalOffsetFocusCurve * __thiscall
FNodalOffsetTable::GetFocusCurve(FNodalOffsetTable *this,float param_1,float param_2)

{
  FNodalOffsetFocusCurve *pFVar1;
  FNodalOffsetFocusCurve *pFVar2;
  
  pFVar2 = (FNodalOffsetFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusCurves).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FNodalOffsetFocusCurve *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)
    break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusCurves @ 14d6d4130

TArray<FNodalOffsetFocusCurve,TSizedDefaultAllocator<32>_> * __thiscall
FNodalOffsetTable::GetFocusCurves(FNodalOffsetTable *this)

{
  return &this->FocusCurves;
}

// GetFocusCurves @ 14d6d4140

TArrayView<FNodalOffsetFocusCurve_const_,int> * __thiscall
FNodalOffsetTable::GetFocusCurves
          (FNodalOffsetTable *this,
          TArrayView<FNodalOffsetFocusCurve_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FNodalOffsetFocusCurve_const_,int> *pTVar4;
  
  iVar1 = (this->FocusCurves).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FNodalOffsetFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
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
    pTVar4 = (TArrayView<FNodalOffsetFocusCurve_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetFocusPoint @ 14d6d4530

FNodalOffsetFocusPoint * __thiscall
FNodalOffsetTable::GetFocusPoint(FNodalOffsetTable *this,float param_1,float param_2)

{
  FNodalOffsetFocusPoint *pFVar1;
  FNodalOffsetFocusPoint *pFVar2;
  
  pFVar2 = (FNodalOffsetFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FNodalOffsetFocusPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2
       ) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusPoint @ 14d6d4580

FNodalOffsetFocusPoint * __thiscall
FNodalOffsetTable::GetFocusPoint(FNodalOffsetTable *this,float param_1,float param_2)

{
  FNodalOffsetFocusPoint *pFVar1;
  FNodalOffsetFocusPoint *pFVar2;
  
  pFVar2 = (FNodalOffsetFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FNodalOffsetFocusPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2
       ) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusPointNum @ 14d6d4700

int __thiscall FNodalOffsetTable::GetFocusPointNum(FNodalOffsetTable *this)

{
  return (this->FocusPoints).ArrayNum;
}

// GetFocusPoints @ 14d6d48a0

TArray<FNodalOffsetFocusPoint,TSizedDefaultAllocator<32>_> * __thiscall
FNodalOffsetTable::GetFocusPoints(FNodalOffsetTable *this)

{
  return &this->FocusPoints;
}

// GetFocusPoints @ 14d6d48b0

TArrayView<FNodalOffsetFocusPoint_const_,int> * __thiscall
FNodalOffsetTable::GetFocusPoints
          (FNodalOffsetTable *this,
          TArrayView<FNodalOffsetFocusPoint_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FNodalOffsetFocusPoint_const_,int> *pTVar4;
  
  iVar1 = (this->FocusPoints).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FNodalOffsetFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
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
    pTVar4 = (TArrayView<FNodalOffsetFocusPoint_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetLinkedCategories @ 14d6d5770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>_>
* __thiscall
FNodalOffsetTable::GetLinkedCategories
          (FNodalOffsetTable *this,
          TMap<ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_98 [32];
  ELensDataCategory local_78;
  FLinkPointMetadata local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71 [9];
  initializer_list<TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&>_> local_68
  ;
  TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&> local_58;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&> local_18;
  
  local_18.Key = (ELensDataCategory *)(__security_cookie.value ^ (ulonglong)auStack_98);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_58.Key = &local_78;
      local_78 = Distortion;
      local_58.Value = &local_77;
      local_77.bRemoveByDefault = false;
      local_48 = &local_76;
      local_76 = 2;
      local_40 = &local_75;
      local_38 = &local_74;
      local_30 = &local_73;
      local_28 = &local_72;
      local_20 = local_71;
      local_68._First = &local_58;
      local_68._Last = &local_18;
      local_75 = 0;
      local_74 = 5;
      local_73 = 0;
      local_72 = 4;
      local_71[0] = 0;
      TMap<enum_ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>_>
      ::
      TMap<enum_ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>_>
                (&LinkedToCategories,&local_68);
      atexit(`FNodalOffsetTable::GetLinkedCategories'::__l2::
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

// GetParameterValueLabel @ 14d6d6ea0

FText * __thiscall
FNodalOffsetTable::GetParameterValueLabel
          (FNodalOffsetTable *this,FText *__return_storage_ptr__,int param_1)

{
  if (5 < (uint)param_1) {
    FText::FText(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if (param_1 / 3 + (param_1 >> 0x1f) +
      (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f) == 0) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"FNodalOffsetTable",L"LocationParameterValueLabel",L"(cm)");
    return __return_storage_ptr__;
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"FNodalOffsetTable",L"RotationParameterValueLabel",L"(deg)");
  return __return_storage_ptr__;
}

// GetParameterValueUnitLabel @ 14d6d6f90

FText * __thiscall
FNodalOffsetTable::GetParameterValueUnitLabel
          (FNodalOffsetTable *this,FText *__return_storage_ptr__,int param_1)

{
  if (5 < (uint)param_1) {
    FText::FText(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if (param_1 / 3 + (param_1 >> 0x1f) +
      (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f) == 0) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"FNodalOffsetTable",L"LocationParameterUnitLabel",L"cm");
    return __return_storage_ptr__;
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"FNodalOffsetTable",L"RotationParameterUnitLabel",L"deg");
  return __return_storage_ptr__;
}

// GetPoint @ 14d6d7750

bool __thiscall
FNodalOffsetTable::GetPoint
          (FNodalOffsetTable *this,float param_1,float param_2,FNodalPointOffset *param_3,
          float param_4)

{
  bool bVar1;
  FNodalOffsetFocusPoint *pFVar2;
  FNodalOffsetFocusPoint *this_00;
  TVector<double>_u_0 local_48;
  longlong lStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  this_00 = (FNodalOffsetFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar2 = this_00 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return false;
    }
    if ((float)((uint)(this_00->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        param_4) break;
    this_00 = this_00 + 1;
  }
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_28 = UE::Math::TQuat<double>::Identity.X;
  dStack_20 = UE::Math::TQuat<double>::Identity.Y;
  local_18 = UE::Math::TQuat<double>::Identity.Z;
  dStack_10 = UE::Math::TQuat<double>::Identity.W;
  bVar1 = FNodalOffsetFocusPoint::GetPoint
                    (this_00,param_2,(FNodalPointOffset *)&local_48._s_0,param_4);
  if (!bVar1) {
    return false;
  }
  (param_3->LocationOffset).field0_0x0._s_0.X = local_48._s_0.X;
  (param_3->LocationOffset).field0_0x0._s_0.Y = local_48._s_0.Y;
  (param_3->LocationOffset).field0_0x0._s_0.Z = local_48._s_0.Z;
  param_3->_padding_ = lStack_30;
  (param_3->RotationOffset).X = local_28;
  (param_3->RotationOffset).Y = dStack_20;
  (param_3->RotationOffset).Z = local_18;
  (param_3->RotationOffset).W = dStack_10;
  return true;
}

// GetScriptStruct @ 14d6d8ce0

UScriptStruct * __thiscall FNodalOffsetTable::GetScriptStruct(FNodalOffsetTable *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNodalOffsetTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FNodalOffsetTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNodalOffsetTable,(UObject *)pUVar1,
                         L"NodalOffsetTable");
  }
  return Z_Registration_Info_UScriptStruct_FNodalOffsetTable.OuterSingleton;
}

// GetTotalPointNum @ 14d6dc0f0

int __thiscall FNodalOffsetTable::GetTotalPointNum(FNodalOffsetTable *this)

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
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x310;
  while( true ) {
    if ((this->FocusPoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNodalOffsetFocusPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iVar2 = (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3);
    iVar5 = iVar5 + iVar2;
    pFVar3 = pFVar3 + 0x310;
  }
  return iVar5;
}

// HasFocusPoint @ 14d6dd1e0

bool __thiscall
FNodalOffsetTable::HasFocusPoint(FNodalOffsetTable *this,float param_1,float param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d6dd1e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 8))();
  return (bool)uVar1;
}

// HasZoomPoint @ 14d6ddbb0

bool __thiscall
FNodalOffsetTable::HasZoomPoint(FNodalOffsetTable *this,float param_1,float param_2,float param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d6ddbb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  return (bool)uVar1;
}

// MergeFocusPoint @ 14d6e43c0

void __thiscall
FNodalOffsetTable::MergeFocusPoint
          (FNodalOffsetTable *this,float param_1,float param_2,bool param_3,float param_4)

{
  int iVar1;
  FNodalOffsetFocusCurve *this_00;
  FNodalOffsetFocusCurve *pFVar2;
  undefined1 local_res8 [8];
  
  LensDataTableUtils::MergeFocusPoint<FNodalOffsetFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3,param_4);
  iVar1 = (this->FocusCurves).ArrayNum;
  this_00 = (FNodalOffsetFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->FocusCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNodalOffsetFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FNodalOffsetFocusCurve::MergeFocus(this_00,param_1,param_2,param_3,param_4);
    this_00 = this_00 + 1;
  }
  return;
}

// RemoveFocusPoint @ 14d6e7f50

void __thiscall FNodalOffsetTable::RemoveFocusPoint(FNodalOffsetTable *this,float param_1)

{
  LensDataTableUtils::RemoveFocusPoint<FNodalOffsetFocusPoint>(&this->FocusPoints,param_1);
  LensDataTableUtils::RemoveFocusFromFocusCurves<FNodalOffsetFocusCurve>(&this->FocusCurves,param_1)
  ;
  return;
}

// RemoveZoomPoint @ 14d6e8ff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNodalOffsetTable::RemoveZoomPoint(FNodalOffsetTable *this,float param_1,float param_2)

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
    if (pFVar7 == pFVar2 + (longlong)iVar1 * 0x310) {
LAB_14d6e9185:
      LensDataTableUtils::RemoveZoomFromFocusCurves<FNodalOffsetFocusCurve>
                (&this->FocusCurves,param_1,param_2,__real_38d1b717);
      return;
    }
    if ((float)((uint)(*(float *)(pFVar7 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_322bcc77) {
      uVar4 = (uint)(((longlong)pFVar7 - (longlong)pFVar2) / 0x310);
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
        FNodalOffsetFocusPoint::RemovePoint
                  ((FNodalOffsetFocusPoint *)
                   ((this->FocusPoints).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x310),
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
        if (*(int *)((this->FocusPoints).AllocatorInstance.Data +
                    (longlong)(int)uVar4 * 0x310 + 0x88) == 0) {
          TArray<FNodalOffsetFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->FocusPoints,uVar4,Default);
        }
      }
      goto LAB_14d6e9185;
    }
    pFVar7 = pFVar7 + 0x310;
  } while( true );
}

// SetParameterCurveKeysAtFocus @ 14d6ec6f0

void __thiscall
FNodalOffsetTable::SetParameterCurveKeysAtFocus
          (FNodalOffsetTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FRichCurve *pFVar5;
  int iVar6;
  FRichCurve *pFVar7;
  FNodalOffsetTable *local_48;
  int local_40;
  undefined1 local_38 [32];
  
  if (5 < (uint)param_2) {
    return;
  }
  pFVar3 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)(this->FocusPoints).ArrayNum * 0x310;
  if (pFVar3 == pFVar2) {
    return;
  }
  while (__real_38d1b717 <
         (float)((uint)(*(float *)(pFVar3 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    pFVar3 = pFVar3 + 0x310;
    if (pFVar3 == pFVar2) {
      return;
    }
  }
  pFVar5 = (FRichCurve *)0x0;
  iVar1 = param_2 / 3;
  iVar6 = param_2 % 3;
  if (iVar1 == 0) {
    pFVar7 = (FRichCurve *)(pFVar3 + (longlong)iVar6 * 0x80 + 0x10);
  }
  else {
    pFVar7 = pFVar5;
    if (iVar1 == 1) {
      pFVar7 = (FRichCurve *)(pFVar3 + (longlong)iVar6 * 0x80 + 400);
    }
  }
  local_38._0_8_ = param_4->DataPtr;
  local_38._8_4_ = param_4->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_4->field_0xc;
  FBaseLensTable::CopyCurveKeys
            ((FBaseLensTable *)this,param_3,pFVar7,(TArrayView<FKeyHandle_const_,int> *)local_38);
  local_38._8_8_ = &local_48;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FNodalOffsetTable::SetParameterCurveKeysAtFocus'::__l8::<lambda_1>,FRichCurve_*,float>
       ::Call;
  if (iVar1 == 0) {
    lVar4 = (longlong)iVar6 * 0x80 + 0x10;
  }
  else {
    if (iVar1 != 1) goto LAB_14d6ec845;
    lVar4 = (longlong)iVar6 * 0x80 + 400;
  }
  pFVar5 = (FRichCurve *)(pFVar3 + lVar4);
LAB_14d6ec845:
  local_48 = this;
  local_40 = param_2;
  FBaseLensTable::PropagateCurveValuesToCrossCurves
            ((FBaseLensTable *)this,pFVar5,param_1,
             (TFunctionRef<FRichCurve_*___cdecl(float)> *)local_38);
  return;
}

// SetParameterCurveKeysAtZoom @ 14d6ed0f0

void __thiscall
FNodalOffsetTable::SetParameterCurveKeysAtZoom
          (FNodalOffsetTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  FRichCurve *pFVar6;
  FRichCurve *pFVar7;
  FNodalOffsetTable *local_48;
  int local_40;
  undefined1 local_38 [32];
  
  if (5 < (uint)param_2) {
    return;
  }
  pFVar3 = (this->FocusCurves).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)(this->FocusCurves).ArrayNum * 0x308;
  if (pFVar3 == pFVar2) {
    return;
  }
  while (__real_38d1b717 <
         (float)((uint)(*(float *)(pFVar3 + 0x300) - param_1) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pFVar3 = pFVar3 + 0x308;
    if (pFVar3 == pFVar2) {
      return;
    }
  }
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return;
  }
  pFVar6 = (FRichCurve *)0x0;
  iVar1 = param_2 / 3;
  iVar4 = param_2 % 3;
  if (iVar1 == 0) {
    pFVar7 = (FRichCurve *)(pFVar3 + (longlong)iVar4 * 0x80);
  }
  else {
    pFVar7 = pFVar6;
    if (iVar1 == 1) {
      pFVar7 = (FRichCurve *)(pFVar3 + ((longlong)iVar4 + 3) * 0x80);
    }
  }
  local_38._0_8_ = param_4->DataPtr;
  local_38._8_4_ = param_4->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_4->field_0xc;
  FBaseLensTable::CopyCurveKeys
            ((FBaseLensTable *)this,param_3,pFVar7,(TArrayView<FKeyHandle_const_,int> *)local_38);
  local_38._8_8_ = &local_48;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FNodalOffsetTable::SetParameterCurveKeysAtZoom'::__l8::<lambda_1>,FRichCurve_*,float>
       ::Call;
  if (iVar1 == 0) {
    lVar5 = (longlong)iVar4;
  }
  else {
    if (iVar1 != 1) goto LAB_14d6ed23f;
    lVar5 = (longlong)iVar4 + 3;
  }
  pFVar6 = (FRichCurve *)(pFVar3 + lVar5 * 0x80);
LAB_14d6ed23f:
  local_48 = this;
  local_40 = param_2;
  FBaseLensTable::PropagateCurveValuesToCrossCurves
            ((FBaseLensTable *)this,pFVar6,param_1,
             (TFunctionRef<FRichCurve_*___cdecl(float)> *)local_38);
  return;
}

// SetPoint @ 14d6ee4d0

bool __thiscall
FNodalOffsetTable::SetPoint
          (FNodalOffsetTable *this,float param_1,float param_2,FNodalPointOffset *param_3,
          float param_4)

{
  bool bVar1;
  
  bVar1 = LensDataTableUtils::SetPoint<FNodalOffsetTable,FNodalPointOffset>
                    (this,param_1,param_2,param_3,param_4);
  if (bVar1) {
    LensDataTableUtils::SetPointInFocusCurve<FNodalOffsetFocusCurve,FNodalPointOffset>
              (&this->FocusCurves,param_1,param_2,param_3,param_4);
  }
  return bVar1;
}

