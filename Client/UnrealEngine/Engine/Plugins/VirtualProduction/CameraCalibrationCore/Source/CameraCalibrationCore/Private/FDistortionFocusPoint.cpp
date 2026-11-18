// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 12

// StaticStruct @ 14d67c670

UScriptStruct * __cdecl FDistortionFocusPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDistortionFocusPoint.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FDistortionFocusPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDistortionFocusPoint,(UObject *)pUVar1,
                         L"DistortionFocusPoint");
  }
  return Z_Registration_Info_UScriptStruct_FDistortionFocusPoint.OuterSingleton;
}

// GetFocus @ 14d67c6b0

float __thiscall FDistortionFocusPoint::GetFocus(FDistortionFocusPoint *this)

{
  return this->Focus;
}

// GetNumPoints @ 14d67c6c0

int __thiscall FDistortionFocusPoint::GetNumPoints(FDistortionFocusPoint *this)

{
  return (this->MapBlendingCurve).Keys.ArrayNum;
}

// GetZoom @ 14d67c6d0

float __thiscall FDistortionFocusPoint::GetZoom(FDistortionFocusPoint *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (param_1 < (this->MapBlendingCurve).Keys.ArrayNum) {
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
  return *(float *)((this->MapBlendingCurve).Keys.AllocatorInstance.Data +
                   (longlong)param_1 * 0x1c + 4);
}

// ~FDistortionFocusPoint @ 14d6ac020

void __thiscall FDistortionFocusPoint::~FDistortionFocusPoint(FDistortionFocusPoint *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FDistortionZoomPoint,int>
            ((FDistortionZoomPoint *)(this->ZoomPoints).AllocatorInstance.Data,
             (this->ZoomPoints).ArrayNum);
  pFVar1 = (this->ZoomPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MapBlendingCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->MapBlendingCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->MapBlendingCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->MapBlendingCurve)._padding_ = 0;
  pvVar2 = (void *)(this->MapBlendingCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MapBlendingCurve)._padding_);
  return;
}

// AddPoint @ 14d6b4e70

/* WARNING: Removing unreachable block (ram,0x00014d6b5044) */

bool __thiscall
FDistortionFocusPoint::AddPoint
          (FDistortionFocusPoint *this,float param_1,FDistortionInfo *param_2,float param_3,
          bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  TArray<FDistortionZoomPoint,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 in_R9B;
  float fVar10;
  uint in_stack_ffffffffffffff98;
  FKeyHandle local_38;
  FKeyHandle local_34;
  float local_30 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_28 [2];
  
  fVar10 = param_1;
  bVar4 = SetPoint(this,param_1,param_2,param_3);
  if (!bVar4) {
    FKeyHandle::FKeyHandle(&local_34);
    FRichCurve::AddKey(&this->MapBlendingCurve,fVar10,param_1,(bool)in_R9B,
                       (FKeyHandle)(in_stack_ffffffffffffff98 & 0xffffff00));
    FRichCurve::SetKeyTangentMode(&this->MapBlendingCurve,local_38,RCTM_Auto,true);
    FRichCurve::SetKeyInterpMode(&this->MapBlendingCurve,local_38,RCIM_Cubic);
    iVar6 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)&this->MapBlendingCurve,local_38);
    local_28[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28[0].ArrayNum = 0;
    local_28[0].ArrayMax = 0;
    lVar8 = (longlong)iVar6;
    local_30[0] = param_1;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=(local_28,&param_2->Parameters);
    pTVar9 = &this->ZoomPoints;
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_30) &&
        ((FScriptContainerElement *)local_30 < pFVar2 + (longlong)(this->ZoomPoints).ArrayMax * 0x18
        )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar7 = (this->ZoomPoints).ArrayNum;
    piVar1 = &(this->ZoomPoints).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar9->AllocatorInstance,piVar1);
    }
    (this->ZoomPoints).ArrayNum = iVar7 + 1;
    pFVar2 = (pTVar9->AllocatorInstance).Data + lVar8 * 0x18;
    memmove(pFVar2 + 0x18,pFVar2,(longlong)(iVar7 - iVar6) * 0x18);
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
    *(float *)(pFVar2 + lVar8 * 0x18) = local_30[0];
    *(FScriptContainerElement **)(pFVar2 + lVar8 * 0x18 + 8) = local_28[0].AllocatorInstance.Data;
    *(int *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_28[0].ArrayNum;
    *(int *)(pFVar2 + lVar8 * 0x18 + 0x14) = local_28[0].ArrayMax;
  }
  return true;
}

// GetCurveForParameter @ 14d6d3150

FRichCurve * __thiscall
FDistortionFocusPoint::GetCurveForParameter(FDistortionFocusPoint *this,int param_1)

{
  FRichCurve *pFVar1;
  
  pFVar1 = &this->MapBlendingCurve;
  if (param_1 != -1) {
    pFVar1 = (FRichCurve *)0x0;
  }
  return pFVar1;
}

// GetPoint @ 14d6d7010

