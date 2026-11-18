// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 16

// StaticClass @ 14a0247c0

UClass * __cdecl AWN_BVC_VoxelVisualizer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_BVC_VoxelVisualizer",
               &Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.InnerSingleton,
               StaticRegisterNativesAWN_BVC_VoxelVisualizer,0x390,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_BVC_VoxelVisualizer>,
               InternalVTableHelperCtorCaller<AWN_BVC_VoxelVisualizer>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.InnerSingleton;
}

// AWN_BVC_VoxelVisualizer @ 14a02c880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_BVC_VoxelVisualizer * __thiscall
AWN_BVC_VoxelVisualizer::AWN_BVC_VoxelVisualizer
          (AWN_BVC_VoxelVisualizer *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  AActor::AActor((AActor *)this,param_1);
  this->VCGId = 0xffffffff;
  this->_padding_ = (longlong)&___7AWN_BVC_VoxelVisualizer__6B_;
  (this->ISMComp).field0_0x0.DebugPtr = (UInstancedStaticMeshComponent *)0x0;
  this->VoxelEdgeLength = 200.0;
  this->Radius = 6400.0;
  (this->VCIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VCIndices).ArrayNum = 0;
  (this->VCIndices).ArrayMax = 0;
  this->ExistVoxelNum = 0;
  this->NumInstances = 0;
  (this->VoxelByteFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VoxelByteFlags).ArrayNum = 0;
  (this->VoxelByteFlags).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->NonExistTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->NonExistTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->NonExistTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->NonExistTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->NonExistTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->NonExistTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->NonExistTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->NonExistTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->NonExistTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->NonExistTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->NonExistTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->NonExistTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->CenterPos).field0_0x0._s_0.X = 0.0;
  (this->CenterPos).field0_0x0._s_0.Y = 0.0;
  (this->CenterPos).field0_0x0._s_0.Z = 0.0;
  (this->VoxelMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  return this;
}

// AWN_BVC_VoxelVisualizer @ 14a02c980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_BVC_VoxelVisualizer * __thiscall
AWN_BVC_VoxelVisualizer::AWN_BVC_VoxelVisualizer
          (AWN_BVC_VoxelVisualizer *this,FObjectInitializer *param_1)

