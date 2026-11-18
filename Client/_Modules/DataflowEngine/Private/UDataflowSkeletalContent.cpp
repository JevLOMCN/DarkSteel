// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 11

// StaticClass @ 1462c49b0

UClass * __cdecl UDataflowSkeletalContent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSkeletalContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowSkeletalContent",
               &Z_Registration_Info_UClass_UDataflowSkeletalContent.InnerSingleton,
               StaticRegisterNativesUDataflowSkeletalContent,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowSkeletalContent>,
               InternalVTableHelperCtorCaller<UDataflowSkeletalContent>,local_res8,
               UDataflowBaseContent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSkeletalContent.InnerSingleton;
}

// UDataflowSkeletalContent @ 1462cf4c0

UDataflowSkeletalContent * __thiscall
UDataflowSkeletalContent::UDataflowSkeletalContent
          (UDataflowSkeletalContent *this,FVTableHelper *param_1)

{
  UDataflowBaseContent::UDataflowBaseContent((UDataflowBaseContent *)this,param_1);
  this->_padding_ = (longlong)&___7UDataflowSkeletalContent__6B_;
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->AnimationAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  this->bHideSkeletalMesh = false;
  this->bHideAnimationAsset = false;
  return this;
}

// UDataflowSkeletalContent @ 1462cf500

UDataflowSkeletalContent * __thiscall
UDataflowSkeletalContent::UDataflowSkeletalContent(UDataflowSkeletalContent *this)

{
  UDataflowBaseContent::UDataflowBaseContent((UDataflowBaseContent *)this);
  this->_padding_ = (longlong)&___7UDataflowSkeletalContent__6B_;
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->AnimationAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  this->bHideSkeletalMesh = false;
  this->bHideAnimationAsset = false;
  return this;
}

// ~UDataflowSkeletalContent @ 1462d03d0

void __thiscall UDataflowSkeletalContent::~UDataflowSkeletalContent(UDataflowSkeletalContent *this)

{
  this->_padding_ = (longlong)&___7UDataflowSkeletalContent__6B_;
  UDataflowBaseContent::~UDataflowBaseContent((UDataflowBaseContent *)this);
  return;
}

// AddContentObjects @ 1462d1de0

void __thiscall
UDataflowSkeletalContent::AddContentObjects
          (UDataflowSkeletalContent *this,FReferenceCollector *param_1)

{
  return;
}

// AddReferencedObjects @ 1462d2640

void __cdecl
UDataflowSkeletalContent::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UDataflowSkeletalContent>(&local_28);
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
    (**(code **)(param_2->_padding_ + 0x88))(param_2,param_1 + 5,0,0);
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[5].field_0x8,0,0);
    UDataflowBaseContent::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UDataflowSkeletalContent>(&local_28);
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

// GetPrivateStaticClass @ 1462de0d0

UClass * __cdecl UDataflowSkeletalContent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSkeletalContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowSkeletalContent",
               &Z_Registration_Info_UClass_UDataflowSkeletalContent.InnerSingleton,
               StaticRegisterNativesUDataflowSkeletalContent,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowSkeletalContent>,
               InternalVTableHelperCtorCaller<UDataflowSkeletalContent>,local_res8,
               UDataflowBaseContent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSkeletalContent.InnerSingleton;
}

// SetActorProperties @ 1462e48f0

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
UDataflowSkeletalContent::SetActorProperties
          (UDataflowSkeletalContent *this,TObjectPtr<AActor> *param_1)

