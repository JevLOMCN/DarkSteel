// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 52

// GetAxisToScale @ 147400260

EBlendSpaceAxis __thiscall UBlendSpace::GetAxisToScale(UBlendSpace *this)

{
  return (EBlendSpaceAxis)(this->AxisToScaleAnimation).Value;
}

// GetPlayLength @ 147403320

float __thiscall UBlendSpace::GetPlayLength(UBlendSpace *this)

{
  return __real_3f800000;
}

// StaticClass @ 147419b00

UClass * __cdecl UBlendSpace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UBlendSpace.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendSpace",
               &Z_Registration_Info_UClass_UBlendSpace.InnerSingleton,
               StaticRegisterNativesUBlendSpace,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendSpace>,InternalVTableHelperCtorCaller<UBlendSpace>,
               aFStackX_8,UAnimationAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendSpace.InnerSingleton;
}

// UBlendSpace @ 147532640

UBlendSpace * __thiscall UBlendSpace::UBlendSpace(UBlendSpace *this,FVTableHelper *param_1)

{
  UAnimationAsset::UAnimationAsset((UAnimationAsset *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&___7UBlendSpace__6B_;
  this->InterpolationParam[0].InterpolationType.Value = '\x05';
  this->InterpolationParam[0].InterpolationTime = 0.0;
  this->InterpolationParam[0].DampingRatio = 1.0;
  this->InterpolationParam[0].MaxSpeed = 0.0;
  this->InterpolationParam[1].InterpolationTime = 0.0;
  this->InterpolationParam[1].DampingRatio = 1.0;
  this->InterpolationParam[1].MaxSpeed = 0.0;
  this->InterpolationParam[1].InterpolationType.Value = '\x05';
  this->InterpolationParam[2].InterpolationTime = 0.0;
  this->InterpolationParam[2].DampingRatio = 1.0;
  this->InterpolationParam[2].MaxSpeed = 0.0;
  this->InterpolationParam[2].InterpolationType.Value = '\x05';
  this->TargetWeightInterpolationSpeedPerSec = 0.0;
  this->bTargetWeightInterpolationEaseInOut = true;
  this->bAllowMeshSpaceBlending = false;
  this->bLoop = true;
  this->bAllowMarkerBasedSync = true;
  this->bShouldMatchSyncPhases = false;
  this->bInterpolateUsingGrid = false;
  this->PreferredTriangulationDirection = Tangential;
  this->PerBoneBlendMode = ManualPerBoneOverride;
  (this->ManualPerBoneOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManualPerBoneOverrides).ArrayNum = 0;
  (this->ManualPerBoneOverrides).ArrayMax = 0;
  (this->PerBoneBlendProfile).BlendProfile.field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->PerBoneBlendProfile).TargetWeightInterpolationSpeedPerSec = 0.0;
  (this->PerBoneBlendValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerBoneBlendValues).ArrayNum = 0;
  (this->PerBoneBlendValues).ArrayMax = 0;
  this->SampleIndexWithMarkers = -1;
  (this->SampleData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleData).ArrayNum = 0;
  (this->SampleData).ArrayMax = 0;
  (this->GridSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GridSamples).ArrayNum = 0;
  (this->GridSamples).ArrayMax = 0;
  (this->BlendSpaceData).Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendSpaceData).Segments.ArrayNum = 0;
  (this->BlendSpaceData).Segments.ArrayMax = 0;
  (this->BlendSpaceData).Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendSpaceData).Triangles.ArrayNum = 0;
  (this->BlendSpaceData).Triangles.ArrayMax = 0;
  ::FString::FString(&this->BlendParameters[0].DisplayName,L"None");
  this->BlendParameters[0].Min = 0.0;
  this->BlendParameters[0].Max = 100.0;
  this->BlendParameters[0].GridNum = 4;
  this->BlendParameters[0].bSnapToGrid = false;
  this->BlendParameters[0].bWrapInput = false;
  ::FString::FString(&this->BlendParameters[1].DisplayName,L"None");
  this->BlendParameters[1].Min = 0.0;
  this->BlendParameters[1].Max = 100.0;
  this->BlendParameters[1].GridNum = 4;
  this->BlendParameters[1].bSnapToGrid = false;
  this->BlendParameters[1].bWrapInput = false;
  ::FString::FString(&this->BlendParameters[2].DisplayName,L"None");
  this->BlendParameters[2].Min = 0.0;
  this->BlendParameters[2].Max = 100.0;
  this->BlendParameters[2].GridNum = 4;
  this->BlendParameters[2].bSnapToGrid = false;
  this->BlendParameters[2].bWrapInput = false;
  (this->DimensionIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DimensionIndices).ArrayNum = 0;
  (this->DimensionIndices).ArrayMax = 0;
  return this;
}

// UBlendSpace @ 147532800

UBlendSpace * __thiscall UBlendSpace::UBlendSpace(UBlendSpace *this,FObjectInitializer *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  UAnimationAsset::UAnimationAsset((UAnimationAsset *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&___7UBlendSpace__6B_;
  this->InterpolationParam[0].InterpolationType.Value = '\x05';
  this->InterpolationParam[0].InterpolationTime = 0.0;
  this->InterpolationParam[0].DampingRatio = 1.0;
  this->InterpolationParam[0].MaxSpeed = 0.0;
  this->InterpolationParam[1].InterpolationTime = 0.0;
  this->InterpolationParam[1].DampingRatio = 1.0;
  this->InterpolationParam[1].MaxSpeed = 0.0;
  this->InterpolationParam[1].InterpolationType.Value = '\x05';
  this->InterpolationParam[2].InterpolationTime = 0.0;
  this->InterpolationParam[2].DampingRatio = 1.0;
  this->InterpolationParam[2].MaxSpeed = 0.0;
  this->InterpolationParam[2].InterpolationType.Value = '\x05';
  (this->ManualPerBoneOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManualPerBoneOverrides).ArrayNum = 0;
  (this->ManualPerBoneOverrides).ArrayMax = 0;
  (this->PerBoneBlendProfile).BlendProfile.field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->PerBoneBlendProfile).TargetWeightInterpolationSpeedPerSec = 0.0;
  (this->PerBoneBlendValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerBoneBlendValues).ArrayNum = 0;
  (this->PerBoneBlendValues).ArrayMax = 0;
  this->SampleIndexWithMarkers = -1;
  (this->SampleData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleData).ArrayNum = 0;
  (this->SampleData).ArrayMax = 0;
  (this->GridSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GridSamples).ArrayNum = 0;
  (this->GridSamples).ArrayMax = 0;
  (this->BlendSpaceData).Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendSpaceData).Segments.ArrayNum = 0;
  (this->BlendSpaceData).Segments.ArrayMax = 0;
  (this->BlendSpaceData).Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendSpaceData).Triangles.ArrayNum = 0;
  (this->BlendSpaceData).Triangles.ArrayMax = 0;
  this->TargetWeightInterpolationSpeedPerSec = 0.0;
  this->bTargetWeightInterpolationEaseInOut = true;
  this->bAllowMeshSpaceBlending = false;
  this->bLoop = true;
  this->bAllowMarkerBasedSync = true;
  this->bShouldMatchSyncPhases = false;
  this->bInterpolateUsingGrid = false;
  this->PreferredTriangulationDirection = Tangential;
  this->PerBoneBlendMode = ManualPerBoneOverride;
  ::FString::FString(&this->BlendParameters[0].DisplayName,L"None");
  this->BlendParameters[0].Min = 0.0;
  this->BlendParameters[0].Max = 100.0;
  this->BlendParameters[0].GridNum = 4;
  this->BlendParameters[0].bSnapToGrid = false;
  this->BlendParameters[0].bWrapInput = false;
  ::FString::FString(&this->BlendParameters[1].DisplayName,L"None");
  this->BlendParameters[1].Min = 0.0;
  this->BlendParameters[1].Max = 100.0;
  this->BlendParameters[1].GridNum = 4;
  this->BlendParameters[1].bSnapToGrid = false;
  this->BlendParameters[1].bWrapInput = false;
  ::FString::FString(&this->BlendParameters[2].DisplayName,L"None");
  this->BlendParameters[2].Min = 0.0;
  this->BlendParameters[2].Max = 100.0;
  this->BlendParameters[2].GridNum = 4;
  this->BlendParameters[2].bSnapToGrid = false;
  this->BlendParameters[2].bWrapInput = false;
  pTVar2 = &this->DimensionIndices;
  (this->DimensionIndices).ArrayMax = 0;
  piVar1 = &(this->DimensionIndices).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DimensionIndices).ArrayNum = 0;
  this->SampleIndexWithMarkers = -1;
  (this->NotifyTriggerMode).Value = '\x01';
  if ((this->DimensionIndices).ArrayNum == 0) {
    (this->DimensionIndices).ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,2,*piVar1,&pTVar2->AllocatorInstance,2,piVar1);
    *(undefined8 *)(pTVar2->AllocatorInstance).Data = 0x100000000;
  }
  return this;
}

// ~UBlendSpace @ 147533c90

void __thiscall UBlendSpace::~UBlendSpace(UBlendSpace *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FBlendParameter *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&___7UBlendSpace__6B_;
  pFVar1 = (this->DimensionIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar3 = (FBlendParameter *)&this->AxisToScaleAnimation;
  lVar2 = 3;
  do {
    pFVar1 = pFVar3[-1].DisplayName.Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  pFVar1 = (this->BlendSpaceData).Triangles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlendSpaceData).Segments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GridSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SampleData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerBoneBlendValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ManualPerBoneOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAnimationAsset::~UAnimationAsset((UAnimationAsset *)this);
  return;
}

// ComputeAxisScaleFactor @ 14754ea50

float __thiscall
UBlendSpace::ComputeAxisScaleFactor
          (UBlendSpace *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  
  iVar5 = (**(code **)(this->_padding_ + 0x2e0))();
  if (iVar5 != 0) {
    dVar11 = (param_1->field0_0x0)._s_0.X;
    dVar1 = (param_2->field0_0x0)._s_0.X;
    dVar9 = dVar11 - dVar1;
    uVar6 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar7 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    fVar10 = __real_3f800000;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000) ||
        (dVar9 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y,
        uVar6 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar7 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
        (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) ||
       (dVar9 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z,
       uVar6 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar7 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
       (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) {
      if (iVar5 == 1) {
        if (dVar1 != 0.0) {
          fVar10 = (float)(dVar11 / dVar1);
        }
      }
      else if ((iVar5 == 2) && (dVar11 = (param_2->field0_0x0)._s_0.Y, dVar11 != 0.0)) {
        fVar10 = (float)((param_1->field0_0x0)._s_0.Y / dVar11);
      }
    }
    dVar9 = (param_2->field0_0x0)._s_0.X;
    dVar12 = (param_2->field0_0x0)._s_0.Y;
    bVar2 = this->BlendParameters[0].bWrapInput;
    dVar11 = (param_2->field0_0x0)._s_0.Z;
    if (bVar2 == false) {
      dVar8 = (double)this->BlendParameters[0].Max;
      dVar4 = (double)this->BlendParameters[0].Min;
      if (dVar9 <= dVar8) {
        dVar8 = dVar9;
      }
      dVar9 = dVar8;
      if (dVar8 <= dVar4) {
        dVar9 = dVar4;
      }
    }
    bVar3 = this->BlendParameters[1].bWrapInput;
    if (bVar3 == false) {
      dVar8 = (double)this->BlendParameters[1].Max;
      dVar4 = (double)this->BlendParameters[1].Min;
      if (dVar12 <= dVar8) {
        dVar8 = dVar12;
      }
      dVar12 = dVar8;
      if (dVar8 <= dVar4) {
        dVar12 = dVar4;
      }
    }
    if (this->BlendParameters[2].bWrapInput == false) {
      dVar8 = (double)this->BlendParameters[2].Max;
      dVar4 = (double)this->BlendParameters[2].Min;
      if (dVar11 <= dVar8) {
        dVar8 = dVar11;
      }
      dVar11 = dVar8;
      if (dVar8 <= dVar4) {
        dVar11 = dVar4;
      }
    }
    uVar6 = SUB84(dVar9 - dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar7 = (uint)((ulonglong)(dVar9 - dVar1) >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000) ||
        (dVar4 = dVar12 - (param_2->field0_0x0)._s_0.Y,
        uVar6 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar7 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
        (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) ||
       (dVar11 = dVar11 - (param_2->field0_0x0)._s_0.Z,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      if (iVar5 == 1) {
        if ((bVar2 == false) && (dVar9 != 0.0)) {
          fVar10 = (float)((dVar1 / dVar9) * (double)fVar10);
        }
      }
      else if (((iVar5 == 2) && (dVar12 != 0.0)) && (bVar3 == false)) {
        fVar10 = (float)(((param_2->field0_0x0)._s_0.Y / dVar12) * (double)fVar10);
      }
    }
    return fVar10;
  }
  return __real_3f800000;
}

// ContainsMatchingSamples @ 14754ec80

bool __thiscall
UBlendSpace::ContainsMatchingSamples(UBlendSpace *this,EAdditiveAnimationType param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SampleData).ArrayNum;
  pFVar6 = (this->SampleData).AllocatorInstance.Data;
  bVar3 = true;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x30;
  do {
    if ((this->SampleData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FBlendSample_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) {
      if ((bVar3) && (0 < (this->SampleData).ArrayNum)) {
        return true;
      }
      return false;
    }
    plVar2 = *(longlong **)pFVar6;
    if ((this->SampleData).ArrayNum < 2) {
      if (plVar2 != (longlong *)0x0) goto LAB_14754ecf0;
LAB_14754ed15:
      bVar4 = 0;
    }
    else {
      if (plVar2 != (longlong *)0x0) {
LAB_14754ecf0:
        if (((param_1 != AAT_None) &&
            (cVar5 = (**(code **)(*plVar2 + 0x2d0))(plVar2), cVar5 == '\0')) ||
           (*(byte *)(plVar2 + 0x29) != param_1)) goto LAB_14754ed15;
      }
      bVar4 = 1;
    }
    bVar3 = (bool)(bVar3 & bVar4);
    if (!bVar3) {
      return false;
    }
    pFVar6 = pFVar6 + 0x30;
  } while( true );
}

// ConvertBlendInputToGridSpace @ 14754eef0

TVector<double> * __thiscall
UBlendSpace::ConvertBlendInputToGridSpace
          (UBlendSpace *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  TVector<double>_u_0 local_28;
  
  GetClampedAndWrappedBlendInput(this,(TVector<double> *)&local_28._s_0,param_1);
  fVar1 = this->BlendParameters[0].Min;
  fVar2 = this->BlendParameters[1].Min;
  fVar3 = this->BlendParameters[2].Min;
  iVar5 = this->BlendParameters[1].GridNum;
  fVar4 = this->BlendParameters[1].Max;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (local_28._s_0.X - (double)fVar1) /
       (double)((this->BlendParameters[0].Max - fVar1) / (float)this->BlendParameters[0].GridNum);
  iVar6 = this->BlendParameters[2].GridNum;
  fVar1 = this->BlendParameters[2].Max;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (local_28._s_0.Y - (double)fVar2) / (double)((fVar4 - fVar2) / (float)iVar5);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (local_28._s_0.Z - (double)fVar3) / (double)((fVar1 - fVar3) / (float)iVar6);
  return __return_storage_ptr__;
}

// FilterInput @ 147553f00

TVector<double> * __thiscall
UBlendSpace::FilterInput
          (UBlendSpace *this,TVector<double> *__return_storage_ptr__,FBlendFilter *param_1,
          TVector<double> *param_2,float param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  int iVar8;
  uint uVar9;
  FFIRFilterTimeBased *this_00;
  float *pfVar10;
  longlong lVar11;
  float fVar12;
  
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  if (param_1 == (FBlendFilter *)0x0) {
    return __return_storage_ptr__;
  }
  iVar8 = (param_1->FilterPerAxis).ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    pfVar10 = &this->BlendParameters[0].Max;
    lVar11 = (longlong)__return_storage_ptr__ - (longlong)param_2;
    do {
      if (*(bool *)((longlong)pfVar10 + 9) != false) {
        uVar6 = 0;
        if ((int)uVar9 < iVar8) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TVector<double> *)(*pcVar3)();
          return pTVar7;
        }
        fVar12 = *pfVar10;
        pFVar2 = (param_1->FilterPerAxis).AllocatorInstance.Data;
        fVar1 = pfVar10[-1];
        if ((2 < uVar9) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7ab,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TVector<double> *)(*pcVar3)();
          return pTVar7;
        }
        FFIRFilterTimeBased::WrapToValue
                  ((FFIRFilterTimeBased *)(pFVar2 + (longlong)(int)uVar9 * 0x38),
                   (float)(param_2->field0_0x0)._s_0.X,fVar12 - fVar1);
      }
      uVar6 = 0;
      if ((int)uVar9 < (param_1->FilterPerAxis).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVector<double> *)(*pcVar3)();
        return pTVar7;
      }
      this_00 = (FFIRFilterTimeBased *)
                ((param_1->FilterPerAxis).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x38);
      if (uVar9 < 3) {
        fVar12 = FFIRFilterTimeBased::UpdateAndGetFilteredData
                           (this_00,(float)(param_2->field0_0x0)._s_0.X,param_3);
      }
      else {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7ab,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TVector<double> *)(*pcVar3)();
          return pTVar7;
        }
        fVar12 = FFIRFilterTimeBased::UpdateAndGetFilteredData
                           (this_00,(float)(param_2->field0_0x0)._s_0.X,param_3);
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TVector<double> *)(*pcVar3)();
          return pTVar7;
        }
      }
      *(double *)((longlong)param_2 + lVar11) = (double)fVar12;
      uVar9 = uVar9 + 1;
      iVar8 = (param_1->FilterPerAxis).ArrayNum;
      param_2 = (TVector<double> *)((longlong)&param_2->field0_0x0 + 8);
      pfVar10 = pfVar10 + 8;
    } while ((int)uVar9 < iVar8);
  }
  return __return_storage_ptr__;
}

// ForEachImmutableSample @ 147556110

void __thiscall
UBlendSpace::ForEachImmutableSample
          (UBlendSpace *this,TFunctionRef<void___cdecl(FBlendSample_const_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SampleData).ArrayNum;
  pFVar2 = (this->SampleData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->SampleData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FBlendSample_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// GetAnimationLengthFromSampleData @ 147557cf0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UBlendSpace::GetAnimationLengthFromSampleData
          (UBlendSpace *this,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FName local_res10;
  undefined1 local_res18 [8];
  FString local_98 [7];
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar14 = __real_3f800000;
  iVar12 = param_1->ArrayNum;
  uVar9 = 0;
  fVar18 = 0.0;
  if (iVar12 < 1) {
    fVar18 = 0.0;
  }
  else {
    lVar13 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < iVar12) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        fVar14 = (float)(*pcVar3)();
        return fVar14;
      }
      uVar6 = *(uint *)((param_1->AllocatorInstance).Data + lVar13);
      lVar11 = (longlong)(int)uVar6;
      if ((-1 < (int)uVar6) && ((int)uVar6 < (this->SampleData).ArrayNum)) {
        uVar7 = 0;
        if ((int)uVar6 < (this->SampleData).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar14 = (float)(*pcVar3)();
          return fVar14;
        }
        pFVar1 = (this->SampleData).AllocatorInstance.Data;
        if (*(longlong *)(pFVar1 + lVar11 * 0x30) != 0) {
          uVar6 = 0;
          if ((int)uVar9 < param_1->ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            fVar14 = (float)(*pcVar3)();
            return fVar14;
          }
          plVar2 = *(longlong **)(pFVar1 + lVar11 * 0x30);
          fVar16 = *(float *)((param_1->AllocatorInstance).Data + lVar13 + 0x20) *
                   *(float *)(plVar2 + 0x15);
          fVar17 = fVar14;
          if (fVar16 != 0.0) {
            fVar17 = (float)((uint)fVar16 & uVar4);
          }
          if (plVar2 == (longlong *)0x0) {
            fVar16 = 0.0;
          }
          else if (pFVar1[lVar11 * 0x30 + 0x24] == (FScriptContainerElement)0x0) {
            fVar16 = (float)(**(code **)(*plVar2 + 0x2c0))();
          }
          else {
            piVar8 = (int *)(**(code **)(*plVar2 + 0x318))(plVar2,local_res18);
            fVar16 = (float)piVar8[1] / (float)*piVar8;
          }
          uVar6 = 0;
          if ((int)uVar9 < param_1->ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            fVar14 = (float)(*pcVar3)();
            return fVar14;
          }
          fVar15 = *(float *)((param_1->AllocatorInstance).Data + lVar13 + 0x10);
          if (fVar14 <= fVar15) {
            fVar15 = fVar14;
          }
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          fVar18 = fVar18 + fVar15 * (fVar16 / fVar17);
          if (5 < (byte)LogAnimation._0_1_) {
            uVar6 = 0;
            if ((int)uVar9 < param_1->ArrayNum) {
              uVar6 = uVar10;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              fVar14 = (float)(*pcVar3)();
              return fVar14;
            }
            local_res10 = *(FName *)(*(longlong *)(pFVar1 + lVar11 * 0x30) + 0x18);
            ::FName::ToString(&local_res10,local_98);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
            }
          }
        }
      }
      iVar12 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar13 = lVar13 + 0x60;
    } while ((int)uVar9 < iVar12);
  }
  return fVar18;
}

// GetAnimationPose @ 147558ae0

void __thiscall
UBlendSpace::GetAnimationPose
          (UBlendSpace *this,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1,
          FAnimationPoseData *param_2)

{
  TArrayView<FPoseLink,int> local_18;
  
  local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
  local_18.DataPtr = (FPoseLink *)0x0;
  GetAnimationPose_Internal
            (this,param_1,&local_18,(FAnimInstanceProxy *)0x0,false,
             &DefaultBlendSpaceExtractionContext,param_2);
  return;
}

// GetAnimationPose @ 147558b30

void __thiscall
UBlendSpace::GetAnimationPose
          (UBlendSpace *this,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1,
          FCompactPose *param_2,FBlendedCurve *param_3)

