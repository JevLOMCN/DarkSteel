// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 37

// StaticStruct @ 14d680670

UScriptStruct * __cdecl FFocalLengthTable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFocalLengthTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FFocalLengthTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFocalLengthTable,(UObject *)pUVar1,
                         L"FocalLengthTable");
  }
  return Z_Registration_Info_UScriptStruct_FFocalLengthTable.OuterSingleton;
}

// AddPoint @ 14d6b53d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FFocalLengthTable::AddPoint
          (FFocalLengthTable *this,float param_1,float param_2,FFocalLengthInfo *param_3,
          float param_4,bool param_5)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FFocalLengthFocusPoint *this_00;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStackY_1c8 [32];
  FFocalLengthFocusPoint local_198;
  ulonglong local_78;
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
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
      this_00 = (FFocalLengthFocusPoint *)((this->FocusPoints).AllocatorInstance.Data + lVar9);
      fVar1 = this_00->Focus;
      if ((float)((uint)(fVar1 - param_1) & uVar3) <= param_4) {
        bVar4 = FFocalLengthFocusPoint::AddPoint(this_00,param_2,param_3,param_4,param_5);
        goto LAB_14d6b5510;
      }
      if (param_1 < fVar1) break;
      iVar7 = (this->FocusPoints).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x120;
    } while ((int)uVar8 < iVar7);
  }
  FFocalLengthFocusPoint::FFocalLengthFocusPoint(&local_198);
  local_198.Focus = param_1;
  bVar4 = FFocalLengthFocusPoint::AddPoint(&local_198,param_2,param_3,param_4,param_5);
  if (bVar4) {
    TArray<FFocalLengthFocusPoint,TSizedDefaultAllocator<32>_>::Insert
              (&this->FocusPoints,&local_198,uVar8);
  }
  FFocalLengthFocusPoint::~FFocalLengthFocusPoint(&local_198);
LAB_14d6b5510:
  if (bVar4 != false) {
    LensDataTableUtils::AddPointToFocusCurve<FFocalLengthFocusCurve,FFocalLengthInfo>
              (&this->FocusCurves,param_1,param_2,param_3,param_4);
  }
  return bVar4 != false;
}

// BuildFocusCurves @ 14d6b7540

void __thiscall FFocalLengthTable::BuildFocusCurves(FFocalLengthTable *this)

{
  int *piVar1;
  
  DestructItems<FFocalLengthFocusCurve,int>
            ((FFocalLengthFocusCurve *)(this->FocusCurves).AllocatorInstance.Data,
             (this->FocusCurves).ArrayNum);
  piVar1 = &(this->FocusCurves).ArrayMax;
  (this->FocusCurves).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x108,8,0,&(this->FocusCurves).AllocatorInstance,0,piVar1);
  }
  LensDataTableUtils::BuildFocusCurves<FFocalLengthFocusPoint,FFocalLengthFocusCurve>
            (&this->FocusPoints,&this->FocusCurves);
  return;
}