{
  FName FVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  __m128 _Var6;
  double dVar7;
  double dVar8;
  FName *pFVar9;
  UClass *pUVar10;
  UInstancedStaticMeshComponent *pUVar11;
  UStaticMesh *pUVar12;
  FName local_res8;
  FString local_38;
  double local_28;
  FGCObject local_20;
  UStaticMesh *local_10;
  
  AActor::AActor((AActor *)this,param_1);
  this->VCGId = 0xffffffff;
  this->_padding_ = (longlong)&___7AWN_BVC_VoxelVisualizer__6B_;
  (this->ISMComp).field0_0x0.DebugPtr = (UInstancedStaticMeshComponent *)0x0;
  this->VoxelEdgeLength = 200.0;
  this->Radius = 6400.0;
  (this->VCIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VCIndices).ArrayNum = 0;
  (this->VCIndices).ArrayMax = 0;
  this->ExistVoxelNum = 0;
  this->NumInstances = 0;
  (this->VoxelByteFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VoxelByteFlags).ArrayNum = 0;
  (this->VoxelByteFlags).ArrayMax = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->NonExistTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->NonExistTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->NonExistTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->NonExistTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  (this->NonExistTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->NonExistTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  dVar8 = _UNK_152044648;
  dVar7 = ___xmm_3ce40000000000003ce4000000000000;
  (this->NonExistTransform).Translation.ZW.m128d_f64[0] = (double)_Var6.m128_f32[2];
  (this->NonExistTransform).Translation.ZW.m128d_f64[1] = (double)_Var6.m128_f32[3];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->NonExistTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->NonExistTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->NonExistTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->NonExistTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  (this->CenterPos).field0_0x0._s_0.X = 0.0;
  (this->CenterPos).field0_0x0._s_0.Y = 0.0;
  (this->CenterPos).field0_0x0._s_0.Z = 0.0;
  (this->VoxelMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->NonExistTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->NonExistTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->NonExistTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->NonExistTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  dVar5 = __real_3ce4000000000000;
  (this->NonExistTransform).Scale3D.XY.m128d_f64[0] = dVar7;
  (this->NonExistTransform).Scale3D.XY.m128d_f64[1] = dVar8;
  (this->NonExistTransform).Scale3D.ZW.m128d_f64[0] = dVar5;
  (this->NonExistTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  dVar7 = _UNK_152044658;
  dVar5 = __real_416312d000000000;
  local_28 = __real_416312d000000000;
  (this->NonExistTransform).Translation.XY.m128d_f64[0] = ___xmm_416312d000000000416312d000000000;
  (this->NonExistTransform).Translation.XY.m128d_f64[1] = dVar7;
  (this->NonExistTransform).Translation.ZW.m128d_f64[0] = dVar5;
  (this->NonExistTransform).Translation.ZW.m128d_f64[1] = 0.0;
  pFVar9 = ::FName::FName(&local_res8,"ISMComp");
  FVar1 = *pFVar9;
  pUVar10 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  pUVar11 = (UInstancedStaticMeshComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar10,pUVar10,true,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UInstancedStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->ISMComp).field0_0x0.DebugPtr = pUVar11;
  (**(code **)(pUVar11->_padding_ + 0x5f8))(pUVar11,2);
  pUVar11 = (this->ISMComp).field0_0x0.DebugPtr;
  (**(code **)(pUVar11->_padding_ + 0x918))(pUVar11,0);
  pUVar11 = (this->ISMComp).field0_0x0.DebugPtr;
  (**(code **)(pUVar11->_padding_ + 0x780))(pUVar11,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 = (this->ISMComp).field0_0x0.DebugPtr, pUVar11 != (UInstancedStaticMeshComponent *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  this->_padding_ = (longlong)(this->ISMComp).field0_0x0;
  local_20._padding_ = (longlong)&___7FGCObject__6B_;
  local_20.bCanMakeInitialReferences = false;
  local_20.bReferenceAdded = false;
  FGCObject::RegisterGCObject(&local_20);
  local_10 = (UStaticMesh *)0x0;
  local_20._padding_ = (longlong)&___7__FObjectFinder_VUStaticMesh___ConstructorHelpers__6B_;
  ConstructorHelpers::CheckIfIsInConstructor
            (L"/Script/Engine.StaticMesh\'/Engine/BasicShapes/Cube.Cube\'");
  ::FString::FString(&local_38,L"/Script/Engine.StaticMesh\'/Engine/BasicShapes/Cube.Cube\'");
  ConstructorHelpers::StripObjectClass(&local_38,true);
  pUVar12 = ConstructorHelpersInternal::FindOrLoadObject<UStaticMesh>(&local_38,0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar12 == (UStaticMesh *)0x0)) {
    local_10 = pUVar12;
    if (pUVar12 == (UStaticMesh *)0x0) {
      ConstructorHelpers::FailedToFind
                (L"/Script/Engine.StaticMesh\'/Engine/BasicShapes/Cube.Cube\'");
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
    local_10 = pUVar12;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_10 != (UStaticMesh *)0x0) {
    pUVar11 = (this->ISMComp).field0_0x0.DebugPtr;
    (**(code **)(pUVar11->_padding_ + 0xb28))(pUVar11,local_10);
  }
  ((this->ISMComp).field0_0x0.DebugPtr)->NumCustomDataFloats = 1;
  local_20._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(&local_20);
  return this;
}

// ~AWN_BVC_VoxelVisualizer @ 14a02e8f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_BVC_VoxelVisualizer::~AWN_BVC_VoxelVisualizer(AWN_BVC_VoxelVisualizer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AWN_BVC_VoxelVisualizer__6B_;
  pFVar1 = (this->VoxelByteFlags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VCIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 14a031ad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall AWN_BVC_VoxelVisualizer::BeginDestroy(AWN_BVC_VoxelVisualizer *this)

{
  int iVar1;
  uint uVar2;
  UClass *pUVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((this->_padding_ & 0x30) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock);
    pUVar3 = GetParentNativeClass((UClass *)this->_padding_);
    piVar5 = (int *)0x0;
    if (pUVar3 != (UClass *)0x0) {
      piVar5 = (int *)pUVar3->_padding_;
    }
    uVar2 = ::GetTypeHash((FNameEntryId)(uint)piVar5);
    if (CSVActorClassNameToCountMap._8_4_ != CSVActorClassNameToCountMap._52_4_) {
      lVar4 = 0x154c1e3c8;
      if (CSVActorClassNameToCountMap._64_8_ != 0) {
        lVar4 = CSVActorClassNameToCountMap._64_8_;
      }
      iVar1 = *(int *)(lVar4 + (ulonglong)
                               (CSVActorClassNameToCountMap._72_4_ - 1 &
                               (int)((ulonglong)piVar5 >> 0x20) + uVar2) * 4);
      while (iVar1 != -1) {
        lVar4 = CSVActorClassNameToCountMap._0_8_ + (longlong)iVar1 * 0x14;
        if (*(int **)(CSVActorClassNameToCountMap._0_8_ + (longlong)iVar1 * 0x14) == piVar5) {
          piVar5 = (int *)(lVar4 + 8);
          if (lVar4 == 0) {
            piVar5 = (int *)0x0;
          }
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar5 + -1;
          }
          break;
        }
        iVar1 = *(int *)(lVar4 + 0xc);
      }
    }
    CSVActorTotalCount = CSVActorTotalCount + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// Destroyed @ 14a032f20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_BVC_VoxelVisualizer::Destroyed(AWN_BVC_VoxelVisualizer *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UFunction *pUVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  AWN_BVC_VoxelVisualizer *pAStackX_8;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_38;
  FSharedReferencer<1> FStack_30;
  undefined8 uStack_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> TStack_18;
  
  AActor::RouteEndPlay((AActor *)this,Destroyed);
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveDestroyed);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,0);
  pTStack_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 6) != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnDestroyed");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate(&TStack_18,(UObject *)this,FVar2);
    FStack_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    pTStack_38 = pTVar5->Object;
    if (FStack_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&FStack_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_18.SharedReferenceCount.ReferenceController);
  }
  if (pTStack_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (pTStack_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pAStackX_8 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (pTStack_38,&pAStackX_8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14a0344b0

UClass * __cdecl AWN_BVC_VoxelVisualizer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_BVC_VoxelVisualizer",
               &Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.InnerSingleton,
               StaticRegisterNativesAWN_BVC_VoxelVisualizer,0x390,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_BVC_VoxelVisualizer>,
               InternalVTableHelperCtorCaller<AWN_BVC_VoxelVisualizer>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.InnerSingleton;
}

// GetStaticMesh @ 14a035310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UStaticMesh * __thiscall AWN_BVC_VoxelVisualizer::GetStaticMesh(AWN_BVC_VoxelVisualizer *this)

{
  UStaticMesh *pUVar1;
  
  pUVar1 = (UStaticMesh *)((this->ISMComp).field0_0x0.DebugPtr)->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return pUVar1;
}

// Initialize @ 14a035760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWN_BVC_VoxelVisualizer::Initialize
          (AWN_BVC_VoxelVisualizer *this,double param_1,float param_2,double param_3)

{
  UInstancedStaticMeshComponent *pUVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UClass *pUVar5;
  UMaterialInterface *pUVar6;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar7;
  FText *pFVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FName local_res8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  dVar3 = __real_4000000000000000;
  this->Radius = param_1;
  dVar4 = __real_bfe0000000000000;
  dVar2 = param_3 * __real_3fe0000000000000;
  this->VoxelEdgeLength = param_3;
  iVar9 = (int)((longlong)ROUND(dVar4 - (param_1 - dVar2) * (dVar3 / param_3)) >> 1) * -2 + 1;
  pUVar1 = (this->ISMComp).field0_0x0.DebugPtr;
  this->NumInstances = (ulonglong)(uint)(iVar9 * iVar9 * iVar9);
  (**(code **)(pUVar1->_padding_ + 0xc38))();
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Init
            (&local_48,&this->NonExistTransform,(int)this->NumInstances);
  pUVar1 = (this->ISMComp).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 3000))(pUVar1,local_28,&local_48,0,1,1);
  if (local_28[0].DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28[0].DataPtr);
  }
  local_38.DataPtr = (wchar_t *)0x0;
  local_28[0].DataPtr = L"/WN_WorldUtils/M_BVC_VoxelVisualize.M_BVC_VoxelVisualize";
  local_38._8_8_ = (ulonglong)(uint)local_38._12_4_ << 0x20;
  local_28[0].Size = 0x38;
  pUVar5 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar6 = (UMaterialInterface *)
           StaticLoadObject(pUVar5,(UObject *)0x0,local_28,&local_38,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar6 == (UMaterialInterface *)0x0) {
    pwVar11 = L"M_BVC_VoxelVisualize 이 존재하는지 확인하세요.";
    pwVar10 = L"CheckMaterial";
LAB_14a035976:
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"WN_BVC_VoxelVisualizer",pwVar10,pwVar11);
    FMessageDialog::Open(Ok,pFVar8);
    if (local_28[0].DataPtr != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_28[0].DataPtr + 0x10))();
    }
  }
  else {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this_00 = UMaterialInstanceDynamic::Create(pUVar6,(UObject *)0x0,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (this_00 == (UMaterialInstanceDynamic *)0x0)) {
      (this->VoxelMID).field0_0x0.DebugPtr = this_00;
      if (this_00 == (UMaterialInstanceDynamic *)0x0) {
        pwVar11 = L"M_BVC_VoxelVisualize의 MaterialInstanceDynamic 생성 실패";
        pwVar10 = L"MIDFails";
        goto LAB_14a035976;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)this_00);
      (this->VoxelMID).field0_0x0.DebugPtr = this_00;
    }
    pFVar7 = ::FName::FName(&local_res8,"VoxelOpacity");
    UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar7,param_2);
    pUVar1 = (this->ISMComp).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x6b8))(pUVar1,0,(this->VoxelMID).field0_0x0.DebugPtr);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)(this->ISMComp).field0_0x0.DebugPtr);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// IsEmpty @ 14a0364e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall AWN_BVC_VoxelVisualizer::IsEmpty(AWN_BVC_VoxelVisualizer *this)