{
  UAnimationAsset *pUVar1;
  USkeletalMesh *pUVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  UObject *pUVar5;
  bool bVar6;
  FName local_res8;
  
  ::FName::FName(&local_res8,L"DataflowAsset");
  pUVar5 = (UObject *)0x0;
  if (this->_padding_ != 0) {
    pUVar5 = *(UObject **)(this->_padding_ + 0x360);
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1462e4952;
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
LAB_1462e4952:
  if (((param_1->field0_0x0).DebugPtr != (AActor *)0x0) && (pUVar5 != (UObject *)0x0)) {
    pFVar3 = UStruct::FindPropertyByName
                       ((UStruct *)((param_1->field0_0x0).DebugPtr)->_padding_,local_res8);
    if ((pFVar3 != (FProperty *)0x0) && ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x10 & 1) != 0)) {
      if (pFVar3[1]._padding_ == 0) {
        bVar6 = *(longlong *)&pUVar5->field_0x10 == 0;
      }
      else {
        bVar6 = pFVar3[1]._padding_ == *(longlong *)&pUVar5->field_0x10;
      }
      if (bVar6) {
        puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (pFVar3,(UObject *)(param_1->field0_0x0).DebugPtr,0);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = pUVar5;
        }
      }
    }
  }
  ::FName::FName(&local_res8,L"AnimationAsset");
  pUVar1 = (this->AnimationAsset).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAnimationAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if (((param_1->field0_0x0).DebugPtr != (AActor *)0x0) && (pUVar1 != (UAnimationAsset *)0x0)) {
    pFVar3 = UStruct::FindPropertyByName
                       ((UStruct *)((param_1->field0_0x0).DebugPtr)->_padding_,local_res8);
    if ((pFVar3 != (FProperty *)0x0) && ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x10 & 1) != 0)) {
      if (pFVar3[1]._padding_ == 0) {
        bVar6 = pUVar1->_padding_ == 0;
      }
      else {
        bVar6 = pFVar3[1]._padding_ == pUVar1->_padding_;
      }
      if (bVar6) {
        puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (pFVar3,(UObject *)(param_1->field0_0x0).DebugPtr,0);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = pUVar1;
        }
      }
    }
  }
  ::FName::FName(&local_res8,L"SkeletalMesh");
  pUVar2 = (this->SkeletalMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  if (((param_1->field0_0x0).DebugPtr != (AActor *)0x0) && (pUVar2 != (USkeletalMesh *)0x0)) {
    pFVar3 = UStruct::FindPropertyByName
                       ((UStruct *)((param_1->field0_0x0).DebugPtr)->_padding_,local_res8);
    if ((pFVar3 != (FProperty *)0x0) && ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x10 & 1) != 0)) {
      if (pFVar3[1]._padding_ == 0) {
        bVar6 = pUVar2->_padding_ == 0;
      }
      else {
        bVar6 = pFVar3[1]._padding_ == pUVar2->_padding_;
      }
      if (bVar6) {
        puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (pFVar3,(UObject *)(param_1->field0_0x0).DebugPtr,0);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = pUVar2;
        }
      }
    }
  }
  return;
}

// SetAnimationAsset @ 1462e4af0

void __thiscall
UDataflowSkeletalContent::SetAnimationAsset
          (UDataflowSkeletalContent *this,TObjectPtr<UAnimationAsset> *param_1,bool param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((param_1->field0_0x0).DebugPtr != (UAnimationAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_1->field0_0x0).DebugPtr);
  }
  (this->AnimationAsset).field0_0x0 = param_1->field0_0x0;
  this->bHideAnimationAsset = param_2;
  *(undefined2 *)&this->_padding_ = 0x101;
  return;
}

// SetSkeletalMesh @ 1462e5a00

void __thiscall
UDataflowSkeletalContent::SetSkeletalMesh
          (UDataflowSkeletalContent *this,TObjectPtr<USkeletalMesh> *param_1,bool param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((param_1->field0_0x0).DebugPtr != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_1->field0_0x0).DebugPtr);
  }
  (this->SkeletalMesh).field0_0x0 = param_1->field0_0x0;
  this->bHideSkeletalMesh = param_2;
  *(undefined2 *)&this->_padding_ = 0x101;
  return;
}

// StaticRegisterNativesUDataflowSkeletalContent @ 1462e62a0

void __cdecl UDataflowSkeletalContent::StaticRegisterNativesUDataflowSkeletalContent(void)

{
  return;
}