// BuildParameterCurveAtFocus @ 14d6b8020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FFocalLengthTable::BuildParameterCurveAtFocus
          (FFocalLengthTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  FRichCurve *this_00;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  UObject *pUVar11;
  FRichCurveKey *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 local_res18 [8];
  ulonglong in_stack_ffffffffffffff98;
  
  if (((uint)param_2 < 2) || (param_2 == -1)) {
    pFVar13 = (this->FocusPoints).AllocatorInstance.Data;
    pwVar17 = (wchar_t *)(pFVar13 + (longlong)(this->FocusPoints).ArrayNum * 0x120);
    for (; pFVar13 != (FScriptContainerElement *)pwVar17; pFVar13 = pFVar13 + 0x120) {
      if ((float)((uint)(*(float *)(pFVar13 + 8) - param_1) &
                 (uint)___xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) {
        if (pFVar13 == (FScriptContainerElement *)0x0) {
          return false;
        }
        if (param_2 == -1) {
          this_00 = (FRichCurve *)(pFVar13 + 0x10);
          uVar18 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
          iVar7 = (**(code **)(*(longlong *)(pFVar13 + 0x10) + 8))(this_00);
          FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this_00,iVar7);
          uVar15 = 0;
          pTVar9 = FRichCurve::GetConstRefOfKeys(this_00);
          uVar21 = (undefined4)__real_3ff0000000000000;
          uVar4 = (ulonglong)__real_3ff0000000000000 >> 0x20;
          pFVar14 = (pTVar9->AllocatorInstance).Data;
          uVar2 = pTVar9->ArrayNum;
          uVar10 = (ulonglong)(int)uVar2;
          pFVar16 = pFVar14 + uVar10 * 0x1c;
          while( true ) {
            if (pTVar9->ArrayNum != (int)uVar10) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (pFVar14 == pFVar16) break;
            pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            uVar19 = uVar21;
            uVar20 = (int)uVar4;
            if (pUVar11 != (UObject *)0x0) {
              uVar19 = (int)*(undefined8 *)&pUVar11[2].field_0x8;
              uVar20 = (int)((ulonglong)*(undefined8 *)&pUVar11[2].field_0x8 >> 0x20);
            }
            uVar8 = 0;
            if ((int)uVar15 < *(int *)(pFVar13 + 0x70)) {
              uVar8 = ~uVar15 >> 0x1f;
            }
            if (uVar8 == 0) {
              pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_ffffffffffffff98 = (ulonglong)(int)uVar15;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
            }
            in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
            FRichCurve::AddKey(param_3,(float)uVar18,*(float *)(pFVar14 + 4),SUB81(pwVar17,0),
                               (FKeyHandle)(uint)in_stack_ffffffffffffff98);
            uVar8 = 0;
            if ((int)uVar15 < *(int *)(pFVar13 + 0x70)) {
              uVar8 = ~uVar15 >> 0x1f;
            }
            if (uVar8 == 0) {
              pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_ffffffffffffff98 = (longlong)(int)uVar15;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
            }
            pFVar12 = FRichCurve::GetKey(param_3,(FKeyHandle)
                                                 *(uint *)(*(longlong *)(pFVar13 + 0x68) +
                                                          (longlong)(int)uVar15 * 4));
            uVar15 = uVar15 + 1;
            (pFVar12->TangentMode).Value = (uchar)pFVar14[1];
            (pFVar12->InterpMode).Value = (uchar)*pFVar14;
            pFVar12->ArriveTangent =
                 (float)(double)CONCAT44(uVar20,uVar19) * *(float *)(pFVar14 + 0xc);
            pFVar1 = pFVar14 + 0x14;
            pFVar14 = pFVar14 + 0x1c;
            pFVar12->LeaveTangent = (float)(double)CONCAT44(uVar20,uVar19) * *(float *)pFVar1;
            uVar10 = (ulonglong)uVar2;
          }
          return true;
        }
        if (param_2 == 0) {
          FRichCurve::operator=(param_3,(FRichCurve *)(pFVar13 + 0x10));
          return true;
        }
        if (param_2 != 1) {
          return false;
        }
        FRichCurve::operator=(param_3,(FRichCurve *)(pFVar13 + 0x90));
        return true;
      }
    }
  }
  return false;
}

// BuildParameterCurveAtZoom @ 14d6b86f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FFocalLengthTable::BuildParameterCurveAtZoom
          (FFocalLengthTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  UObject *pUVar11;
  FRichCurveKey *pFVar12;
  FRichCurve *pFVar13;
  FRichCurve *this_00;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 local_res18 [8];
  ulonglong in_stack_ffffffffffffff98;
  
  if (((uint)param_2 < 2) || (param_2 == -1)) {
    this_00 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
    pFVar13 = (FRichCurve *)((longlong)this_00 + (longlong)(this->FocusCurves).ArrayNum * 0x108);
    for (; this_00 != pFVar13; this_00 = (FRichCurve *)&this_00[2]._padding_) {
      if ((float)((uint)(*(float *)&this_00[2]._padding_ - param_1) &
                 (uint)___xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) {
        if (this_00 == (FRichCurve *)0x0) {
          return false;
        }
        if (param_2 == -1) {
          pwVar17 = (wchar_t *)param_3;
          uVar18 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
          iVar7 = (**(code **)(this_00->_padding_ + 8))(this_00);
          FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this_00,iVar7);
          uVar14 = 0;
          pTVar9 = FRichCurve::GetConstRefOfKeys(this_00);
          uVar21 = (undefined4)__real_3ff0000000000000;
          uVar4 = (ulonglong)__real_3ff0000000000000 >> 0x20;
          pFVar16 = (pTVar9->AllocatorInstance).Data;
          uVar2 = pTVar9->ArrayNum;
          uVar10 = (ulonglong)(int)uVar2;
          pFVar15 = pFVar16 + uVar10 * 0x1c;
          while( true ) {
            if (pTVar9->ArrayNum != (int)uVar10) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (pFVar16 == pFVar15) break;
            pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            uVar19 = uVar21;
            uVar20 = (int)uVar4;
            if (pUVar11 != (UObject *)0x0) {
              uVar19 = (int)*(undefined8 *)&pUVar11[2].field_0x8;
              uVar20 = (int)((ulonglong)*(undefined8 *)&pUVar11[2].field_0x8 >> 0x20);
            }
            uVar8 = 0;
            if ((int)uVar14 < (int)this_00->_padding_) {
              uVar8 = ~uVar14 >> 0x1f;
            }
            if (uVar8 == 0) {
              pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_ffffffffffffff98 = (ulonglong)(int)uVar14;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
            }
            in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
            FRichCurve::AddKey(param_3,(float)uVar18,*(float *)(pFVar16 + 4),SUB81(pwVar17,0),
                               (FKeyHandle)(uint)in_stack_ffffffffffffff98);
            uVar8 = 0;
            if ((int)uVar14 < (int)this_00->_padding_) {
              uVar8 = ~uVar14 >> 0x1f;
            }
            if (uVar8 == 0) {
              pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_ffffffffffffff98 = (longlong)(int)uVar14;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
            }
            pFVar12 = FRichCurve::GetKey(param_3,(FKeyHandle)
                                                 *(uint *)(this_00->_padding_ +
                                                          (longlong)(int)uVar14 * 4));
            uVar14 = uVar14 + 1;
            (pFVar12->TangentMode).Value = (uchar)pFVar16[1];
            (pFVar12->InterpMode).Value = (uchar)*pFVar16;
            pFVar12->ArriveTangent =
                 (float)(double)CONCAT44(uVar20,uVar19) * *(float *)(pFVar16 + 0xc);
            pFVar1 = pFVar16 + 0x14;
            pFVar16 = pFVar16 + 0x1c;
            pFVar12->LeaveTangent = (float)(double)CONCAT44(uVar20,uVar19) * *(float *)pFVar1;
            uVar10 = (ulonglong)uVar2;
          }
          return true;
        }
        if (param_2 == 0) {
          FRichCurve::operator=(param_3,this_00);
          return true;
        }
        if (param_2 != 1) {
          return false;
        }
        FRichCurve::operator=(param_3,this_00 + 1);
        return true;
      }
    }
  }
  return false;
}