{
  return (((this->ISMComp).field0_0x0.DebugPtr)->PerInstanceSMData).ArrayNum == 0;
}

// SetCenterPos @ 14a039da0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AWN_BVC_VoxelVisualizer::SetCenterPos(AWN_BVC_VoxelVisualizer *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->CenterPos).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->CenterPos).field0_0x0._s_0.Y = dVar1;
  (this->CenterPos).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// StaticRegisterNativesAWN_BVC_VoxelVisualizer @ 14a03a700

void __cdecl AWN_BVC_VoxelVisualizer::StaticRegisterNativesAWN_BVC_VoxelVisualizer(void)

{
  return;
}

// UpdateInstances @ 14a03acd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWN_BVC_VoxelVisualizer::UpdateInstances
          (AWN_BVC_VoxelVisualizer *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  FScriptContainerElement *pFVar4;
  UInstancedStaticMeshComponent *pUVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  ulonglong in_stack_ffffffffffffff48;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  double local_88;
  
  dVar14 = __real_3f847ae147ae147b;
  uVar19 = (ulonglong)param_1->ArrayNum;
  uVar20 = this->ExistVoxelNum;
  if (this->ExistVoxelNum <= uVar19) {
    uVar20 = uVar19;
  }
  local_a8.Data = (FScriptContainerElement *)0x0;
  iVar17 = 0;
  uVar22 = 0;
  local_a0 = 0;
  if (uVar20 != 0) {
    do {
      dVar10 = (this->NonExistTransform).Rotation.XY.m128d_f64[0];
      dVar11 = (this->NonExistTransform).Rotation.XY.m128d_f64[1];
      dVar12 = (this->NonExistTransform).Rotation.ZW.m128d_f64[0];
      dVar13 = (this->NonExistTransform).Rotation.ZW.m128d_f64[1];
      uVar30 = *(undefined4 *)(this->NonExistTransform).Translation.XY.m128d_f64;
      uVar31 = *(undefined4 *)((longlong)(this->NonExistTransform).Translation.XY.m128d_f64 + 4);
      uVar32 = *(undefined4 *)((this->NonExistTransform).Translation.XY.m128d_f64 + 1);
      uVar33 = *(undefined4 *)((longlong)(this->NonExistTransform).Translation.XY.m128d_f64 + 0xc);
      uVar26 = *(undefined4 *)(this->NonExistTransform).Translation.ZW.m128d_f64;
      uVar27 = *(undefined4 *)((longlong)(this->NonExistTransform).Translation.ZW.m128d_f64 + 4);
      uVar28 = *(undefined4 *)((this->NonExistTransform).Translation.ZW.m128d_f64 + 1);
      uVar29 = *(undefined4 *)((longlong)(this->NonExistTransform).Translation.ZW.m128d_f64 + 0xc);
      dVar23 = (this->NonExistTransform).Scale3D.XY.m128d_f64[1];
      auVar3 = *(undefined1 (*) [16])(this->NonExistTransform).Scale3D.ZW.m128d_f64;
      uVar24 = auVar3._8_4_;
      uVar25 = auVar3._12_4_;
      dVar8 = (this->NonExistTransform).Scale3D.XY.m128d_f64[0];
      dVar9 = auVar3._0_8_;
      if (uVar22 < uVar19) {
        uVar21 = (uint)uVar22;
        uVar16 = 0;
        if ((int)uVar21 < param_1->ArrayNum) {
          uVar16 = ~uVar21 >> 0x1f;
        }
        if (uVar16 == 0) {
          in_stack_ffffffffffffff48 = (ulonglong)(int)uVar21;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar17 = (int)local_a0;
        }
        dVar23 = this->VoxelEdgeLength * dVar14;
        pFVar4 = (param_1->AllocatorInstance).Data;
        uVar24 = 0;
        uVar25 = 0;
        local_98._8_4_ = SUB84(dVar23,0);
        local_98._0_8_ = dVar23;
        local_98._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        pFVar1 = pFVar4 + (longlong)(int)uVar21 * 0x18;
        uVar30 = *(undefined4 *)pFVar1;
        uVar31 = *(undefined4 *)(pFVar1 + 4);
        uVar32 = *(undefined4 *)(pFVar1 + 8);
        uVar33 = *(undefined4 *)(pFVar1 + 0xc);
        uVar2 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar21 * 0x18 + 0x10);
        uVar26 = (undefined4)uVar2;
        uVar27 = (undefined4)((ulonglong)uVar2 >> 0x20);
        uVar28 = 0;
        uVar29 = 0;
        dVar8 = dVar23;
        dVar9 = dVar23;
        local_88 = dVar23;
      }
      if (iVar17 == local_a0._4_4_) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&local_a8,(int *)((longlong)&local_a0 + 4));
      }
      lVar18 = (longlong)iVar17;
      iVar17 = iVar17 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,iVar17);
      uVar22 = uVar22 + 1;
      lVar18 = lVar18 * 0x60;
      *(double *)(local_a8.Data + lVar18) = dVar10;
      *(double *)(local_a8.Data + lVar18 + 8) = dVar11;
      *(double *)(local_a8.Data + lVar18 + 0x10) = dVar12;
      *(double *)(local_a8.Data + lVar18 + 0x10 + 8) = dVar13;
      pFVar1 = local_a8.Data + lVar18 + 0x20;
      *(undefined4 *)pFVar1 = uVar30;
      *(undefined4 *)(pFVar1 + 4) = uVar31;
      *(undefined4 *)(pFVar1 + 8) = uVar32;
      *(undefined4 *)(pFVar1 + 0xc) = uVar33;
      pFVar1 = local_a8.Data + lVar18 + 0x30;
      *(undefined4 *)pFVar1 = uVar26;
      *(undefined4 *)(pFVar1 + 4) = uVar27;
      *(undefined4 *)(pFVar1 + 8) = uVar28;
      *(undefined4 *)(pFVar1 + 0xc) = uVar29;
      auVar3._8_4_ = SUB84(dVar23,0);
      auVar3._0_8_ = dVar8;
      auVar3._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      *(undefined1 (*) [16])(local_a8.Data + lVar18 + 0x40) = auVar3;
      auVar7._8_4_ = uVar24;
      auVar7._0_8_ = dVar9;
      auVar7._12_4_ = uVar25;
      *(undefined1 (*) [16])(local_a8.Data + lVar18 + 0x50) = auVar7;
    } while (uVar22 < uVar20);
  }
  pUVar5 = (this->ISMComp).field0_0x0.DebugPtr;
  this->ExistVoxelNum = uVar19;
  (**(code **)(pUVar5->_padding_ + 0xc08))
            (pUVar5,0,&local_a8,1,in_stack_ffffffffffffff48 & 0xffffffffffffff00,1);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)(this->ISMComp).field0_0x0.DebugPtr);
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// UpdateVisualizeRadius @ 14a03b0a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWN_BVC_VoxelVisualizer::UpdateVisualizeRadius
          (AWN_BVC_VoxelVisualizer *this,double param_1,double param_2)