bool __thiscall
FDistortionFocusPoint::GetPoint
          (FDistortionFocusPoint *this,float param_1,FDistortionInfo *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FKeyHandle FVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_var;
  FKeyHandle local_res8;
  
  FRealCurve::FindKey((FRealCurve *)&this->MapBlendingCurve,param_1,param_1);
  FVar4 = FKeyHandle::Invalid();
  if (local_res8.Index == *(uint *)CONCAT44(extraout_var,FVar4.Index)) {
    return false;
  }
  uVar5 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)&this->MapBlendingCurve,local_res8);
  if (((int)uVar5 < 0) || ((this->ZoomPoints).ArrayNum <= (int)uVar5)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ZoomPoints.IsValidIndex(PointIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\DistortionParametersTable.cpp"
                       ,0x1a,L"");
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
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->Parameters,
             (TArray<float,TSizedDefaultAllocator<32>_> *)
             ((this->ZoomPoints).AllocatorInstance.Data + ((longlong)(int)uVar5 * 3 + 1) * 8));
  return true;
}

// IsEmpty @ 14d6e18e0

bool __thiscall FDistortionFocusPoint::IsEmpty(FDistortionFocusPoint *this)

{
  return (this->MapBlendingCurve).Keys.ArrayNum == 0;
}

// RemovePoint @ 14d6e81c0

void __thiscall FDistortionFocusPoint::RemovePoint(FDistortionFocusPoint *this,float param_1)

{
  int *piVar1;
  TArray<FDistortionZoomPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FKeyHandle FVar8;
  undefined4 extraout_var;
  int iVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  FKeyHandle local_res10;
  
  pTVar2 = &this->ZoomPoints;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  iVar9 = (this->ZoomPoints).ArrayNum;
  pFVar10 = pFVar3;
  fVar13 = param_1;
  do {
    if (pFVar10 == pFVar3 + (longlong)iVar9 * 0x18) {
LAB_14d6e8311:
      FRealCurve::FindKey((FRealCurve *)&this->MapBlendingCurve,fVar13,param_1);
      FVar8 = FKeyHandle::Invalid();
      if (local_res10.Index != *(uint *)CONCAT44(extraout_var,FVar8.Index)) {
        FRichCurve::DeleteKey(&this->MapBlendingCurve,local_res10);
      }
      return;
    }
    fVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if ((float)((uint)(*(float *)pFVar10 - param_1) & (uint)__xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_322bcc77) {
      lVar11 = ((longlong)pFVar10 - (longlong)pFVar3) / 6 +
               ((longlong)pFVar10 - (longlong)pFVar3 >> 0x3f);
      uVar12 = (int)(lVar11 >> 2) - (int)(lVar11 >> 0x3f);
      if (uVar12 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar12 < iVar9) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        pFVar3 = pFVar10 + (longlong)(int)uVar12 * 0x18;
        pvVar4 = *(void **)(pFVar10 + (longlong)(int)uVar12 * 0x18 + 8);
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        iVar9 = (this->ZoomPoints).ArrayNum + ~uVar12;
        if (iVar9 != 0) {
          memmove(pFVar3,pFVar3 + 0x18,(longlong)iVar9 * 0x18);
        }
        piVar1 = &(this->ZoomPoints).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&pTVar2->AllocatorInstance,(this->ZoomPoints).ArrayNum,
                   &(this->ZoomPoints).ArrayMax);
      }
      goto LAB_14d6e8311;
    }
    pFVar10 = pFVar10 + 0x18;
  } while( true );
}

// SetParameterValue @ 14d6ed300

void __thiscall
FDistortionFocusPoint::SetParameterValue
          (FDistortionFocusPoint *this,int param_1,float param_2,int param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  if (-1 < param_1) {
    lVar5 = (longlong)param_1;
    if (param_1 < (this->ZoomPoints).ArrayNum) {
      uVar4 = 0;
      if (param_1 < (this->ZoomPoints).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((float)((uint)(*(float *)((this->ZoomPoints).AllocatorInstance.Data + lVar5 * 0x18) -
                        param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
        uVar4 = 0;
        if (param_1 < (this->ZoomPoints).ArrayNum) {
          uVar4 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->ZoomPoints).AllocatorInstance.Data;
        uVar4 = 0;
        if (param_3 < *(int *)(pFVar1 + lVar5 * 0x18 + 0x10)) {
          uVar4 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(float *)(*(longlong *)(pFVar1 + lVar5 * 0x18 + 8) + (longlong)param_3 * 4) = param_4;
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5901926900321747055>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\DistortionParametersTable.cpp"
                           ,0x6f,"FMath::IsNearlyEqual(ZoomPoints[InZoomIndex].Zoom, InZoomValue)");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  return;
}

// SetPoint @ 14d6ed4c0

bool __thiscall
FDistortionFocusPoint::SetPoint
          (FDistortionFocusPoint *this,float param_1,FDistortionInfo *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FKeyHandle FVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_var;
  FKeyHandle local_res8;
  
  FRealCurve::FindKey((FRealCurve *)&this->MapBlendingCurve,param_1,param_1);
  FVar4 = FKeyHandle::Invalid();
  if (local_res8.Index == *(uint *)CONCAT44(extraout_var,FVar4.Index)) {
    return false;
  }
  uVar5 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)&this->MapBlendingCurve,local_res8);
  if (((int)uVar5 < 0) || ((this->ZoomPoints).ArrayNum <= (int)uVar5)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ZoomPoints.IsValidIndex(PointIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\DistortionParametersTable.cpp"
                       ,0x41,L"");
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
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             ((this->ZoomPoints).AllocatorInstance.Data + ((longlong)(int)uVar5 * 3 + 1) * 8),
             &param_2->Parameters);
  return true;
}

