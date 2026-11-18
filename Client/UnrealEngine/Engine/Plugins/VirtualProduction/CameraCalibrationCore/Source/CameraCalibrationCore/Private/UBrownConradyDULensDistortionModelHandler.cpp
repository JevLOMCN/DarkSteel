// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 11

// StaticClass @ 14d67b9b0

UClass * __cdecl UBrownConradyDULensDistortionModelHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrownConradyDULensDistortionModelHandler.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"BrownConradyDULensDistortionModelHandler",
               &Z_Registration_Info_UClass_UBrownConradyDULensDistortionModelHandler.InnerSingleton,
               StaticRegisterNativesUBrownConradyDULensDistortionModelHandler,0xf0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrownConradyDULensDistortionModelHandler>,
               InternalVTableHelperCtorCaller<UBrownConradyDULensDistortionModelHandler>,local_res8,
               UBrownConradyUDLensDistortionModelHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrownConradyDULensDistortionModelHandler.InnerSingleton;
}

// UBrownConradyDULensDistortionModelHandler @ 14d6a9ac0

UBrownConradyDULensDistortionModelHandler * __thiscall
UBrownConradyDULensDistortionModelHandler::UBrownConradyDULensDistortionModelHandler
          (UBrownConradyDULensDistortionModelHandler *this,FVTableHelper *param_1)

{
  ULensDistortionModelHandlerBase::ULensDistortionModelHandlerBase
            ((ULensDistortionModelHandlerBase *)this,param_1);
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined ***)this = &___7UBrownConradyDULensDistortionModelHandler__6B_;
  return this;
}

// UBrownConradyDULensDistortionModelHandler @ 14d6a9b10

UBrownConradyDULensDistortionModelHandler * __thiscall
UBrownConradyDULensDistortionModelHandler::UBrownConradyDULensDistortionModelHandler
          (UBrownConradyDULensDistortionModelHandler *this)

{
  ULensDistortionModelHandlerBase::ULensDistortionModelHandlerBase
            ((ULensDistortionModelHandlerBase *)this);
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined ***)this = &___7UBrownConradyDULensDistortionModelHandler__6B_;
  return this;
}

// ~UBrownConradyDULensDistortionModelHandler @ 14d6aca50

void __thiscall
UBrownConradyDULensDistortionModelHandler::~UBrownConradyDULensDistortionModelHandler
          (UBrownConradyDULensDistortionModelHandler *this)

{
  *(undefined ***)this = &___7ULensDistortionModelHandlerBase__6B_;
  if (*(void **)&this->field_0x80 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x80);
  }
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ComputeDistortedUV @ 14d6bb410