{
  UInstancedStaticMeshComponent *pUVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_28;
  void *local_18 [2];
  
  dVar2 = __real_4000000000000000;
  dVar4 = param_2 * __real_3fe0000000000000;
  this->Radius = param_1;
  iVar3 = (int)((longlong)ROUND(__real_bfe0000000000000 - (param_1 - dVar4) * (dVar2 / param_2)) >>
               1) * -2 + 1;
  pUVar1 = (this->ISMComp).field0_0x0.DebugPtr;
  this->NumInstances = (ulonglong)(uint)(iVar3 * iVar3 * iVar3);
  (**(code **)(pUVar1->_padding_ + 0xc38))();
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Init
            (&local_28,&this->NonExistTransform,(int)this->NumInstances);
  pUVar1 = (this->ISMComp).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 3000))(pUVar1,local_18,&local_28,0,1,1);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)(this->ISMComp).field0_0x0.DebugPtr);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// UpdateVoxelColor @ 14a03b390

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AWN_BVC_VoxelVisualizer::UpdateVoxelColor(AWN_BVC_VoxelVisualizer *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  UMaterialInstanceDynamic *this_00;
  FName FVar2;
  double dVar3;
  FText *pFVar4;
  FName *pFVar5;
  FLinearColor *pFVar6;
  FName local_res8;
  FLinearColor_u_0 local_48;
  FLinearColor local_38;
  TVector4<double>_u_0 local_28;
  
  this_00 = (this->VoxelMID).field0_0x0.DebugPtr;
  if (this_00 == (UMaterialInstanceDynamic *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_48._s_0,L"WN_BVC_VoxelVisualizer",L"MIDNonExist",
                        L"Voxel MID가 존재하지 않습니다.");
    FMessageDialog::Open(Ok,pFVar4);
    if ((longlong *)local_48._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_48._0_8_ + 0x10))();
      return;
    }
  }
  else {
    dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    local_28._8_4_ = SUB84(dVar3,0);
    local_28._0_8_ = (double)(float)*(undefined8 *)&param_1->field0_0x0;
    local_28._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    dVar3 = (double)(float)((ulonglong)uVar1 >> 0x20);
    local_28._24_4_ = SUB84(dVar3,0);
    local_28._16_8_ = (double)(float)uVar1;
    local_28._28_4_ = (int)((ulonglong)dVar3 >> 0x20);
    pFVar5 = ::FName::FName(&local_res8,"VoxelColor");
    FVar2 = *pFVar5;
    pFVar6 = FLinearColor::FLinearColor(&local_38,(TVector4<double> *)&local_28._s_0);
    local_48._0_8_ = *(undefined8 *)&pFVar6->field0_0x0;
    local_48._8_8_ = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
    UMaterialInstanceDynamic::SetVectorParameterValue(this_00,FVar2,(FLinearColor *)&local_48._s_0);
  }
  return;
}

// UpdateVoxelOpacity @ 14a03b450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AWN_BVC_VoxelVisualizer::UpdateVoxelOpacity(AWN_BVC_VoxelVisualizer *this,float param_1)

{
  UMaterialInstanceDynamic *this_00;
  FText *pFVar1;
  FName *pFVar2;
  FName local_res8 [4];
  FText local_28 [2];
  
  this_00 = (this->VoxelMID).field0_0x0.DebugPtr;
  if (this_00 == (UMaterialInstanceDynamic *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (local_28,L"WN_BVC_VoxelVisualizer",L"MIDNonExist",
                        L"Voxel MID가 존재하지 않습니다.");
    FMessageDialog::Open(Ok,pFVar1);
    if (local_28[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28[0].TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    pFVar2 = ::FName::FName(local_res8,"VoxelOpacity");
    UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar2,param_1);
  }
  return;
}

