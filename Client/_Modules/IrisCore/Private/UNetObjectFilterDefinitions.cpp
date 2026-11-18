// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 7

// StaticClass @ 14421f3b0

UClass * __cdecl UNetObjectFilterDefinitions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFilterDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFilterDefinitions",
               &Z_Registration_Info_UClass_UNetObjectFilterDefinitions.InnerSingleton,
               StaticRegisterNativesUNetObjectFilterDefinitions,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectFilterDefinitions>,
               InternalVTableHelperCtorCaller<UNetObjectFilterDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFilterDefinitions.InnerSingleton;
}

// UNetObjectFilterDefinitions @ 14422a400

UNetObjectFilterDefinitions * __thiscall
UNetObjectFilterDefinitions::UNetObjectFilterDefinitions
          (UNetObjectFilterDefinitions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetObjectFilterDefinitions__6B_;
  (this->NetObjectFilterDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetObjectFilterDefinitions).ArrayNum = 0;
  (this->NetObjectFilterDefinitions).ArrayMax = 0;
  return this;
}

// UNetObjectFilterDefinitions @ 14422a440

UNetObjectFilterDefinitions * __thiscall
UNetObjectFilterDefinitions::UNetObjectFilterDefinitions
          (UNetObjectFilterDefinitions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetObjectFilterDefinitions__6B_;
  (this->NetObjectFilterDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetObjectFilterDefinitions).ArrayNum = 0;
  (this->NetObjectFilterDefinitions).ArrayMax = 0;
  return this;
}

// ~UNetObjectFilterDefinitions @ 14422b500

void __thiscall
UNetObjectFilterDefinitions::~UNetObjectFilterDefinitions(UNetObjectFilterDefinitions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetObjectFilterDefinitions__6B_;
  pFVar1 = (this->NetObjectFilterDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetFilterDefinitions @ 14423c120

TArrayView<FNetObjectFilterDefinition_const_,int> * __thiscall
UNetObjectFilterDefinitions::GetFilterDefinitions
          (UNetObjectFilterDefinitions *this,
          TArrayView<FNetObjectFilterDefinition_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FNetObjectFilterDefinition_const_,int> *pTVar4;
  
  iVar1 = (this->NetObjectFilterDefinitions).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FNetObjectFilterDefinition *)(this->NetObjectFilterDefinitions).AllocatorInstance.Data;
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
    pTVar4 = (TArrayView<FNetObjectFilterDefinition_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14423e370

UClass * __cdecl UNetObjectFilterDefinitions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFilterDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFilterDefinitions",
               &Z_Registration_Info_UClass_UNetObjectFilterDefinitions.InnerSingleton,
               StaticRegisterNativesUNetObjectFilterDefinitions,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectFilterDefinitions>,
               InternalVTableHelperCtorCaller<UNetObjectFilterDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFilterDefinitions.InnerSingleton;
}

// StaticRegisterNativesUNetObjectFilterDefinitions @ 144254910

void __cdecl UNetObjectFilterDefinitions::StaticRegisterNativesUNetObjectFilterDefinitions(void)

{
  return;
}

