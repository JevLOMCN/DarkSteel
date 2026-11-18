// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 49

// StaticClass @ 14d679910

UClass * __cdecl UCameraCalibrationSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraCalibrationSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraCalibrationSubsystem",
               &Z_Registration_Info_UClass_UCameraCalibrationSubsystem.InnerSingleton,
               StaticRegisterNativesUCameraCalibrationSubsystem,0x230,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraCalibrationSubsystem>,
               InternalVTableHelperCtorCaller<UCameraCalibrationSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraCalibrationSubsystem.InnerSingleton;
}

// UCameraCalibrationSubsystem @ 14d6aaa00

UCameraCalibrationSubsystem * __thiscall
UCameraCalibrationSubsystem::UCameraCalibrationSubsystem
          (UCameraCalibrationSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraCalibrationSubsystem__6B_;
  (this->DefaultLensFile).field0_0x0.DebugPtr = (ULensFile *)0x0;
  *(undefined8 *)&this->LensModelMap = 0;
  *(undefined8 *)&(this->LensModelMap).field_0x8 = 0;
  *(undefined8 *)&(this->LensModelMap).field_0x20 = 0;
  *(undefined4 *)&(this->LensModelMap).field_0x28 = 0;
  *(undefined4 *)&(this->LensModelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LensModelMap).field_0x34 = 0;
  *(undefined4 *)&(this->LensModelMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LensModelMap).field_0x40 = 0;
  *(undefined4 *)&(this->LensModelMap).field_0x48 = 0;
  *(undefined8 *)&this->CameraNodalOffsetAlgosMap = 0;
  *(undefined8 *)&(this->CameraNodalOffsetAlgosMap).field_0x8 = 0;
  *(undefined8 *)&(this->CameraNodalOffsetAlgosMap).field_0x20 = 0;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x28 = 0;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x34 = 0;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CameraNodalOffsetAlgosMap).field_0x40 = 0;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x48 = 0;
  *(undefined8 *)&this->CameraImageCenterAlgosMap = 0;
  *(undefined8 *)&(this->CameraImageCenterAlgosMap).field_0x8 = 0;
  *(undefined8 *)&(this->CameraImageCenterAlgosMap).field_0x20 = 0;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x28 = 0;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x34 = 0;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CameraImageCenterAlgosMap).field_0x40 = 0;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x48 = 0;
  *(undefined8 *)&this->CameraCalibrationStepsMap = 0;
  *(undefined8 *)&(this->CameraCalibrationStepsMap).field_0x8 = 0;
  *(undefined8 *)&(this->CameraCalibrationStepsMap).field_0x20 = 0;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x28 = 0;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x34 = 0;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CameraCalibrationStepsMap).field_0x40 = 0;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredOverlayMaterials = 0;
  *(undefined8 *)&(this->RegisteredOverlayMaterials).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredOverlayMaterials).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredOverlayMaterials).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredOverlayMaterials).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredOverlayMaterials).field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredOverlayMaterials).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RegisteredOverlayMaterials).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredOverlayMaterials).field_0x48 = 0;
  *(undefined8 *)&this->ComponentsWithAuthoritativeModels = 0;
  *(undefined8 *)&(this->ComponentsWithAuthoritativeModels).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentsWithAuthoritativeModels).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentsWithAuthoritativeModels).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentsWithAuthoritativeModels).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentsWithAuthoritativeModels).field_0x34 = 0;
  *(undefined4 *)&(this->ComponentsWithAuthoritativeModels).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ComponentsWithAuthoritativeModels).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentsWithAuthoritativeModels).field_0x48 = 0;
  (this->SceneViewExtension).Object = (FLensDistortionSceneViewExtension *)0x0;
  (this->SceneViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PostEngineInitHandle).ID = 0;
  return this;
}

// UCameraCalibrationSubsystem @ 14d6aabc0

UCameraCalibrationSubsystem * __thiscall
UCameraCalibrationSubsystem::UCameraCalibrationSubsystem(UCameraCalibrationSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7UCameraCalibrationSubsystem__6B_;
  (this->DefaultLensFile).field0_0x0.DebugPtr = (ULensFile *)0x0;
  *(undefined8 *)&this->LensModelMap = 0;
  *(undefined8 *)&(this->LensModelMap).field_0x8 = 0;
  *(undefined8 *)&(this->LensModelMap).field_0x20 = 0;
  *(undefined4 *)&(this->LensModelMap).field_0x28 = 0;
  *(undefined4 *)&(this->LensModelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LensModelMap).field_0x34 = 0;
  *(undefined4 *)&(this->LensModelMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LensModelMap).field_0x40 = 0;
  *(undefined4 *)&(this->LensModelMap).field_0x48 = 0;
  *(undefined8 *)&this->CameraNodalOffsetAlgosMap = 0;
  *(undefined8 *)&(this->CameraNodalOffsetAlgosMap).field_0x8 = 0;
  *(undefined8 *)&(this->CameraNodalOffsetAlgosMap).field_0x20 = 0;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x28 = 0;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x34 = 0;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CameraNodalOffsetAlgosMap).field_0x40 = 0;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x48 = 0;
  *(undefined8 *)&this->CameraImageCenterAlgosMap = 0;
  *(undefined8 *)&(this->CameraImageCenterAlgosMap).field_0x8 = 0;
  *(undefined8 *)&(this->CameraImageCenterAlgosMap).field_0x20 = 0;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x28 = 0;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x34 = 0;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CameraImageCenterAlgosMap).field_0x40 = 0;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x48 = 0;
  *(undefined8 *)&this->CameraCalibrationStepsMap = 0;
  *(undefined8 *)&(this->CameraCalibrationStepsMap).field_0x8 = 0;
  *(undefined8 *)&(this->CameraCalibrationStepsMap).field_0x20 = 0;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x28 = 0;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x34 = 0;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CameraCalibrationStepsMap).field_0x40 = 0;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredOverlayMaterials = 0;
  *(undefined8 *)&(this->RegisteredOverlayMaterials).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredOverlayMaterials).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredOverlayMaterials).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredOverlayMaterials).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredOverlayMaterials).field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredOverlayMaterials).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RegisteredOverlayMaterials).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredOverlayMaterials).field_0x48 = 0;
  *(undefined8 *)&this->ComponentsWithAuthoritativeModels = 0;
  *(undefined8 *)&(this->ComponentsWithAuthoritativeModels).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentsWithAuthoritativeModels).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentsWithAuthoritativeModels).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentsWithAuthoritativeModels).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentsWithAuthoritativeModels).field_0x34 = 0;
  *(undefined4 *)&(this->ComponentsWithAuthoritativeModels).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ComponentsWithAuthoritativeModels).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentsWithAuthoritativeModels).field_0x48 = 0;
  (this->SceneViewExtension).Object = (FLensDistortionSceneViewExtension *)0x0;
  (this->SceneViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PostEngineInitHandle).ID = 0;
  return this;
}

// ~UCameraCalibrationSubsystem @ 14d6accd0

