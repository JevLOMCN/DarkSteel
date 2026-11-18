// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 9

// StaticClass @ 14df8ea90

UClass * __cdecl UDataflowGroomContent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowGroomContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"DataflowGroomContent",
               &Z_Registration_Info_UClass_UDataflowGroomContent.InnerSingleton,
               StaticRegisterNativesUDataflowGroomContent,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowGroomContent>,
               InternalVTableHelperCtorCaller<UDataflowGroomContent>,local_res8,
               UDataflowSkeletalContent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowGroomContent.InnerSingleton;
}

// UDataflowGroomContent @ 14dfaf5c0

UDataflowGroomContent * __thiscall
UDataflowGroomContent::UDataflowGroomContent(UDataflowGroomContent *this,FVTableHelper *param_1)

{
  UDataflowSkeletalContent::UDataflowSkeletalContent((UDataflowSkeletalContent *)this,param_1);
  this->_padding_ = (longlong)&___7UDataflowGroomContent__6B_;
  (this->BindingAsset).field0_0x0.DebugPtr = (UGroomBindingAsset *)0x0;
  return this;
}

// UDataflowGroomContent @ 14dfaf600

UDataflowGroomContent * __thiscall
UDataflowGroomContent::UDataflowGroomContent(UDataflowGroomContent *this)

{
  UDataflowSkeletalContent::UDataflowSkeletalContent((UDataflowSkeletalContent *)this);
  *(undefined2 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UDataflowGroomContent__6B_;
  (this->BindingAsset).field0_0x0.DebugPtr = (UGroomBindingAsset *)0x0;
  return this;
}

// ~UDataflowGroomContent @ 14dfb0a40

void __thiscall UDataflowGroomContent::~UDataflowGroomContent(UDataflowGroomContent *this)

{
  this->_padding_ = (longlong)&___7UDataflowSkeletalContent__6B_;
  UDataflowBaseContent::~UDataflowBaseContent((UDataflowBaseContent *)this);
  return;
}

// AddReferencedObjects @ 14dfb6820

void __cdecl
UDataflowGroomContent::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UDataflowSkeletalContent::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UDataflowGroomContent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[5].field_0x18,0,0);
    UDataflowSkeletalContent::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UDataflowGroomContent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetPrivateStaticClass @ 14dfc8240

UClass * __cdecl UDataflowGroomContent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowGroomContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"DataflowGroomContent",
               &Z_Registration_Info_UClass_UDataflowGroomContent.InnerSingleton,
               StaticRegisterNativesUDataflowGroomContent,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowGroomContent>,
               InternalVTableHelperCtorCaller<UDataflowGroomContent>,local_res8,
               UDataflowSkeletalContent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowGroomContent.InnerSingleton;
}

// SetActorProperties @ 14dfd6980

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
UDataflowGroomContent::SetActorProperties(UDataflowGroomContent *this,TObjectPtr<AActor> *param_1)

{
  FName local_res8;
  UGroomBindingAsset *local_res18 [2];
  
  UDataflowSkeletalContent::SetActorProperties((UDataflowSkeletalContent *)this,param_1);
  ::FName::FName(&local_res8,L"BindingAsset");
  local_res18[0] = (this->BindingAsset).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UGroomBindingAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  UDataflowBaseContent::OverrideActorProperty(param_1,(TObjectPtr<UObject>)local_res18,&local_res8);
  return;
}

// SetBindingAsset @ 14dfd69f0

void __thiscall
UDataflowGroomContent::SetBindingAsset
          (UDataflowGroomContent *this,TObjectPtr<UGroomBindingAsset> *param_1)

{
  UGroomBindingAsset *pUVar1;
  TObjectPtr<USkeletalMesh>_u_0 TVar2;
  bool bVar3;
  TObjectPtr<USkeletalMesh>_u_0 local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((param_1->field0_0x0).DebugPtr != (UGroomBindingAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_1->field0_0x0).DebugPtr);
  }
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  (this->BindingAsset).field0_0x0.DebugPtr = pUVar1;
  if (pUVar1 != (UGroomBindingAsset *)0x0) {
    TVar2 = (TObjectPtr<USkeletalMesh>_u_0)(pUVar1->TargetSkeletalMesh).field0_0x0.DebugPtr;
    if ((USkeletalMesh *)this->_padding_ == (USkeletalMesh *)0x0) {
      bVar3 = TVar2.DebugPtr == (USkeletalMesh *)0x0;
    }
    else {
      bVar3 = (USkeletalMesh *)this->_padding_ == TVar2.DebugPtr;
    }
    if (!bVar3) {
      local_res8 = TVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.DebugPtr != (USkeletalMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      UDataflowSkeletalContent::SetSkeletalMesh
                ((UDataflowSkeletalContent *)this,(TObjectPtr<USkeletalMesh> *)&local_res8.ObjectPtr
                 ,true);
    }
  }
  UDataflowBaseContent::SetConstructionDirty((UDataflowBaseContent *)this,true);
  UDataflowBaseContent::SetSimulationDirty((UDataflowBaseContent *)this,true);
  return;
}

// StaticRegisterNativesUDataflowGroomContent @ 14dfd88e0

void __cdecl UDataflowGroomContent::StaticRegisterNativesUDataflowGroomContent(void)

{
  return;
}

