// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 10

// StaticClass @ 14a8729c0

UClass * __cdecl UChooserSignature::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserSignature.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserSignature",
               &Z_Registration_Info_UClass_UChooserSignature.InnerSingleton,
               StaticRegisterNativesUChooserSignature,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChooserSignature>,
               InternalVTableHelperCtorCaller<UChooserSignature>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserSignature.InnerSingleton;
}

// UChooserSignature @ 14a87dae0

UChooserSignature * __thiscall
UChooserSignature::UChooserSignature(UChooserSignature *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasContextClass__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ResultType = ObjectResult;
  (this->OutputObjectType).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ContextData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextData).ArrayNum = 0;
  (this->ContextData).ArrayMax = 0;
  return this;
}

// UChooserSignature @ 14a87db40

UChooserSignature * __thiscall
UChooserSignature::UChooserSignature(UChooserSignature *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasContextClass__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ResultType = ObjectResult;
  (this->OutputObjectType).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ContextData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextData).ArrayNum = 0;
  (this->ContextData).ArrayMax = 0;
  return this;
}

// ~UChooserSignature @ 14a87e700

void __thiscall UChooserSignature::~UChooserSignature(UChooserSignature *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasContextClass__;
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->ContextData).AllocatorInstance.Data,
             (this->ContextData).ArrayNum);
  pFVar1 = (this->ContextData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IHasContextClass__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetContextData @ 14a889bf0

TArrayView<FInstancedStruct_const_,int> * __thiscall
UChooserSignature::GetContextData
          (UChooserSignature *this,TArrayView<FInstancedStruct_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FInstancedStruct_const_,int> *pTVar4;
  
  iVar1 = (int)this->_padding_;
  __return_storage_ptr__->DataPtr = (FInstancedStruct *)this->_padding_;
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
    pTVar4 = (TArrayView<FInstancedStruct_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetContextOwnerAsset @ 14a889e10

UObject * __thiscall UChooserSignature::GetContextOwnerAsset(UChooserSignature *this)

{
  return (UObject *)&this[-1]._padding_;
}

// GetContextOwnerName @ 14a889e50

FString * __thiscall
UChooserSignature::GetContextOwnerName(UChooserSignature *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this[-1].ContextData.AllocatorInstance.Data;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a88abb0

UClass * __cdecl UChooserSignature::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserSignature.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserSignature",
               &Z_Registration_Info_UClass_UChooserSignature.InnerSingleton,
               StaticRegisterNativesUChooserSignature,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChooserSignature>,
               InternalVTableHelperCtorCaller<UChooserSignature>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserSignature.InnerSingleton;
}

// StaticRegisterNativesUChooserSignature @ 14a88fe20

void __cdecl UChooserSignature::StaticRegisterNativesUChooserSignature(void)

{
  return;
}

// _getUObject @ 14a892d60

UObject * __thiscall UChooserSignature::_getUObject(UChooserSignature *this)

{
  return (UObject *)&this[-1]._padding_;
}

