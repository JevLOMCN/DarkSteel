// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ARUtilities
// Functions: 8

// StaticClass @ 14cfc6520

UClass * __cdecl UARLiveLinkRetargetAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"ARLiveLinkRetargetAsset",
               &Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.InnerSingleton,
               StaticRegisterNativesUARLiveLinkRetargetAsset,0xb0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UARLiveLinkRetargetAsset>,
               InternalVTableHelperCtorCaller<UARLiveLinkRetargetAsset>,local_res8,
               ULiveLinkRetargetAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.InnerSingleton;
}

// UARLiveLinkRetargetAsset @ 14cfc7cf0

UARLiveLinkRetargetAsset * __thiscall
UARLiveLinkRetargetAsset::UARLiveLinkRetargetAsset
          (UARLiveLinkRetargetAsset *this,FVTableHelper *param_1)

{
  ULiveLinkRetargetAsset::ULiveLinkRetargetAsset((ULiveLinkRetargetAsset *)this,param_1);
  this->SourceType = None;
  this->_padding_ = (longlong)&___7UARLiveLinkRetargetAsset__6B_;
  *(undefined8 *)&(this->BoneMap).field_0x8 = 0;
  *(undefined8 *)&this->BoneMap = 0;
  *(undefined8 *)&(this->BoneMap).field_0x20 = 0;
  *(undefined4 *)&(this->BoneMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoneMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneMap).field_0x34 = 0;
  *(undefined8 *)&(this->BoneMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoneMap).field_0x48 = 0;
  (this->ARKitPoseTrackingConfig).HumanForward.field0_0x0._s_0.X = -1.0;
  (this->ARKitPoseTrackingConfig).MeshForward.field0_0x0._s_0.Y = 1.0;
  (this->ARKitPoseTrackingConfig).HumanForward.field0_0x0._s_0.Y = 0.0;
  (this->ARKitPoseTrackingConfig).HumanForward.field0_0x0._s_0.Z = 0.0;
  (this->ARKitPoseTrackingConfig).MeshForward.field0_0x0._s_0.X = 0.0;
  (this->ARKitPoseTrackingConfig).MeshForward.field0_0x0._s_0.Z = 0.0;
  return this;
}

// UARLiveLinkRetargetAsset @ 14cfc7d90

UARLiveLinkRetargetAsset * __thiscall
UARLiveLinkRetargetAsset::UARLiveLinkRetargetAsset
          (UARLiveLinkRetargetAsset *this,FObjectInitializer *param_1)

{
  ULiveLinkRetargetAsset::ULiveLinkRetargetAsset((ULiveLinkRetargetAsset *)this,param_1);
  this->SourceType = None;
  this->_padding_ = (longlong)&___7UARLiveLinkRetargetAsset__6B_;
  *(undefined8 *)&(this->BoneMap).field_0x8 = 0;
  *(undefined8 *)&this->BoneMap = 0;
  *(undefined8 *)&(this->BoneMap).field_0x20 = 0;
  *(undefined4 *)&(this->BoneMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoneMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneMap).field_0x34 = 0;
  *(undefined8 *)&(this->BoneMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoneMap).field_0x48 = 0;
  (this->ARKitPoseTrackingConfig).HumanForward.field0_0x0._s_0.X = -1.0;
  (this->ARKitPoseTrackingConfig).MeshForward.field0_0x0._s_0.Y = 1.0;
  (this->ARKitPoseTrackingConfig).HumanForward.field0_0x0._s_0.Y = 0.0;
  (this->ARKitPoseTrackingConfig).HumanForward.field0_0x0._s_0.Z = 0.0;
  (this->ARKitPoseTrackingConfig).MeshForward.field0_0x0._s_0.X = 0.0;
  (this->ARKitPoseTrackingConfig).MeshForward.field0_0x0._s_0.Z = 0.0;
  return this;
}

// ~UARLiveLinkRetargetAsset @ 14cfc8100

void __thiscall UARLiveLinkRetargetAsset::~UARLiveLinkRetargetAsset(UARLiveLinkRetargetAsset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UARLiveLinkRetargetAsset__6B_;
  *(undefined4 *)&(this->BoneMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneMap);
  ULiveLinkRetargetAsset::~ULiveLinkRetargetAsset((ULiveLinkRetargetAsset *)this);
  return;
}

// BuildPoseFromAnimationData @ 14cfc8640

void __thiscall
UARLiveLinkRetargetAsset::BuildPoseFromAnimationData
          (UARLiveLinkRetargetAsset *this,float param_1,FLiveLinkSkeletonStaticData *param_2,
          FLiveLinkAnimationFrameData *param_3,FCompactPose *param_4)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*(int *)(lVar3 + 0x9d4c) <
          `public:_static_class_FName_const&___ptr64___cdecl_IARLiveLinkRetargetingLogic::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_IARLiveLinkRetargetingLogic::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_FName_const&___ptr64___cdecl_IARLiveLinkRetargetingLogic::GetModularFeatureName(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_IARLiveLinkRetargetingLogic::GetModularFeatureName(void)'
                          ::__l2::FeatureName,L"ARLiveLinkRetargetingLogic");
          _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_IARLiveLinkRetargetingLogic::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      ::FeatureName =
           &`public:_static_class_FName_const&___ptr64___cdecl_IARLiveLinkRetargetingLogic::GetModularFeatureName(void)'
            ::__l2::FeatureName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,*::FeatureName);
  if (0 < iVar1) {
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,*::FeatureName,0);
    puVar4 = (undefined8 *)(lVar3 + -8);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    (**(code **)*puVar4)(puVar4,this,param_1,param_2,param_3,param_4);
  }
  return;
}

// GetPrivateStaticClass @ 14cfc91c0

UClass * __cdecl UARLiveLinkRetargetAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"ARLiveLinkRetargetAsset",
               &Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.InnerSingleton,
               StaticRegisterNativesUARLiveLinkRetargetAsset,0xb0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UARLiveLinkRetargetAsset>,
               InternalVTableHelperCtorCaller<UARLiveLinkRetargetAsset>,local_res8,
               ULiveLinkRetargetAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.InnerSingleton;
}

// GetRemappedBoneName @ 14cfc9400

FName __thiscall
UARLiveLinkRetargetAsset::GetRemappedBoneName(UARLiveLinkRetargetAsset *this,FName param_1)

{
  FName *pFVar1;
  FName in_R8;
  
  pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->BoneMap,in_R8);
  if (pFVar1 != (FName *)0x0) {
    *(FName *)param_1 = *pFVar1;
    return param_1;
  }
  *(FName *)param_1 = in_R8;
  return param_1;
}

// StaticRegisterNativesUARLiveLinkRetargetAsset @ 14cfc9a30

void __cdecl UARLiveLinkRetargetAsset::StaticRegisterNativesUARLiveLinkRetargetAsset(void)

{
  return;
}

