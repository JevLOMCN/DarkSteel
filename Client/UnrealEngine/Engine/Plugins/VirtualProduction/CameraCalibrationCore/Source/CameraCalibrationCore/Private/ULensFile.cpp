// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 99

// StaticClass @ 14d67d0f0

UClass * __cdecl ULensFile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensFile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"LensFile",
               &Z_Registration_Info_UClass_ULensFile.InnerSingleton,StaticRegisterNativesULensFile,
               0x310,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULensFile>,
               InternalVTableHelperCtorCaller<ULensFile>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensFile.InnerSingleton;
}

// ULensFile @ 14d6ab0c0

ULensFile * __thiscall ULensFile::ULensFile(ULensFile *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->LensInfo).LensModelName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->LensInfo).SensorDimensions.field0_0x0._s_0.X = 23.760000228881836;
  (this->LensInfo).LensModelName.Data.ArrayNum = 0;
  (this->LensInfo).LensModelName.Data.ArrayMax = 0;
  (this->LensInfo).LensSerialNumber.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LensInfo).LensSerialNumber.Data.ArrayNum = 0;
  (this->LensInfo).LensSerialNumber.Data.ArrayMax = 0;
  (this->LensInfo).LensModel.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LensInfo).ImageDimensions.field0_0x0._s_0.X = 0x780;
  (this->LensInfo).ImageDimensions.field0_0x0._s_0.Y = 0x438;
  this->DataMode = Parameters;
  *(undefined8 *)&this->UserMetadata = 0;
  *(undefined8 *)&(this->UserMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->UserMetadata).field_0x20 = 0;
  (this->LensInfo).SensorDimensions.field0_0x0._s_0.Y = 13.364999771118164;
  (this->LensInfo).SqueezeFactor = 1.0;
  *(undefined4 *)&(this->UserMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->UserMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->UserMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->UserMetadata).field_0x48 = 0;
  FEncodersTable::FEncodersTable(&this->EncodersTable);
  (this->DistortionTable)._padding_ = 0;
  (this->DistortionTable)._padding_ = (longlong)&___7FDistortionTable__6B_;
  (this->FocalLengthTable)._padding_ = (longlong)&___7FFocalLengthTable__6B_;
  (this->ImageCenterTable)._padding_ = (longlong)&___7FImageCenterTable__6B_;
  (this->NodalOffsetTable)._padding_ = (longlong)&___7FNodalOffsetTable__6B_;
  (this->STMapTable)._padding_ = (longlong)&___7FSTMapTable__6B_;
  (this->DistortionTable).FocusPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistortionTable).FocusPoints.ArrayNum = 0;
  (this->DistortionTable).FocusPoints.ArrayMax = 0;
  (this->DistortionTable).FocusCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistortionTable).FocusCurves.ArrayNum = 0;
  (this->DistortionTable).FocusCurves.ArrayMax = 0;
  (this->FocalLengthTable)._padding_ = 0;
  (this->FocalLengthTable).FocusPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FocalLengthTable).FocusPoints.ArrayNum = 0;
  (this->FocalLengthTable).FocusPoints.ArrayMax = 0;
  (this->FocalLengthTable).FocusCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FocalLengthTable).FocusCurves.ArrayNum = 0;
  (this->FocalLengthTable).FocusCurves.ArrayMax = 0;
  (this->ImageCenterTable)._padding_ = 0;
  (this->ImageCenterTable).FocusPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImageCenterTable).FocusPoints.ArrayNum = 0;
  (this->ImageCenterTable).FocusPoints.ArrayMax = 0;
  (this->ImageCenterTable).FocusCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImageCenterTable).FocusCurves.ArrayNum = 0;
  (this->ImageCenterTable).FocusCurves.ArrayMax = 0;
  (this->NodalOffsetTable)._padding_ = 0;
  (this->NodalOffsetTable).FocusPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodalOffsetTable).FocusPoints.ArrayNum = 0;
  (this->NodalOffsetTable).FocusPoints.ArrayMax = 0;
  (this->NodalOffsetTable).FocusCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodalOffsetTable).FocusCurves.ArrayNum = 0;
  (this->NodalOffsetTable).FocusCurves.ArrayMax = 0;
  (this->STMapTable)._padding_ = 0;
  (this->STMapTable).FocusPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->STMapTable).FocusPoints.ArrayNum = 0;
  (this->STMapTable).FocusPoints.ArrayMax = 0;
  (this->STMapTable).FocusCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->STMapTable).FocusCurves.ArrayNum = 0;
  (this->STMapTable).FocusCurves.ArrayMax = 0;
  (this->CalibratedMapProcessor).Ptr = (ICalibratedMapProcessor *)0x0;
  (this->UndistortionDisplacementMapHolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->UndistortionDisplacementMapHolders).ArrayNum = 0;
  (this->UndistortionDisplacementMapHolders).ArrayMax = 0;
  (this->DistortionDisplacementMapHolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistortionDisplacementMapHolders).ArrayNum = 0;
  (this->DistortionDisplacementMapHolders).ArrayMax = 0;
  *(undefined8 *)&this->OnLensFileModelChangedDelegate = 0;
  *(undefined8 *)&(this->OnLensFileModelChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLensFileModelChangedDelegate).field_0x10 = 0;
  this->InputTolerance = 0.0001;
  this->DerivedDataInFlightCount = 0;
  *(undefined8 *)&(this->OnLensFileModelChangedDelegate).field_0x18 = 2;
  return this;
}

// ULensFile @ 14d6ab2f0

ULensFile * __thiscall ULensFile::ULensFile(ULensFile *this)

{
  ICalibratedMapProcessor *pIVar1;
  UClass *pUVar2;
  FCalibratedMapProcessor *this_00;
  FCalibratedMapProcessor *pFVar3;
  
  UObject::UObject((UObject *)this);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  pFVar3 = (FCalibratedMapProcessor *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->LensInfo).LensModelName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->LensInfo).SensorDimensions.field0_0x0._s_0.X = 23.760000228881836;
  (this->LensInfo).LensModelName.Data.ArrayNum = 0;
  (this->LensInfo).LensModelName.Data.ArrayMax = 0;
  (this->LensInfo).LensSerialNumber.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LensInfo).LensSerialNumber.Data.ArrayNum = 0;
  (this->LensInfo).LensSerialNumber.Data.ArrayMax = 0;
  (this->LensInfo).LensModel.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LensInfo).ImageDimensions.field0_0x0._s_0.X = 0x780;
  (this->LensInfo).ImageDimensions.field0_0x0._s_0.Y = 0x438;
  this->DataMode = Parameters;
  *(undefined8 *)&this->UserMetadata = 0;
  *(undefined8 *)&(this->UserMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->UserMetadata).field_0x20 = 0;
  (this->LensInfo).SensorDimensions.field0_0x0._s_0.Y = 13.364999771118164;
  (this->LensInfo).SqueezeFactor = 1.0;
  *(undefined4 *)&(this->UserMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->UserMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->UserMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->UserMetadata).field_0x48 = 0;
  FEncodersTable::FEncodersTable(&this->EncodersTable);
  (this->DistortionTable)._padding_ = 0;
  (this->DistortionTable)._padding_ = (longlong)&___7FDistortionTable__6B_;
  (this->FocalLengthTable)._padding_ = (longlong)&___7FFocalLengthTable__6B_;
  (this->ImageCenterTable)._padding_ = (longlong)&___7FImageCenterTable__6B_;
  (this->NodalOffsetTable)._padding_ = (longlong)&___7FNodalOffsetTable__6B_;
  (this->STMapTable)._padding_ = (longlong)&___7FSTMapTable__6B_;
  (this->DistortionTable).FocusPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistortionTable).FocusPoints.ArrayNum = 0;
  (this->DistortionTable).FocusPoints.ArrayMax = 0;
  (this->DistortionTable).FocusCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistortionTable).FocusCurves.ArrayNum = 0;
  (this->DistortionTable).FocusCurves.ArrayMax = 0;
  (this->FocalLengthTable)._padding_ = 0;
  (this->FocalLengthTable).FocusPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FocalLengthTable).FocusPoints.ArrayNum = 0;
  (this->FocalLengthTable).FocusPoints.ArrayMax = 0;
  (this->FocalLengthTable).FocusCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FocalLengthTable).FocusCurves.ArrayNum = 0;
  (this->FocalLengthTable).FocusCurves.ArrayMax = 0;
  (this->ImageCenterTable)._padding_ = 0;
  (this->ImageCenterTable).FocusPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImageCenterTable).FocusPoints.ArrayNum = 0;
  (this->ImageCenterTable).FocusPoints.ArrayMax = 0;
  (this->ImageCenterTable).FocusCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImageCenterTable).FocusCurves.ArrayNum = 0;
  (this->ImageCenterTable).FocusCurves.ArrayMax = 0;
  (this->NodalOffsetTable)._padding_ = 0;
  (this->NodalOffsetTable).FocusPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodalOffsetTable).FocusPoints.ArrayNum = 0;
  (this->NodalOffsetTable).FocusPoints.ArrayMax = 0;
  (this->NodalOffsetTable).FocusCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodalOffsetTable).FocusCurves.ArrayNum = 0;
  (this->NodalOffsetTable).FocusCurves.ArrayMax = 0;
  (this->STMapTable)._padding_ = 0;
  (this->STMapTable).FocusPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->STMapTable).FocusPoints.ArrayNum = 0;
  (this->STMapTable).FocusPoints.ArrayMax = 0;
  (this->STMapTable).FocusCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->STMapTable).FocusCurves.ArrayNum = 0;
  (this->STMapTable).FocusCurves.ArrayMax = 0;
  this->InputTolerance = 0.0001;
  this->DerivedDataInFlightCount = 0;
  (this->CalibratedMapProcessor).Ptr = (ICalibratedMapProcessor *)0x0;
  (this->UndistortionDisplacementMapHolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->UndistortionDisplacementMapHolders).ArrayNum = 0;
  (this->UndistortionDisplacementMapHolders).ArrayMax = 0;
  (this->DistortionDisplacementMapHolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistortionDisplacementMapHolders).ArrayNum = 0;
  (this->DistortionDisplacementMapHolders).ArrayMax = 0;
  *(undefined8 *)&this->OnLensFileModelChangedDelegate = 0;
  *(undefined8 *)&(this->OnLensFileModelChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLensFileModelChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnLensFileModelChangedDelegate).field_0x18 = 2;
  pUVar2 = USphericalLensModel::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->LensInfo).LensModel.Class.field0_0x0.DebugPtr = pUVar2;
  if ((this->_padding_ & 0x30) == 0) {
    this_00 = ::operator_new(0x80);
    if (this_00 != (FCalibratedMapProcessor *)0x0) {
      pFVar3 = FCalibratedMapProcessor::FCalibratedMapProcessor(this_00);
    }
    pIVar1 = (this->CalibratedMapProcessor).Ptr;
    (this->CalibratedMapProcessor).Ptr = (ICalibratedMapProcessor *)pFVar3;
    if (pIVar1 != (ICalibratedMapProcessor *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
  }
  return this;
}

// ~ULensFile @ 14d6acec0

void __thiscall ULensFile::~ULensFile(ULensFile *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ICalibratedMapProcessor *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLensFileModelChangedDelegate).field_0x8,
             *(int *)&(this->OnLensFileModelChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnLensFileModelChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLensFileModelChangedDelegate);
  pFVar2 = (this->DistortionDisplacementMapHolders).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UndistortionDisplacementMapHolders).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->CalibratedMapProcessor).Ptr;
  if (pIVar3 != (ICalibratedMapProcessor *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  DestructItems<FSTMapFocusCurve,int>
            ((FSTMapFocusCurve *)(this->STMapTable).FocusCurves.AllocatorInstance.Data,
             (this->STMapTable).FocusCurves.ArrayNum);
  pFVar2 = (this->STMapTable).FocusCurves.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSTMapFocusPoint,int>
            ((FSTMapFocusPoint *)(this->STMapTable).FocusPoints.AllocatorInstance.Data,
             (this->STMapTable).FocusPoints.ArrayNum);
  pFVar2 = (this->STMapTable).FocusPoints.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FNodalOffsetFocusCurve,int>
            ((FNodalOffsetFocusCurve *)(this->NodalOffsetTable).FocusCurves.AllocatorInstance.Data,
             (this->NodalOffsetTable).FocusCurves.ArrayNum);
  pFVar2 = (this->NodalOffsetTable).FocusCurves.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FNodalOffsetFocusPoint,int>
            ((FNodalOffsetFocusPoint *)(this->NodalOffsetTable).FocusPoints.AllocatorInstance.Data,
             (this->NodalOffsetTable).FocusPoints.ArrayNum);
  pFVar2 = (this->NodalOffsetTable).FocusPoints.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FImageCenterFocusCurve,int>
            ((FImageCenterFocusCurve *)(this->ImageCenterTable).FocusCurves.AllocatorInstance.Data,
             (this->ImageCenterTable).FocusCurves.ArrayNum);
  pFVar2 = (this->ImageCenterTable).FocusCurves.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FImageCenterFocusPoint,int>
            ((FImageCenterFocusPoint *)(this->ImageCenterTable).FocusPoints.AllocatorInstance.Data,
             (this->ImageCenterTable).FocusPoints.ArrayNum);
  pFVar2 = (this->ImageCenterTable).FocusPoints.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FFocalLengthFocusCurve,int>
            ((FFocalLengthFocusCurve *)(this->FocalLengthTable).FocusCurves.AllocatorInstance.Data,
             (this->FocalLengthTable).FocusCurves.ArrayNum);
  pFVar2 = (this->FocalLengthTable).FocusCurves.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FFocalLengthFocusPoint,int>
            ((FFocalLengthFocusPoint *)(this->FocalLengthTable).FocusPoints.AllocatorInstance.Data,
             (this->FocalLengthTable).FocusPoints.ArrayNum);
  pFVar2 = (this->FocalLengthTable).FocusPoints.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDistortionFocusCurve,int>
            ((FDistortionFocusCurve *)(this->DistortionTable).FocusCurves.AllocatorInstance.Data,
             (this->DistortionTable).FocusCurves.ArrayNum);
  pFVar2 = (this->DistortionTable).FocusCurves.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDistortionFocusPoint,int>
            ((FDistortionFocusPoint *)(this->DistortionTable).FocusPoints.AllocatorInstance.Data,
             (this->DistortionTable).FocusPoints.ArrayNum);
  pFVar2 = (this->DistortionTable).FocusPoints.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FEncodersTable::~FEncodersTable(&this->EncodersTable);
  *(undefined4 *)&(this->UserMetadata).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UserMetadata).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserMetadata);
  pFVar2 = (this->LensInfo).LensSerialNumber.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LensInfo).LensModelName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14d6af250

TOptional<FDistortionInfo> * __thiscall
`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>::operator()
          (void *this,TOptional<FDistortionInfo> *__return_storage_ptr__,
          FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2)

{
  int *piVar1;
  ForAnyElementType _Src;
  bool bVar2;
  longlong lVar3;
  FDistortionInfo local_18;
  
  local_18.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Parameters.ArrayNum = 0;
  local_18.Parameters.ArrayMax = 0;
  bVar2 = FDistortionFocusPoint::GetPoint(param_1,param_2->Zoom,&local_18,__real_38d1b717);
  _Src.Data = local_18.Parameters.AllocatorInstance.Data;
  if (bVar2) {
    piVar1 = &(__return_storage_ptr__->TypedValue).Parameters.ArrayMax;
    lVar3 = (longlong)local_18.Parameters.ArrayNum;
    (__return_storage_ptr__->TypedValue).Parameters.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->TypedValue).Parameters.ArrayNum = local_18.Parameters.ArrayNum;
    if (local_18.Parameters.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.Parameters.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_18.Parameters.ArrayNum,piVar1);
      memcpy((__return_storage_ptr__->TypedValue).Parameters.AllocatorInstance.Data,_Src.Data,
             lVar3 << 2);
    }
    __return_storage_ptr__->bIsSet = true;
    if (local_18.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Parameters.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  if (local_18.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Parameters.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d6af340

TOptional<FDistortionInfo> * __thiscall
`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>::operator()
          (void *this,TOptional<FDistortionInfo> *__return_storage_ptr__,
          FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2)