{
  TArrayView<FPoseLink,int> local_78;
  FAnimationPoseData local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  undefined8 local_40;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_48 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_40 = 0;
  local_38 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_30 = 0;
  local_28 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  FAnimationPoseData::FAnimationPoseData
            (&local_68,param_2,param_3,(FStackAttributeContainer *)&local_48);
  local_78._8_8_ = (ulonglong)(uint)local_78._12_4_ << 0x20;
  local_78.DataPtr = (FPoseLink *)0x0;
  GetAnimationPose_Internal
            (this,param_1,&local_78,(FAnimInstanceProxy *)0x0,false,
             &DefaultBlendSpaceExtractionContext,&local_68);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_28,(int)local_20);
  if (local_28 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_28);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_38,(int)local_30);
  if (local_38 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_48,(int)local_40);
  if (local_48 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// GetAnimationPose @ 147558c50

void __thiscall
UBlendSpace::GetAnimationPose
          (UBlendSpace *this,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1,
          FAnimExtractContext *param_2,FAnimationPoseData *param_3)

{
  TArrayView<FPoseLink,int> local_18;
  
  local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
  local_18.DataPtr = (FPoseLink *)0x0;
  GetAnimationPose_Internal(this,param_1,&local_18,(FAnimInstanceProxy *)0x0,false,param_2,param_3);
  return;
}

// GetAnimationPose @ 147558c90

void __thiscall
UBlendSpace::GetAnimationPose
          (UBlendSpace *this,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<FPoseLink,int> *param_2,FPoseContext *param_3)

{
  TArrayView<FPoseLink,int> local_38;
  FAnimationPoseData local_28;
  
  FAnimationPoseData::FAnimationPoseData(&local_28,param_3);
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  GetAnimationPose_Internal
            (this,param_1,&local_38,(FAnimInstanceProxy *)param_3->_padding_,
             param_3->bExpectsAdditivePose,&DefaultBlendSpaceExtractionContext,&local_28);
  return;
}

// GetAnimationPose @ 147558d20

void __thiscall
UBlendSpace::GetAnimationPose
          (UBlendSpace *this,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<FPoseLink,int> *param_2,FAnimExtractContext *param_3,FPoseContext *param_4)

{
  TArrayView<FPoseLink,int> local_38;
  FAnimationPoseData local_28;
  
  FAnimationPoseData::FAnimationPoseData(&local_28,param_4);
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  GetAnimationPose_Internal
            (this,param_1,&local_38,(FAnimInstanceProxy *)param_4->_padding_,
             param_4->bExpectsAdditivePose,param_3,&local_28);
  return;
}

// GetAnimationPose_Internal @ 147558dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBlendSpace::GetAnimationPose_Internal
          (UBlendSpace *this,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<FPoseLink,int> *param_2,FAnimInstanceProxy *param_3,bool param_4,
          FAnimExtractContext *param_5,FAnimationPoseData *param_6)

{
  int *piVar1;
  FBoneContainer *pFVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  TArrayView<FPoseLink,int> *pTVar9;
  UBlendSpace *pUVar10;
  FBlendedCurve *pFVar11;
  int iVar12;
  bool bVar13;
  char cVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_BlendSpace_GetAnimPose> FVar21;
  FBaseCompactPose<TMemStackAllocator<0>_> *pFVar22;
  ForElementType<float> FVar23;
  ForElementType<FCompactPose> FVar24;
  ForElementType<FBlendedCurve> FVar25;
  ForElementType<UE::Anim::FStackAttributeContainer> FVar26;
  undefined8 *puVar27;
  FName FVar28;
  uint uVar29;
  longlong lVar30;
  FBlendedCurve *pFVar31;
  size_t _Size;
  FScriptContainerElement *pFVar32;
  uint uVar33;
  FStackAttributeContainer *pFVar34;
  undefined1 *puVar35;
  ForElementType<UE::Math::TTransform<double>_> *pFVar36;
  longlong lVar37;
  float fVar38;
  float fVar39;
  undefined1 auStackY_848 [32];
  longlong local_7e0;
  longlong local_7d8;
  FColor_u_0 local_7c8;
  int local_7c4;
  FName local_7c0;
  byte local_7b8;
  undefined1 local_7a8 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_750;
  undefined8 local_748;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_740;
  undefined8 local_738;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_730
  ;
  undefined8 local_728;
  void *local_720;
  undefined8 local_718;
  bool local_710;
  FName local_708;
  TArrayView<FPoseLink,int> *local_700;
  FAnimInstanceProxy *local_6f8;
  longlong local_6f0;
  FName local_6e8;
  UBlendSpace *local_6e0;
  FBaseCompactPose<TMemStackAllocator<0>_> *local_6d8;
  double local_6c8;
  undefined1 local_6c0;
  undefined8 local_6bc;
  undefined4 local_6b4;
  undefined1 local_6b0;
  ForAnyElementType local_6a8;
  int local_6a0;
  int local_69c;
  ForAnyElementType local_698;
  int local_690;
  int local_68c;
  EAnimInterpolationType local_688;
  char local_687;
  FName local_678;
  FBlendedCurve *local_668;
  FAnimExtractContext *local_660;
  ForElementType<UE::Anim::FStackAttributeContainer> local_658;
  int iStack_650;
  undefined4 uStack_64c;
  ForElementType<FBlendedCurve> local_648;
  int iStack_640;
  undefined4 uStack_63c;
  ForElementType<FCompactPose> local_638;
  int iStack_630;
  undefined4 uStack_62c;
  FBlendSampleData *local_628;
  int iStack_620;
  undefined4 uStack_61c;
  ForElementType<UE::Anim::FStackAttributeContainer> local_618;
  int iStack_610;
  undefined4 uStack_60c;
  ForElementType<FBlendedCurve> local_608;
  int iStack_600;
  undefined4 uStack_5fc;
  ForElementType<FCompactPose> local_5f8;
  int iStack_5f0;
  undefined4 uStack_5ec;
  ForElementType<float> local_5e8;
  int iStack_5e0;
  undefined4 uStack_5dc;
  ForElementType<UE::Anim::FStackAttributeContainer> local_5d8;
  int iStack_5d0;
  undefined4 uStack_5cc;
  ForElementType<FBlendedCurve> local_5c8;
  int iStack_5c0;
  undefined4 uStack_5bc;
  ForElementType<FCompactPose> local_5b8;
  int iStack_5b0;
  undefined4 uStack_5ac;
  FBlendSampleData *local_5a8;
  int iStack_5a0;
  undefined4 uStack_59c;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_598;
  TArrayView<FBlendedCurve_const_,int> local_588;
  TArrayView<FCompactPose,int> local_578;
  TArrayView<FBlendSampleData_const_,int> local_568;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_558;
  TArrayView<FBlendedCurve_const_,int> local_548;
  TArrayView<FCompactPose_const_,int> local_538;
  TArrayView<float_const_,int> local_528;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_518;
  TArrayView<FBlendedCurve_const_,int> local_508;
  TArrayView<FCompactPose_const_,int> local_4f8;
  FName local_4e8 [2];
  TArrayView<FBlendSampleData_const_,int> local_4d8;
  FAnimationPoseData local_4c8;
  ForElementType<float> local_4b0;
  int local_488 [2];
  ForElementType<FCompactPose> local_480;
  int local_3b8 [2];
  ForElementType<FBlendedCurve> local_3b0;
  int local_2a8 [2];
  ForElementType<UE::Anim::FStackAttributeContainer> local_2a0;
  int local_98 [2];
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_848;
  local_660 = param_5;
  FVar21 = StatPtr_STAT_BlendSpace_GetAnimPose;
  local_700 = param_2;
  local_6f8 = param_3;
  local_6e0 = this;
  if (StatPtr_STAT_BlendSpace_GetAnimPose ==
      (FThreadSafeStaticStat<FStat_STAT_BlendSpace_GetAnimPose>)0x0) {
    pFVar20 = ::FName::FName(local_4e8,"STAT_BlendSpace_GetAnimPose");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_BlendSpace_GetAnimPose>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlendSpace_GetAnimPose,*pFVar20,
                        L"BlendSpace GetAnimPose","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  bVar6 = false;
  bVar7 = false;
  local_678.ComparisonIndex.Value = 0;
  local_678.Number = 0;
  FVar28 = *(FName *)FVar21;
  bVar13 = false;
  bVar15 = false;
  if ((FVar28.ComparisonIndex.Value.Value != 0) || (FVar28.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_7c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_7c8._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar13 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_708.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_708.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_708,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                   ,0x48a);
        bVar6 = true;
        bVar7 = true;
        bVar13 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_6e8 = FVar28;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar13 = true;
      goto LAB_147558f5f;
    }
  }
  bVar7 = bVar15;
  bVar6 = bVar13;
  bVar13 = false;
  local_6e8 = local_678;
  FVar28 = local_678;
LAB_147558f5f:
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_7c0,(UObjectBaseUtility *)this);
  pFVar22 = (FBaseCompactPose<TMemStackAllocator<0>_> *)FAnimationPoseData::GetPose(param_6);
  local_6d8 = pFVar22;
  local_668 = FAnimationPoseData::GetCurve(param_6);
  iVar17 = param_1->ArrayNum;
  lVar30 = (longlong)iVar17;
  if (iVar17 == 0) {
    cVar14 = (**(code **)(this->_padding_ + 0x2d0))(this);
    if (cVar14 == '\0') {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(pFVar22,pFVar22->BoneContainer);
    }
    else {
      FCompactPose::ResetToAdditiveIdentity((FCompactPose *)pFVar22);
    }
  }
  else {
    local_7c4 = param_2->ArrayNum;
    local_480.SecondaryData = (ForElementType<FCompactPose>)0x0;
    local_3b8[0] = 0;
    local_3b8[1] = 8;
    iVar16 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompactPose>_>
                       (0x18,8,iVar17,&local_480,local_3b8,local_3b8 + 1);
    FVar24 = (ForElementType<FCompactPose>)&local_480;
    if (local_480.SecondaryData != (ForElementType<FCompactPose>)0x0) {
      FVar24 = local_480.SecondaryData;
    }
    local_6f0 = lVar30;
    memset((void *)((longlong)FVar24 + (longlong)iVar16 * 0x18),0,lVar30 * 0x18);
    local_3b0.SecondaryData = (ForElementType<FBlendedCurve>)0x0;
    local_2a8[0] = 0;
    local_2a8[1] = 8;
    iVar16 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FBlendedCurve>_>
                       (0x20,8,iVar17,&local_3b0,local_2a8,local_2a8 + 1);
    FVar25 = (ForElementType<FBlendedCurve>)&local_3b0;
    if (local_3b0.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
      FVar25 = local_3b0.SecondaryData;
    }
    memset((void *)((longlong)iVar16 * 0x20 + (longlong)FVar25),0,lVar30 << 5);
    local_2a0.SecondaryData = (ForElementType<UE::Anim::FStackAttributeContainer>)0x0;
    local_98[0] = 0;
    local_98[1] = 8;
    iVar16 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FStackAttributeContainer>_>
                       (0x40,8,iVar17,&local_2a0,local_98,local_98 + 1);
    FVar26 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_2a0;
    if (local_2a0.SecondaryData != (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
      FVar26 = local_2a0.SecondaryData;
    }
    memset((FStackAttributeContainer *)((longlong)iVar16 * 0x40 + (longlong)FVar26),0,lVar30 << 6);
    local_4b0.SecondaryData = (ForElementType<float>)0x0;
    local_488[0] = 0;
    local_488[1] = 8;
    iVar17 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                       (4,4,iVar17,&local_4b0,local_488,local_488 + 1);
    FVar23 = (ForElementType<float>)&local_4b0;
    if (local_4b0.SecondaryData != (ForElementType<float>)0x0) {
      FVar23 = local_4b0.SecondaryData;
    }
    memset((void *)((longlong)FVar23 + (longlong)iVar17 * 4),0,lVar30 * 4);
    uVar29 = 0;
    if (0 < local_3b8[0]) {
      local_7e0 = 0;
      local_7d8 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar29 < local_3b8[0]) {
          uVar18 = ~uVar29 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar24 = (ForElementType<FCompactPose>)&local_480;
        if (local_480.SecondaryData != (ForElementType<FCompactPose>)0x0) {
          FVar24 = local_480.SecondaryData;
        }
        pFVar36 = (ForElementType<UE::Math::TTransform<double>_> *)((longlong)FVar24 + local_7d8);
        pFVar2 = pFVar22->BoneContainer;
        if (((((pFVar2 == (FBoneContainer *)0x0) ||
              (bVar15 = FWeakObjectPtr::IsValid(&(pFVar2->Asset).WeakPtr), !bVar15)) ||
             (pFVar2->RefSkeleton == (FReferenceSkeleton *)0x0)) ||
            ((pFVar2->BoneIndicesArray).ArrayNum < 1)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InBoneContainer && InBoneContainer->IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                                ,0x97,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar36[2].Data = (TTransform<double> *)pFVar2;
        uVar18 = (pFVar2->BoneIndicesArray).ArrayNum;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        iVar17 = *(int *)((longlong)&pFVar36[1].Data + 4);
        piVar1 = (int *)((longlong)&pFVar36[1].Data + 4);
        *(undefined4 *)&pFVar36[1].Data = 0;
        if (iVar17 < (int)uVar18) {
          UE::Core::Private::
          ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                    (0x60,0x10,uVar18,pFVar36,0,piVar1);
        }
        UE::Core::Private::
        ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                  (0x60,0x10,uVar18,pFVar36,(int *)(pFVar36 + 1),piVar1);
        uVar18 = 0;
        if ((int)uVar29 < local_2a8[0]) {
          uVar18 = ~uVar29 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = local_668;
        FVar25 = (ForElementType<FBlendedCurve>)&local_3b0;
        if (local_3b0.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
          FVar25 = local_3b0.SecondaryData;
        }
        pFVar31 = (FBlendedCurve *)((longlong)FVar25 + local_7e0);
        if (local_668 == pFVar31) {
          bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4808592878626406918>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimCurveTypes.h"
                              ,0x206,"&InCurveToInitFrom != this");
          if (bVar15) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          *(undefined4 *)&pFVar31->field_0x8 = 0;
          if (*(int *)&pFVar31->field_0xc < 0) {
            UE::Core::Private::
            ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                      (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)pFVar31,0,
                       (int *)&pFVar31->field_0xc);
          }
          pFVar31->field_0x10 = 0;
          *(undefined8 *)&pFVar31->field_0x18 = *(undefined8 *)&pFVar11->field_0x18;
        }
        local_7e0 = local_7e0 + 0x20;
        local_7d8 = local_7d8 + 0x18;
        uVar29 = uVar29 + 1;
        pFVar22 = local_6d8;
        param_5 = local_660;
      } while ((int)uVar29 < local_3b8[0]);
    }
    local_6c0 = param_5->bExtractRootMotion;
    local_6c8 = param_5->CurrentTime;
    local_6a0 = (param_5->PoseCurves).ArrayNum;
    lVar30 = (longlong)local_6a0;
    pFVar32 = (param_5->PoseCurves).AllocatorInstance.Data;
    local_6b4 = *(undefined4 *)&(param_5->DeltaTimeRecord).bPreviousIsValid;
    local_6b0 = param_5->bLooping;
    local_6bc._0_4_ = (param_5->DeltaTimeRecord).Delta;
    local_6bc._4_4_ = (param_5->DeltaTimeRecord).Previous;
    local_6a8.Data = (FScriptContainerElement *)0x0;
    if (local_6a0 == 0) {
      local_69c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_6a0,0,&local_6a8,local_6a0,&local_69c);
      memcpy(local_6a8.Data,pFVar32,lVar30 << 4);
    }
    local_690 = (param_5->BonesRequired).ArrayNum;
    _Size = (size_t)local_690;
    pFVar32 = (param_5->BonesRequired).AllocatorInstance.Data;
    local_698.Data = (FScriptContainerElement *)0x0;
    if (local_690 == 0) {
      local_68c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_690,0,&local_698,local_690,&local_68c);
      memcpy(local_698.Data,pFVar32,_Size);
    }
    pUVar10 = local_6e0;
    fVar8 = __real_3f800000;
    local_687 = (param_5->InterpolationOverride).bIsSet;
    if ((bool)local_687 != false) {
      local_688 = (param_5->InterpolationOverride).TypedValue;
    }
    uVar29 = 0;
    if (0 < local_6f0) {
      lVar30 = 0;
      local_7e0 = 0;
      do {
        uVar33 = ~uVar29 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar29 < local_3b8[0]) {
          uVar18 = uVar33;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar24 = (ForElementType<FCompactPose>)&local_480;
        if (local_480.SecondaryData != (ForElementType<FCompactPose>)0x0) {
          FVar24 = local_480.SecondaryData;
        }
        pFVar22 = (FBaseCompactPose<TMemStackAllocator<0>_> *)((longlong)FVar24 + lVar30 * 0x18);
        uVar18 = 0;
        if ((int)uVar29 < param_1->ArrayNum) {
          uVar18 = uVar33;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar17 = *(int *)((param_1->AllocatorInstance).Data + local_7e0);
        if ((iVar17 < 0) || ((pUVar10->SampleData).ArrayNum <= iVar17)) {
          cVar14 = (**(code **)(pUVar10->_padding_ + 0x2d0))(pUVar10);
          if (cVar14 == '\0') {
            FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(pFVar22,pFVar22->BoneContainer)
            ;
          }
          else {
LAB_14755a0ba:
            FCompactPose::ResetToAdditiveIdentity((FCompactPose *)pFVar22);
          }
        }
        else {
          uVar18 = 0;
          if ((int)uVar29 < param_1->ArrayNum) {
            uVar18 = uVar33;
          }
          if ((uVar18 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar37 = lVar30 * 0x60;
          uVar18 = *(uint *)((param_1->AllocatorInstance).Data + lVar37);
          uVar19 = 0;
          if ((int)uVar18 < (pUVar10->SampleData).ArrayNum) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar32 = (pUVar10->SampleData).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x30;
          uVar18 = 0;
          if ((int)uVar29 < param_1->ArrayNum) {
            uVar18 = uVar33;
          }
          if ((uVar18 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar38 = *(float *)((param_1->AllocatorInstance).Data + lVar37 + 0x10);
          if (fVar8 <= fVar38) {
            fVar38 = fVar8;
          }
          uVar18 = 0;
          if ((int)uVar29 < local_488[0]) {
            uVar18 = uVar33;
          }
          if (fVar38 <= 0.0) {
            fVar38 = 0.0;
          }
          if ((uVar18 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar23 = (ForElementType<float>)&local_4b0;
          if (local_4b0.SecondaryData != (ForElementType<float>)0x0) {
            FVar23 = local_4b0.SecondaryData;
          }
          *(float *)((longlong)FVar23 + lVar30 * 4) = fVar38;
          if (local_7c4 < 1) {
            plVar3 = *(longlong **)pFVar32;
            if ((plVar3 == (longlong *)0x0) || (plVar3[7] == 0)) {
              cVar14 = (**(code **)(pUVar10->_padding_ + 0x2d0))(pUVar10);
              if (cVar14 != '\0') goto LAB_14755a0ba;
              FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                        (pFVar22,pFVar22->BoneContainer);
            }
            else {
              fVar38 = (float)(**(code **)(*plVar3 + 0x2c0))();
              uVar18 = 0;
              if ((int)uVar29 < param_1->ArrayNum) {
                uVar18 = ~uVar29 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              fVar39 = *(float *)((param_1->AllocatorInstance).Data + lVar30 * 0x60 + 0x18);
              if (fVar38 <= fVar39) {
                fVar39 = fVar38;
              }
              uVar18 = 0;
              if ((int)uVar29 < local_2a8[0]) {
                uVar18 = ~uVar29 >> 0x1f;
              }
              if (fVar39 <= 0.0) {
                fVar39 = 0.0;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar25 = (ForElementType<FBlendedCurve>)&local_3b0;
              if (local_3b0.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
                FVar25 = local_3b0.SecondaryData;
              }
              uVar18 = 0;
              if ((int)uVar29 < local_98[0]) {
                uVar18 = ~uVar29 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar26 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_2a0;
              if (local_2a0.SecondaryData != (ForElementType<UE::Anim::FStackAttributeContainer>)0x0
                 ) {
                FVar26 = local_2a0.SecondaryData;
              }
              FAnimationPoseData::FAnimationPoseData
                        (&local_4c8,(FCompactPose *)pFVar22,
                         (FBlendedCurve *)((longlong)(int)uVar29 * 0x20 + (longlong)FVar25),
                         (FStackAttributeContainer *)
                         ((longlong)(int)uVar29 * 0x40 + (longlong)FVar26));
              local_6c8 = (double)fVar39;
              uVar18 = 0;
              if ((int)uVar29 < param_1->ArrayNum) {
                uVar18 = ~uVar29 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = (param_1->AllocatorInstance).Data;
              local_6bc = *(undefined8 *)(pFVar4 + lVar30 * 0x60 + 0x24);
              local_6b4 = *(undefined4 *)(pFVar4 + lVar30 * 0x60 + 0x2c);
              plVar3 = *(longlong **)pFVar32;
              (**(code **)(*plVar3 + 0x330))(plVar3,&local_4c8);
            }
          }
          else {
            uVar18 = 0;
            if ((int)uVar29 < param_1->ArrayNum) {
              uVar18 = uVar33;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar9 = local_700;
            iVar17 = *(int *)((param_1->AllocatorInstance).Data + lVar37);
            if (((iVar17 < 0) || (local_700->ArrayNum <= iVar17)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InPoseLinks.IsValidIndex(BlendSampleDataCache[I].SampleDataIndex)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                                    ,0x4b8,L""), bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FAnimationBaseContext::FAnimationBaseContext
                      ((FAnimationBaseContext *)local_7a8,local_6f8,
                       (FAnimationUpdateSharedContext *)0x0);
            local_7a8._32_8_ = 0;
            local_7a8._40_8_ = 0;
            local_7a8._64_8_ = 0;
            local_7a8[0x48] = 0;
            local_748 = 0;
            local_740 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
            local_738 = 0;
            local_730 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                         *)0x0;
            local_728 = 0;
            local_720 = (void *)0x0;
            local_718 = 0;
            local_710 = param_4;
            local_7a8._48_8_ = 0;
            local_7a8._56_8_ = 0;
            local_7a8._80_8_ = 0;
            pTStack_750 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
            FPoseContext::InitializeImpl((FPoseContext *)local_7a8,local_6f8);
            uVar18 = 0;
            if ((int)uVar29 < param_1->ArrayNum) {
              uVar18 = uVar33;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar18 = *(uint *)((param_1->AllocatorInstance).Data + lVar37);
            uVar33 = 0;
            if ((int)uVar18 < pTVar9->ArrayNum) {
              uVar33 = ~uVar18 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FPoseLink::Evaluate(pTVar9->DataPtr + (int)uVar18,(FPoseContext *)local_7a8);
            uVar18 = 0;
            if ((int)uVar29 < local_3b8[0]) {
              uVar18 = ~uVar29 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar24 = (ForElementType<FCompactPose>)&local_480;
            if (local_480.SecondaryData != (ForElementType<FCompactPose>)0x0) {
              FVar24 = local_480.SecondaryData;
            }
            puVar27 = (undefined8 *)((longlong)FVar24 + lVar30 * 0x18);
            if (puVar27 != (undefined8 *)(local_7a8 + 0x20)) {
              *puVar27 = local_7a8._32_8_;
              local_7a8._32_8_ = 0;
              *(undefined4 *)(puVar27 + 1) = local_7a8._40_4_;
              *(undefined4 *)((longlong)puVar27 + 0xc) = local_7a8._44_4_;
              local_7a8._40_8_ = 0;
            }
            puVar27[2] = local_7a8._48_8_;
            uVar18 = 0;
            if ((int)uVar29 < local_2a8[0]) {
              uVar18 = ~uVar29 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar25 = (ForElementType<FBlendedCurve>)&local_3b0;
            if (local_3b0.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
              FVar25 = local_3b0.SecondaryData;
            }
            puVar27 = (undefined8 *)(lVar30 * 0x20 + (longlong)FVar25);
            if (puVar27 != (undefined8 *)(local_7a8 + 0x38)) {
              *puVar27 = local_7a8._56_8_;
              local_7a8._56_8_ = 0;
              *(undefined4 *)(puVar27 + 1) = local_7a8._64_4_;
              *(undefined4 *)((longlong)puVar27 + 0xc) = local_7a8._68_4_;
              local_7a8._64_8_ = 0;
            }
            *(undefined1 *)(puVar27 + 2) = local_7a8[0x48];
            puVar27[3] = local_7a8._80_8_;
            uVar18 = 0;
            if ((int)uVar29 < local_98[0]) {
              uVar18 = ~uVar29 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar26 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_2a0;
            if (local_2a0.SecondaryData != (ForElementType<UE::Anim::FStackAttributeContainer>)0x0)
            {
              FVar26 = local_2a0.SecondaryData;
            }
            pFVar34 = (FStackAttributeContainer *)(lVar30 * 0x40 + (longlong)FVar26);
            if (pFVar34 != (FStackAttributeContainer *)&pTStack_750) {
              DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                        (*(TArray<int,TSizedDefaultAllocator<32>_> **)pFVar34,
                         *(int *)&pFVar34->field_0x8);
              if (*(void **)pFVar34 != (void *)0x0) {
                FMemory::Free(*(void **)pFVar34);
              }
              *(TArray<int,TSizedDefaultAllocator<32>_> **)pFVar34 = pTStack_750;
              pTStack_750 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
              *(int *)&pFVar34->field_0x8 = (int)local_748;
              *(undefined4 *)&pFVar34->field_0xc = local_748._4_4_;
              local_748 = 0;
            }
            puVar35 = &pFVar34->field_0x10;
            if ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)puVar35 != &local_740
               ) {
              DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                        (*(TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)puVar35,
                         *(int *)&pFVar34->field_0x18);
              if (*(void **)puVar35 != (void *)0x0) {
                FMemory::Free(*(void **)puVar35);
              }
              *(TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)puVar35 = local_740;
              local_740 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
              *(int *)&pFVar34->field_0x18 = (int)local_738;
              *(undefined4 *)&pFVar34->field_0x1c = local_738._4_4_;
              local_738 = 0;
            }
            puVar35 = &pFVar34->field_0x20;
            if ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                 **)puVar35 != &local_730) {
              DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                        (*(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                           **)puVar35,*(int *)&pFVar34->field_0x28);
              if (*(void **)puVar35 != (void *)0x0) {
                FMemory::Free(*(void **)puVar35);
              }
              *(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                **)puVar35 = local_730;
              local_730 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                           *)0x0;
              *(int *)&pFVar34->field_0x28 = (int)local_728;
              *(undefined4 *)&pFVar34->field_0x2c = local_728._4_4_;
              local_728 = 0;
            }
            puVar35 = &pFVar34->field_0x30;
            if ((void **)puVar35 != &local_720) {
              if (*(void **)puVar35 != (void *)0x0) {
                FMemory::Free(*(void **)puVar35);
              }
              *(void **)puVar35 = local_720;
              local_720 = (void *)0x0;
              *(undefined4 *)&pFVar34->field_0x38 = (undefined4)local_718;
              *(undefined4 *)&pFVar34->field_0x3c = local_718._4_4_;
              local_718 = 0;
            }
            if (local_720 != (void *)0x0) {
              FMemory::Free(local_720);
            }
            DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                      (local_730,(int)local_728);
            if (local_730 !=
                (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
              FMemory::Free(local_730);
            }
            DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                      (local_740,(int)local_738);
            if (local_740 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_740);
            }
            DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_750,(int)local_748);
            if (pTStack_750 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(pTStack_750);
            }
          }
        }
        local_7e0 = local_7e0 + 0x60;
        uVar29 = uVar29 + 1;
        lVar30 = lVar30 + 1;
        FVar28 = local_6e8;
      } while (lVar30 < local_6f0);
    }
    iVar17 = local_3b8[0];
    FVar24 = (ForElementType<FCompactPose>)&local_480;
    if (local_480.SecondaryData != (ForElementType<FCompactPose>)0x0) {
      FVar24 = local_480.SecondaryData;
    }
    local_638 = FVar24;
    if ((local_3b8[0] < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar16 = local_488[0];
    pUVar10 = local_6e0;
    iStack_630 = iVar17;
    if ((local_6e0->PerBoneBlendValues).ArrayNum < 1) {
      local_5e8 = (ForElementType<float>)&local_4b0;
      if (local_4b0.SecondaryData != (ForElementType<float>)0x0) {
        local_5e8 = local_4b0.SecondaryData;
      }
      if ((local_488[0] < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = local_98[0];
      iStack_5e0 = iVar16;
      local_5d8 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_2a0;
      if (local_2a0.SecondaryData != (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
        local_5d8 = local_2a0.SecondaryData;
      }
      if ((local_98[0] < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar16 = local_2a8[0];
      iStack_5d0 = iVar12;
      local_5c8 = (ForElementType<FBlendedCurve>)&local_3b0;
      if (local_3b0.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
        local_5c8 = local_3b0.SecondaryData;
      }
      if ((local_2a8[0] < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_528._12_4_ = uStack_5dc;
      local_528.ArrayNum = iStack_5e0;
      local_518._12_4_ = uStack_5cc;
      local_518.ArrayNum = iStack_5d0;
      local_528.DataPtr = (float *)local_5e8;
      local_518.DataPtr = (FStackAttributeContainer *)local_5d8;
      iStack_5c0 = iVar16;
      local_508._12_4_ = uStack_5bc;
      local_508.ArrayNum = iVar16;
      local_4f8._12_4_ = uStack_5ac;
      local_4f8.ArrayNum = iVar17;
      local_508.DataPtr = (FBlendedCurve *)local_5c8;
      local_5b8 = FVar24;
      iStack_5b0 = iVar17;
      local_4f8.DataPtr = (FCompactPose *)FVar24;
      FAnimationRuntime::BlendPosesTogether(&local_4f8,&local_508,&local_518,&local_528,param_6);
    }
    else {
      (**(code **)(local_6e0->_padding_ + 0x2d0))(local_6e0);
      if ((pUVar10->bAllowMeshSpaceBlending == false) ||
         (pUVar10->bContainsRotationOffsetMeshSpaceSamples != false)) {
        local_628 = (FBlendSampleData *)(param_1->AllocatorInstance).Data;
        iVar16 = param_1->ArrayNum;
        if ((iVar16 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = local_98[0];
        local_618 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_2a0;
        if (local_2a0.SecondaryData != (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
          local_618 = local_2a0.SecondaryData;
        }
        iStack_620 = iVar16;
        if ((local_98[0] < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar16 = local_2a8[0];
        iStack_610 = iVar12;
        local_608 = (ForElementType<FBlendedCurve>)&local_3b0;
        if (local_3b0.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
          local_608 = local_3b0.SecondaryData;
        }
        if ((local_2a8[0] < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_568._12_4_ = uStack_61c;
        local_568.ArrayNum = iStack_620;
        local_558._12_4_ = uStack_60c;
        local_558.ArrayNum = iStack_610;
        local_568.DataPtr = local_628;
        local_558.DataPtr = (FStackAttributeContainer *)local_618;
        iStack_600 = iVar16;
        local_548._12_4_ = uStack_5fc;
        local_548.ArrayNum = iVar16;
        local_538._12_4_ = uStack_5ec;
        local_538.ArrayNum = iVar17;
        local_548.DataPtr = (FBlendedCurve *)local_608;
        local_5f8 = FVar24;
        iStack_5f0 = iVar17;
        local_538.DataPtr = (FCompactPose *)FVar24;
        FAnimationRuntime::BlendPosesTogetherPerBone
                  (&local_538,&local_548,&local_558,
                   (IInterpolationIndexProvider *)&pUVar10->_padding_,&local_568,param_6);
      }
      else {
        local_5a8 = (FBlendSampleData *)(param_1->AllocatorInstance).Data;
        iVar17 = param_1->ArrayNum;
        if ((iVar17 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar16 = local_98[0];
        local_658 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_2a0;
        if (local_2a0.SecondaryData != (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
          local_658 = local_2a0.SecondaryData;
        }
        iStack_5a0 = iVar17;
        if ((local_98[0] < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar17 = local_2a8[0];
        iStack_650 = iVar16;
        local_648 = (ForElementType<FBlendedCurve>)&local_3b0;
        if (local_3b0.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
          local_648 = local_3b0.SecondaryData;
        }
        if ((local_2a8[0] < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_4d8._12_4_ = uStack_59c;
        local_4d8.ArrayNum = iStack_5a0;
        local_598._12_4_ = uStack_64c;
        local_598.ArrayNum = iStack_650;
        local_4d8.DataPtr = local_5a8;
        local_598.DataPtr = (FStackAttributeContainer *)local_658;
        local_578._12_4_ = uStack_62c;
        local_578.ArrayNum = iStack_630;
        iStack_640 = iVar17;
        local_588._12_4_ = uStack_63c;
        local_588.ArrayNum = iVar17;
        local_588.DataPtr = (FBlendedCurve *)local_648;
        local_578.DataPtr = (FCompactPose *)local_638;
        FAnimationRuntime::BlendPosesTogetherPerBoneInMeshSpace
                  (&local_578,&local_588,&local_598,pUVar10,&local_4d8,param_6);
      }
    }
    FCompactPose::NormalizeRotations((FCompactPose *)local_6d8);
    if (local_698.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data);
    }
    if (local_6a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.Data);
    }
    if (local_4b0.SecondaryData != (ForElementType<float>)0x0) {
      FMemory::Free((void *)local_4b0.SecondaryData);
    }
    FVar26 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_2a0;
    if (local_2a0.SecondaryData != (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
      FVar26 = local_2a0.SecondaryData;
    }
    DestructItems<UE::Anim::FStackAttributeContainer,int>
              ((FStackAttributeContainer *)FVar26,local_98[0]);
    if (local_2a0.SecondaryData != (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
      FMemory::Free((void *)local_2a0.SecondaryData);
    }
    if (local_3b0.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
      FMemory::Free((void *)local_3b0.SecondaryData);
    }
    if (local_480.SecondaryData != (ForElementType<FCompactPose>)0x0) {
      FMemory::Free((void *)local_480.SecondaryData);
    }
  }
  if ((local_7b8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_7b8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_7b8 & 4) != 0) {
    FThreadStats::AddMessage(local_7c0,CycleScopeEnd);
  }
  local_7b8 = 0;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return;
}

// GetBlendParameter @ 14755a760

FBlendParameter * __thiscall UBlendSpace::GetBlendParameter(UBlendSpace *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FBlendParameter *pFVar3;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                       ,0x501,L"Invalid Blend Parameter Index");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FBlendParameter *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->BlendParameters + param_1;
}

// GetBlendSample @ 14755a7c0

FBlendSample * __thiscall UBlendSpace::GetBlendSample(UBlendSpace *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBlendSample *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->SampleData).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBlendSample *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBlendSample *)((this->SampleData).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetClampedAndWrappedBlendInput @ 14755b100

TVector<double> * __thiscall
UBlendSpace::GetClampedAndWrappedBlendInput
          (UBlendSpace *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  float *pfVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  pfVar7 = &this->BlendParameters[0].Max;
  uVar8 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  pTVar6 = __return_storage_ptr__;
  do {
    fVar1 = pfVar7[-1];
    dVar3 = (double)*pfVar7;
    if (*(bool *)((longlong)pfVar7 + 9) == false) {
      if (2 < uVar8) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TVector<double> *)(*pcVar2)();
          return pTVar6;
        }
        dVar10 = (pTVar6->field0_0x0)._s_0.X;
        if (dVar3 <= dVar10) {
          dVar10 = dVar3;
        }
        if (dVar10 <= (double)fVar1) {
          dVar10 = (double)fVar1;
        }
        goto LAB_14755b24f;
      }
      dVar10 = (pTVar6->field0_0x0)._s_0.X;
      if (dVar10 <= dVar3) {
        dVar3 = dVar10;
      }
      if (dVar3 <= (double)fVar1) {
        dVar3 = (double)fVar1;
      }
    }
    else {
      dVar4 = (double)fVar1;
      if ((2 < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar2)();
        return pTVar6;
      }
      dVar9 = dVar3 - dVar4;
      dVar10 = dVar3;
      if (dVar9 != 0.0) {
        dVar10 = (pTVar6->field0_0x0)._s_0.X;
        if (dVar4 <= dVar10) {
          if ((dVar3 < dVar10) &&
             (dVar9 = FGenericPlatformMath::Fmod(dVar10 - dVar3,dVar9), dVar10 = dVar3, dVar9 != 0.0
             )) {
            dVar10 = dVar4 + dVar9;
          }
        }
        else {
          dVar9 = FGenericPlatformMath::Fmod(dVar4 - dVar10,dVar9);
          dVar10 = dVar4;
          if (dVar9 != 0.0) {
            dVar10 = dVar3 - dVar9;
          }
        }
      }
      dVar3 = dVar10;
      if (2 < uVar8) {
LAB_14755b24f:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        dVar3 = dVar10;
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TVector<double> *)(*pcVar2)();
          return pTVar6;
        }
      }
    }
    (pTVar6->field0_0x0)._s_0.X = dVar3;
    pfVar7 = pfVar7 + 8;
    pTVar6 = (TVector<double> *)((longlong)&pTVar6->field0_0x0 + 8);
    uVar8 = uVar8 + 1;
    if (uVar8 == 3) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetClampedBlendInput @ 14755b2c0

TVector<double> * __thiscall
UBlendSpace::GetClampedBlendInput
          (UBlendSpace *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  if (this->BlendParameters[0].bWrapInput == false) {
    dVar3 = (double)this->BlendParameters[0].Max;
    dVar2 = (double)this->BlendParameters[0].Min;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
    if (dVar1 <= dVar3) {
      dVar3 = dVar1;
    }
    if (dVar3 <= dVar2) {
      dVar3 = dVar2;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  }
  if (this->BlendParameters[1].bWrapInput == false) {
    dVar3 = (double)this->BlendParameters[1].Max;
    dVar2 = (double)this->BlendParameters[1].Min;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
    if (dVar1 <= dVar3) {
      dVar3 = dVar1;
    }
    if (dVar3 <= dVar2) {
      dVar3 = dVar2;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  }
  if (this->BlendParameters[2].bWrapInput == false) {
    dVar3 = (double)this->BlendParameters[2].Max;
    dVar2 = (double)this->BlendParameters[2].Min;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    if (dVar1 <= dVar3) {
      dVar3 = dVar1;
    }
    if (dVar3 <= dVar2) {
      dVar3 = dVar2;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  }
  return __return_storage_ptr__;
}

// GetEditorElement @ 14755b670

FEditorElement * __thiscall UBlendSpace::GetEditorElement(UBlendSpace *this,int param_1,int param_2)

{
  FEditorElement *pFVar1;
  
  pFVar1 = GetGridSampleInternal(this,(this->BlendParameters[0].GridNum + 1) * param_2 + param_1);
  return pFVar1;
}

// GetGridSampleInternal @ 14755bfe0

FEditorElement * __thiscall UBlendSpace::GetGridSampleInternal(UBlendSpace *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FEditorElement *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->GridSamples).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->GridSamples).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FEditorElement *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FEditorElement *)((this->GridSamples).AllocatorInstance.Data + (longlong)param_1 * 0x18)
    ;
  }
  return (FEditorElement *)0x0;
}

// GetNormalizedBlendInput @ 14755d9b0

TVector<double> * __thiscall
UBlendSpace::GetNormalizedBlendInput
          (UBlendSpace *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double>_u_0 local_28;
  
  GetClampedAndWrappedBlendInput(this,(TVector<double> *)&local_28._s_0,param_1);
  dVar3 = (double)this->BlendParameters[0].Min;
  dVar4 = (double)this->BlendParameters[1].Min;
  dVar5 = (double)this->BlendParameters[2].Min;
  fVar1 = this->BlendParameters[1].Max;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (local_28._s_0.X - dVar3) / ((double)this->BlendParameters[0].Max - dVar3);
  fVar2 = this->BlendParameters[2].Max;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (local_28._s_0.Y - dVar4) / ((double)fVar1 - dVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (local_28._s_0.Z - dVar5) / ((double)fVar2 - dVar5);
  return __return_storage_ptr__;
}

// GetPerBoneInterpolationData @ 14755de80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1> * __thiscall
UBlendSpace::GetPerBoneInterpolationData
          (UBlendSpace *this,
          TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1>
          *__return_storage_ptr__,USkeleton *param_1)

{
  undefined8 *puVar1;
  USkeleton *pUVar2;
  FName FVar3;
  code *pcVar4;
  int iVar5;
  BOOLEAN BVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FSkeletonRemappingRegistry *this_00;
  FPerBoneInterpolationData FVar10;
  FPerBoneInterpolationData *pFVar11;
  TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1> *pTVar12;
  uint *puVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  FPerBoneInterpolationData *pFVar16;
  uint uVar17;
  FPerBoneInterpolationData *pFVar18;
  uint uVar19;
  FPerBoneInterpolationData *pFVar20;
  longlong lVar21;
  FPerBoneInterpolationData *pFVar22;
  undefined1 auStackY_178 [32];
  FIdentityFunctor local_148 [8];
  longlong local_140;
  UBlendSpace *local_138;
  int *local_130;
  USkeleton *local_128;
  TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1> *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  RTL_SRWLOCK local_f8;
  undefined1 local_f0 [24];
  undefined8 uStack_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  void *local_b0;
  ulonglong local_a8;
  undefined1 local_a0 [24];
  undefined8 uStack_88;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  void *local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar2 = *(USkeleton **)&this[-1].BlendParameters[1].Min;
  pFVar16 = (FPerBoneInterpolationData *)0x0;
  local_f0._16_8_ = 0;
  uStack_d8 = 0;
  local_a0._16_8_ = 0;
  uStack_88 = 0;
  local_c8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_c0 = _UNK_150631d98;
  local_78 = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_b8 = 0;
  local_a8 = 0;
  local_68 = 0;
  local_54 = 0;
  local_f8.Ptr = (PVOID)0x0;
  local_f0._0_8_ = (FScriptContainerElement *)0x0;
  local_f0._8_8_ = 0;
  local_d0 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_a0._0_8_ = (FScriptContainerElement *)0x0;
  local_a0._8_8_ = 0;
  local_80 = (void *)0x0;
  local_60 = (void *)0x0;
  local_138 = this;
  local_128 = param_1;
  local_120 = __return_storage_ptr__;
  this_00 = UE::Anim::FSkeletonRemappingRegistry::Get();
  FVar10 = (FPerBoneInterpolationData)
           UE::Anim::FSkeletonRemappingRegistry::GetRemapping(this_00,pUVar2,param_1);
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a0,0,local_a0._8_4_);
  iVar5 = SUB84(local_a0._8_8_,4);
  local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
  }
  uVar15 = local_78._4_4_;
  uStack_70 = 0xffffffff;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  if (0x80 < uVar15) {
    local_78 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  local_a8 = local_a8 & 0xffffffff00000000;
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_f0,0,local_f0._8_4_);
  iVar5 = SUB84(local_f0._8_8_,4);
  local_f0._8_8_ = local_f0._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_f0,0,(int *)(local_f0 + 0xc));
  }
  uVar15 = local_c8._4_4_;
  uStack_c0 = 0xffffffff;
  local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
  if (0x80 < uVar15) {
    local_c8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f0 + 0x10),0);
  }
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  if ((FScriptContainerElement *)local_f0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f0._0_8_);
  }
  BVar6 = TryAcquireSRWLockExclusive(&local_f8);
  if (BVar6 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  else {
    ReleaseSRWLockExclusive(&local_f8);
  }
  pFVar11 = ::operator_new(0x20);
  pFVar22 = pFVar16;
  if (pFVar11 != (FPerBoneInterpolationData *)0x0) {
    pFVar11[1] = FVar10;
    *pFVar11 = (FPerBoneInterpolationData)&___7FSortedPerBoneInterpolationData__6B_;
    pFVar11[2] = (FPerBoneInterpolationData)0x0;
    pFVar11[3] = (FPerBoneInterpolationData)0x0;
    pFVar22 = pFVar11;
  }
  TArray<FSortedPerBoneInterpolation,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<FSortedPerBoneInterpolation,TSizedDefaultAllocator<32>_> *)(pFVar22 + 2),
             (int)this->_padding_,Default);
  uVar15 = (uint)this->_padding_;
  pFVar11 = pFVar22 + 3;
  if (uVar15 != 0) {
    local_130 = &this[-1].BlendSpaceData.Triangles.ArrayNum;
    local_140 = 0;
    pFVar18 = pFVar16;
    pFVar20 = pFVar16;
    do {
      lVar21 = local_140;
      uVar17 = (uint)pFVar18;
      uVar19 = ~uVar17 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar17 < (int)uVar15) {
        uVar9 = uVar19;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1> *)
                  (*pcVar4)();
        return pTVar12;
      }
      puVar1 = (undefined8 *)((longlong)&pFVar20->field_0x0 + local_138->_padding_);
      local_118 = *puVar1;
      uStack_110 = puVar1[1];
      local_108 = *(undefined4 *)((longlong)&pFVar20[2].field_0x0 + local_138->_padding_);
      uVar15 = 0;
      if ((int)uVar17 < *(int *)pFVar11) {
        uVar15 = uVar19;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1> *)
                  (*pcVar4)();
        return pTVar12;
      }
      FVar10 = pFVar22[2];
      *(undefined8 *)((longlong)&pFVar16->field_0x0 + (longlong)FVar10) = local_118;
      *(undefined4 *)((longlong)&pFVar16[1].field_0x0 + (longlong)FVar10) = (undefined4)uStack_110;
      *(undefined4 *)(&pFVar16[1].field_0x4 + (longlong)FVar10) = uStack_110._4_4_;
      *(undefined4 *)((longlong)&pFVar16[2].field_0x0 + (longlong)FVar10) = local_108;
      *(uint *)(&pFVar16[2].field_0x4 + (longlong)FVar10) = uVar17;
      cVar8 = (**(code **)(*(longlong *)local_130 + 0x1c0))();
      if (cVar8 == '\0') {
        uVar15 = 0;
        if ((int)uVar17 < *(int *)pFVar11) {
          uVar15 = uVar19;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1> *)
                    (*pcVar4)();
          return pTVar12;
        }
        FVar10 = pFVar22[2];
        if ((local_128 == (USkeleton *)0x0) ||
           (FVar3 = *(FName *)((longlong)&pFVar16->field_0x0 + (longlong)FVar10),
           FVar3 == (FName)0x0)) {
          puVar13 = (uint *)((longlong)&pFVar16[1].field_0x0 + (longlong)FVar10);
          *puVar13 = *puVar13 | 0x7fffffff;
        }
        else {
          uVar15 = 0xffffffff;
          puVar13 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                    *)&(local_128->ReferenceSkeleton).FinalNameToIndexMap,FVar3);
          if (puVar13 != (uint *)0x0) {
            uVar15 = *puVar13;
          }
          *(uint *)((longlong)&pFVar16[1].field_0x0 + (longlong)FVar10) = uVar15 | 0x80000000;
          lVar21 = local_140;
        }
        *(undefined4 *)(&pFVar16[1].field_0x4 + (longlong)FVar10) = 0xffffffff;
      }
      local_140 = lVar21 + 1;
      pFVar18 = (FPerBoneInterpolationData *)(ulonglong)(uVar17 + 1);
      pFVar20 = (FPerBoneInterpolationData *)&pFVar20[2].field_0x4;
      pFVar16 = pFVar16 + 3;
      uVar15 = (uint)local_138->_padding_;
      __return_storage_ptr__ = local_120;
    } while (uVar17 + 1 != uVar15);
  }
  AlgoImpl::
  IntroSortInternal<FSortedPerBoneInterpolation,int,FIdentityFunctor,TDereferenceWrapper<FSortedPerBoneInterpolation,_UBlendSpace::GetPerBoneInterpolationData_::__l2::<lambda_1>_>_>
            ((FSortedPerBoneInterpolation *)pFVar22[2],*(int *)pFVar11,local_148[0],
             (<lambda_1> *)local_148);
  __return_storage_ptr__->Object = pFVar22;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFSortedPerBoneInterpolationData__U__DefaultDeleter_UFSortedPerBoneInterpolationData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14[1]._padding_ = (longlong)pFVar22;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
  }
  return __return_storage_ptr__;
}

// GetPerBoneInterpolationIndex @ 14755e410

int __thiscall
UBlendSpace::GetPerBoneInterpolationIndex
          (UBlendSpace *this,FCompactPoseBoneIndex *param_1,FBoneContainer *param_2,
          FPerBoneInterpolationData *param_3)

{
  FPerBoneInterpolationData this_00;
  FPerBoneInterpolationData FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint local_res20;
  FCompactPoseBoneIndex local_48 [4];
  
  if (param_3 == (FPerBoneInterpolationData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2561591853375814663>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                       ,0x3f9,"InData");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  else {
    iVar4 = *(int *)(param_3 + 3);
    uVar8 = 0;
    this_00 = param_3[1];
    if (0 < iVar4) {
      lVar9 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < iVar4) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        FVar1 = param_3[2];
        uVar5 = 0;
        if ((int)uVar8 < *(int *)(param_3 + 3)) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        iVar4 = *(int *)(lVar9 + 0x14 + (longlong)param_3[2]);
        FBoneReference::GetSkeletonPoseIndex
                  ((FBoneReference *)((longlong)FVar1 + (longlong)(int)uVar8 * 0x18),
                   (FBoneContainer *)&local_res20);
        bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
        if ((bVar3) &&
           (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this_00 + 8)), bVar3)) {
          lVar7 = (longlong)(int)local_res20;
          if (((int)local_res20 < 0) ||
             (((FWeakObjectPtr *)((longlong)this_00 + 0x18))->ObjectIndex <= (int)local_res20)) {
            local_res20 = 0xffffffff;
          }
          else {
            uVar5 = 0;
            if ((int)local_res20 < ((FWeakObjectPtr *)((longlong)this_00 + 0x18))->ObjectIndex) {
              uVar5 = ~local_res20 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              iVar4 = (*pcVar2)();
              return iVar4;
            }
            local_res20 = *(uint *)((longlong)*(FWeakObjectPtr *)((longlong)this_00 + 0x10) +
                                   lVar7 * 4);
          }
        }
        uVar5 = local_res20;
        if (((int)local_res20 < 0) ||
           ((param_2->SkeletonToCompactPose).ArrayNum <= (int)local_res20)) {
          local_48[0] = (FCompactPoseBoneIndex)0xffffffff;
        }
        else {
          uVar6 = 0;
          if ((int)local_res20 < (param_2->SkeletonToCompactPose).ArrayNum) {
            uVar6 = ~local_res20 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          local_48[0] = *(FCompactPoseBoneIndex *)
                         ((param_2->SkeletonToCompactPose).AllocatorInstance.Data +
                         (longlong)(int)uVar5 * 4);
        }
        if (local_48[0] == *param_1) {
          return iVar4;
        }
        if ((local_48[0] != (FCompactPoseBoneIndex)0xffffffff) &&
           (bVar3 = FBoneContainer::BoneIsChildOf(param_2,param_1,local_48), bVar3)) {
          return iVar4;
        }
        iVar4 = *(int *)(param_3 + 3);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x18;
      } while ((int)uVar8 < iVar4);
    }
  }
  return -1;
}

// GetPerBoneInterpolationIndex @ 14755e6a0

int __thiscall
UBlendSpace::GetPerBoneInterpolationIndex
          (UBlendSpace *this,FSkeletonPoseBoneIndex param_1,USkeleton *param_2,
          FPerBoneInterpolationData *param_3)

{
  FPerBoneInterpolationData FVar1;
  FPerBoneInterpolationData this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPerBoneInterpolationData this_01;
  undefined1 local_res20 [8];
  FSkeletonPoseBoneIndex local_38;
  
  if (param_3 == (FPerBoneInterpolationData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2561591853375814611>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                       ,0x42d,"InData");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  else if (param_1 != (FSkeletonPoseBoneIndex)0xffffffff) {
    iVar4 = *(int *)(param_3 + 3);
    this_01 = param_3[2];
    this_00 = param_3[1];
    FVar1 = (FPerBoneInterpolationData)((longlong)this_01 + (longlong)iVar4 * 0x18);
    while( true ) {
      if (*(int *)(param_3 + 3) != iVar4) {
        `TCheckedPointerIterator<FSortedPerBoneInterpolation_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (this_01 == FVar1) break;
      FBoneReference::GetSkeletonPoseIndex((FBoneReference *)this_01,(FBoneContainer *)&local_38);
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
      if ((bVar3) &&
         (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this_00 + 8)), bVar3)) {
        local_38 = (FSkeletonPoseBoneIndex)
                   FSkeletonRemapping::GetTargetSkeletonBoneIndex
                             ((FSkeletonRemapping *)this_00,(int)local_38);
      }
      if ((local_38 == param_1) ||
         ((local_38 != (FSkeletonPoseBoneIndex)0xffffffff &&
          (bVar3 = FReferenceSkeleton::BoneIsChildOf
                             (&param_2->ReferenceSkeleton,(int)param_1,(int)local_38), bVar3)))) {
        return *(uint *)((longlong)this_01 + 0x14);
      }
      this_01 = (FPerBoneInterpolationData)((longlong)this_01 + 0x18);
    }
  }
  return -1;
}

// GetPrivateStaticClass @ 14755f110

UClass * __cdecl UBlendSpace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendSpace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendSpace",
               &Z_Registration_Info_UClass_UBlendSpace.InnerSingleton,
               StaticRegisterNativesUBlendSpace,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendSpace>,InternalVTableHelperCtorCaller<UBlendSpace>,
               local_res8,UAnimationAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendSpace.InnerSingleton;
}

// GetRawSamplesFromBlendInput1D @ 14755f4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UBlendSpace::GetRawSamplesFromBlendInput1D
          (UBlendSpace *this,TVector<double> *param_1,
          TArray<FGridBlendSample,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_2
          )

{
  uint uVar1;
  ForElementType<FGridBlendSample> FVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  FEditorElement *pFVar7;
  ForElementType<FGridBlendSample> FVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  ForElementType<FGridBlendSample> local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TVector<double> local_e8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  float local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((this->DimensionIndices).ArrayNum != 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DimensionIndices.Num() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                       ,0x942,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->DimensionIndices).ArrayNum;
  if (iVar6 < 1) {
    local_118 = (undefined8 *)0x0;
    local_110 = (ForElementType<FGridBlendSample>)(longlong)iVar6;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = *(uint *)(this->DimensionIndices).AllocatorInstance.Data;
  ConvertBlendInputToGridSpace(this,&local_e8,param_1);
  if (2 < uVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_e8.field0_0x0.XYZ[(int)uVar1];
  auVar11 = roundpd(auVar11,auVar11,3);
  fVar12 = (float)auVar11._0_8_;
  if (2 < uVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar13 = (float)(local_e8.field0_0x0.XYZ[(int)uVar1] - (double)fVar12);
  pFVar7 = GetGridSampleInternal(this,(int)auVar11._0_8_);
  fVar4 = __real_3f800000;
  FVar2 = (param_2->AllocatorInstance).SecondaryData;
  if (pFVar7 == (FEditorElement *)0x0) {
    local_d0 = 0xffffffffffffffff;
    uStack_c8 = 0xffffffff;
    FVar8 = (ForElementType<FGridBlendSample>)param_2;
    if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
      FVar8 = FVar2;
    }
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    if ((ulonglong)FVar8 <= &local_d0) {
      FVar8 = (ForElementType<FGridBlendSample>)param_2;
      if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
        FVar8 = FVar2;
      }
      if (&local_d0 < (undefined8 *)((longlong)param_2->ArrayMax * 0x1c + (longlong)FVar8)) {
        local_100 = (longlong)param_2->ArrayNum;
        local_f8 = 0x1c;
        local_110 = (ForElementType<FGridBlendSample>)param_2;
        if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
          local_110 = FVar2;
        }
        local_118 = &local_d0;
        local_108 = (longlong)param_2->ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGridBlendSample>_>
                        (0x41c,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<FGridBlendSample>)param_2;
    if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
      FVar8 = FVar2;
    }
    lVar9 = (longlong)iVar6 * 0x1c;
    *(undefined8 *)(lVar9 + (longlong)FVar8) = local_d0;
    ((undefined8 *)(lVar9 + (longlong)FVar8))[1] = CONCAT44(uStack_c4,uStack_c8);
    *(ulonglong *)(lVar9 + 0x10 + (longlong)FVar8) = CONCAT44(uStack_bc,uStack_c0);
    *(undefined4 *)(lVar9 + 0x18 + (longlong)FVar8) = uStack_b8;
  }
  else {
    local_90 = *(undefined8 *)pFVar7->Indices;
    uStack_88 = *(undefined8 *)(pFVar7->Indices + 2);
    local_80 = *(undefined8 *)(pFVar7->Weights + 1);
    FVar8 = (ForElementType<FGridBlendSample>)param_2;
    if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
      FVar8 = FVar2;
    }
    local_78 = __real_3f800000 - fVar13;
    if ((ulonglong)FVar8 <= &local_90) {
      FVar8 = (ForElementType<FGridBlendSample>)param_2;
      if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
        FVar8 = FVar2;
      }
      if (&local_90 < (undefined8 *)((longlong)param_2->ArrayMax * 0x1c + (longlong)FVar8)) {
        local_100 = (longlong)param_2->ArrayNum;
        local_f8 = 0x1c;
        local_110 = (ForElementType<FGridBlendSample>)param_2;
        if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
          local_110 = FVar2;
        }
        local_118 = &local_90;
        local_108 = (longlong)param_2->ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGridBlendSample>_>
                        (0x41c,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<FGridBlendSample>)param_2;
    if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
      FVar8 = FVar2;
    }
    lVar9 = (longlong)iVar6 * 0x1c;
    *(undefined8 *)(lVar9 + (longlong)FVar8) = local_90;
    ((undefined8 *)(lVar9 + (longlong)FVar8))[1] = uStack_88;
    *(undefined8 *)(lVar9 + 0x10 + (longlong)FVar8) = local_80;
    *(float *)(lVar9 + 0x18 + (longlong)FVar8) = local_78;
  }
  piVar10 = &param_2->ArrayMax;
  pFVar7 = GetGridSampleInternal(this,(int)(fVar12 + fVar4));
  if (pFVar7 == (FEditorElement *)0x0) {
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    local_b0 = 0xffffffffffffffff;
    uStack_a8 = 0xffffffff;
    FVar8 = (ForElementType<FGridBlendSample>)param_2;
    if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
      FVar8 = FVar2;
    }
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    fStack_98 = 0.0;
    if ((ulonglong)FVar8 <= &local_b0) {
      FVar8 = (ForElementType<FGridBlendSample>)param_2;
      if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
        FVar8 = FVar2;
      }
      if (&local_b0 < (undefined8 *)((longlong)*piVar10 * 0x1c + (longlong)FVar8)) {
        local_100 = (longlong)param_2->ArrayNum;
        local_f8 = 0x1c;
        local_110 = (ForElementType<FGridBlendSample>)param_2;
        if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
          local_110 = FVar2;
        }
        local_118 = &local_b0;
        local_108 = (longlong)*piVar10;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == *piVar10) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGridBlendSample>_>
                        (0x41c,&param_2->AllocatorInstance,piVar10);
      param_2->ArrayNum = iVar6;
    }
    param_2->ArrayNum = iVar6 + 1;
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
      param_2 = (TArray<FGridBlendSample,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
                )FVar2;
    }
    lVar9 = (longlong)iVar6 * 0x1c;
    *(undefined8 *)(lVar9 + (longlong)param_2) = local_b0;
    ((undefined8 *)(lVar9 + (longlong)param_2))[1] = CONCAT44(uStack_a4,uStack_a8);
    *(ulonglong *)(lVar9 + 0x10 + (longlong)param_2) = CONCAT44(uStack_9c,uStack_a0);
    local_58 = fStack_98;
  }
  else {
    local_70 = *(undefined8 *)pFVar7->Indices;
    uStack_68 = *(undefined8 *)(pFVar7->Indices + 2);
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    local_60 = *(undefined8 *)(pFVar7->Weights + 1);
    FVar8 = (ForElementType<FGridBlendSample>)param_2;
    if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
      FVar8 = FVar2;
    }
    local_58 = fVar13;
    if ((ulonglong)FVar8 <= &local_70) {
      FVar8 = (ForElementType<FGridBlendSample>)param_2;
      if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
        FVar8 = FVar2;
      }
      if (&local_70 < (undefined8 *)((longlong)param_2->ArrayMax * 0x1c + (longlong)FVar8)) {
        local_100 = (longlong)param_2->ArrayNum;
        local_f8 = 0x1c;
        local_118 = &local_70;
        local_110 = (ForElementType<FGridBlendSample>)param_2;
        if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
          local_110 = FVar2;
        }
        local_108 = (longlong)param_2->ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == *piVar10) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGridBlendSample>_>
                        (0x41c,&param_2->AllocatorInstance,piVar10);
      param_2->ArrayNum = iVar6;
    }
    param_2->ArrayNum = iVar6 + 1;
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FGridBlendSample>)0x0) {
      param_2 = (TArray<FGridBlendSample,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
                )FVar2;
    }
    lVar9 = (longlong)iVar6 * 0x1c;
    *(undefined8 *)(lVar9 + (longlong)param_2) = local_70;
    ((undefined8 *)(lVar9 + (longlong)param_2))[1] = uStack_68;
    *(undefined8 *)(lVar9 + 0x10 + (longlong)param_2) = local_60;
  }
  *(float *)(lVar9 + 0x18 + (longlong)param_2) = local_58;
  return;
}

// GetRawSamplesFromBlendInput2D @ 14755fa40

void __thiscall
UBlendSpace::GetRawSamplesFromBlendInput2D
          (UBlendSpace *this,TVector<double> *param_1,
          TArray<FGridBlendSample,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_2
          )

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<FGridBlendSample> FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  FEditorElement *pFVar12;
  ForElementType<FGridBlendSample> FVar13;
  ForElementType<FGridBlendSample> FVar14;
  ForElementType<FGridBlendSample> FVar15;
  float fVar16;
  double dVar17;
  undefined1 unaff_XMM11 [16];
  double dVar18;
  undefined1 unaff_XMM12 [16];
  undefined1 auVar19 [16];
  TVector<double>_u_0 local_c8;
  
  if ((this->DimensionIndices).ArrayNum != 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("DimensionIndices.Num() == 2",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                        ,0x97d,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar1 = &param_2->ArrayNum;
  *piVar1 = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGridBlendSample>_>
              (0x1c,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGridBlendSample>_>
            (0x1c,4,4,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  if (*piVar1 < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  FVar13 = (ForElementType<FGridBlendSample>)param_2;
  if (FVar3 != (ForElementType<FGridBlendSample>)0x0) {
    FVar13 = FVar3;
  }
  if (*piVar1 < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  FVar14 = (ForElementType<FGridBlendSample>)param_2;
  if (FVar3 != (ForElementType<FGridBlendSample>)0x0) {
    FVar14 = FVar3;
  }
  if (*piVar1 < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  FVar15 = (ForElementType<FGridBlendSample>)param_2;
  if (FVar3 != (ForElementType<FGridBlendSample>)0x0) {
    FVar15 = FVar3;
  }
  if (*piVar1 < 4) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<FGridBlendSample>)0x0) {
    param_2 = (TArray<FGridBlendSample,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
              FVar3;
  }
  ConvertBlendInputToGridSpace(this,(TVector<double> *)&local_c8._s_0,param_1);
  dVar10 = __real_3ff0000000000000;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = local_c8._s_0.Y;
  auVar19 = roundpd(unaff_XMM12,auVar19,3);
  dVar18 = auVar19._0_8_;
  dVar7 = local_c8._s_0.Y - dVar18;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_c8._s_0.X;
  auVar19 = roundpd(unaff_XMM11,auVar5,3);
  dVar17 = auVar19._0_8_;
  dVar8 = local_c8._s_0.X - dVar17;
  dVar6 = dVar18 + __real_3ff0000000000000;
  pFVar12 = GetGridSampleInternal
                      (this,(this->BlendParameters[0].GridNum + 1) * (int)dVar6 + (int)dVar17);
  if (pFVar12 == (FEditorElement *)0x0) {
    puVar2 = (uchar *)((longlong)FVar15 + 0x38);
    puVar2[0] = 0xff;
    puVar2[1] = 0xff;
    puVar2[2] = 0xff;
    puVar2[3] = 0xff;
    puVar2[4] = 0xff;
    puVar2[5] = 0xff;
    puVar2[6] = 0xff;
    puVar2[7] = 0xff;
    puVar2 = (uchar *)((longlong)FVar15 + 0x40);
    puVar2[0] = 0xff;
    puVar2[1] = 0xff;
    puVar2[2] = 0xff;
    puVar2[3] = 0xff;
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    puVar2 = (uchar *)((longlong)FVar15 + 0x48);
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    fVar16 = 0.0;
  }
  else {
    uVar9 = *(undefined8 *)(pFVar12->Indices + 2);
    *(undefined8 *)((longlong)FVar15 + 0x38) = *(undefined8 *)pFVar12->Indices;
    *(undefined8 *)((longlong)FVar15 + 0x40) = uVar9;
    *(undefined8 *)((longlong)FVar15 + 0x48) = *(undefined8 *)(pFVar12->Weights + 1);
    fVar16 = (float)((dVar10 - dVar8) * dVar7);
  }
  *(float *)((longlong)FVar15 + 0x50) = fVar16;
  pFVar12 = GetGridSampleInternal
                      (this,(this->BlendParameters[0].GridNum + 1) * (int)dVar6 +
                            (int)(dVar17 + dVar10));
  if (pFVar12 == (FEditorElement *)0x0) {
    puVar2 = (uchar *)((longlong)param_2 + 0x54);
    puVar2[0] = 0xff;
    puVar2[1] = 0xff;
    puVar2[2] = 0xff;
    puVar2[3] = 0xff;
    puVar2[4] = 0xff;
    puVar2[5] = 0xff;
    puVar2[6] = 0xff;
    puVar2[7] = 0xff;
    puVar2 = (uchar *)((longlong)param_2 + 0x5c);
    puVar2[0] = 0xff;
    puVar2[1] = 0xff;
    puVar2[2] = 0xff;
    puVar2[3] = 0xff;
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    puVar2 = (uchar *)((longlong)param_2 + 100);
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    fVar16 = 0.0;
  }
  else {
    uVar9 = *(undefined8 *)(pFVar12->Indices + 2);
    *(undefined8 *)((longlong)param_2 + 0x54) = *(undefined8 *)pFVar12->Indices;
    *(undefined8 *)((longlong)param_2 + 0x5c) = uVar9;
    *(undefined8 *)((longlong)param_2 + 100) = *(undefined8 *)(pFVar12->Weights + 1);
    fVar16 = (float)(dVar8 * dVar7);
  }
  *(float *)((longlong)param_2 + 0x6c) = fVar16;
  pFVar12 = GetGridSampleInternal
                      (this,(this->BlendParameters[0].GridNum + 1) * (int)dVar18 + (int)dVar17);
  if (pFVar12 == (FEditorElement *)0x0) {
    *(undefined8 *)FVar13 = 0xffffffffffffffff;
    puVar2 = (uchar *)((longlong)FVar13 + 8);
    puVar2[0] = 0xff;
    puVar2[1] = 0xff;
    puVar2[2] = 0xff;
    puVar2[3] = 0xff;
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    puVar2 = (uchar *)((longlong)FVar13 + 0x10);
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    fVar16 = 0.0;
  }
  else {
    uVar9 = *(undefined8 *)(pFVar12->Indices + 2);
    *(undefined8 *)FVar13 = *(undefined8 *)pFVar12->Indices;
    *(undefined8 *)((longlong)FVar13 + 8) = uVar9;
    *(undefined8 *)((longlong)FVar13 + 0x10) = *(undefined8 *)(pFVar12->Weights + 1);
    fVar16 = (float)((dVar10 - dVar7) * (dVar10 - dVar8));
  }
  *(float *)((longlong)FVar13 + 0x18) = fVar16;
  pFVar12 = GetGridSampleInternal
                      (this,(this->BlendParameters[0].GridNum + 1) * (int)dVar18 +
                            (int)(dVar17 + dVar10));
  if (pFVar12 == (FEditorElement *)0x0) {
    puVar2 = (uchar *)((longlong)FVar14 + 0x1c);
    puVar2[0] = 0xff;
    puVar2[1] = 0xff;
    puVar2[2] = 0xff;
    puVar2[3] = 0xff;
    puVar2[4] = 0xff;
    puVar2[5] = 0xff;
    puVar2[6] = 0xff;
    puVar2[7] = 0xff;
    puVar2 = (uchar *)((longlong)FVar14 + 0x24);
    puVar2[0] = 0xff;
    puVar2[1] = 0xff;
    puVar2[2] = 0xff;
    puVar2[3] = 0xff;
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    puVar2 = (uchar *)((longlong)FVar14 + 0x2c);
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    puVar2 = (uchar *)((longlong)FVar14 + 0x34);
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
  }
  else {
    uVar9 = *(undefined8 *)(pFVar12->Indices + 2);
    *(undefined8 *)((longlong)FVar14 + 0x1c) = *(undefined8 *)pFVar12->Indices;
    *(undefined8 *)((longlong)FVar14 + 0x24) = uVar9;
    *(undefined8 *)((longlong)FVar14 + 0x2c) = *(undefined8 *)(pFVar12->Weights + 1);
    *(float *)((longlong)FVar14 + 0x34) = (float)((dVar10 - dVar7) * dVar8);
  }
  return;
}

// GetRawSamplesFromBlendInput @ 14755ff10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBlendSpace::GetRawSamplesFromBlendInput
          (UBlendSpace *this,TVector<double> *param_1,
          TArray<FGridBlendSample,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_2
          )

{
  int iVar1;
  
  iVar1 = (this->DimensionIndices).ArrayNum;
  if (iVar1 == 1) {
    GetRawSamplesFromBlendInput1D(this,param_1,param_2);
    return;
  }
  if (iVar1 != 2) {
    if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      return;
    }
    return;
  }
  GetRawSamplesFromBlendInput2D(this,param_1,param_2);
  return;
}

// GetResourceSizeEx @ 147560250

void __thiscall UBlendSpace::GetResourceSizeEx(UBlendSpace *this,FResourceSizeEx *param_1)

{
  UPackage *pUVar1;
  int iVar2;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->SampleData).ArrayMax * 0x30);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->GridSamples).ArrayMax * 0x18);
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBlendSpaceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlendSpaceData,(UObject *)pUVar1,
                         L"BlendSpaceData");
  }
  iVar2 = (int)*(short *)((longlong)
                          &(Z_Registration_Info_UScriptStruct_FBlendSpaceData.OuterSingleton)->
                           _padding_ + 4);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)
                     ((int)(Z_Registration_Info_UScriptStruct_FBlendSpaceData.OuterSingleton)->
                           _padding_ + -1 + iVar2 & -iVar2));
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->BlendSpaceData).Segments.ArrayMax << 4);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->BlendSpaceData).Triangles.ArrayMax * 0xb8);
  return;
}

// GetSamplesFromBlendInput @ 147561910

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UBlendSpace::GetSamplesFromBlendInput
          (UBlendSpace *this,TVector<double> *param_1,
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_2,int *param_3,bool param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  FBlendSampleData *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  FTlsAutoCleanup *pFVar30;
  ulonglong uVar31;
  ForElementType<FGridBlendSample> FVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  longlong lVar40;
  ulonglong uVar41;
  ForAnyElementType FVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  uint local_res8;
  undefined1 local_1f8 [8];
  FScriptContainerElement *local_1f0;
  uint local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  ForElementType<FGridBlendSample> local_1c0;
  TArray<FWeightedBlendSample,TSizedDefaultAllocator<32>_> local_1b8;
  FBlendSampleData local_1a8;
  TVector<double>_u_0 local_148;
  code *local_130;
  undefined1 *local_128;
  FBlendSampleData local_120;
  TVector<double>_u_0 local_c0 [6];
  ulonglong uVar39;
  
  fVar23 = __real_3727c5ac;
  if (this->bInterpolateUsingGrid == false) {
    pFVar4 = (FBlendSampleData *)(param_2->AllocatorInstance).Data;
    if (param_2->ArrayMax < 3) {
      DestructItems<FBlendSampleData,int>(pFVar4,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (param_2->ArrayMax != 3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,3,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      }
    }
    else {
      DestructItems<FBlendSampleData,int>(pFVar4,param_2->ArrayNum);
      param_2->ArrayNum = 0;
    }
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    GetClampedAndWrappedBlendInput(this,(TVector<double> *)&local_c0[0]._s_0,param_1);
    iVar28 = (this->DimensionIndices).ArrayNum;
    dVar7 = (double)this->BlendParameters[0].Min;
    dVar8 = (double)this->BlendParameters[1].Min;
    dVar9 = (double)this->BlendParameters[2].Min;
    local_148._s_0.X =
         ((double)local_c0[0]._0_8_ - dVar7) / ((double)this->BlendParameters[0].Max - dVar7);
    local_148._s_0.Y =
         ((double)local_c0[0]._8_8_ - dVar8) / ((double)this->BlendParameters[1].Max - dVar8);
    local_148._s_0.Z =
         ((double)local_c0[0]._16_8_ - dVar9) / ((double)this->BlendParameters[2].Max - dVar9);
    if (iVar28 == 1) {
      FBlendSpaceData::GetSamples1D
                (&this->BlendSpaceData,&local_1b8,&this->DimensionIndices,
                 (TVector<double> *)&local_148._s_0,param_3);
    }
    else if (iVar28 == 2) {
      FBlendSpaceData::GetSamples2D
                (&this->BlendSpaceData,&local_1b8,&this->DimensionIndices,
                 (TVector<double> *)&local_148._s_0,param_3);
    }
    else {
      if (2 < (byte)LogAnimation._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      }
      if (0x7fffffff < (uint)local_1b8.ArrayMax) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&local_1b8.AllocatorInstance,0,&local_1b8.ArrayMax);
      }
    }
    uVar10 = local_1b8._8_8_;
    uVar31 = (ulonglong)local_1b8.ArrayNum;
    local_res8 = local_1b8.ArrayNum;
    pFVar37 = local_1b8.AllocatorInstance.Data + uVar31 * 8;
    FVar42.Data = local_1b8.AllocatorInstance.Data;
    local_1d8 = pFVar37;
    while( true ) {
      if (local_1b8.ArrayNum != (int)uVar31) {
        local_1f8[0] = 0;
        `TCheckedPointerIterator<FWeightedBlendSample,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1f8);
      }
      if (FVar42.Data == pFVar37) break;
      fVar2 = *(float *)(FVar42.Data + 4);
      if (fVar23 < fVar2) {
        uVar33 = *(uint *)FVar42.Data;
        lVar38 = (longlong)(int)uVar33;
        local_1a8.SamplePlayRate = 0.0;
        local_1a8.Animation.field0_0x0.DebugPtr = (TObjectPtr<UAnimSequence>_u_0)0x0;
        uVar27 = 0;
        if ((int)uVar33 < (this->SampleData).ArrayNum) {
          uVar27 = ~uVar33 >> 0x1f;
        }
        local_1a8.WeightRate = 0.0;
        local_1a8.Time = 0.0;
        local_1a8.PreviousTime = 0.0;
        local_1a8.DeltaTimeRecord.Delta = 0.0;
        local_1a8.DeltaTimeRecord.Previous = 0.0;
        local_1a8.DeltaTimeRecord.bPreviousIsValid = false;
        local_1a8.DeltaTimeRecord._9_3_ = 0;
        local_1a8.MarkerTickRecord.PreviousMarker.MarkerIndex = -2;
        local_1a8.MarkerTickRecord.NextMarker.MarkerIndex = -2;
        local_1a8.PerBoneBlendData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.PerBoneBlendData.ArrayNum = 0;
        local_1a8.PerBoneBlendData.ArrayMax = 0;
        local_1a8.PerBoneWeightRate.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.PerBoneWeightRate.ArrayNum = 0;
        local_1a8.PerBoneWeightRate.ArrayMax = 0;
        local_1a8.SampleDataIndex = uVar33;
        local_1a8.TotalWeight = fVar2;
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar6 = (code *)swi(3);
          uVar26 = (*pcVar6)();
          return (bool)uVar26;
        }
        local_1f0 = (this->SampleData).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)(local_1f0 + lVar38 * 0x30) != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)(local_1f0 + lVar38 * 0x30));
        }
        local_1a8.Animation.field0_0x0 =
             *(TObjectPtr<UAnimSequence>_u_0 *)(local_1f0 + lVar38 * 0x30);
        uVar27 = 0;
        if ((int)uVar33 < (this->SampleData).ArrayNum) {
          uVar27 = ~uVar33 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar6 = (code *)swi(3);
          uVar26 = (*pcVar6)();
          return (bool)uVar26;
        }
        piVar1 = &param_2->ArrayMax;
        pFVar4 = (FBlendSampleData *)(param_2->AllocatorInstance).Data;
        local_1a8.SamplePlayRate =
             *(float *)((this->SampleData).AllocatorInstance.Data + lVar38 * 0x30 + 0x20);
        if (((pFVar4 <= &local_1a8) && (&local_1a8 < pFVar4 + *piVar1)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar6 = (code *)swi(3);
          uVar26 = (*pcVar6)();
          return (bool)uVar26;
        }
        iVar28 = param_2->ArrayNum;
        if (iVar28 == *piVar1) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x860,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar28 + 1;
        FBlendSampleData::FBlendSampleData
                  ((FBlendSampleData *)((param_2->AllocatorInstance).Data + (longlong)iVar28 * 0x60)
                   ,&local_1a8);
        if (local_1a8.PerBoneWeightRate.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.PerBoneWeightRate.AllocatorInstance.Data);
        }
        pFVar37 = local_1d8;
        if (local_1a8.PerBoneBlendData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.PerBoneBlendData.AllocatorInstance.Data);
          pFVar37 = local_1d8;
        }
      }
      uVar31 = uVar10 & 0xffffffff;
      FVar42.Data = FVar42.Data + 8;
    }
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
  }
  else {
    local_128 = &local_1c8;
    local_130 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FBlendSpaceScratchData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar30 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_130,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendSpaceScratchData>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    FVar32 = (ForElementType<FGridBlendSample>)(pFVar30 + 6);
    local_1c0 = FVar32;
    if ((*(int *)(pFVar30 + 0x15) != 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("!RawGridSamples.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                            ,0x52c,L""), bVar25)) {
      pcVar6 = (code *)swi(3);
      uVar26 = (*pcVar6)();
      return (bool)uVar26;
    }
    iVar28 = (this->DimensionIndices).ArrayNum;
    if (iVar28 == 1) {
      GetRawSamplesFromBlendInput1D
                (this,param_1,
                 (TArray<FGridBlendSample,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)FVar32);
    }
    else if (iVar28 == 2) {
      GetRawSamplesFromBlendInput2D
                (this,param_1,
                 (TArray<FGridBlendSample,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)FVar32);
    }
    else if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    }
    piVar1 = &param_2->ArrayMax;
    pFVar4 = (FBlendSampleData *)(param_2->AllocatorInstance).Data;
    if (param_2->ArrayMax < 0) {
      DestructItems<FBlendSampleData,int>(pFVar4,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,0,&param_2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FBlendSampleData,int>(pFVar4,param_2->ArrayNum);
      param_2->ArrayNum = 0;
    }
    uVar33 = *(int *)(pFVar30 + 0x15) * 3;
    if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
    }
    if (*piVar1 < (int)uVar33) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar33,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    iVar28 = *(int *)(pFVar30 + 0x15);
    uVar33 = 0;
    local_res8 = 0;
    if (0 < iVar28) {
      local_1d0 = (FScriptContainerElement *)0x0;
      uVar31 = 0;
      do {
        pFVar37 = local_1d0;
        uVar27 = uVar33;
        if ((int)(uint)uVar31 < iVar28) {
          uVar27 = ~(uint)uVar31 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar6 = (code *)swi(3);
          uVar26 = (*pcVar6)();
          return (bool)uVar26;
        }
        if (*(ForElementType<FGridBlendSample> *)((longlong)FVar32 + 0x70) !=
            (ForElementType<FGridBlendSample>)0x0) {
          FVar32 = *(ForElementType<FGridBlendSample> *)((longlong)FVar32 + 0x70);
        }
        fVar2 = *(float *)(pFVar37 + (longlong)FVar32 + 0x18);
        pFVar37 = pFVar37 + (longlong)FVar32;
        uVar31 = 0;
        local_1f0 = pFVar37;
        do {
          uVar27 = *(uint *)(pFVar37 + uVar31 * 4);
          lVar38 = (longlong)(int)uVar27;
          if ((-1 < (int)uVar27) && ((int)uVar27 < (this->SampleData).ArrayNum)) {
            local_120.SamplePlayRate = 0.0;
            local_120.DeltaTimeRecord.Delta = 0.0;
            local_120.DeltaTimeRecord.Previous = 0.0;
            local_120.DeltaTimeRecord.bPreviousIsValid = false;
            local_120.DeltaTimeRecord._9_3_ = 0;
            local_120.Animation.field0_0x0.DebugPtr = (TObjectPtr<UAnimSequence>_u_0)0x0;
            local_120.TotalWeight = 0.0;
            local_120.WeightRate = 0.0;
            local_120.Time = 0.0;
            local_120.PreviousTime = 0.0;
            local_120.MarkerTickRecord.PreviousMarker.MarkerIndex = -2;
            local_120.MarkerTickRecord.NextMarker.MarkerIndex = -2;
            local_120.PerBoneBlendData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_120.PerBoneBlendData.ArrayNum = 0;
            local_120.PerBoneBlendData.ArrayMax = 0;
            local_120.PerBoneWeightRate.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_120.PerBoneWeightRate.ArrayNum = 0;
            local_120.PerBoneWeightRate.ArrayMax = 0;
            local_120.SampleDataIndex = uVar27;
            uVar43 = TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::
                     AddUniqueImpl<FBlendSampleData>(param_2,&local_120);
            if (local_120.PerBoneWeightRate.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_120.PerBoneWeightRate.AllocatorInstance.Data);
            }
            if (local_120.PerBoneBlendData.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_120.PerBoneBlendData.AllocatorInstance.Data);
            }
            uVar36 = uVar33;
            if ((int)uVar43 < param_2->ArrayNum) {
              uVar36 = ~uVar43 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              uVar26 = (*pcVar6)();
              return (bool)uVar26;
            }
            local_1d8 = (param_2->AllocatorInstance).Data;
            lVar40 = (longlong)(int)uVar43 * 0x60;
            local_1e8 = ~uVar27 >> 0x1f;
            *(float *)(local_1d8 + lVar40 + 0x10) =
                 fVar2 * *(float *)(local_1f0 + uVar31 * 4 + 0xc) +
                 *(float *)(local_1d8 + lVar40 + 0x10);
            uVar43 = uVar33;
            if ((int)uVar27 < (this->SampleData).ArrayNum) {
              uVar43 = local_1e8;
            }
            if ((uVar43 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              uVar26 = (*pcVar6)();
              return (bool)uVar26;
            }
            local_1e0 = (this->SampleData).AllocatorInstance.Data;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (*(UObject **)(local_1e0 + lVar38 * 0x30) != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(*(UObject **)(local_1e0 + lVar38 * 0x30));
            }
            *(undefined8 *)(local_1d8 + lVar40 + 8) = *(undefined8 *)(local_1e0 + lVar38 * 0x30);
            uVar43 = uVar33;
            if ((int)uVar27 < (this->SampleData).ArrayNum) {
              uVar43 = local_1e8;
            }
            if ((uVar43 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              uVar26 = (*pcVar6)();
              return (bool)uVar26;
            }
            *(undefined4 *)(local_1d8 + lVar40 + 0x20) =
                 *(undefined4 *)((this->SampleData).AllocatorInstance.Data + lVar38 * 0x30 + 0x20);
            pFVar37 = local_1f0;
          }
          uVar31 = uVar31 + 1;
        } while ((longlong)uVar31 < 3);
        local_res8 = local_res8 + 1;
        uVar31 = (ulonglong)local_res8;
        local_1d0 = local_1d0 + 0x1c;
        iVar28 = *(int *)((longlong)local_1c0 + 0x78);
        FVar32 = local_1c0;
      } while ((int)local_res8 < iVar28);
    }
    *(undefined4 *)((longlong)FVar32 + 0x78) = 0;
    if (*(int *)((longlong)FVar32 + 0x7c) < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGridBlendSample>_>
                (0x1c,4,0,(ForElementType<FGridBlendSample> *)FVar32,0,
                 (int *)((longlong)FVar32 + 0x7c));
    }
  }
  uVar33 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar24 = __real_3f800000;
  fVar2 = __real_322bcc77;
  uVar31 = 0;
  fVar48 = 0.0;
  uVar43 = 0;
  uVar27 = 0;
  if (param_4) {
    iVar28 = param_2->ArrayNum;
    local_1c0 = (ForElementType<FGridBlendSample>)((ulonglong)local_1c0 & 0xffffffff00000000);
    if (0 < iVar28) {
      local_1d8 = (FScriptContainerElement *)0x0;
      uVar39 = uVar31;
      uVar41 = uVar31;
      do {
        pFVar37 = local_1d8;
        uVar35 = (uint)uVar39;
        uVar36 = uVar43;
        if ((int)uVar35 < iVar28) {
          uVar36 = ~uVar35 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar6 = (code *)swi(3);
          uVar26 = (*pcVar6)();
          return (bool)uVar26;
        }
        local_1f0 = (param_2->AllocatorInstance).Data;
        local_1e0 = pFVar37 + 1;
        iVar28 = param_2->ArrayNum;
        uVar35 = uVar35 + 1;
        uVar39 = uVar41;
        if ((int)uVar35 < iVar28) {
          do {
            pFVar37 = local_1f0;
            uVar34 = uVar39 + 0x60;
            uVar36 = uVar43;
            if ((int)uVar35 < iVar28) {
              uVar36 = ~uVar35 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              uVar26 = (*pcVar6)();
              return (bool)uVar26;
            }
            uVar36 = *(uint *)(pFVar37 + uVar41);
            local_1d0 = (param_2->AllocatorInstance).Data;
            uVar29 = uVar43;
            if ((int)uVar36 < (this->SampleData).ArrayNum) {
              uVar29 = ~uVar36 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              uVar26 = (*pcVar6)();
              return (bool)uVar26;
            }
            if ((this->SampleData).AllocatorInstance.Data[(longlong)(int)uVar36 * 0x30 + 0x24] ==
                (FScriptContainerElement)0x0) {
LAB_1475623a2:
              local_res8 = 0;
            }
            else {
              uVar36 = *(uint *)(local_1d0 + uVar34);
              uVar29 = uVar27;
              if ((int)uVar36 < (this->SampleData).ArrayNum) {
                uVar29 = ~uVar36 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar6 = (code *)swi(3);
                uVar26 = (*pcVar6)();
                return (bool)uVar26;
              }
              local_res8 = 1;
              if ((this->SampleData).AllocatorInstance.Data[(longlong)(int)uVar36 * 0x30 + 0x24] ==
                  (FScriptContainerElement)0x0) goto LAB_1475623a2;
            }
            uVar36 = *(uint *)(local_1f0 + uVar41);
            uVar29 = uVar27;
            if ((int)uVar36 < (this->SampleData).ArrayNum) {
              uVar29 = ~uVar36 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              uVar26 = (*pcVar6)();
              return (bool)uVar26;
            }
            local_1e8 = *(uint *)((this->SampleData).AllocatorInstance.Data +
                                 (longlong)(int)uVar36 * 0x30 + 0x28);
            uVar36 = *(uint *)(local_1d0 + uVar34);
            uVar29 = uVar43;
            if ((int)uVar36 < (this->SampleData).ArrayNum) {
              uVar29 = ~uVar36 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              uVar26 = (*pcVar6)();
              return (bool)uVar26;
            }
            pFVar37 = local_1d0;
            if ((*(int *)(local_1f0 + uVar41) == *(int *)(local_1d0 + uVar34)) ||
               ((((*(longlong *)(local_1f0 + uVar41 + 8) != 0 &&
                  (*(longlong *)(local_1f0 + uVar41 + 8) == *(longlong *)(local_1d0 + uVar39 + 0x68)
                  )) && (local_res8._0_1_ != (FIdentityFunctor)0x0)) &&
                (local_1e8 ==
                 *(uint *)((this->SampleData).AllocatorInstance.Data +
                          (longlong)(int)uVar36 * 0x30 + 0x28))))) {
              fVar46 = *(float *)(local_1f0 + uVar41 + 0x10);
              if (fVar24 <= *(float *)(local_1f0 + uVar41 + 0x10)) {
                fVar46 = fVar24;
              }
              fVar45 = *(float *)(local_1d0 + uVar39 + 0x70);
              if (fVar24 <= *(float *)(local_1d0 + uVar39 + 0x70)) {
                fVar45 = fVar24;
              }
              if (fVar46 <= 0.0) {
                fVar46 = 0.0;
              }
              if (fVar45 <= 0.0) {
                fVar45 = 0.0;
              }
              if (fVar2 < (float)((uint)(fVar46 + fVar45) & uVar33)) {
                if (fVar46 < fVar45) {
                  if ((((longlong)uVar41 < 0) || ((int)uVar35 < 0)) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0xce6,L""), bVar25)) {
                    pcVar6 = (code *)swi(3);
                    uVar26 = (*pcVar6)();
                    return (bool)uVar26;
                  }
                  if (((param_2->ArrayNum <= (int)local_1c0._0_4_) ||
                      (param_2->ArrayNum <= (int)uVar35)) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0xce7,L""), bVar25)) {
                    pcVar6 = (code *)swi(3);
                    uVar26 = (*pcVar6)();
                    return (bool)uVar26;
                  }
                  if (local_1d8 != local_1e0) {
                    pFVar5 = (param_2->AllocatorInstance).Data;
                    uVar10 = *(undefined8 *)(pFVar5 + uVar34 + 8);
                    uVar11 = *(undefined8 *)(pFVar5 + uVar41);
                    uVar12 = *(undefined8 *)(pFVar5 + uVar41 + 8);
                    uVar13 = *(undefined8 *)(pFVar5 + uVar41 + 0x10);
                    uVar14 = *(undefined8 *)(pFVar5 + uVar41 + 0x10 + 8);
                    uVar15 = *(undefined8 *)(pFVar5 + uVar41 + 0x20);
                    uVar16 = *(undefined8 *)(pFVar5 + uVar41 + 0x20 + 8);
                    uVar17 = *(undefined8 *)(pFVar5 + uVar41 + 0x30);
                    uVar18 = *(undefined8 *)(pFVar5 + uVar41 + 0x30 + 8);
                    uVar19 = *(undefined8 *)(pFVar5 + uVar41 + 0x40);
                    uVar20 = *(undefined8 *)(pFVar5 + uVar41 + 0x40 + 8);
                    uVar21 = *(undefined8 *)(pFVar5 + uVar41 + 0x50);
                    uVar22 = *(undefined8 *)(pFVar5 + uVar41 + 0x50 + 8);
                    *(undefined8 *)(pFVar5 + uVar41) = *(undefined8 *)(pFVar5 + uVar34);
                    *(undefined8 *)(pFVar5 + uVar41 + 8) = uVar10;
                    uVar10 = *(undefined8 *)(pFVar5 + uVar39 + 0x70 + 8);
                    *(undefined8 *)(pFVar5 + uVar41 + 0x10) =
                         *(undefined8 *)(pFVar5 + uVar39 + 0x70);
                    *(undefined8 *)(pFVar5 + uVar41 + 0x10 + 8) = uVar10;
                    uVar10 = *(undefined8 *)(pFVar5 + uVar39 + 0x80 + 8);
                    *(undefined8 *)(pFVar5 + uVar41 + 0x20) =
                         *(undefined8 *)(pFVar5 + uVar39 + 0x80);
                    *(undefined8 *)(pFVar5 + uVar41 + 0x20 + 8) = uVar10;
                    uVar10 = *(undefined8 *)(pFVar5 + uVar39 + 0x90 + 8);
                    *(undefined8 *)(pFVar5 + uVar41 + 0x30) =
                         *(undefined8 *)(pFVar5 + uVar39 + 0x90);
                    *(undefined8 *)(pFVar5 + uVar41 + 0x30 + 8) = uVar10;
                    uVar10 = *(undefined8 *)(pFVar5 + uVar39 + 0xa0 + 8);
                    *(undefined8 *)(pFVar5 + uVar41 + 0x40) =
                         *(undefined8 *)(pFVar5 + uVar39 + 0xa0);
                    *(undefined8 *)(pFVar5 + uVar41 + 0x40 + 8) = uVar10;
                    uVar10 = *(undefined8 *)(pFVar5 + uVar39 + 0xb0 + 8);
                    *(undefined8 *)(pFVar5 + uVar41 + 0x50) =
                         *(undefined8 *)(pFVar5 + uVar39 + 0xb0);
                    *(undefined8 *)(pFVar5 + uVar41 + 0x50 + 8) = uVar10;
                    *(undefined8 *)(pFVar5 + uVar34) = uVar11;
                    *(undefined8 *)(pFVar5 + uVar34 + 8) = uVar12;
                    *(undefined8 *)(pFVar5 + uVar39 + 0x70) = uVar13;
                    *(undefined8 *)(pFVar5 + uVar39 + 0x70 + 8) = uVar14;
                    *(undefined8 *)(pFVar5 + uVar39 + 0x80) = uVar15;
                    *(undefined8 *)(pFVar5 + uVar39 + 0x80 + 8) = uVar16;
                    *(undefined8 *)(pFVar5 + uVar39 + 0x90) = uVar17;
                    *(undefined8 *)(pFVar5 + uVar39 + 0x90 + 8) = uVar18;
                    *(undefined8 *)(pFVar5 + uVar39 + 0xa0) = uVar19;
                    *(undefined8 *)(pFVar5 + uVar39 + 0xa0 + 8) = uVar20;
                    *(undefined8 *)(pFVar5 + uVar39 + 0xb0) = uVar21;
                    *(undefined8 *)(pFVar5 + uVar39 + 0xb0 + 8) = uVar22;
                  }
                }
                fVar3 = *(float *)(local_1f0 + uVar41 + 0x10);
                fVar44 = fVar3;
                if (fVar24 <= fVar3) {
                  fVar44 = fVar24;
                }
                fVar47 = *(float *)(pFVar37 + uVar39 + 0x70);
                if (fVar24 <= *(float *)(pFVar37 + uVar39 + 0x70)) {
                  fVar47 = fVar24;
                }
                fVar46 = fVar24 / (fVar46 + fVar45);
                if (fVar44 <= 0.0) {
                  fVar44 = 0.0;
                }
                if (fVar47 <= 0.0) {
                  fVar47 = 0.0;
                }
                *(float *)(local_1f0 + uVar41 + 0x20) =
                     fVar47 * fVar46 * *(float *)(pFVar37 + uVar39 + 0x80) +
                     fVar44 * fVar46 * *(float *)(local_1f0 + uVar41 + 0x20);
                fVar46 = *(float *)(pFVar37 + uVar39 + 0x70);
                if (fVar24 <= *(float *)(pFVar37 + uVar39 + 0x70)) {
                  fVar46 = fVar24;
                }
                if (fVar46 <= 0.0) {
                  fVar46 = 0.0;
                }
                *(float *)(local_1f0 + uVar41 + 0x10) = fVar46 + fVar3;
              }
              uVar36 = uVar43;
              if ((int)uVar35 < param_2->ArrayNum) {
                uVar36 = ~uVar35 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar6 = (code *)swi(3);
                uVar26 = (*pcVar6)();
                return (bool)uVar26;
              }
              TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(param_2,uVar35)
              ;
              uVar35 = uVar35 - 1;
              local_1e0 = local_1e0 + -1;
              uVar34 = uVar39;
            }
            iVar28 = param_2->ArrayNum;
            local_1e0 = local_1e0 + 1;
            uVar35 = uVar35 + 1;
            pFVar37 = local_1d8;
            uVar39 = uVar34;
          } while ((int)uVar35 < iVar28);
        }
        local_1d8 = pFVar37 + 1;
        uVar36 = local_1c0._0_4_ + 1;
        uVar39 = (ulonglong)uVar36;
        uVar41 = uVar41 + 0x60;
        local_1c0._0_4_ = uVar36;
      } while ((int)uVar36 < iVar28);
    }
  }
  AlgoImpl::
  IntroSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,_UBlendSpace::GetSamplesFromBlendInput_::__l2::<lambda_1>_>_>
            ((FBlendSampleData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8._0_1_,(<lambda_1> *)local_1c7);
  iVar28 = param_2->ArrayNum;
  uVar39 = uVar31;
  uVar41 = uVar31;
  uVar34 = uVar31;
  if (0 < iVar28) {
    do {
      uVar35 = (uint)uVar39;
      uVar36 = ~uVar35 >> 0x1f;
      uVar33 = uVar43;
      if ((int)uVar35 < param_2->ArrayNum) {
        uVar33 = uVar36;
      }
      if ((uVar33 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        uVar26 = (*pcVar6)();
        return (bool)uVar26;
      }
      pFVar37 = (param_2->AllocatorInstance).Data + uVar34 + 0x10;
      if (*(float *)pFVar37 <= fVar23 && fVar23 != *(float *)pFVar37) {
        uVar43 = iVar28 - uVar35;
        uVar33 = uVar27;
        if (iVar28 <= param_2->ArrayNum) {
          uVar33 = (~uVar43 & ~uVar35) >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar6 = (code *)swi(3);
          uVar26 = (*pcVar6)();
          return (bool)uVar26;
        }
        if (uVar43 != 0) {
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::RemoveAtImpl(param_2,uVar35,uVar43);
        }
        break;
      }
      uVar33 = uVar43;
      if ((int)uVar35 < param_2->ArrayNum) {
        uVar33 = uVar36;
      }
      if ((uVar33 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        uVar26 = (*pcVar6)();
        return (bool)uVar26;
      }
      uVar41 = uVar41 + 1;
      fVar48 = fVar48 + *(float *)((param_2->AllocatorInstance).Data + uVar34 + 0x10);
      uVar39 = (ulonglong)(uVar35 + 1);
      uVar34 = uVar34 + 0x60;
    } while ((longlong)uVar41 < (longlong)iVar28);
  }
  iVar28 = param_2->ArrayNum;
  if (0 < iVar28) {
    uVar39 = uVar31;
    do {
      uVar43 = (uint)uVar39;
      uVar33 = uVar27;
      if ((int)uVar43 < iVar28) {
        uVar33 = ~uVar43 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        uVar26 = (*pcVar6)();
        return (bool)uVar26;
      }
      pFVar37 = (param_2->AllocatorInstance).Data;
      uVar39 = (ulonglong)(uVar43 + 1);
      *(float *)(pFVar37 + uVar31 + 0x10) = (fVar24 / fVar48) * *(float *)(pFVar37 + uVar31 + 0x10);
      uVar31 = uVar31 + 0x60;
      iVar28 = param_2->ArrayNum;
    } while ((int)(uVar43 + 1) < iVar28);
  }
  return iVar28 != 0;
}

// GetUniqueMarkerNames @ 147563750

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UBlendSpace::GetUniqueMarkerNames(UBlendSpace *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  
  iVar1 = this->SampleIndexWithMarkers;
  if ((iVar1 != -1) && (iVar1 < (this->SampleData).ArrayNum)) {
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar5;
      }
    }
    plVar2 = *(longlong **)((this->SampleData).AllocatorInstance.Data + (longlong)iVar1 * 0x30);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475637d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(**(code **)(*plVar2 + 0x2c8))();
      return pTVar5;
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
}

// InitializeFilter @ 147565a70

void __thiscall UBlendSpace::InitializeFilter(UBlendSpace *this,FBlendFilter *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  float *pfVar16;
  float *pfVar17;
  
  if (param_1 != (FBlendFilter *)0x0) {
    piVar1 = &(param_1->FilterPerAxis).ArrayNum;
    iVar7 = *piVar1;
    if (iVar7 < param_2) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,8,param_2 - iVar7,(ForAnyElementType *)param_1,piVar1,
                          &(param_1->FilterPerAxis).ArrayMax);
      DefaultConstructItems<FFIRFilterTimeBased,int>
                ((param_1->FilterPerAxis).AllocatorInstance.Data + (longlong)iVar11 * 0x38,
                 param_2 - iVar7);
    }
    else {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
      }
      if (param_2 < iVar7) {
        uVar14 = iVar7 - param_2;
        if (((int)(uVar14 | param_2) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (uVar14 != 0) {
          TArray<FFIRFilterTimeBased,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (&param_1->FilterPerAxis,param_2,uVar14);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,(ForAnyElementType *)param_1,*piVar1,&(param_1->FilterPerAxis).ArrayMax)
          ;
        }
      }
    }
    uVar14 = 0;
    if (param_2 != 0) {
      lVar13 = 0;
      pfVar17 = &this->InterpolationParam[0].DampingRatio;
      pfVar16 = &this->BlendParameters[0].Max;
      do {
        uVar12 = 0;
        if ((int)uVar14 < (param_1->FilterPerAxis).ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        bVar10 = *(bool *)((longlong)pfVar16 + 9);
        pFVar8 = (param_1->FilterPerAxis).AllocatorInstance.Data;
        fVar2 = pfVar17[1];
        fVar3 = *pfVar16;
        fVar4 = pfVar16[-1];
        fVar5 = *pfVar17;
        pFVar15 = pFVar8 + lVar13 + 0x28;
        fVar6 = ((FInterpolationParameter *)(pfVar17 + -1))->InterpolationTime;
        *(uint *)(pFVar8 + lVar13 + 4) =
             (uint)((TEnumAsByte<EFilterInterpolationType> *)(pfVar17 + 2))->Value;
        iVar7 = *(int *)(pFVar15 + 0xc);
        *(undefined4 *)&pFVar15[8].field_0x0 = 0;
        if (iVar7 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,(ForAnyElementType *)pFVar15,0,(int *)(pFVar15 + 0xc));
        }
        uVar14 = uVar14 + 1;
        pFVar8[lVar13 + 0x20] = (FScriptContainerElement)(bVar10 == false);
        *(float *)(pFVar8 + lVar13 + 0xc) = fVar6;
        pfVar16 = pfVar16 + 8;
        *(float *)(pFVar8 + lVar13 + 0x10) = fVar5;
        pfVar17 = pfVar17 + 4;
        *(float *)(pFVar8 + lVar13 + 0x14) = fVar4;
        *(float *)(pFVar8 + lVar13 + 0x18) = fVar3;
        *(float *)(pFVar8 + lVar13 + 0x1c) = fVar2;
        *(undefined4 *)(pFVar8 + lVar13 + 8) = 0;
        *(undefined4 *)(pFVar8 + lVar13 + 0x24) = 0;
        *(undefined4 *)(pFVar8 + lVar13) = 0;
        lVar13 = lVar13 + 0x38;
      } while (uVar14 != param_2);
    }
  }
  return;
}

// InitializePerBoneBlend @ 147565d40

void __thiscall UBlendSpace::InitializePerBoneBlend(UBlendSpace *this)

{
  TArray<FPerBoneInterpolation,TSizedDefaultAllocator<32>_> *pTVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  UBlendProfile *pUVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  FName *pFVar15;
  ulonglong uVar16;
  int *piVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined8 local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  float local_88;
  
  pTVar1 = &this->PerBoneBlendValues;
  if (this->PerBoneBlendMode == ManualPerBoneOverride) {
    if (pTVar1 != &this->ManualPerBoneOverrides) {
      iVar12 = (this->ManualPerBoneOverrides).ArrayNum;
      piVar17 = &(this->PerBoneBlendValues).ArrayMax;
      pFVar3 = (this->ManualPerBoneOverrides).AllocatorInstance.Data;
      (this->PerBoneBlendValues).ArrayNum = iVar12;
      if ((iVar12 == 0) && (*piVar17 == 0)) {
        *piVar17 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar12,*piVar17,&pTVar1->AllocatorInstance,iVar12,piVar17);
        if (iVar12 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,pFVar3,(longlong)iVar12 * 0x14);
        }
      }
    }
  }
  else {
    uVar16 = 0;
    piVar17 = &(this->PerBoneBlendValues).ArrayMax;
    (this->PerBoneBlendValues).ArrayNum = 0;
    if (*piVar17 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,&pTVar1->AllocatorInstance,0,piVar17);
    }
    pUVar4 = (this->PerBoneBlendProfile).BlendProfile.field0_0x0.DebugPtr;
    if (pUVar4 != (UBlendProfile *)0x0) {
      iVar12 = (**(code **)(pUVar4->_padding_ + 0x30))(&pUVar4->_padding_);
      fVar10 = __real_3ebc5ab2;
      fVar9 = __real_34000000;
      fVar8 = __real_3f800000;
      local_res10 = (longlong)iVar12;
      uVar19 = uVar16;
      if (0 < iVar12) {
        do {
          uVar18 = (uint)uVar19;
          uVar13 = 0;
          if ((int)uVar18 < (pUVar4->ProfileEntries).ArrayNum) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar3 = (pUVar4->ProfileEntries).AllocatorInstance.Data;
          local_98 = *(undefined8 *)(pFVar3 + uVar16);
          uStack_90 = (*(uint *)(pFVar3 + uVar16 + 8) ^ *(uint *)(pFVar3 + uVar16 + 8)) & 0x7fffffff
                      ^ *(uint *)(pFVar3 + uVar16 + 8);
          uStack_8c = *(undefined4 *)(pFVar3 + uVar16 + 0xc);
          if (this->TargetWeightInterpolationSpeedPerSec <= fVar9) {
            local_88 = 0.0;
          }
          else {
            local_88 = fVar10 / this->TargetWeightInterpolationSpeedPerSec;
          }
          fVar21 = (this->PerBoneBlendProfile).TargetWeightInterpolationSpeedPerSec;
          if (fVar21 <= fVar9) {
            fVar21 = 0.0;
          }
          else {
            fVar21 = fVar10 / fVar21;
          }
          fVar20 = *(float *)(pFVar3 + uVar16 + 0x10);
          if (fVar8 <= *(float *)(pFVar3 + uVar16 + 0x10)) {
            fVar20 = fVar8;
          }
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          local_88 = fVar20 * (fVar21 - local_88) + local_88;
          if (local_88 <= fVar9) {
            local_88 = 0.0;
          }
          else {
            local_88 = fVar10 / local_88;
          }
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 < pFVar3 + (longlong)*piVar17 * 0x14)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = (this->PerBoneBlendValues).ArrayNum;
          if (iVar12 == *piVar17) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x414,&pTVar1->AllocatorInstance,piVar17);
          }
          (this->PerBoneBlendValues).ArrayNum = iVar12 + 1;
          uVar16 = uVar16 + 0x14;
          local_res10 = local_res10 + -1;
          pFVar5 = (pTVar1->AllocatorInstance).Data;
          pFVar3 = pFVar5 + (longlong)iVar12 * 0x14;
          *(undefined8 *)pFVar3 = local_98;
          *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_8c,uStack_90);
          *(float *)(pFVar5 + (longlong)iVar12 * 0x14 + 0x10) = local_88;
          uVar19 = (ulonglong)(uVar18 + 1);
        } while (local_res10 != 0);
        local_res10 = 0;
      }
    }
  }
  piVar17 = &(this->PerBoneBlendValues).ArrayNum;
  lVar6 = this->_padding_;
  iVar12 = *piVar17;
  pFVar15 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar2 = (FName *)((longlong)pFVar15 + (longlong)iVar12 * 0x14);
  while( true ) {
    if (*piVar17 != iVar12) {
      `TCheckedPointerIterator<FPerBoneInterpolation,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar15 == pFVar2) break;
    if ((lVar6 == 0) || (*pFVar15 == (FName)0x0)) {
      pFVar15[1].ComparisonIndex.Value = pFVar15[1].ComparisonIndex.Value | 0x7fffffff;
      pFVar15[1].Number = 0xffffffff;
      pFVar15 = (FName *)&pFVar15[2].Number;
    }
    else {
      uVar13 = 0xffffffff;
      puVar14 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)(lVar6 + 0xd8),*pFVar15);
      if (puVar14 != (uint *)0x0) {
        uVar13 = *puVar14;
      }
      pFVar15[1].Number = 0xffffffff;
      pFVar15[1].ComparisonIndex.Value = uVar13 | 0x80000000;
      pFVar15 = (FName *)&pFVar15[2].Number;
    }
  }
  return;
}

// InterpolateWeightOfSampleData @ 1475689c0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UBlendSpace::InterpolateWeightOfSampleData
          (UBlendSpace *this,float param_1,
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  TObjectPtr<UAnimSequence>_u_0 TVar5;
  void *pvVar6;
  FBlendSampleData *pFVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  ulonglong uVar26;
  int iVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  FDeltaTimeRecord local_2b4;
  FMarkerPair local_2a8;
  FMarkerPair FStack_2a0;
  ForAnyElementType local_298;
  uint local_290;
  uint local_28c;
  ForAnyElementType local_288;
  uint local_280;
  uint local_27c;
  int local_278;
  UAnimSequence *local_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  FDeltaTimeRecord local_254;
  FMarkerPair local_248;
  FMarkerPair FStack_240;
  ForAnyElementType local_238;
  uint local_230;
  uint local_22c;
  ForAnyElementType local_228;
  uint local_220;
  uint local_21c;
  int local_218;
  int local_214;
  FBlendSampleData local_208;
  FBlendSampleData local_1a8;
  FBlendSampleData local_148;
  FScriptContainerElement *local_e8;
  
  fVar9 = __real_3727c5ac;
  iVar13 = 0;
  fVar31 = 0.0;
  fVar32 = 0.0;
  fVar29 = __real_3f800000;
  do {
    iVar27 = 0;
    local_214 = iVar13;
    if ((iVar13 < 0) || (param_2->ArrayNum <= iVar13)) {
      do {
        uVar20 = 0;
        if ((iVar27 < 0) || (param_3->ArrayNum <= iVar27)) {
          if ((fVar9 < fVar32) || (fVar9 < fVar31)) {
            bVar10 = true;
          }
          else {
            bVar10 = false;
          }
          return bVar10;
        }
        if ((iVar27 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        pFVar24 = (param_3->AllocatorInstance).Data;
        lVar19 = (longlong)iVar27 * 0x60;
        local_278 = *(int *)(pFVar24 + lVar19);
        local_270 = *(UAnimSequence **)(pFVar24 + lVar19 + 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_270 != (UAnimSequence *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_270);
        }
        fStack_264 = *(float *)(pFVar24 + lVar19 + 0x14);
        local_268 = *(float *)(pFVar24 + lVar19 + 0x10);
        fStack_260 = *(float *)(pFVar24 + lVar19 + 0x18);
        fStack_25c = *(float *)(pFVar24 + lVar19 + 0x1c);
        local_258 = *(float *)(pFVar24 + lVar19 + 0x20);
        local_254._0_8_ = *(undefined8 *)(pFVar24 + lVar19 + 0x24);
        local_254._8_4_ = *(undefined4 *)(pFVar24 + lVar19 + 0x2c);
        local_248 = *(FMarkerPair *)(pFVar24 + lVar19 + 0x30);
        FStack_240 = ((FMarkerPair *)(pFVar24 + lVar19 + 0x30))[1];
        local_238.Data = (FScriptContainerElement *)0x0;
        local_230 = *(uint *)(pFVar24 + lVar19 + 0x48);
        lVar23 = (longlong)(int)local_230;
        pvVar6 = *(void **)(pFVar24 + lVar19 + 0x40);
        if (local_230 == 0) {
          local_22c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_230,0,&local_238,local_230,(int *)&local_22c);
          memcpy(local_238.Data,pvVar6,lVar23 << 2);
        }
        local_228.Data = (FScriptContainerElement *)0x0;
        local_220 = *(uint *)(pFVar24 + lVar19 + 0x58);
        lVar23 = (longlong)(int)local_220;
        pvVar6 = *(void **)(pFVar24 + lVar19 + 0x50);
        if (local_220 == 0) {
          local_21c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_220,0,&local_228,local_220,(int *)&local_21c);
          memcpy(local_228.Data,pvVar6,lVar23 << 2);
        }
        uVar16 = (this->PerBoneBlendValues).ArrayNum;
        uVar21 = (ulonglong)uVar16;
        uVar26 = uVar20;
        if (local_230 != uVar16) {
          if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar21);
          }
          local_230 = 0;
          uVar15 = uVar20;
          if (local_22c != uVar16) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar16,&local_238,0,(int *)&local_22c);
            uVar15 = (ulonglong)local_230;
          }
          if (0 < (int)uVar16) {
            while( true ) {
              uVar16 = (uint)uVar15;
              if (((local_238.Data <= (FScriptContainerElement *)&local_268) &&
                  ((FScriptContainerElement *)&local_268 <
                   local_238.Data + (longlong)(int)local_22c * 4)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), uVar16 = local_230, bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              if (uVar16 == local_22c) {
                uVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_238,(int *)&local_22c);
              }
              local_230 = uVar16 + 1;
              *(float *)(local_238.Data + (longlong)(int)uVar16 * 4) = local_268;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) break;
              uVar15 = (ulonglong)local_230;
            }
          }
          uVar16 = (this->PerBoneBlendValues).ArrayNum;
          uVar21 = (ulonglong)uVar16;
          if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar21);
          }
          local_220 = 0;
          uVar15 = uVar20;
          if (local_21c != uVar16) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar16,&local_228,0,(int *)&local_21c);
            uVar15 = (ulonglong)local_220;
          }
          if (0 < (int)uVar16) {
            while( true ) {
              uVar16 = (uint)uVar15;
              if (((local_228.Data <= &fStack_264) &&
                  (&fStack_264 < local_228.Data + (longlong)(int)local_21c * 4)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), uVar16 = local_220, bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              if (uVar16 == local_21c) {
                uVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_228,(int *)&local_21c);
              }
              local_220 = uVar16 + 1;
              *(float *)(local_228.Data + (longlong)(int)uVar16 * 4) = fStack_264;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) break;
              uVar15 = (ulonglong)local_220;
            }
          }
        }
        while ((iVar13 = (int)uVar26, -1 < iVar13 && (iVar13 < param_4->ArrayNum))) {
          if ((iVar13 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          if (*(int *)((param_4->AllocatorInstance).Data + (longlong)iVar13 * 0x60) == local_278)
          goto LAB_14756a31d;
          uVar26 = (ulonglong)(iVar13 + 1);
        }
        local_1a8.Animation.field0_0x0.DebugPtr = (TObjectPtr<UAnimSequence>_u_0)local_270;
        local_1a8.SampleDataIndex = local_278;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_270 != (UAnimSequence *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_270);
        }
        FVar14.Data = local_238.Data;
        local_1a8.PreviousTime = fStack_25c;
        local_1a8.Time = fStack_260;
        lVar19 = (longlong)(int)local_230;
        local_1a8.TotalWeight = local_268;
        local_1a8.WeightRate = fStack_264;
        local_1a8.SamplePlayRate = local_258;
        local_1a8.MarkerTickRecord.PreviousMarker = local_248;
        local_1a8.MarkerTickRecord.NextMarker = FStack_240;
        local_1a8.DeltaTimeRecord.Delta = local_254.Delta;
        local_1a8.DeltaTimeRecord.Previous = local_254.Previous;
        local_1a8.DeltaTimeRecord.bPreviousIsValid = local_254.bPreviousIsValid;
        local_1a8.DeltaTimeRecord._9_3_ = local_254._9_3_;
        local_1a8.PerBoneBlendData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.PerBoneBlendData.ArrayNum = local_230;
        if (local_230 == 0) {
          local_1a8.PerBoneBlendData.ArrayMax = 0;
          uVar16 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_230,0,&local_1a8.PerBoneBlendData.AllocatorInstance,local_230,
                     &local_1a8.PerBoneBlendData.ArrayMax);
          memcpy(local_1a8.PerBoneBlendData.AllocatorInstance.Data,FVar14.Data,lVar19 << 2);
          uVar16 = local_230;
        }
        FVar14.Data = local_228.Data;
        lVar19 = (longlong)(int)local_220;
        local_1a8.PerBoneWeightRate.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.PerBoneWeightRate.ArrayNum = local_220;
        if (local_220 == 0) {
          local_1a8.PerBoneWeightRate.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_220,0,&local_1a8.PerBoneWeightRate.AllocatorInstance,local_220,
                     &local_1a8.PerBoneWeightRate.ArrayMax);
          memcpy(local_1a8.PerBoneWeightRate.AllocatorInstance.Data,FVar14.Data,lVar19 << 2);
          uVar16 = local_230;
        }
        local_268 = 0.0;
        fStack_264 = 0.0;
        SmoothWeight(&local_1a8.TotalWeight,&local_1a8.WeightRate,0.0,0.0,local_1a8.TotalWeight,
                     param_1,this->TargetWeightInterpolationSpeedPerSec,
                     this->bTargetWeightInterpolationEaseInOut);
        fVar30 = 0.0;
        uVar26 = uVar20;
        uVar21 = uVar20;
        if (0 < local_1a8.PerBoneBlendData.ArrayNum) {
          do {
            uVar18 = (uint)uVar20;
            uVar25 = 0;
            uVar22 = ~uVar18 >> 0x1f;
            uVar17 = uVar25;
            if ((int)uVar18 < (int)uVar16) {
              uVar17 = uVar22;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar16 = local_230, bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            fVar29 = *(float *)(local_238.Data + uVar21);
            uVar17 = uVar25;
            if ((int)uVar18 < (int)uVar16) {
              uVar17 = uVar22;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            *(undefined4 *)(local_238.Data + uVar21) = 0;
            if ((int)uVar18 < (int)local_220) {
              uVar25 = uVar22;
            }
            if ((uVar25 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            *(undefined4 *)(local_228.Data + uVar21) = 0;
            bVar10 = this->bTargetWeightInterpolationEaseInOut;
            uVar16 = 0;
            if ((int)uVar18 < (this->PerBoneBlendValues).ArrayNum) {
              uVar16 = uVar22;
            }
            if ((uVar16 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            fVar1 = *(float *)((this->PerBoneBlendValues).AllocatorInstance.Data + uVar26 + 0x10);
            uVar16 = 0;
            if ((int)uVar18 < (int)local_220) {
              uVar16 = uVar22;
            }
            if ((uVar16 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            fVar2 = *(float *)(local_228.Data + uVar21);
            uVar16 = 0;
            if ((int)uVar18 < (int)local_230) {
              uVar16 = uVar22;
            }
            if ((uVar16 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            fVar3 = *(float *)(local_238.Data + uVar21);
            uVar16 = 0;
            if ((int)uVar18 < local_1a8.PerBoneWeightRate.ArrayNum) {
              uVar16 = uVar22;
            }
            if ((uVar16 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            pFVar24 = local_1a8.PerBoneWeightRate.AllocatorInstance.Data + (longlong)(int)uVar18 * 4
            ;
            uVar16 = 0;
            if ((int)uVar18 < local_1a8.PerBoneBlendData.ArrayNum) {
              uVar16 = uVar22;
            }
            if ((uVar16 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            SmoothWeight((float *)(local_1a8.PerBoneBlendData.AllocatorInstance.Data +
                                  (longlong)(int)uVar18 * 4),(float *)pFVar24,fVar3,fVar2,fVar29,
                         param_1,fVar1,bVar10);
            uVar16 = 0;
            if ((int)uVar18 < local_1a8.PerBoneBlendData.ArrayNum) {
              uVar16 = uVar22;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            uVar20 = (ulonglong)(uVar18 + 1);
            uVar26 = uVar26 + 0x14;
            fVar30 = fVar30 + *(float *)(local_1a8.PerBoneBlendData.AllocatorInstance.Data + uVar21)
            ;
            uVar21 = uVar21 + 4;
            fVar29 = __real_3f800000;
            uVar16 = local_230;
          } while ((int)(uVar18 + 1) < local_1a8.PerBoneBlendData.ArrayNum);
        }
        if ((fVar9 < local_1a8.TotalWeight) || (fVar9 < fVar30)) {
          pFVar7 = (FBlendSampleData *)(param_4->AllocatorInstance).Data;
          if ((pFVar7 <= &local_1a8) &&
             ((&local_1a8 < pFVar7 + param_4->ArrayMax &&
              (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)))) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          iVar13 = param_4->ArrayNum;
          if (iVar13 == param_4->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x860,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar13 + 1;
          FBlendSampleData::FBlendSampleData
                    ((FBlendSampleData *)
                     ((param_4->AllocatorInstance).Data + (longlong)iVar13 * 0x60),&local_1a8);
          fVar31 = fVar31 + fVar30;
          fVar30 = local_1a8.TotalWeight;
          if (fVar29 <= local_1a8.TotalWeight) {
            fVar30 = fVar29;
          }
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          fVar32 = fVar32 + fVar30;
        }
        if (local_1a8.PerBoneWeightRate.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.PerBoneWeightRate.AllocatorInstance.Data);
        }
        if (local_1a8.PerBoneBlendData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.PerBoneBlendData.AllocatorInstance.Data);
        }
LAB_14756a31d:
        if (local_228.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data);
        }
        if (local_238.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data);
        }
        iVar27 = iVar27 + 1;
      } while( true );
    }
    if ((iVar13 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    pFVar24 = (param_2->AllocatorInstance).Data;
    lVar19 = (longlong)iVar13 * 0x60;
    iVar13 = *(int *)(pFVar24 + lVar19);
    TVar5 = (TObjectPtr<UAnimSequence>_u_0)
            ((TObjectPtr<UAnimSequence>_u_0 *)(pFVar24 + lVar19 + 8))->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar5.DebugPtr != (UAnimSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    local_2c8 = *(float *)(pFVar24 + lVar19 + 0x10);
    fStack_2c4 = *(float *)(pFVar24 + lVar19 + 0x14);
    fStack_2c0 = *(float *)(pFVar24 + lVar19 + 0x18);
    fStack_2bc = *(float *)(pFVar24 + lVar19 + 0x1c);
    local_2b8 = *(float *)(pFVar24 + lVar19 + 0x20);
    local_2b4._0_8_ = *(undefined8 *)(pFVar24 + lVar19 + 0x24);
    local_2b4._8_4_ = *(undefined4 *)(pFVar24 + lVar19 + 0x2c);
    local_2a8 = *(FMarkerPair *)(pFVar24 + lVar19 + 0x30);
    FStack_2a0 = ((FMarkerPair *)(pFVar24 + lVar19 + 0x30))[1];
    local_298.Data = (FScriptContainerElement *)0x0;
    local_290 = *(uint *)(pFVar24 + lVar19 + 0x48);
    lVar23 = (longlong)(int)local_290;
    pvVar6 = *(void **)(pFVar24 + lVar19 + 0x40);
    if (local_290 == 0) {
      local_28c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_290,0,&local_298,local_290,(int *)&local_28c);
      memcpy(local_298.Data,pvVar6,lVar23 << 2);
    }
    local_288.Data = (FScriptContainerElement *)0x0;
    local_280 = *(uint *)(pFVar24 + lVar19 + 0x58);
    lVar23 = (longlong)(int)local_280;
    pvVar6 = *(void **)(pFVar24 + lVar19 + 0x50);
    if (local_280 == 0) {
      local_27c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_280,0,&local_288,local_280,(int *)&local_27c);
      memcpy(local_288.Data,pvVar6,lVar23 << 2);
    }
    uVar16 = (this->PerBoneBlendValues).ArrayNum;
    uVar20 = (ulonglong)uVar16;
    if (local_290 != uVar16) {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar20);
      }
      local_290 = 0;
      if (local_28c != uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar16,&local_298,0,(int *)&local_28c);
      }
      if (0 < (int)uVar16) {
        do {
          if (((local_298.Data <= (FScriptContainerElement *)&local_2c8) &&
              ((FScriptContainerElement *)&local_2c8 < local_298.Data + (longlong)(int)local_28c * 4
              )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          if (local_290 == local_28c) {
            local_290 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_298,(int *)&local_28c);
          }
          lVar19 = (longlong)(int)local_290;
          local_290 = local_290 + 1;
          *(float *)(local_298.Data + lVar19 * 4) = local_2c8;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      uVar16 = (this->PerBoneBlendValues).ArrayNum;
      uVar20 = (ulonglong)uVar16;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar20);
      }
      local_280 = 0;
      if (local_27c != uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar16,&local_288,0,(int *)&local_27c);
      }
      if (0 < (int)uVar16) {
        do {
          if (((local_288.Data <= (FScriptContainerElement *)&fStack_2c4) &&
              ((FScriptContainerElement *)&fStack_2c4 <
               local_288.Data + (longlong)(int)local_27c * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          if (local_280 == local_27c) {
            local_280 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_288,(int *)&local_27c);
          }
          lVar19 = (longlong)(int)local_280;
          local_280 = local_280 + 1;
          *(float *)(local_288.Data + lVar19 * 4) = fStack_2c4;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    for (; (local_218 = iVar27, -1 < iVar27 && (iVar27 < param_3->ArrayNum)); iVar27 = iVar27 + 1) {
      if ((iVar27 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      pFVar24 = (param_3->AllocatorInstance).Data;
      lVar19 = (longlong)iVar27 * 0x60;
      iVar4 = *(int *)(pFVar24 + lVar19);
      local_e8 = pFVar24;
      if (iVar4 == iVar13) {
        local_208.Animation.field0_0x0 =
             (TObjectPtr<UAnimSequence>_u_0)
             ((TObjectPtr<UAnimSequence>_u_0 *)(pFVar24 + lVar19 + 8))->DebugPtr;
        local_208.SampleDataIndex = iVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_208.Animation.field0_0x0.DebugPtr != (TObjectPtr<UAnimSequence>_u_0)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_208.Animation.field0_0x0);
        }
        local_208._16_8_ = *(undefined8 *)(pFVar24 + lVar19 + 0x10);
        local_208._24_8_ = *(undefined8 *)(pFVar24 + lVar19 + 0x10 + 8);
        local_208.DeltaTimeRecord._8_4_ = *(undefined4 *)(pFVar24 + lVar19 + 0x2c);
        local_208.PerBoneBlendData.ArrayNum = *(int *)(pFVar24 + lVar19 + 0x48);
        lVar23 = (longlong)local_208.PerBoneBlendData.ArrayNum;
        local_208.DeltaTimeRecord._0_8_ = *(undefined8 *)(pFVar24 + lVar19 + 0x24);
        pvVar6 = *(void **)(pFVar24 + lVar19 + 0x40);
        local_208.SamplePlayRate = *(float *)(pFVar24 + lVar19 + 0x20);
        local_208.MarkerTickRecord.PreviousMarker = *(FMarkerPair *)(pFVar24 + lVar19 + 0x30);
        local_208.MarkerTickRecord.NextMarker = ((FMarkerPair *)(pFVar24 + lVar19 + 0x30))[1];
        local_208.PerBoneBlendData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_208.PerBoneBlendData.ArrayNum == 0) {
          local_208.PerBoneBlendData.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_208.PerBoneBlendData.ArrayNum,0,
                     &local_208.PerBoneBlendData.AllocatorInstance,
                     local_208.PerBoneBlendData.ArrayNum,&local_208.PerBoneBlendData.ArrayMax);
          memcpy(local_208.PerBoneBlendData.AllocatorInstance.Data,pvVar6,lVar23 << 2);
        }
        local_208.PerBoneWeightRate.ArrayNum = *(int *)(pFVar24 + lVar19 + 0x58);
        lVar23 = (longlong)local_208.PerBoneWeightRate.ArrayNum;
        pvVar6 = *(void **)(pFVar24 + lVar19 + 0x50);
        local_208.PerBoneWeightRate.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_208.PerBoneWeightRate.ArrayNum == 0) {
          local_208.PerBoneWeightRate.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_208.PerBoneWeightRate.ArrayNum,0,
                     &local_208.PerBoneWeightRate.AllocatorInstance,
                     local_208.PerBoneWeightRate.ArrayNum,&local_208.PerBoneWeightRate.ArrayMax);
          memcpy(local_208.PerBoneWeightRate.AllocatorInstance.Data,pvVar6,lVar23 << 2);
        }
        SmoothWeight(&local_208.TotalWeight,&local_208.WeightRate,local_2c8,fStack_2c4,
                     *(float *)(pFVar24 + lVar19 + 0x10),param_1,
                     this->TargetWeightInterpolationSpeedPerSec,
                     this->bTargetWeightInterpolationEaseInOut);
        uVar16 = local_290;
        FVar14.Data = local_298.Data;
        lVar23 = (longlong)(int)local_290;
        local_208.PerBoneBlendData.ArrayNum = local_290;
        if (((local_290 != 0) || (local_208.PerBoneBlendData.ArrayMax != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_290,local_208.PerBoneBlendData.ArrayMax,
                       &local_208.PerBoneBlendData.AllocatorInstance,local_290,
                       &local_208.PerBoneBlendData.ArrayMax), uVar16 != 0)) {
          memcpy(local_208.PerBoneBlendData.AllocatorInstance.Data,FVar14.Data,lVar23 << 2);
        }
        uVar16 = local_280;
        FVar14.Data = local_288.Data;
        lVar23 = (longlong)(int)local_280;
        local_208.PerBoneWeightRate.ArrayNum = local_280;
        if (((local_280 != 0) || (local_208.PerBoneWeightRate.ArrayMax != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_280,local_208.PerBoneWeightRate.ArrayMax,
                       &local_208.PerBoneWeightRate.AllocatorInstance,local_280,
                       &local_208.PerBoneWeightRate.ArrayMax), uVar16 != 0)) {
          memcpy(local_208.PerBoneWeightRate.AllocatorInstance.Data,FVar14.Data,lVar23 << 2);
        }
        uVar16 = 0;
        fVar30 = 0.0;
        if (0 < local_208.PerBoneBlendData.ArrayNum) {
          lVar28 = 0;
          lVar23 = 0;
          do {
            uVar25 = ~uVar16 >> 0x1f;
            bVar10 = this->bTargetWeightInterpolationEaseInOut;
            uVar17 = 0;
            if ((int)uVar16 < (this->PerBoneBlendValues).ArrayNum) {
              uVar17 = uVar25;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            fVar29 = *(float *)(pFVar24 + lVar19 + 0x10);
            fVar1 = *(float *)((this->PerBoneBlendValues).AllocatorInstance.Data + lVar23 + 0x10);
            uVar17 = 0;
            if ((int)uVar16 < (int)local_280) {
              uVar17 = uVar25;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            fVar2 = *(float *)(local_288.Data + lVar28);
            uVar17 = 0;
            if ((int)uVar16 < (int)local_290) {
              uVar17 = uVar25;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            fVar3 = *(float *)(local_298.Data + lVar28);
            uVar17 = 0;
            if ((int)uVar16 < local_208.PerBoneWeightRate.ArrayNum) {
              uVar17 = uVar25;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            pFVar24 = local_208.PerBoneWeightRate.AllocatorInstance.Data + (longlong)(int)uVar16 * 4
            ;
            uVar17 = 0;
            if ((int)uVar16 < local_208.PerBoneBlendData.ArrayNum) {
              uVar17 = uVar25;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            SmoothWeight((float *)(local_208.PerBoneBlendData.AllocatorInstance.Data +
                                  (longlong)(int)uVar16 * 4),(float *)pFVar24,fVar3,fVar2,fVar29,
                         param_1,fVar1,bVar10);
            uVar17 = 0;
            if ((int)uVar16 < local_208.PerBoneBlendData.ArrayNum) {
              uVar17 = uVar25;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            uVar16 = uVar16 + 1;
            lVar23 = lVar23 + 0x14;
            fVar30 = fVar30 + *(float *)(local_208.PerBoneBlendData.AllocatorInstance.Data + lVar28)
            ;
            lVar28 = lVar28 + 4;
            pFVar24 = local_e8;
            iVar27 = local_218;
          } while ((int)uVar16 < local_208.PerBoneBlendData.ArrayNum);
        }
        if ((fVar9 < local_208.TotalWeight) || (fVar9 < fVar30)) {
          pFVar7 = (FBlendSampleData *)(param_4->AllocatorInstance).Data;
          if ((pFVar7 <= &local_208) &&
             ((&local_208 < pFVar7 + param_4->ArrayMax &&
              (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)))) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          iVar13 = param_4->ArrayNum;
          if (iVar13 == param_4->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x860,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar13 + 1;
          FBlendSampleData::FBlendSampleData
                    ((FBlendSampleData *)
                     ((param_4->AllocatorInstance).Data + (longlong)iVar13 * 0x60),&local_208);
          fVar29 = __real_3f800000;
          fVar31 = fVar31 + fVar30;
          fVar30 = local_208.TotalWeight;
          if (__real_3f800000 <= local_208.TotalWeight) {
            fVar30 = __real_3f800000;
          }
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          fVar32 = fVar32 + fVar30;
          FVar14.Data = local_208.PerBoneBlendData.AllocatorInstance.Data;
          if (local_208.PerBoneWeightRate.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_208.PerBoneWeightRate.AllocatorInstance.Data);
            FVar14.Data = local_208.PerBoneBlendData.AllocatorInstance.Data;
          }
          goto LAB_1475698f5;
        }
        if (local_208.PerBoneWeightRate.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.PerBoneWeightRate.AllocatorInstance.Data);
        }
        if (local_208.PerBoneBlendData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.PerBoneBlendData.AllocatorInstance.Data);
        }
      }
    }
    local_148.SampleDataIndex = iVar13;
    local_148.Animation.field0_0x0 = TVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar5.DebugPtr != (UAnimSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    FVar14.Data = local_298.Data;
    lVar19 = (longlong)(int)local_290;
    uVar20 = 0;
    local_148.WeightRate = fStack_2c4;
    local_148.TotalWeight = local_2c8;
    local_148.PreviousTime = fStack_2bc;
    local_148.Time = fStack_2c0;
    local_148.SamplePlayRate = local_2b8;
    local_148.MarkerTickRecord.PreviousMarker = local_2a8;
    local_148.MarkerTickRecord.NextMarker = FStack_2a0;
    local_148.DeltaTimeRecord.Delta = local_2b4.Delta;
    local_148.DeltaTimeRecord.Previous = local_2b4.Previous;
    local_148.DeltaTimeRecord.bPreviousIsValid = local_2b4.bPreviousIsValid;
    local_148.DeltaTimeRecord._9_3_ = local_2b4._9_3_;
    local_148.PerBoneBlendData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.PerBoneBlendData.ArrayNum = local_290;
    if (local_290 == 0) {
      local_148.PerBoneBlendData.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_290,0,&local_148.PerBoneBlendData.AllocatorInstance,local_290,
                 &local_148.PerBoneBlendData.ArrayMax);
      memcpy(local_148.PerBoneBlendData.AllocatorInstance.Data,FVar14.Data,lVar19 << 2);
    }
    FVar14.Data = local_288.Data;
    lVar19 = (longlong)(int)local_280;
    local_148.PerBoneWeightRate.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.PerBoneWeightRate.ArrayNum = local_280;
    if (local_280 == 0) {
      local_148.PerBoneWeightRate.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_280,0,&local_148.PerBoneWeightRate.AllocatorInstance,local_280,
                 &local_148.PerBoneWeightRate.ArrayMax);
      memcpy(local_148.PerBoneWeightRate.AllocatorInstance.Data,FVar14.Data,lVar19 << 2);
    }
    SmoothWeight(&local_148.TotalWeight,&local_148.WeightRate,local_2c8,fStack_2c4,0.0,param_1,
                 this->TargetWeightInterpolationSpeedPerSec,
                 this->bTargetWeightInterpolationEaseInOut);
    fVar29 = 0.0;
    uVar26 = uVar20;
    uVar21 = uVar20;
    if (0 < local_148.PerBoneBlendData.ArrayNum) {
      do {
        bVar10 = this->bTargetWeightInterpolationEaseInOut;
        uVar17 = (uint)uVar20;
        uVar25 = ~uVar17 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar17 < (this->PerBoneBlendValues).ArrayNum) {
          uVar16 = uVar25;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        fVar30 = *(float *)((this->PerBoneBlendValues).AllocatorInstance.Data + uVar26 + 0x10);
        uVar16 = 0;
        if ((int)uVar17 < (int)local_280) {
          uVar16 = uVar25;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        fVar1 = *(float *)(local_288.Data + uVar21);
        uVar16 = 0;
        if ((int)uVar17 < (int)local_290) {
          uVar16 = uVar25;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        fVar2 = *(float *)(local_298.Data + uVar21);
        uVar16 = 0;
        if ((int)uVar17 < local_148.PerBoneWeightRate.ArrayNum) {
          uVar16 = uVar25;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        pFVar24 = local_148.PerBoneWeightRate.AllocatorInstance.Data + (longlong)(int)uVar17 * 4;
        uVar16 = 0;
        if ((int)uVar17 < local_148.PerBoneBlendData.ArrayNum) {
          uVar16 = uVar25;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        SmoothWeight((float *)(local_148.PerBoneBlendData.AllocatorInstance.Data +
                              (longlong)(int)uVar17 * 4),(float *)pFVar24,fVar2,fVar1,0.0,param_1,
                     fVar30,bVar10);
        uVar16 = 0;
        if ((int)uVar17 < local_148.PerBoneBlendData.ArrayNum) {
          uVar16 = uVar25;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        uVar20 = (ulonglong)(uVar17 + 1);
        fVar29 = fVar29 + *(float *)(local_148.PerBoneBlendData.AllocatorInstance.Data + uVar21);
        uVar26 = uVar26 + 0x14;
        uVar21 = uVar21 + 4;
      } while ((int)(uVar17 + 1) < local_148.PerBoneBlendData.ArrayNum);
    }
    if ((fVar9 < local_148.TotalWeight) || (fVar9 < fVar29)) {
      pFVar7 = (FBlendSampleData *)(param_4->AllocatorInstance).Data;
      if ((pFVar7 <= &local_148) &&
         ((&local_148 < pFVar7 + param_4->ArrayMax &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)))) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      iVar13 = param_4->ArrayNum;
      if (iVar13 == param_4->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar13 + 1;
      FBlendSampleData::FBlendSampleData
                ((FBlendSampleData *)((param_4->AllocatorInstance).Data + (longlong)iVar13 * 0x60),
                 &local_148);
      fVar31 = fVar31 + fVar29;
      fVar29 = local_148.TotalWeight;
      if (__real_3f800000 <= local_148.TotalWeight) {
        fVar29 = __real_3f800000;
      }
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      fVar32 = fVar32 + fVar29;
    }
    fVar29 = __real_3f800000;
    FVar14.Data = local_148.PerBoneBlendData.AllocatorInstance.Data;
    if (local_148.PerBoneWeightRate.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.PerBoneWeightRate.AllocatorInstance.Data);
      FVar14.Data = local_148.PerBoneBlendData.AllocatorInstance.Data;
    }
LAB_1475698f5:
    if (FVar14.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar14.Data);
    }
    if (local_288.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data);
    }
    if (local_298.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data);
    }
    iVar13 = local_214 + 1;
  } while( true );
}

// IsSameSamplePoint @ 14756adb0

bool __thiscall
UBlendSpace::IsSameSamplePoint(UBlendSpace *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  if ((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      (dVar1 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y,
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     (dVar1 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z,
     (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return true;
  }
  return false;
}

// IsValidAdditive @ 14756b4e0

bool __thiscall UBlendSpace::IsValidAdditive(UBlendSpace *this)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SampleData).ArrayNum;
  pFVar6 = (this->SampleData).AllocatorInstance.Data;
  bVar3 = true;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->SampleData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FBlendSample_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) break;
    plVar2 = *(longlong **)pFVar6;
    if ((this->SampleData).ArrayNum < 2) {
      if (plVar2 != (longlong *)0x0) goto LAB_14756b547;
LAB_14756b564:
      bVar4 = 0;
    }
    else {
      if (plVar2 != (longlong *)0x0) {
LAB_14756b547:
        cVar5 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
        if ((cVar5 == '\0') || ((char)plVar2[0x29] != '\x01')) goto LAB_14756b564;
      }
      bVar4 = 1;
    }
    bVar3 = (bool)(bVar3 & bVar4);
    if (!bVar3) goto LAB_14756b583;
    pFVar6 = pFVar6 + 0x30;
  }
  if ((bVar3) && (0 < (this->SampleData).ArrayNum)) {
    return true;
  }
LAB_14756b583:
  iVar1 = (this->SampleData).ArrayNum;
  bVar3 = true;
  pFVar6 = (this->SampleData).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x30;
  do {
    if ((this->SampleData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FBlendSample_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) {
      if ((bVar3) && (0 < (this->SampleData).ArrayNum)) {
        return true;
      }
      return false;
    }
    plVar2 = *(longlong **)pFVar6;
    if ((this->SampleData).ArrayNum < 2) {
      if (plVar2 != (longlong *)0x0) goto LAB_14756b5d0;
LAB_14756b5ed:
      bVar4 = 0;
    }
    else {
      if (plVar2 != (longlong *)0x0) {
LAB_14756b5d0:
        cVar5 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
        if ((cVar5 == '\0') || ((char)plVar2[0x29] != '\x02')) goto LAB_14756b5ed;
      }
      bVar4 = 1;
    }
    bVar3 = (bool)(bVar3 & bVar4);
    if (!bVar3) {
      return false;
    }
    pFVar6 = pFVar6 + 0x30;
  } while( true );
}

// IsValidAdditiveType @ 14756b630

bool __thiscall UBlendSpace::IsValidAdditiveType(UBlendSpace *this,EAdditiveAnimationType param_1)

{
  return param_1 < AAT_MAX;
}

// PostLoad @ 147571f00

void __thiscall UBlendSpace::PostLoad(UBlendSpace *this)

{
  UAnimationAsset::PostLoad((UAnimationAsset *)this);
  InitializePerBoneBlend(this);
  return;
}

// ResetBlendSamples @ 147575e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UBlendSpace::ResetBlendSamples
          (UBlendSpace *this,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1,
          float param_2,bool param_3,bool param_4)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [16];
  FMarkerSyncData *pFVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  TArray<FBlendSample,TSizedDefaultAllocator<32>_> *pTVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  float fVar24;
  float fVar25;
  undefined1 extraout_var [12];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 in_XMM2_Db;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined1 auStackY_288 [32];
  longlong local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  TArray<FBlendSample,TSizedDefaultAllocator<32>_> *local_218;
  undefined4 local_210 [2];
  uint local_208;
  FMarkerSyncData local_200;
  longlong local_1e0;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [20];
  undefined1 local_184 [20];
  undefined1 local_170 [24];
  undefined1 local_158;
  undefined4 local_154;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined4 local_e8;
  TArray<FPassedMarker,TSizedDefaultAllocator<32>_> local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined2 local_8f;
  undefined1 local_8d;
  ulonglong local_88;
  ulonglong uVar20;
  
  fVar25 = __real_3f800000;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if ((this->SampleIndexWithMarkers == -1) ||
     ((this->SampleData).ArrayNum <= this->SampleIndexWithMarkers)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  local_1d8 = param_1;
  if (param_3) {
    if (0.0 <= param_2) {
      if (__real_3f800000 < param_2) {
        param_2 = FGenericPlatformMath::Fmod(param_2 - __real_3f800000,__real_3f800000);
        in_XMM2_Db = extraout_var._0_4_;
        in_XMM2_Dc = extraout_var._4_4_;
        in_XMM2_Dd = extraout_var._8_4_;
        if (param_2 == 0.0) {
          in_XMM2_Db = 0;
          in_XMM2_Dc = 0;
          in_XMM2_Dd = 0;
          param_2 = fVar25;
        }
      }
    }
    else {
      in_XMM2_Db = 0;
      in_XMM2_Dc = 0;
      in_XMM2_Dd = 0;
      fVar24 = FGenericPlatformMath::Fmod
                         ((float)((uint)param_2 ^ __xmm_80000000800000008000000080000000),
                          __real_3f800000);
      if (fVar24 == 0.0) {
        in_XMM2_Db = 0;
        in_XMM2_Dc = 0;
        in_XMM2_Dd = 0;
        param_2 = 0.0;
      }
      else {
        param_2 = fVar25 - fVar24;
      }
    }
  }
  else {
    if (__real_3f800000 <= param_2) {
      param_2 = __real_3f800000;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
  }
  pTVar21 = &this->SampleData;
  local_218 = pTVar21;
  if (bVar7) {
    uVar8 = FBlendSpaceUtilities::GetHighestWeightMarkerSyncSample(param_1,pTVar21);
  }
  else {
    uVar8 = 0xffffffff;
  }
  iVar15 = param_1->ArrayNum;
  uVar19 = 0;
  uVar17 = 0;
  uVar9 = 0;
  if (uVar8 == 0xffffffff) {
    uVar20 = uVar19;
    if (0 < iVar15) {
      do {
        uVar17 = (uint)uVar20;
        uVar8 = uVar9;
        if ((int)uVar17 < iVar15) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        *(undefined4 *)(pFVar2 + uVar19 + 0x30) = 0xfffffffe;
        *(undefined4 *)(pFVar2 + uVar19 + 0x38) = 0xfffffffe;
        uVar8 = *(uint *)(pFVar2 + uVar19);
        uVar10 = uVar9;
        if ((int)uVar8 < (this->SampleData).ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar23 = (pTVar21->AllocatorInstance).Data;
        plVar3 = *(longlong **)(pFVar23 + (longlong)(int)uVar8 * 0x30);
        if (plVar3 == (longlong *)0x0) {
          fVar25 = 0.0;
        }
        else if (pFVar23[(longlong)(int)uVar8 * 0x30 + 0x24] == (FScriptContainerElement)0x0) {
          fVar25 = (float)(**(code **)(*plVar3 + 0x2c0))();
        }
        else {
          piVar11 = (int *)(**(code **)(*plVar3 + 0x318))(plVar3,local_1a8);
          fVar25 = (float)piVar11[1] / (float)*piVar11;
        }
        uVar8 = *(uint *)(pFVar2 + uVar19);
        *(float *)(pFVar2 + uVar19 + 0x1c) = param_2 * fVar25;
        uVar10 = uVar9;
        if ((int)uVar8 < (this->SampleData).ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar23 = (pTVar21->AllocatorInstance).Data;
        plVar3 = *(longlong **)(pFVar23 + (longlong)(int)uVar8 * 0x30);
        if (plVar3 == (longlong *)0x0) {
          fVar25 = 0.0;
        }
        else if (pFVar23[(longlong)(int)uVar8 * 0x30 + 0x24] == (FScriptContainerElement)0x0) {
          fVar25 = (float)(**(code **)(*plVar3 + 0x2c0))();
        }
        else {
          piVar11 = (int *)(**(code **)(*plVar3 + 0x318))(plVar3,local_1a0);
          fVar25 = (float)piVar11[1] / (float)*piVar11;
        }
        *(float *)(pFVar2 + uVar19 + 0x18) = param_2 * fVar25;
        uVar19 = uVar19 + 0x60;
        iVar15 = param_1->ArrayNum;
        uVar20 = (ulonglong)(uVar17 + 1);
      } while ((int)(uVar17 + 1) < iVar15);
    }
  }
  else {
    uVar10 = uVar17;
    if ((int)uVar8 < iVar15) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    local_1d0 = (longlong)(int)uVar8;
    lVar18 = local_1d0 * 0x60;
    uVar8 = *(uint *)(pFVar2 + lVar18);
    uVar10 = uVar17;
    if ((int)uVar8 < (this->SampleData).ArrayNum) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar23 = (pTVar21->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x30;
    if ((*(longlong *)pFVar23 == 0) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2561591853375815361>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                           ,0x13f,"LeaderSample.Animation != nullptr"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_a8 = (**(code **)(**(longlong **)(pFVar2 + lVar18 + 8) + 0x2c8))();
    local_148 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dStack_140 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_158 = 0;
    local_154 = 0;
    local_e8 = 0;
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_a0 = 0;
    local_98 = 0;
    local_138 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dStack_130 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_128 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    dStack_120 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_108 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    dStack_100 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_118 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    dStack_110 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_f8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dStack_f0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_8f = 0x101;
    local_90 = 0 < *(int *)(local_a8 + 8);
    local_8d = 0;
    pFVar22 = pFVar2 + lVar18 + 0x30;
    *(undefined4 *)(pFVar22 + 8) = 0xfffffffe;
    *(undefined4 *)pFVar22 = 0xfffffffe;
    plVar3 = *(longlong **)pFVar23;
    if (plVar3 == (longlong *)0x0) {
      fVar25 = 0.0;
    }
    else if (pFVar23[0x24] == (FScriptContainerElement)0x0) {
      fVar25 = (float)(**(code **)(*plVar3 + 0x2c0))();
    }
    else {
      piVar11 = (int *)(**(code **)(*plVar3 + 0x318))(plVar3,local_1c8);
      fVar25 = (float)piVar11[1] / (float)*piVar11;
    }
    *(float *)(pFVar2 + lVar18 + 0x1c) = param_2 * fVar25;
    plVar3 = *(longlong **)pFVar23;
    if (plVar3 == (longlong *)0x0) {
      fVar25 = 0.0;
    }
    else if (pFVar23[0x24] == (FScriptContainerElement)0x0) {
      fVar25 = (float)(**(code **)(*plVar3 + 0x2c0))();
    }
    else {
      piVar11 = (int *)(**(code **)(*plVar3 + 0x318))(plVar3,local_1c0);
      fVar25 = (float)piVar11[1] / (float)*piVar11;
    }
    auVar26._4_4_ = in_XMM2_Db;
    auVar26._0_4_ = param_2;
    auVar26._8_4_ = in_XMM2_Dc;
    auVar26._12_4_ = in_XMM2_Dd;
    auVar27._4_12_ = auVar26._4_12_;
    auVar27._0_4_ = param_2 * fVar25;
    *(float *)(pFVar2 + lVar18 + 0x18) = auVar27._0_4_;
    (**(code **)(**(longlong **)pFVar23 + 0x388))
              (*(longlong **)pFVar23,auVar27._0_8_,param_3,local_a8);
    plVar3 = *(longlong **)pFVar23;
    if (param_4) {
      local_210[0] = 0xfffffffe;
      local_208 = 0xfffffffe;
      (**(code **)(*plVar3 + 0x388))(plVar3,local_210,param_3,local_a8);
      puVar12 = (undefined8 *)
                (**(code **)(**(longlong **)pFVar23 + 0x390))
                          (*(longlong **)pFVar23,local_198,local_210[0],local_208);
      local_d0 = *puVar12;
      uStack_c8 = puVar12[1];
      local_c0 = *(undefined4 *)(puVar12 + 2);
      uVar8 = *(int *)(*(longlong *)(pFVar2 + lVar18 + 8) + 0x180) - 1;
      if ((param_3) && (local_208 == uVar8)) {
        uStack_224 = 0;
        uStack_220 = 0;
        local_228 = 0;
        if ((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_228) &&
           (((FScriptContainerElement *)&local_228 <
             local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 0xc &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = local_e0.ArrayNum;
        if (local_e0.ArrayNum == local_e0.ArrayMax) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
        }
        local_e0.ArrayNum = uVar10 + 1;
        local_1e0 = (longlong)(int)uVar10;
        *(ulonglong *)(local_e0.AllocatorInstance.Data + local_1e0 * 0xc) =
             CONCAT44(uStack_224,local_228);
        *(undefined4 *)(local_e0.AllocatorInstance.Data + local_1e0 * 0xc + 8) = uStack_220;
        lVar16 = *(longlong *)(pFVar2 + lVar18 + 8);
        if ((int)uVar8 < *(int *)(lVar16 + 0x180)) {
          uVar17 = ~uVar8 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar4 = *(undefined8 *)(*(longlong *)(lVar16 + 0x178) + (longlong)(int)uVar8 * 0xc);
        uVar8 = uVar9;
        if ((int)uVar10 < local_e0.ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined8 *)(local_e0.AllocatorInstance.Data + (longlong)(int)uVar10 * 0xc) = uVar4;
        uVar1 = *(undefined4 *)(pFVar2 + lVar18 + 0x18);
        uVar8 = uVar9;
        if ((int)uVar10 < local_e0.ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        lVar16 = (longlong)(int)uVar10;
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , lVar16 = local_1e0, bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar22 = pFVar2 + lVar18 + 0x30;
        *(undefined4 *)(local_e0.AllocatorInstance.Data + lVar16 * 0xc + 8) = uVar1;
      }
    }
    else {
      puVar12 = (undefined8 *)
                (**(code **)(*plVar3 + 0x390))
                          (plVar3,local_184,*(undefined4 *)pFVar22,
                           *(undefined4 *)(pFVar2 + lVar18 + 0x38));
      local_d0 = *puVar12;
      uStack_c8 = puVar12[1];
      local_c0 = *(undefined4 *)(puVar12 + 2);
    }
    pauVar13 = (undefined1 (*) [16])
               (**(code **)(**(longlong **)pFVar23 + 0x390))
                         (*(longlong **)pFVar23,local_170,*(undefined4 *)pFVar22);
    auVar26 = *pauVar13;
    uStack_bc = auVar26._0_4_;
    uStack_b8 = auVar26._4_8_;
    uStack_b0 = auVar26._12_4_;
    uStack_ac = *(undefined4 *)pauVar13[1];
    if (param_4) {
      pFVar14 = (FMarkerSyncData *)(*(longlong *)pFVar23 + 0x178);
      local_200.AuthoredSyncMarkers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.AuthoredSyncMarkers.ArrayNum = 0;
      local_200.AuthoredSyncMarkers.ArrayMax = 0;
      local_200.UniqueMarkerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.UniqueMarkerNames.ArrayNum = 0;
      local_200.UniqueMarkerNames.ArrayMax = 0;
      if (&local_200 != pFVar14) {
        uVar8 = *(uint *)(*(longlong *)pFVar23 + 0x180);
        pFVar23 = (pFVar14->AuthoredSyncMarkers).AllocatorInstance.Data;
        local_200.AuthoredSyncMarkers.ArrayMax = 0;
        local_200.AuthoredSyncMarkers.ArrayNum = uVar8;
        if (uVar8 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar8,0,(ForAnyElementType *)&local_200,uVar8,
                     &local_200.AuthoredSyncMarkers.ArrayMax);
          memcpy(local_200.AuthoredSyncMarkers.AllocatorInstance.Data,pFVar23,
                 (longlong)(int)uVar8 * 0xc);
        }
      }
      FMarkerSyncData::CollectMarkersInRange
                (&local_200,0.0,*(float *)(pFVar2 + lVar18 + 0x18),&local_e0,
                 *(float *)(pFVar2 + lVar18 + 0x18));
      if (local_200.UniqueMarkerNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.UniqueMarkerNames.AllocatorInstance.Data);
      }
      if (local_200.AuthoredSyncMarkers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.AuthoredSyncMarkers.AllocatorInstance.Data);
      }
    }
    fVar25 = __real_3727c5ac;
    iVar15 = local_1d8->ArrayNum;
    if (0 < iVar15) {
      local_230 = 0;
      uVar20 = uVar19;
      do {
        pTVar6 = local_1d8;
        uVar17 = (uint)uVar20;
        uVar8 = uVar9;
        if ((int)uVar17 < iVar15) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (pTVar6->AllocatorInstance).Data;
        uVar8 = *(uint *)(pFVar2 + uVar19);
        uVar10 = uVar9;
        if ((int)uVar8 < pTVar21->ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar23 = (pTVar21->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x30;
        if ((local_1d0 != local_230) && (fVar25 < *(float *)(pFVar2 + uVar19 + 0x10))) {
          pFVar22 = pFVar2 + uVar19 + 0x30;
          if (*(int *)(*(longlong *)pFVar23 + 0x180) == 0) {
            *(undefined4 *)pFVar22 = 0xfffffffe;
            *(undefined4 *)(pFVar2 + uVar19 + 0x38) = 0xfffffffe;
            plVar3 = *(longlong **)pFVar23;
            if (plVar3 == (longlong *)0x0) {
              fVar24 = 0.0;
            }
            else if (pFVar23[0x24] == (FScriptContainerElement)0x0) {
              fVar24 = (float)(**(code **)(*plVar3 + 0x2c0))();
            }
            else {
              piVar11 = (int *)(**(code **)(*plVar3 + 0x318))(plVar3,local_1b8);
              fVar24 = (float)piVar11[1] / (float)*piVar11;
            }
            *(float *)(pFVar2 + uVar19 + 0x1c) = param_2 * fVar24;
            plVar3 = *(longlong **)pFVar23;
            if (plVar3 == (longlong *)0x0) {
              fVar24 = 0.0;
            }
            else if (pFVar23[0x24] == (FScriptContainerElement)0x0) {
              fVar24 = (float)(**(code **)(*plVar3 + 0x2c0))();
            }
            else {
              piVar11 = (int *)(**(code **)(*plVar3 + 0x318))(plVar3,local_1b0);
              fVar24 = (float)piVar11[1] / (float)*piVar11;
            }
            *(float *)(pFVar2 + uVar19 + 0x18) = param_2 * fVar24;
            pTVar21 = local_218;
          }
          else {
            *(undefined4 *)(pFVar2 + uVar19 + 0x1c) = 0;
            *(undefined4 *)(pFVar2 + uVar19 + 0x18) = 0;
            *(undefined4 *)pFVar22 = 0xfffffffe;
            *(undefined4 *)(pFVar2 + uVar19 + 0x38) = 0xfffffffe;
            (**(code **)(**(longlong **)pFVar23 + 0x398))
                      (*(longlong **)pFVar23,&local_d0,param_3,pFVar22);
            pTVar21 = local_218;
            if (param_4) {
              (**(code **)(**(longlong **)pFVar23 + 0x380))
                        (*(longlong **)pFVar23,&local_e0,0,param_3);
              pTVar21 = local_218;
            }
          }
        }
        local_230 = local_230 + 1;
        uVar20 = (ulonglong)(uVar17 + 1);
        uVar19 = uVar19 + 0x60;
        iVar15 = local_1d8->ArrayNum;
      } while ((int)(uVar17 + 1) < iVar15);
    }
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
  }
  return;
}

// ResetToRefPose @ 147576cc0

void __thiscall UBlendSpace::ResetToRefPose(UBlendSpace *this,FCompactPose *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2d0))();
  if (cVar1 != '\0') {
    FCompactPose::ResetToAdditiveIdentity(param_1);
    return;
  }
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)param_1,
             *(FBoneContainer **)&param_1->field_0x10);
  return;
}

// Serialize @ 147578500

void __thiscall UBlendSpace::Serialize(UBlendSpace *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  UAnimationAsset::Serialize((UAnimationAsset *)this,param_1);
  return;
}

// Serialize @ 147578560

void __thiscall UBlendSpace::Serialize(UBlendSpace *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5MainStreamObjectVersion::GUID);
  UAnimationAsset::Serialize((UAnimationAsset *)this,pFVar1);
  return;
}

// StaticRegisterNativesUBlendSpace @ 14757ad20

void __cdecl UBlendSpace::StaticRegisterNativesUBlendSpace(void)

{
  return;
}

// TickAssetPlayer @ 14757baa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBlendSpace::TickAssetPlayer
          (UBlendSpace *this,FAnimTickRecord *param_1,FAnimNotifyQueue *param_2,
          FAnimAssetTickContext *param_3)

{
  undefined1 auVar1 [16];
  uchar uVar2;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  UAnimSequence *pUVar5;
  longlong *plVar6;
  FBlendSampleData *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  FMarkerPair FVar25;
  bool bVar26;
  float fVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  FTlsAutoCleanup *pFVar33;
  int *piVar34;
  TTransform<double> *pTVar35;
  ulonglong uVar36;
  longlong lVar37;
  FDeltaTimeRecord *pFVar38;
  FScriptContainerElement *pFVar39;
  longlong lVar40;
  FScriptContainerElement *pFVar41;
  FBlendSample *this_00;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar42;
  FMarkerPair *pFVar43;
  UAnimSequence *pUVar44;
  int iVar45;
  FMarkerTickRecord *pFVar46;
  ulonglong uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar64;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  uint uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined1 auStackY_418 [32];
  bool local_3d8;
  UAnimSequence *local_3c8;
  undefined1 local_3c0;
  undefined1 local_3bf [3];
  float local_3bc;
  FBlendSample *local_3b8;
  FScriptContainerElement *local_3b0;
  float local_3a8 [2];
  UAnimSequence *local_3a0;
  undefined1 local_398 [4];
  float local_394;
  float local_390 [2];
  UBlendSpace *local_388;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *local_380;
  FAnimNotifyContext local_378;
  TVector<double> local_360;
  FMarkerSyncData local_348;
  FName local_328;
  FName local_320;
  FName local_318;
  FAnimNotifyQueue *local_310;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FName local_268;
  FName local_260;
  FName local_258 [2];
  FAnimExtractContext local_248;
  TVector<double>_u_0 local_1f8;
  code *local_1e0;
  undefined1 *local_1d8;
  undefined2 local_1c7;
  undefined1 local_1c5;
  FName local_1c0;
  FName FStack_1b8;
  float local_1b0;
  FName local_1a8;
  FName FStack_1a0;
  float local_198;
  FName local_190;
  FName FStack_188;
  float local_180;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_388 = this;
  local_310 = param_2;
  if (((param_1->field13_0x40).BlendSpace.BlendSampleDataCache ==
       (TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("Instance.BlendSpace.BlendSampleDataCache",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                          ,0x1e3,L""), bVar28)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1d8 = local_398;
  local_1e0 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FBlendSpaceScratchData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar33 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1e0,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendSpaceScratchData>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  pTVar42 = (TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *)(pFVar33 + 2);
  local_380 = pTVar42;
  if ((*(int *)(pFVar33 + 3) != 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("!OldSampleDataList.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                          ,0x1e7,L""), bVar28)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar3 = (param_1->field13_0x40).BlendSpace.BlendSampleDataCache;
  fVar69 = param_3->DeltaTime;
  if ((param_1->DeltaTimeRecord == (FDeltaTimeRecord *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("Instance.DeltaTimeRecord",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                          ,0x1ed,L""), bVar28)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar48 = __real_3f000000;
  fVar49 = __real_bf000000;
  fVar27 = __real_3f800000;
  pFVar38 = param_1->DeltaTimeRecord;
  if (pFVar38->bPreviousIsValid == false) {
    fVar67 = 0.0;
  }
  else {
    fVar67 = *param_1->TimeAccumulator - pFVar38->Previous;
    if (__real_bf000000 <= fVar67) {
      if ((fVar67 <= __real_3f000000) ||
         (fVar49 = FGenericPlatformMath::Fmod(fVar67 - __real_3f000000,__real_3f800000),
         fVar67 = fVar48, fVar49 == 0.0)) goto LAB_14757bc7a;
      pFVar38 = param_1->DeltaTimeRecord;
      fVar67 = fVar49 - fVar48;
    }
    else {
      fVar48 = FGenericPlatformMath::Fmod(__real_bf000000 - fVar67,__real_3f800000);
      fVar67 = fVar49;
      if (fVar48 == 0.0) {
LAB_14757bc7a:
        pFVar38 = param_1->DeltaTimeRecord;
      }
      else {
        pFVar38 = param_1->DeltaTimeRecord;
        fVar67 = __real_3f000000 - fVar48;
      }
    }
  }
  fVar49 = param_1->PlayRateMultiplier;
  pFVar38->Previous = *param_1->TimeAccumulator;
  pFVar38->Delta = fVar69 * fVar49;
  pFVar38->bPreviousIsValid = true;
  local_1f8._s_0.X = (double)(param_1->field13_0x40).BlendSpace.BlendSpacePositionX;
  local_1f8._s_0.Y = (double)(param_1->field13_0x40).BlendSpace.BlendSpacePositionY;
  local_1f8._s_0.Z = 0.0;
  FilterInput(this,&local_360,(param_1->field13_0x40).BlendSpace.BlendFilter,
              (TVector<double> *)&local_1f8._s_0,fVar69);
  bVar28 = UpdateBlendSamples_Internal
                     (this,&local_360,fVar69,pTVar42,pTVar3,
                      &(param_1->field13_0x40).BlendSpace.TriangulationIndex);
  if (!bVar28) goto LAB_14757d349;
  fVar69 = 0.0;
  if ((0.0 < this->TargetWeightInterpolationSpeedPerSec) &&
     (fVar69 = GetAnimationLengthFromSampleData
                         (this,(param_1->field13_0x40).BlendSpace.BlendSampleDataCache),
     5 < (byte)LogAnimation._0_1_)) {
    ::FString::PrintfImpl(&local_308,L"X=%3.3f Y=%3.3f Z=%3.3f");
    local_268 = (FName)this->_padding_;
    ::FName::ToString(&local_268,&local_2f8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
  }
  fVar49 = ComputeAxisScaleFactor(this,(TVector<double> *)&local_1f8._s_0,&local_360);
  if ((fVar49 != fVar27) &&
     (param_1->DeltaTimeRecord->Delta = fVar49 * param_1->DeltaTimeRecord->Delta,
     5 < (byte)LogAnimation._0_1_)) {
    ::FString::PrintfImpl(&local_2c8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_2d8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    local_260 = (FName)this->_padding_;
    ::FName::ToString(&local_260,&local_2e8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->SampleIndexWithMarkers == -1) ||
     ((param_3->bOnlyOneAnimationInGroup == false &&
      ((param_1->bCanUseMarkerSync == false || (param_3->bIsMarkerPositionValid == false)))))) {
    bVar28 = false;
    bVar26 = false;
  }
  else {
    uVar30 = *(uint *)(pFVar33 + 3);
    uVar36 = (ulonglong)(int)uVar30;
    pUVar44 = (UAnimSequence *)(pTVar42->AllocatorInstance).Data;
    bVar26 = true;
    local_3a0 = (UAnimSequence *)(&pUVar44->_padding_ + uVar36 * 0xc);
    while( true ) {
      pUVar5 = local_3a0;
      if (pTVar42->ArrayNum != (int)uVar36) {
        local_3c0 = 0;
        `TCheckedPointerIterator<FBlendSampleData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3c0);
      }
      if (pUVar44 == pUVar5) break;
      iVar32 = pTVar3->ArrayNum;
      pFVar39 = (pTVar3->AllocatorInstance).Data;
      pFVar41 = pFVar39 + (longlong)iVar32 * 0x60;
      while( true ) {
        if (pTVar3->ArrayNum != iVar32) {
          local_3bf[0] = 0;
          `TCheckedPointerIterator<FBlendSampleData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_3bf);
        }
        if (pFVar39 == pFVar41) break;
        if ((pUVar44->_padding_ != 0) && (pUVar44->_padding_ == *(longlong *)(pFVar39 + 8))) {
          *(int *)(pFVar39 + 0x18) = (int)pUVar44->_padding_;
          *(undefined4 *)(pFVar39 + 0x1c) = *(undefined4 *)((longlong)&pUVar44->_padding_ + 4);
          uVar74 = *(undefined4 *)((longlong)&pUVar44->_padding_ + 4);
          lVar37 = pUVar44->_padding_;
          uVar75 = *(undefined4 *)((longlong)&pUVar44->_padding_ + 4);
          *(int *)(pFVar39 + 0x30) = (int)pUVar44->_padding_;
          *(undefined4 *)(pFVar39 + 0x34) = uVar74;
          *(int *)(pFVar39 + 0x38) = (int)lVar37;
          *(undefined4 *)(pFVar39 + 0x3c) = uVar75;
        }
        pFVar39 = pFVar39 + 0x60;
      }
      pUVar44 = (UAnimSequence *)&pUVar44->_padding_;
      uVar36 = (ulonglong)uVar30;
      pTVar42 = local_380;
    }
    bVar28 = true;
    this = local_388;
  }
  fVar49 = GetAnimationLengthFromSampleData(this,pTVar3);
  if ((0.0 < fVar69) && (0.0 < fVar49)) {
    param_1->DeltaTimeRecord->Delta = (fVar69 / fVar49) * param_1->DeltaTimeRecord->Delta;
  }
  pUVar44 = (UAnimSequence *)param_1->TimeAccumulator;
  if ((param_3->bResyncToSyncGroup != false) && (param_1->bIsEvaluator == false)) {
    *(float *)&pUVar44->_padding_ = param_3->AnimLengthRatio;
  }
  fVar69 = *(float *)&pUVar44->_padding_;
  local_3a0 = pUVar44;
  if (param_3->bIsLeader == false) {
    if (((param_3->MarkerTickContext).MarkerSyncStartPostion.PreviousMarkerName == (FName)0x0) ||
       ((param_3->MarkerTickContext).MarkerSyncStartPostion.NextMarkerName == (FName)0x0)) {
      bVar26 = false;
LAB_14757cbaf:
      fVar69 = param_3->PreviousAnimLengthRatio;
      *(float *)&pUVar44->_padding_ = param_3->AnimLengthRatio;
      if (4 < (byte)LogAnimMarkerSync._0_1_) {
        local_320 = (FName)this->_padding_;
        ::FName::ToString(&local_320,&local_288);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (!bVar28) goto LAB_14757cbaf;
      uVar31 = FBlendSpaceUtilities::GetHighestWeightSample(pTVar3);
      uVar30 = 0;
      if ((int)uVar31 < pTVar3->ArrayNum) {
        uVar30 = ~uVar31 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_3b0 = (pTVar3->AllocatorInstance).Data;
      lVar37 = (longlong)(int)uVar31 * 0x60;
      uVar30 = *(uint *)(local_3b0 + lVar37);
      uVar31 = 0;
      if ((int)uVar30 < (this->SampleData).ArrayNum) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_00 = (FBlendSample *)
                ((this->SampleData).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x30);
      if ((this_00->Animation).field0_0x0.DebugPtr != (UAnimSequence *)0x0) {
        if (param_3->DeltaTime != 0.0) {
          iVar32 = (param_1->bLooping != false) - 2;
          if (((param_1->MarkerTickRecord->PreviousMarker).MarkerIndex <= iVar32) ||
             ((param_1->MarkerTickRecord->NextMarker).MarkerIndex <= iVar32)) {
            fVar49 = *(float *)&pUVar44->_padding_;
            fVar48 = FBlendSample::GetSamplePlayLength(this_00);
            *(float *)(local_3b0 + lVar37 + 0x18) = fVar48 * fVar49;
          }
          TickFollowerSamples(this,pTVar3,-1,param_3,false,param_1->bLooping,
                              param_1->MirrorDataTable);
        }
        pFVar46 = param_1->MarkerTickRecord;
        FVar25 = ((FMarkerPair *)(local_3b0 + lVar37 + 0x30))[1];
        pFVar46->PreviousMarker = *(FMarkerPair *)(local_3b0 + lVar37 + 0x30);
        pFVar46->NextMarker = FVar25;
        pUVar5 = (this_00->Animation).field0_0x0.DebugPtr;
        if (pUVar5 == (UAnimSequence *)0x0) {
          fVar49 = 0.0;
        }
        else {
          lVar40 = pUVar5->_padding_;
          if (this_00->bUseSingleFrameForBlending == false) {
            fVar49 = (float)(**(code **)(lVar40 + 0x2c0))();
          }
          else {
            piVar34 = (int *)(**(code **)(lVar40 + 0x318))();
            fVar49 = (float)piVar34[1] / (float)*piVar34;
          }
        }
        *(float *)&pUVar44->_padding_ = *(float *)(local_3b0 + lVar37 + 0x18) / fVar49;
      }
    }
  }
  else {
    if (5 < (byte)LogAnimation._0_1_) {
      ::FString::PrintfImpl(&local_2a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_258[0] = (FName)this->_padding_;
      ::FName::ToString(local_258,&local_2b8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
    }
    param_3->PreviousAnimLengthRatio = *(float *)&pUVar44->_padding_;
    if (bVar28) {
      uVar30 = FBlendSpaceUtilities::GetHighestWeightMarkerSyncSample(pTVar3,&this->SampleData);
      if (uVar30 == 0xffffffff) goto LAB_14757c87c;
      if (this->bShouldMatchSyncPhases == false) {
        uVar31 = 0;
        if ((int)uVar30 < pTVar3->ArrayNum) {
          uVar31 = ~uVar30 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar39 = (pTVar3->AllocatorInstance).Data;
        lVar37 = (longlong)(int)uVar30 * 0x60;
        uVar31 = *(uint *)(pFVar39 + lVar37);
        uVar66 = 0;
        if ((int)uVar31 < (this->SampleData).ArrayNum) {
          uVar66 = ~uVar31 >> 0x1f;
        }
        local_3b0 = pFVar39;
        if ((uVar66 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_3b8 = (FBlendSample *)
                    ((this->SampleData).AllocatorInstance.Data + (longlong)(int)uVar31 * 0x30);
        local_3a0 = (local_3b8->Animation).field0_0x0.DebugPtr;
        if (local_3a0 != (UAnimSequence *)0x0) {
          local_3d8 = false;
          iVar32 = (param_1->bLooping != false) - 2;
          if ((iVar32 < (param_1->MarkerTickRecord->PreviousMarker).MarkerIndex) &&
             (iVar32 < (param_1->MarkerTickRecord->NextMarker).MarkerIndex)) {
            pFVar46 = (FMarkerTickRecord *)(pFVar39 + lVar37 + 0x30);
            if (((((pFVar46->PreviousMarker).MarkerIndex <= iVar32) ||
                 ((pFVar46->NextMarker).MarkerIndex <= iVar32)) &&
                ((param_3->MarkerTickContext).MarkerSyncStartPostion.PreviousMarkerName !=
                 (FName)0x0)) &&
               ((param_3->MarkerTickContext).MarkerSyncStartPostion.NextMarkerName != (FName)0x0)) {
              (**(code **)(local_3a0->_padding_ + 0x398))
                        (local_3a0,&(param_3->MarkerTickContext).MarkerSyncStartPostion,
                         CONCAT71((int7)((ulonglong)local_3a0 >> 8),1));
              goto LAB_14757c630;
            }
          }
          else {
            *(undefined4 *)(pFVar39 + lVar37 + 0x30) = 0xfffffffe;
            *(undefined4 *)(pFVar39 + lVar37 + 0x38) = 0xfffffffe;
            fVar49 = *(float *)&pUVar44->_padding_;
            fVar48 = FBlendSample::GetSamplePlayLength(local_3b8);
            local_3d8 = true;
            *(float *)(pFVar39 + lVar37 + 0x18) = fVar48 * fVar49;
LAB_14757c630:
            pFVar46 = (FMarkerTickRecord *)(pFVar39 + lVar37 + 0x30);
          }
          fVar49 = param_1->DeltaTimeRecord->Delta * local_3b8->RateScale *
                   *(float *)&((local_3b8->Animation).field0_0x0.DebugPtr)->_padding_;
          param_3->LeaderDelta = fVar49;
          if ((float)((uint)fVar49 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
            iVar32 = (param_1->bLooping != false) - 2;
            if (((param_1->MarkerTickRecord->PreviousMarker).MarkerIndex <= iVar32) ||
               ((param_1->MarkerTickRecord->NextMarker).MarkerIndex <= iVar32)) {
              pUVar5 = (local_3b8->Animation).field0_0x0.DebugPtr;
              (**(code **)(pUVar5->_padding_ + 0x388))
                        (pUVar5,local_3b0,param_1->bLooping,
                         (param_3->MarkerTickContext).ValidMarkers);
              pUVar5 = (local_3b8->Animation).field0_0x0.DebugPtr;
              (**(code **)(pUVar5->_padding_ + 0x390))
                        (pUVar5,&local_190,*(undefined4 *)(local_3b0 + lVar37 + 0x30),
                         *(undefined4 *)(pFVar39 + lVar37 + 0x38));
              (param_3->MarkerTickContext).MarkerSyncStartPostion.PreviousMarkerName = local_190;
              (param_3->MarkerTickContext).MarkerSyncStartPostion.NextMarkerName = FStack_188;
              (param_3->MarkerTickContext).MarkerSyncStartPostion.PositionBetweenMarkers = local_180
              ;
              (param_3->MarkerTickContext).MarkerSyncEndPostion.PreviousMarkerName = local_190;
              (param_3->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName = FStack_188;
              (param_3->MarkerTickContext).MarkerSyncEndPostion.PositionBetweenMarkers = local_180;
              TickFollowerSamples(this,pTVar3,uVar30,param_3,true,param_1->bLooping,
                                  param_1->MirrorDataTable);
              pFVar39 = local_3b0;
            }
          }
          else {
            UAnimSequenceBase::TickByMarkerAsLeader
                      ((UAnimSequenceBase *)(local_3b8->Animation).field0_0x0.DebugPtr,pFVar46,
                       &param_3->MarkerTickContext,(float *)(pFVar39 + lVar37 + 0x18),
                       (float *)(pFVar39 + lVar37 + 0x1c),fVar49,param_1->bLooping,
                       param_1->MirrorDataTable);
            if (((param_1->bLooping != false) &&
                (((param_3->MarkerTickContext).MarkerSyncStartPostion.PreviousMarkerName ==
                  (FName)0x0 ||
                 ((param_3->MarkerTickContext).MarkerSyncStartPostion.NextMarkerName == (FName)0x0))
                )) && (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                          ("!Instance.bLooping || Context.MarkerTickContext.IsMarkerSyncStartValid()"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                                           ,0x2ae,L""), bVar28)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            TickFollowerSamples(this,pTVar3,uVar30,param_3,local_3d8,param_1->bLooping,
                                param_1->MirrorDataTable);
          }
          pUVar5 = (local_3b8->Animation).field0_0x0.DebugPtr;
          if (pUVar5 == (UAnimSequence *)0x0) {
            fVar49 = 0.0;
          }
          else {
            lVar40 = pUVar5->_padding_;
            if (local_3b8->bUseSingleFrameForBlending == false) {
              fVar49 = (float)(**(code **)(lVar40 + 0x2c0))();
            }
            else {
              piVar34 = (int *)(**(code **)(lVar40 + 0x318))();
              fVar49 = (float)piVar34[1] / (float)*piVar34;
            }
          }
          *(float *)&pUVar44->_padding_ = *(float *)(pFVar39 + lVar37 + 0x18) / fVar49;
          pFVar46 = param_1->MarkerTickRecord;
          pFVar39 = pFVar39 + lVar37 + 0x30;
          fVar49 = *(float *)(pFVar39 + 4);
          iVar32 = *(int *)(pFVar39 + 8);
          fVar48 = *(float *)(pFVar39 + 0xc);
          (pFVar46->PreviousMarker).MarkerIndex = *(int *)pFVar39;
          (pFVar46->PreviousMarker).TimeToMarker = fVar49;
          (pFVar46->NextMarker).MarkerIndex = iVar32;
          (pFVar46->NextMarker).TimeToMarker = fVar48;
        }
      }
      else {
        uVar31 = 0;
        if ((int)uVar30 < pTVar3->ArrayNum) {
          uVar31 = ~uVar30 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar39 = (pTVar3->AllocatorInstance).Data;
        pFVar41 = (FScriptContainerElement *)((longlong)(int)uVar30 * 0x60);
        uVar30 = *(uint *)(pFVar41 + (longlong)pFVar39);
        uVar31 = 0;
        if ((int)uVar30 < (this->SampleData).ArrayNum) {
          uVar31 = ~uVar30 >> 0x1f;
        }
        local_3b0 = pFVar41;
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = (this->SampleData).AllocatorInstance.Data;
        lVar37 = (longlong)(int)uVar30 * 0x30;
        if (*(longlong *)(pFVar4 + lVar37) != 0) {
          fVar48 = *(float *)(pFVar4 + lVar37 + 0x20) * param_1->DeltaTimeRecord->Delta *
                   *(float *)(*(longlong *)(pFVar4 + lVar37) + 0xa8);
          param_3->LeaderDelta = fVar48;
          local_394 = fVar49 * *(float *)&pUVar44->_padding_;
          *(float *)(pFVar41 + 0x1c + (longlong)pFVar39) = local_394;
          FAnimationRuntime::AdvanceTime(param_1->bLooping,fVar48,&local_394,fVar49);
          *(float *)(pFVar41 + 0x18 + (longlong)pFVar39) = local_394;
          if (fVar49 == 0.0) {
            fVar49 = 0.0;
          }
          else {
            fVar49 = local_394 / fVar49;
          }
          *(float *)&pUVar44->_padding_ = fVar49;
          pFVar43 = (FMarkerPair *)(pFVar39 + 0x30 + (longlong)pFVar41);
          (**(code **)(**(longlong **)(pFVar4 + lVar37) + 0x388))
                    (*(longlong **)(pFVar4 + lVar37),local_3b0,param_1->bLooping,
                     (param_3->MarkerTickContext).ValidMarkers);
          (**(code **)(**(longlong **)(pFVar4 + lVar37) + 0x390))
                    (*(longlong **)(pFVar4 + lVar37),&local_1c0,pFVar43->MarkerIndex,
                     *(undefined4 *)(local_3b0 + 0x38 + (longlong)pFVar39));
          (param_3->MarkerTickContext).MarkerSyncStartPostion.PreviousMarkerName = local_1c0;
          (param_3->MarkerTickContext).MarkerSyncStartPostion.NextMarkerName = FStack_1b8;
          (param_3->MarkerTickContext).MarkerSyncStartPostion.PositionBetweenMarkers = local_1b0;
          ResetBlendSamples(this,pTVar3,*(float *)&local_3a0->_padding_,param_1->bLooping,true);
          pFVar41 = local_3b0;
          (**(code **)(**(longlong **)(pFVar4 + lVar37) + 0x388))
                    (*(longlong **)(pFVar4 + lVar37),pFVar4,param_1->bLooping,
                     (param_3->MarkerTickContext).ValidMarkers);
          pFVar46 = param_1->MarkerTickRecord;
          FVar25 = pFVar43[1];
          pFVar46->PreviousMarker = *pFVar43;
          pFVar46->NextMarker = FVar25;
          (**(code **)(**(longlong **)(pFVar4 + lVar37) + 0x390))
                    (*(longlong **)(pFVar4 + lVar37),&local_1a8,pFVar43->MarkerIndex,
                     *(undefined4 *)(pFVar41 + 0x38 + (longlong)pFVar39));
          pUVar44 = local_3a0;
          (param_3->MarkerTickContext).MarkerSyncEndPostion.PreviousMarkerName = local_1a8;
          (param_3->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName = FStack_1a0;
          (param_3->MarkerTickContext).MarkerSyncEndPostion.PositionBetweenMarkers = local_198;
          param_3->AnimLengthRatio = *(float *)&local_3a0->_padding_;
          local_348.AuthoredSyncMarkers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_348.AuthoredSyncMarkers.ArrayNum = 0;
          local_348.AuthoredSyncMarkers.ArrayMax = 0;
          local_348.UniqueMarkerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_348.UniqueMarkerNames.ArrayNum = 0;
          local_348.UniqueMarkerNames.ArrayMax = 0;
          param_3->PreviousAnimLengthRatio = fVar69;
          TArray<FAnimSyncMarker,TSizedDefaultAllocator<32>_>::operator=
                    (&local_348.AuthoredSyncMarkers,
                     (TArray<FAnimSyncMarker,TSizedDefaultAllocator<32>_> *)
                     (*(longlong *)(pFVar4 + lVar37) + 0x178));
          FMarkerSyncData::CollectMarkersInRange
                    (&local_348,*(float *)(pFVar41 + 0x1c + (longlong)pFVar39),
                     *(float *)(pFVar41 + 0x18 + (longlong)pFVar39),
                     &(param_3->MarkerTickContext).MarkersPassedThisTick,fVar48);
          if (local_348.UniqueMarkerNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_348.UniqueMarkerNames.AllocatorInstance.Data);
          }
          if (local_348.AuthoredSyncMarkers.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_348.AuthoredSyncMarkers.AllocatorInstance.Data);
          }
        }
      }
    }
    else {
LAB_14757c87c:
      local_390[0] = fVar49 * *(float *)&pUVar44->_padding_;
      FAnimationRuntime::AdvanceTime
                (param_1->bLooping,param_1->DeltaTimeRecord->Delta,local_390,fVar49);
      if (fVar49 == 0.0) {
        fVar49 = 0.0;
      }
      else {
        fVar49 = local_390[0] / fVar49;
      }
      *(float *)&pUVar44->_padding_ = fVar49;
      bVar26 = false;
      if (4 < (byte)LogAnimMarkerSync._0_1_) {
        local_328 = (FName)this->_padding_;
        ::FName::ToString(&local_328,&local_298);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
        bVar26 = false;
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
          bVar26 = false;
        }
      }
    }
    param_3->AnimLengthRatio = *(float *)&pUVar44->_padding_;
  }
  iVar32 = -1;
  fVar49 = *(float *)&pUVar44->_padding_;
  if (fVar27 <= *(float *)&pUVar44->_padding_) {
    fVar49 = fVar27;
  }
  fVar48 = fVar69;
  if (fVar27 <= fVar69) {
    fVar48 = fVar27;
  }
  local_378.ActiveNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.ActiveNotifies.ArrayNum = 0;
  local_378.ActiveNotifies.ArrayMax = 0;
  if (fVar49 <= 0.0) {
    fVar49 = 0.0;
  }
  if (fVar48 <= 0.0) {
    fVar48 = 0.0;
  }
  fVar73 = fVar48;
  local_378.TickRecord = param_1;
  if ((param_1->bIsEvaluator != false) &&
     ((param_1->field13_0x40).BlendSpace.bTeleportToTime == false)) {
    fVar73 = fVar48 - fVar67;
    fVar49 = fVar48;
    if (0.0 <= fVar73) {
      if ((fVar27 < fVar73) &&
         (fVar73 = FGenericPlatformMath::Fmod(fVar73 - fVar27,fVar27), fVar73 == 0.0)) {
        fVar73 = fVar27;
      }
    }
    else {
      fVar48 = FGenericPlatformMath::Fmod
                         ((float)((uint)fVar73 ^ __xmm_80000000800000008000000080000000),fVar27);
      if (fVar48 == 0.0) {
        fVar73 = 0.0;
      }
      else {
        fVar73 = fVar27 - fVar48;
      }
    }
  }
  fVar48 = *(float *)&pUVar44->_padding_;
  uVar2 = (this->NotifyTriggerMode).Value;
  if ((uVar2 == '\x01') && (0 < pTVar3->ArrayNum)) {
    iVar32 = FBlendSpaceUtilities::GetHighestWeightSample(pTVar3);
    bVar28 = true;
  }
  else {
    bVar28 = false;
  }
  fVar67 = __real_3727c5ac;
  iVar45 = pTVar3->ArrayNum;
  uVar30 = 0;
  if (0 < iVar45) {
    lVar37 = 0;
    local_3a0 = (UAnimSequence *)(longlong)iVar32;
    local_3c8 = (UAnimSequence *)0x0;
    fVar72 = __real_bf800000;
    do {
      uVar31 = 0;
      if ((int)uVar30 < iVar45) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar39 = (pTVar3->AllocatorInstance).Data;
      uVar31 = *(uint *)(pFVar39 + lVar37);
      lVar40 = (longlong)(int)uVar31;
      if (((-1 < (int)uVar31) && ((int)uVar31 < (this->SampleData).ArrayNum)) &&
         (fVar67 < *(float *)(pFVar39 + lVar37 + 0x10))) {
        uVar66 = 0;
        if ((int)uVar31 < (this->SampleData).ArrayNum) {
          uVar66 = ~uVar31 >> 0x1f;
        }
        if ((uVar66 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar41 = (this->SampleData).AllocatorInstance.Data;
        plVar6 = *(longlong **)(pFVar41 + lVar40 * 0x30);
        this = local_388;
        if (plVar6 != (longlong *)0x0) {
          fVar70 = *(float *)(pFVar41 + lVar40 * 0x30 + 0x20);
          fVar71 = *(float *)(plVar6 + 0x15);
          if ((bVar26) && ((int)plVar6[0x30] != 0)) {
            fVar50 = *(float *)(pFVar39 + lVar37 + 0x1c);
            local_3bc = fVar50;
          }
          else {
            fVar50 = fVar73;
            fVar68 = fVar49;
            if (fVar70 * fVar71 < 0.0) {
              fVar50 = fVar27 - fVar73;
              fVar68 = fVar27 - fVar49;
            }
            if (pFVar41[lVar40 * 0x30 + 0x24] == (FScriptContainerElement)0x0) {
              fVar51 = (float)(**(code **)(*plVar6 + 0x2c0))();
              plVar6 = *(longlong **)(pFVar41 + lVar40 * 0x30);
              fVar50 = fVar50 * fVar51;
              local_3bc = fVar50;
              if (plVar6 == (longlong *)0x0) {
                fVar51 = 0.0;
              }
              else if (pFVar41[lVar40 * 0x30 + 0x24] == (FScriptContainerElement)0x0) {
                fVar51 = (float)(**(code **)(*plVar6 + 0x2c0))();
              }
              else {
                piVar34 = (int *)(**(code **)(*plVar6 + 0x318))(plVar6,local_168);
                fVar51 = (float)piVar34[1] / (float)*piVar34;
              }
              *(float *)(pFVar39 + lVar37 + 0x18) = fVar68 * fVar51;
            }
            else {
              fVar50 = (float)(**(code **)(*plVar6 + 800))
                                        (plVar6,*(undefined4 *)(pFVar41 + lVar40 * 0x30 + 0x28));
              *(float *)(pFVar39 + lVar37 + 0x18) = fVar50;
              local_3bc = fVar50;
            }
          }
          fVar68 = *(float *)(pFVar39 + lVar37 + 0x18) - fVar50;
          fVar70 = fVar70 * fVar71 * param_1->DeltaTimeRecord->Delta;
          if (fVar70 * fVar68 < 0.0) {
            fVar71 = fVar27;
            if ((fVar70 <= 0.0) && (fVar71 = fVar72, 0.0 <= fVar70)) {
              fVar71 = 0.0;
            }
            plVar6 = *(longlong **)(pFVar41 + lVar40 * 0x30);
            if (plVar6 == (longlong *)0x0) {
              fVar70 = 0.0;
            }
            else {
              local_3a8[0] = fVar68;
              if (pFVar41[lVar40 * 0x30 + 0x24] == (FScriptContainerElement)0x0) {
                fVar70 = (float)(**(code **)(*plVar6 + 0x2c0))();
              }
              else {
                piVar34 = (int *)(**(code **)(*plVar6 + 0x318))(plVar6,local_160);
                fVar70 = (float)piVar34[1] / (float)*piVar34;
              }
            }
            fVar68 = fVar70 * fVar71 + fVar68;
          }
          local_3a8[0] = fVar68;
          if ((uVar2 != '\x02') && ((!bVar28 || (local_3c8 == local_3a0)))) {
            UAnimSequenceBase::GetAnimNotifies
                      (*(UAnimSequenceBase **)(pFVar41 + lVar40 * 0x30),&local_3bc,local_3a8,
                       &local_378);
          }
          if (((fVar69 != fVar48) && (param_3->RootMotionMode == RootMotionFromEverything)) &&
             ((*(UAnimSequence **)(pFVar41 + lVar40 * 0x30))->bEnableRootMotion != false)) {
            local_248.DeltaTimeRecord._9_2_ = local_1c7;
            fVar72 = *(float *)(pFVar39 + lVar37 + 0x10);
            if (fVar27 <= *(float *)(pFVar39 + lVar37 + 0x10)) {
              fVar72 = fVar27;
            }
            local_248.DeltaTimeRecord._11_1_ = local_1c5;
            local_248.bLooping = param_1->bLooping;
            local_248.CurrentTime = (double)fVar50;
            local_248.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_248.PoseCurves.ArrayNum = 0;
            local_248.PoseCurves.ArrayMax = 0;
            local_248.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_248.BonesRequired.ArrayNum = 0;
            local_248.BonesRequired.ArrayMax = 0;
            if (fVar72 <= 0.0) {
              fVar72 = 0.0;
            }
            local_248.InterpolationOverride.bIsSet = false;
            local_248.bExtractRootMotion = true;
            local_248.DeltaTimeRecord.Previous = 0.0;
            local_248.DeltaTimeRecord.bPreviousIsValid = false;
            local_248.DeltaTimeRecord.Delta = fVar68;
            pTVar35 = UAnimSequence::ExtractRootMotion
                                (*(UAnimSequence **)(pFVar41 + lVar40 * 0x30),&local_158,&local_248)
            ;
            dVar15 = (double)fVar72;
            dVar16 = (double)fVar72;
            uVar74 = SUB84(dVar16,0);
            uVar75 = (undefined4)((ulonglong)dVar16 >> 0x20);
            dVar19 = (double)fVar72;
            dVar20 = (double)fVar72;
            uVar76 = SUB84(dVar20,0);
            uVar77 = (undefined4)((ulonglong)dVar20 >> 0x20);
            if ((param_3->RootMotionMovementParams).bHasRootMotion == false) {
              dVar10 = (pTVar35->Rotation).XY.m128d_f64[0];
              dVar11 = (pTVar35->Rotation).XY.m128d_f64[1];
              auVar55._8_4_ = uVar74;
              auVar55._0_8_ = dVar15;
              auVar55._12_4_ = uVar75;
              auVar1 = *(undefined1 (*) [16])(pTVar35->Rotation).ZW.m128d_f64;
              dVar12 = (pTVar35->Scale3D).XY.m128d_f64[0];
              dVar13 = (pTVar35->Scale3D).XY.m128d_f64[1];
              dVar57 = (pTVar35->Scale3D).ZW.m128d_f64[0];
              dVar64 = (pTVar35->Scale3D).ZW.m128d_f64[1];
              dVar21 = (pTVar35->Translation).XY.m128d_f64[0];
              dVar22 = (pTVar35->Translation).XY.m128d_f64[1];
              dVar23 = (pTVar35->Translation).ZW.m128d_f64[0];
              dVar24 = (pTVar35->Translation).ZW.m128d_f64[1];
              (param_3->RootMotionMovementParams).bHasRootMotion = true;
              auVar61._8_4_ = uVar76;
              auVar61._0_8_ = dVar19;
              auVar61._12_4_ = uVar77;
              (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.XY.m128d_f64[0] =
                   dVar15 * dVar10;
              (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.XY.m128d_f64[1] =
                   auVar55._8_8_ * dVar11;
              auVar56._8_4_ = uVar74;
              auVar56._0_8_ = dVar15;
              auVar56._12_4_ = uVar75;
              (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.ZW.m128d_f64[0] =
                   dVar19 * auVar1._0_8_;
              (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.ZW.m128d_f64[1] =
                   auVar61._8_8_ * auVar1._8_8_;
              auVar62._8_4_ = uVar76;
              auVar62._0_8_ = dVar19;
              auVar62._12_4_ = uVar77;
              (param_3->RootMotionMovementParams).RootMotionTransform.Translation.XY.m128d_f64[0] =
                   dVar15 * dVar21;
              (param_3->RootMotionMovementParams).RootMotionTransform.Translation.XY.m128d_f64[1] =
                   auVar56._8_8_ * dVar22;
              (param_3->RootMotionMovementParams).RootMotionTransform.Translation.ZW.m128d_f64[0] =
                   dVar19 * dVar23;
              (param_3->RootMotionMovementParams).RootMotionTransform.Translation.ZW.m128d_f64[1] =
                   auVar62._8_8_ * dVar24;
              dVar16 = dVar16 * dVar13;
              dVar20 = dVar20 * dVar64;
              auVar1._8_4_ = SUB84(dVar16,0);
              auVar1._0_8_ = dVar15 * dVar12;
              auVar1._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
              *(undefined1 (*) [16])
               (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64 = auVar1
              ;
              auVar18._8_4_ = SUB84(dVar20,0);
              auVar18._0_8_ = dVar19 * dVar57;
              auVar18._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
              *(undefined1 (*) [16])
               (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.ZW.m128d_f64 =
                   auVar18;
              uVar76 = FRootMotionMovementParams::RootMotionScale.field0_0x0._12_4_;
              uVar75 = FRootMotionMovementParams::RootMotionScale.field0_0x0._8_4_;
              uVar74 = FRootMotionMovementParams::RootMotionScale.field0_0x0._4_4_;
              auVar63._8_8_ = 0;
              auVar63._0_8_ = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
              *(undefined4 *)
               (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64 =
                   FRootMotionMovementParams::RootMotionScale.field0_0x0._0_4_;
              *(undefined4 *)
               ((longlong)
                (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64 + 4) =
                   uVar74;
              *(undefined4 *)
               ((param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64 + 1) =
                   uVar75;
              *(undefined4 *)
               ((longlong)
                (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64 + 0xc)
                   = uVar76;
              *(undefined1 (*) [16])
               (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.ZW.m128d_f64 =
                   auVar63;
            }
            else {
              dVar10 = (pTVar35->Rotation).XY.m128d_f64[0] * dVar15;
              dVar11 = (pTVar35->Rotation).XY.m128d_f64[1] * dVar16;
              dVar12 = (pTVar35->Rotation).ZW.m128d_f64[0] * dVar19;
              dVar13 = (pTVar35->Rotation).ZW.m128d_f64[1] * dVar20;
              dVar57 = (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.ZW.m128d_f64
                       [0] * dVar12 +
                       (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.XY.m128d_f64
                       [0] * dVar10;
              dVar64 = (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.ZW.m128d_f64
                       [1] * dVar13 +
                       (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.XY.m128d_f64
                       [1] * dVar11;
              auVar52._8_4_ = SUB84(dVar64,0);
              auVar52._0_8_ = dVar57;
              auVar52._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
              uVar36 = -(ulonglong)(0.0 <= auVar52._8_8_ + dVar57);
              uVar47 = -(ulonglong)(0.0 <= dVar57 + dVar64);
              uVar66 = (uint)(uVar47 >> 0x20);
              auVar65._0_4_ = ~(uint)uVar36 & SUB84(0.0 - dVar10,0);
              uVar31 = (uint)(uVar36 >> 0x20);
              auVar65._4_4_ = ~uVar31 & (uint)((ulonglong)(0.0 - dVar10) >> 0x20);
              auVar65._8_4_ = ~(uint)uVar47 & SUB84(0.0 - dVar11,0);
              auVar65._12_4_ = ~uVar66 & (uint)((ulonglong)(0.0 - dVar11) >> 0x20);
              auVar58._0_8_ = (ulonglong)dVar10 & uVar36;
              auVar58._8_4_ = (undefined4)((ulonglong)dVar11 & uVar47);
              auVar58._12_4_ = (undefined4)(((ulonglong)dVar11 & uVar47) >> 0x20);
              dVar10 = (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.XY.m128d_f64
                       [1];
              auVar53._0_4_ = ~(uint)uVar36 & SUB84(0.0 - dVar12,0);
              auVar53._4_4_ = ~uVar31 & (uint)((ulonglong)(0.0 - dVar12) >> 0x20);
              auVar53._8_4_ = ~(uint)uVar47 & SUB84(0.0 - dVar13,0);
              auVar53._12_4_ = ~uVar66 & (uint)((ulonglong)(0.0 - dVar13) >> 0x20);
              auVar59._8_4_ = uVar76;
              auVar59._0_8_ = dVar19;
              auVar59._12_4_ = uVar77;
              (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.XY.m128d_f64[0] =
                   SUB168(auVar65 | auVar58,0) +
                   (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.XY.m128d_f64[0];
              (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.XY.m128d_f64[1] =
                   SUB168(auVar65 | auVar58,8) + dVar10;
              auVar9._8_4_ = (int)((ulonglong)dVar13 & uVar47);
              auVar9._0_8_ = (ulonglong)dVar12 & uVar36;
              auVar9._12_4_ = (int)(((ulonglong)dVar13 & uVar47) >> 0x20);
              dVar10 = (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.ZW.m128d_f64
                       [1];
              (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.ZW.m128d_f64[0] =
                   SUB168(auVar53 | auVar9,0) +
                   (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.ZW.m128d_f64[0];
              (param_3->RootMotionMovementParams).RootMotionTransform.Rotation.ZW.m128d_f64[1] =
                   SUB168(auVar53 | auVar9,8) + dVar10;
              auVar1 = *(undefined1 (*) [16])(pTVar35->Translation).ZW.m128d_f64;
              auVar54._8_4_ = uVar74;
              auVar54._0_8_ = dVar15;
              auVar54._12_4_ = uVar75;
              dVar11 = (pTVar35->Translation).XY.m128d_f64[1];
              dVar10 = (param_3->RootMotionMovementParams).RootMotionTransform.Translation.XY.
                       m128d_f64[1];
              (param_3->RootMotionMovementParams).RootMotionTransform.Translation.XY.m128d_f64[0] =
                   dVar15 * (pTVar35->Translation).XY.m128d_f64[0] +
                   (param_3->RootMotionMovementParams).RootMotionTransform.Translation.XY.m128d_f64
                   [0];
              (param_3->RootMotionMovementParams).RootMotionTransform.Translation.XY.m128d_f64[1] =
                   auVar54._8_8_ * dVar11 + dVar10;
              dVar10 = (param_3->RootMotionMovementParams).RootMotionTransform.Translation.ZW.
                       m128d_f64[1];
              (param_3->RootMotionMovementParams).RootMotionTransform.Translation.ZW.m128d_f64[0] =
                   dVar19 * auVar1._0_8_ +
                   (param_3->RootMotionMovementParams).RootMotionTransform.Translation.ZW.m128d_f64
                   [0];
              (param_3->RootMotionMovementParams).RootMotionTransform.Translation.ZW.m128d_f64[1] =
                   auVar59._8_8_ * auVar1._8_8_ + dVar10;
              dVar10 = (pTVar35->Scale3D).ZW.m128d_f64[0];
              dVar11 = (pTVar35->Scale3D).ZW.m128d_f64[1];
              dVar16 = dVar16 * (pTVar35->Scale3D).XY.m128d_f64[1] +
                       (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64
                       [1];
              auVar14._8_4_ = SUB84(dVar16,0);
              auVar14._0_8_ =
                   dVar15 * (pTVar35->Scale3D).XY.m128d_f64[0] +
                   (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64[0];
              auVar14._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
              *(undefined1 (*) [16])
               (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64 =
                   auVar14;
              dVar15 = dVar20 * dVar11 +
                       (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.ZW.m128d_f64
                       [1];
              auVar17._8_4_ = SUB84(dVar15,0);
              auVar17._0_8_ =
                   dVar19 * dVar10 +
                   (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
              auVar17._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              *(undefined1 (*) [16])
               (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.ZW.m128d_f64 =
                   auVar17;
              uVar76 = FRootMotionMovementParams::RootMotionScale.field0_0x0._12_4_;
              uVar75 = FRootMotionMovementParams::RootMotionScale.field0_0x0._8_4_;
              uVar74 = FRootMotionMovementParams::RootMotionScale.field0_0x0._4_4_;
              auVar60._8_8_ = 0;
              auVar60._0_8_ = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
              *(undefined4 *)
               (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64 =
                   FRootMotionMovementParams::RootMotionScale.field0_0x0._0_4_;
              *(undefined4 *)
               ((longlong)
                (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64 + 4) =
                   uVar74;
              *(undefined4 *)
               ((param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64 + 1) =
                   uVar75;
              *(undefined4 *)
               ((longlong)
                (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64 + 0xc)
                   = uVar76;
              *(undefined1 (*) [16])
               (param_3->RootMotionMovementParams).RootMotionTransform.Scale3D.ZW.m128d_f64 =
                   auVar60;
              fVar72 = fVar72 + (param_3->RootMotionMovementParams).BlendWeight;
            }
            (param_3->RootMotionMovementParams).BlendWeight = fVar72;
            if (local_248.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.BonesRequired.AllocatorInstance.Data);
            }
            fVar50 = local_3bc;
            fVar68 = local_3a8[0];
            fVar72 = __real_bf800000;
            if (local_248.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.PoseCurves.AllocatorInstance.Data);
              fVar50 = local_3bc;
              fVar68 = local_3a8[0];
              fVar72 = __real_bf800000;
            }
          }
          *(float *)(pFVar39 + lVar37 + 0x28) = fVar50;
          *(float *)(pFVar39 + lVar37 + 0x24) = fVar68;
          pFVar39[lVar37 + 0x2c] = (FScriptContainerElement)0x1;
          this = local_388;
          if (5 < (byte)LogAnimation._0_1_) {
            local_318 = *(FName *)(*(longlong *)(pFVar41 + lVar40 * 0x30) + 0x18);
            ::FName::ToString(&local_318,&local_278);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            this = local_388;
            if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_278.Data.AllocatorInstance.Data);
              this = local_388;
            }
          }
        }
      }
      iVar45 = pTVar3->ArrayNum;
      uVar30 = uVar30 + 1;
      local_3c8 = (UAnimSequence *)((longlong)&local_3c8->_padding_ + 1);
      lVar37 = lVar37 + 0x60;
    } while ((int)uVar30 < iVar45);
  }
  if ((uVar2 != '\x02') && (0 < local_378.ActiveNotifies.ArrayNum)) {
    FAnimNotifyQueue::AddAnimNotifies
              (local_310,param_3->bIsLeader,&local_378.ActiveNotifies,param_1->EffectiveBlendWeight)
    ;
  }
  DestructItems<FAnimNotifyEventReference,int>
            ((FAnimNotifyEventReference *)local_378.ActiveNotifies.AllocatorInstance.Data,
             local_378.ActiveNotifies.ArrayNum);
  pTVar42 = local_380;
  if ((FAnimNotifyEventReference *)local_378.ActiveNotifies.AllocatorInstance.Data !=
      (FAnimNotifyEventReference *)0x0) {
    FMemory::Free(local_378.ActiveNotifies.AllocatorInstance.Data);
    pTVar42 = local_380;
  }
LAB_14757d349:
  pFVar7 = (FBlendSampleData *)(pTVar42->AllocatorInstance).Data;
  if (pTVar42->ArrayMax < 0) {
    DestructItems<FBlendSampleData,int>(pFVar7,pTVar42->ArrayNum);
    pTVar42->ArrayNum = 0;
    if (pTVar42->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&pTVar42->AllocatorInstance,0,&pTVar42->ArrayMax);
    }
  }
  else {
    DestructItems<FBlendSampleData,int>(pFVar7,pTVar42->ArrayNum);
    pTVar42->ArrayNum = 0;
  }
  return;
}

// TickFollowerSamples @ 147580540

void __thiscall
UBlendSpace::TickFollowerSamples
          (UBlendSpace *this,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,FAnimAssetTickContext *param_3,bool param_4,bool param_5,
          UMirrorDataTable *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  UAnimSequenceBase *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar9) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar9) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar5 = *(uint *)(pFVar1 + lVar7);
      uVar6 = 0;
      if ((int)uVar5 < (this->SampleData).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->SampleData).AllocatorInstance.Data;
      if (param_2 != uVar8) {
        if (param_4) {
          *(undefined4 *)(pFVar1 + lVar7 + 0x30) = 0xfffffffe;
          *(undefined4 *)(pFVar1 + lVar7 + 0x38) = 0xfffffffe;
        }
        this_00 = *(UAnimSequenceBase **)(pFVar2 + (longlong)(int)uVar5 * 0x30);
        if (0 < (int)this_00[2]._padding_) {
          UAnimSequenceBase::TickByMarkerAsFollower
                    (this_00,(FMarkerTickRecord *)(pFVar1 + lVar7 + 0x30),
                     &param_3->MarkerTickContext,(float *)(pFVar1 + lVar7 + 0x18),
                     (float *)(pFVar1 + lVar7 + 0x1c),param_3->LeaderDelta,param_5,param_6);
        }
      }
      iVar9 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x60;
    } while ((int)uVar8 < iVar9);
  }
  return;
}

// UpdateBlendSamples @ 1475818a0

bool __thiscall
UBlendSpace::UpdateBlendSamples
          (UBlendSpace *this,TVector<double> *param_1,float param_2,
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_3,int *param_4)

{
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar1;
  FBlendSampleData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FTlsAutoCleanup *pFVar6;
  undefined1 local_38 [8];
  code *local_30;
  undefined1 *local_28;
  
  local_28 = local_38;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlendSpaceScratchData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_30,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendSpaceScratchData>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  pTVar1 = (TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *)(pFVar6 + 2);
  if (*(int *)(pFVar6 + 3) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OldSampleDataList.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                       ,0x129,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  bVar4 = UpdateBlendSamples_Internal(this,param_1,param_2,pTVar1,param_3,param_4);
  pFVar2 = (FBlendSampleData *)(pTVar1->AllocatorInstance).Data;
  if (*(int *)&pFVar6[3].field_0x4 < 0) {
    DestructItems<FBlendSampleData,int>(pFVar2,*(int *)(pFVar6 + 3));
    *(undefined4 *)(pFVar6 + 3) = 0;
    if (*(int *)&pFVar6[3].field_0x4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)pTVar1,0,(int *)&pFVar6[3].field_0x4);
    }
  }
  else {
    DestructItems<FBlendSampleData,int>(pFVar2,*(int *)(pFVar6 + 3));
    *(undefined4 *)(pFVar6 + 3) = 0;
  }
  return bVar4;
}

// UpdateBlendSamples_Internal @ 1475819b0

bool __thiscall
UBlendSpace::UpdateBlendSamples_Internal
          (UBlendSpace *this,TVector<double> *param_1,float param_2,
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_4,int *param_5)

{
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FBlendSampleData *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FTlsAutoCleanup *pFVar8;
  bool bVar9;
  undefined1 local_res20 [8];
  code *local_48;
  undefined1 *local_40;
  
  local_40 = local_res20;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlendSpaceScratchData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendSpaceScratchData>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  pTVar1 = (TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *)(pFVar8 + 4);
  if (*(int *)(pFVar8 + 5) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NewSampleDataList.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                       ,0xe6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if (param_3 == param_4) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar2 = param_4->ArrayNum;
  if (iVar2 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,iVar2,&param_3->AllocatorInstance,&param_3->ArrayNum,
                       &param_3->ArrayMax);
    ConstructItems<FBlendSampleData,FBlendSampleData,int>
              ((param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x60,
               (FBlendSampleData *)(param_4->AllocatorInstance).Data,iVar2);
  }
  pFVar3 = (FBlendSampleData *)(param_4->AllocatorInstance).Data;
  if (param_4->ArrayMax < 0) {
    DestructItems<FBlendSampleData,int>(pFVar3,param_4->ArrayNum);
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
  }
  else {
    DestructItems<FBlendSampleData,int>(pFVar3,param_4->ArrayNum);
    param_4->ArrayNum = 0;
  }
  bVar9 = false;
  bVar5 = GetSamplesFromBlendInput(this,param_1,pTVar1,param_5,true);
  if (bVar5) {
    if ((0.0 < this->TargetWeightInterpolationSpeedPerSec) ||
       (0 < (this->PerBoneBlendValues).ArrayNum)) {
      bVar5 = InterpolateWeightOfSampleData(this,param_2,param_3,pTVar1,param_4);
      if (bVar5) {
        FBlendSampleData::NormalizeDataWeight(param_4);
      }
      else {
        TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::operator=(param_4,pTVar1);
      }
    }
    else {
      TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::
      Append<FBlendSampleData,TSizedDefaultAllocator<32>_>(param_4,pTVar1);
    }
    bVar9 = true;
  }
  pFVar3 = (FBlendSampleData *)(pTVar1->AllocatorInstance).Data;
  if (*(int *)&pFVar8[5].field_0x4 < 0) {
    DestructItems<FBlendSampleData,int>(pFVar3,*(int *)(pFVar8 + 5));
    iVar2 = *(int *)&pFVar8[5].field_0x4;
    *(undefined4 *)(pFVar8 + 5) = 0;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)pTVar1,0,(int *)&pFVar8[5].field_0x4);
    }
  }
  else {
    DestructItems<FBlendSampleData,int>(pFVar3,*(int *)(pFVar8 + 5));
    *(undefined4 *)(pFVar8 + 5) = 0;
  }
  return bVar9;
}

// UpdateFilterParams @ 147582040

void __thiscall UBlendSpace::UpdateFilterParams(UBlendSpace *this,FBlendFilter *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  longlong lVar10;
  uint uVar11;
  float *pfVar12;
  
  if (param_1 != (FBlendFilter *)0x0) {
    uVar11 = (param_1->FilterPerAxis).ArrayNum;
    uVar8 = 0;
    if (uVar11 != 0) {
      pfVar9 = &this->BlendParameters[0].Max;
      lVar10 = 0;
      pfVar12 = &this->InterpolationParam[0].DampingRatio;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (int)uVar11) {
          uVar7 = ~uVar8 >> 0x1f;
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
        bVar6 = *(bool *)((longlong)pfVar9 + 9);
        fVar1 = pfVar12[1];
        fVar2 = *pfVar9;
        fVar3 = pfVar9[-1];
        pFVar4 = (param_1->FilterPerAxis).AllocatorInstance.Data;
        *(float *)(pFVar4 + lVar10 + 0x10) = *pfVar12;
        pFVar4[lVar10 + 0x20] = (FScriptContainerElement)(bVar6 == false);
        uVar8 = uVar8 + 1;
        *(float *)(pFVar4 + lVar10 + 0x14) = fVar3;
        pfVar12 = pfVar12 + 4;
        *(float *)(pFVar4 + lVar10 + 0x18) = fVar2;
        pfVar9 = pfVar9 + 8;
        *(float *)(pFVar4 + lVar10 + 0x1c) = fVar1;
        lVar10 = lVar10 + 0x38;
        uVar11 = (param_1->FilterPerAxis).ArrayNum;
      } while (uVar8 != uVar11);
    }
  }
  return;
}