void __thiscall
UCameraCalibrationSubsystem::~UCameraCalibrationSubsystem(UCameraCalibrationSubsystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UCameraCalibrationSubsystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneViewExtension).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->ComponentsWithAuthoritativeModels).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ComponentsWithAuthoritativeModels).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSubclassOf<ULensModel>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSubclassOf<ULensModel>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSubclassOf<ULensModel>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentsWithAuthoritativeModels);
  *(undefined4 *)&(this->RegisteredOverlayMaterials).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredOverlayMaterials).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredOverlayMaterials);
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CameraCalibrationStepsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CameraCalibrationStepsMap);
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CameraImageCenterAlgosMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CameraImageCenterAlgosMap);
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CameraNodalOffsetAlgosMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CameraNodalOffsetAlgosMap);
  *(undefined4 *)&(this->LensModelMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LensModelMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<ULensModel>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<ULensModel>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSubclassOf<ULensModel>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LensModelMap);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// operator() @ 14d6afbc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall `UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  uint uVar7;
  UClass *pUVar8;
  FString *pFVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  uint uVar15;
  undefined1 local_res10 [24];
  TObjectIterator<UClass> local_158;
  TObjectIterator<UClass> local_140;
  TObjectIterator<UClass> local_128;
  FUObjectCppClassStaticFunctions local_110;
  UObject *local_108;
  FUObjectCppClassStaticFunctions local_100;
  UObject *local_f8;
  FUObjectCppClassStaticFunctions local_f0;
  undefined8 local_e8;
  UObject *local_e0;
  undefined8 local_d8;
  UObject **local_d0;
  undefined8 local_c8;
  UObject **local_c0;
  undefined8 *local_b8;
  UObject **local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_140.Index = 0xffffffff;
  local_140.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ObjectArray.ArrayNum = 0;
  local_140.ObjectArray.ArrayMax = 0;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar8,&local_140.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_140);
  while( true ) {
    lVar11 = (longlong)local_140.Index;
    uVar15 = 0;
    uVar7 = 0;
    if (local_140.Index < 0) break;
    if (local_140.ObjectArray.ArrayNum <= local_140.Index) break;
    uVar6 = uVar15;
    if (local_140.Index < local_140.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_140.Index >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar11 = *(longlong *)(local_140.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    iVar10 = local_140.ObjectArray.ArrayNum;
    if (Z_Registration_Info_UClass_UCameraImageCenterAlgo.InnerSingleton == (UClass *)0x0) {
      local_110.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/CameraCalibrationCore",L"CameraImageCenterAlgo",
                 &Z_Registration_Info_UClass_UCameraImageCenterAlgo.InnerSingleton,
                 UCameraImageCenterAlgo::StaticRegisterNativesUCameraImageCenterAlgo,0x30,8,
                 CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                 InternalConstructor<UCameraImageCenterAlgo>,
                 InternalVTableHelperCtorCaller<UCameraImageCenterAlgo>,&local_110,
                 UObject::StaticClass,UObject::StaticClass);
      iVar10 = local_140.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UClass_UCameraImageCenterAlgo.InnerSingleton != (UClass *)0x0)
      goto LAB_14d6afd3b;
    }
    else {
LAB_14d6afd3b:
      iVar1 = (int)(Z_Registration_Info_UClass_UCameraImageCenterAlgo.InnerSingleton)->_padding_;
      if ((*(int *)(lVar11 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UClass_UCameraImageCenterAlgo.InnerSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar11 = (longlong)local_140.Index;
        uVar6 = uVar15;
        if (local_140.Index < iVar10) {
          uVar6 = (uint)~local_140.Index >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar10 = local_140.ObjectArray.ArrayNum;
        }
        if ((*(uint *)(*(longlong *)(local_140.ObjectArray.AllocatorInstance.Data + lVar11 * 8) +
                      0xd4) & 0x2000001) == 0) {
          lVar11 = (longlong)local_140.Index;
          if (local_140.Index < iVar10) {
            uVar15 = (uint)~local_140.Index >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pUVar8 = *(UClass **)(local_140.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
          if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar8);
          }
          pUVar2 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
          if (pUVar2 == (UObject *)0x0) {
            pFVar9 = GetTypeName<UCameraImageCenterAlgo>(&local_78);
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar13);
          }
          pUVar8 = UCameraImageCenterAlgo::StaticClass();
          iVar10 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar10) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar8->_padding_)) {
            pFVar9 = GetTypeName<UCameraImageCenterAlgo>(&local_98);
            pwVar13 = L"";
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            pFVar9 = GetFullNameForCastLogError<UObject>(&local_88,pUVar2);
            if ((pFVar9->Data).ArrayNum != 0) {
              pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar13,pwVar14);
          }
          lVar12 = (longlong)local_140.Index;
          lVar11 = *(longlong *)this;
          if (local_140.Index < local_140.ObjectArray.ArrayNum) {
            uVar7 = (uint)~local_140.Index >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_108 = *(UObject **)(local_140.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_108);
          }
          local_d8 = (**(code **)(*(longlong *)pUVar2 + 0x300))(pUVar2,local_a8);
          local_d0 = &local_108;
          TSet<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_&&,TSubclassOf<UCameraImageCenterAlgo>_&&>_>
                    ((TSet<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>,FDefaultSetAllocator>
                      *)(lVar11 + 0xd8),
                     (TPairInitializer<FName_&&,TSubclassOf<UCameraImageCenterAlgo>_&&> *)
                     local_res10,(bool *)&local_d8);
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_140);
  }
  if (local_140.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.ObjectArray.AllocatorInstance.Data);
  }
  local_128.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ObjectArray.ArrayNum = 0;
  local_128.ObjectArray.ArrayMax = 0;
  local_128.Index = 0xffffffff;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar8,&local_128.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_128);
  while( true ) {
    lVar11 = (longlong)local_128.Index;
    if (local_128.Index < 0) break;
    if (local_128.ObjectArray.ArrayNum <= local_128.Index) break;
    uVar15 = uVar7;
    if (local_128.Index < local_128.ObjectArray.ArrayNum) {
      uVar15 = (uint)~local_128.Index >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar11 = *(longlong *)(local_128.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    iVar10 = local_128.ObjectArray.ArrayNum;
    if (Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.InnerSingleton == (UClass *)0x0) {
      local_100.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/CameraCalibrationCore",L"CameraNodalOffsetAlgo",
                 &Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.InnerSingleton,
                 UCameraNodalOffsetAlgo::StaticRegisterNativesUCameraNodalOffsetAlgo,0x28,8,
                 CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                 InternalConstructor<UCameraNodalOffsetAlgo>,
                 InternalVTableHelperCtorCaller<UCameraNodalOffsetAlgo>,&local_100,
                 UObject::StaticClass,UObject::StaticClass);
      iVar10 = local_128.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.InnerSingleton != (UClass *)0x0)
      goto LAB_14d6b0074;
    }
    else {
LAB_14d6b0074:
      iVar1 = (int)(Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.InnerSingleton)->_padding_;
      if ((*(int *)(lVar11 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.InnerSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar11 = (longlong)local_128.Index;
        uVar15 = uVar7;
        if (local_128.Index < iVar10) {
          uVar15 = (uint)~local_128.Index >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar10 = local_128.ObjectArray.ArrayNum;
        }
        if ((*(uint *)(*(longlong *)(local_128.ObjectArray.AllocatorInstance.Data + lVar11 * 8) +
                      0xd4) & 0x2000001) == 0) {
          lVar11 = (longlong)local_128.Index;
          uVar15 = uVar7;
          if (local_128.Index < iVar10) {
            uVar15 = (uint)~local_128.Index >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pUVar8 = *(UClass **)(local_128.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
          if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar8);
          }
          pUVar2 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
          if (pUVar2 == (UObject *)0x0) {
            pFVar9 = GetTypeName<UCameraNodalOffsetAlgo>(&local_48);
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar13);
          }
          pUVar8 = UCameraNodalOffsetAlgo::StaticClass();
          iVar10 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar10) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar8->_padding_)) {
            pFVar9 = GetTypeName<UCameraNodalOffsetAlgo>(&local_68);
            pwVar13 = L"";
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            pFVar9 = GetFullNameForCastLogError<UObject>(&local_58,pUVar2);
            if ((pFVar9->Data).ArrayNum != 0) {
              pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar13,pwVar14);
          }
          lVar12 = (longlong)local_128.Index;
          lVar11 = *(longlong *)this;
          uVar15 = uVar7;
          if (local_128.Index < local_128.ObjectArray.ArrayNum) {
            uVar15 = (uint)~local_128.Index >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_f8 = *(UObject **)(local_128.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_f8);
          }
          local_c8 = (**(code **)(*(longlong *)pUVar2 + 0x2e8))(pUVar2,local_a0);
          local_c0 = &local_f8;
          TSet<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_&&,TSubclassOf<UCameraNodalOffsetAlgo>_&&>_>
                    ((TSet<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>,FDefaultSetAllocator>
                      *)(lVar11 + 0x88),
                     (TPairInitializer<FName_&&,TSubclassOf<UCameraNodalOffsetAlgo>_&&> *)
                     (local_res10 + 8),(bool *)&local_c8);
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_128);
  }
  if (local_128.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.ObjectArray.AllocatorInstance.Data);
  }
  local_158.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ObjectArray.ArrayNum = 0;
  local_158.ObjectArray.ArrayMax = 0;
  local_158.Index = 0xffffffff;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar8,&local_158.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_158);
  while( true ) {
    lVar11 = (longlong)local_158.Index;
    if (local_158.Index < 0) break;
    if (local_158.ObjectArray.ArrayNum <= local_158.Index) break;
    uVar15 = uVar7;
    if (local_158.Index < local_158.ObjectArray.ArrayNum) {
      uVar15 = (uint)~local_158.Index >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar11 = *(longlong *)(local_158.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    iVar10 = local_158.ObjectArray.ArrayNum;
    if (Z_Registration_Info_UClass_UCameraCalibrationStep.InnerSingleton == (UClass *)0x0) {
      local_f0.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/CameraCalibrationCore",L"CameraCalibrationStep",
                 &Z_Registration_Info_UClass_UCameraCalibrationStep.InnerSingleton,
                 UCameraCalibrationStep::StaticRegisterNativesUCameraCalibrationStep,0x28,8,
                 CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                 InternalConstructor<UCameraCalibrationStep>,
                 InternalVTableHelperCtorCaller<UCameraCalibrationStep>,&local_f0,
                 UObject::StaticClass,UObject::StaticClass);
      iVar10 = local_158.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UClass_UCameraCalibrationStep.InnerSingleton != (UClass *)0x0)
      goto LAB_14d6b03c4;
    }
    else {
LAB_14d6b03c4:
      iVar1 = (int)(Z_Registration_Info_UClass_UCameraCalibrationStep.InnerSingleton)->_padding_;
      if ((*(int *)(lVar11 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UClass_UCameraCalibrationStep.InnerSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar11 = (longlong)local_158.Index;
        uVar15 = uVar7;
        if (local_158.Index < iVar10) {
          uVar15 = (uint)~local_158.Index >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar10 = local_158.ObjectArray.ArrayNum;
        }
        if ((*(uint *)(*(longlong *)(local_158.ObjectArray.AllocatorInstance.Data + lVar11 * 8) +
                      0xd4) & 0x2000001) == 0) {
          lVar12 = (longlong)local_158.Index;
          lVar11 = *(longlong *)this;
          uVar15 = uVar7;
          if (local_158.Index < iVar10) {
            uVar15 = (uint)~local_158.Index >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar10 = local_158.ObjectArray.ArrayNum;
          }
          local_e0 = *(UObject **)(local_158.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_e0);
            iVar10 = local_158.ObjectArray.ArrayNum;
          }
          lVar12 = (longlong)local_158.Index;
          uVar15 = uVar7;
          if (local_158.Index < iVar10) {
            uVar15 = (uint)~local_158.Index >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_e8 = *(undefined8 *)
                      (*(longlong *)(local_158.ObjectArray.AllocatorInstance.Data + lVar12 * 8) +
                      0x18);
          local_b8 = &local_e8;
          local_b0 = &local_e0;
          TSet<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_&&,TSubclassOf<UCameraCalibrationStep>_&&>_>
                    ((TSet<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>,FDefaultSetAllocator>
                      *)(lVar11 + 0x128),
                     (TPairInitializer<FName_&&,TSubclassOf<UCameraCalibrationStep>_&&> *)
                     (local_res10 + 0x10),(bool *)&local_b8);
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_158);
  }
  if (local_158.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// ClearLensDistortionSVEState @ 14d6bac90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCameraCalibrationSubsystem::ClearLensDistortionSVEState
          (UCameraCalibrationSubsystem *this,ACameraActor *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FLensDistortionSceneViewExtension *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint local_res8 [2];
  
  if ((this->SceneViewExtension).Object == (FLensDistortionSceneViewExtension *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SceneViewExtension).Object;
  lpCriticalSection = &pFVar1->DistortionStateMapCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = *(uint *)((longlong)&param_1->_padding_ + 4);
    if (*(int *)&(pFVar1->DistortionStateMap).field_0x8 !=
        *(int *)&(pFVar1->DistortionStateMap).field_0x34) {
      TSet<TTuple<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy,0>,FDefaultSetAllocator>
                  *)&pFVar1->DistortionStateMap,local_res8[0],local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d6bad1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Deinitialize @ 14d6bfdb0

void __thiscall UCameraCalibrationSubsystem::Deinitialize(UCameraCalibrationSubsystem *this)

{
  undefined1 *puVar1;
  TSharedPtr<FLensDistortionSceneViewExtension,1> *pTVar2;
  TMap<FName,TSubclassOf<UCameraImageCenterAlgo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>_>
  *this_00;
  TMap<FName,TSubclassOf<UCameraNodalOffsetAlgo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>_>
  *this_01;
  TMap<FName,TSubclassOf<UCameraCalibrationStep>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>_>
  *this_02;
  int iVar3;
  bool bVar4;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar2 = &this->SceneViewExtension;
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<FLensDistortionSceneViewExtension,1> *)&local_28) {
    pTVar2->Object = (FLensDistortionSceneViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SceneViewExtension).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<FLensDistortionSceneViewExtension,1> *)&local_18) {
    pTVar2->Object = (FLensDistortionSceneViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SceneViewExtension).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  bVar4 = 1 < *(int *)&(this->LensModelMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
                      *)&this->LensModelMap);
  }
  puVar1 = &(this->LensModelMap).field_0xc;
  *(undefined4 *)&(this->LensModelMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->LensModelMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->LensModelMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LensModelMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->LensModelMap).field_0x2c;
  *(undefined4 *)&(this->LensModelMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->LensModelMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->LensModelMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->LensModelMap).field_0x48 = 1;
    TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
              *)&this->LensModelMap);
  }
  this_00 = &this->CameraImageCenterAlgosMap;
  bVar4 = 1 < *(int *)&(this->CameraImageCenterAlgosMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->CameraImageCenterAlgosMap).field_0xc;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->CameraImageCenterAlgosMap).field_0x2c;
  *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CameraImageCenterAlgosMap).field_0x10
               ,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->CameraImageCenterAlgosMap).field_0x48 = 1;
    TSet<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->CameraNodalOffsetAlgosMap;
  bVar4 = 1 < *(int *)&(this->CameraNodalOffsetAlgosMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar1 = &(this->CameraNodalOffsetAlgosMap).field_0xc;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->CameraNodalOffsetAlgosMap).field_0x2c;
  *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CameraNodalOffsetAlgosMap).field_0x10
               ,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->CameraNodalOffsetAlgosMap).field_0x48 = 1;
    TSet<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  this_02 = &this->CameraCalibrationStepsMap;
  bVar4 = 1 < *(int *)&(this->CameraCalibrationStepsMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  puVar1 = &(this->CameraCalibrationStepsMap).field_0xc;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->CameraCalibrationStepsMap).field_0x2c;
  *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CameraCalibrationStepsMap).field_0x10
               ,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->CameraCalibrationStepsMap).field_0x48 = 1;
    TSet<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>,FDefaultSetAllocator>
              *)this_02);
  }
  if ((this->PostEngineInitHandle).ID != 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,(FDelegateHandle)(this->PostEngineInitHandle).ID);
  }
  return;
}

