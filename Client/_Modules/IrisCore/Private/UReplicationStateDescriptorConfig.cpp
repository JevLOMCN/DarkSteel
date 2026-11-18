// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 8

// StaticClass @ 1441f3810

UClass * __cdecl UReplicationStateDescriptorConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationStateDescriptorConfig",
               &Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.InnerSingleton,
               StaticRegisterNativesUReplicationStateDescriptorConfig,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationStateDescriptorConfig>,
               InternalVTableHelperCtorCaller<UReplicationStateDescriptorConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.InnerSingleton;
}

// UReplicationStateDescriptorConfig @ 1441f93f0

UReplicationStateDescriptorConfig * __thiscall
UReplicationStateDescriptorConfig::UReplicationStateDescriptorConfig
          (UReplicationStateDescriptorConfig *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UReplicationStateDescriptorConfig__6B_;
  (this->SupportsStructNetSerializerList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportsStructNetSerializerList).ArrayNum = 0;
  (this->SupportsStructNetSerializerList).ArrayMax = 0;
  (this->EnsureFullyPushModelClassNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnsureFullyPushModelClassNames).ArrayNum = 0;
  (this->EnsureFullyPushModelClassNames).ArrayMax = 0;
  this->bEnsureAllClassesAreFullyPushModel = false;
  return this;
}

// UReplicationStateDescriptorConfig @ 1441f9430

UReplicationStateDescriptorConfig * __thiscall
UReplicationStateDescriptorConfig::UReplicationStateDescriptorConfig
          (UReplicationStateDescriptorConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UReplicationStateDescriptorConfig__6B_;
  (this->SupportsStructNetSerializerList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportsStructNetSerializerList).ArrayNum = 0;
  (this->SupportsStructNetSerializerList).ArrayMax = 0;
  (this->EnsureFullyPushModelClassNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnsureFullyPushModelClassNames).ArrayNum = 0;
  (this->EnsureFullyPushModelClassNames).ArrayMax = 0;
  this->bEnsureAllClassesAreFullyPushModel = false;
  return this;
}

// ~UReplicationStateDescriptorConfig @ 1441f9f90

void __thiscall
UReplicationStateDescriptorConfig::~UReplicationStateDescriptorConfig
          (UReplicationStateDescriptorConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UReplicationStateDescriptorConfig__6B_;
  pFVar1 = (this->EnsureFullyPushModelClassNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SupportsStructNetSerializerList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetEnsureFullyPushModelClassNames @ 14420a3b0

TArrayView<FReplicationStateDescriptorClassPushModelConfig_const_,int> * __thiscall
UReplicationStateDescriptorConfig::GetEnsureFullyPushModelClassNames
          (UReplicationStateDescriptorConfig *this,
          TArrayView<FReplicationStateDescriptorClassPushModelConfig_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FReplicationStateDescriptorClassPushModelConfig_const_,int> *pTVar4;
  
  iVar1 = (this->EnsureFullyPushModelClassNames).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FReplicationStateDescriptorClassPushModelConfig *)
       (this->EnsureFullyPushModelClassNames).AllocatorInstance.Data;
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
    pTVar4 = (TArrayView<FReplicationStateDescriptorClassPushModelConfig_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14420bd10

UClass * __cdecl UReplicationStateDescriptorConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationStateDescriptorConfig",
               &Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.InnerSingleton,
               StaticRegisterNativesUReplicationStateDescriptorConfig,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationStateDescriptorConfig>,
               InternalVTableHelperCtorCaller<UReplicationStateDescriptorConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.InnerSingleton;
}

// GetSupportsStructNetSerializerList @ 14420dd90

TArrayView<FSupportsStructNetSerializerConfig_const_,int> * __thiscall
UReplicationStateDescriptorConfig::GetSupportsStructNetSerializerList
          (UReplicationStateDescriptorConfig *this,
          TArrayView<FSupportsStructNetSerializerConfig_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSupportsStructNetSerializerConfig_const_,int> *pTVar4;
  
  iVar1 = (this->SupportsStructNetSerializerList).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FSupportsStructNetSerializerConfig *)
       (this->SupportsStructNetSerializerList).AllocatorInstance.Data;
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
    pTVar4 = (TArrayView<FSupportsStructNetSerializerConfig_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUReplicationStateDescriptorConfig @ 14421be20

void __cdecl
UReplicationStateDescriptorConfig::StaticRegisterNativesUReplicationStateDescriptorConfig(void)

{
  return;
}

