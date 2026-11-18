// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 7

// StaticStruct @ 14dee9640

UScriptStruct * __cdecl FIKRetargetIKChainsOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings,(UObject *)pUVar1,
                         L"IKRetargetIKChainsOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton;
}

// FIKRetargetIKChainsOpSettings @ 14df16640

FIKRetargetIKChainsOpSettings * __thiscall
FIKRetargetIKChainsOpSettings::FIKRetargetIKChainsOpSettings
          (FIKRetargetIKChainsOpSettings *this,FIKRetargetIKChainsOpSettings *param_1)

{
  TArray<FRetargetIKChainSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UObjectBase *this_00;
  FScriptContainerElement *_Src;
  
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
  pTVar1 = &this->ChainsToRetarget;
  this->_padding_ = (longlong)&___7FIKRetargetIKChainsOpSettings__6B_;
  piVar2 = &(this->ChainsToRetarget).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ChainsToRetarget).ArrayNum;
  _Src = (param_1->ChainsToRetarget).AllocatorInstance.Data;
  (this->ChainsToRetarget).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xa0);
  }
  this->bDrawFinalGoals = param_1->bDrawFinalGoals;
  this->bDrawSourceLocations = param_1->bDrawSourceLocations;
  this->GoalDrawSize = param_1->GoalDrawSize;
  this->GoalDrawThickness = param_1->GoalDrawThickness;
  return this;
}

// operator= @ 14df1d970

FIKRetargetIKChainsOpSettings * __thiscall
FIKRetargetIKChainsOpSettings::operator=
          (FIKRetargetIKChainsOpSettings *this,FIKRetargetIKChainsOpSettings *param_1)

{
  TArray<FRetargetIKChainSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  pTVar1 = &this->ChainsToRetarget;
  if (pTVar1 != &param_1->ChainsToRetarget) {
    iVar3 = (this->ChainsToRetarget).ArrayMax;
    piVar2 = &(this->ChainsToRetarget).ArrayMax;
    _Src = (param_1->ChainsToRetarget).AllocatorInstance.Data;
    iVar4 = (param_1->ChainsToRetarget).ArrayNum;
    (this->ChainsToRetarget).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0xa0);
      }
    }
  }
  this->bDrawFinalGoals = param_1->bDrawFinalGoals;
  this->bDrawSourceLocations = param_1->bDrawSourceLocations;
  this->GoalDrawSize = param_1->GoalDrawSize;
  this->GoalDrawThickness = param_1->GoalDrawThickness;
  return this;
}

// CopySettingsAtRuntime @ 14df2dae0

void __thiscall
FIKRetargetIKChainsOpSettings::CopySettingsAtRuntime
          (FIKRetargetIKChainsOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  UPackage *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  longlong *plVar8;
  FName local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  ::FName::FName(&local_res10,"ChainsToRetarget");
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  *(FName *)local_38.AllocatorInstance.Data = local_res10;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings,(UObject *)pUVar4,
                         L"IKRetargetIKChainsOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton,param_1,
             this,&local_38);
  iVar1 = param_1[1].LODThreshold;
  plVar7 = (longlong *)param_1[1]._padding_;
  plVar8 = plVar7 + (longlong)iVar1 * 0x14;
  while( true ) {
    if (param_1[1].LODThreshold != iVar1) {
      `TCheckedPointerIterator<FRetargetIKChainSettings_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res10);
    }
    if (plVar7 == plVar8) break;
    iVar2 = (this->ChainsToRetarget).ArrayNum;
    pFVar5 = (this->ChainsToRetarget).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar2 * 0xa0;
    while( true ) {
      if ((this->ChainsToRetarget).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRetargetIKChainSettings,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar5 == pFVar6) break;
      if (*(longlong *)pFVar5 == *plVar7) {
        lVar3 = plVar7[1];
        *(longlong *)pFVar5 = *plVar7;
        *(longlong *)(pFVar5 + 8) = lVar3;
        lVar3 = plVar7[3];
        *(longlong *)(pFVar5 + 0x10) = plVar7[2];
        *(longlong *)(pFVar5 + 0x18) = lVar3;
        lVar3 = plVar7[5];
        *(longlong *)(pFVar5 + 0x20) = plVar7[4];
        *(longlong *)(pFVar5 + 0x28) = lVar3;
        lVar3 = plVar7[7];
        *(longlong *)(pFVar5 + 0x30) = plVar7[6];
        *(longlong *)(pFVar5 + 0x38) = lVar3;
        lVar3 = plVar7[9];
        *(longlong *)(pFVar5 + 0x40) = plVar7[8];
        *(longlong *)(pFVar5 + 0x48) = lVar3;
        lVar3 = plVar7[0xb];
        *(longlong *)(pFVar5 + 0x50) = plVar7[10];
        *(longlong *)(pFVar5 + 0x58) = lVar3;
        lVar3 = plVar7[0xd];
        *(longlong *)(pFVar5 + 0x60) = plVar7[0xc];
        *(longlong *)(pFVar5 + 0x68) = lVar3;
        lVar3 = plVar7[0xf];
        *(longlong *)(pFVar5 + 0x70) = plVar7[0xe];
        *(longlong *)(pFVar5 + 0x78) = lVar3;
        lVar3 = plVar7[0x11];
        *(longlong *)(pFVar5 + 0x80) = plVar7[0x10];
        *(longlong *)(pFVar5 + 0x88) = lVar3;
        lVar3 = plVar7[0x13];
        *(longlong *)(pFVar5 + 0x90) = plVar7[0x12];
        *(longlong *)(pFVar5 + 0x98) = lVar3;
      }
      pFVar5 = pFVar5 + 0xa0;
    }
    plVar7 = plVar7 + 0x14;
  }
  if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetControllerType @ 14df37db0

UClass * __thiscall
FIKRetargetIKChainsOpSettings::GetControllerType(FIKRetargetIKChainsOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetIKChainsController",
               &Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton,
               UIKRetargetIKChainsController::StaticRegisterNativesUIKRetargetIKChainsController,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetIKChainsController>,
               InternalVTableHelperCtorCaller<UIKRetargetIKChainsController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton;
}

// PostLoad @ 14df4c410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIKRetargetIKChainsOpSettings::PostLoad(FIKRetargetIKChainsOpSettings *this,Type param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if ((int)param_1 < 8) {
    pFVar2 = (this->ChainsToRetarget).AllocatorInstance.Data;
    iVar1 = (this->ChainsToRetarget).ArrayNum;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0xa0;
    while( true ) {
      if ((this->ChainsToRetarget).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FRetargetIKChainSettings,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar2 == pFVar3) break;
      pFVar2[0x40] = (FScriptContainerElement)0x1;
      pFVar2 = pFVar2 + 0xa0;
    }
  }
  return;
}

// Serialize @ 14df536d0

bool __thiscall
FIKRetargetIKChainsOpSettings::Serialize(FIKRetargetIKChainsOpSettings *this,FArchive *param_1)

{
  UScriptStruct *this_00;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings,(UObject *)pUVar2,
                         L"IKRetargetIKChainsOpSettings");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings,(UObject *)pUVar2,
                         L"IKRetargetIKChainsOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this_00,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(this->_padding_ + 0x10))(this,iVar1);
  }
  return true;
}