// FindDistortionModelHandler @ 14d6c9a40

ULensDistortionModelHandlerBase * __thiscall
UCameraCalibrationSubsystem::FindDistortionModelHandler
          (UCameraCalibrationSubsystem *this,FDistortionHandlerPicker *param_1,bool param_2)

{
  return (ULensDistortionModelHandlerBase *)0x0;
}

// FindOrCreateDistortionModelHandler @ 14d6c9a50

ULensDistortionModelHandlerBase * __thiscall
UCameraCalibrationSubsystem::FindOrCreateDistortionModelHandler
          (UCameraCalibrationSubsystem *this,FDistortionHandlerPicker *param_1,
          TSubclassOf<ULensModel> param_2)

{
  return (ULensDistortionModelHandlerBase *)0x0;
}

// GetCameraCalibrationStep @ 14d6d2630

TSubclassOf<UCameraCalibrationStep> __thiscall
UCameraCalibrationSubsystem::GetCameraCalibrationStep
          (UCameraCalibrationSubsystem *this,FName param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<FName,TSubclassOf<UCameraCalibrationStep>_> *pTVar7;
  TSubclassOf<UCameraCalibrationStep> TVar8;
  undefined1 *puVar9;
  FName in_R8;
  
  uVar5 = ::GetTypeHash(in_R8.ComparisonIndex.Value);
  if (*(int *)&(this->CameraCalibrationStepsMap).field_0x8 !=
      *(int *)&(this->CameraCalibrationStepsMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->CameraCalibrationStepsMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->CameraCalibrationStepsMap).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->CameraCalibrationStepsMap).field_0x48 - 1U &
                              in_R8.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->CameraCalibrationStepsMap).field_0x0;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar6 * 0x18) == in_R8) {
          pTVar7 = TSet<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>,FDefaultSetAllocator>
                           *)&this->CameraCalibrationStepsMap,in_R8);
          if ((pTVar7 == (TTuple<FName,TSubclassOf<UCameraCalibrationStep>_> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            TVar8.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
            return (TSubclassOf<UCameraCalibrationStep>)TVar8.Class.field0_0x0;
          }
          pUVar2 = *(UObject **)&pTVar7->field_0x8;
          *(UObject **)param_1 = pUVar2;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            return (TSubclassOf<UCameraCalibrationStep>)param_1;
          }
          if (pUVar2 == (UObject *)0x0) {
            return (TSubclassOf<UCameraCalibrationStep>)param_1;
          }
          UE::GC::MarkAsReachable(pUVar2);
          return (TSubclassOf<UCameraCalibrationStep>)param_1;
        }
        iVar6 = *(int *)(lVar1 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  *(undefined8 *)param_1 = 0;
  return (TSubclassOf<UCameraCalibrationStep>)param_1;
}

