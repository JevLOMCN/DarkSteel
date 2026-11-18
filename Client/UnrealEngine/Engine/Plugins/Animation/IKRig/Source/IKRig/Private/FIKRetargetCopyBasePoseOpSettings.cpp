// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 7

// StaticStruct @ 14dee3ee0

UScriptStruct * __cdecl FIKRetargetCopyBasePoseOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings,
                         (UObject *)pUVar1,L"IKRetargetCopyBasePoseOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton;
}

// FIKRetargetCopyBasePoseOpSettings @ 14df16100

FIKRetargetCopyBasePoseOpSettings * __thiscall
FIKRetargetCopyBasePoseOpSettings::FIKRetargetCopyBasePoseOpSettings
          (FIKRetargetCopyBasePoseOpSettings *this,FIKRetargetCopyBasePoseOpSettings *param_1)

{
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UObjectBase *this_00;
  FScriptContainerElement *_Src;
  undefined4 uVar4;
  FCompactPoseBoneIndex FVar5;
  
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = 0;
  this_00 = (UObjectBase *)param_1->_padding_;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    this->_padding_ = (longlong)this_00;
  }
  this->_padding_ = (longlong)&___7FIKRetargetCopyBasePoseOpSettings__6B_;
  pTVar1 = &this->BonesToExclude;
  this->bCopyBasePose = param_1->bCopyBasePose;
  piVar2 = &(this->BonesToExclude).ArrayMax;
  uVar4 = *(undefined4 *)&(param_1->CopyFromStart).field_0x8;
  FVar5 = (param_1->CopyFromStart).CachedCompactPoseIndex;
  (this->CopyFromStart).BoneName = (param_1->CopyFromStart).BoneName;
  *(undefined4 *)&(this->CopyFromStart).field_0x8 = uVar4;
  (this->CopyFromStart).CachedCompactPoseIndex = FVar5;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->BonesToExclude).ArrayNum;
  _Src = (param_1->BonesToExclude).AllocatorInstance.Data;
  (this->BonesToExclude).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  this->CopyBasePoseRoot_DEPRECATED = param_1->CopyBasePoseRoot_DEPRECATED;
  return this;
}

// operator= @ 14df1d5f0

FIKRetargetCopyBasePoseOpSettings * __thiscall
FIKRetargetCopyBasePoseOpSettings::operator=
          (FIKRetargetCopyBasePoseOpSettings *this,FIKRetargetCopyBasePoseOpSettings *param_1)

{
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  pTVar1 = &this->BonesToExclude;
  this->bCopyBasePose = param_1->bCopyBasePose;
  (this->CopyFromStart).BoneName = (param_1->CopyFromStart).BoneName;
  uVar3 = *(undefined4 *)&(param_1->CopyFromStart).field_0x8;
  *(uint *)&(this->CopyFromStart).field_0x8 =
       (uVar3 ^ *(uint *)&(this->CopyFromStart).field_0x8) & 0x80000000 ^ uVar3;
  *(uint *)&(this->CopyFromStart).field_0x8 =
       ((param_1->CopyFromStart).BoneIndex ^ SPULL(uVar3,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->CopyFromStart).field_0x8;
  (this->CopyFromStart).CachedCompactPoseIndex = (param_1->CopyFromStart).CachedCompactPoseIndex;
  if (pTVar1 != &param_1->BonesToExclude) {
    iVar4 = (this->BonesToExclude).ArrayMax;
    piVar2 = &(this->BonesToExclude).ArrayMax;
    iVar5 = (param_1->BonesToExclude).ArrayNum;
    _Src = (param_1->BonesToExclude).AllocatorInstance.Data;
    (this->BonesToExclude).ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar5,iVar4,&pTVar1->AllocatorInstance,iVar5,piVar2);
      if (iVar5 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar5 << 4);
      }
    }
  }
  this->CopyBasePoseRoot_DEPRECATED = param_1->CopyBasePoseRoot_DEPRECATED;
  return this;
}

// CopySettingsAtRuntime @ 14df2d7a0

void __thiscall
FIKRetargetCopyBasePoseOpSettings::CopySettingsAtRuntime
          (FIKRetargetCopyBasePoseOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  UPackage *pUVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings,
                         (UObject *)pUVar1,L"IKRetargetCopyBasePoseOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton,
             param_1,this,&local_18);
  return;
}

// GetControllerType @ 14df37d70

UClass * __thiscall
FIKRetargetCopyBasePoseOpSettings::GetControllerType(FIKRetargetCopyBasePoseOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetCopyBasePoseController",
               &Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton,
               UIKRetargetCopyBasePoseController::
               StaticRegisterNativesUIKRetargetCopyBasePoseController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetCopyBasePoseController>,
               InternalVTableHelperCtorCaller<UIKRetargetCopyBasePoseController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton;
}

// PostLoad @ 14df4c3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIKRetargetCopyBasePoseOpSettings::PostLoad(FIKRetargetCopyBasePoseOpSettings *this,Type param_1)

{
  if ((int)param_1 < 7) {
    (this->CopyFromStart).BoneName = this->CopyBasePoseRoot_DEPRECATED;
  }
  return;
}

// Serialize @ 14df535f0

bool __thiscall
FIKRetargetCopyBasePoseOpSettings::Serialize
          (FIKRetargetCopyBasePoseOpSettings *this,FArchive *param_1)

{
  UScriptStruct *this_00;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings,
                         (UObject *)pUVar2,L"IKRetargetCopyBasePoseOpSettings");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings,
                         (UObject *)pUVar2,L"IKRetargetCopyBasePoseOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this_00,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(this->_padding_ + 0x10))(this,iVar1);
  }
  return true;
}