{
  int *piVar1;
  ForAnyElementType _Src;
  bool bVar2;
  longlong lVar3;
  FDistortionInfo local_18;
  
  local_18.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Parameters.ArrayNum = 0;
  local_18.Parameters.ArrayMax = 0;
  bVar2 = FDistortionFocusPoint::GetPoint(param_1,param_2->Zoom,&local_18,__real_38d1b717);
  _Src.Data = local_18.Parameters.AllocatorInstance.Data;
  if (bVar2) {
    piVar1 = &(__return_storage_ptr__->TypedValue).Parameters.ArrayMax;
    lVar3 = (longlong)local_18.Parameters.ArrayNum;
    (__return_storage_ptr__->TypedValue).Parameters.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->TypedValue).Parameters.ArrayNum = local_18.Parameters.ArrayNum;
    if (local_18.Parameters.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.Parameters.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_18.Parameters.ArrayNum,piVar1);
      memcpy((__return_storage_ptr__->TypedValue).Parameters.AllocatorInstance.Data,_Src.Data,
             lVar3 << 2);
    }
    __return_storage_ptr__->bIsSet = true;
    if (local_18.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Parameters.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  if (local_18.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Parameters.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d6afa90

void __thiscall
`ULensFile::GetBlendState'::__l2::<lambda_1>::operator()
          (void *this,FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2,
          FLensDistortionState *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  UClass *pUVar7;
  ULensModel *this_00;
  undefined4 uStack_2c;
  TArrayView<FFocalLengthFocusPoint_const_,int> local_28;
  
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar2 + 0x50);
  if (lVar3 != 0) {
    pUVar7 = ULensModel::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        pUVar7 = *(UClass **)(lVar2 + 0x50);
        goto LAB_14d6afaf6;
      }
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_14d6afaf6:
  this_00 = UClass::GetDefaultObject<ULensModel>(pUVar7);
  ULensModel::GetDefaultParameterArray(this_00,(TArray<float,TSizedDefaultAllocator<32>_> *)param_3)
  ;
  FDistortionFocusPoint::GetPoint(param_1,param_2->Zoom,&param_3->DistortionInfo,__real_38d1b717);
  local_28.DataPtr = *(FFocalLengthFocusPoint **)(*(longlong *)this + 0x210);
  iVar1 = *(int *)(*(longlong *)this + 0x218);
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar1;
  LensDataTableUtils::GetPointValue<FFocalLengthFocusPoint,FFocalLengthInfo>
            (param_1->Focus,param_2->Zoom,&local_28,&param_3->FocalLengthInfo);
  dVar5 = (*(double **)((longlong)this + 8))[1];
  (param_3->ImageCenter).PrincipalPoint.field0_0x0._s_0.X = **(double **)((longlong)this + 8);
  (param_3->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y = dVar5;
  return;
}

// operator() @ 14d6b2a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>::operator()
          (void *this,FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2,
          UTextureRenderTarget2D *param_3,UTextureRenderTarget2D *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  float *pfVar5;
  longlong *plVar6;
  UObject *pUVar7;
  bool bVar8;
  UClass *pUVar9;
  ULensModel *pUVar10;
  UStruct *pUVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  UClass *this_00;
  float fVar14;
  TVector2<double>_u_0 local_c8;
  FLensDistortionState local_b8;
  FFocalLengthFocusPoint *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FStructOnScope local_78;
  TArrayView<FFocalLengthFocusPoint_const_,int> local_48 [2];
  
  this_00 = (UClass *)0x0;
  lVar2 = *(longlong *)this;
  local_b8.DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.DistortionInfo.Parameters.ArrayNum = 0;
  local_b8.DistortionInfo.Parameters.ArrayMax = 0;
  local_b8.FocalLengthInfo.FxFy.field0_0x0._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_b8.FocalLengthInfo.FxFy.field0_0x0._s_0.Y = _UNK_152bc18c8;
  local_b8.ImageCenter.PrincipalPoint.field0_0x0._s_0.X = **(double **)((longlong)this + 0x18);
  local_b8.ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = (*(double **)((longlong)this + 0x18))[1];
  lVar3 = *(longlong *)(lVar2 + 0x50);
  if (lVar3 != 0) {
    pUVar9 = ULensModel::StaticClass();
    if (pUVar9 != (UClass *)0x0) {
      iVar1 = (int)pUVar9->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        this_00 = *(UClass **)(lVar2 + 0x50);
      }
    }
  }
  pUVar10 = UClass::GetDefaultObject<ULensModel>(this_00);
  pUVar11 = (UStruct *)(**(code **)(*(longlong *)pUVar10 + 0x2c0))(pUVar10);
  FStructOnScope::FStructOnScope(&local_78,pUVar11);
  pcVar4 = *(code **)(*(longlong *)pUVar10 + 0x2d0);
  uVar12 = (**(code **)(local_78._padding_ + 0x10))(&local_78);
  uVar13 = (**(code **)(local_78._padding_ + 0x20))(&local_78);
  (*pcVar4)(pUVar10,uVar13,uVar12,&local_b8);
  FStructOnScope::~FStructOnScope(&local_78);
  FDistortionFocusPoint::GetPoint(param_1,param_2->Zoom,&local_b8.DistortionInfo,__real_38d1b717);
  local_c8._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_c8._s_0.Y = _UNK_152bc18c8;
  local_88 = *(FFocalLengthFocusPoint **)(*(longlong *)this + 0x210);
  iStack_80 = *(int *)(*(longlong *)this + 0x218);
  if (iStack_80 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      fVar14 = (float)(*pcVar4)();
      return fVar14;
    }
  }
  local_48[0]._12_4_ = uStack_7c;
  local_48[0].ArrayNum = iStack_80;
  local_48[0].DataPtr = local_88;
  LensDataTableUtils::GetPointValue<FFocalLengthFocusPoint,FFocalLengthInfo>
            (param_1->Focus,param_2->Zoom,local_48,(FFocalLengthInfo *)&local_c8._s_0);
  local_b8.FocalLengthInfo.FxFy.field0_0x0._s_0.Y =
       local_c8._s_0.Y * (*(double **)((longlong)this + 0x20))[1];
  local_b8.FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       local_c8._s_0.X * **(double **)((longlong)this + 0x20);
  ULensDistortionModelHandlerBase::SetDistortionState
            (*(ULensDistortionModelHandlerBase **)((longlong)this + 8),&local_b8);
  pfVar5 = *(float **)((longlong)this + 0x10);
  plVar6 = *(longlong **)((longlong)this + 8);
  if ((((*pfVar5 != *(float *)(plVar6 + 0xd)) || (pfVar5[1] != *(float *)((longlong)plVar6 + 0x6c)))
      || (pfVar5[2] != *(float *)(plVar6 + 0xe))) ||
     (pfVar5[3] != *(float *)((longlong)plVar6 + 0x74))) {
    lVar2 = *(longlong *)(pfVar5 + 2);
    plVar6[0xd] = *(longlong *)pfVar5;
    plVar6[0xe] = lVar2;
    *(float *)(plVar6 + 0xf) = pfVar5[4];
    (**(code **)(*plVar6 + 0x2f0))(plVar6);
    *(undefined1 *)(plVar6 + 0x19) = 1;
  }
  pUVar7 = *(UObject **)((longlong)this + 8);
  if (param_3 != (UTextureRenderTarget2D *)0x0) {
    if ((*(longlong *)&pUVar7[1].field_0x8 == 0) || (*(longlong *)&pUVar7[3].field_0x20 == 0)) {
      (**(code **)(*(longlong *)pUVar7 + 0x2e0))(pUVar7);
    }
    (**(code **)(*(longlong *)pUVar7 + 0x2e8))(pUVar7);
    UKismetRenderingLibrary::DrawMaterialToRenderTarget
              (pUVar7,param_3,*(UMaterialInterface **)&pUVar7[3].field_0x20);
  }
  pUVar7 = *(UObject **)((longlong)this + 8);
  if (param_4 != (UTextureRenderTarget2D *)0x0) {
    if ((*(longlong *)&pUVar7[1].field_0x8 == 0) || (*(longlong *)(pUVar7 + 4) == 0)) {
      (**(code **)(*(longlong *)pUVar7 + 0x2e0))(pUVar7);
    }
    (**(code **)(*(longlong *)pUVar7 + 0x2e8))(pUVar7);
    UKismetRenderingLibrary::DrawMaterialToRenderTarget
              (pUVar7,param_4,*(UMaterialInterface **)(pUVar7 + 4));
  }
  fVar14 = ULensDistortionModelHandlerBase::ComputeOverscanFactor
                     (*(ULensDistortionModelHandlerBase **)((longlong)this + 8));
  if (local_b8.DistortionInfo.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.DistortionInfo.Parameters.AllocatorInstance.Data);
  }
  return fVar14;
}

// operator() @ 14d6b2d20

float __thiscall
`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>::operator()
          (void *this,FSTMapFocusPoint *param_1,FSTMapFocusCurve *param_2,
          UTextureRenderTarget2D *param_3,UTextureRenderTarget2D *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  TVector2<double>_u_0 local_18;
  
  pFVar2 = (param_1->ZoomPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(param_1->ZoomPoints).ArrayNum * 0x50;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return __real_3f800000;
    }
    if ((float)((uint)(*(float *)pFVar2 - param_2->Zoom) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_322bcc77) break;
    pFVar2 = pFVar2 + 0x50;
  }
  local_18._s_0.X = **(double **)((longlong)this + 8);
  local_18._s_0.Y = (*(double **)((longlong)this + 8))[1];
  fVar3 = ULensFile::ComputeOverscan
                    (*(ULensFile **)this,(FDistortionData *)(pFVar2 + 0x18),
                     (TVector2<double> *)&local_18._s_0);
  return fVar3;
}

// AddDistortionPoint @ 14d6b4c70

void __thiscall
ULensFile::AddDistortionPoint
          (ULensFile *this,float param_1,float param_2,FDistortionInfo *param_3,
          FFocalLengthInfo *param_4)

{
  bool bVar1;
  
  bVar1 = FDistortionTable::AddPoint
                    (&this->DistortionTable,param_1,param_2,param_3,this->InputTolerance,false);
  FFocalLengthTable::AddPoint
            (&this->FocalLengthTable,param_1,param_2,param_4,this->InputTolerance,bVar1);
  return;
}

// AddFocalLengthPoint @ 14d6b4cf0

void __thiscall
ULensFile::AddFocalLengthPoint
          (ULensFile *this,float param_1,float param_2,FFocalLengthInfo *param_3)

{
  FFocalLengthTable::AddPoint
            (&this->FocalLengthTable,param_1,param_2,param_3,this->InputTolerance,false);
  return;
}

// AddImageCenterPoint @ 14d6b4d30

void __thiscall
ULensFile::AddImageCenterPoint
          (ULensFile *this,float param_1,float param_2,FImageCenterInfo *param_3)

{
  FImageCenterTable::AddPoint
            (&this->ImageCenterTable,param_1,param_2,param_3,this->InputTolerance,false);
  return;
}

// AddNodalOffsetPoint @ 14d6b4d70

void __thiscall
ULensFile::AddNodalOffsetPoint
          (ULensFile *this,float param_1,float param_2,FNodalPointOffset *param_3)

{
  float fVar1;
  bool bVar2;
  
  fVar1 = this->InputTolerance;
  bVar2 = LensDataTableUtils::AddPoint<FNodalOffsetFocusPoint,FNodalPointOffset>
                    (&(this->NodalOffsetTable).FocusPoints,param_1,param_2,param_3,fVar1,false);
  if (bVar2) {
    LensDataTableUtils::AddPointToFocusCurve<FNodalOffsetFocusCurve,FNodalPointOffset>
              (&(this->NodalOffsetTable).FocusCurves,param_1,param_2,param_3,fVar1);
  }
  return;
}

// AddSTMapPoint @ 14d6b63e0

void __thiscall
ULensFile::AddSTMapPoint(ULensFile *this,float param_1,float param_2,FSTMapInfo *param_3)

{
  float fVar1;
  bool bVar2;
  
  fVar1 = this->InputTolerance;
  bVar2 = LensDataTableUtils::AddPoint<FSTMapFocusPoint,FSTMapInfo>
                    (&(this->STMapTable).FocusPoints,param_1,param_2,param_3,fVar1,false);
  if (bVar2) {
    LensDataTableUtils::AddPointToFocusCurve<FSTMapFocusCurve,FSTMapInfo>
              (&(this->STMapTable).FocusCurves,param_1,param_2,param_3,fVar1);
  }
  return;
}

// ChangeFocusPoint @ 14d6b9b50

void __thiscall
ULensFile::ChangeFocusPoint(ULensFile *this,ELensDataCategory param_1,float param_2,float param_3)

{
  int iVar1;
  FKeyHandle FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  uint uVar3;
  FRichCurve *pFVar4;
  FScriptContainerElement *pFVar5;
  FRichCurve *pFVar6;
  FRichCurve *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  undefined1 local_res10 [8];
  FKeyHandle local_68;
  FKeyHandle local_64;
  
  if (param_1 == Zoom) {
    fVar9 = param_2;
    LensDataTableUtils::ChangeFocusPoint<FFocalLengthFocusPoint>
              (&(this->FocalLengthTable).FocusPoints,param_2,param_3,this->InputTolerance);
    pFVar7 = (FRichCurve *)(this->FocalLengthTable).FocusCurves.AllocatorInstance.Data;
    iVar1 = (this->FocalLengthTable).FocusCurves.ArrayNum;
    pFVar4 = pFVar7 + 1;
    pFVar6 = (FRichCurve *)((longlong)pFVar7 + (longlong)iVar1 * 0x108);
    while( true ) {
      if ((this->FocalLengthTable).FocusCurves.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFocalLengthFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar7 == pFVar6) break;
      FRealCurve::FindKey((FRealCurve *)pFVar7,fVar9,param_2);
      FVar2 = FKeyHandle::Invalid();
      if (local_64.Index != *(uint *)CONCAT44(extraout_var_05,FVar2.Index)) {
        FRichCurve::SetKeyTime(pFVar7,local_64,param_3);
      }
      FRealCurve::FindKey((FRealCurve *)pFVar4,fVar9,param_2);
      FVar2 = FKeyHandle::Invalid();
      if (local_68.Index != *(uint *)CONCAT44(extraout_var_06,FVar2.Index)) {
        FRichCurve::SetKeyTime(pFVar4,local_68,param_3);
      }
      pFVar7 = (FRichCurve *)&pFVar7[2]._padding_;
      pFVar4 = (FRichCurve *)&pFVar4[2]._padding_;
    }
  }
  else if (param_1 == Distortion) {
    fVar9 = param_2;
    LensDataTableUtils::ChangeFocusPoint<FDistortionFocusPoint>
              (&(this->DistortionTable).FocusPoints,param_2,param_3,this->InputTolerance);
    iVar1 = (this->DistortionTable).FocusCurves.ArrayNum;
    pFVar4 = (FRichCurve *)(this->DistortionTable).FocusCurves.AllocatorInstance.Data;
    pFVar7 = (FRichCurve *)((longlong)pFVar4 + (longlong)iVar1 * 0x88);
    while( true ) {
      if ((this->DistortionTable).FocusCurves.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDistortionFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar7) break;
      FRealCurve::FindKey((FRealCurve *)pFVar4,fVar9,param_2);
      FVar2 = FKeyHandle::Invalid();
      if (local_64.Index != *(uint *)CONCAT44(extraout_var_04,FVar2.Index)) {
        FRichCurve::SetKeyTime(pFVar4,local_64,param_3);
      }
      pFVar4 = (FRichCurve *)&pFVar4[1]._padding_;
    }
  }
  else if (param_1 == ImageCenter) {
    fVar9 = param_2;
    LensDataTableUtils::ChangeFocusPoint<FImageCenterFocusPoint>
              (&(this->ImageCenterTable).FocusPoints,param_2,param_3,this->InputTolerance);
    pFVar7 = (FRichCurve *)(this->ImageCenterTable).FocusCurves.AllocatorInstance.Data;
    iVar1 = (this->ImageCenterTable).FocusCurves.ArrayNum;
    pFVar4 = pFVar7 + 1;
    pFVar6 = (FRichCurve *)((longlong)pFVar7 + (longlong)iVar1 * 0x108);
    while( true ) {
      if ((this->ImageCenterTable).FocusCurves.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FImageCenterFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar7 == pFVar6) break;
      FRealCurve::FindKey((FRealCurve *)pFVar7,fVar9,param_2);
      FVar2 = FKeyHandle::Invalid();
      if (local_64.Index != *(uint *)CONCAT44(extraout_var_02,FVar2.Index)) {
        FRichCurve::SetKeyTime(pFVar7,local_64,param_3);
      }
      FRealCurve::FindKey((FRealCurve *)pFVar4,fVar9,param_2);
      FVar2 = FKeyHandle::Invalid();
      if (local_68.Index != *(uint *)CONCAT44(extraout_var_03,FVar2.Index)) {
        FRichCurve::SetKeyTime(pFVar4,local_68,param_3);
      }
      pFVar7 = (FRichCurve *)&pFVar7[2]._padding_;
      pFVar4 = (FRichCurve *)&pFVar4[2]._padding_;
    }
  }
  else if (param_1 == STMap) {
    fVar9 = param_2;
    LensDataTableUtils::ChangeFocusPoint<FSTMapFocusPoint>
              (&(this->STMapTable).FocusPoints,param_2,param_3,this->InputTolerance);
    iVar1 = (this->STMapTable).FocusCurves.ArrayNum;
    pFVar4 = (FRichCurve *)(this->STMapTable).FocusCurves.AllocatorInstance.Data;
    pFVar7 = (FRichCurve *)((longlong)pFVar4 + (longlong)iVar1 * 0x88);
    while( true ) {
      if ((this->STMapTable).FocusCurves.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSTMapFocusCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar4 == pFVar7) break;
      FRealCurve::FindKey((FRealCurve *)pFVar4,fVar9,param_2);
      FVar2 = FKeyHandle::Invalid();
      if (local_64.Index != *(uint *)CONCAT44(extraout_var_01,FVar2.Index)) {
        FRichCurve::SetKeyTime(pFVar4,local_64,param_3);
      }
      pFVar4 = (FRichCurve *)&pFVar4[1]._padding_;
    }
  }
  else if (param_1 == NodalOffset) {
    fVar9 = param_2;
    LensDataTableUtils::ChangeFocusPoint<FNodalOffsetFocusPoint>
              (&(this->NodalOffsetTable).FocusPoints,param_2,param_3,this->InputTolerance);
    iVar1 = (this->NodalOffsetTable).FocusCurves.ArrayNum;
    pFVar5 = (this->NodalOffsetTable).FocusCurves.AllocatorInstance.Data;
    pFVar8 = pFVar5 + (longlong)iVar1 * 0x308;
    while( true ) {
      if ((this->NodalOffsetTable).FocusCurves.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNodalOffsetFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar8) break;
      uVar3 = 0;
      do {
        FRealCurve::FindKey((FRealCurve *)(pFVar5 + (longlong)(int)uVar3 * 0x80),fVar9,param_2);
        FVar2 = FKeyHandle::Invalid();
        if (local_68.Index != *(uint *)CONCAT44(extraout_var,FVar2.Index)) {
          FRichCurve::SetKeyTime
                    ((FRichCurve *)(pFVar5 + (longlong)(int)uVar3 * 0x80),local_68,param_3);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 3);
      uVar3 = 0;
      do {
        FRealCurve::FindKey((FRealCurve *)(pFVar5 + ((longlong)(int)uVar3 + 3) * 0x80),fVar9,param_2
                           );
        FVar2 = FKeyHandle::Invalid();
        if (local_64.Index != *(uint *)CONCAT44(extraout_var_00,FVar2.Index)) {
          FRichCurve::SetKeyTime
                    ((FRichCurve *)(pFVar5 + ((longlong)(int)uVar3 + 3) * 0x80),local_64,param_3);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 3);
      pFVar5 = pFVar5 + 0x308;
    }
  }
  return;
}

// ChangeZoomPoint @ 14d6ba420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ULensFile::ChangeZoomPoint
          (ULensFile *this,ELensDataCategory param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  bool bVar2;
  FImageCenterFocusPoint *this_00;
  FFocalLengthFocusPoint *this_01;
  FImageCenterFocusPoint *pFVar3;
  FFocalLengthFocusPoint *pFVar4;
  TVector2<double>_u_0 local_98;
  TVector<double>_u_0 local_88;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  
  if (param_1 == Zoom) {
    fVar1 = this->InputTolerance;
    LensDataTableUtils::ChangeZoomPoint<FFocalLengthFocusPoint>
              (&(this->FocalLengthTable).FocusPoints,param_2,param_3,param_4,fVar1);
    this_01 = (FFocalLengthFocusPoint *)(this->FocalLengthTable).FocusPoints.AllocatorInstance.Data;
    local_98._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
    local_98._s_0.Y = _UNK_152bc18c8;
    pFVar4 = this_01 + (this->FocalLengthTable).FocusPoints.ArrayNum;
    for (; this_01 != pFVar4; this_01 = this_01 + 1) {
      if ((float)((uint)(this_01->Focus - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          fVar1) {
        bVar2 = FFocalLengthFocusPoint::GetPoint
                          (this_01,param_4,(FFocalLengthInfo *)&local_98._s_0,fVar1);
        if (!bVar2) {
          return;
        }
        LensDataTableUtils::ChangeZoomInFocusCurves<FFocalLengthFocusCurve,FFocalLengthInfo>
                  (&(this->FocalLengthTable).FocusCurves,param_2,param_3,param_4,
                   (FFocalLengthInfo *)&local_98._s_0,fVar1);
        return;
      }
    }
  }
  else if (param_1 == Distortion) {
    fVar1 = this->InputTolerance;
    LensDataTableUtils::ChangeZoomPoint<FDistortionFocusPoint>
              (&(this->DistortionTable).FocusPoints,param_2,param_3,param_4,fVar1);
    local_98._s_0.X = 0.0;
    local_98._s_0.Y = 0.0;
    bVar2 = FDistortionTable::GetPoint
                      (&this->DistortionTable,param_2,param_4,(FDistortionInfo *)&local_98._s_0,
                       fVar1);
    if (bVar2) {
      LensDataTableUtils::ChangeZoomInFocusCurves<FDistortionFocusCurve,FDistortionInfo>
                (&(this->DistortionTable).FocusCurves,param_2,param_3,param_4,
                 (FDistortionInfo *)&local_98._s_0,fVar1);
    }
    if ((void *)local_98._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_98._s_0.X);
    }
  }
  else if (param_1 == ImageCenter) {
    fVar1 = this->InputTolerance;
    LensDataTableUtils::ChangeZoomPoint<FImageCenterFocusPoint>
              (&(this->ImageCenterTable).FocusPoints,param_2,param_3,param_4,fVar1);
    this_00 = (FImageCenterFocusPoint *)(this->ImageCenterTable).FocusPoints.AllocatorInstance.Data;
    pFVar3 = this_00 + (this->ImageCenterTable).FocusPoints.ArrayNum;
    for (; this_00 != pFVar3; this_00 = this_00 + 1) {
      if ((float)((uint)(this_00->Focus - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          fVar1) {
        local_98._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
        local_98._s_0.Y = _UNK_150689678;
        bVar2 = FImageCenterFocusPoint::GetPoint
                          (this_00,param_4,(FImageCenterInfo *)&local_98._s_0,fVar1);
        if (!bVar2) {
          return;
        }
        LensDataTableUtils::ChangeZoomInFocusCurves<FImageCenterFocusCurve,FImageCenterInfo>
                  (&(this->ImageCenterTable).FocusCurves,param_2,param_3,param_4,
                   (FImageCenterInfo *)&local_98._s_0,fVar1);
        return;
      }
    }
  }
  else if (param_1 == STMap) {
    fVar1 = this->InputTolerance;
    LensDataTableUtils::ChangeZoomPoint<FSTMapFocusPoint>
              (&(this->STMapTable).FocusPoints,param_2,param_3,param_4,fVar1);
    local_98._s_0.X = 0.0;
    local_98._s_0.Y = (double)CONCAT53((int5)((ulonglong)local_98._8_8_ >> 0x18),0x10000);
    bVar2 = FSTMapTable::GetPoint
                      (&this->STMapTable,param_2,param_4,(FSTMapInfo *)&local_98._s_0,fVar1);
    if (bVar2) {
      LensDataTableUtils::ChangeZoomInFocusCurves<FSTMapFocusCurve,FSTMapInfo>
                (&(this->STMapTable).FocusCurves,param_2,param_3,param_4,
                 (FSTMapInfo *)&local_98._s_0,fVar1);
    }
  }
  else if (param_1 == NodalOffset) {
    fVar1 = this->InputTolerance;
    LensDataTableUtils::ChangeZoomPoint<FNodalOffsetFocusPoint>
              (&(this->NodalOffsetTable).FocusPoints,param_2,param_3,param_4,fVar1);
    local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_68 = UE::Math::TQuat<double>::Identity.X;
    dStack_60 = UE::Math::TQuat<double>::Identity.Y;
    local_58 = UE::Math::TQuat<double>::Identity.Z;
    dStack_50 = UE::Math::TQuat<double>::Identity.W;
    bVar2 = FNodalOffsetTable::GetPoint
                      (&this->NodalOffsetTable,param_2,param_4,(FNodalPointOffset *)&local_88._s_0,
                       fVar1);
    if (bVar2) {
      LensDataTableUtils::ChangeZoomInFocusCurves<FNodalOffsetFocusCurve,FNodalPointOffset>
                (&(this->NodalOffsetTable).FocusCurves,param_2,param_3,param_4,
                 (FNodalPointOffset *)&local_88._s_0,fVar1);
    }
  }
  return;
}

// ClearAll @ 14d6ba850

void __thiscall ULensFile::ClearAll(ULensFile *this)

{
  FRichCurve::Reset(&(this->EncodersTable).Focus);
  FRichCurve::Reset(&(this->EncodersTable).Iris);
  LensDataTableUtils::EmptyTable<FDistortionTable>(&this->DistortionTable);
  LensDataTableUtils::EmptyTable<FFocalLengthTable>(&this->FocalLengthTable);
  LensDataTableUtils::EmptyTable<FSTMapTable>(&this->STMapTable);
  LensDataTableUtils::EmptyTable<FImageCenterTable>(&this->ImageCenterTable);
  LensDataTableUtils::EmptyTable<FNodalOffsetTable>(&this->NodalOffsetTable);
  return;
}

// ClearData @ 14d6ba8d0

void __thiscall ULensFile::ClearData(ULensFile *this,ELensDataCategory param_1)

{
  switch(param_1) {
  case Focus:
    FRichCurve::Reset(&(this->EncodersTable).Focus);
    return;
  case Iris:
    FRichCurve::Reset(&(this->EncodersTable).Iris);
    return;
  case Zoom:
    LensDataTableUtils::EmptyTable<FFocalLengthTable>(&this->FocalLengthTable);
    return;
  case Distortion:
    LensDataTableUtils::EmptyTable<FDistortionTable>(&this->DistortionTable);
    return;
  case ImageCenter:
    LensDataTableUtils::EmptyTable<FImageCenterTable>(&this->ImageCenterTable);
    return;
  case STMap:
    LensDataTableUtils::EmptyTable<FSTMapTable>(&this->STMapTable);
    return;
  case NodalOffset:
    LensDataTableUtils::EmptyTable<FNodalOffsetTable>(&this->NodalOffsetTable);
    return;
  default:
    return;
  }
}

// ComputeOverscan @ 14d6bbc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
ULensFile::ComputeOverscan(ULensFile *this,FDistortionData *param_1,TVector2<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<float> FVar9;
  longlong lVar10;
  ForElementType<float> FVar11;
  uint uVar12;
  ForElementType<float> FVar13;
  ForElementType<float> FVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auStackY_e8 [32];
  float local_98;
  undefined1 local_94 [4];
  TVector2<double> *local_90;
  ForElementType<float> local_88;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  iVar8 = UndistortedUVs.ArrayNum;
  fVar15 = __real_3f800000;
  if (iVar8 == (param_1->DistortedUVs).ArrayNum) {
    FVar13 = (ForElementType<float>)0x0;
    local_88.SecondaryData = (ForElementType<float>)0x0;
    local_60 = 0;
    local_5c = 8;
    local_90 = param_2;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(UndistortedUVs._8_8_ & 0xffffffff);
    }
    if (8 < iVar8) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                (4,4,iVar8,&local_88,0,&local_5c);
    }
    dVar4 = __real_3fe0000000000000;
    dVar3 = __real_3ff0000000000000;
    FVar11 = FVar13;
    FVar14 = FVar13;
    if (0 < UndistortedUVs.ArrayNum) {
      do {
        uVar12 = FVar11._0_4_;
        uVar7 = 0;
        if ((int)uVar12 < UndistortedUVs.ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          fVar15 = (float)(*pcVar2)();
          return fVar15;
        }
        FVar5.Data = UndistortedUVs.AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar12 < (param_1->DistortedUVs).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          fVar15 = (float)(*pcVar2)();
          return fVar15;
        }
        pFVar1 = (param_1->DistortedUVs).AllocatorInstance.Data;
        dVar16 = *(double *)(FVar5.Data + (longlong)FVar14);
        dVar17 = dVar3;
        if (dVar16 != dVar4) {
          dVar17 = (((((local_90->field0_0x0)._s_0.X + *(double *)(pFVar1 + (longlong)FVar14)) -
                     dVar4) + (local_90->field0_0x0)._s_0.X) - dVar3) / (dVar16 - dVar4);
        }
        dVar16 = dVar3;
        if (*(double *)((uchar *)((longlong)FVar14 + 8) + (longlong)FVar5.Data) != dVar4) {
          dVar16 = ((((((local_90->field0_0x0)._s_0.Y - dVar4) + (local_90->field0_0x0)._s_0.Y) -
                     dVar4) + *(double *)((uchar *)((longlong)FVar14 + 8) + (longlong)pFVar1)) -
                   dVar4) / (*(double *)((uchar *)((longlong)FVar14 + 8) + (longlong)FVar5.Data) -
                            dVar4);
        }
        FVar11 = (ForElementType<float>)&local_88;
        if (local_88.SecondaryData != (ForElementType<float>)0x0) {
          FVar11 = local_88.SecondaryData;
        }
        local_98 = (float)dVar16;
        if ((float)dVar16 <= (float)dVar17) {
          local_98 = (float)dVar17;
        }
        if ((ulonglong)FVar11 <= &local_98) {
          FVar11 = (ForElementType<float>)&local_88;
          if (local_88.SecondaryData != (ForElementType<float>)0x0) {
            FVar11 = local_88.SecondaryData;
          }
          if ((&local_98 < (float *)((longlong)FVar11 + (longlong)local_5c * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar2 = (code *)swi(3);
            fVar15 = (float)(*pcVar2)();
            return fVar15;
          }
        }
        if (local_60 == local_5c) {
          local_60 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                               (0x404,&local_88,&local_5c);
        }
        lVar10 = (longlong)local_60;
        FVar9 = (ForElementType<float>)&local_88;
        if (local_88.SecondaryData != (ForElementType<float>)0x0) {
          FVar9 = local_88.SecondaryData;
        }
        FVar11._0_4_ = uVar12 + 1;
        FVar11._4_4_ = 0;
        local_60 = local_60 + 1;
        *(float *)((longlong)FVar9 + lVar10 * 4) = local_98;
        FVar14 = (ForElementType<float>)((longlong)FVar14 + 0x10);
      } while ((int)FVar11._0_4_ < UndistortedUVs.ArrayNum);
    }
    iVar8 = local_60;
    FVar11 = (ForElementType<float>)&local_88;
    if (local_88.SecondaryData != (ForElementType<float>)0x0) {
      FVar11 = local_88.SecondaryData;
    }
    FVar14 = (ForElementType<float>)((longlong)FVar11 + (longlong)local_60 * 4);
    while( true ) {
      if (local_60 != iVar8) {
        `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_94);
      }
      if (FVar11 == FVar14) break;
      if ((FVar13 == (ForElementType<float>)0x0) ||
         (*(float *)FVar13 <= *(float *)FVar11 && *(float *)FVar11 != *(float *)FVar13)) {
        FVar13 = FVar11;
      }
      FVar11 = (ForElementType<float>)((longlong)FVar11 + 4);
    }
    fVar15 = __real_3f800000;
    if (FVar13 != (ForElementType<float>)0x0) {
      fVar15 = *(float *)FVar13;
    }
    if (local_88.SecondaryData != (ForElementType<float>)0x0) {
      FMemory::Free((void *)local_88.SecondaryData);
    }
  }
  return fVar15;
}

// CreateIntermediateDisplacementMaps @ 14d6bf720

void __thiscall
ULensFile::CreateIntermediateDisplacementMaps(ULensFile *this,TIntPoint<int> param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<TObjectPtr<UTextureRenderTarget2D>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  UTextureRenderTarget2D *pUVar9;
  UTextureRenderTarget2D *pUVar10;
  TArray<TObjectPtr<UTextureRenderTarget2D>,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  UTextureRenderTarget2D *local_38;
  UTextureRenderTarget2D *local_30;
  
  pTVar3 = &this->UndistortionDisplacementMapHolders;
  piVar1 = &(this->UndistortionDisplacementMapHolders).ArrayMax;
  lVar12 = 4;
  (this->UndistortionDisplacementMapHolders).ArrayNum = 0;
  if ((this->UndistortionDisplacementMapHolders).ArrayMax < 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,4,&pTVar3->AllocatorInstance,0,piVar1);
  }
  pTVar11 = &this->DistortionDisplacementMapHolders;
  piVar2 = &(this->DistortionDisplacementMapHolders).ArrayMax;
  (this->DistortionDisplacementMapHolders).ArrayNum = 0;
  if ((this->DistortionDisplacementMapHolders).ArrayMax < 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,4,&pTVar11->AllocatorInstance,0,piVar2);
  }
  do {
    pUVar8 = GetTransientPackage();
    pUVar9 = LensFileUtils::CreateDisplacementMapRenderTarget((UObject *)pUVar8,param_1);
    pUVar8 = GetTransientPackage();
    pUVar10 = LensFileUtils::CreateDisplacementMapRenderTarget((UObject *)pUVar8,param_1);
    local_38 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UTextureRenderTarget2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)*piVar1 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->UndistortionDisplacementMapHolders).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->UndistortionDisplacementMapHolders).ArrayNum = iVar7 + 1;
    *(UTextureRenderTarget2D **)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38 != (UTextureRenderTarget2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    local_30 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UTextureRenderTarget2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pFVar4 = (pTVar11->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_30) &&
       ((FScriptContainerElement *)&local_30 < pFVar4 + (longlong)*piVar2 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->DistortionDisplacementMapHolders).ArrayNum;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar11->AllocatorInstance,piVar2);
    }
    (this->DistortionDisplacementMapHolders).ArrayNum = iVar7 + 1;
    *(UTextureRenderTarget2D **)((pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_30
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_30 != (UTextureRenderTarget2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_30);
    }
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}

// EvaluateDistortionData @ 14d6c1750

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ULensFile::EvaluateDistortionData
          (ULensFile *this,float param_1,float param_2,TVector2<double> *param_3,
          ULensDistortionModelHandlerBase *param_4)

{
  int iVar1;
  code *pcVar2;
  ULensDistortionModelHandlerBase *this_00;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FName *this_01;
  UObject *pUVar7;
  bool bVar8;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  undefined1 local_70 [8];
  FString local_68;
  TVector2<double>_u_0 local_58;
  TVector2<double>_u_0 local_48 [3];
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId331,"ULensFile::EvaluateDistortionData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
               ,0x14b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId331);
  }
  this_00 = param_4;
  if (param_4 == (ULensDistortionModelHandlerBase *)0x0) {
    if (2 < (byte)LogCameraCalibrationCore._0_1_) {
      param_4 = (ULensDistortionModelHandlerBase *)this->_padding_;
      ::FName::ToString((FName *)&param_4,&local_f0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore)
      ;
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
  }
  else if ((param_4->UndistortionDisplacementMapRT).field0_0x0.DebugPtr ==
           (UTextureRenderTarget2D *)0x0) {
    if (2 < (byte)LogCameraCalibrationCore._0_1_) {
      local_128 = (FName)param_4->_padding_;
      ::FName::ToString(&local_128,&local_d0);
      local_120 = (FName)this->_padding_;
      ::FName::ToString(&local_120,&local_e0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore)
      ;
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
  }
  else if ((param_4->DistortionDisplacementMapRT).field0_0x0.DebugPtr ==
           (UTextureRenderTarget2D *)0x0) {
    if (2 < (byte)LogCameraCalibrationCore._0_1_) {
      local_118 = (FName)param_4->_padding_;
      ::FName::ToString(&local_118,&local_b0);
      local_110 = (FName)this->_padding_;
      ::FName::ToString(&local_110,&local_c0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore)
      ;
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar6 = (this->LensInfo).LensModel.Class.field0_0x0.DebugPtr;
    if ((pUVar6 == (UClass *)0x0) || (pUVar5 = ULensModel::StaticClass(), pUVar5 == (UClass *)0x0))
    {
LAB_14d6c1ba3:
      if (2 < (byte)LogCameraCalibrationCore._0_1_) {
        local_f8 = (FName)this->_padding_;
        ::FName::ToString(&local_f8,&local_80);
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
LAB_14d6c1bea:
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar6->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((!bVar3) || ((this->LensInfo).LensModel.Class.field0_0x0.DebugPtr == (UClass *)0x0))
      goto LAB_14d6c1ba3;
      bVar3 = ULensDistortionModelHandlerBase::IsModelSupported(this_00,&(this->LensInfo).LensModel)
      ;
      if (bVar3) {
        if (this->DataMode == Parameters) {
          local_58._s_0.X = (param_3->field0_0x0)._s_0.X;
          local_58._s_0.Y = (param_3->field0_0x0)._s_0.Y;
          bVar3 = EvaluateDistortionForParameters
                            (this,param_1,param_2,(TVector2<double> *)&local_58._s_0,this_00);
        }
        else {
          if ((this->DataMode != STMap) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("DataMode == ELensDataMode::STMap",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
                                 ,0x174,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          local_48[0]._0_8_ = (param_3->field0_0x0)._s_0.X;
          local_48[0]._8_8_ = (param_3->field0_0x0)._s_0.Y;
          bVar3 = EvaluateDistortionForSTMaps
                            (this,param_1,param_2,(TVector2<double> *)&local_48[0]._s_0,this_00);
        }
        goto LAB_14d6c1c02;
      }
      if (2 < (byte)LogCameraCalibrationCore._0_1_) {
        pUVar6 = (this->LensInfo).LensModel.Class.field0_0x0.DebugPtr;
        pUVar7 = (UObject *)0x0;
        if (pUVar6 != (UClass *)0x0) {
          if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar6);
          }
          pUVar7 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
          if (pUVar7 != (UObject *)0x0) {
            pUVar6 = ULensModel::StaticClass();
            iVar1 = (int)pUVar6->_padding_;
            if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar6->_padding_)) goto LAB_14d6c1a72;
          }
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                             ,0x93,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
LAB_14d6c1a72:
        this_01 = (FName *)(**(code **)(*(longlong *)pUVar7 + 0x2b0))(pUVar7,local_70);
        ::FName::ToString(this_01,&local_68);
        local_108 = (FName)this_00->_padding_;
        ::FName::ToString(&local_108,&local_90);
        local_100 = (FName)this->_padding_;
        ::FName::ToString(&local_100,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        local_80.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
          local_80.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        }
        goto LAB_14d6c1bea;
      }
    }
    SetupNoDistortionOutput(this,this_00);
  }
  bVar3 = false;
LAB_14d6c1c02:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// EvaluateDistortionForParameters @ 14d6c1c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
ULensFile::EvaluateDistortionForParameters
          (ULensFile *this,float param_1,float param_2,TVector2<double> *param_3,
          ULensDistortionModelHandlerBase *param_4)

{
  uint uVar1;
  int iVar2;
  UClass *pUVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  UMaterialInstanceDynamic *pUVar6;
  UTextureRenderTarget2D *pUVar7;
  UTextureRenderTarget2D *pUVar8;
  UTextureRenderTarget2D *pUVar9;
  UTextureRenderTarget2D *pUVar10;
  ForElementType<TAlignedBytes<16,16>_> FVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  UClass *pUVar15;
  ULensModel *pUVar16;
  UStruct *pUVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulong64 uVar21;
  UClass *this_00;
  int iVar22;
  float local_458;
  float fStack_454;
  undefined8 uStack_450;
  float local_448;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_440;
  FDelegateAllocation local_438;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_428;
  FDelegateAllocation local_420;
  undefined1 local_410 [8];
  ForAnyElementType local_408;
  int local_400;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3f8;
  ForAnyElementType FStack_3f0;
  int local_3e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3e0;
  ForAnyElementType FStack_3d8;
  int local_3d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3c8;
  ForAnyElementType FStack_3c0;
  int local_3b8;
  bool local_3b0;
  int local_3ac;
  ForAnyElementType local_3a8;
  undefined8 local_3a0;
  ForAnyElementType local_398;
  undefined8 local_390;
  FLensDistortionState local_388;
  TVector2<double>_u_0 local_358;
  TVector2<double>_u_0 local_348;
  double local_338;
  double local_330;
  FDestructionSentinel local_328;
  FDestructionSentinel local_310;
  FDestructionSentinel local_2f8;
  FDestructionSentinel local_2e0;
  FDestructionSentinel local_2c8;
  FDestructionSentinel local_2b0;
  FDestructionSentinel local_298;
  FDestructionSentinel local_280;
  FDestructionSentinel local_268;
  FDestructionSentinel local_250;
  FDestructionSentinel local_238;
  FDelegateAllocation *local_220;
  FDestructionSentinel local_218;
  FDelegateAllocation *local_200;
  FStructOnScope local_1f8;
  FDistortionMapBlendResults local_1c8;
  
  local_358._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_358._s_0.Y = _UNK_150689678;
  EvaluateImageCenterParameters(this,param_1,param_2,(FImageCenterInfo *)&local_358._s_0);
  local_348._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_348._s_0.Y = _UNK_152bc18c8;
  EvaluateFocalLength(this,param_1,param_2,(FFocalLengthInfo *)&local_348._s_0);
  this_00 = (UClass *)0x0;
  pUVar3 = (this->LensInfo).LensModel.Class.field0_0x0.DebugPtr;
  uStack_450 = 0;
  local_448 = 1.33;
  local_388.DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_388.DistortionInfo.Parameters.ArrayNum = 0;
  local_388.DistortionInfo.Parameters.ArrayMax = 0;
  local_458 = (float)(param_3->field0_0x0)._s_0.X;
  fStack_454 = (float)(param_3->field0_0x0)._s_0.Y;
  local_338 = (this->LensInfo).SensorDimensions.field0_0x0._s_0.X / (double)local_458;
  local_330 = (this->LensInfo).SensorDimensions.field0_0x0._s_0.Y / (double)fStack_454;
  local_388.FocalLengthInfo.FxFy.field0_0x0._s_0.X = local_348._s_0.X * local_338;
  local_388.FocalLengthInfo.FxFy.field0_0x0._s_0.Y = local_348._s_0.Y * local_330;
  local_388.ImageCenter.PrincipalPoint.field0_0x0._s_0.X = local_358._s_0.X;
  local_388.ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = local_358._s_0.Y;
  if ((pUVar3 != (UClass *)0x0) && (pUVar15 = ULensModel::StaticClass(), pUVar15 != (UClass *)0x0))
  {
    iVar22 = (int)pUVar15->_padding_;
    if (((int)pUVar3->_padding_ < iVar22) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar22 * 8) !=
        &pUVar15->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      this_00 = (this->LensInfo).LensModel.Class.field0_0x0.DebugPtr;
    }
  }
  pUVar16 = UClass::GetDefaultObject<ULensModel>(this_00);
  pUVar17 = (UStruct *)(**(code **)(*(longlong *)pUVar16 + 0x2c0))(pUVar16);
  FStructOnScope::FStructOnScope(&local_1f8,pUVar17);
  pcVar4 = *(code **)(*(longlong *)pUVar16 + 0x2d0);
  uVar18 = (**(code **)(local_1f8._padding_ + 0x10))(&local_1f8);
  uVar19 = (**(code **)(local_1f8._padding_ + 0x20))(&local_1f8);
  (*pcVar4)(pUVar16,uVar19,uVar18,&local_388);
  FStructOnScope::~FStructOnScope(&local_1f8);
  local_410 = (undefined1  [8])0x0;
  local_408.Data = (FScriptContainerElement *)0x0;
  local_400 = 0;
  local_3e8 = 0;
  local_3d0 = 0;
  local_3b8 = 0;
  local_3ac = 0;
  local_3a8.Data = (FScriptContainerElement *)0x0;
  local_3a0 = 0;
  local_398.Data = (FScriptContainerElement *)0x0;
  local_390._0_4_ = 0;
  local_390._4_4_ = 0;
  local_3b0 = true;
  local_3f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3f0.Data = (FScriptContainerElement *)0x0;
  local_3e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3d8.Data = (FScriptContainerElement *)0x0;
  local_3c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3c0.Data = (FScriptContainerElement *)0x0;
  iVar22 = 0;
  if ((TArray<TObjectPtr<UTextureRenderTarget2D>,TSizedDefaultAllocator<32>_> *)&local_3a8 !=
      &this->UndistortionDisplacementMapHolders) {
    uVar1 = (this->UndistortionDisplacementMapHolders).ArrayNum;
    pFVar5 = (this->UndistortionDisplacementMapHolders).AllocatorInstance.Data;
    local_3a0 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,0,&local_3a8,uVar1,(int *)((longlong)&local_3a0 + 4));
      memcpy(local_3a8.Data,pFVar5,(longlong)(int)uVar1 << 3);
      iVar22 = local_390._4_4_;
    }
  }
  if ((TArray<TObjectPtr<UTextureRenderTarget2D>,TSizedDefaultAllocator<32>_> *)&local_398 !=
      &this->DistortionDisplacementMapHolders) {
    iVar2 = (this->DistortionDisplacementMapHolders).ArrayNum;
    pFVar5 = (this->DistortionDisplacementMapHolders).AllocatorInstance.Data;
    local_390._0_4_ = iVar2;
    if ((iVar2 == 0) && (iVar22 == 0)) {
      local_390._0_4_ = 0;
      local_390._4_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,iVar22,&local_398,iVar2,(int *)((longlong)&local_390 + 4));
      if (iVar2 != 0) {
        memcpy(local_398.Data,pFVar5,(longlong)iVar2 << 3);
      }
    }
  }
  local_3ac = local_388.DistortionInfo.Parameters.ArrayNum;
  local_440.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_438.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_438.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_440,(FWriteAccessScope *)&local_238);
  local_220 = &local_438;
  puVar20 = UE::Core::Private::DelegateAllocate(0x20,&local_438);
  if (puVar20 != (undefined8 *)0x0) {
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_UFDistortionInfo____AEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar21;
    *puVar20 = &TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::`2'::<lambda_1>_>
                ::_vftable_;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_440,(FWriteAccessScope *)&local_328);
  iVar22 = local_438.DelegateSize;
  FVar11 = local_438.DelegateAllocator;
  local_438.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_438.DelegateSize = 0;
  if (local_328.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_328.Accessor,&local_328);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_410,
             (FWriteAccessScope *)&local_310);
  if (local_400 == 0) {
LAB_14d6c2012:
    if (local_408.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data);
    }
  }
  else if (local_408.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_408.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_408,0,0,0x10);
    local_400 = 0;
    goto LAB_14d6c2012;
  }
  local_408.Data = (FScriptContainerElement *)FVar11;
  local_400 = iVar22;
  if (local_310.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_310.Accessor,&local_310);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_440,(FWriteAccessScope *)&local_2f8);
  if ((local_438.DelegateSize != 0) &&
     (local_438.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_438.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_438,0,0,0x10);
    local_438.DelegateSize = 0;
  }
  if (local_2f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f8.Accessor,&local_2f8);
  }
  if (local_438.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_438.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_440.AccessDetector);
  local_428.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_420.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_420.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_428,(FWriteAccessScope *)&local_218);
  local_200 = &local_420;
  puVar20 = UE::Core::Private::DelegateAllocate(0x40,&local_420);
  if (puVar20 != (undefined8 *)0x0) {
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6AMAEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve__PEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar21;
    *puVar20 = &TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar20[3] = this;
    puVar20[4] = param_4;
    puVar20[5] = &local_458;
    puVar20[6] = &local_358;
    puVar20[7] = &local_338;
  }
  if (local_218.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_428,(FWriteAccessScope *)&local_2e0);
  iVar22 = local_420.DelegateSize;
  FVar11 = local_420.DelegateAllocator;
  local_420.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_420.DelegateSize = 0;
  if (local_2e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3e0,(FWriteAccessScope *)&local_2c8);
  if (local_3d0 != 0) {
    if (FStack_3d8.Data == (FScriptContainerElement *)0x0) goto LAB_14d6c21e2;
    (*(code *)**(undefined8 **)FStack_3d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3d8,0,0,0x10);
    local_3d0 = 0;
  }
  if (FStack_3d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3d8.Data);
  }
LAB_14d6c21e2:
  FStack_3d8.Data = (FScriptContainerElement *)FVar11;
  local_3d0 = iVar22;
  if (local_2c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_428,(FWriteAccessScope *)&local_2b0);
  if ((local_420.DelegateSize != 0) &&
     (local_420.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_420.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_420,0,0,0x10);
    local_420.DelegateSize = 0;
  }
  if (local_2b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
  }
  if (local_420.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_420.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_428.AccessDetector);
  LensInterpolationUtils::DistortionMapBlend<FDistortionTable>
            (&local_1c8,&this->DistortionTable,param_1,param_2,
             (FDistortionMapBlendParams<FDistortionTable> *)local_410);
  if (local_1c8.bValid == false) {
    ULensDistortionModelHandlerBase::SetDistortionState(param_4,&local_388);
    if ((((local_458 != (param_4->CameraFilmback).SensorWidth) ||
         (fStack_454 != (param_4->CameraFilmback).SensorHeight)) ||
        ((float)uStack_450 != (param_4->CameraFilmback).SensorHorizontalOffset)) ||
       (uStack_450._4_4_ != (param_4->CameraFilmback).SensorVerticalOffset)) {
      (param_4->CameraFilmback).SensorWidth = local_458;
      (param_4->CameraFilmback).SensorHeight = fStack_454;
      (param_4->CameraFilmback).SensorHorizontalOffset = (float)uStack_450;
      (param_4->CameraFilmback).SensorVerticalOffset = uStack_450._4_4_;
      (param_4->CameraFilmback).SensorAspectRatio = local_448;
      (**(code **)(param_4->_padding_ + 0x2f0))(param_4);
      param_4->bIsDirty = true;
    }
    ULensDistortionModelHandlerBase::SetOverscanFactor(param_4,__real_3f800000);
    bVar13 = true;
    if (((param_4->UndistortionDisplacementMapMID).field0_0x0.DebugPtr ==
         (UMaterialInstanceDynamic *)0x0) ||
       ((param_4->DistortionDisplacementMapMID).field0_0x0.DebugPtr ==
        (UMaterialInstanceDynamic *)0x0)) {
      (**(code **)(param_4->_padding_ + 0x2e0))(param_4);
    }
    pUVar6 = (param_4->UndistortionDisplacementMapMID).field0_0x0.DebugPtr;
    if ((pUVar6 != (UMaterialInstanceDynamic *)0x0) &&
       (bVar12 = ULensDistortionModelHandlerBase::IsDisplacementMapMaterialReady(param_4,pUVar6),
       !bVar12)) {
      bVar13 = false;
    }
    pUVar6 = (param_4->DistortionDisplacementMapMID).field0_0x0.DebugPtr;
    if ((pUVar6 == (UMaterialInstanceDynamic *)0x0) ||
       (bVar12 = ULensDistortionModelHandlerBase::IsDisplacementMapMaterialReady(param_4,pUVar6),
       bVar12)) {
      if ((bVar13) && (param_4->bIsDirty != false)) {
        param_4->bIsDirty = false;
        (**(code **)(param_4->_padding_ + 0x2f0))(param_4);
        (**(code **)(param_4->_padding_ + 0x2e8))(param_4);
        pUVar6 = (param_4->UndistortionDisplacementMapMID).field0_0x0.DebugPtr;
        if (pUVar6 != (UMaterialInstanceDynamic *)0x0) {
          UKismetRenderingLibrary::DrawMaterialToRenderTarget
                    ((UObject *)param_4,(param_4->UndistortionDisplacementMapRT).field0_0x0.DebugPtr
                     ,(UMaterialInterface *)pUVar6);
        }
        pUVar6 = (param_4->DistortionDisplacementMapMID).field0_0x0.DebugPtr;
        if (pUVar6 != (UMaterialInstanceDynamic *)0x0) {
          UKismetRenderingLibrary::DrawMaterialToRenderTarget
                    ((UObject *)param_4,(param_4->DistortionDisplacementMapRT).field0_0x0.DebugPtr,
                     (UMaterialInterface *)pUVar6);
        }
      }
    }
  }
  else {
    if ((local_1c8.BlendedDistortionParams.bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    iVar22 = local_1c8.BlendedDistortionParams.TypedValue.Parameters.ArrayNum;
    local_388.DistortionInfo.Parameters.ArrayNum = iVar22;
    if ((iVar22 == 0) && (local_388.DistortionInfo.Parameters.ArrayMax == 0)) {
      local_388.DistortionInfo.Parameters._8_8_ =
           local_1c8.BlendedDistortionParams.TypedValue.Parameters._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar22,local_388.DistortionInfo.Parameters.ArrayMax,
                 (ForAnyElementType *)&local_388,iVar22,
                 &local_388.DistortionInfo.Parameters.ArrayMax);
      if (iVar22 != 0) {
        memcpy(local_388.DistortionInfo.Parameters.AllocatorInstance.Data,
               local_1c8.BlendedDistortionParams.TypedValue.Parameters.AllocatorInstance.Data,
               (longlong)iVar22 << 2);
      }
    }
    ULensDistortionModelHandlerBase::SetDistortionState(param_4,&local_388);
    if ((((local_458 != (param_4->CameraFilmback).SensorWidth) ||
         (fStack_454 != (param_4->CameraFilmback).SensorHeight)) ||
        ((float)uStack_450 != (param_4->CameraFilmback).SensorHorizontalOffset)) ||
       (uStack_450._4_4_ != (param_4->CameraFilmback).SensorVerticalOffset)) {
      (param_4->CameraFilmback).SensorWidth = local_458;
      (param_4->CameraFilmback).SensorHeight = fStack_454;
      (param_4->CameraFilmback).SensorHorizontalOffset = (float)uStack_450;
      (param_4->CameraFilmback).SensorVerticalOffset = uStack_450._4_4_;
      (param_4->CameraFilmback).SensorAspectRatio = local_448;
      (**(code **)(param_4->_padding_ + 0x2f0))(param_4);
      param_4->bIsDirty = true;
    }
    if (((this->UndistortionDisplacementMapHolders).ArrayNum < 4) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    pUVar7 = *(UTextureRenderTarget2D **)
              ((this->UndistortionDisplacementMapHolders).AllocatorInstance.Data + 0x18);
    if (((this->UndistortionDisplacementMapHolders).ArrayNum < 3) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    pUVar8 = *(UTextureRenderTarget2D **)
              ((this->UndistortionDisplacementMapHolders).AllocatorInstance.Data + 0x10);
    if (((this->UndistortionDisplacementMapHolders).ArrayNum < 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    pUVar9 = *(UTextureRenderTarget2D **)
              ((this->UndistortionDisplacementMapHolders).AllocatorInstance.Data + 8);
    if (((this->UndistortionDisplacementMapHolders).ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    pUVar10 = *(UTextureRenderTarget2D **)
               (this->UndistortionDisplacementMapHolders).AllocatorInstance.Data;
    if ((local_1c8.BlendingParams.bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    LensFileRendering::DrawBlendedDisplacementMap
              ((param_4->UndistortionDisplacementMapRT).field0_0x0.DebugPtr,
               &local_1c8.BlendingParams.TypedValue,pUVar10,pUVar9,pUVar8,pUVar7);
    if (((this->DistortionDisplacementMapHolders).ArrayNum < 4) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    pUVar7 = *(UTextureRenderTarget2D **)
              ((this->DistortionDisplacementMapHolders).AllocatorInstance.Data + 0x18);
    if (((this->DistortionDisplacementMapHolders).ArrayNum < 3) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    pUVar8 = *(UTextureRenderTarget2D **)
              ((this->DistortionDisplacementMapHolders).AllocatorInstance.Data + 0x10);
    if (((this->DistortionDisplacementMapHolders).ArrayNum < 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    pUVar9 = *(UTextureRenderTarget2D **)
              ((this->DistortionDisplacementMapHolders).AllocatorInstance.Data + 8);
    if (((this->DistortionDisplacementMapHolders).ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    pUVar10 = *(UTextureRenderTarget2D **)
               (this->DistortionDisplacementMapHolders).AllocatorInstance.Data;
    if ((local_1c8.BlendingParams.bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    LensFileRendering::DrawBlendedDisplacementMap
              ((param_4->DistortionDisplacementMapRT).field0_0x0.DebugPtr,
               &local_1c8.BlendingParams.TypedValue,pUVar10,pUVar9,pUVar8,pUVar7);
    if ((local_1c8.BlendedOverscan.bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    ULensDistortionModelHandlerBase::SetOverscanFactor(param_4,local_1c8.BlendedOverscan.TypedValue)
    ;
  }
  LensInterpolationUtils::FDistortionMapBlendResults::~FDistortionMapBlendResults(&local_1c8);
  if (local_398.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data);
  }
  if (local_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3c8,(FWriteAccessScope *)&local_298);
  if ((local_3b8 != 0) && (FStack_3c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c0,0,0,0x10);
    local_3b8 = 0;
  }
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  if (FStack_3c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3c8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3e0,(FWriteAccessScope *)&local_280);
  if ((local_3d0 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_3d8.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_3d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3d8,0,0,0x10);
    local_3d0 = 0;
  }
  if (local_280.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_280.Accessor,&local_280);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_3d8.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_3d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3e0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3f8,(FWriteAccessScope *)&local_268);
  if ((local_3e8 != 0) && (FStack_3f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3f0,0,0,0x10);
    local_3e8 = 0;
  }
  if (local_268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
  }
  if (FStack_3f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3f8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_410,
             (FWriteAccessScope *)&local_250);
  if ((local_400 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)local_408.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_408.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_408,0,0,0x10);
    local_400 = 0;
  }
  if (local_250.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_408.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_408.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_410);
  if (local_388.DistortionInfo.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_388.DistortionInfo.Parameters.AllocatorInstance.Data);
  }
  return true;
}

// EvaluateDistortionForSTMaps @ 14d6c2aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ULensFile::EvaluateDistortionForSTMaps
          (ULensFile *this,float param_1,float param_2,TVector2<double> *param_3,
          ULensDistortionModelHandlerBase *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UTextureRenderTarget2D *pUVar5;
  UTextureRenderTarget2D *pUVar6;
  UTextureRenderTarget2D *pUVar7;
  longlong lVar8;
  code *pcVar9;
  float fVar10;
  ForElementType<TAlignedBytes<16,16>_> FVar11;
  int iVar12;
  bool bVar13;
  undefined1 uVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  bool bVar17;
  FName local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_458;
  FDelegateAllocation local_450;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_440;
  FDelegateAllocation local_438;
  TVector2<double>_u_0 local_428;
  undefined1 local_418 [24];
  undefined1 local_400 [8];
  ForAnyElementType FStack_3f8;
  int local_3f0;
  undefined1 local_3e8 [8];
  ForAnyElementType FStack_3e0;
  int local_3d8;
  TDelegate<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy>
  local_3d0;
  bool local_3b8;
  int local_3b4;
  ForAnyElementType local_3b0;
  undefined8 local_3a8;
  ForAnyElementType local_3a0;
  undefined8 local_398;
  FName local_390;
  FName local_388;
  FString local_380;
  FString local_370;
  FString local_360;
  float local_350;
  float fStack_34c;
  undefined8 uStack_348;
  TVector2<double>_u_0 local_338;
  FDestructionSentinel local_328;
  FDestructionSentinel local_310;
  FDestructionSentinel local_2f8;
  FDestructionSentinel local_2e0;
  FDestructionSentinel local_2c8;
  FDestructionSentinel local_2b0;
  FLensDistortionState local_298;
  FDestructionSentinel local_268;
  FDelegateAllocation *local_250;
  FDestructionSentinel local_248;
  FDelegateAllocation *local_230;
  FDistortionMapBlendResults local_228;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId553,"ULensFile::EvaluateDistortionForSTMaps",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
               ,0x229);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId553);
  }
  fVar10 = __real_3faa3d71;
  if (this->DerivedDataInFlightCount < 1) {
    dVar1 = (this->LensInfo).SensorDimensions.field0_0x0._s_0.X;
    dVar2 = (param_3->field0_0x0)._s_0.X;
    if (dVar2 <= dVar1 + __real_3f1a36e2eb1c432d) {
      dVar3 = (this->LensInfo).SensorDimensions.field0_0x0._s_0.Y;
      dVar4 = (param_3->field0_0x0)._s_0.Y;
      if (dVar4 <= dVar3 + __real_3f1a36e2eb1c432d) {
        uStack_348 = 0;
        dVar1 = dVar2 / dVar1;
        dVar3 = dVar4 / dVar3;
        local_338._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
        local_338._s_0.Y = _UNK_152bc18c8;
        local_350 = (float)dVar2;
        fStack_34c = (float)dVar4;
        EvaluateFocalLength(this,param_1,param_2,(FFocalLengthInfo *)&local_338._s_0);
        local_428._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
        local_428._s_0.Y = _UNK_150689678;
        EvaluateImageCenterParameters(this,param_1,param_2,(FImageCenterInfo *)&local_428._s_0);
        local_3b8 = true;
        local_418._0_8_ = 0;
        local_418._8_8_ = 0;
        local_418._16_4_ = 0;
        local_3f0 = 0;
        local_400 = (undefined1  [8])0x0;
        FStack_3f8.Data = (FScriptContainerElement *)0x0;
        local_3d8 = 0;
        local_3e8 = (undefined1  [8])0x0;
        FStack_3e0.Data = (FScriptContainerElement *)0x0;
        local_3d0._16_4_ = 0;
        local_3d0._0_8_ = 0;
        local_3d0._8_8_ = 0;
        local_3b4 = 0;
        local_3b0.Data = (FScriptContainerElement *)0x0;
        local_3a8._0_4_ = 0;
        local_3a8._4_4_ = 0;
        local_3a0.Data = (FScriptContainerElement *)0x0;
        local_398._0_4_ = 0;
        local_398._4_4_ = 0;
        local_458.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_450.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_450.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_458,(FWriteAccessScope *)&local_268);
        local_250 = &local_450;
        puVar15 = UE::Core::Private::DelegateAllocate(0x20,&local_450);
        if (puVar15 != (undefined8 *)0x0) {
          *puVar15 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEBUFSTMapFocusPoint__AEBUFSTMapFocusCurve__AEAPEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar16 = FDelegateHandle::GenerateNewID();
          puVar15[2] = uVar16;
          *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::`2'::<lambda_1>_>
                      ::_vftable_;
        }
        if (local_268.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_458,(FWriteAccessScope *)&local_328);
        iVar12 = local_450.DelegateSize;
        FVar11 = local_450.DelegateAllocator;
        local_450.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_450.DelegateSize = 0;
        if (local_328.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_328.Accessor,&local_328);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_400,
                   (FWriteAccessScope *)&local_310);
        if (local_3f0 == 0) {
LAB_14d6c2db8:
          if (FStack_3f8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_3f8.Data);
          }
        }
        else if (FStack_3f8.Data != (FScriptContainerElement *)0x0) {
          (*(code *)**(undefined8 **)FStack_3f8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3f8,0,0,0x10)
          ;
          local_3f0 = 0;
          goto LAB_14d6c2db8;
        }
        FStack_3f8.Data = (FScriptContainerElement *)FVar11;
        local_3f0 = iVar12;
        if (local_310.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_310.Accessor,&local_310);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_458,(FWriteAccessScope *)&local_2f8);
        if ((local_450.DelegateSize != 0) &&
           (local_450.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_450.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_450,0,0,0x10);
          local_450.DelegateSize = 0;
        }
        if (local_2f8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f8.Accessor,&local_2f8);
        }
        if (local_450.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_450.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_458.AccessDetector);
        local_440.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_438.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_438.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_440,(FWriteAccessScope *)&local_248);
        local_230 = &local_438;
        puVar15 = UE::Core::Private::DelegateAllocate(0x28,&local_438);
        if (puVar15 != (undefined8 *)0x0) {
          *puVar15 = &
                     ___7__TCommonDelegateInstanceState___A6AMAEBUFSTMapFocusPoint__AEBUFSTMapFocusCurve__PEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar16 = FDelegateHandle::GenerateNewID();
          puVar15[2] = uVar16;
          *puVar15 = &TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::`2'::<lambda_2>_>
                      ::_vftable_;
          puVar15[3] = this;
          puVar15[4] = &local_428;
        }
        if (local_248.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_440,(FWriteAccessScope *)&local_2e0);
        iVar12 = local_438.DelegateSize;
        FVar11 = local_438.DelegateAllocator;
        local_438.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_438.DelegateSize = 0;
        if (local_2e0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e8,
                   (FWriteAccessScope *)&local_2c8);
        if (local_3d8 == 0) {
LAB_14d6c2f6c:
          if (FStack_3e0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_3e0.Data);
          }
        }
        else if (FStack_3e0.Data != (FScriptContainerElement *)0x0) {
          (*(code *)**(undefined8 **)FStack_3e0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e0,0,0,0x10)
          ;
          local_3d8 = 0;
          goto LAB_14d6c2f6c;
        }
        FStack_3e0.Data = (FScriptContainerElement *)FVar11;
        local_3d8 = iVar12;
        if (local_2c8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_440,(FWriteAccessScope *)&local_2b0);
        if ((local_438.DelegateSize != 0) &&
           (local_438.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_438.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_438,0,0,0x10);
          local_438.DelegateSize = 0;
        }
        if (local_2b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
        }
        if (local_438.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_438.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_440.AccessDetector);
        LensInterpolationUtils::DistortionMapBlend<FSTMapTable>
                  (&local_228,&this->STMapTable,param_1,param_2,
                   (FDistortionMapBlendParams<FSTMapTable> *)local_418);
        if (local_228.bValid == false) {
          if (5 < (byte)LogCameraCalibrationCore._0_1_) {
            local_390 = (FName)this->_padding_;
            ::FName::ToString(&local_390,&local_370);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
            if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_370.Data.AllocatorInstance.Data);
            }
          }
          SetupNoDistortionOutput(this,param_4);
        }
        else {
          if ((local_228.BlendingParams.bIsSet == false) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          local_228.BlendingParams.TypedValue.PrincipalPoint.field0_0x0._s_0.X = local_428._s_0.X;
          local_228.BlendingParams.TypedValue.PrincipalPoint.field0_0x0._s_0.Y = local_428._s_0.Y;
          local_228.BlendingParams.TypedValue.FxFyScale.field0_0x0._s_0.X = dVar1;
          local_228.BlendingParams.TypedValue.FxFyScale.field0_0x0._s_0.Y = dVar3;
          if ((local_228.UndistortedMaps.field0_0x0.TypedValue.ArrayMax == -1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          if ((local_228.UndistortedMaps.field0_0x0.TypedValue.ArrayNum < 4) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          pUVar5 = *(UTextureRenderTarget2D **)
                    ((longlong)
                     local_228.UndistortedMaps.field0_0x0.TypedValue.AllocatorInstance.Data + 0x18);
          if ((local_228.UndistortedMaps.field0_0x0.TypedValue.ArrayMax == -1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          if ((local_228.UndistortedMaps.field0_0x0.TypedValue.ArrayNum < 3) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          pUVar6 = *(UTextureRenderTarget2D **)
                    ((longlong)
                     local_228.UndistortedMaps.field0_0x0.TypedValue.AllocatorInstance.Data + 0x10);
          if ((local_228.UndistortedMaps.field0_0x0.TypedValue.ArrayMax == -1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          if ((local_228.UndistortedMaps.field0_0x0.TypedValue.ArrayNum < 2) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          pUVar7 = *(UTextureRenderTarget2D **)
                    ((longlong)
                     local_228.UndistortedMaps.field0_0x0.TypedValue.AllocatorInstance.Data + 8);
          if ((local_228.UndistortedMaps.field0_0x0.TypedValue.ArrayMax == -1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          if ((local_228.UndistortedMaps.field0_0x0.TypedValue.ArrayNum < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          LensFileRendering::DrawBlendedDisplacementMap
                    ((param_4->UndistortionDisplacementMapRT).field0_0x0.DebugPtr,
                     &local_228.BlendingParams.TypedValue,
                     *(UTextureRenderTarget2D **)
                      local_228.UndistortedMaps.field0_0x0.TypedValue.AllocatorInstance.Data,pUVar7,
                     pUVar6,pUVar5);
          if ((local_228.DistortedMaps.field0_0x0.TypedValue.ArrayMax == -1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          if ((local_228.DistortedMaps.field0_0x0.TypedValue.ArrayNum < 4) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          pUVar5 = *(UTextureRenderTarget2D **)
                    ((longlong)local_228.DistortedMaps.field0_0x0.TypedValue.AllocatorInstance.Data
                    + 0x18);
          if ((local_228.DistortedMaps.field0_0x0.TypedValue.ArrayMax == -1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          if ((local_228.DistortedMaps.field0_0x0.TypedValue.ArrayNum < 3) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          pUVar6 = *(UTextureRenderTarget2D **)
                    ((longlong)local_228.DistortedMaps.field0_0x0.TypedValue.AllocatorInstance.Data
                    + 0x10);
          if ((local_228.DistortedMaps.field0_0x0.TypedValue.ArrayMax == -1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          if ((local_228.DistortedMaps.field0_0x0.TypedValue.ArrayNum < 2) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          pUVar7 = *(UTextureRenderTarget2D **)
                    ((longlong)local_228.DistortedMaps.field0_0x0.TypedValue.AllocatorInstance.Data
                    + 8);
          if ((local_228.DistortedMaps.field0_0x0.TypedValue.ArrayMax == -1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          if ((local_228.DistortedMaps.field0_0x0.TypedValue.ArrayNum < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          LensFileRendering::DrawBlendedDisplacementMap
                    ((param_4->DistortionDisplacementMapRT).field0_0x0.DebugPtr,
                     &local_228.BlendingParams.TypedValue,
                     *(UTextureRenderTarget2D **)
                      local_228.DistortedMaps.field0_0x0.TypedValue.AllocatorInstance.Data,pUVar7,
                     pUVar6,pUVar5);
          local_298.DistortionInfo.Parameters.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_298.DistortionInfo.Parameters.ArrayNum = 0;
          local_298.DistortionInfo.Parameters.ArrayMax = 0;
          local_298.FocalLengthInfo.FxFy.field0_0x0._s_0.X = local_338._s_0.X * dVar1;
          local_298.FocalLengthInfo.FxFy.field0_0x0._s_0.Y = local_338._s_0.Y * dVar3;
          local_298.ImageCenter.PrincipalPoint.field0_0x0._s_0.X = local_428._s_0.X;
          local_298.ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = local_428._s_0.Y;
          ULensDistortionModelHandlerBase::SetDistortionState(param_4,&local_298);
          if (((((float)dVar2 != (param_4->CameraFilmback).SensorWidth) ||
               ((float)dVar4 != (param_4->CameraFilmback).SensorHeight)) ||
              ((param_4->CameraFilmback).SensorHorizontalOffset != 0.0)) ||
             ((param_4->CameraFilmback).SensorVerticalOffset != 0.0)) {
            lVar8 = param_4->_padding_;
            (param_4->CameraFilmback).SensorWidth = local_350;
            (param_4->CameraFilmback).SensorHeight = fStack_34c;
            (param_4->CameraFilmback).SensorHorizontalOffset = (float)(undefined4)uStack_348;
            (param_4->CameraFilmback).SensorVerticalOffset = (float)uStack_348._4_4_;
            (param_4->CameraFilmback).SensorAspectRatio = fVar10;
            (**(code **)(lVar8 + 0x2f0))(param_4);
            param_4->bIsDirty = true;
          }
          if ((local_228.BlendedOverscan.bIsSet == false) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          ULensDistortionModelHandlerBase::SetOverscanFactor
                    (param_4,local_228.BlendedOverscan.TypedValue);
          if (local_298.DistortionInfo.Parameters.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.DistortionInfo.Parameters.AllocatorInstance.Data);
          }
        }
        bVar13 = true;
        LensInterpolationUtils::FDistortionMapBlendResults::~FDistortionMapBlendResults(&local_228);
        if (local_3a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a0.Data);
        }
        if (local_3b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b0.Data);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3d0);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e8);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_400);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_418);
        goto LAB_14d6c36d7;
      }
    }
    if (5 < (byte)LogCameraCalibrationCore._0_1_) {
      local_388 = (FName)this->_padding_;
      ::FName::ToString(&local_388,&local_360);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore)
      ;
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
    }
    bVar13 = false;
  }
  else {
    if (5 < (byte)LogCameraCalibrationCore._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_380);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore)
      ;
      if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data.AllocatorInstance.Data);
      }
    }
    bVar13 = true;
  }
  LensFileRendering::ClearDisplacementMap
            ((param_4->UndistortionDisplacementMapRT).field0_0x0.DebugPtr);
  LensFileRendering::ClearDisplacementMap
            ((param_4->DistortionDisplacementMapRT).field0_0x0.DebugPtr);
  ULensDistortionModelHandlerBase::SetOverscanFactor(param_4,__real_3f800000);
LAB_14d6c36d7:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

// EvaluateDistortionParameters @ 14d6c3740

bool __thiscall
ULensFile::EvaluateDistortionParameters
          (ULensFile *this,float param_1,float param_2,FDistortionInfo *param_3)

{
  code *pcVar1;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  bool bVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_328;
  FDelegateAllocation local_320;
  undefined1 local_310 [8];
  ForAnyElementType local_308;
  int local_300;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f8;
  ForAnyElementType FStack_2f0;
  int local_2e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2e0;
  ForAnyElementType FStack_2d8;
  int local_2d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2c8;
  ForAnyElementType FStack_2c0;
  int local_2b8;
  bool local_2b0;
  int local_2ac;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  ForAnyElementType local_298;
  undefined8 local_290;
  FDestructionSentinel local_288;
  FDestructionSentinel local_270;
  FDestructionSentinel local_258;
  FDestructionSentinel local_240;
  FDestructionSentinel local_228;
  FDestructionSentinel local_210;
  FDestructionSentinel local_1f8;
  FDestructionSentinel local_1e0;
  FDelegateAllocation *local_1c8;
  FDistortionMapBlendResults local_1b8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId261,"ULensFile::EvaluateDistortionParameters",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
               ,0x105);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId261);
  }
  local_310 = (undefined1  [8])0x0;
  local_308.Data = (FScriptContainerElement *)0x0;
  local_300 = 0;
  local_2f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2f0.Data = (FScriptContainerElement *)0x0;
  local_2e8 = 0;
  local_2e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2d8.Data = (FScriptContainerElement *)0x0;
  local_2d0 = 0;
  local_2c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2c0.Data = (FScriptContainerElement *)0x0;
  local_2b8 = 0;
  local_2b0 = false;
  local_2ac = 0;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0._0_4_ = 0;
  local_2a0._4_4_ = 0;
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290._0_4_ = 0;
  local_290._4_4_ = 0;
  local_328.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_320.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_320.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_328,(FWriteAccessScope *)&local_1e0);
  local_1c8 = &local_320;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_320);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_UFDistortionInfo____AEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_1e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_328,(FWriteAccessScope *)&local_288);
  iVar3 = local_320.DelegateSize;
  FVar2 = local_320.DelegateAllocator;
  local_320.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_320.DelegateSize = 0;
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_310,
             (FWriteAccessScope *)&local_270);
  if (local_300 != 0) {
    if (local_308.Data == (FScriptContainerElement *)0x0) goto LAB_14d6c3903;
    (*(code *)**(undefined8 **)local_308.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_308,0,0,0x10);
    local_300 = 0;
  }
  if (local_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data);
  }
LAB_14d6c3903:
  local_308.Data = (FScriptContainerElement *)FVar2;
  local_300 = iVar3;
  if (local_270.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_328,(FWriteAccessScope *)&local_258);
  if ((local_320.DelegateSize != 0) &&
     (local_320.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_320.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_320,0,0,0x10);
    local_320.DelegateSize = 0;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (local_320.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_320.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_328.AccessDetector);
  local_2ac = (param_3->Parameters).ArrayNum;
  LensInterpolationUtils::DistortionMapBlend<FDistortionTable>
            (&local_1b8,&this->DistortionTable,param_1,param_2,
             (FDistortionMapBlendParams<FDistortionTable> *)local_310);
  if (local_1b8.bValid == false) {
    bVar4 = false;
  }
  else {
    if ((local_1b8.BlendedDistortionParams.bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&param_3->Parameters,
               (TArray<float,TSizedDefaultAllocator<32>_> *)&local_1b8.BlendedDistortionParams);
    bVar4 = true;
  }
  LensInterpolationUtils::FDistortionMapBlendResults::~FDistortionMapBlendResults(&local_1b8);
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2c8,(FWriteAccessScope *)&local_240);
  if ((local_2b8 != 0) && (FStack_2c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c0,0,0,0x10);
    local_2b8 = 0;
  }
  if (local_240.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
  }
  if (FStack_2c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2e0,(FWriteAccessScope *)&local_228);
  if ((local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d8,0,0,0x10);
    local_2d0 = 0;
  }
  if (local_228.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
  }
  if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2e0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f8,(FWriteAccessScope *)&local_210);
  if ((local_2e8 != 0) && (FStack_2f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2f0,0,0,0x10);
    local_2e8 = 0;
  }
  if (local_210.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
  }
  if (FStack_2f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_310,
             (FWriteAccessScope *)&local_1f8);
  if ((local_300 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)local_308.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_308.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_308,0,0,0x10);
    local_300 = 0;
  }
  if (local_1f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_308.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_308.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// EvaluateFocalLength @ 14d6c3c30

bool __thiscall
ULensFile::EvaluateFocalLength
          (ULensFile *this,float param_1,float param_2,FFocalLengthInfo *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  bool bVar5;
  TArray<float,TSizedDefaultAllocator<32>_> local_38 [3];
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId295,"ULensFile::EvaluateFocalLength",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
               ,0x127);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId295);
  }
  local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38[0].ArrayNum = 0;
  local_38[0].ArrayMax = 0;
  bVar2 = LensInterpolationUtils::
          IndexedParameterBlend<FFocalLengthFocusPoint,FFocalLengthFocusCurve>
                    (&(this->FocalLengthTable).FocusPoints,&(this->FocalLengthTable).FocusCurves,
                     param_1,param_2,2,local_38);
  if (bVar2) {
    if (local_38[0].ArrayNum != 2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1167283261064347347>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
                         ,0x12d,"BlendedParameters.Num() == NumParams");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    iVar4 = local_38[0].ArrayNum;
    if (local_38[0].ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar4 = local_38[0].ArrayNum;
    }
    (param_3->FxFy).field0_0x0._s_0.X = (double)*(float *)local_38[0].AllocatorInstance.Data;
    if ((iVar4 < 2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (param_3->FxFy).field0_0x0._s_0.Y = (double)*(float *)(local_38[0].AllocatorInstance.Data + 4);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// EvaluateImageCenterParameters @ 14d6c3e00

bool __thiscall
ULensFile::EvaluateImageCenterParameters
          (ULensFile *this,float param_1,float param_2,FImageCenterInfo *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  bool bVar5;
  TArray<float,TSizedDefaultAllocator<32>_> local_38 [3];
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId313,"ULensFile::EvaluateImageCenterParameters",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
               ,0x139);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId313);
  }
  local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38[0].ArrayNum = 0;
  local_38[0].ArrayMax = 0;
  bVar2 = LensInterpolationUtils::
          IndexedParameterBlend<FImageCenterFocusPoint,FImageCenterFocusCurve>
                    (&(this->ImageCenterTable).FocusPoints,&(this->ImageCenterTable).FocusCurves,
                     param_1,param_2,2,local_38);
  if (bVar2) {
    if (local_38[0].ArrayNum != 2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1167283261064347329>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
                         ,0x13f,"BlendedParameters.Num() == NumParams");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    iVar4 = local_38[0].ArrayNum;
    if (local_38[0].ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar4 = local_38[0].ArrayNum;
    }
    (param_3->PrincipalPoint).field0_0x0._s_0.X =
         (double)*(float *)local_38[0].AllocatorInstance.Data;
    if ((iVar4 < 2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (param_3->PrincipalPoint).field0_0x0._s_0.Y =
         (double)*(float *)(local_38[0].AllocatorInstance.Data + 4);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// EvaluateNodalPointOffset @ 14d6c3fd0

bool __thiscall
ULensFile::EvaluateNodalPointOffset
          (ULensFile *this,float param_1,float param_2,FNodalPointOffset *param_3)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  TQuat<double> *pTVar9;
  double *pdVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  TArray<float,TSizedDefaultAllocator<32>_> local_88;
  TRotator<double> local_78;
  double local_60 [3];
  TQuat<double> local_48 [2];
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId656,"ULensFile::EvaluateNodalPointOffset",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
               ,0x290);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId656);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  bVar6 = LensInterpolationUtils::
          IndexedParameterBlend<FNodalOffsetFocusPoint,FNodalOffsetFocusCurve>
                    (&(this->NodalOffsetTable).FocusPoints,&(this->NodalOffsetTable).FocusCurves,
                     param_1,param_2,6,&local_88);
  if (bVar6) {
    if ((local_88.ArrayNum != 6) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1167283261064346986>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
                           ,0x296,"BlendedParameters.Num() == NumParams"), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    pdVar10 = local_60;
    lVar11 = 0;
    iVar12 = 0;
    do {
      if ((local_88.ArrayNum <= iVar12) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      uVar8 = 0;
      if ((int)(iVar12 + 3U) < local_88.ArrayNum) {
        uVar8 = ~(iVar12 + 3U) >> 0x1f;
      }
      *pdVar10 = (double)*(float *)(local_88.AllocatorInstance.Data + lVar11);
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      iVar1 = iVar12 + 1;
      dVar3 = (double)*(float *)(local_88.AllocatorInstance.Data + lVar11 + 0xc);
      dVar4 = local_78.Pitch;
      dVar5 = dVar3;
      if (((iVar12 != 0) && (dVar4 = dVar3, dVar5 = local_78.Roll, iVar12 != 1)) &&
         (dVar4 = local_78.Pitch, iVar12 == 2)) {
        local_78.Yaw = dVar3;
      }
      local_78.Roll = dVar5;
      local_78.Pitch = dVar4;
      lVar11 = lVar11 + 4;
      pdVar10 = pdVar10 + 1;
      iVar12 = iVar1;
    } while (iVar1 < 3);
    (param_3->LocationOffset).field0_0x0._s_0.X = local_60[0];
    (param_3->LocationOffset).field0_0x0._s_0.Y = local_60[1];
    (param_3->LocationOffset).field0_0x0._s_0.Z = local_60[2];
    pTVar9 = UE::Math::TRotator<double>::Quaternion(&local_78,local_48);
    bVar6 = true;
    dVar3 = pTVar9->Y;
    dVar4 = pTVar9->Z;
    dVar5 = pTVar9->W;
    (param_3->RotationOffset).X = pTVar9->X;
    (param_3->RotationOffset).Y = dVar3;
    (param_3->RotationOffset).Z = dVar4;
    (param_3->RotationOffset).W = dVar5;
  }
  else {
    bVar6 = false;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// EvaluateNormalizedFocus @ 14d6c4250

float __thiscall ULensFile::EvaluateNormalizedFocus(ULensFile *this,float param_1)

{
  float fVar1;
  
  fVar1 = FRichCurve::Eval(&(this->EncodersTable).Focus,param_1,0.0);
  return fVar1;
}

// EvaluateNormalizedIris @ 14d6c4270

float __thiscall ULensFile::EvaluateNormalizedIris(ULensFile *this,float param_1)

{
  float fVar1;
  
  fVar1 = FRichCurve::Eval(&(this->EncodersTable).Iris,param_1,0.0);
  return fVar1;
}

// GetBlendState @ 14d6d20e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ULensFile::GetBlendState
          (ULensFile *this,float param_1,float param_2,TVector2<double> *param_3,
          FDisplacementMapBlendingParams *param_4)

{
  double dVar1;
  double dVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_338;
  FDelegateAllocation local_330;
  undefined1 local_320 [8];
  ForAnyElementType local_318;
  int local_310;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_308;
  ForAnyElementType FStack_300;
  int local_2f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f0;
  ForAnyElementType FStack_2e8;
  int local_2e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2d8;
  ForAnyElementType FStack_2d0;
  int local_2c8;
  bool local_2c0;
  int local_2bc;
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  TVector2<double>_u_0 local_298;
  FDestructionSentinel local_288;
  FDestructionSentinel local_270;
  FDestructionSentinel local_258;
  FDestructionSentinel local_240;
  FDestructionSentinel local_228;
  FDestructionSentinel local_210;
  FDestructionSentinel local_1f8;
  FDestructionSentinel local_1e0;
  FDelegateAllocation *local_1c8;
  FDistortionMapBlendResults local_1b8;
  
  local_308.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_300.Data = (FScriptContainerElement *)0x0;
  local_2d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2d0.Data = (FScriptContainerElement *)0x0;
  local_320 = (undefined1  [8])0x0;
  local_298._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_298._s_0.Y = _UNK_150689678;
  local_318.Data = (FScriptContainerElement *)0x0;
  local_310 = 0;
  local_2f8 = 0;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  local_2e0 = 0;
  local_2c8 = 0;
  local_2bc = 0;
  local_2b8.Data = (FScriptContainerElement *)0x0;
  local_2b0._0_4_ = 0;
  local_2b0._4_4_ = 0;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0._0_4_ = 0;
  local_2a0._4_4_ = 0;
  local_2c0 = true;
  EvaluateImageCenterParameters(this,param_1,param_2,(FImageCenterInfo *)&local_298._s_0);
  local_338.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_330.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_330.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_338,(FWriteAccessScope *)&local_1e0);
  local_1c8 = &local_330;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_330);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve__AEAUFLensDistortionState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = this;
    puVar5[4] = &local_298;
  }
  if (local_1e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_338,(FWriteAccessScope *)&local_288);
  iVar4 = local_330.DelegateSize;
  FVar3 = local_330.DelegateAllocator;
  local_330.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_330.DelegateSize = 0;
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2d8,(FWriteAccessScope *)&local_270);
  if (local_2c8 != 0) {
    if (FStack_2d0.Data == (FScriptContainerElement *)0x0) goto LAB_14d6d227e;
    (*(code *)**(undefined8 **)FStack_2d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d0,0,0,0x10);
    local_2c8 = 0;
  }
  if (FStack_2d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d0.Data);
  }
LAB_14d6d227e:
  FStack_2d0.Data = (FScriptContainerElement *)FVar3;
  local_2c8 = iVar4;
  if (local_270.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_338,(FWriteAccessScope *)&local_258);
  if ((local_330.DelegateSize != 0) &&
     (local_330.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_330.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_330,0,0,0x10);
    local_330.DelegateSize = 0;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (local_330.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_330.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_338.AccessDetector);
  LensInterpolationUtils::DistortionMapBlend<FDistortionTable>
            (&local_1b8,&this->DistortionTable,param_1,param_2,
             (FDistortionMapBlendParams<FDistortionTable> *)local_320);
  if (local_1b8.BlendingParams.bIsSet != false) {
    FDisplacementMapBlendingParams::operator=(param_4,&local_1b8.BlendingParams.TypedValue);
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    dVar2 = (this->LensInfo).SensorDimensions.field0_0x0._s_0.Y;
    (param_4->FxFyScale).field0_0x0._s_0.X =
         (param_3->field0_0x0)._s_0.X / (this->LensInfo).SensorDimensions.field0_0x0._s_0.X;
    (param_4->FxFyScale).field0_0x0._s_0.Y = dVar1 / dVar2;
  }
  LensInterpolationUtils::FDistortionMapBlendResults::~FDistortionMapBlendResults(&local_1b8);
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  if (local_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2d8,(FWriteAccessScope *)&local_240);
  if ((local_2c8 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_2d0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_2d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d0,0,0,0x10);
    local_2c8 = 0;
  }
  if (local_240.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_2d0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_2d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2d8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f0,(FWriteAccessScope *)&local_228);
  if ((local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = 0;
  }
  if (local_228.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_308,(FWriteAccessScope *)&local_210);
  if ((local_2f8 != 0) && (FStack_300.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_300.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_300,0,0,0x10);
    local_2f8 = 0;
  }
  if (local_210.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
  }
  if (FStack_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_300.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_308.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_320,
             (FWriteAccessScope *)&local_1f8);
  if ((local_310 != 0) && (local_318.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_318.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_318,0,0,0x10);
    local_310 = 0;
  }
  if (local_1f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
  }
  if (local_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_320);
  return;
}

// GetDataTable @ 14d6d3540

FBaseLensTable * __thiscall ULensFile::GetDataTable(ULensFile *this,ELensDataCategory param_1)

{
  switch(param_1) {
  default:
    return (FBaseLensTable *)0x0;
  case Zoom:
    return (FBaseLensTable *)&this->FocalLengthTable;
  case Distortion:
    return (FBaseLensTable *)&this->DistortionTable;
  case ImageCenter:
    return (FBaseLensTable *)&this->ImageCenterTable;
  case STMap:
    return (FBaseLensTable *)&this->STMapTable;
  case NodalOffset:
    return (FBaseLensTable *)&this->NodalOffsetTable;
  }
}

// GetDataTable @ 14d6d35b0

FBaseLensTable * __thiscall ULensFile::GetDataTable(ULensFile *this,ELensDataCategory param_1)

{
  switch(param_1) {
  default:
    return (FBaseLensTable *)0x0;
  case Zoom:
    return (FBaseLensTable *)&this->FocalLengthTable;
  case Distortion:
    return (FBaseLensTable *)&this->DistortionTable;
  case ImageCenter:
    return (FBaseLensTable *)&this->ImageCenterTable;
  case STMap:
    return (FBaseLensTable *)&this->STMapTable;
  case NodalOffset:
    return (FBaseLensTable *)&this->NodalOffsetTable;
  }
}

// GetDistortionPoint @ 14d6d39c0

bool __thiscall
ULensFile::GetDistortionPoint(ULensFile *this,float param_1,float param_2,FDistortionInfo *param_3)

{
  bool bVar1;
  
  bVar1 = FDistortionTable::GetPoint
                    (&this->DistortionTable,param_1,param_2,param_3,this->InputTolerance);
  return bVar1;
}

// GetDistortionPoints @ 14d6d39f0

TArray<FDistortionPointInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULensFile::GetDistortionPoints
          (ULensFile *this,
          TArray<FDistortionPointInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  LensDataTableUtils::GetAllPointsInfo<FDistortionPointInfo,FDistortionTable>
            (__return_storage_ptr__,&this->DistortionTable);
  return __return_storage_ptr__;
}

// GetFocalLengthPoint @ 14d6d3b90

bool __thiscall
ULensFile::GetFocalLengthPoint
          (ULensFile *this,float param_1,float param_2,FFocalLengthInfo *param_3)

{
  bool bVar1;
  FFocalLengthFocusPoint *pFVar2;
  FFocalLengthFocusPoint *this_00;
  
  this_00 = (FFocalLengthFocusPoint *)(this->FocalLengthTable).FocusPoints.AllocatorInstance.Data;
  pFVar2 = this_00 + (this->FocalLengthTable).FocusPoints.ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return false;
    }
    if ((float)((uint)(this_00->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        this->InputTolerance) break;
    this_00 = this_00 + 1;
  }
  bVar1 = FFocalLengthFocusPoint::GetPoint(this_00,param_2,param_3,this->InputTolerance);
  if (!bVar1) {
    return false;
  }
  return true;
}

// GetFocalLengthPoints @ 14d6d3c20

TArray<FFocalLengthPointInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULensFile::GetFocalLengthPoints
          (ULensFile *this,
          TArray<FFocalLengthPointInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  LensDataTableUtils::GetAllPointsInfo<FFocalLengthPointInfo,FFocalLengthTable>
            (__return_storage_ptr__,&this->FocalLengthTable);
  return __return_storage_ptr__;
}

// GetImageCenterPoint @ 14d6d5050

bool __thiscall
ULensFile::GetImageCenterPoint
          (ULensFile *this,float param_1,float param_2,FImageCenterInfo *param_3)

{
  bool bVar1;
  
  bVar1 = FImageCenterTable::GetPoint
                    (&this->ImageCenterTable,param_1,param_2,param_3,this->InputTolerance);
  return bVar1;
}

// GetImageCenterPoints @ 14d6d5080

TArray<FImageCenterPointInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULensFile::GetImageCenterPoints
          (ULensFile *this,
          TArray<FImageCenterPointInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  LensDataTableUtils::GetAllPointsInfo<FImageCenterPointInfo,FImageCenterTable>
            (__return_storage_ptr__,&this->ImageCenterTable);
  return __return_storage_ptr__;
}

// GetNodalOffsetPoint @ 14d6d6030

bool __thiscall
ULensFile::GetNodalOffsetPoint
          (ULensFile *this,float param_1,float param_2,FNodalPointOffset *param_3)

{
  bool bVar1;
  
  bVar1 = FNodalOffsetTable::GetPoint
                    (&this->NodalOffsetTable,param_1,param_2,param_3,this->InputTolerance);
  return bVar1;
}

// GetNodalOffsetPoints @ 14d6d6060

TArray<FNodalOffsetPointInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULensFile::GetNodalOffsetPoints
          (ULensFile *this,
          TArray<FNodalOffsetPointInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  LensDataTableUtils::GetAllPointsInfo<FNodalOffsetPointInfo,FNodalOffsetTable>
            (__return_storage_ptr__,&this->NodalOffsetTable);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d6d86b0

UClass * __cdecl ULensFile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensFile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"LensFile",
               &Z_Registration_Info_UClass_ULensFile.InnerSingleton,StaticRegisterNativesULensFile,
               0x310,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULensFile>,
               InternalVTableHelperCtorCaller<ULensFile>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensFile.InnerSingleton;
}

// GetSTMapPoint @ 14d6d8b80

bool __thiscall
ULensFile::GetSTMapPoint(ULensFile *this,float param_1,float param_2,FSTMapInfo *param_3)

{
  bool bVar1;
  
  bVar1 = FSTMapTable::GetPoint(&this->STMapTable,param_1,param_2,param_3,this->InputTolerance);
  return bVar1;
}

// GetSTMapPoints @ 14d6d8bb0

TArray<FSTMapPointInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULensFile::GetSTMapPoints
          (ULensFile *this,
          TArray<FSTMapPointInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  LensDataTableUtils::GetAllPointsInfo<FSTMapPointInfo,FSTMapTable>
            (__return_storage_ptr__,&this->STMapTable);
  return __return_storage_ptr__;
}

// GetStatId @ 14d6d8ef0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall ULensFile::GetStatId(ULensFile *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_ULensFile::GetStatId(void)const_::_2_::FStat_ULensFile>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_ULensFile ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_ULensFile::GetStatId(void)const_::_2_::FStat_ULensFile>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"ULensFile");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_ULensFile,*pFVar1,L"ULensFile",
                   "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,
                   false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_ULensFile;
  if (StatPtr_ULensFile ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_ULensFile::GetStatId(void)const_::_2_::FStat_ULensFile>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"ULensFile");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_ULensFile::GetStatId(void)const_::_2_::FStat_ULensFile>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_ULensFile,*pFVar1,L"ULensFile",
                         "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,
                         true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTotalPointNum @ 14d6dc1f0

int __thiscall ULensFile::GetTotalPointNum(ULensFile *this,ELensDataCategory param_1)

{
  int iVar1;
  
  switch(param_1) {
  case Focus:
    return (this->EncodersTable).Focus.Keys.ArrayNum;
  case Iris:
    return (this->EncodersTable).Iris.Keys.ArrayNum;
  case Zoom:
                    /* WARNING: Could not recover jumptable at 0x00014d6dc232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)((this->FocalLengthTable)._padding_ + 0x30))();
    return iVar1;
  case Distortion:
                    /* WARNING: Could not recover jumptable at 0x00014d6dc216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)((this->DistortionTable)._padding_ + 0x30))();
    return iVar1;
  case ImageCenter:
                    /* WARNING: Could not recover jumptable at 0x00014d6dc224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)((this->ImageCenterTable)._padding_ + 0x30))();
    return iVar1;
  case STMap:
                    /* WARNING: Could not recover jumptable at 0x00014d6dc240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)((this->STMapTable)._padding_ + 0x30))();
    return iVar1;
  case NodalOffset:
                    /* WARNING: Could not recover jumptable at 0x00014d6dc24e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)((this->NodalOffsetTable)._padding_ + 0x30))();
    return iVar1;
  default:
    return -1;
  }
}

// HasFocusEncoderMapping @ 14d6dd190

bool __thiscall ULensFile::HasFocusEncoderMapping(ULensFile *this)

{
  return 0 < (this->EncodersTable).Focus.Keys.ArrayNum;
}

// HasFocusPoint @ 14d6dd200

bool __thiscall ULensFile::HasFocusPoint(ULensFile *this,ELensDataCategory param_1,float param_2)

{
  undefined1 uVar1;
  
  switch(param_1) {
  default:
    return false;
  case Zoom:
                    /* WARNING: Could not recover jumptable at 0x00014d6dd266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((this->FocalLengthTable)._padding_ + 8))
                      (&this->FocalLengthTable,param_2,this->InputTolerance);
    return (bool)uVar1;
  case Distortion:
                    /* WARNING: Could not recover jumptable at 0x00014d6dd238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((this->DistortionTable)._padding_ + 8))
                      (&this->DistortionTable,param_2,this->InputTolerance);
    return (bool)uVar1;
  case ImageCenter:
                    /* WARNING: Could not recover jumptable at 0x00014d6dd24f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((this->ImageCenterTable)._padding_ + 8))
                      (&this->ImageCenterTable,param_2,this->InputTolerance);
    return (bool)uVar1;
  case STMap:
                    /* WARNING: Could not recover jumptable at 0x00014d6dd27d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((this->STMapTable)._padding_ + 8))
                      (&this->STMapTable,param_2,this->InputTolerance);
    return (bool)uVar1;
  case NodalOffset:
                    /* WARNING: Could not recover jumptable at 0x00014d6dd294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((this->NodalOffsetTable)._padding_ + 8))
                      (&this->NodalOffsetTable,param_2,this->InputTolerance);
    return (bool)uVar1;
  }
}

// HasIrisEncoderMapping @ 14d6dd2d0

bool __thiscall ULensFile::HasIrisEncoderMapping(ULensFile *this)

{
  return 0 < (this->EncodersTable).Iris.Keys.ArrayNum;
}

// HasSamples @ 14d6ddb60

bool __thiscall ULensFile::HasSamples(ULensFile *this,ELensDataCategory param_1)

{
  int iVar1;
  
  iVar1 = GetTotalPointNum(this,param_1);
  return 0 < iVar1;
}

// HasZoomPoint @ 14d6ddbd0

bool __thiscall
ULensFile::HasZoomPoint(ULensFile *this,ELensDataCategory param_1,float param_2,float param_3)

{
  undefined1 uVar1;
  FNodalOffsetTable *pFVar2;
  
  switch(param_1) {
  default:
    return false;
  case Zoom:
    pFVar2 = (FNodalOffsetTable *)&this->FocalLengthTable;
    break;
  case Distortion:
    pFVar2 = (FNodalOffsetTable *)&this->DistortionTable;
    break;
  case ImageCenter:
    pFVar2 = (FNodalOffsetTable *)&this->ImageCenterTable;
    break;
  case STMap:
    pFVar2 = (FNodalOffsetTable *)&this->STMapTable;
    break;
  case NodalOffset:
    pFVar2 = &this->NodalOffsetTable;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d6ddc0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((FDistortionTable *)pFVar2)->_padding_ + 0x10))
                    (param_3,param_2,param_3,this->InputTolerance);
  return (bool)uVar1;
}

// IsTickableInEditor @ 14d6e1e90

bool __thiscall ULensFile::IsTickableInEditor(ULensFile *this)

{
  return true;
}

// MergeFocusPoint @ 14d6e4560

void __thiscall
ULensFile::MergeFocusPoint
          (ULensFile *this,ELensDataCategory param_1,float param_2,float param_3,bool param_4)

{
  float fVar1;
  int iVar2;
  FNodalOffsetFocusCurve *pFVar3;
  FScriptContainerElement *pFVar4;
  FNodalOffsetFocusCurve *this_00;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  if (param_1 == Zoom) {
    fVar1 = this->InputTolerance;
    LensDataTableUtils::MergeFocusPoint<FFocalLengthFocusPoint>
              (&(this->FocalLengthTable).FocusPoints,param_2,param_3,param_4,fVar1);
    iVar2 = (this->FocalLengthTable).FocusCurves.ArrayNum;
    pFVar5 = (this->FocalLengthTable).FocusCurves.AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar2 * 0x108;
    while( true ) {
      if ((this->FocalLengthTable).FocusCurves.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FFocalLengthFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar4) break;
      FBaseFocusCurve::MergeFocusInCurve
                ((FBaseFocusCurve *)pFVar5,(FRichCurve *)pFVar5,param_2,param_3,param_4,fVar1);
      FBaseFocusCurve::MergeFocusInCurve
                ((FBaseFocusCurve *)pFVar5,(FRichCurve *)(pFVar5 + 0x80),param_2,param_3,param_4,
                 fVar1);
      pFVar5 = pFVar5 + 0x108;
    }
  }
  else if (param_1 == Distortion) {
    fVar1 = this->InputTolerance;
    LensDataTableUtils::MergeFocusPoint<FDistortionFocusPoint>
              (&(this->DistortionTable).FocusPoints,param_2,param_3,param_4,fVar1);
    iVar2 = (this->DistortionTable).FocusCurves.ArrayNum;
    pFVar5 = (this->DistortionTable).FocusCurves.AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar2 * 0x88;
    while( true ) {
      if ((this->DistortionTable).FocusCurves.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDistortionFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar4) break;
      FBaseFocusCurve::MergeFocusInCurve
                ((FBaseFocusCurve *)pFVar5,(FRichCurve *)pFVar5,param_2,param_3,param_4,fVar1);
      pFVar5 = pFVar5 + 0x88;
    }
  }
  else if (param_1 == ImageCenter) {
    fVar1 = this->InputTolerance;
    LensDataTableUtils::MergeFocusPoint<FImageCenterFocusPoint>
              (&(this->ImageCenterTable).FocusPoints,param_2,param_3,param_4,fVar1);
    iVar2 = (this->ImageCenterTable).FocusCurves.ArrayNum;
    pFVar5 = (this->ImageCenterTable).FocusCurves.AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar2 * 0x108;
    while( true ) {
      if ((this->ImageCenterTable).FocusCurves.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FImageCenterFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar4) break;
      FBaseFocusCurve::MergeFocusInCurve
                ((FBaseFocusCurve *)pFVar5,(FRichCurve *)pFVar5,param_2,param_3,param_4,fVar1);
      FBaseFocusCurve::MergeFocusInCurve
                ((FBaseFocusCurve *)pFVar5,(FRichCurve *)(pFVar5 + 0x80),param_2,param_3,param_4,
                 fVar1);
      pFVar5 = pFVar5 + 0x108;
    }
  }
  else if (param_1 == STMap) {
    fVar1 = this->InputTolerance;
    LensDataTableUtils::MergeFocusPoint<FSTMapFocusPoint>
              (&(this->STMapTable).FocusPoints,param_2,param_3,param_4,fVar1);
    iVar2 = (this->STMapTable).FocusCurves.ArrayNum;
    pFVar5 = (this->STMapTable).FocusCurves.AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar2 * 0x88;
    while( true ) {
      if ((this->STMapTable).FocusCurves.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSTMapFocusCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar5 == pFVar4) break;
      FBaseFocusCurve::MergeFocusInCurve
                ((FBaseFocusCurve *)pFVar5,(FRichCurve *)pFVar5,param_2,param_3,param_4,fVar1);
      pFVar5 = pFVar5 + 0x88;
    }
  }
  else if (param_1 == NodalOffset) {
    fVar1 = this->InputTolerance;
    LensDataTableUtils::MergeFocusPoint<FNodalOffsetFocusPoint>
              (&(this->NodalOffsetTable).FocusPoints,param_2,param_3,param_4,fVar1);
    iVar2 = (this->NodalOffsetTable).FocusCurves.ArrayNum;
    this_00 = (FNodalOffsetFocusCurve *)(this->NodalOffsetTable).FocusCurves.AllocatorInstance.Data;
    pFVar3 = this_00 + iVar2;
    while( true ) {
      if ((this->NodalOffsetTable).FocusCurves.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNodalOffsetFocusCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_00 == pFVar3) break;
      FNodalOffsetFocusCurve::MergeFocus(this_00,param_2,param_3,param_4,fVar1);
      this_00 = this_00 + 1;
    }
  }
  return;
}

// OnDistortionDerivedDataJobCompleted @ 14d6e4b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULensFile::OnDistortionDerivedDataJobCompleted
          (ULensFile *this,FDerivedDistortionDataJobOutput *param_1)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8;
  FString local_18;
  
  this->DerivedDataInFlightCount = this->DerivedDataInFlightCount + -1;
  pFVar2 = (this->STMapTable).FocusPoints.AllocatorInstance.Data;
  pFVar4 = pFVar2 + (longlong)(this->STMapTable).FocusPoints.ArrayNum * 0xa0;
  if (pFVar2 != pFVar4) {
    while (__real_38d1b717 <
           (float)((uint)(*(float *)(pFVar2 + 8) - param_1->Focus) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      pFVar2 = pFVar2 + 0xa0;
      if (pFVar2 == pFVar4) {
        return;
      }
    }
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      pfVar3 = *(float **)(pFVar2 + 0x90);
      pfVar1 = pfVar3 + (longlong)*(int *)(pFVar2 + 0x98) * 0x14;
      if (pfVar3 != pfVar1) {
        while (__real_322bcc77 <
               (float)((uint)(*pfVar3 - param_1->Zoom) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          pfVar3 = pfVar3 + 0x14;
          if (pfVar3 == pfVar1) {
            return;
          }
        }
        if (param_1->Result == Success) {
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(pfVar3 + 6),
                     &param_1->EdgePointsDistortedUVs);
          return;
        }
        if (2 < (byte)LogCameraCalibrationCore._0_1_) {
          local_res8 = (FName)this->_padding_;
          ::FName::ToString(&local_res8,&local_18);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// PostInitProperties @ 14d6e5560

void __thiscall ULensFile::PostInitProperties(ULensFile *this)

{
  longlong lVar1;
  UClass *this_00;
  ULensFile *local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = UCameraCalibrationSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    CreateIntermediateDisplacementMaps
              (this,(TIntPoint<int>)
                    *(TIntPoint<int>_u_0 *)
                     &(this_00->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x10);
  }
  local_res8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&(this->STMapTable)._padding_,(FObjectPtr)&local_res8)
  ;
  lVar1 = (this->STMapTable)._padding_;
  (this->NodalOffsetTable)._padding_ = lVar1;
  (this->ImageCenterTable)._padding_ = lVar1;
  (this->FocalLengthTable)._padding_ = lVar1;
  (this->DistortionTable)._padding_ = lVar1;
  return;
}

// RemoveFocusPoint @ 14d6e7fd0

void __thiscall ULensFile::RemoveFocusPoint(ULensFile *this,ELensDataCategory param_1,float param_2)

{
  switch(param_1) {
  case Focus:
    FEncodersTable::RemoveFocusPoint(&this->EncodersTable,param_2);
    return;
  case Iris:
    FEncodersTable::RemoveIrisPoint(&this->EncodersTable,param_2);
    break;
  case Zoom:
    LensDataTableUtils::RemoveFocusPoint<FFocalLengthFocusPoint>
              (&(this->FocalLengthTable).FocusPoints,param_2);
    LensDataTableUtils::RemoveFocusFromFocusCurves<FFocalLengthFocusCurve>
              (&(this->FocalLengthTable).FocusCurves,param_2);
    return;
  case Distortion:
    LensDataTableUtils::RemoveFocusPoint<FDistortionFocusPoint>
              (&(this->DistortionTable).FocusPoints,param_2);
    LensDataTableUtils::RemoveFocusFromFocusCurves<FDistortionFocusCurve>
              (&(this->DistortionTable).FocusCurves,param_2);
    return;
  case ImageCenter:
    LensDataTableUtils::RemoveFocusPoint<FImageCenterFocusPoint>
              (&(this->ImageCenterTable).FocusPoints,param_2);
    LensDataTableUtils::RemoveFocusFromFocusCurves<FImageCenterFocusCurve>
              (&(this->ImageCenterTable).FocusCurves,param_2);
    return;
  case STMap:
    LensDataTableUtils::RemoveFocusPoint<FSTMapFocusPoint>(&(this->STMapTable).FocusPoints,param_2);
    LensDataTableUtils::RemoveFocusFromFocusCurves<FSTMapFocusCurve>
              (&(this->STMapTable).FocusCurves,param_2);
    return;
  case NodalOffset:
    LensDataTableUtils::RemoveFocusPoint<FNodalOffsetFocusPoint>
              (&(this->NodalOffsetTable).FocusPoints,param_2);
    LensDataTableUtils::RemoveFocusFromFocusCurves<FNodalOffsetFocusCurve>
              (&(this->NodalOffsetTable).FocusCurves,param_2);
    return;
  }
  return;
}

// RemoveZoomPoint @ 14d6e9390

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
ULensFile::RemoveZoomPoint(ULensFile *this,ELensDataCategory param_1,float param_2,float param_3)

{
  TArray<FNodalOffsetFocusPoint,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FImageCenterFocusPoint,TSizedDefaultAllocator<32>_> *this_01;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  if (param_1 == Zoom) {
    FFocalLengthTable::RemoveZoomPoint(&this->FocalLengthTable,param_2,param_3);
    return;
  }
  if (param_1 == Distortion) {
    FDistortionTable::RemoveZoomPoint(&this->DistortionTable,param_2,param_3);
    return;
  }
  if (param_1 == ImageCenter) {
    this_01 = &(this->ImageCenterTable).FocusPoints;
    pFVar2 = (this_01->AllocatorInstance).Data;
    iVar1 = (this->ImageCenterTable).FocusPoints.ArrayNum;
    for (pFVar7 = pFVar2; pFVar7 != pFVar2 + (longlong)iVar1 * 0x110; pFVar7 = pFVar7 + 0x110) {
      if ((float)((uint)(*(float *)(pFVar7 + 8) - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff)
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
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FImageCenterFocusPoint::RemovePoint
                    ((FImageCenterFocusPoint *)
                     ((this_01->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x110),param_3);
          uVar6 = 0;
          if ((int)uVar4 < (this->ImageCenterTable).FocusPoints.ArrayNum) {
            uVar6 = ~uVar4 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((this_01->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x110 + 0x88) == 0
             ) {
            TArray<FImageCenterFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
                      (this_01,uVar4,Default);
          }
        }
        break;
      }
    }
    LensDataTableUtils::RemoveZoomFromFocusCurves<FImageCenterFocusCurve>
              (&(this->ImageCenterTable).FocusCurves,param_2,param_3,__real_38d1b717);
  }
  else if (param_1 == STMap) {
    FSTMapTable::RemoveZoomPoint(&this->STMapTable,param_2,param_3);
  }
  else if (param_1 == NodalOffset) {
    this_00 = &(this->NodalOffsetTable).FocusPoints;
    pFVar2 = (this_00->AllocatorInstance).Data;
    iVar1 = (this->NodalOffsetTable).FocusPoints.ArrayNum;
    for (pFVar7 = pFVar2; pFVar7 != pFVar2 + (longlong)iVar1 * 0x310; pFVar7 = pFVar7 + 0x310) {
      if ((float)((uint)(*(float *)(pFVar7 + 8) - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff)
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
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FNodalOffsetFocusPoint::RemovePoint
                    ((FNodalOffsetFocusPoint *)
                     ((this_00->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x310),param_3);
          uVar6 = 0;
          if ((int)uVar4 < (this->NodalOffsetTable).FocusPoints.ArrayNum) {
            uVar6 = ~uVar4 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x310 + 0x88) == 0
             ) {
            TArray<FNodalOffsetFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
                      (this_00,uVar4,Default);
          }
        }
        break;
      }
    }
    LensDataTableUtils::RemoveZoomFromFocusCurves<FNodalOffsetFocusCurve>
              (&(this->NodalOffsetTable).FocusCurves,param_2,param_3,__real_38d1b717);
  }
  return;
}

// Serialize @ 14d6eb900

void __thiscall ULensFile::Serialize(ULensFile *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014d6eb920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FLensFileObjectVersion::GUID);
  return;
}

// Serialize @ 14d6eb930

void __thiscall ULensFile::Serialize(ULensFile *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FLensFileObjectVersion::GUID);
  return;
}

// SetupNoDistortionOutput @ 14d6ee8b0

void __thiscall
ULensFile::SetupNoDistortionOutput(ULensFile *this,ULensDistortionModelHandlerBase *param_1)

{
  LensFileRendering::ClearDisplacementMap
            ((param_1->UndistortionDisplacementMapRT).field0_0x0.DebugPtr);
  LensFileRendering::ClearDisplacementMap
            ((param_1->DistortionDisplacementMapRT).field0_0x0.DebugPtr);
  ULensDistortionModelHandlerBase::SetOverscanFactor(param_1,__real_3f800000);
  return;
}

// StaticRegisterNativesULensFile @ 14d6f0200

void __cdecl ULensFile::StaticRegisterNativesULensFile(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x23;
  local_18.DataPtr = Z_Construct_UClass_ULensFile_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14d6f29c0

void __thiscall ULensFile::Tick(ULensFile *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->STMapTable).FocusPoints.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 8))();
  }
  UpdateDerivedData((ULensFile *)&this[-1].DistortionDisplacementMapHolders.ArrayNum);
  return;
}

// UpdateDerivedData @ 14d6f4a20

void __thiscall ULensFile::UpdateDerivedData(ULensFile *this)

{
  int iVar1;
  longlong lVar2;
  TIntPoint<int>_u_0 TVar3;
  UObject *pUVar4;
  ICalibratedMapProcessor *pIVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  FTextureResource *pFVar10;
  UClass *this_00;
  UTextureRenderTarget2D *pUVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  FScriptContainerElement *pFVar16;
  undefined4 *puVar17;
  undefined1 local_res8 [8];
  uint local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_f8;
  FScriptContainerElement *local_f0;
  code *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined1 local_ce;
  FWeakObjectPtr local_cc;
  FWeakObjectPtr FStack_c4;
  FWeakObjectPtr local_bc;
  undefined1 local_b0 [8];
  FDelegateAllocation FStack_a8;
  TIntPoint<int>_u_0 local_98;
  UObject *local_90;
  UObject *local_88;
  UObject *local_80;
  ULensFile *local_78;
  FScriptContainerElement *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  
  if (this->DataMode == STMap) {
    iVar1 = (this->STMapTable).FocusPoints.ArrayNum;
    pFVar16 = (this->STMapTable).FocusPoints.AllocatorInstance.Data;
    local_f0 = pFVar16;
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar7 = uStack_dc;
    local_70 = pFVar16 + (longlong)iVar1 * 0xa0;
    if (pFVar16 != local_70) {
      pFVar16 = pFVar16 + 0x98;
      do {
        local_res10 = *(uint *)pFVar16;
        uVar14 = (ulonglong)(int)local_res10;
        puVar15 = *(undefined4 **)(pFVar16 + -8);
        puVar17 = puVar15 + uVar14 * 0x14;
        while( true ) {
          if (*(int *)pFVar16 != (int)uVar14) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FSTMapZoomPoint,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (puVar15 == puVar17) break;
          if (*(char *)(puVar15 + 0x10) == '\0') {
LAB_14d6f4ed6:
            uVar14 = (ulonglong)local_res10;
            puVar15 = puVar15 + 0x14;
          }
          else {
            if (*(UTexture **)(puVar15 + 2) != (UTexture *)0x0) {
              pFVar10 = UTexture::GetResource(*(UTexture **)(puVar15 + 2));
              if (pFVar10 != (FTextureResource *)0x0) {
                pFVar10 = UTexture::GetResource(*(UTexture **)(puVar15 + 2));
                cVar9 = (**(code **)(pFVar10->_padding_ + 0x48))(pFVar10);
                if (cVar9 == '\0') {
                  this_00 = UCameraCalibrationSettings::StaticClass();
                  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                    UClass::InternalCreateDefaultObjectWrapper(this_00);
                  }
                  lVar2 = *(longlong *)(puVar15 + 0xc);
                  TVar3 = (TIntPoint<int>_u_0)
                          *(TIntPoint<int>_u_0 *)
                           &(this_00->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x10;
                  local_98 = TVar3;
                  if (((lVar2 == 0) || (*(int *)(lVar2 + 0x158) != TVar3._0_4_)) ||
                     (*(int *)(lVar2 + 0x15c) != TVar3._4_4_)) {
                    pUVar11 = LensFileUtils::CreateDisplacementMapRenderTarget
                                        ((UObject *)this,(TIntPoint<int>)TVar3);
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar11 != (UTextureRenderTarget2D *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)pUVar11);
                    }
                    *(UTextureRenderTarget2D **)(puVar15 + 0xc) = pUVar11;
                  }
                  lVar2 = *(longlong *)(puVar15 + 0xe);
                  if (((lVar2 == 0) || (*(int *)(lVar2 + 0x158) != TVar3._0_4_)) ||
                     (*(int *)(lVar2 + 0x15c) != local_98._4_4_)) {
                    pUVar11 = LensFileUtils::CreateDisplacementMapRenderTarget
                                        ((UObject *)this,(TIntPoint<int>)TVar3);
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar11 != (UTextureRenderTarget2D *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)pUVar11);
                    }
                    *(UTextureRenderTarget2D **)(puVar15 + 0xe) = pUVar11;
                  }
                  if ((*(longlong *)(puVar15 + 0xc) == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ZoomPoint.DerivedDistortionData.UndistortionDisplacementMap"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
                                         ,0x48b,L""), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if ((*(longlong *)(puVar15 + 0xe) == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ZoomPoint.DerivedDistortionData.DistortionDisplacementMap"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
                                         ,0x48c,L""), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  local_d0 = *(undefined2 *)(puVar15 + 4);
                  local_d4 = *puVar15;
                  pUVar4 = *(UObject **)(puVar15 + 2);
                  local_ce = *(undefined1 *)((longlong)puVar15 + 0x12);
                  local_bc.ObjectIndex = 0;
                  local_bc.ObjectSerialNumber = 0;
                  FStack_a8.DelegateSize = 0;
                  local_cc.ObjectIndex = 0;
                  local_cc.ObjectSerialNumber = 0;
                  FStack_c4.ObjectIndex = 0;
                  FStack_c4.ObjectSerialNumber = 0;
                  local_b0 = (undefined1  [8])0x0;
                  FStack_a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                  local_d8 = *(uint *)(pFVar16 + -0x90);
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (pUVar4 != (UObject *)0x0) {
                      UE::GC::MarkAsReachable(pUVar4);
                    }
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar4 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(pUVar4);
                    }
                  }
                  local_res18.ObjectIndex = 0;
                  local_res18.ObjectSerialNumber = 0;
                  local_90 = pUVar4;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar4 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar4);
                  }
                  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_90);
                  pUVar4 = *(UObject **)(puVar15 + 0xc);
                  local_cc = local_res18;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (pUVar4 != (UObject *)0x0) {
                      UE::GC::MarkAsReachable(pUVar4);
                    }
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar4 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(pUVar4);
                    }
                  }
                  local_res20.ObjectIndex = 0;
                  local_res20.ObjectSerialNumber = 0;
                  local_88 = pUVar4;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar4 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar4);
                  }
                  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_88);
                  pUVar4 = *(UObject **)(puVar15 + 0xe);
                  FStack_c4 = local_res20;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (pUVar4 != (UObject *)0x0) {
                      UE::GC::MarkAsReachable(pUVar4);
                    }
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar4 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(pUVar4);
                    }
                  }
                  local_f8.ObjectIndex = 0;
                  local_f8.ObjectSerialNumber = 0;
                  local_80 = pUVar4;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar4 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar4);
                  }
                  FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_80);
                  local_bc = local_f8;
                  uStack_e0 = 0;
                  local_e8 = OnDistortionDerivedDataJobCompleted;
                  uStack_dc = uVar7;
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b0,
                             (FWriteAccessScope *)&local_68);
                  local_50 = &FStack_a8;
                  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&FStack_a8);
                  if (puVar12 != (undefined8 *)0x0) {
                    *puVar12 = &
                               ___7__TCommonDelegateInstanceState___A6AXAEBUFDerivedDistortionDataJobOutput___ZUFDefaultDelegateUserPolicy____V__6B_
                    ;
                    uVar13 = FDelegateHandle::GenerateNewID();
                    puVar12[2] = uVar13;
                    *puVar12 = &
                               ___7__TBaseUObjectMethodDelegateInstance__0A_VULensFile____A6AXAEBUFDerivedDistortionDataJobOutput___ZUFDefaultDelegateUserPolicy____V__6B_
                    ;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)this);
                    }
                    puVar12[3] = 0;
                    local_78 = this;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)this);
                    }
                    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_78)
                    ;
                    puVar12[4] = local_e8;
                    puVar12[5] = CONCAT44(uStack_dc,uStack_e0);
                  }
                  if (local_68.bDestroyed == false) {
                    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
                  }
                  pIVar5 = (this->CalibratedMapProcessor).Ptr;
                  cVar9 = (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,&local_d8);
                  if (cVar9 != '\0') {
                    this->DerivedDataInFlightCount = this->DerivedDataInFlightCount + 1;
                    *(undefined1 *)(puVar15 + 0x10) = 0;
                  }
                  TDelegateBase<FNotThreadSafeDelegateMode>::
                  ~TDelegateBase<FNotThreadSafeDelegateMode>
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
                }
              }
              goto LAB_14d6f4ed6;
            }
            *(undefined1 *)(puVar15 + 0x10) = 0;
            puVar15 = puVar15 + 0x14;
            uVar14 = (ulonglong)local_res10;
          }
        }
        pFVar16 = pFVar16 + 0xa0;
        local_f0 = local_f0 + 0xa0;
      } while (local_f0 != local_70);
    }
  }
  return;
}

// UpdateDisplacementMapResolution @ 14d6f4f50

void __thiscall ULensFile::UpdateDisplacementMapResolution(ULensFile *this,TIntPoint<int> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  CreateIntermediateDisplacementMaps(this,param_1);
  if (this->DataMode == STMap) {
    pFVar5 = (this->STMapTable).FocusPoints.AllocatorInstance.Data;
    iVar1 = (this->STMapTable).FocusPoints.ArrayNum;
    if ((iVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = pFVar5 + (longlong)iVar1 * 0xa0;
    if (pFVar5 != pFVar8) {
      pFVar7 = pFVar5 + 0x98;
      do {
        iVar1 = *(int *)pFVar7;
        lVar4 = *(longlong *)(pFVar7 + -8);
        lVar6 = (longlong)iVar1 * 0x50 + lVar4;
        while( true ) {
          if (*(int *)pFVar7 != iVar1) {
            `TCheckedPointerIterator<FSTMapZoomPoint,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (lVar4 == lVar6) break;
          *(undefined1 *)(lVar4 + 0x40) = 1;
          lVar4 = lVar4 + 0x50;
        }
        pFVar5 = pFVar5 + 0xa0;
        pFVar7 = pFVar7 + 0xa0;
      } while (pFVar5 != pFVar8);
    }
  }
  return;
}

// UpdateInputTolerance @ 14d6f52f0

void __thiscall ULensFile::UpdateInputTolerance(ULensFile *this,float param_1)

{
  this->InputTolerance = param_1;
  return;
}

// execAddDistortionPoint @ 14d6f6b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ULensFile::execAddDistortionPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector2<double>_u_0 *pTVar2;
  FDistortionInfo *pFVar3;
  float local_res10 [4];
  float local_res20 [2];
  FDistortionInfo local_38;
  TVector2<double>_u_0 local_28;
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Parameters.ArrayNum = 0;
  local_38.Parameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_28._s_0.Y = _UNK_152bc18c8;
  pFVar3 = &local_38;
  if ((FDistortionInfo *)param_2->MostRecentPropertyAddress != (FDistortionInfo *)0x0) {
    pFVar3 = (FDistortionInfo *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    pTVar2 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddDistortionPoint((ULensFile *)param_1,local_res20[0],local_res10[0],pFVar3,
                     (FFocalLengthInfo *)&pTVar2->_s_0);
  if (local_38.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Parameters.AllocatorInstance.Data);
  }
  return;
}

// execAddFocalLengthPoint @ 14d6f6d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ULensFile::execAddFocalLengthPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector2<double>_u_0 *pTVar2;
  float local_res8 [2];
  float local_res10 [2];
  TVector2<double>_u_0 local_18;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18._s_0.Y = _UNK_152bc18c8;
  local_18._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    pTVar2 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FFocalLengthTable::AddPoint
            ((FFocalLengthTable *)&param_1[0xc].field_0x20,local_res10[0],local_res8[0],
             (FFocalLengthInfo *)&pTVar2->_s_0,*(float *)&param_1[0x11].field_0x18,false);
  return;
}

// execAddImageCenterPoint @ 14d6f6e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ULensFile::execAddImageCenterPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector2<double>_u_0 *pTVar2;
  float local_res8 [2];
  float local_res10 [2];
  TVector2<double>_u_0 local_18;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18._s_0.Y = _UNK_150689678;
  local_18._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    pTVar2 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FImageCenterTable::AddPoint
            ((FImageCenterTable *)(param_1 + 0xe),local_res10[0],local_res8[0],
             (FImageCenterInfo *)&pTVar2->_s_0,*(float *)&param_1[0x11].field_0x18,false);
  return;
}

// execAddNodalOffsetPoint @ 14d6f6fb0

void __cdecl ULensFile::execAddNodalOffsetPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double>_u_0 *pTVar2;
  float local_res10 [2];
  float local_res20 [2];
  TVector<double>_u_0 local_48;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_18 = UE::Math::TQuat<double>::Identity.Z;
  dStack_10 = UE::Math::TQuat<double>::Identity.W;
  local_28 = UE::Math::TQuat<double>::Identity.X;
  dStack_20 = UE::Math::TQuat<double>::Identity.Y;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar2 = &local_48;
  if ((TVector<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector<double>_u_0 *)0x0) {
    pTVar2 = (TVector<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddNodalOffsetPoint((ULensFile *)param_1,local_res20[0],local_res10[0],
                      (FNodalPointOffset *)&pTVar2->_s_0);
  return;
}

// execAddSTMapPoint @ 14d6f7120

void __cdecl ULensFile::execAddSTMapPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UTexture>_u_0 *pTVar2;
  float local_res10 [2];
  float local_res20 [2];
  TObjectPtr<UTexture>_u_0 local_18;
  undefined2 local_10;
  undefined1 local_e;
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_e = 1;
  local_18.DebugPtr = (UTexture *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TObjectPtr<UTexture>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UTexture>_u_0 *)0x0) {
    pTVar2 = (TObjectPtr<UTexture>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddSTMapPoint((ULensFile *)param_1,local_res20[0],local_res10[0],(FSTMapInfo *)&pTVar2->ObjectPtr)
  ;
  return;
}

// execChangeFocusPoint @ 14d6f7260

void __cdecl ULensFile::execChangeFocusPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ELensDataCategory local_res10 [16];
  float local_res20 [2];
  float local_18 [4];
  
  local_res10[0] = Focus;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ChangeFocusPoint((ULensFile *)param_1,local_res10[0],local_18[0],local_res20[0]);
  return;
}

// execChangeZoomPoint @ 14d6f7380

void __cdecl ULensFile::execChangeZoomPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ELensDataCategory local_res10 [16];
  float local_res20 [2];
  float local_18;
  float local_14 [3];
  
  local_res10[0] = Focus;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_14[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_14,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_14);
  }
  local_18 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ChangeZoomPoint((ULensFile *)param_1,local_res10[0],local_14[0],local_18,local_res20[0]);
  return;
}

// execClearAll @ 14d6f74f0

void __cdecl ULensFile::execClearAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearAll((ULensFile *)param_1);
  return;
}

// execClearData @ 14d6f7510

void __cdecl ULensFile::execClearData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(local_res10[0]) {
  case 0:
    FRichCurve::Reset((FRichCurve *)&param_1[5].field_0x8);
    return;
  case 1:
    FRichCurve::Reset((FRichCurve *)&param_1[8].field_0x10);
    break;
  case 2:
    LensDataTableUtils::EmptyTable<FFocalLengthTable>((FFocalLengthTable *)&param_1[0xc].field_0x20)
    ;
    return;
  case 3:
    LensDataTableUtils::EmptyTable<FDistortionTable>((FDistortionTable *)&param_1[0xb].field_0x18);
    return;
  case 4:
    LensDataTableUtils::EmptyTable<FImageCenterTable>((FImageCenterTable *)(param_1 + 0xe));
    return;
  case 5:
    LensDataTableUtils::EmptyTable<FSTMapTable>((FSTMapTable *)&param_1[0x10].field_0x10);
    return;
  case 6:
    LensDataTableUtils::EmptyTable<FNodalOffsetTable>((FNodalOffsetTable *)&param_1[0xf].field_0x8);
    return;
  }
  return;
}

// execEvaluateDistortionData @ 14d6f7660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ULensFile::execEvaluateDistortionData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  ULensDistortionModelHandlerBase *this;
  bool bVar8;
  UClass *pUVar9;
  FName *this_00;
  UObject *pUVar10;
  bool bVar11;
  float local_res10 [2];
  float local_res18 [2];
  ULensDistortionModelHandlerBase *local_res20;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [4];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pUVar10 = (UObject *)0x0;
  local_res20 = (ULensDistortionModelHandlerBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  this = local_res20;
  fVar7 = local_res18[0];
  fVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId331,"ULensFile::EvaluateDistortionData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
               ,0x14b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId331);
  }
  if (this == (ULensDistortionModelHandlerBase *)0x0) {
    if (2 < (byte)LogCameraCalibrationCore._0_1_) {
      local_178.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_178.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_178,&local_138);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore)
      ;
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14d6f7c3b;
  }
  if ((this->UndistortionDisplacementMapRT).field0_0x0.DebugPtr == (UTextureRenderTarget2D *)0x0) {
    if (2 < (byte)LogCameraCalibrationCore._0_1_) {
      local_170 = (FName)this->_padding_;
      ::FName::ToString(&local_170,&local_118);
      local_168.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_168.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_168,&local_128);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore)
      ;
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14d6f7c3b;
  }
  if ((this->DistortionDisplacementMapRT).field0_0x0.DebugPtr == (UTextureRenderTarget2D *)0x0) {
    if (2 < (byte)LogCameraCalibrationCore._0_1_) {
      local_160 = (FName)this->_padding_;
      ::FName::ToString(&local_160,&local_f8);
      local_158.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_158.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_158,&local_108);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore)
      ;
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14d6f7c3b;
  }
  lVar4 = *(longlong *)(param_1 + 2);
  if ((lVar4 != 0) && (pUVar9 = ULensModel::StaticClass(), pUVar9 != (UClass *)0x0)) {
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) && (*(longlong *)(param_1 + 2) != 0)) {
      bVar8 = ULensDistortionModelHandlerBase::IsModelSupported
                        (this,(TSubclassOf<ULensModel> *)(param_1 + 2));
      if (bVar8) {
        if (*(char *)(param_1 + 3) == '\0') {
          local_88._s_0.X = local_b8;
          local_88._s_0.Y = dStack_b0;
          bVar8 = EvaluateDistortionForParameters
                            ((ULensFile *)param_1,fVar7,fVar6,(TVector2<double> *)&local_88._s_0,
                             this);
        }
        else {
          if ((*(char *)(param_1 + 3) != '\x01') &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("DataMode == ELensDataMode::STMap",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFile.cpp"
                                 ,0x174,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_78[0]._s_0.X = local_b8;
          local_78[0]._s_0.Y = dStack_b0;
          bVar8 = EvaluateDistortionForSTMaps
                            ((ULensFile *)param_1,fVar7,fVar6,(TVector2<double> *)&local_78[0]._s_0,
                             this);
        }
        if (bVar11) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        *(bool *)param_3 = bVar8;
        return;
      }
      if ((byte)LogCameraCalibrationCore._0_1_ < 3) goto LAB_14d6f7b3f;
      pUVar9 = *(UClass **)(param_1 + 2);
      if (pUVar9 != (UClass *)0x0) {
        if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar9);
        }
        pUVar10 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
        if (pUVar10 != (UObject *)0x0) {
          pUVar9 = ULensModel::StaticClass();
          iVar2 = (int)pUVar9->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar9->_padding_)) goto LAB_14d6f7a89;
        }
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && Result->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                           ,0x93,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
LAB_14d6f7a89:
      this_00 = (FName *)(**(code **)(*(longlong *)pUVar10 + 0x2b0))(pUVar10,local_a8);
      ::FName::ToString(this_00,&local_a0);
      local_150 = (FName)this->_padding_;
      ::FName::ToString(&local_150,&local_d8);
      local_148.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_148.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_148,&local_e8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore)
      ;
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
LAB_14d6f7b3f:
      SetupNoDistortionOutput((ULensFile *)param_1,this);
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  if (2 < (byte)LogCameraCalibrationCore._0_1_) {
    local_140.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_140.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_140,&local_c8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  SetupNoDistortionOutput((ULensFile *)param_1,this);
LAB_14d6f7c3b:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execEvaluateDistortionParameters @ 14d6f7c80

void __cdecl
ULensFile::execEvaluateDistortionParameters(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FDistortionInfo *pFVar3;
  float local_res10 [2];
  float local_res18 [4];
  FDistortionInfo local_28;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Parameters.ArrayNum = 0;
  local_28.Parameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FDistortionInfo *)param_2->MostRecentPropertyAddress != (FDistortionInfo *)0x0) {
    pFVar3 = (FDistortionInfo *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = EvaluateDistortionParameters((ULensFile *)param_1,local_res18[0],local_res10[0],pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_28.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Parameters.AllocatorInstance.Data);
  }
  return;
}

// execEvaluateFocalLength @ 14d6f7dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ULensFile::execEvaluateFocalLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector2<double>_u_0 *pTVar3;
  float local_res10 [2];
  float local_res18 [4];
  TVector2<double>_u_0 local_28;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28._s_0.Y = _UNK_152bc18c8;
  local_28._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    pTVar3 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = EvaluateFocalLength((ULensFile *)param_1,local_res18[0],local_res10[0],
                              (FFocalLengthInfo *)&pTVar3->_s_0);
  *(bool *)param_3 = bVar2;
  return;
}

// execEvaluateImageCenterParameters @ 14d6f7f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ULensFile::execEvaluateImageCenterParameters(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector2<double>_u_0 *pTVar3;
  float local_res10 [2];
  float local_res18 [4];
  TVector2<double>_u_0 local_28;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28._s_0.Y = _UNK_150689678;
  local_28._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    pTVar3 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = EvaluateImageCenterParameters
                    ((ULensFile *)param_1,local_res18[0],local_res10[0],
                     (FImageCenterInfo *)&pTVar3->_s_0);
  *(bool *)param_3 = bVar2;
  return;
}

// execEvaluateNodalPointOffset @ 14d6f8040

void __cdecl ULensFile::execEvaluateNodalPointOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector<double>_u_0 *pTVar3;
  float local_res10 [2];
  float local_res18 [4];
  TVector<double>_u_0 local_58;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_58._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_58._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_28 = UE::Math::TQuat<double>::Identity.Z;
  dStack_20 = UE::Math::TQuat<double>::Identity.W;
  local_38 = UE::Math::TQuat<double>::Identity.X;
  dStack_30 = UE::Math::TQuat<double>::Identity.Y;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar3 = &local_58;
  if ((TVector<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector<double>_u_0 *)0x0) {
    pTVar3 = (TVector<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = EvaluateNodalPointOffset
                    ((ULensFile *)param_1,local_res18[0],local_res10[0],
                     (FNodalPointOffset *)&pTVar3->_s_0);
  *(bool *)param_3 = bVar2;
  return;
}

// execEvaluateNormalizedFocus @ 14d6f81c0

void __cdecl ULensFile::execEvaluateNormalizedFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = FRichCurve::Eval((FRichCurve *)&param_1[5].field_0x8,local_res8[0],0.0);
  *(float *)param_3 = fVar2;
  return;
}

// execEvaluateNormalizedIris @ 14d6f8260

void __cdecl ULensFile::execEvaluateNormalizedIris(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = FRichCurve::Eval((FRichCurve *)&param_1[8].field_0x10,local_res8[0],0.0);
  *(float *)param_3 = fVar2;
  return;
}

// execGetDistortionPoint @ 14d6f8bf0

void __cdecl ULensFile::execGetDistortionPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FDistortionInfo *pFVar3;
  float local_res8 [2];
  float local_res10 [2];
  FDistortionInfo local_28;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Parameters.ArrayNum = 0;
  local_28.Parameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FDistortionInfo *)param_2->MostRecentPropertyAddress != (FDistortionInfo *)0x0) {
    pFVar3 = (FDistortionInfo *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FDistortionTable::GetPoint
                    ((FDistortionTable *)&param_1[0xb].field_0x18,local_res10[0],local_res8[0],
                     pFVar3,*(float *)&param_1[0x11].field_0x18);
  *(bool *)param_3 = bVar2;
  if (local_28.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Parameters.AllocatorInstance.Data);
  }
  return;
}

// execGetDistortionPoints @ 14d6f8d50

void __cdecl ULensFile::execGetDistortionPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FDistortionPointInfo,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  LensDataTableUtils::GetAllPointsInfo<FDistortionPointInfo,FDistortionTable>
            (&local_18,(FDistortionTable *)&param_1[0xb].field_0x18);
  if (param_3 != &local_18) {
    DestructItems<FDistortionPointInfo,int>
              (*(FDistortionPointInfo **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayMax = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
  }
  DestructItems<FDistortionPointInfo,int>
            ((FDistortionPointInfo *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDistortionPointInfo *)local_18.AllocatorInstance.Data != (FDistortionPointInfo *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetFocalLengthPoint @ 14d6f8e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ULensFile::execGetFocalLengthPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  bool bVar3;
  FFocalLengthFocusPoint *this;
  FFocalLengthFocusPoint *pFVar4;
  TVector2<double>_u_0 *pTVar5;
  float local_res8 [2];
  float local_res10 [2];
  TVector2<double>_u_0 local_38;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38._s_0.Y = _UNK_152bc18c8;
  local_38._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar5 = &local_38;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    pTVar5 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FFocalLengthFocusPoint **)&param_1[0xd].field_0x8;
  pFVar4 = this + *(int *)&param_1[0xd].field_0x10;
  do {
    if (this == pFVar4) {
LAB_14d6f8f4e:
      *(undefined1 *)param_3 = 0;
      return;
    }
    if ((float)((uint)(this->Focus - local_res8[0]) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        *(float *)&param_1[0x11].field_0x18) {
      bVar3 = FFocalLengthFocusPoint::GetPoint
                        (this,local_res10[0],(FFocalLengthInfo *)&pTVar5->_s_0,
                         *(float *)&param_1[0x11].field_0x18);
      if (bVar3) {
        *(undefined1 *)param_3 = 1;
        return;
      }
      goto LAB_14d6f8f4e;
    }
    this = this + 1;
  } while( true );
}

// execGetFocalLengthPoints @ 14d6f8f90

void __cdecl ULensFile::execGetFocalLengthPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FFocalLengthPointInfo,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  LensDataTableUtils::GetAllPointsInfo<FFocalLengthPointInfo,FFocalLengthTable>
            (&local_18,(FFocalLengthTable *)&param_1[0xc].field_0x20);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetImageCenterPoint @ 14d6f9020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ULensFile::execGetImageCenterPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector2<double>_u_0 *pTVar3;
  float local_res8 [2];
  float local_res10 [2];
  TVector2<double>_u_0 local_28;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28._s_0.Y = _UNK_150689678;
  local_28._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    pTVar3 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FImageCenterTable::GetPoint
                    ((FImageCenterTable *)(param_1 + 0xe),local_res10[0],local_res8[0],
                     (FImageCenterInfo *)&pTVar3->_s_0,*(float *)&param_1[0x11].field_0x18);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetImageCenterPoints @ 14d6f9170

void __cdecl ULensFile::execGetImageCenterPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FImageCenterPointInfo,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  LensDataTableUtils::GetAllPointsInfo<FImageCenterPointInfo,FImageCenterTable>
            (&local_18,(FImageCenterTable *)(param_1 + 0xe));
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetNodalOffsetPoint @ 14d6f9380

void __cdecl ULensFile::execGetNodalOffsetPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector<double>_u_0 *pTVar3;
  float local_res8 [2];
  float local_res10 [2];
  TVector<double>_u_0 local_58;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_58._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_28 = UE::Math::TQuat<double>::Identity.Z;
  dStack_20 = UE::Math::TQuat<double>::Identity.W;
  local_38 = UE::Math::TQuat<double>::Identity.X;
  dStack_30 = UE::Math::TQuat<double>::Identity.Y;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar3 = &local_58;
  if ((TVector<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector<double>_u_0 *)0x0) {
    pTVar3 = (TVector<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FNodalOffsetTable::GetPoint
                    ((FNodalOffsetTable *)&param_1[0xf].field_0x8,local_res10[0],local_res8[0],
                     (FNodalPointOffset *)&pTVar3->_s_0,*(float *)&param_1[0x11].field_0x18);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetNodalOffsetPoints @ 14d6f9510

void __cdecl ULensFile::execGetNodalOffsetPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FNodalOffsetPointInfo,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  LensDataTableUtils::GetAllPointsInfo<FNodalOffsetPointInfo,FNodalOffsetTable>
            (&local_18,(FNodalOffsetTable *)&param_1[0xf].field_0x8);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSTMapPoint @ 14d6f9890

void __cdecl ULensFile::execGetSTMapPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TObjectPtr<UTexture>_u_0 *pTVar3;
  float local_res8 [2];
  float local_res10 [2];
  TObjectPtr<UTexture>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_1e = 1;
  local_28.DebugPtr = (UTexture *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TObjectPtr<UTexture>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UTexture>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UTexture>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FSTMapTable::GetPoint
                    ((FSTMapTable *)&param_1[0x10].field_0x10,local_res10[0],local_res8[0],
                     (FSTMapInfo *)&pTVar3->ObjectPtr,*(float *)&param_1[0x11].field_0x18);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetSTMapPoints @ 14d6f99e0

void __cdecl ULensFile::execGetSTMapPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FSTMapPointInfo,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  LensDataTableUtils::GetAllPointsInfo<FSTMapPointInfo,FSTMapTable>
            (&local_18,(FSTMapTable *)&param_1[0x10].field_0x10);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetTotalPointNum @ 14d6f9a70

void __cdecl ULensFile::execGetTotalPointNum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined1 local_res10 [8];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(local_res10[0]) {
  case 0:
    *(undefined4 *)param_3 = *(undefined4 *)&param_1[8].field_0x8;
    return;
  case 1:
    *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xb].field_0x10;
    return;
  case 2:
    uVar2 = (**(code **)(*(longlong *)&param_1[0xc].field_0x20 + 0x30))();
    *(undefined4 *)param_3 = uVar2;
    return;
  case 3:
    uVar2 = (**(code **)(*(longlong *)&param_1[0xb].field_0x18 + 0x30))();
    *(undefined4 *)param_3 = uVar2;
    return;
  case 4:
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0xe) + 0x30))();
    *(undefined4 *)param_3 = uVar2;
    return;
  case 5:
    uVar2 = (**(code **)(*(longlong *)&param_1[0x10].field_0x10 + 0x30))();
    *(undefined4 *)param_3 = uVar2;
    return;
  case 6:
    uVar2 = (**(code **)(*(longlong *)&param_1[0xf].field_0x8 + 0x30))();
    *(undefined4 *)param_3 = uVar2;
    return;
  default:
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
}

// execHasFocusEncoderMapping @ 14d6f9d40

void __cdecl ULensFile::execHasFocusEncoderMapping(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = 0 < *(int *)&param_1[8].field_0x8;
  return;
}

// execHasFocusPoint @ 14d6f9d70

void __cdecl ULensFile::execHasFocusPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  UObject *pUVar3;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(local_res10[0]) {
  default:
    *(undefined1 *)param_3 = 0;
    return;
  case 2:
    pUVar3 = (UObject *)&param_1[0xc].field_0x20;
    break;
  case 3:
    pUVar3 = (UObject *)&param_1[0xb].field_0x18;
    break;
  case 4:
    pUVar3 = param_1 + 0xe;
    break;
  case 5:
    pUVar3 = (UObject *)&param_1[0x10].field_0x10;
    break;
  case 6:
    pUVar3 = (UObject *)&param_1[0xf].field_0x8;
  }
  uVar2 = (**(code **)(*(longlong *)pUVar3 + 8))
                    (pUVar3,local_res18[0],*(undefined4 *)&param_1[0x11].field_0x18);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execHasIrisEncoderMapping @ 14d6f9ed0

void __cdecl ULensFile::execHasIrisEncoderMapping(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = 0 < *(int *)&param_1[0xb].field_0x10;
  return;
}

// execHasSamples @ 14d6f9f00

void __cdecl ULensFile::execHasSamples(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  undefined1 local_res10 [8];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(local_res10[0]) {
  case 0:
    iVar2 = *(int *)&param_1[8].field_0x8;
    break;
  case 1:
    iVar2 = *(int *)&param_1[0xb].field_0x10;
    break;
  case 2:
    iVar2 = (**(code **)(*(longlong *)&param_1[0xc].field_0x20 + 0x30))();
    break;
  case 3:
    iVar2 = (**(code **)(*(longlong *)&param_1[0xb].field_0x18 + 0x30))();
    break;
  case 4:
    iVar2 = (**(code **)(*(longlong *)(param_1 + 0xe) + 0x30))();
    break;
  case 5:
    iVar2 = (**(code **)(*(longlong *)&param_1[0x10].field_0x10 + 0x30))();
    break;
  case 6:
    iVar2 = (**(code **)(*(longlong *)&param_1[0xf].field_0x8 + 0x30))();
    break;
  default:
    iVar2 = -1;
  }
  *(bool *)param_3 = 0 < iVar2;
  return;
}

// execHasZoomPoint @ 14d6fa030

void __cdecl ULensFile::execHasZoomPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  UObject *pUVar3;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(local_res10[0]) {
  default:
    *(undefined1 *)param_3 = 0;
    return;
  case 2:
    pUVar3 = (UObject *)&param_1[0xc].field_0x20;
    break;
  case 3:
    pUVar3 = (UObject *)&param_1[0xb].field_0x18;
    break;
  case 4:
    pUVar3 = param_1 + 0xe;
    break;
  case 5:
    pUVar3 = (UObject *)&param_1[0x10].field_0x10;
    break;
  case 6:
    pUVar3 = (UObject *)&param_1[0xf].field_0x8;
  }
  uVar2 = (**(code **)(*(longlong *)pUVar3 + 0x10))
                    (pUVar3,local_res20[0],local_res18[0],*(undefined4 *)&param_1[0x11].field_0x18);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execMergeFocusPoint @ 14d6fa270

void __cdecl ULensFile::execMergeFocusPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ELensDataCategory local_res10 [8];
  int local_res20 [2];
  float local_18;
  float local_14 [3];
  
  local_res10[0] = Focus;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_14[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_14,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_14);
  }
  local_18 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  MergeFocusPoint((ULensFile *)param_1,local_res10[0],local_14[0],local_18,local_res20[0] != 0);
  return;
}

// execRemoveFocusPoint @ 14d6fa550

void __cdecl ULensFile::execRemoveFocusPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ELensDataCategory local_res10 [16];
  float local_res20 [2];
  
  local_res10[0] = Focus;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveFocusPoint((ULensFile *)param_1,local_res10[0],local_res20[0]);
  return;
}

// execRemoveZoomPoint @ 14d6fa620

void __cdecl ULensFile::execRemoveZoomPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ELensDataCategory local_res10 [16];
  float local_res20 [2];
  float local_18 [4];
  
  local_res10[0] = Focus;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveZoomPoint((ULensFile *)param_1,local_res10[0],local_18[0],local_res20[0]);
  return;
}