// GetCameraCalibrationSteps @ 14d6d2730

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UCameraCalibrationSubsystem::GetCameraCalibrationSteps
          (UCameraCalibrationSubsystem *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FName,TSubclassOf<UCameraCalibrationStep>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TSubclassOf<UCameraCalibrationStep>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>_>
              *)&this->CameraCalibrationStepsMap,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCameraImageCenterAlgo @ 14d6d2770

TSubclassOf<UCameraImageCenterAlgo> __thiscall
UCameraCalibrationSubsystem::GetCameraImageCenterAlgo
          (UCameraCalibrationSubsystem *this,FName param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_> *pTVar7;
  TSubclassOf<UCameraImageCenterAlgo> TVar8;
  undefined1 *puVar9;
  FName in_R8;
  
  uVar5 = ::GetTypeHash(in_R8.ComparisonIndex.Value);
  if (*(int *)&(this->CameraImageCenterAlgosMap).field_0x8 !=
      *(int *)&(this->CameraImageCenterAlgosMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->CameraImageCenterAlgosMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->CameraImageCenterAlgosMap).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->CameraImageCenterAlgosMap).field_0x48 - 1U &
                              in_R8.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->CameraImageCenterAlgosMap).field_0x0;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar6 * 0x18) == in_R8) {
          pTVar7 = TSet<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>,FDefaultSetAllocator>
                           *)&this->CameraImageCenterAlgosMap,in_R8);
          if ((pTVar7 == (TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            TVar8.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
            return (TSubclassOf<UCameraImageCenterAlgo>)TVar8.Class.field0_0x0;
          }
          pUVar2 = *(UObject **)&pTVar7->field_0x8;
          *(UObject **)param_1 = pUVar2;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            return (TSubclassOf<UCameraImageCenterAlgo>)param_1;
          }
          if (pUVar2 == (UObject *)0x0) {
            return (TSubclassOf<UCameraImageCenterAlgo>)param_1;
          }
          UE::GC::MarkAsReachable(pUVar2);
          return (TSubclassOf<UCameraImageCenterAlgo>)param_1;
        }
        iVar6 = *(int *)(lVar1 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  *(undefined8 *)param_1 = 0;
  return (TSubclassOf<UCameraImageCenterAlgo>)param_1;
}

// GetCameraImageCenterAlgos @ 14d6d2870

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UCameraCalibrationSubsystem::GetCameraImageCenterAlgos
          (UCameraCalibrationSubsystem *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FName,TSubclassOf<UCameraImageCenterAlgo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TSubclassOf<UCameraImageCenterAlgo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>_>
              *)&this->CameraImageCenterAlgosMap,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCameraNodalOffsetAlgo @ 14d6d28a0

TSubclassOf<UCameraNodalOffsetAlgo> __thiscall
UCameraCalibrationSubsystem::GetCameraNodalOffsetAlgo
          (UCameraCalibrationSubsystem *this,FName param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_> *pTVar7;
  TSubclassOf<UCameraNodalOffsetAlgo> TVar8;
  undefined1 *puVar9;
  FName in_R8;
  
  uVar5 = ::GetTypeHash(in_R8.ComparisonIndex.Value);
  if (*(int *)&(this->CameraNodalOffsetAlgosMap).field_0x8 !=
      *(int *)&(this->CameraNodalOffsetAlgosMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->CameraNodalOffsetAlgosMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->CameraNodalOffsetAlgosMap).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->CameraNodalOffsetAlgosMap).field_0x48 - 1U &
                              in_R8.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->CameraNodalOffsetAlgosMap).field_0x0;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar6 * 0x18) == in_R8) {
          pTVar7 = TSet<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>,FDefaultSetAllocator>
                           *)&this->CameraNodalOffsetAlgosMap,in_R8);
          if ((pTVar7 == (TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            TVar8.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
            return (TSubclassOf<UCameraNodalOffsetAlgo>)TVar8.Class.field0_0x0;
          }
          pUVar2 = *(UObject **)&pTVar7->field_0x8;
          *(UObject **)param_1 = pUVar2;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            return (TSubclassOf<UCameraNodalOffsetAlgo>)param_1;
          }
          if (pUVar2 == (UObject *)0x0) {
            return (TSubclassOf<UCameraNodalOffsetAlgo>)param_1;
          }
          UE::GC::MarkAsReachable(pUVar2);
          return (TSubclassOf<UCameraNodalOffsetAlgo>)param_1;
        }
        iVar6 = *(int *)(lVar1 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  *(undefined8 *)param_1 = 0;
  return (TSubclassOf<UCameraNodalOffsetAlgo>)param_1;
}

// GetCameraNodalOffsetAlgos @ 14d6d29a0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UCameraCalibrationSubsystem::GetCameraNodalOffsetAlgos
          (UCameraCalibrationSubsystem *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FName,TSubclassOf<UCameraNodalOffsetAlgo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TSubclassOf<UCameraNodalOffsetAlgo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>_>
              *)&this->CameraNodalOffsetAlgosMap,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDefaultLensFile @ 14d6d3720

ULensFile * __thiscall
UCameraCalibrationSubsystem::GetDefaultLensFile(UCameraCalibrationSubsystem *this)

{
  return (this->DefaultLensFile).field0_0x0.DebugPtr;
}

// GetDistortionModelHandlers @ 14d6d39a0

TArray<ULensDistortionModelHandlerBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UCameraCalibrationSubsystem::GetDistortionModelHandlers
          (UCameraCalibrationSubsystem *this,
          TArray<ULensDistortionModelHandlerBase_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,UCineCameraComponent *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLensFile @ 14d6d52d0

ULensFile * __thiscall
UCameraCalibrationSubsystem::GetLensFile(UCameraCalibrationSubsystem *this,FLensFilePicker *param_1)

{
  if (param_1->bUseDefaultLensFile != false) {
    return (this->DefaultLensFile).field0_0x0.DebugPtr;
  }
  return (param_1->LensFile).field0_0x0.DebugPtr;
}

// GetOverlayMaterial @ 14d6d6280

UMaterialInterface * __thiscall
UCameraCalibrationSubsystem::GetOverlayMaterial(UCameraCalibrationSubsystem *this,FName *param_1)

{
  int iVar1;
  bool bVar2;
  TTuple<FName,TSoftObjectPtr<UMaterialInterface>_> *pTVar3;
  UMaterialInterface *pUVar4;
  UMaterialInterface *pUVar5;
  FUObjectItem *pFVar6;
  UClass *pUVar7;
  UMaterialInterface *local_res8;
  FWeakObjectPtr local_38;
  FSoftObjectPath local_30;
  
  pTVar3 = TSet<TTuple<FName,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
                   *)&this->RegisteredOverlayMaterials,*param_1);
  if (pTVar3 == (TTuple<FName,TSoftObjectPtr<UMaterialInterface>_> *)0x0) {
    local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_30.AssetPath.AssetName.Number = 0;
    local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_30.AssetPath.PackageName.Number = 0;
    local_30.SubPathString.Data.ArrayNum = 0;
    local_30.SubPathString.Data.ArrayMax = 0;
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_res8 = (UMaterialInterface *)0x0;
    FUtf8String::Reset(&local_30.SubPathString,0);
  }
  else {
    local_38.ObjectIndex = *(int *)&pTVar3->field_0x8;
    local_38.ObjectSerialNumber = *(int *)&pTVar3->field_0xc;
    FSoftObjectPath::FSoftObjectPath(&local_30,(FSoftObjectPath *)&pTVar3->field_0x10);
  }
  pUVar4 = (UMaterialInterface *)FWeakObjectPtr::Get(&local_38);
  if (pUVar4 == (UMaterialInterface *)0x0) {
    if (local_30.AssetPath.PackageName != (FName)0x0) {
      pUVar5 = (UMaterialInterface *)FSoftObjectPath::ResolveObject(&local_30);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      bVar2 = (*IsInAsyncLoadingThread)();
      if ((bVar2) && (pUVar5 != (UMaterialInterface *)0x0)) {
        pFVar6 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4));
        if (((pFVar6->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_14d6d635b;
LAB_14d6d6387:
        if (((uint)pUVar5->_padding_ >> 0x1e & 1) != 0) goto LAB_14d6d6395;
        bVar2 = true;
      }
      else {
LAB_14d6d635b:
        local_res8 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res8);
        if (pUVar5 != (UMaterialInterface *)0x0) goto LAB_14d6d6387;
LAB_14d6d6395:
        bVar2 = false;
      }
      pUVar4 = (UMaterialInterface *)0x0;
      if (bVar2) {
        pUVar4 = pUVar5;
      }
    }
    if (pUVar4 != (UMaterialInterface *)0x0) goto LAB_14d6d6479;
    if (local_30.AssetPath.PackageName != (FName)0x0) {
      FSoftObjectPath::TryLoad(&local_30,(FUObjectSerializeContext *)0x0);
      pUVar4 = (UMaterialInterface *)FWeakObjectPtr::Get(&local_38);
      if ((pUVar4 == (UMaterialInterface *)0x0) && (local_30.AssetPath.PackageName != (FName)0x0)) {
        pUVar5 = (UMaterialInterface *)FSoftObjectPath::ResolveObject(&local_30);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        bVar2 = (*IsInAsyncLoadingThread)();
        if ((bVar2) && (pUVar5 != (UMaterialInterface *)0x0)) {
          pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4));
          if (((pFVar6->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_14d6d642f;
LAB_14d6d645b:
          if (((uint)pUVar5->_padding_ >> 0x1e & 1) != 0) goto LAB_14d6d6469;
          bVar2 = true;
        }
        else {
LAB_14d6d642f:
          local_res8 = pUVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar5 != (UMaterialInterface *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res8);
          if (pUVar5 != (UMaterialInterface *)0x0) goto LAB_14d6d645b;
LAB_14d6d6469:
          bVar2 = false;
        }
        pUVar4 = (UMaterialInterface *)0x0;
        if (bVar2) {
          pUVar4 = pUVar5;
        }
      }
      if (pUVar4 != (UMaterialInterface *)0x0) goto LAB_14d6d6479;
    }
  }
  else {
LAB_14d6d6479:
    pUVar7 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_14d6d649f;
  }
  pUVar4 = (UMaterialInterface *)0x0;
LAB_14d6d649f:
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  return pUVar4;
}

