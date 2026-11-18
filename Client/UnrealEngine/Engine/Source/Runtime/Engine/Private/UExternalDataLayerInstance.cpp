// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 148a28590

UClass * __cdecl UExternalDataLayerInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerInstance",
               &Z_Registration_Info_UClass_UExternalDataLayerInstance.InnerSingleton,
               StaticRegisterNativesUExternalDataLayerInstance,0x50,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UExternalDataLayerInstance>,
               InternalVTableHelperCtorCaller<UExternalDataLayerInstance>,local_res8,
               UDataLayerInstanceWithAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerInstance.InnerSingleton;
}

// UExternalDataLayerInstance @ 148a42e80

UExternalDataLayerInstance * __thiscall
UExternalDataLayerInstance::UExternalDataLayerInstance
          (UExternalDataLayerInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UExternalDataLayerInstance__6B_;
  return this;
}

// UExternalDataLayerInstance @ 148a42ec0

UExternalDataLayerInstance * __thiscall
UExternalDataLayerInstance::UExternalDataLayerInstance
          (UExternalDataLayerInstance *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UExternalDataLayerInstance__6B_;
  return this;
}

// ~UExternalDataLayerInstance @ 148a449a0

void __thiscall
UExternalDataLayerInstance::~UExternalDataLayerInstance(UExternalDataLayerInstance *this)

{
  *(undefined ***)this = &___7UDataLayerInstance__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CanHaveParentDataLayerInstance @ 148a4c730

bool __thiscall
UExternalDataLayerInstance::CanHaveParentDataLayerInstance(UExternalDataLayerInstance *this)

{
  return false;
}

// GetExternalDataLayerAsset @ 148a57dc0

UExternalDataLayerAsset * __thiscall
UExternalDataLayerInstance::GetExternalDataLayerAsset(UExternalDataLayerInstance *this)

{
  int iVar1;
  UExternalDataLayerAsset *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UExternalDataLayerAsset *)(**(code **)(*(longlong *)this + 0x318))();
  if (pUVar2 == (UExternalDataLayerAsset *)0x0) {
    pFVar4 = GetTypeName<UExternalDataLayerAsset>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = UExternalDataLayerAsset::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<UExternalDataLayerAsset>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UDataLayerAsset_const_>(&local_18,(UDataLayerAsset *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetOuterWorld @ 148a593c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UExternalDataLayerInstance::GetOuterWorld(UExternalDataLayerInstance *this)

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
  if ((pUVar5 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetTypedOuter<URuntimeHashExternalStreamingObjectBase>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerInstance.cpp"
                         ,0x16,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UWorld *)(*pcVar2)();
    return pUVar6;
  }
  pUVar4 = Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = (UWorld *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)(pUVar5 + 6));
    if (pUVar6 != (UWorld *)0x0) {
      pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return pUVar6;
      }
    }
    return (UWorld *)0x0;
  }
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

// GetPrivateStaticClass @ 148a5a9d0

UClass * __cdecl UExternalDataLayerInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerInstance",
               &Z_Registration_Info_UClass_UExternalDataLayerInstance.InnerSingleton,
               StaticRegisterNativesUExternalDataLayerInstance,0x50,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UExternalDataLayerInstance>,
               InternalVTableHelperCtorCaller<UExternalDataLayerInstance>,local_res8,
               UDataLayerInstanceWithAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerInstance.InnerSingleton;
}

// StaticRegisterNativesUExternalDataLayerInstance @ 148a6a4f0

void __cdecl UExternalDataLayerInstance::StaticRegisterNativesUExternalDataLayerInstance(void)

{
  return;
}

