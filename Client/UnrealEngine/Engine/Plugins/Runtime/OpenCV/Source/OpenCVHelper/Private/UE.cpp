// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVHelper
// Functions: 10

// Construct<FOpenCVLensDistortionParametersBase> @ 14d36b7f0

void __cdecl UE::CoreUObject::Private::Construct<FOpenCVLensDistortionParametersBase>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3fe0000000000000;
  return;
}

// ConstructForTests<FOpenCVLensDistortionParametersBase> @ 14d36b830

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOpenCVLensDistortionParametersBase>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3fe0000000000000;
  return;
}

// Destruct<FOpenCVLensDistortionParametersBase> @ 14d36b8b0

void __cdecl UE::CoreUObject::Private::Destruct<FOpenCVLensDistortionParametersBase>(void *param_1)

{
  return;
}

// Copy<FOpenCVLensDistortionParametersBase> @ 14d36b8c0

bool __cdecl
UE::CoreUObject::Private::Copy<FOpenCVLensDistortionParametersBase>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 0x40 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar10 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar10 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x48);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOpenCVArucoDetectedMarker> @ 14d36b9b0

void __cdecl UE::CoreUObject::Private::Construct<FOpenCVArucoDetectedMarker>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  return;
}

// ConstructForTests<FOpenCVArucoDetectedMarker> @ 14d36ba10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOpenCVArucoDetectedMarker>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  return;
}

// Destruct<FOpenCVArucoDetectedMarker> @ 14d36ba70

void __cdecl UE::CoreUObject::Private::Destruct<FOpenCVArucoDetectedMarker>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FOpenCVArucoDetectedMarker> @ 14d36bad0

bool __cdecl
UE::CoreUObject::Private::Copy<FOpenCVArucoDetectedMarker>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar5 = (undefined4 *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
      pFVar1 = (ForAnyElementType *)(puVar6 + 2);
      *puVar6 = *puVar5;
      if (pFVar1 != (ForAnyElementType *)(puVar5 + 2)) {
        iVar3 = puVar5[4];
        piVar2 = puVar6 + 5;
        _Src = ((ForAnyElementType *)(puVar5 + 2))->Data;
        puVar6[4] = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 4);
          }
        }
      }
      uVar4 = *(undefined8 *)(puVar5 + 10);
      *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(puVar6 + 10) = uVar4;
      uVar4 = *(undefined8 *)(puVar5 + 0xe);
      *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar5 + 0xc);
      *(undefined8 *)(puVar6 + 0xe) = uVar4;
      uVar4 = *(undefined8 *)(puVar5 + 0x12);
      *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(puVar5 + 0x10);
      *(undefined8 *)(puVar6 + 0x12) = uVar4;
      uVar4 = *(undefined8 *)(puVar5 + 0x16);
      *(undefined8 *)(puVar6 + 0x14) = *(undefined8 *)(puVar5 + 0x14);
      *(undefined8 *)(puVar6 + 0x16) = uVar4;
      uVar4 = *(undefined8 *)(puVar5 + 0x1a);
      *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(puVar5 + 0x18);
      *(undefined8 *)(puVar6 + 0x1a) = uVar4;
      uVar4 = *(undefined8 *)(puVar5 + 0x1e);
      *(undefined8 *)(puVar6 + 0x1c) = *(undefined8 *)(puVar5 + 0x1c);
      *(undefined8 *)(puVar6 + 0x1e) = uVar4;
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 0x20;
    } while (param_3 != 0);
  }
  return true;
}

// GetArucoDictionary @ 14d36f4c0

Ptr<cv::aruco::Dictionary> * __cdecl
UE::Aruco::Private::GetArucoDictionary
          (Ptr<cv::aruco::Dictionary> *__return_storage_ptr__,EArucoDictionary param_1)

{
  undefined1 local_res10 [24];
  
  switch(param_1) {
  case DICT_4X4_50:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_4X4_50);
    return __return_storage_ptr__;
  case DICT_4X4_100:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_4X4_100);
    return __return_storage_ptr__;
  case DICT_4X4_250:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_4X4_250);
    return __return_storage_ptr__;
  case DICT_4X4_1000:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_4X4_1000);
    return __return_storage_ptr__;
  case DICT_5X5_50:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_5X5_50);
    return __return_storage_ptr__;
  case DICT_5X5_100:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_5X5_100);
    return __return_storage_ptr__;
  case DICT_5X5_250:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_5X5_250);
    return __return_storage_ptr__;
  case DICT_5X5_1000:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_5X5_1000);
    return __return_storage_ptr__;
  case DICT_6X6_50:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_6X6_50);
    return __return_storage_ptr__;
  case DICT_6X6_100:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_6X6_100);
    return __return_storage_ptr__;
  case DICT_6X6_250:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_6X6_250);
    return __return_storage_ptr__;
  case DICT_6X6_1000:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_6X6_1000);
    return __return_storage_ptr__;
  case DICT_7X7_50:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_7X7_50);
    return __return_storage_ptr__;
  case DICT_7X7_100:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_7X7_100);
    return __return_storage_ptr__;
  case DICT_7X7_250:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_7X7_250);
    return __return_storage_ptr__;
  case DICT_7X7_1000:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_7X7_1000);
    return __return_storage_ptr__;
  case DICT_ARUCO_ORIGINAL:
    cv::aruco::getPredefinedDictionary(__return_storage_ptr__,DICT_ARUCO_ORIGINAL);
    return __return_storage_ptr__;
  default:
    `UE::Aruco::Private::GetArucoDictionary'::__l4::<lambda_1>::operator()(local_res10);
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
}

// operator() @ 15057a9c0

bool __thiscall `UE::Aruco::Private::GetArucoDictionary'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5720011606289547197>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5720011606289547197>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

