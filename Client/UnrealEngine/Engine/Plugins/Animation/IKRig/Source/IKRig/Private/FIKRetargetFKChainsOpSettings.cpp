// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 5

// StaticStruct @ 14df04dc0

UScriptStruct * __cdecl FIKRetargetFKChainsOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings,(UObject *)pUVar1,
                         L"IKRetargetFKChainsOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton;
}

// FIKRetargetFKChainsOpSettings @ 14df163a0

FIKRetargetFKChainsOpSettings * __thiscall
FIKRetargetFKChainsOpSettings::FIKRetargetFKChainsOpSettings
          (FIKRetargetFKChainsOpSettings *this,FIKRetargetFKChainsOpSettings *param_1)

{
  TArray<FRetargetFKChainSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FRetargetChainMapping *pFVar3;
  int iVar4;
  UObjectBase *this_00;
  UIKRigDefinition *pUVar5;
  FScriptContainerElement *pFVar6;
  
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
  this->_padding_ = (longlong)&___7FIKRetargetFKChainsOpSettings__6B_;
  pUVar5 = (param_1->IKRigAsset).field0_0x0.DebugPtr;
  (this->IKRigAsset).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar1 = &this->ChainsToRetarget;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ChainsToRetarget).ArrayMax;
  iVar4 = (param_1->ChainsToRetarget).ArrayNum;
  pFVar6 = (param_1->ChainsToRetarget).AllocatorInstance.Data;
  (this->ChainsToRetarget).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x28);
  }
  pFVar3 = &this->ChainMapping;
  this->bDrawChainLines = param_1->bDrawChainLines;
  this->bDrawSingleBoneChains = param_1->bDrawSingleBoneChains;
  this->ChainDrawThickness = param_1->ChainDrawThickness;
  this->ChainDrawSize = param_1->ChainDrawSize;
  piVar2 = &(this->ChainMapping).ChainMap.ArrayMax;
  (pFVar3->ChainMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ChainMapping).ChainMap.ArrayNum;
  pFVar6 = (param_1->ChainMapping).ChainMap.AllocatorInstance.Data;
  (this->ChainMapping).ChainMap.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar4,0,(ForAnyElementType *)pFVar3,iVar4,piVar2);
    memcpy((pFVar3->ChainMap).AllocatorInstance.Data,pFVar6,(longlong)iVar4 << 4);
  }
  pUVar5 = (param_1->ChainMapping).SourceIKRig.field0_0x0.DebugPtr;
  (this->ChainMapping).SourceIKRig.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (param_1->ChainMapping).TargetIKRig.field0_0x0.DebugPtr;
  (this->ChainMapping).TargetIKRig.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  return this;
}

// operator= @ 14df1d6e0

FIKRetargetFKChainsOpSettings * __thiscall
FIKRetargetFKChainsOpSettings::operator=
          (FIKRetargetFKChainsOpSettings *this,FIKRetargetFKChainsOpSettings *param_1)

{
  TArray<FRetargetFKChainSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UIKRigDefinition *pUVar5;
  FScriptContainerElement *_Src;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->IKRigAsset).field0_0x0.DebugPtr, pUVar5 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar1 = &this->ChainsToRetarget;
  (this->IKRigAsset).field0_0x0 = (param_1->IKRigAsset).field0_0x0;
  if (pTVar1 != &param_1->ChainsToRetarget) {
    iVar3 = (this->ChainsToRetarget).ArrayMax;
    piVar2 = &(this->ChainsToRetarget).ArrayMax;
    iVar4 = (param_1->ChainsToRetarget).ArrayNum;
    _Src = (param_1->ChainsToRetarget).AllocatorInstance.Data;
    (this->ChainsToRetarget).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x28);
      }
    }
  }
  this->bDrawChainLines = param_1->bDrawChainLines;
  this->bDrawSingleBoneChains = param_1->bDrawSingleBoneChains;
  this->ChainDrawThickness = param_1->ChainDrawThickness;
  this->ChainDrawSize = param_1->ChainDrawSize;
  FRetargetChainMapping::operator=(&this->ChainMapping,&param_1->ChainMapping);
  return this;
}

// CopySettingsAtRuntime @ 14df2d880

void __thiscall
FIKRetargetFKChainsOpSettings::CopySettingsAtRuntime
          (FIKRetargetFKChainsOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  UPackage *pUVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  FName local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  ::FName::FName(&local_res10,"ChainsToRetarget");
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  *(FName *)local_38.AllocatorInstance.Data = local_res10;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings,(UObject *)pUVar6,
                         L"IKRetargetFKChainsOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton,param_1,
             this,&local_38);
  iVar3 = *(int *)&param_1[1].Controller.Object;
  plVar8 = *(longlong **)&param_1[1].LODThreshold;
  plVar1 = plVar8 + (longlong)iVar3 * 5;
  while( true ) {
    if (*(int *)&param_1[1].Controller.Object != iVar3) {
      `TCheckedPointerIterator<FRetargetFKChainSettings_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res10);
    }
    if (plVar8 == plVar1) break;
    iVar4 = (this->ChainsToRetarget).ArrayNum;
    pFVar7 = (this->ChainsToRetarget).AllocatorInstance.Data;
    pFVar2 = pFVar7 + (longlong)iVar4 * 0x28;
    while( true ) {
      if ((this->ChainsToRetarget).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FRetargetFKChainSettings,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar7 == pFVar2) break;
      if (*(longlong *)pFVar7 == *plVar8) {
        lVar5 = plVar8[1];
        *(longlong *)pFVar7 = *plVar8;
        *(longlong *)(pFVar7 + 8) = lVar5;
        lVar5 = plVar8[3];
        *(longlong *)(pFVar7 + 0x10) = plVar8[2];
        *(longlong *)(pFVar7 + 0x18) = lVar5;
        *(longlong *)(pFVar7 + 0x20) = plVar8[4];
      }
      pFVar7 = pFVar7 + 0x28;
    }
    plVar8 = plVar8 + 5;
  }
  if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetControllerType @ 14df37d90

UClass * __thiscall
FIKRetargetFKChainsOpSettings::GetControllerType(FIKRetargetFKChainsOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetFKChainsController",
               &Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton,
               UIKRetargetFKChainsController::StaticRegisterNativesUIKRetargetFKChainsController,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetFKChainsController>,
               InternalVTableHelperCtorCaller<UIKRetargetFKChainsController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton;
}

