// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 13

// StaticStruct @ 14d67aad0

UScriptStruct * __cdecl FSTMapFocusPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSTMapFocusPoint.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FSTMapFocusPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSTMapFocusPoint,(UObject *)pUVar1,
                         L"STMapFocusPoint");
  }
  return Z_Registration_Info_UScriptStruct_FSTMapFocusPoint.OuterSingleton;
}

// GetFocus @ 14d67ab10

float __thiscall FSTMapFocusPoint::GetFocus(FSTMapFocusPoint *this)

{
  return this->Focus;
}

// GetNumPoints @ 14d67ab20

int __thiscall FSTMapFocusPoint::GetNumPoints(FSTMapFocusPoint *this)

{
  return (this->MapBlendingCurve).Keys.ArrayNum;
}

// GetZoom @ 14d67ab30

float __thiscall FSTMapFocusPoint::GetZoom(FSTMapFocusPoint *this,int param_1)

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

// ~FSTMapFocusPoint @ 14d6ac950

void __thiscall FSTMapFocusPoint::~FSTMapFocusPoint(FSTMapFocusPoint *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FSTMapZoomPoint,int>
            ((FSTMapZoomPoint *)(this->ZoomPoints).AllocatorInstance.Data,
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

// AddPoint @ 14d6b5fa0

bool __thiscall
FSTMapFocusPoint::AddPoint
          (FSTMapFocusPoint *this,float param_1,FSTMapInfo *param_2,float param_3,bool param_4)

{
  UTexture *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FKeyHandle FVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_var;
  longlong lVar9;
  undefined1 in_R9B;
  float fVar10;
  FKeyHandle local_res8;
  uint in_stack_ffffffffffffff48;
  FKeyHandle local_a8;
  FKeyHandle local_a0 [2];
  FScriptContainerElement *local_98;
  FSTMapZoomPoint local_88;
  
  fVar10 = param_1;
  FRealCurve::FindKey((FRealCurve *)&this->MapBlendingCurve,param_1,param_1);
  FVar5 = FKeyHandle::Invalid();
  if (local_a8.Index == *(uint *)CONCAT44(extraout_var,FVar5.Index)) {
    FKeyHandle::FKeyHandle(local_a0);
    FRichCurve::AddKey(&this->MapBlendingCurve,fVar10,param_1,(bool)in_R9B,
                       (FKeyHandle)(in_stack_ffffffffffffff48 & 0xffffff00));
    FRichCurve::SetKeyTangentMode(&this->MapBlendingCurve,local_res8,RCTM_Auto,true);
    FRichCurve::SetKeyInterpMode(&this->MapBlendingCurve,local_res8,RCIM_Cubic);
    iVar8 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)&this->MapBlendingCurve,local_res8);
    local_88.DerivedDistortionData.UndistortionDisplacementMap.field0_0x0.DebugPtr =
         (TObjectPtr<UTextureRenderTarget2D>_u_0)0x0;
    local_88.DerivedDistortionData.DistortionDisplacementMap.field0_0x0.DebugPtr =
         (TObjectPtr<UTextureRenderTarget2D>_u_0)0x0;
    local_88.STMapInfo.MapFormat.PixelOrigin = TopLeft;
    local_88.STMapInfo.MapFormat.UndistortionChannels = RG;
    local_88.STMapInfo.MapFormat.DistortionChannels = BA;
    local_88.DerivedDistortionData.DistortionData.DistortedUVs.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_88.DerivedDistortionData.DistortionData.DistortedUVs.ArrayNum = 0;
    local_88.DerivedDistortionData.DistortionData.DistortedUVs.ArrayMax = 0;
    local_88.DerivedDistortionData.DistortionData.OverscanFactor = 1.0;
    local_88.DerivedDistortionData.bIsDirty = true;
    local_88.Zoom = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_2->DistortionMap).field0_0x0.DebugPtr, pUVar1 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_88.STMapInfo.DistortionMap.field0_0x0.ObjectPtr.field0_0x0 =
         (param_2->DistortionMap).field0_0x0;
    local_88.STMapInfo.MapFormat.PixelOrigin = (param_2->MapFormat).PixelOrigin;
    local_88.STMapInfo.MapFormat.UndistortionChannels = (param_2->MapFormat).UndistortionChannels;
    local_88.STMapInfo.MapFormat.DistortionChannels = (param_2->MapFormat).DistortionChannels;
    local_88.bIsCalibrationPoint = param_4;
    TArray<FSTMapZoomPoint,TSizedDefaultAllocator<32>_>::Insert(&this->ZoomPoints,&local_88,iVar8);
    if (local_88.DerivedDistortionData.DistortionData.DistortedUVs.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.DerivedDistortionData.DistortionData.DistortedUVs.AllocatorInstance.
                    Data);
    }
  }
  else {
    uVar6 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)&this->MapBlendingCurve,local_a8);
    lVar9 = (longlong)(int)uVar6;
    if (((int)uVar6 < 0) || ((this->ZoomPoints).ArrayNum <= (int)uVar6)) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7895807133243932720>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\STMapTable.cpp"
                         ,0x30,"ZoomPoints.IsValidIndex(PointIndex)");
      if (!bVar3) {
        return false;
      }
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar7 = 0;
    if ((int)uVar6 < (this->ZoomPoints).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_98 = (this->ZoomPoints).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_2->DistortionMap).field0_0x0.DebugPtr, pUVar1 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(TObjectPtr<UTexture>_u_0 *)(local_98 + lVar9 * 0x50 + 8) = (param_2->DistortionMap).field0_0x0
    ;
    *(undefined2 *)(local_98 + lVar9 * 0x50 + 0x10) = *(undefined2 *)&param_2->MapFormat;
    local_98[lVar9 * 0x50 + 0x12] = (FScriptContainerElement)(param_2->MapFormat).DistortionChannels
    ;
    uVar7 = 0;
    if ((int)uVar6 < (this->ZoomPoints).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    (this->ZoomPoints).AllocatorInstance.Data[lVar9 * 0x50 + 0x40] = (FScriptContainerElement)0x1;
  }
  return true;
}

