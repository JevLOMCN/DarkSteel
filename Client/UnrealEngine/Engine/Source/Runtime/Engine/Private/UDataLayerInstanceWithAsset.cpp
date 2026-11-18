// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 148a281b0

UClass * __cdecl UDataLayerInstanceWithAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstanceWithAsset",
               &Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.InnerSingleton,
               StaticRegisterNativesUDataLayerInstanceWithAsset,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataLayerInstanceWithAsset>,
               InternalVTableHelperCtorCaller<UDataLayerInstanceWithAsset>,local_res8,
               UDataLayerInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.InnerSingleton;
}

// UDataLayerInstanceWithAsset @ 148a42930

UDataLayerInstanceWithAsset * __thiscall
UDataLayerInstanceWithAsset::UDataLayerInstanceWithAsset
          (UDataLayerInstanceWithAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataLayerInstanceWithAsset__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->DataLayerAsset).field0_0x0.DebugPtr = (UDataLayerAsset *)0x0;
  return this;
}

// UDataLayerInstanceWithAsset @ 148a42970

UDataLayerInstanceWithAsset * __thiscall
UDataLayerInstanceWithAsset::UDataLayerInstanceWithAsset
          (UDataLayerInstanceWithAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDataLayerInstanceWithAsset__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->DataLayerAsset).field0_0x0.DebugPtr = (UDataLayerAsset *)0x0;
  return this;
}

// ~UDataLayerInstanceWithAsset @ 148a44730

void __thiscall
UDataLayerInstanceWithAsset::~UDataLayerInstanceWithAsset(UDataLayerInstanceWithAsset *this)

{
  this->_padding_ = (longlong)&___7UDataLayerInstance__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetAsset @ 148a54300

UDataLayerAsset * __thiscall
UDataLayerInstanceWithAsset::GetAsset(UDataLayerInstanceWithAsset *this)

{
  return (this->DataLayerAsset).field0_0x0.DebugPtr;
}

// GetDataLayerFullName @ 148a55bd0

FString * __thiscall
UDataLayerInstanceWithAsset::GetDataLayerFullName
          (UDataLayerInstanceWithAsset *this,FString *__return_storage_ptr__)

{
  UDataLayerAsset *this_00;
  FString *pFVar1;
  FName *this_01;
  bool bVar2;
  undefined4 local_res8 [2];
  FString local_28;
  FString local_18;
  
  local_res8[0] = 0;
  this_00 = (this->DataLayerAsset).field0_0x0.DebugPtr;
  bVar2 = this_00 == (UDataLayerAsset *)0x0;
  if (bVar2) {
    this_01 = (FName *)(**(code **)(this->_padding_ + 800))(this,local_res8);
    pFVar1 = ::FName::ToString(this_01,&local_28);
  }
  else {
    pFVar1 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0)
    ;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDataLayerShortName @ 148a57230

FString * __thiscall
UDataLayerInstanceWithAsset::GetDataLayerShortName
          (UDataLayerInstanceWithAsset *this,FString *__return_storage_ptr__)

{
  UDataLayerAsset *pUVar1;
  FName *this_00;
  FString *pFVar2;
  bool bVar3;
  FName local_res8;
  undefined1 local_res10 [8];
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar1 = (this->DataLayerAsset).field0_0x0.DebugPtr;
  bVar3 = pUVar1 == (UDataLayerAsset *)0x0;
  if (bVar3) {
    this_00 = (FName *)(**(code **)(this->_padding_ + 800))(this,local_res10);
    pFVar2 = ::FName::ToString(this_00,&local_18);
  }
  else {
    local_res8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    pFVar2 = &local_28;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDebugColor @ 148a57380

FColor __thiscall UDataLayerInstanceWithAsset::GetDebugColor(UDataLayerInstanceWithAsset *this)

{
  UDataLayerAsset *pUVar1;
  FColor_u_0 *in_RDX;
  
  pUVar1 = (this->DataLayerAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UDataLayerAsset *)0x0) {
    *in_RDX = (pUVar1->DebugColor).field0_0x0;
    return (FColor)SUB84(in_RDX,0);
  }
  in_RDX->_s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  return (FColor)SUB84(in_RDX,0);
}

// GetOuterWorld @ 148a592d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UDataLayerInstanceWithAsset::GetOuterWorld(UDataLayerInstanceWithAsset *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UWorld *pUVar6;
  UObject *pUVar7;
  
  pUVar4 = Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (pUVar5 == (UObject *)0x0) {
    pUVar4 = AWorldDataLayers::StaticClass();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar5,pUVar4);
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    if ((pUVar5 != pUVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetDirectOuterWorldDataLayers()->GetTypedOuter<UWorld>() == Super::GetOuterWorld()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstanceWithAsset.cpp"
                           ,0x23,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UWorld *)(*pcVar2)();
      return pUVar6;
    }
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    return pUVar6;
  }
  pUVar6 = (UWorld *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)(pUVar5 + 6));
  if (pUVar6 != (UWorld *)0x0) {
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pUVar6;
    }
  }
  return (UWorld *)0x0;
}