// GetOverlayMaterialNames @ 14d6d6500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UCameraCalibrationSubsystem::GetOverlayMaterialNames
          (UCameraCalibrationSubsystem *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  ForElementType<unsigned_int> this_00;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  byte bVar11;
  TSparseSetElement<FName> *pTVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  TSparseSetElement<FName> *pTVar19;
  ulonglong uVar20;
  TSparseSetElement<FName> *pTVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  undefined1 auStackY_188 [32];
  int local_158 [2];
  uint local_150;
  uint uStack_14c;
  ForElementType<unsigned_int> FStack_148;
  undefined4 local_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  uint local_130;
  uint uStack_12c;
  ForElementType<unsigned_int> FStack_128;
  undefined4 local_120;
  uint uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  TArray<FName,TSizedDefaultAllocator<32>_> local_110;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  FSparseArrayAllocationInfo local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  this_00 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar21 = (TSparseSetElement<FName> *)0x0;
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  local_68 = -1;
  TMapBase<FName,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UMaterialInterface>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UMaterialInterface>,0>_>
              *)&this->RegisteredOverlayMaterials,&local_110);
  FVar23.Data = local_110.AllocatorInstance.Data;
  iVar7 = local_110.ArrayNum;
  lVar22 = (longlong)local_110.ArrayNum;
  if ((local_110.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  uVar16 = (local_98._8_4_ - local_64) + iVar7;
  if (uVar16 <= (uint)(local_98._8_4_ - local_64)) goto LAB_14d6d67f1;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar16);
  if (uVar16 < 4) {
    uVar16 = 1;
  }
  else {
    uVar20 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar16 <= (int)local_50)) goto LAB_14d6d67f1;
  local_50 = uVar16;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 != 0) {
    uVar14 = uVar16;
    if (uVar16 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_14d6d6645;
      }
    }
    else {
LAB_14d6d6645:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar14,4);
    }
    if (0 < (int)uVar16) {
      uVar20 = (ulonglong)uVar16;
      pTVar12 = pTVar21;
      do {
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar10 = (ulonglong)pTVar12 & (longlong)(int)uVar16 - 1U;
        pTVar12 = (TSparseSetElement<FName> *)&pTVar12->field_0x1;
        *(undefined4 *)(FVar13.Data + uVar10 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_50 != 0) {
    local_150 = 0;
    uStack_14c = 1;
    uStack_13c = 0;
    uStack_138 = 0;
    pTVar12 = pTVar21;
    if (local_70 != 0) {
      FVar15 = this_00;
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78;
      }
      uVar16 = *(uint *)FVar15;
      pTVar19 = pTVar21;
      while (uVar16 == 0) {
        uStack_138 = (int)pTVar19 + 0x20;
        pTVar19 = (TSparseSetElement<FName> *)(ulonglong)uStack_138;
        iVar7 = (int)pTVar12;
        local_150 = iVar7 + 1;
        pTVar12 = (TSparseSetElement<FName> *)(ulonglong)local_150;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_150)
        goto LAB_14d6d674c;
        uVar16 = *(uint *)((uchar *)((longlong)FVar15 + 4) + (longlong)iVar7 * 4);
      }
      uStack_14c = -uVar16 & uVar16;
      uVar20 = (ulonglong)uStack_14c * 2 + 1;
      lVar4 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_13c = (int)lVar4 + -1 + uStack_138;
      pTVar12 = (TSparseSetElement<FName> *)(ulonglong)uStack_13c;
      if ((int)local_70 < (int)uStack_13c) {
LAB_14d6d674c:
        pTVar12 = (TSparseSetElement<FName> *)(ulonglong)local_70;
        uStack_13c = local_70;
      }
    }
    local_140 = 0xffffffff;
    local_100 = (longlong *)local_98;
    local_f8._padding_ = CONCAT44(uStack_14c,local_150);
    local_f8.CurrentBitIndex = uStack_13c;
    local_f8.UnvisitedBitMask = 0xffffffff;
    local_f8._28_4_ = uStack_134;
    local_f8.BaseBitIndex = uStack_138;
    FStack_148 = this_00;
    local_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
    if ((int)pTVar12 < (int)local_70) {
      do {
        puVar18 = (undefined8 *)((longlong)(int)pTVar12 * 0x10 + *local_100);
        uVar3 = *puVar18;
        uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar16 = local_50 - 1 & uVar16 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar18 + 0xc) = uVar16;
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(FVar13.Data + uVar20 * 4);
        *(int *)(FVar13.Data + uVar20 * 4) = (int)pTVar12;
        local_f8.UnvisitedBitMask = local_f8.UnvisitedBitMask & ~local_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
        pTVar12 = (TSparseSetElement<FName> *)(ulonglong)(uint)local_f8.CurrentBitIndex;
      } while (local_f8.CurrentBitIndex < *(int *)((longlong)local_f8.Array + 0x18));
    }
  }
