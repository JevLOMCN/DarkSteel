// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 35

// StaticStruct @ 14d677e90

UScriptStruct * __cdecl FImageCenterTable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FImageCenterTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FImageCenterTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FImageCenterTable,(UObject *)pUVar1,
                         L"ImageCenterTable");
  }
  return Z_Registration_Info_UScriptStruct_FImageCenterTable.OuterSingleton;
}

// AddPoint @ 14d6b5760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FImageCenterTable::AddPoint
          (FImageCenterTable *this,float param_1,float param_2,FImageCenterInfo *param_3,
          float param_4,bool param_5)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FImageCenterFocusPoint *this_00;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStackY_1b8 [32];
  FImageCenterFocusPoint local_188;
  ulonglong local_78;
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar7 = (this->FocusPoints).ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
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
      this_00 = (FImageCenterFocusPoint *)((this->FocusPoints).AllocatorInstance.Data + lVar9);
      fVar1 = this_00->Focus;
      if ((float)((uint)(fVar1 - param_1) & uVar3) <= param_4) {
        bVar4 = FImageCenterFocusPoint::AddPoint(this_00,param_2,param_3,param_4,param_5);
        goto LAB_14d6b58a0;
      }
      if (param_1 < fVar1) break;
      iVar7 = (this->FocusPoints).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x110;
    } while ((int)uVar8 < iVar7);
  }
  FImageCenterFocusPoint::FImageCenterFocusPoint(&local_188);
  local_188.Focus = param_1;
  bVar4 = FImageCenterFocusPoint::AddPoint(&local_188,param_2,param_3,param_4,param_5);
  if (bVar4) {
    TArray<FImageCenterFocusPoint,TSizedDefaultAllocator<32>_>::Insert
              (&this->FocusPoints,&local_188,uVar8);
  }
  FImageCenterFocusPoint::~FImageCenterFocusPoint(&local_188);
LAB_14d6b58a0:
  if (bVar4 != false) {
    LensDataTableUtils::AddPointToFocusCurve<FImageCenterFocusCurve,FImageCenterInfo>
              (&this->FocusCurves,param_1,param_2,param_3,param_4);
  }
  return bVar4 != false;
}

// BuildFocusCurves @ 14d6b75b0

void __thiscall FImageCenterTable::BuildFocusCurves(FImageCenterTable *this)

{
  int *piVar1;
  
  DestructItems<FImageCenterFocusCurve,int>
            ((FImageCenterFocusCurve *)(this->FocusCurves).AllocatorInstance.Data,
             (this->FocusCurves).ArrayNum);
  piVar1 = &(this->FocusCurves).ArrayMax;
  (this->FocusCurves).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x108,8,0,&(this->FocusCurves).AllocatorInstance,0,piVar1);
  }
  LensDataTableUtils::BuildFocusCurves<FImageCenterFocusPoint,FImageCenterFocusCurve>
            (&this->FocusPoints,&this->FocusCurves);
  return;
}

// BuildParameterCurveAtFocus @ 14d6b82f0