TVector2<double> * __thiscall
UBrownConradyDULensDistortionModelHandler::ComputeDistortedUV
          (UBrownConradyDULensDistortionModelHandler *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  UBrownConradyUDLensDistortionModelHandler::ComputeUndistortedUV
            ((UBrownConradyUDLensDistortionModelHandler *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ComputeUndistortedUV @ 14d6bc7d0

TVector2<double> * __thiscall
UBrownConradyDULensDistortionModelHandler::ComputeUndistortedUV
          (UBrownConradyDULensDistortionModelHandler *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  auVar2 = *(undefined1 (*) [16])&this->field_0x48;
  dVar7 = *(double *)&this->field_0x60;
  uVar8 = auVar2._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = auVar2._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((double)CONCAT44(uVar9,uVar8) < __real_3e45798ee2308c3a ||
       (double)CONCAT44(uVar9,uVar8) == __real_3e45798ee2308c3a) ||
     (uVar8 = auVar2._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar9 = auVar2._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar9,uVar8) < __real_3e45798ee2308c3a ||
     (double)CONCAT44(uVar9,uVar8) == __real_3e45798ee2308c3a)) {
    dVar7 = (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
  }
  else {
    dVar6 = (param_1->field0_0x0)._s_0.X - *(double *)&this->field_0x58;
    dVar3 = __real_3ff0000000000000 / auVar2._0_8_;
    dVar4 = ((param_1->field0_0x0)._s_0.Y - dVar7) / auVar2._8_8_;
    dVar5 = dVar3 * dVar6;
    fVar12 = (float)(dVar4 * dVar4 + dVar5 * dVar5);
    fVar10 = fVar12 * fVar12;
    fVar11 = fVar10 * fVar12 * *(float *)&this->field_0xd8 + fVar10 * *(float *)&this->field_0xd4 +
             fVar12 * *(float *)&this->field_0xd0 + __real_3f800000;
    fVar10 = fVar10 * fVar12 * *(float *)&this->field_0xe4 + fVar10 * *(float *)&this->field_0xe0 +
             fVar12 * *(float *)&this->field_0xdc + __real_3f800000;
    if (__real_38d1b717 < (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar11 = fVar11 / fVar10;
    }
    fVar10 = *(float *)&this->field_0xec;
    fVar1 = *(float *)&this->field_0xe8;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (((dVar3 + dVar3) * dVar6 * dVar5 + (double)fVar12) * (double)fVar10 +
          (double)(fVar1 + fVar1) * dVar5 * dVar4 + (double)fVar11 * dVar5) * auVar2._0_8_ +
         *(double *)&this->field_0x58;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (((dVar4 + dVar4) * dVar4 + (double)fVar12) * (double)fVar1 +
         ((double)(fVar10 + fVar10) * dVar5 + (double)fVar11) * dVar4) * auVar2._8_8_ + dVar7;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d6d7c80

UClass * __cdecl UBrownConradyDULensDistortionModelHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrownConradyDULensDistortionModelHandler.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"BrownConradyDULensDistortionModelHandler",
               &Z_Registration_Info_UClass_UBrownConradyDULensDistortionModelHandler.InnerSingleton,
               StaticRegisterNativesUBrownConradyDULensDistortionModelHandler,0xf0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrownConradyDULensDistortionModelHandler>,
               InternalVTableHelperCtorCaller<UBrownConradyDULensDistortionModelHandler>,local_res8,
               UBrownConradyUDLensDistortionModelHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrownConradyDULensDistortionModelHandler.InnerSingleton;
}

// InitDistortionMaterials @ 14d6ddfc0

void __thiscall
UBrownConradyDULensDistortionModelHandler::InitDistortionMaterials
          (UBrownConradyDULensDistortionModelHandler *this)

{
  UObject *pUVar1;
  UTexture *pUVar2;
  UClass *pUVar3;
  FName FVar4;
  TSoftObjectPtr<UMaterialInterface> *pTVar5;
  UMaterialInstanceDynamic *pUVar6;
  UMaterialInterface *pUVar7;
  UMaterialInterface *pUVar8;
  FName *pFVar9;
  FName local_res8;
  
  pUVar8 = (UMaterialInterface *)0x0;
  if (*(longlong *)&this->field_0x30 == 0) {
    pUVar3 = UCameraCalibrationSettings::StaticClass();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar3);
    }
    pUVar1 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
    FVar4 = (FName)UBrownConradyUDLensDistortionModelHandler::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (FVar4 != (FName)0x0) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
    }
    local_res8 = FVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    pTVar5 = TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
             ::Find((TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
                     *)&pUVar1[6].field_0x20,
                    (TSubclassOf<ULensDistortionModelHandlerBase_const_>)&local_res8);
    pUVar7 = pUVar8;
    if (pTVar5 != (TSoftObjectPtr<UMaterialInterface> *)0x0) {
      pUVar7 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(pTVar5);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pUVar6 = UMaterialInstanceDynamic::Create(pUVar7,(UObject *)this,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    *(UMaterialInstanceDynamic **)&this->field_0x30 = pUVar6;
  }
  if (*(longlong *)&this->field_0x98 == 0) {
    pUVar3 = UCameraCalibrationSettings::StaticClass();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar3);
    }
    pUVar1 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
    FVar4 = (FName)UBrownConradyUDLensDistortionModelHandler::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (FVar4 != (FName)0x0) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
    }
    local_res8 = FVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    pTVar5 = TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
             ::Find((TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
                     *)&pUVar1[2].field_0x20,
                    (TSubclassOf<ULensDistortionModelHandlerBase_const_>)&local_res8);
    pUVar7 = pUVar8;
    if (pTVar5 != (TSoftObjectPtr<UMaterialInterface> *)0x0) {
      pUVar7 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(pTVar5);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pUVar6 = UMaterialInstanceDynamic::Create(pUVar7,(UObject *)this,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    *(UMaterialInstanceDynamic **)&this->field_0x98 = pUVar6;
  }
  if (*(longlong *)&this->field_0xa0 == 0) {
    pUVar3 = UCameraCalibrationSettings::StaticClass();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar3);
    }
    pUVar1 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
    FVar4 = (FName)UBrownConradyUDLensDistortionModelHandler::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (FVar4 != (FName)0x0) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
    }
    local_res8 = FVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    pTVar5 = TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
             ::Find((TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
                     *)&pUVar1[4].field_0x20,
                    (TSubclassOf<ULensDistortionModelHandlerBase_const_>)&local_res8);
    if (pTVar5 != (TSoftObjectPtr<UMaterialInterface> *)0x0) {
      pUVar8 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(pTVar5);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pUVar6 = UMaterialInstanceDynamic::Create(pUVar8,(UObject *)this,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    *(UMaterialInstanceDynamic **)&this->field_0xa0 = pUVar6;
  }
  pUVar6 = *(UMaterialInstanceDynamic **)&this->field_0x30;
  pUVar2 = *(UTexture **)&this->field_0xb0;
  pFVar9 = ::FName::FName(&local_res8,"UndistortionDisplacementMap");
  UMaterialInstanceDynamic::SetTextureParameterValue(pUVar6,*pFVar9,pUVar2);
  pUVar6 = *(UMaterialInstanceDynamic **)&this->field_0x30;
  pUVar2 = *(UTexture **)&this->field_0xa8;
  pFVar9 = ::FName::FName(&local_res8,"DistortionDisplacementMap");
  UMaterialInstanceDynamic::SetTextureParameterValue(pUVar6,*pFVar9,pUVar2);
  ULensDistortionModelHandlerBase::SetDistortionState
            ((ULensDistortionModelHandlerBase *)this,(FLensDistortionState *)&this->field_0x38);
  return;
}

// InitializeHandler @ 14d6deb90

void __thiscall
UBrownConradyDULensDistortionModelHandler::InitializeHandler
          (UBrownConradyDULensDistortionModelHandler *this)

{
  UClass *pUVar1;
  
  pUVar1 = UBrownConradyDULensModel::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)&this->field_0x28 = pUVar1;
  return;
}

// IsForwardDistorting @ 14d6e1b70

bool __thiscall
UBrownConradyDULensDistortionModelHandler::IsForwardDistorting
          (UBrownConradyDULensDistortionModelHandler *this)

{
  return false;
}

// StaticRegisterNativesUBrownConradyDULensDistortionModelHandler @ 14d6f0090

void __cdecl
UBrownConradyDULensDistortionModelHandler::
StaticRegisterNativesUBrownConradyDULensDistortionModelHandler(void)

{
  return;
}