// GetPrivateStaticClass @ 148a5a3e0

UClass * __cdecl UDataLayerInstanceWithAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstanceWithAsset",
               &Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.InnerSingleton,
               StaticRegisterNativesUDataLayerInstanceWithAsset,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataLayerInstanceWithAsset>,
               InternalVTableHelperCtorCaller<UDataLayerInstanceWithAsset>,local_res8,
               UDataLayerInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.InnerSingleton;
}

// GetType @ 148a5b440

EDataLayerType __thiscall UDataLayerInstanceWithAsset::GetType(UDataLayerInstanceWithAsset *this)

{
  UDataLayerAsset *pUVar1;
  EDataLayerType EVar2;
  
  pUVar1 = (this->DataLayerAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UDataLayerAsset *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a5b44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))();
    return EVar2;
  }
  return Unknown;
}

// IsClientOnly @ 148a5e140

bool __thiscall UDataLayerInstanceWithAsset::IsClientOnly(UDataLayerInstanceWithAsset *this)

{
  UDataLayerAsset *this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  
  this_00 = (this->DataLayerAsset).field0_0x0.DebugPtr;
  if (this_00 != (UDataLayerAsset *)0x0) {
    pUVar1 = UDataLayerInstance::StaticClass();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar1);
    if (((pUVar2 == (UObject *)0x0) && (this_00->DataLayerType == Runtime)) &&
       (this_00->LoadFilter == ClientOnly)) {
      return true;
    }
  }
  return false;
}

// IsRuntime @ 148a5eb60

bool __thiscall UDataLayerInstanceWithAsset::IsRuntime(UDataLayerInstanceWithAsset *this)

{
  UDataLayerAsset *this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  
  this_00 = (this->DataLayerAsset).field0_0x0.DebugPtr;
  if (this_00 != (UDataLayerAsset *)0x0) {
    pUVar1 = UDataLayerInstance::StaticClass();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar1);
    if ((pUVar2 == (UObject *)0x0) && (this_00->DataLayerType == Runtime)) {
      return true;
    }
  }
  return false;
}

// IsServerOnly @ 148a5ec70

bool __thiscall UDataLayerInstanceWithAsset::IsServerOnly(UDataLayerInstanceWithAsset *this)

{
  UDataLayerAsset *this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  
  this_00 = (this->DataLayerAsset).field0_0x0.DebugPtr;
  if (this_00 != (UDataLayerAsset *)0x0) {
    pUVar1 = UDataLayerInstance::StaticClass();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar1);
    if (((pUVar2 == (UObject *)0x0) && (this_00->DataLayerType == Runtime)) &&
       (this_00->LoadFilter == ServerOnly)) {
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUDataLayerInstanceWithAsset @ 148a6a410

void __cdecl UDataLayerInstanceWithAsset::StaticRegisterNativesUDataLayerInstanceWithAsset(void)

{
  return;
}