bool __thiscall
FImageCenterTable::BuildParameterCurveAtFocus
          (FImageCenterTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  
  if ((uint)param_2 < 2) {
    pFVar3 = (this->FocusPoints).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)(this->FocusPoints).ArrayNum * 0x110;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 0x110) {
      if ((float)((uint)(*(float *)(pFVar3 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
          <= __real_38d1b717) {
        lVar2 = 0x10;
        if (param_2 != 0) {
          lVar2 = 0x90;
        }
        FRichCurve::operator=(param_3,(FRichCurve *)(pFVar3 + lVar2));
        return true;
      }
    }
  }
  return false;
}

// BuildParameterCurveAtZoom @ 14d6b89b0

bool __thiscall
FImageCenterTable::BuildParameterCurveAtZoom
          (FImageCenterTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  FRichCurve *pFVar1;
  FRichCurve *pFVar2;
  
  if ((uint)param_2 < 2) {
    pFVar2 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
    pFVar1 = (FRichCurve *)((longlong)pFVar2 + (longlong)(this->FocusCurves).ArrayNum * 0x108);
    for (; pFVar2 != pFVar1; pFVar2 = (FRichCurve *)&pFVar2[2]._padding_) {
      if ((float)((uint)(*(float *)&pFVar2[2]._padding_ - param_1) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) {
        if (pFVar2 == (FRichCurve *)0x0) {
          return false;
        }
        if (param_2 != 0) {
          pFVar2 = pFVar2 + 1;
        }
        FRichCurve::operator=(param_3,pFVar2);
        return true;
      }
    }
  }
  return false;
}

// CanEditCurveKeyAttributes @ 14d6b9210

bool __thiscall FImageCenterTable::CanEditCurveKeyAttributes(FImageCenterTable *this,int param_1)

{
  return true;
}

// CanEditCurveKeyPositions @ 14d6b9290

bool __thiscall FImageCenterTable::CanEditCurveKeyPositions(FImageCenterTable *this,int param_1)

{
  return true;
}

// ChangeFocusPoint @ 14d6b9820

void __thiscall
FImageCenterTable::ChangeFocusPoint
          (FImageCenterTable *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  FKeyHandle FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FRichCurve *this_00;
  FRichCurve *pFVar3;
  FRichCurve *this_01;
  float fVar4;
  undefined1 local_res8 [8];
  FKeyHandle local_58;
  FKeyHandle local_54;
  
  fVar4 = param_1;
  LensDataTableUtils::ChangeFocusPoint<FImageCenterFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3);
  this_00 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
  iVar1 = (this->FocusCurves).ArrayNum;
  this_01 = this_00 + 1;
  pFVar3 = (FRichCurve *)((longlong)this_00 + (longlong)iVar1 * 0x108);
  while( true ) {
    if ((this->FocusCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FImageCenterFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    FRealCurve::FindKey((FRealCurve *)this_00,fVar4,param_1);
    FVar2 = FKeyHandle::Invalid();
    if (local_58.Index != *(uint *)CONCAT44(extraout_var,FVar2.Index)) {
      FRichCurve::SetKeyTime(this_00,local_58,param_2);
    }
    FRealCurve::FindKey((FRealCurve *)this_01,fVar4,param_1);
    FVar2 = FKeyHandle::Invalid();
    if (local_54.Index != *(uint *)CONCAT44(extraout_var_00,FVar2.Index)) {
      FRichCurve::SetKeyTime(this_01,local_54,param_2);
    }
    this_00 = (FRichCurve *)&this_00[2]._padding_;
    this_01 = (FRichCurve *)&this_01[2]._padding_;
  }
  return;
}

// ChangeZoomPoint @ 14d6ba160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FImageCenterTable::ChangeZoomPoint
          (FImageCenterTable *this,float param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  FImageCenterFocusPoint *this_00;
  FImageCenterFocusPoint *pFVar2;
  TVector2<double>_u_0 local_58 [5];
  
  LensDataTableUtils::ChangeZoomPoint<FImageCenterFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3,param_4);
  this_00 = (FImageCenterFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar2 = this_00 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return;
    }
    if ((float)((uint)(this_00->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        param_4) break;
    this_00 = this_00 + 1;
  }
  local_58[0]._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_58[0]._s_0.Y = _UNK_150689678;
  bVar1 = FImageCenterFocusPoint::GetPoint
                    (this_00,param_3,(FImageCenterInfo *)&local_58[0]._s_0,param_4);
  if (!bVar1) {
    return;
  }
  LensDataTableUtils::ChangeZoomInFocusCurves<FImageCenterFocusCurve,FImageCenterInfo>
            (&this->FocusCurves,param_1,param_2,param_3,(FImageCenterInfo *)&local_58[0]._s_0,
             param_4);
  return;
}

// DoesFocusPointExists @ 14d6c0930

bool __thiscall
FImageCenterTable::DoesFocusPointExists(FImageCenterTable *this,float param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->FocusPoints).ArrayNum * 0x110;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if ((float)((uint)(*(float *)(pFVar2 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= param_2) break;
    pFVar2 = pFVar2 + 0x110;
  }
  return true;
}

// DoesZoomPointExists @ 14d6c0b30

bool __thiscall
FImageCenterTable::DoesZoomPointExists
          (FImageCenterTable *this,float param_1,float param_2,float param_3)

{
  bool bVar1;
  FImageCenterFocusPoint *pFVar2;
  FImageCenterFocusPoint *this_00;
  FImageCenterInfo local_18;
  
  this_00 = (FImageCenterFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar2 = this_00 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return false;
    }
    if ((float)((uint)(this_00->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        param_3) break;
    this_00 = this_00 + 1;
  }
  bVar1 = FImageCenterFocusPoint::GetPoint(this_00,param_2,&local_18,param_3);
  if (!bVar1) {
    return false;
  }
  return true;
}

// ForEachPoint @ 14d6cb520

void __thiscall
FImageCenterTable::ForEachPoint
          (FImageCenterTable *this,TFunction<void___cdecl(FBaseFocusPoint_const_&)> *param_1)

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
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x110;
  while( true ) {
    if ((this->FocusPoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FImageCenterFocusPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
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
    pFVar5 = pFVar5 + 0x110;
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

// GetBaseFocusPoint @ 14d6d1ef0

FBaseFocusPoint * __thiscall
FImageCenterTable::GetBaseFocusPoint(FImageCenterTable *this,int param_1)

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
           ((this->FocusPoints).AllocatorInstance.Data + (longlong)param_1 * 0x110);
  }
  return (FBaseFocusPoint *)0x0;
}

// GetFocusCurve @ 14d6d3dd0

FImageCenterFocusCurve * __thiscall
FImageCenterTable::GetFocusCurve(FImageCenterTable *this,float param_1,float param_2)

{
  FImageCenterFocusCurve *pFVar1;
  FImageCenterFocusCurve *pFVar2;
  
  pFVar2 = (FImageCenterFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusCurves).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FImageCenterFocusCurve *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)
    break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusCurve @ 14d6d3e20

FImageCenterFocusCurve * __thiscall
FImageCenterTable::GetFocusCurve(FImageCenterTable *this,float param_1,float param_2)

{
  FImageCenterFocusCurve *pFVar1;
  FImageCenterFocusCurve *pFVar2;
  
  pFVar2 = (FImageCenterFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusCurves).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FImageCenterFocusCurve *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)
    break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusCurves @ 14d6d40b0

TArray<FImageCenterFocusCurve,TSizedDefaultAllocator<32>_> * __thiscall
FImageCenterTable::GetFocusCurves(FImageCenterTable *this)

{
  return &this->FocusCurves;
}

// GetFocusCurves @ 14d6d40c0

TArrayView<FImageCenterFocusCurve_const_,int> * __thiscall
FImageCenterTable::GetFocusCurves
          (FImageCenterTable *this,
          TArrayView<FImageCenterFocusCurve_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FImageCenterFocusCurve_const_,int> *pTVar4;
  
  iVar1 = (this->FocusCurves).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FImageCenterFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
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
    pTVar4 = (TArrayView<FImageCenterFocusCurve_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetFocusPoint @ 14d6d4490

FImageCenterFocusPoint * __thiscall
FImageCenterTable::GetFocusPoint(FImageCenterTable *this,float param_1,float param_2)

{
  FImageCenterFocusPoint *pFVar1;
  FImageCenterFocusPoint *pFVar2;
  
  pFVar2 = (FImageCenterFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FImageCenterFocusPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2
       ) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusPoint @ 14d6d44e0

FImageCenterFocusPoint * __thiscall
FImageCenterTable::GetFocusPoint(FImageCenterTable *this,float param_1,float param_2)

{
  FImageCenterFocusPoint *pFVar1;
  FImageCenterFocusPoint *pFVar2;
  
  pFVar2 = (FImageCenterFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FImageCenterFocusPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2
       ) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusPointNum @ 14d6d46f0

int __thiscall FImageCenterTable::GetFocusPointNum(FImageCenterTable *this)

{
  return (this->FocusPoints).ArrayNum;
}

// GetFocusPoints @ 14d6d4820

TArray<FImageCenterFocusPoint,TSizedDefaultAllocator<32>_> * __thiscall
FImageCenterTable::GetFocusPoints(FImageCenterTable *this)

{
  return &this->FocusPoints;
}

// GetFocusPoints @ 14d6d4830

TArrayView<FImageCenterFocusPoint_const_,int> * __thiscall
FImageCenterTable::GetFocusPoints
          (FImageCenterTable *this,
          TArrayView<FImageCenterFocusPoint_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FImageCenterFocusPoint_const_,int> *pTVar4;
  
  iVar1 = (this->FocusPoints).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FImageCenterFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
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
    pTVar4 = (TArrayView<FImageCenterFocusPoint_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetLinkedCategories @ 14d6d5610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>_>
* __thiscall
FImageCenterTable::GetLinkedCategories
          (FImageCenterTable *this,
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
      local_77.bRemoveByDefault = true;
      local_48 = &local_76;
      local_76 = 2;
      local_40 = &local_75;
      local_38 = &local_74;
      local_30 = &local_73;
      local_28 = &local_72;
      local_20 = local_71;
      local_68._First = &local_58;
      local_68._Last = &local_18;
      local_75 = 1;
      local_74 = 5;
      local_73 = 1;
      local_72 = 6;
      local_71[0] = 0;
      TMap<enum_ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>_>
      ::
      TMap<enum_ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>_>
                (&LinkedToCategories,&local_68);
      atexit(`FImageCenterTable::GetLinkedCategories'::__l2::
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

// GetParameterValueLabel @ 14d6d6e60

FText * __thiscall
FImageCenterTable::GetParameterValueLabel
          (FImageCenterTable *this,FText *__return_storage_ptr__,int param_1)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"FImageCenterTable",L"ParameterValueLabel",L"(normalized)");
  return __return_storage_ptr__;
}

// GetPoint @ 14d6d7510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FImageCenterTable::GetPoint
          (FImageCenterTable *this,float param_1,float param_2,FImageCenterInfo *param_3,
          float param_4)

{
  bool bVar1;
  FImageCenterFocusPoint *pFVar2;
  FImageCenterFocusPoint *this_00;
  TVector2<double>_u_0 local_18;
  
  this_00 = (FImageCenterFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar2 = this_00 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return false;
    }
    if ((float)((uint)(this_00->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        param_4) break;
    this_00 = this_00 + 1;
  }
  local_18._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_18._s_0.Y = _UNK_150689678;
  bVar1 = FImageCenterFocusPoint::GetPoint
                    (this_00,param_2,(FImageCenterInfo *)&local_18._s_0,param_4);
  if (!bVar1) {
    return false;
  }
  (param_3->PrincipalPoint).field0_0x0._s_0.X = local_18._s_0.X;
  (param_3->PrincipalPoint).field0_0x0._s_0.Y = local_18._s_0.Y;
  return true;
}

// GetScriptStruct @ 14d6d8ca0

UScriptStruct * __thiscall FImageCenterTable::GetScriptStruct(FImageCenterTable *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FImageCenterTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FImageCenterTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FImageCenterTable,(UObject *)pUVar1,
                         L"ImageCenterTable");
  }
  return Z_Registration_Info_UScriptStruct_FImageCenterTable.OuterSingleton;
}

// GetTotalPointNum @ 14d6dc070

int __thiscall FImageCenterTable::GetTotalPointNum(FImageCenterTable *this)

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
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x110;
  while( true ) {
    if ((this->FocusPoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FImageCenterFocusPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iVar2 = (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3);
    iVar5 = iVar5 + iVar2;
    pFVar3 = pFVar3 + 0x110;
  }
  return iVar5;
}

// HasFocusPoint @ 14d6dd1d0

bool __thiscall
FImageCenterTable::HasFocusPoint(FImageCenterTable *this,float param_1,float param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d6dd1d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 8))();
  return (bool)uVar1;
}

// HasZoomPoint @ 14d6ddba0

bool __thiscall
FImageCenterTable::HasZoomPoint(FImageCenterTable *this,float param_1,float param_2,float param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d6ddba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  return (bool)uVar1;
}

// MergeFocusPoint @ 14d6e42d0

void __thiscall
FImageCenterTable::MergeFocusPoint
          (FImageCenterTable *this,float param_1,float param_2,bool param_3,float param_4)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  undefined1 local_res8 [8];
  
  LensDataTableUtils::MergeFocusPoint<FImageCenterFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3,param_4);
  iVar1 = (this->FocusCurves).ArrayNum;
  this_00 = (this->FocusCurves).AllocatorInstance.Data;
  pFVar2 = this_00 + (longlong)iVar1 * 0x108;
  while( true ) {
    if ((this->FocusCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FImageCenterFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FBaseFocusCurve::MergeFocusInCurve
              ((FBaseFocusCurve *)this_00,(FRichCurve *)this_00,param_1,param_2,param_3,param_4);
    FBaseFocusCurve::MergeFocusInCurve
              ((FBaseFocusCurve *)this_00,(FRichCurve *)(this_00 + 0x80),param_1,param_2,param_3,
               param_4);
    this_00 = this_00 + 0x108;
  }
  return;
}

// RemoveFocusPoint @ 14d6e7f10

void __thiscall FImageCenterTable::RemoveFocusPoint(FImageCenterTable *this,float param_1)

{
  LensDataTableUtils::RemoveFocusPoint<FImageCenterFocusPoint>(&this->FocusPoints,param_1);
  LensDataTableUtils::RemoveFocusFromFocusCurves<FImageCenterFocusCurve>(&this->FocusCurves,param_1)
  ;
  return;
}

// RemoveZoomPoint @ 14d6e8e20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FImageCenterTable::RemoveZoomPoint(FImageCenterTable *this,float param_1,float param_2)

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
    if (pFVar7 == pFVar2 + (longlong)iVar1 * 0x110) {
LAB_14d6e8fb5:
      LensDataTableUtils::RemoveZoomFromFocusCurves<FImageCenterFocusCurve>
                (&this->FocusCurves,param_1,param_2,__real_38d1b717);
      return;
    }
    if ((float)((uint)(*(float *)(pFVar7 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_322bcc77) {
      uVar4 = (uint)(((longlong)pFVar7 - (longlong)pFVar2) / 0x110);
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
        FImageCenterFocusPoint::RemovePoint
                  ((FImageCenterFocusPoint *)
                   ((this->FocusPoints).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x110),
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
                    (longlong)(int)uVar4 * 0x110 + 0x88) == 0) {
          TArray<FImageCenterFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->FocusPoints,uVar4,Default);
        }
      }
      goto LAB_14d6e8fb5;
    }
    pFVar7 = pFVar7 + 0x110;
  } while( true );
}

// SetParameterCurveKeysAtFocus @ 14d6ec5c0

void __thiscall
FImageCenterTable::SetParameterCurveKeysAtFocus
          (FImageCenterTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FRichCurve *pFVar3;
  FRichCurve *pFVar4;
  FImageCenterTable *local_38;
  int local_30;
  undefined1 local_28 [32];
  
  if ((uint)param_2 < 2) {
    pFVar2 = (this->FocusPoints).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(this->FocusPoints).ArrayNum * 0x110;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 0x110) {
      if ((float)((uint)(*(float *)(pFVar2 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
          <= __real_38d1b717) {
        pFVar3 = (FRichCurve *)0x0;
        if (param_2 == 0) {
          pFVar4 = (FRichCurve *)(pFVar2 + 0x10);
        }
        else {
          pFVar4 = (FRichCurve *)(pFVar2 + 0x90);
          if (param_2 != 1) {
            pFVar4 = (FRichCurve *)0x0;
          }
        }
        local_28._0_8_ = param_4->DataPtr;
        local_28._8_4_ = param_4->ArrayNum;
        local_28._12_4_ = *(undefined4 *)&param_4->field_0xc;
        FBaseLensTable::CopyCurveKeys
                  ((FBaseLensTable *)this,param_3,pFVar4,
                   (TArrayView<FKeyHandle_const_,int> *)local_28);
        local_28._8_8_ = &local_38;
        local_28._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FImageCenterTable::SetParameterCurveKeysAtFocus'::__l8::<lambda_1>,FRichCurve_*,float>
             ::Call;
        if (param_2 == 0) {
          pFVar3 = (FRichCurve *)(pFVar2 + 0x10);
        }
        else if (param_2 == 1) {
          pFVar3 = (FRichCurve *)(pFVar2 + 0x90);
        }
        local_38 = this;
        local_30 = param_2;
        FBaseLensTable::PropagateCurveValuesToCrossCurves
                  ((FBaseLensTable *)this,pFVar3,param_1,
                   (TFunctionRef<FRichCurve_*___cdecl(float)> *)local_28);
        return;
      }
    }
  }
  return;
}

// SetParameterCurveKeysAtZoom @ 14d6ecfd0

void __thiscall
FImageCenterTable::SetParameterCurveKeysAtZoom
          (FImageCenterTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  FRichCurve *pFVar1;
  FRichCurve *pFVar2;
  FImageCenterTable *local_38;
  int local_30;
  undefined1 local_28 [32];
  
  if ((uint)param_2 < 2) {
    pFVar2 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
    pFVar1 = (FRichCurve *)((longlong)pFVar2 + (longlong)(this->FocusCurves).ArrayNum * 0x108);
    for (; pFVar2 != pFVar1; pFVar2 = (FRichCurve *)&pFVar2[2]._padding_) {
      if ((float)((uint)(*(float *)&pFVar2[2]._padding_ - param_1) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) {
        pFVar1 = pFVar2;
        if (param_2 != 0) {
          if (param_2 == 1) {
            pFVar1 = pFVar2 + 1;
          }
          else {
            pFVar1 = (FRichCurve *)0x0;
          }
        }
        local_28._0_8_ = param_4->DataPtr;
        local_28._8_4_ = param_4->ArrayNum;
        local_28._12_4_ = *(undefined4 *)&param_4->field_0xc;
        FBaseLensTable::CopyCurveKeys
                  ((FBaseLensTable *)this,param_3,pFVar1,
                   (TArrayView<FKeyHandle_const_,int> *)local_28);
        local_28._8_8_ = &local_38;
        local_28._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FImageCenterTable::SetParameterCurveKeysAtZoom'::__l8::<lambda_1>,FRichCurve_*,float>
             ::Call;
        if (param_2 != 0) {
          if (param_2 == 1) {
            pFVar2 = pFVar2 + 1;
          }
          else {
            pFVar2 = (FRichCurve *)0x0;
          }
        }
        local_38 = this;
        local_30 = param_2;
        FBaseLensTable::PropagateCurveValuesToCrossCurves
                  ((FBaseLensTable *)this,pFVar2,param_1,
                   (TFunctionRef<FRichCurve_*___cdecl(float)> *)local_28);
        return;
      }
    }
  }
  return;
}

// SetPoint @ 14d6eded0

bool __thiscall
FImageCenterTable::SetPoint
          (FImageCenterTable *this,float param_1,float param_2,FImageCenterInfo *param_3,
          float param_4)

{
  double dVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FKeyHandle FVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FImageCenterFocusPoint *this_00;
  int iVar8;
  uint uVar9;
  FRichCurve *this_01;
  longlong lVar10;
  float fVar11;
  FKeyHandle local_res8;
  FKeyHandle local_68;
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar9 = 0;
  if (0 < (this->FocusPoints).ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->FocusPoints).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
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
      if (param_1 < *(float *)((this->FocusPoints).AllocatorInstance.Data + lVar10 + 8)) {
        return false;
      }
      uVar6 = 0;
      if ((int)uVar9 < (this->FocusPoints).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
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
      this_00 = (FImageCenterFocusPoint *)((this->FocusPoints).AllocatorInstance.Data + lVar10);
      if ((float)((uint)(this_00->Focus - param_1) & uVar3) <= param_4) {
        bVar4 = FImageCenterFocusPoint::SetPoint(this_00,param_2,param_3,__real_38d1b717);
        if (!bVar4) {
          return false;
        }
        iVar8 = (this->FocusCurves).ArrayNum;
        uVar9 = 0;
        if (0 < iVar8) {
          lVar10 = 0;
          while( true ) {
            uVar6 = 0;
            if ((int)uVar9 < iVar8) {
              uVar6 = ~uVar9 >> 0x1f;
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
            this_01 = (FRichCurve *)((this->FocusCurves).AllocatorInstance.Data + lVar10);
            fVar11 = *(float *)&this_01[2]._padding_;
            if ((float)((uint)(fVar11 - param_2) & uVar3) <= param_4) {
              dVar1 = (param_3->PrincipalPoint).field0_0x0._s_0.X;
              FRealCurve::FindKey((FRealCurve *)this_01,fVar11,param_1);
              FVar7 = FKeyHandle::Invalid();
              if (local_res8.Index != *(uint *)CONCAT44(extraout_var,FVar7.Index)) {
                FRichCurve::SetKeyValue(this_01,local_res8,(float)dVar1,true);
              }
              dVar1 = (param_3->PrincipalPoint).field0_0x0._s_0.Y;
              FRealCurve::FindKey((FRealCurve *)(this_01 + 1),fVar11,param_1);
              FVar7 = FKeyHandle::Invalid();
              if (local_68.Index != *(uint *)CONCAT44(extraout_var_00,FVar7.Index)) {
                FRichCurve::SetKeyValue(this_01 + 1,local_68,(float)dVar1,true);
              }
              return true;
            }
            if (param_2 < fVar11) break;
            iVar8 = (this->FocusCurves).ArrayNum;
            uVar9 = uVar9 + 1;
            lVar10 = lVar10 + 0x108;
            if (iVar8 <= (int)uVar9) {
              return true;
            }
          }
          return true;
        }
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x110;
    } while ((int)uVar9 < (this->FocusPoints).ArrayNum);
  }
  return false;
}

