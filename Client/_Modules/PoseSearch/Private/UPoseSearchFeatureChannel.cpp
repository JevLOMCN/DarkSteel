// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 16

// StaticClass @ 14a8d56c0

UClass * __cdecl UPoseSearchFeatureChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel.InnerSingleton;
}

// UPoseSearchFeatureChannel @ 14a8e14e0

UPoseSearchFeatureChannel * __thiscall
UPoseSearchFeatureChannel::UPoseSearchFeatureChannel
          (UPoseSearchFeatureChannel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ChannelDataOffset = -1;
  this->ChannelCardinality = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  return this;
}

// UPoseSearchFeatureChannel @ 14a8e1530

UPoseSearchFeatureChannel * __thiscall
UPoseSearchFeatureChannel::UPoseSearchFeatureChannel
          (UPoseSearchFeatureChannel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ChannelDataOffset = -1;
  this->ChannelCardinality = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  return this;
}

// ~UPoseSearchFeatureChannel @ 14a8e2ce0

void __thiscall
UPoseSearchFeatureChannel::~UPoseSearchFeatureChannel(UPoseSearchFeatureChannel *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddDependentChannels @ 14a8e6260

void __thiscall
UPoseSearchFeatureChannel::AddDependentChannels
          (UPoseSearchFeatureChannel *this,UPoseSearchSchema *param_1)

{
  return;
}

// BuildQuery @ 14a8e7a30

void __thiscall
UPoseSearchFeatureChannel::BuildQuery(UPoseSearchFeatureChannel *this,FSearchContext *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchFeatureChannel.h"
             ,0x81,L"Pure virtual not implemented (%s)");
  return;
}

// DebugDraw @ 14a8f06d0

void __thiscall
UPoseSearchFeatureChannel::DebugDraw
          (UPoseSearchFeatureChannel *this,FDebugDrawParams *param_1,
          TArrayView<float_const_,int> *param_2)

{
  return;
}

// Finalize @ 14a8f6770

bool __thiscall
UPoseSearchFeatureChannel::Finalize(UPoseSearchFeatureChannel *this,UPoseSearchSchema *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchFeatureChannel.h"
             ,0x7e,L"Pure virtual not implemented (%s)");
  return false;
}

// GetPermutationTimeOffsets @ 14a8fb280

void __cdecl
UPoseSearchFeatureChannel::GetPermutationTimeOffsets
          (EPermutationTimeType param_1,float param_2,float *param_3,float *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == UseSampleTime) {
    *param_3 = 0.0;
    *param_4 = 0.0;
    return;
  }
  if (param_1 == UsePermutationTime) {
    *param_3 = param_2;
    *param_4 = param_2;
    return;
  }
  if (param_1 == UseSampleToPermutationTime) {
    *param_3 = param_2;
    *param_4 = 0.0;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                     ,0xad,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_3 = 0.0;
  *param_4 = 0.0;
  return;
}

// GetPermutationTimeType @ 14a8fb330

EPermutationTimeType __thiscall
UPoseSearchFeatureChannel::GetPermutationTimeType(UPoseSearchFeatureChannel *this)

{
  return UseSampleTime;
}

// GetPrivateStaticClass @ 14a8fc100

UClass * __cdecl UPoseSearchFeatureChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel.InnerSingleton;
}

// GetSkeleton @ 14a8fe4a0

USkeleton * __thiscall
UPoseSearchFeatureChannel::GetSkeleton
          (UPoseSearchFeatureChannel *this,bool *param_1,IPropertyHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  USkeleton *pUVar3;
  
  *param_1 = false;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                     ,0x129,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (USkeleton *)(*pcVar1)();
    return pUVar3;
  }
  return (USkeleton *)0x0;
}

// GetSubChannels @ 14a8fe560

TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> * __thiscall
UPoseSearchFeatureChannel::GetSubChannels
          (UPoseSearchFeatureChannel *this,
          TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSubChannels @ 14a8fe580

TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> * __thiscall
UPoseSearchFeatureChannel::GetSubChannels
          (UPoseSearchFeatureChannel *this,
          TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPoseSearchFeatureChannel @ 14a908d50

void __cdecl UPoseSearchFeatureChannel::StaticRegisterNativesUPoseSearchFeatureChannel(void)

{
  return;
}

// _getUObject @ 14a90b540

UObject * __thiscall UPoseSearchFeatureChannel::_getUObject(UPoseSearchFeatureChannel *this)

{
  return (UObject *)&this[-1]._padding_;
}