// CanEditCurveKeyAttributes @ 14d6b9200

bool __thiscall FFocalLengthTable::CanEditCurveKeyAttributes(FFocalLengthTable *this,int param_1)

{
  return true;
}

// CanEditCurveKeyPositions @ 14d6b9280

bool __thiscall FFocalLengthTable::CanEditCurveKeyPositions(FFocalLengthTable *this,int param_1)

{
  return true;
}

// ChangeFocusPoint @ 14d6b9710

void __thiscall
FFocalLengthTable::ChangeFocusPoint
          (FFocalLengthTable *this,float param_1,float param_2,float param_3)

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
  LensDataTableUtils::ChangeFocusPoint<FFocalLengthFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3);
  this_00 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
  iVar1 = (this->FocusCurves).ArrayNum;
  this_01 = this_00 + 1;
  pFVar3 = (FRichCurve *)((longlong)this_00 + (longlong)iVar1 * 0x108);
  while( true ) {
    if ((this->FocusCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFocalLengthFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
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

// ChangeZoomPoint @ 14d6ba050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FFocalLengthTable::ChangeZoomPoint
          (FFocalLengthTable *this,float param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  FFocalLengthFocusPoint *this_00;
  FFocalLengthFocusPoint *pFVar2;
  TVector2<double>_u_0 local_58 [5];
  
  LensDataTableUtils::ChangeZoomPoint<FFocalLengthFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3,param_4);
  this_00 = (FFocalLengthFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  local_58[0]._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_58[0]._s_0.Y = _UNK_152bc18c8;
  pFVar2 = this_00 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return;
    }
    if ((float)((uint)(this_00->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        param_4) break;
    this_00 = this_00 + 1;
  }
  bVar1 = FFocalLengthFocusPoint::GetPoint
                    (this_00,param_3,(FFocalLengthInfo *)&local_58[0]._s_0,param_4);
  if (!bVar1) {
    return;
  }
  LensDataTableUtils::ChangeZoomInFocusCurves<FFocalLengthFocusCurve,FFocalLengthInfo>
            (&this->FocusCurves,param_1,param_2,param_3,(FFocalLengthInfo *)&local_58[0]._s_0,
             param_4);
  return;
}

// DoesFocusPointExists @ 14d6c08d0

bool __thiscall
FFocalLengthTable::DoesFocusPointExists(FFocalLengthTable *this,float param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->FocusPoints).ArrayNum * 0x120;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if ((float)((uint)(*(float *)(pFVar2 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= param_2) break;
    pFVar2 = pFVar2 + 0x120;
  }
  return true;
}

// DoesZoomPointExists @ 14d6c0ab0

bool __thiscall
FFocalLengthTable::DoesZoomPointExists
          (FFocalLengthTable *this,float param_1,float param_2,float param_3)

{
  bool bVar1;
  FFocalLengthFocusPoint *pFVar2;
  FFocalLengthFocusPoint *this_00;
  FFocalLengthInfo local_18;
  
  this_00 = (FFocalLengthFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar2 = this_00 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return false;
    }
    if ((float)((uint)(this_00->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        param_3) break;
    this_00 = this_00 + 1;
  }
  bVar1 = FFocalLengthFocusPoint::GetPoint(this_00,param_2,&local_18,param_3);
  if (!bVar1) {
    return false;
  }
  return true;
}

// ForEachPoint @ 14d6cb450

void __thiscall
FFocalLengthTable::ForEachPoint
          (FFocalLengthTable *this,TFunction<void___cdecl(FBaseFocusPoint_const_&)> *param_1)

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
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x120;
  while( true ) {
    if ((this->FocusPoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFocalLengthFocusPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
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
    pFVar6 = pFVar6 + 0x120;
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

// GetBaseFocusPoint @ 14d6d1e60

FBaseFocusPoint * __thiscall
FFocalLengthTable::GetBaseFocusPoint(FFocalLengthTable *this,int param_1)

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
           ((this->FocusPoints).AllocatorInstance.Data + (longlong)param_1 * 0x120);
  }
  return (FBaseFocusPoint *)0x0;
}

// GetCurveKeyPositionRange @ 14d6d3460

TRange<double> * __thiscall
FFocalLengthTable::GetCurveKeyPositionRange
          (FFocalLengthTable *this,TRange<double> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  TRange<double> *pTVar4;
  
  (__return_storage_ptr__->LowerBound).Type.Value = '\x01';
  (__return_storage_ptr__->LowerBound).Value = -1.7976931348623157e+308;
  (__return_storage_ptr__->UpperBound).Value = 1.7976931348623157e+308;
  (__return_storage_ptr__->UpperBound).Type.Value = '\0';
  if ((uint)param_1 < 2) {
    if (param_1 != -1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (pUVar3 != (UObject *)0x0) {
        if (1 < (uint)param_1) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                             ,0x4b0,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar4 = (TRange<double> *)(*pcVar1)();
            return pTVar4;
          }
        }
        TRange<double>::SetLowerBoundValue
                  (__return_storage_ptr__,
                   __real_3ff0000000000000 /
                   *(double *)(&pUVar3[2].field_0x8 + (longlong)param_1 * 8));
      }
      return __return_storage_ptr__;
    }
  }
  else if (param_1 != -1) {
    return __return_storage_ptr__;
  }
  TRange<double>::SetLowerBoundValue(__return_storage_ptr__,__real_3ff0000000000000);
  return __return_storage_ptr__;
}

// GetFocusCurve @ 14d6d3d30

FFocalLengthFocusCurve * __thiscall
FFocalLengthTable::GetFocusCurve(FFocalLengthTable *this,float param_1,float param_2)

{
  FFocalLengthFocusCurve *pFVar1;
  FFocalLengthFocusCurve *pFVar2;
  
  pFVar2 = (FFocalLengthFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusCurves).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FFocalLengthFocusCurve *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)
    break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusCurve @ 14d6d3d80

FFocalLengthFocusCurve * __thiscall
FFocalLengthTable::GetFocusCurve(FFocalLengthTable *this,float param_1,float param_2)

{
  FFocalLengthFocusCurve *pFVar1;
  FFocalLengthFocusCurve *pFVar2;
  
  pFVar2 = (FFocalLengthFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusCurves).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FFocalLengthFocusCurve *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)
    break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusCurves @ 14d6d4030

TArray<FFocalLengthFocusCurve,TSizedDefaultAllocator<32>_> * __thiscall
FFocalLengthTable::GetFocusCurves(FFocalLengthTable *this)

{
  return &this->FocusCurves;
}

// GetFocusCurves @ 14d6d4040

TArrayView<FFocalLengthFocusCurve_const_,int> * __thiscall
FFocalLengthTable::GetFocusCurves
          (FFocalLengthTable *this,
          TArrayView<FFocalLengthFocusCurve_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FFocalLengthFocusCurve_const_,int> *pTVar4;
  
  iVar1 = (this->FocusCurves).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FFocalLengthFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
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
    pTVar4 = (TArrayView<FFocalLengthFocusCurve_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetFocusPoint @ 14d6d43d0

FFocalLengthFocusPoint * __thiscall
FFocalLengthTable::GetFocusPoint(FFocalLengthTable *this,float param_1,float param_2)

{
  FFocalLengthFocusPoint *pFVar1;
  FFocalLengthFocusPoint *pFVar2;
  
  pFVar2 = (FFocalLengthFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FFocalLengthFocusPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2
       ) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusPoint @ 14d6d4430

FFocalLengthFocusPoint * __thiscall
FFocalLengthTable::GetFocusPoint(FFocalLengthTable *this,float param_1,float param_2)

{
  FFocalLengthFocusPoint *pFVar1;
  FFocalLengthFocusPoint *pFVar2;
  
  pFVar2 = (FFocalLengthFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FFocalLengthFocusPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2
       ) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusPointNum @ 14d6d46e0

int __thiscall FFocalLengthTable::GetFocusPointNum(FFocalLengthTable *this)

{
  return (this->FocusPoints).ArrayNum;
}

// GetFocusPoints @ 14d6d47a0

TArray<FFocalLengthFocusPoint,TSizedDefaultAllocator<32>_> * __thiscall
FFocalLengthTable::GetFocusPoints(FFocalLengthTable *this)

{
  return &this->FocusPoints;
}

// GetFocusPoints @ 14d6d47b0

TArrayView<FFocalLengthFocusPoint_const_,int> * __thiscall
FFocalLengthTable::GetFocusPoints
          (FFocalLengthTable *this,
          TArrayView<FFocalLengthFocusPoint_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FFocalLengthFocusPoint_const_,int> *pTVar4;
  
  iVar1 = (this->FocusPoints).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FFocalLengthFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
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
    pTVar4 = (TArrayView<FFocalLengthFocusPoint_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetLinkedCategories @ 14d6d54b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>_>
* __thiscall
FFocalLengthTable::GetLinkedCategories
          (FFocalLengthTable *this,
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
      local_76 = 4;
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
      atexit(`FFocalLengthTable::GetLinkedCategories'::__l2::
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

// GetParameterValueLabel @ 14d6d6df0

FText * __thiscall
FFocalLengthTable::GetParameterValueLabel
          (FFocalLengthTable *this,FText *__return_storage_ptr__,int param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  if ((uint)param_1 < 2) {
    if (param_1 != -1) {
      pwVar2 = L"(normalized)";
      pwVar1 = L"ParameterValueNormalizedLabel";
      goto LAB_14d6d6e3a;
    }
  }
  else if (param_1 != -1) {
    FText::FText(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pwVar2 = L"(mm)";
  pwVar1 = L"ParameterValueMMLabel";
LAB_14d6d6e3a:
  FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"FFocalLengthTable",pwVar1,pwVar2);
  return __return_storage_ptr__;
}

// GetParameterValueUnitLabel @ 14d6d6f40

FText * __thiscall
FFocalLengthTable::GetParameterValueUnitLabel
          (FFocalLengthTable *this,FText *__return_storage_ptr__,int param_1)

{
  if (param_1 == -1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"FFocalLengthTable",L"ParameterUnitLabel",L"mm");
    return __return_storage_ptr__;
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPoint @ 14d6d7390

bool __thiscall
FFocalLengthTable::GetPoint
          (FFocalLengthTable *this,float param_1,float param_2,FFocalLengthInfo *param_3,
          float param_4)

{
  bool bVar1;
  FFocalLengthFocusPoint *pFVar2;
  FFocalLengthFocusPoint *this_00;
  
  this_00 = (FFocalLengthFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar2 = this_00 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return false;
    }
    if ((float)((uint)(this_00->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        param_4) break;
    this_00 = this_00 + 1;
  }
  bVar1 = FFocalLengthFocusPoint::GetPoint(this_00,param_2,param_3,param_4);
  return bVar1;
}

// GetScriptStruct @ 14d6d8c60

UScriptStruct * __thiscall FFocalLengthTable::GetScriptStruct(FFocalLengthTable *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFocalLengthTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FFocalLengthTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFocalLengthTable,(UObject *)pUVar1,
                         L"FocalLengthTable");
  }
  return Z_Registration_Info_UScriptStruct_FFocalLengthTable.OuterSingleton;
}

// GetTotalPointNum @ 14d6dbff0

int __thiscall FFocalLengthTable::GetTotalPointNum(FFocalLengthTable *this)

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
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x120;
  while( true ) {
    if ((this->FocusPoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFocalLengthFocusPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iVar2 = (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3);
    iVar5 = iVar5 + iVar2;
    pFVar3 = pFVar3 + 0x120;
  }
  return iVar5;
}

// HasFocusPoint @ 14d6dd1c0

bool __thiscall
FFocalLengthTable::HasFocusPoint(FFocalLengthTable *this,float param_1,float param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d6dd1c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 8))();
  return (bool)uVar1;
}

// HasZoomPoint @ 14d6ddb90

bool __thiscall
FFocalLengthTable::HasZoomPoint(FFocalLengthTable *this,float param_1,float param_2,float param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d6ddb93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  return (bool)uVar1;
}

// MergeFocusPoint @ 14d6e41e0

void __thiscall
FFocalLengthTable::MergeFocusPoint
          (FFocalLengthTable *this,float param_1,float param_2,bool param_3,float param_4)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  undefined1 local_res8 [8];
  
  LensDataTableUtils::MergeFocusPoint<FFocalLengthFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3,param_4);
  iVar1 = (this->FocusCurves).ArrayNum;
  this_00 = (this->FocusCurves).AllocatorInstance.Data;
  pFVar2 = this_00 + (longlong)iVar1 * 0x108;
  while( true ) {
    if ((this->FocusCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFocalLengthFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
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

// RemoveFocusPoint @ 14d6e7ed0

void __thiscall FFocalLengthTable::RemoveFocusPoint(FFocalLengthTable *this,float param_1)

{
  LensDataTableUtils::RemoveFocusPoint<FFocalLengthFocusPoint>(&this->FocusPoints,param_1);
  LensDataTableUtils::RemoveFocusFromFocusCurves<FFocalLengthFocusCurve>(&this->FocusCurves,param_1)
  ;
  return;
}

// RemoveZoomPoint @ 14d6e8c50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FFocalLengthTable::RemoveZoomPoint(FFocalLengthTable *this,float param_1,float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  pFVar2 = (this->FocusPoints).AllocatorInstance.Data;
  iVar1 = (this->FocusPoints).ArrayNum;
  pFVar6 = pFVar2;
  do {
    if (pFVar6 == pFVar2 + (longlong)iVar1 * 0x120) {
LAB_14d6e8de6:
      LensDataTableUtils::RemoveZoomFromFocusCurves<FFocalLengthFocusCurve>
                (&this->FocusCurves,param_1,param_2,__real_38d1b717);
      return;
    }
    if ((float)((uint)(*(float *)(pFVar6 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_322bcc77) {
      lVar7 = ((longlong)pFVar6 - (longlong)pFVar2) / 0x12 +
              ((longlong)pFVar6 - (longlong)pFVar2 >> 0x3f);
      uVar8 = (int)(lVar7 >> 4) - (int)(lVar7 >> 0x3f);
      if (uVar8 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar8 < iVar1) {
          uVar5 = ~uVar8 >> 0x1f;
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
        FFocalLengthFocusPoint::RemovePoint
                  ((FFocalLengthFocusPoint *)
                   ((this->FocusPoints).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x120),
                   param_2);
        uVar5 = 0;
        if ((int)uVar8 < (this->FocusPoints).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
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
        if (*(int *)((this->FocusPoints).AllocatorInstance.Data +
                    (longlong)(int)uVar8 * 0x120 + 0x88) == 0) {
          TArray<FFocalLengthFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->FocusPoints,uVar8,Default);
        }
      }
      goto LAB_14d6e8de6;
    }
    pFVar6 = pFVar6 + 0x120;
  } while( true );
}

// SetParameterCurveKeysAtFocus @ 14d6ec210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FFocalLengthTable::SetParameterCurveKeysAtFocus
          (FFocalLengthTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  FKeyHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UObject *pUVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FKeyHandle *pFVar11;
  FRichCurve *this_00;
  float fVar12;
  float fVar13;
  FFocalLengthTable *local_a8;
  int local_a0;
  code *local_98;
  FFocalLengthTable **local_90;
  FRichCurveKey local_88 [2];
  
  fVar13 = __real_3f800000;
  if (((uint)param_2 < 2) || (param_2 == -1)) {
    pFVar10 = (this->FocusPoints).AllocatorInstance.Data;
    pFVar8 = pFVar10 + (longlong)(this->FocusPoints).ArrayNum * 0x120;
    for (; pFVar10 != pFVar8; pFVar10 = pFVar10 + 0x120) {
      if ((float)((uint)(*(float *)(pFVar10 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff
                 ) <= __real_38d1b717) {
        if (pFVar10 == (FScriptContainerElement *)0x0) {
          return;
        }
        if (param_2 == -1) {
          this_00 = (FRichCurve *)(pFVar10 + 0x10);
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          if (pUVar6 != (UObject *)0x0) {
            fVar13 = (float)(__real_3ff0000000000000 / *(double *)&pUVar6[2].field_0x8);
          }
          iVar7 = 0;
          goto LAB_14d6ec316;
        }
        iVar7 = param_2;
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            this_00 = (FRichCurve *)(pFVar10 + 0x10);
            goto LAB_14d6ec316;
          }
          if (param_2 == 1) {
            this_00 = (FRichCurve *)(pFVar10 + 0x90);
            goto LAB_14d6ec316;
          }
        }
        this_00 = (FRichCurve *)0x0;
LAB_14d6ec316:
        if (this_00 == (FRichCurve *)0x0) {
          return;
        }
        pFVar11 = param_4->DataPtr;
        pFVar1 = pFVar11 + param_4->ArrayNum;
        if (pFVar11 != pFVar1) {
          do {
            uVar4 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)param_3,(FKeyHandle)pFVar11->Index)
            ;
            if (uVar4 != 0xffffffff) {
              if ((((int)uVar4 < 0) || ((this_00->Keys).ArrayNum <= (int)uVar4)) ||
                 (*(int *)(pFVar10 + 0x118) <= (int)uVar4)) {
                bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_73317484039503473>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\FocalLengthTable.cpp"
                                   ,399,
                                   "ActiveCurve->Keys.IsValidIndex(KeyIndex) && FocusPoint->ZoomPoints.IsValidIndex(KeyIndex)"
                                  );
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              else {
                FRichCurve::GetKey(param_3,local_88,(FKeyHandle)pFVar11->Index);
                uVar5 = 0;
                if ((int)uVar4 < (this_00->Keys).ArrayNum) {
                  uVar5 = ~uVar4 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar8 = (this_00->Keys).AllocatorInstance.Data;
                lVar9 = (longlong)(int)uVar4 * 0x1c;
                *(float *)(pFVar8 + lVar9 + 8) = local_88[0].Value * fVar13;
                pFVar8[lVar9] = (FScriptContainerElement)local_88[0].InterpMode.Value;
                *(float *)(pFVar8 + lVar9 + 0xc) = local_88[0].ArriveTangent * fVar13;
                *(float *)(pFVar8 + lVar9 + 0x14) = local_88[0].LeaveTangent * fVar13;
                pFVar8[lVar9 + 1] = (FScriptContainerElement)local_88[0].TangentMode.Value;
                fVar12 = local_88[0].Value * fVar13;
                uVar5 = 0;
                if ((int)uVar4 < *(int *)(pFVar10 + 0x118)) {
                  uVar5 = ~uVar4 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar9 = *(longlong *)(pFVar10 + 0x110);
                if ((1 < (ulonglong)(longlong)iVar7) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValidIndex(Index)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                       ,0x4b0,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                *(double *)((longlong)(int)uVar4 * 0x20 + lVar9 + 8 + (longlong)iVar7 * 8) =
                     (double)fVar12;
              }
            }
            pFVar11 = pFVar11 + 1;
          } while (pFVar11 != pFVar1);
        }
        FRichCurve::AutoSetTangents(this_00,0.0);
        local_90 = &local_a8;
        local_98 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FFocalLengthTable::SetParameterCurveKeysAtFocus'::__l2::<lambda_1>,FRichCurve_*,float>
                   ::Call;
        local_a8 = this;
        local_a0 = param_2;
        FBaseLensTable::PropagateCurveValuesToCrossCurves
                  ((FBaseLensTable *)this,this_00,param_1,
                   (TFunctionRef<FRichCurve_*___cdecl(float)> *)&local_98);
        return;
      }
    }
  }
  return;
}

// SetParameterCurveKeysAtZoom @ 14d6ecc00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FFocalLengthTable::SetParameterCurveKeysAtZoom
          (FFocalLengthTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  FKeyHandle *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  UObject *pUVar11;
  int iVar12;
  FFocalLengthFocusPoint *pFVar13;
  FRichCurve *pFVar14;
  longlong lVar15;
  FFocalLengthFocusPoint *this_00;
  FKeyHandle *pFVar16;
  FRichCurve *this_01;
  float fVar17;
  float fVar18;
  TVector2<double>_u_0 local_c8;
  FRichCurveKey local_b8 [5];
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar18 = __real_3f800000;
  fVar4 = __real_38d1b717;
  if (((uint)param_2 < 2) || (param_2 == -1)) {
    this_01 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
    pFVar14 = (FRichCurve *)((longlong)this_01 + (longlong)(this->FocusCurves).ArrayNum * 0x108);
    for (; this_01 != pFVar14; this_01 = (FRichCurve *)&this_01[2]._padding_) {
      if ((float)((uint)(*(float *)&this_01[2]._padding_ - param_1) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) {
        if (param_2 == -1) {
          pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          if (pUVar11 != (UObject *)0x0) {
            fVar18 = (float)(__real_3ff0000000000000 / *(double *)&pUVar11[2].field_0x8);
          }
          iVar12 = 0;
          goto LAB_14d6eccf7;
        }
        iVar12 = param_2;
        if ((uint)param_2 < 2) {
          if (param_2 == 0) goto LAB_14d6eccf7;
          if (param_2 == 1) {
            this_01 = this_01 + 1;
            goto LAB_14d6eccf7;
          }
        }
        this_01 = (FRichCurve *)0x0;
LAB_14d6eccf7:
        dVar7 = _UNK_152bc18c8;
        dVar6 = ___xmm_3ffc71c71c71c71c3ff0000000000000;
        if (this_01 == (FRichCurve *)0x0) {
          return;
        }
        pFVar16 = param_4->DataPtr;
        pFVar1 = pFVar16 + param_4->ArrayNum;
        if (pFVar16 != pFVar1) {
          do {
            uVar9 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)param_3,(FKeyHandle)pFVar16->Index)
            ;
            if (uVar9 != 0xffffffff) {
              if (((int)uVar9 < 0) || ((this_01->Keys).ArrayNum <= (int)uVar9)) {
                bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_73317484039503402>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\FocalLengthTable.cpp"
                                   ,0x1d6,"ActiveCurve->Keys.IsValidIndex(KeyIndex)");
                if (bVar8) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else {
                FRichCurve::GetKey(param_3,local_b8,(FKeyHandle)pFVar16->Index);
                uVar10 = 0;
                if ((int)uVar9 < (this_01->Keys).ArrayNum) {
                  uVar10 = ~uVar9 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar2 = (this_01->Keys).AllocatorInstance.Data;
                lVar15 = (longlong)(int)uVar9 * 0x1c;
                *(float *)(pFVar2 + lVar15 + 8) = local_b8[0].Value * fVar18;
                pFVar2[lVar15] = (FScriptContainerElement)local_b8[0].InterpMode.Value;
                *(float *)(pFVar2 + lVar15 + 0xc) = local_b8[0].ArriveTangent * fVar18;
                *(float *)(pFVar2 + lVar15 + 0x14) = local_b8[0].LeaveTangent * fVar18;
                pFVar2[lVar15 + 1] = (FScriptContainerElement)local_b8[0].TangentMode.Value;
                this_00 = (FFocalLengthFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
                pFVar13 = this_00 + (this->FocusPoints).ArrayNum;
                for (; this_00 != pFVar13; this_00 = this_00 + 1) {
                  if ((float)((uint)(this_00->Focus - local_b8[0].Time) & uVar5) <= fVar4) {
                    local_c8._s_0.X = dVar6;
                    local_c8._s_0.Y = dVar7;
                    bVar8 = FFocalLengthFocusPoint::GetPoint
                                      (this_00,param_1,(FFocalLengthInfo *)&local_c8._s_0,fVar4);
                    if (bVar8) {
                      fVar17 = FRichCurve::GetKeyValue(param_3,(FKeyHandle)pFVar16->Index);
                      if ((1 < (ulonglong)(longlong)iVar12) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValidIndex(Index)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                             ,0x4b0,L""), bVar8)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      *(double *)((longlong)&local_c8 + (longlong)iVar12 * 8) =
                           (double)(fVar17 * fVar18);
                      FFocalLengthFocusPoint::SetPoint
                                (this_00,param_1,(FFocalLengthInfo *)&local_c8._s_0,fVar4);
                      if (param_2 == 1) {
                        FRichCurve::AutoSetTangents(&this_00->Fy,0.0);
                      }
                      else {
                        FRichCurve::AutoSetTangents(&this_00->Fx,0.0);
                      }
                    }
                    break;
                  }
                }
              }
            }
            pFVar16 = pFVar16 + 1;
          } while (pFVar16 != pFVar1);
        }
        FRichCurve::AutoSetTangents(this_01,0.0);
        return;
      }
    }
  }
  return;
}

// SetPoint @ 14d6eda50

bool __thiscall
FFocalLengthTable::SetPoint
          (FFocalLengthTable *this,float param_1,float param_2,FFocalLengthInfo *param_3,
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
  FFocalLengthFocusPoint *this_00;
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
      this_00 = (FFocalLengthFocusPoint *)((this->FocusPoints).AllocatorInstance.Data + lVar10);
      if ((float)((uint)(this_00->Focus - param_1) & uVar3) <= param_4) {
        bVar4 = FFocalLengthFocusPoint::SetPoint(this_00,param_2,param_3,__real_38d1b717);
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
              dVar1 = (param_3->FxFy).field0_0x0._s_0.X;
              FRealCurve::FindKey((FRealCurve *)this_01,fVar11,param_1);
              FVar7 = FKeyHandle::Invalid();
              if (local_res8.Index != *(uint *)CONCAT44(extraout_var,FVar7.Index)) {
                FRichCurve::SetKeyValue(this_01,local_res8,(float)dVar1,true);
              }
              dVar1 = (param_3->FxFy).field0_0x0._s_0.Y;
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
      lVar10 = lVar10 + 0x120;
    } while ((int)uVar9 < (this->FocusPoints).ArrayNum);
  }
  return false;
}