// GetPoint @ 14d6d7830

bool __thiscall
FSTMapFocusPoint::GetPoint(FSTMapFocusPoint *this,float param_1,FSTMapInfo *param_2,float param_3)

{
  undefined2 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->ZoomPoints).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)(this->ZoomPoints).ArrayNum * 0x50;
  while( true ) {
    if (pFVar3 == pFVar2) {
      return false;
    }
    if ((float)((uint)(*(float *)pFVar3 - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77) break;
    pFVar3 = pFVar3 + 0x50;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending) && (*(UObject **)(pFVar3 + 8) != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable(*(UObject **)(pFVar3 + 8));
  }
  (param_2->DistortionMap).field0_0x0 = *(TObjectPtr<UTexture>_u_0 *)(pFVar3 + 8);
  uVar1 = *(undefined2 *)(pFVar3 + 0x10);
  (param_2->MapFormat).PixelOrigin = (char)uVar1;
  (param_2->MapFormat).UndistortionChannels = (char)((ushort)uVar1 >> 8);
  (param_2->MapFormat).DistortionChannels = (ECalibratedMapChannels)pFVar3[0x12];
  return true;
}

// GetZoomPoint @ 14d6dd040

FSTMapZoomPoint * __thiscall FSTMapFocusPoint::GetZoomPoint(FSTMapFocusPoint *this,float param_1)

{
  FSTMapZoomPoint *pFVar1;
  FSTMapZoomPoint *pFVar2;
  
  pFVar2 = (FSTMapZoomPoint *)(this->ZoomPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->ZoomPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FSTMapZoomPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetZoomPoint @ 14d6dd0b0

FSTMapZoomPoint * __thiscall FSTMapFocusPoint::GetZoomPoint(FSTMapFocusPoint *this,float param_1)

{
  FSTMapZoomPoint *pFVar1;
  FSTMapZoomPoint *pFVar2;
  
  pFVar2 = (FSTMapZoomPoint *)(this->ZoomPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->ZoomPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FSTMapZoomPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// IsCalibrationPoint @ 14d6e1710

bool __thiscall
FSTMapFocusPoint::IsCalibrationPoint(FSTMapFocusPoint *this,float param_1,float param_2)

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
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var,FVar4.Index)) {
    uVar5 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)&this->MapBlendingCurve,local_res8);
    if ((-1 < (int)uVar5) && ((int)uVar5 < (this->ZoomPoints).ArrayNum)) {
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
      return (bool)(this->ZoomPoints).AllocatorInstance.Data[(longlong)(int)uVar5 * 0x50 + 0x48];
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7895807133243932773>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\STMapTable.cpp"
                       ,0x65,"ZoomPoints.IsValidIndex(PointIndex)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// IsEmpty @ 14d6e19c0

bool __thiscall FSTMapFocusPoint::IsEmpty(FSTMapFocusPoint *this)

{
  return (this->MapBlendingCurve).Keys.ArrayNum == 0;
}

// RemovePoint @ 14d6e88e0

void __thiscall FSTMapFocusPoint::RemovePoint(FSTMapFocusPoint *this,float param_1)

{
  int *piVar1;
  TArray<FSTMapZoomPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FKeyHandle FVar7;
  undefined4 extraout_var;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  FKeyHandle local_res10;
  
  pTVar2 = &this->ZoomPoints;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  iVar8 = (this->ZoomPoints).ArrayNum;
  pFVar9 = pFVar10;
  fVar11 = param_1;
  do {
    if (pFVar9 == pFVar10 + (longlong)iVar8 * 0x50) {
LAB_14d6e8a26:
      FRealCurve::FindKey((FRealCurve *)&this->MapBlendingCurve,fVar11,param_1);
      FVar7 = FKeyHandle::Invalid();
      if (local_res10.Index != *(uint *)CONCAT44(extraout_var,FVar7.Index)) {
        FRichCurve::DeleteKey(&this->MapBlendingCurve,local_res10);
      }
      return;
    }
    fVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if ((float)((uint)(*(float *)pFVar9 - param_1) & (uint)__xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_322bcc77) {
      uVar4 = (uint)(((longlong)pFVar9 - (longlong)pFVar10) / 0x50);
      if (uVar4 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar4 < iVar8) {
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
        pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x50;
        if (*(void **)(pFVar10 + 0x18) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar10 + 0x18));
        }
        iVar8 = (this->ZoomPoints).ArrayNum + ~uVar4;
        if (iVar8 != 0) {
          memmove(pFVar10,pFVar10 + 0x50,(longlong)iVar8 * 0x50);
        }
        piVar1 = &(this->ZoomPoints).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&pTVar2->AllocatorInstance,(this->ZoomPoints).ArrayNum,
                   &(this->ZoomPoints).ArrayMax);
      }
      goto LAB_14d6e8a26;
    }
    pFVar9 = pFVar9 + 0x50;
  } while( true );
}

// SetPoint @ 14d6ee560

bool __thiscall
FSTMapFocusPoint::SetPoint(FSTMapFocusPoint *this,float param_1,FSTMapInfo *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  UTexture *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FKeyHandle FVar6;
  uint uVar7;
  uint uVar8;
  undefined4 extraout_var;
  longlong lVar9;
  FKeyHandle local_res8;
  
  FRealCurve::FindKey((FRealCurve *)&this->MapBlendingCurve,param_1,param_1);
  FVar6 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var,FVar6.Index)) {
    uVar7 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)&this->MapBlendingCurve,local_res8);
    lVar9 = (longlong)(int)uVar7;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (this->ZoomPoints).ArrayNum)) {
      uVar8 = 0;
      if ((int)uVar7 < (this->ZoomPoints).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
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
      pFVar1 = (this->ZoomPoints).AllocatorInstance.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (param_2->DistortionMap).field0_0x0.DebugPtr, pUVar2 != (UTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<UTexture>_u_0 *)(pFVar1 + lVar9 * 0x50 + 8) = (param_2->DistortionMap).field0_0x0
      ;
      *(undefined2 *)(pFVar1 + lVar9 * 0x50 + 0x10) = *(undefined2 *)&param_2->MapFormat;
      pFVar1[lVar9 * 0x50 + 0x12] = (FScriptContainerElement)(param_2->MapFormat).DistortionChannels
      ;
      uVar8 = 0;
      if ((int)uVar7 < (this->ZoomPoints).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
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
      (this->ZoomPoints).AllocatorInstance.Data[lVar9 * 0x50 + 0x40] = (FScriptContainerElement)0x1;
      return true;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7895807133243932755>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\STMapTable.cpp"
                       ,0x53,"ZoomPoints.IsValidIndex(PointIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