LAB_14d6d67f1:
  pFVar1 = FVar23.Data + lVar22 * 8;
  iVar7 = local_68;
  do {
    local_68 = iVar7;
    if (FVar23.Data == pFVar1) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 __return_storage_ptr__);
      if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      iVar7 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = -1;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
      }
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return __return_storage_ptr__;
    }
    if (local_64 == 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
      FVar15 = this_00;
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78;
      }
      bVar11 = (byte)iVar8 & 0x1f;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1f;
        bVar11 = bVar11 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar8 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar11 & 0x1f));
    }
    else {
      local_68 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x10 + 4);
      local_64 = local_64 + -1;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)local_68 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_b0,iVar7);
    pTVar12 = pTVar21;
    if (local_b0.Pointer != (TSparseSetElement<FName> *)0x0) {
      *(undefined8 *)local_b0.Pointer = *(undefined8 *)FVar23.Data;
      *(undefined4 *)((longlong)local_b0.Pointer + 8) = 0xffffffff;
      pTVar12 = local_b0.Pointer;
    }
    uVar3 = *(undefined8 *)pTVar12;
    local_158[0] = local_b0.Index;
    uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar16 = uVar16 + (int)((ulonglong)uVar3 >> 0x20);
    bVar6 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::TryReplaceExisting
                      ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,uVar16,
                       pTVar12,local_158,(bool *)0x0);
    if (!bVar6) {
      uVar17 = 1;
      uVar14 = local_98._8_4_ - local_64;
      if (3 < uVar14) {
        uVar20 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        uVar17 = 1 << ((byte)lVar22 & 0x1f);
      }
      if (((int)uVar14 < 1) || ((int)uVar17 <= (int)local_50)) {
        uVar16 = local_50 - 1 & uVar16;
        *(uint *)&pTVar12->field_0xc = uVar16;
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)&pTVar12->field_0x8 = *(undefined4 *)(FVar13.Data + uVar20 * 4);
        *(int *)(FVar13.Data + uVar20 * 4) = local_158[0];
      }
      else {
        local_50 = uVar17;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar17 != 0) {
          uVar16 = uVar17;
          if (uVar17 < 2) {
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              uVar16 = 0;
              goto LAB_14d6d697a;
            }
          }
          else {
LAB_14d6d697a:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar16,4);
          }
          if (0 < (int)uVar17) {
            uVar20 = (ulonglong)uVar17;
            pTVar12 = pTVar21;
            do {
              FVar13.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar13.Data = local_58.Data;
              }
              uVar10 = (ulonglong)pTVar12 & (longlong)(int)uVar17 - 1U;
              pTVar12 = (TSparseSetElement<FName> *)&pTVar12->field_0x1;
              *(undefined4 *)(FVar13.Data + uVar10 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        if (local_50 != 0) {
          local_130 = 0;
          uStack_12c = 1;
          uStack_11c = 0;
          uStack_118 = 0;
          pTVar12 = pTVar21;
          if (local_70 != 0) {
            FVar15 = this_00;
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar15 = local_78;
            }
            uVar16 = *(uint *)FVar15;
            pTVar19 = pTVar21;
            while (uVar16 == 0) {
              uStack_118 = (int)pTVar19 + 0x20;
              pTVar19 = (TSparseSetElement<FName> *)(ulonglong)uStack_118;
              iVar7 = (int)pTVar12;
              local_130 = iVar7 + 1;
              pTVar12 = (TSparseSetElement<FName> *)(ulonglong)local_130;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_130) goto LAB_14d6d6a7c;
              uVar16 = *(uint *)((uchar *)((longlong)FVar15 + 4) + (longlong)iVar7 * 4);
            }
            uStack_12c = -uVar16 & uVar16;
            uVar20 = (ulonglong)uStack_12c * 2 + 1;
            lVar22 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            uStack_11c = (int)lVar22 + -1 + uStack_118;
            pTVar12 = (TSparseSetElement<FName> *)(ulonglong)uStack_11c;
            if ((int)local_70 < (int)uStack_11c) {
LAB_14d6d6a7c:
              pTVar12 = (TSparseSetElement<FName> *)(ulonglong)local_70;
              uStack_11c = local_70;
            }
          }
          local_120 = 0xffffffff;
          local_d8 = (longlong *)local_98;
          local_d0._padding_ = CONCAT44(uStack_12c,local_130);
          local_d0.CurrentBitIndex = uStack_11c;
          local_d0.UnvisitedBitMask = 0xffffffff;
          local_d0._28_4_ = uStack_114;
          local_d0.BaseBitIndex = uStack_118;
          FStack_128 = this_00;
          local_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
          if ((int)pTVar12 < (int)local_70) {
            do {
              puVar18 = (undefined8 *)((longlong)(int)pTVar12 * 0x10 + *local_d8);
              uVar3 = *puVar18;
              uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
              uVar16 = local_50 - 1 & uVar16 + (int)((ulonglong)uVar3 >> 0x20);
              *(uint *)((longlong)puVar18 + 0xc) = uVar16;
              FVar13.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar13.Data = local_58.Data;
              }
              uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar16;
              *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(FVar13.Data + uVar20 * 4);
              *(int *)(FVar13.Data + uVar20 * 4) = (int)pTVar12;
              local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
              pTVar12 = (TSparseSetElement<FName> *)(ulonglong)(uint)local_d0.CurrentBitIndex;
            } while (local_d0.CurrentBitIndex < *(int *)((longlong)local_d0.Array + 0x18));
          }
        }
      }
    }
    FVar23.Data = FVar23.Data + 8;
    iVar7 = local_68;
  } while( true );
}

// GetPrivateStaticClass @ 14d6d8270

UClass * __cdecl UCameraCalibrationSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraCalibrationSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraCalibrationSubsystem",
               &Z_Registration_Info_UClass_UCameraCalibrationSubsystem.InnerSingleton,
               StaticRegisterNativesUCameraCalibrationSubsystem,0x230,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraCalibrationSubsystem>,
               InternalVTableHelperCtorCaller<UCameraCalibrationSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraCalibrationSubsystem.InnerSingleton;
}

// GetRegisteredLensModel @ 14d6d8990

TSubclassOf<ULensModel> __thiscall
UCameraCalibrationSubsystem::GetRegisteredLensModel(UCameraCalibrationSubsystem *this,FName param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *this_00;
  TTuple<FName,TSubclassOf<ULensModel>_> *pTVar7;
  TSubclassOf<ULensModel> TVar8;
  ForAnyElementType FVar9;
  undefined1 *puVar10;
  FName local_res8;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  this_00 = ::FName::ToString(&local_res18,&local_18);
  ::FString::ToLower(this_00,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar9.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar9.Data);
  FVar3 = local_res8;
  uVar5 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  if (*(int *)&(this->LensModelMap).field_0x8 != *(int *)&(this->LensModelMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->LensModelMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->LensModelMap).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->LensModelMap).field_0x48 - 1U & FVar3.Number + uVar5) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->LensModelMap + (longlong)iVar6 * 0x18) == FVar3) {
          pTVar7 = TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
                           *)&this->LensModelMap,local_res8);
          if (pTVar7 == (TTuple<FName,TSubclassOf<ULensModel>_> *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L"");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              TVar8.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar2)();
              return (TSubclassOf<ULensModel>)TVar8.Class.field0_0x0;
            }
          }
          pUVar1 = *(UObject **)&pTVar7->field_0x8;
          *(UObject **)param_1 = pUVar1;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar1);
          }
          goto LAB_14d6d8a5c;
        }
        iVar6 = *(int *)(*(longlong *)&this->LensModelMap + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  *(undefined8 *)param_1 = 0;
LAB_14d6d8a5c:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (TSubclassOf<ULensModel>)param_1;
}

// GetSceneViewExtension @ 14d6d8be0

TSharedPtr<FLensDistortionSceneViewExtension,1> * __thiscall
UCameraCalibrationSubsystem::GetSceneViewExtension(UCameraCalibrationSubsystem *this)

{
  return &this->SceneViewExtension;
}

// Initialize @ 14d6de980

void __thiscall
UCameraCalibrationSubsystem::Initialize
          (UCameraCalibrationSubsystem *this,FSubsystemCollectionBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLensDistortionSceneViewExtension *this_00;
  FDelegateHandle FVar3;
  FAutoRegister local_res8 [16];
  TRawPtrProxy<FLensDistortionSceneViewExtension> local_res18;
  UCameraCalibrationSubsystem *local_res20;
  <lambda_1> local_58;
  FLensDistortionSceneViewExtension *local_50;
  FSharedReferencer<1> local_48 [2];
  TSharedRef<FLensDistortionSceneViewExtension,1> local_38;
  TSharedRef<ISceneViewExtension,1> local_28;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 == (FLensDistortionSceneViewExtension *)0x0) {
    this_00 = (FLensDistortionSceneViewExtension *)0x0;
  }
  else {
    FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this_00,local_res8);
    this_00->_padding_ = (longlong)&___7FLensDistortionSceneViewExtension__6B_;
    *(undefined8 *)&(this_00->DistortionStateMap).field_0x0 = 0;
    *(undefined8 *)&(this_00->DistortionStateMap).field_0x8 = 0;
    *(undefined8 *)&(this_00->DistortionStateMap).field_0x20 = 0;
    *(undefined4 *)&(this_00->DistortionStateMap).field_0x28 = 0;
    *(undefined4 *)&(this_00->DistortionStateMap).field_0x2c = 0x80;
    *(undefined4 *)&(this_00->DistortionStateMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this_00->DistortionStateMap).field_0x34 = 0;
    *(undefined8 *)&(this_00->DistortionStateMap).field_0x40 = 0;
    *(undefined4 *)&(this_00->DistortionStateMap).field_0x48 = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&this_00->DistortionStateMapCriticalSection,4000);
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_res18.Object = this_00;
  TSharedRef<FLensDistortionSceneViewExtension,1>::
  TSharedRef<FLensDistortionSceneViewExtension,1><FLensDistortionSceneViewExtension>
            (&local_38,&local_res18);
  local_28.Object = (ISceneViewExtension *)local_38.Object;
  local_28.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  local_50 = local_38.Object;
  local_48[0].ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->SceneViewExtension != (TSharedPtr<FLensDistortionSceneViewExtension,1> *)&local_50) {
    (this->SceneViewExtension).Object = local_38.Object;
    local_50 = (FLensDistortionSceneViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SceneViewExtension).SharedReferenceCount,local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  local_res20 = this;
  FVar3 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddLambda<_UCameraCalibrationSubsystem::Initialize_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnPostEngineInit,&local_58);
                    /* WARNING: Load size is inaccurate */
  (this->PostEngineInitHandle).ID = *FVar3.ID;
  return;
}

