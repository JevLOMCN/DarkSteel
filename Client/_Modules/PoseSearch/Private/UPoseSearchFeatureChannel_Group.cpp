// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 8

// StaticClass @ 14a8d60a0

UClass * __cdecl UPoseSearchFeatureChannel_Group::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Group",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Group,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Group>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Group>,local_res8,
               UPoseSearchFeatureChannel_GroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.InnerSingleton;
}

// UPoseSearchFeatureChannel_Group @ 14a8e19d0

UPoseSearchFeatureChannel_Group * __thiscall
UPoseSearchFeatureChannel_Group::UPoseSearchFeatureChannel_Group
          (UPoseSearchFeatureChannel_Group *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)UE::PoseSearch::DefaultRole;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  this->_padding_ = -1;
  (this->SubChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubChannels).ArrayNum = 0;
  (this->SubChannels).ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  return this;
}

// UPoseSearchFeatureChannel_Group @ 14a8e1a40

UPoseSearchFeatureChannel_Group * __thiscall
UPoseSearchFeatureChannel_Group::UPoseSearchFeatureChannel_Group
          (UPoseSearchFeatureChannel_Group *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)UE::PoseSearch::DefaultRole;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  this->_padding_ = -1;
  (this->SubChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubChannels).ArrayNum = 0;
  (this->SubChannels).ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  return this;
}

// ~UPoseSearchFeatureChannel_Group @ 14a8e2da0

void __thiscall
UPoseSearchFeatureChannel_Group::~UPoseSearchFeatureChannel_Group
          (UPoseSearchFeatureChannel_Group *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  pFVar1 = (this->SubChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a8fc3f0

UClass * __cdecl UPoseSearchFeatureChannel_Group::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Group",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Group,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Group>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Group>,local_res8,
               UPoseSearchFeatureChannel_GroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.InnerSingleton;
}

// GetSubChannels @ 14a8fe5a0

TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> * __thiscall
UPoseSearchFeatureChannel_Group::GetSubChannels
          (UPoseSearchFeatureChannel_Group *this,
          TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> *pTVar4;
  
  iVar1 = (this->SubChannels).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UPoseSearchFeatureChannel> *)(this->SubChannels).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetSubChannels @ 14a8fe610

TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> * __thiscall
UPoseSearchFeatureChannel_Group::GetSubChannels
          (UPoseSearchFeatureChannel_Group *this,
          TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *pTVar4;
  
  iVar1 = (this->SubChannels).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UPoseSearchFeatureChannel> *)(this->SubChannels).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_Group @ 14a908d90

void __cdecl
UPoseSearchFeatureChannel_Group::StaticRegisterNativesUPoseSearchFeatureChannel_Group(void)

{
  return;
}

