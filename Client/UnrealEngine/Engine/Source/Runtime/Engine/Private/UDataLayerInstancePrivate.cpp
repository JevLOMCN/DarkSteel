// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 148a29e10

UClass * __cdecl UDataLayerInstancePrivate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstancePrivate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstancePrivate",
               &Z_Registration_Info_UClass_UDataLayerInstancePrivate.InnerSingleton,
               StaticRegisterNativesUDataLayerInstancePrivate,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataLayerInstancePrivate>,
               InternalVTableHelperCtorCaller<UDataLayerInstancePrivate>,local_res8,
               UDataLayerInstance::StaticClass,AWorldDataLayers::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstancePrivate.InnerSingleton;
}

// UDataLayerInstancePrivate @ 148a427e0

UDataLayerInstancePrivate * __thiscall
UDataLayerInstancePrivate::UDataLayerInstancePrivate
          (UDataLayerInstancePrivate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataLayerInstancePrivate__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ShortName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShortName).Data.ArrayNum = 0;
  (this->ShortName).Data.ArrayMax = 0;
  (this->DataLayerAsset).field0_0x0.DebugPtr = (UDataLayerAsset *)0x0;
  return this;
}

// UDataLayerInstancePrivate @ 148a42830

UDataLayerInstancePrivate * __thiscall
UDataLayerInstancePrivate::UDataLayerInstancePrivate
          (UDataLayerInstancePrivate *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UDataLayerAsset *pUVar4;
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ShortName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShortName).Data.ArrayNum = 0;
  (this->ShortName).Data.ArrayMax = 0;
  (this->DataLayerAsset).field0_0x0.DebugPtr = (UDataLayerAsset *)0x0;
  this->_padding_ = (longlong)&___7UDataLayerInstancePrivate__6B_;
  pFVar2 = ::FName::FName(&local_res8,L"DataLayerAsset");
  FVar1 = *pFVar2;
  pUVar3 = UDataLayerAsset::StaticClass();
  pUVar4 = (UDataLayerAsset *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDataLayerAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->DataLayerAsset).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UDataLayerInstancePrivate @ 148a446d0

void __thiscall
UDataLayerInstancePrivate::~UDataLayerInstancePrivate(UDataLayerInstancePrivate *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDataLayerInstancePrivate__6B_;
  pFVar1 = (this->ShortName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDataLayerInstance__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetAsset @ 148a542f0

UDataLayerAsset * __thiscall UDataLayerInstancePrivate::GetAsset(UDataLayerInstancePrivate *this)

{
  return (this->DataLayerAsset).field0_0x0.DebugPtr;
}

// GetDataLayerFullName @ 148a55ba0

FString * __thiscall
UDataLayerInstancePrivate::GetDataLayerFullName
          (UDataLayerInstancePrivate *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)(this->DataLayerAsset).field0_0x0.DebugPtr,__return_storage_ptr__
             ,(UObject *)0x0);
  return __return_storage_ptr__;
}

// GetDataLayerShortName @ 148a57200

FString * __thiscall
UDataLayerInstancePrivate::GetDataLayerShortName
          (UDataLayerInstancePrivate *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->ShortName);
  return __return_storage_ptr__;
}

// GetDebugColor @ 148a57360

FColor __thiscall UDataLayerInstancePrivate::GetDebugColor(UDataLayerInstancePrivate *this)

{
  FColor_u_0 *in_RDX;
  
  *in_RDX = (((this->DataLayerAsset).field0_0x0.DebugPtr)->DebugColor).field0_0x0;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 148a5a260

UClass * __cdecl UDataLayerInstancePrivate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstancePrivate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstancePrivate",
               &Z_Registration_Info_UClass_UDataLayerInstancePrivate.InnerSingleton,
               StaticRegisterNativesUDataLayerInstancePrivate,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataLayerInstancePrivate>,
               InternalVTableHelperCtorCaller<UDataLayerInstancePrivate>,local_res8,
               UDataLayerInstance::StaticClass,AWorldDataLayers::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstancePrivate.InnerSingleton;
}

// GetType @ 148a5b420

EDataLayerType __thiscall UDataLayerInstancePrivate::GetType(UDataLayerInstancePrivate *this)

{
  EDataLayerType EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148a5b427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(((this->DataLayerAsset).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
  return EVar1;
}

// IsRuntime @ 148a5eb20

bool __thiscall UDataLayerInstancePrivate::IsRuntime(UDataLayerInstancePrivate *this)

{
  UDataLayerAsset *this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  
  this_00 = (this->DataLayerAsset).field0_0x0.DebugPtr;
  pUVar1 = UDataLayerInstance::StaticClass();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar1);
  if ((pUVar2 == (UObject *)0x0) && (this_00->DataLayerType == Runtime)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUDataLayerInstancePrivate @ 148a6a3f0

void __cdecl UDataLayerInstancePrivate::StaticRegisterNativesUDataLayerInstancePrivate(void)

{
  return;
}