// RegisterDistortionModel @ 14d6e6830

void __thiscall
UCameraCalibrationSubsystem::RegisterDistortionModel
          (UCameraCalibrationSubsystem *this,TSubclassOf<ULensModel> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  ULensModel *pUVar5;
  FString *this_00;
  ForAnyElementType FVar6;
  TPairInitializer<FName_&&,TSubclassOf<ULensModel>_const_&> local_res8;
  FName local_res18 [2];
  FString local_38;
  undefined1 local_28 [16];
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = ULensModel::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_14d6e687b;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14d6e687b:
  pUVar5 = UClass::GetDefaultObject<ULensModel>(pUVar4);
  (**(code **)(*(longlong *)pUVar5 + 0x2b0))(pUVar5,&local_res8.Value);
  this_00 = ::FName::ToString((FName *)&local_res8.Value,(FString *)local_28);
  ::FString::ToLower(this_00,&local_38);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  local_28._0_8_ = ::FName::FName(local_res18,(wchar_t *)FVar6.Data);
  local_28._8_8_ = param_1.Class.field0_0x0;
  TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,TSubclassOf<ULensModel>_const_&>_>
            ((TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
              *)&this->LensModelMap,&local_res8,(bool *)local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterOverlayMaterial @ 14d6e6a00

void __thiscall
UCameraCalibrationSubsystem::RegisterOverlayMaterial
          (UCameraCalibrationSubsystem *this,FName *param_1,FSoftObjectPath *param_2)

{
  FScriptContainerElement *pFVar1;
  FSoftObjectPath *pFVar2;
  FName *local_68;
  undefined8 *local_60;
  FSoftObjectPath local_58;
  undefined8 local_38;
  FSoftObjectPath local_30;
  
  pFVar2 = FSoftObjectPath::FSoftObjectPath(&local_58,param_2);
  local_38 = 0;
  FSoftObjectPath::FSoftObjectPath(&local_30,pFVar2);
  pFVar1 = (pFVar2->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  local_60 = &local_38;
  local_68 = param_1;
  TSet<TTuple<FName,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSoftObjectPtr<UMaterialInterface>_&&>_>
            ((TSet<TTuple<FName,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
              *)&this->RegisteredOverlayMaterials,
             (TPairInitializer<FName_const_&,TSoftObjectPtr<UMaterialInterface>_&&> *)
             &stack0x00000008,(bool *)&local_68);
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDefaultLensFile @ 14d6eba00

void __thiscall
UCameraCalibrationSubsystem::SetDefaultLensFile
          (UCameraCalibrationSubsystem *this,ULensFile *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULensFile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->DefaultLensFile).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->DefaultLensFile).field0_0x0.DebugPtr = param_1;
  return;
}

// SetLensDistortionSVEState @ 14d6ebb40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCameraCalibrationSubsystem::SetLensDistortionSVEState
          (UCameraCalibrationSubsystem *this,ACameraActor *param_1,
          FDisplacementMapBlendingParams *param_2,ULensDistortionModelHandlerBase *param_3)

{
  FLensDistortionSceneViewExtension *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDisplacementMapBlendingParams *pFVar4;
  longlong lVar5;
  FLensDistortionState *pFVar6;
  FDisplacementMapBlendingParams local_158;
  
  if ((this->SceneViewExtension).Object == (FLensDistortionSceneViewExtension *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (this->SceneViewExtension).Object;
  pFVar4 = FDisplacementMapBlendingParams::FDisplacementMapBlendingParams(&local_158,param_2);
  FLensDistortionSceneViewExtension::UpdateDistortionState_AnyThread(this_00,param_1,pFVar4,param_3)
  ;
  pFVar6 = (FLensDistortionState *)&param_2->FxFyScale;
  lVar5 = 4;
  do {
    pFVar1 = pFVar6[-1].DistortionInfo.Parameters.AllocatorInstance.Data;
    pFVar6 = pFVar6 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar5 != 0);
  return;
}

// StaticRegisterNativesUCameraCalibrationSubsystem @ 14d6f0140

void __cdecl UCameraCalibrationSubsystem::StaticRegisterNativesUCameraCalibrationSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterDistortionModel @ 14d6f3fe0

void __thiscall
UCameraCalibrationSubsystem::UnregisterDistortionModel
          (UCameraCalibrationSubsystem *this,TSubclassOf<ULensModel> param_1)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  ULensModel *pUVar7;
  FString *this_00;
  FName *pFVar8;
  ForAnyElementType FVar9;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar6 = ULensModel::StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar6 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_14d6f402b;
      }
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_14d6f402b:
  pUVar7 = UClass::GetDefaultObject<ULensModel>(pUVar6);
  (**(code **)(*(longlong *)pUVar7 + 0x2b0))(pUVar7,&local_res8);
  this_00 = ::FName::ToString(&local_res8,&local_28);
  ::FString::ToLower(this_00,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar9.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar8 = ::FName::FName(local_res18,(wchar_t *)FVar9.Data);
  FVar3 = *pFVar8;
  local_res10 = FVar3;
  if (*(int *)&(this->LensModelMap).field_0x8 != *(int *)&(this->LensModelMap).field_0x34) {
    uVar5 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
                         *)&this->LensModelMap,FVar3.Number + uVar5,&local_res10);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// UnregisterDistortionModelHandler @ 14d6f40e0

void __thiscall
UCameraCalibrationSubsystem::UnregisterDistortionModelHandler
          (UCameraCalibrationSubsystem *this,UCineCameraComponent *param_1,
          ULensDistortionModelHandlerBase *param_2)

{
  return;
}

// UnregisterOverlayMaterial @ 14d6f41e0

void __thiscall
UCameraCalibrationSubsystem::UnregisterOverlayMaterial
          (UCameraCalibrationSubsystem *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FName local_res8;
  
  FVar1 = *param_1;
  if (*(int *)&(this->RegisteredOverlayMaterials).field_0x8 !=
      *(int *)&(this->RegisteredOverlayMaterials).field_0x34) {
    local_res8 = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
                         *)&this->RegisteredOverlayMaterials,FVar1.Number + uVar2,&local_res8);
  }
  return;
}

// __VTableCtorCaller @ 14d6f6920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UCameraCalibrationSubsystem::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UCameraCalibrationSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[3].field_0x20 = 0;
    *(undefined4 *)&this[3].field_0x24 = 0x80;
    *(undefined4 *)&this[3].field_0x28 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x2c = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    *(undefined4 *)&this[5].field_0x14 = 0x80;
    *(undefined4 *)&this[5].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[5].field_0x1c = 0;
    *(undefined8 *)&this[5].field_0x28 = 0;
    *(undefined4 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x28 = 0;
    *(undefined4 *)(this + 7) = 0;
    *(undefined4 *)&this[7].field_0x4 = 0x80;
    *(undefined4 *)&this[7].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[7].field_0xc = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined4 *)&this[7].field_0x20 = 0;
    *(undefined8 *)&this[7].field_0x28 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined4 *)&this[8].field_0x20 = 0;
    *(undefined4 *)&this[8].field_0x24 = 0x80;
    *(undefined4 *)&this[8].field_0x28 = 0xffffffff;
    *(undefined4 *)&this[8].field_0x2c = 0;
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined4 *)&this[9].field_0x10 = 0;
    *(undefined8 *)&this[9].field_0x18 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined8 *)&this[10].field_0x8 = 0;
    *(undefined4 *)&this[10].field_0x10 = 0;
    *(undefined4 *)&this[10].field_0x14 = 0x80;
    *(undefined4 *)&this[10].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[10].field_0x1c = 0;
    *(undefined8 *)&this[10].field_0x28 = 0;
    *(undefined4 *)(this + 0xb) = 0;
    *(undefined8 *)&this[0xb].field_0x8 = 0;
    *(undefined8 *)&this[0xb].field_0x10 = 0;
    *(undefined8 *)&this[0xb].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execFindDistortionModelHandler @ 14d6f8300

void __cdecl
UCameraCalibrationSubsystem::execFindDistortionModelHandler
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
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
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execFindOrCreateDistortionModelHandler @ 14d6f83f0

void __cdecl
UCameraCalibrationSubsystem::execFindOrCreateDistortionModelHandler
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
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
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  *(undefined8 *)param_3 = 0;
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execGetCameraCalibrationStep @ 14d6f84f0

void __cdecl
UCameraCalibrationSubsystem::execGetCameraCalibrationStep
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TTuple<FName,TSubclassOf<UCameraCalibrationStep>_> *pTVar8;
  undefined1 *puVar9;
  UObject *pUVar10;
  FName local_res8;
  
  pUVar10 = (UObject *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  if (*(int *)&param_1[7].field_0x18 != *(int *)&param_1[8].field_0x1c) {
    puVar9 = *(undefined1 **)(param_1 + 9);
    if (*(undefined1 **)(param_1 + 9) == (undefined1 *)0x0) {
      puVar9 = &param_1[8].field_0x20;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_1[9].field_0x8 - 1U & FVar4.Number + uVar6)
                              * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&param_1[7].field_0x10;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar7 * 0x18) == FVar4) {
          pTVar8 = TSet<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TSubclassOf<UCameraCalibrationStep>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>,FDefaultSetAllocator>
                           *)&param_1[7].field_0x10,FVar4);
          if ((pTVar8 == (TTuple<FName,TSubclassOf<UCameraCalibrationStep>_> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar10 = *(UObject **)&pTVar8->field_0x8;
          if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14d6f8631;
          if (pUVar10 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar10);
          }
          break;
        }
        iVar7 = *(int *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
LAB_14d6f8631:
  *(UObject **)param_3 = pUVar10;
  return;
}

// execGetCameraCalibrationSteps @ 14d6f8650

void __cdecl
UCameraCalibrationSubsystem::execGetCameraCalibrationSteps
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMapBase<FName,TSubclassOf<UCameraCalibrationStep>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TSubclassOf<UCameraCalibrationStep>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraCalibrationStep>,0>_>
              *)&param_1[7].field_0x10,&local_18);
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

// execGetCameraImageCenterAlgo @ 14d6f86f0

void __cdecl
UCameraCalibrationSubsystem::execGetCameraImageCenterAlgo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_> *pTVar8;
  undefined1 *puVar9;
  UObject *pUVar10;
  FName local_res8;
  
  pUVar10 = (UObject *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  if (*(int *)&param_1[5].field_0x18 != *(int *)&param_1[6].field_0x1c) {
    puVar9 = *(undefined1 **)(param_1 + 7);
    if (*(undefined1 **)(param_1 + 7) == (undefined1 *)0x0) {
      puVar9 = &param_1[6].field_0x20;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_1[7].field_0x8 - 1U & FVar4.Number + uVar6)
                              * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&param_1[5].field_0x10;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar7 * 0x18) == FVar4) {
          pTVar8 = TSet<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>,FDefaultSetAllocator>
                           *)&param_1[5].field_0x10,FVar4);
          if ((pTVar8 == (TTuple<FName,TSubclassOf<UCameraImageCenterAlgo>_> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar10 = *(UObject **)&pTVar8->field_0x8;
          if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14d6f8831;
          if (pUVar10 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar10);
          }
          break;
        }
        iVar7 = *(int *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
LAB_14d6f8831:
  *(UObject **)param_3 = pUVar10;
  return;
}

// execGetCameraImageCenterAlgos @ 14d6f8850

void __cdecl
UCameraCalibrationSubsystem::execGetCameraImageCenterAlgos
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMapBase<FName,TSubclassOf<UCameraImageCenterAlgo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TSubclassOf<UCameraImageCenterAlgo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraImageCenterAlgo>,0>_>
              *)&param_1[5].field_0x10,&local_18);
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

// execGetCameraNodalOffsetAlgo @ 14d6f88f0

void __cdecl
UCameraCalibrationSubsystem::execGetCameraNodalOffsetAlgo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_> *pTVar8;
  undefined1 *puVar9;
  UObject *pUVar10;
  FName local_res8;
  
  pUVar10 = (UObject *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  if (*(int *)&param_1[3].field_0x18 != *(int *)&param_1[4].field_0x1c) {
    puVar9 = *(undefined1 **)(param_1 + 5);
    if (*(undefined1 **)(param_1 + 5) == (undefined1 *)0x0) {
      puVar9 = &param_1[4].field_0x20;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_1[5].field_0x8 - 1U & FVar4.Number + uVar6)
                              * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&param_1[3].field_0x10;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar7 * 0x18) == FVar4) {
          pTVar8 = TSet<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>,FDefaultSetAllocator>
                           *)&param_1[3].field_0x10,FVar4);
          if ((pTVar8 == (TTuple<FName,TSubclassOf<UCameraNodalOffsetAlgo>_> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar10 = *(UObject **)&pTVar8->field_0x8;
          if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14d6f8a31;
          if (pUVar10 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar10);
          }
          break;
        }
        iVar7 = *(int *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
LAB_14d6f8a31:
  *(UObject **)param_3 = pUVar10;
  return;
}

// execGetCameraNodalOffsetAlgos @ 14d6f8a50

void __cdecl
UCameraCalibrationSubsystem::execGetCameraNodalOffsetAlgos
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMapBase<FName,TSubclassOf<UCameraNodalOffsetAlgo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TSubclassOf<UCameraNodalOffsetAlgo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<UCameraNodalOffsetAlgo>,0>_>
              *)&param_1[3].field_0x10,&local_18);
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

// execGetDefaultLensFile @ 14d6f8af0

void __cdecl
UCameraCalibrationSubsystem::execGetDefaultLensFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
  return;
}

// execGetDistortionModelHandlers @ 14d6f8b50

void __cdecl
UCameraCalibrationSubsystem::execGetDistortionModelHandlers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  return;
}

// execGetLensFile @ 14d6f9200

void __cdecl
UCameraCalibrationSubsystem::execGetLensFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  uchar local_18 [8];
  undefined8 local_10;
  
  local_18[0] = '\0';
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar3 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*puVar3 == '\0') {
    uVar2 = *(undefined8 *)(puVar3 + 8);
  }
  else {
    uVar2 = *(undefined8 *)&param_1[1].field_0x8;
  }
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetOverlayMaterial @ 14d6f95a0

void __cdecl
UCameraCalibrationSubsystem::execGetOverlayMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInterface *pUVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetOverlayMaterial((UCameraCalibrationSubsystem *)param_1,pFVar3);
  *(UMaterialInterface **)param_3 = pUVar2;
  return;
}

// execGetOverlayMaterialNames @ 14d6f9650

void __cdecl
UCameraCalibrationSubsystem::execGetOverlayMaterialNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetOverlayMaterialNames((UCameraCalibrationSubsystem *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetRegisteredLensModel @ 14d6f96d0

void __cdecl
UCameraCalibrationSubsystem::execGetRegisteredLensModel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FString *this;
  TTuple<FName,TSubclassOf<ULensModel>_> *pTVar8;
  ForAnyElementType FVar9;
  undefined1 *puVar10;
  UObject *pUVar11;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  pUVar11 = (UObject *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res8;
  this = ::FName::ToString(&local_res18,&local_28);
  ::FString::ToLower(this,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar9.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,(wchar_t *)FVar9.Data);
  FVar4 = local_res10;
  uVar6 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  if (*(int *)&param_1[1].field_0x18 != *(int *)&param_1[2].field_0x1c) {
    puVar10 = *(undefined1 **)(param_1 + 3);
    if (*(undefined1 **)(param_1 + 3) == (undefined1 *)0x0) {
      puVar10 = &param_1[2].field_0x20;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&param_1[3].field_0x8 - 1U & FVar4.Number + uVar6) * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&param_1[1].field_0x10;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar7 * 0x18) == FVar4) {
          pTVar8 = TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TSubclassOf<ULensModel>_>,TDefaultMapHashableKeyFuncs<FName,TSubclassOf<ULensModel>,0>,FDefaultSetAllocator>
                           *)&param_1[1].field_0x10,local_res10);
          if ((pTVar8 == (TTuple<FName,TSubclassOf<ULensModel>_> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar11 = *(UObject **)&pTVar8->field_0x8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar11);
          }
          break;
        }
        iVar7 = *(int *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  *(UObject **)param_3 = pUVar11;
  return;
}

// execSetDefaultLensFile @ 14d6fa740

void __cdecl
UCameraCalibrationSubsystem::execSetDefaultLensFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[1].field_0x8 = pUVar2;
  return;
}

// execUnregisterDistortionModelHandler @ 14d6fa8b0

void __cdecl
UCameraCalibrationSubsystem::execUnregisterDistortionModelHandler
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

