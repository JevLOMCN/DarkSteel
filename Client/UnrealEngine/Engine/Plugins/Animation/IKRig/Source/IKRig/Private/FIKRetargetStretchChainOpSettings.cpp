// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 5

// StaticStruct @ 14dee5580

UScriptStruct * __cdecl FIKRetargetStretchChainOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStretchChainOpSettings,
                         (UObject *)pUVar1,L"IKRetargetStretchChainOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOpSettings.OuterSingleton;
}

// FIKRetargetStretchChainOpSettings @ 14df17740

FIKRetargetStretchChainOpSettings * __thiscall
FIKRetargetStretchChainOpSettings::FIKRetargetStretchChainOpSettings
          (FIKRetargetStretchChainOpSettings *this,FIKRetargetStretchChainOpSettings *param_1)

{
  TArray<FRetargetStretchChainSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UObjectBase *this_00;
  UIKRigDefinition *pUVar4;
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
  this->_padding_ = (longlong)&___7FIKRetargetStretchChainOpSettings__6B_;
  pUVar4 = (param_1->IKRigAsset).field0_0x0.DebugPtr;
  (this->IKRigAsset).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar1 = &this->ChainsToStretch;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ChainsToStretch).ArrayMax;
  iVar3 = (param_1->ChainsToStretch).ArrayNum;
  _Src = (param_1->ChainsToStretch).AllocatorInstance.Data;
  (this->ChainsToStretch).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 5);
  }
  return this;
}

// operator= @ 14df1e300

FIKRetargetStretchChainOpSettings * __thiscall
FIKRetargetStretchChainOpSettings::operator=
          (FIKRetargetStretchChainOpSettings *this,FIKRetargetStretchChainOpSettings *param_1)

{
  TArray<FRetargetStretchChainSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UIKRigDefinition *pUVar4;
  FScriptContainerElement *_Src;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->IKRigAsset).field0_0x0.DebugPtr, pUVar4 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar1 = &this->ChainsToStretch;
  (this->IKRigAsset).field0_0x0 = (param_1->IKRigAsset).field0_0x0;
  if (pTVar1 != &param_1->ChainsToStretch) {
    iVar3 = (param_1->ChainsToStretch).ArrayNum;
    piVar2 = &(this->ChainsToStretch).ArrayMax;
    _Src = (param_1->ChainsToStretch).AllocatorInstance.Data;
    (this->ChainsToStretch).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 5);
      }
    }
  }
  return this;
}

// CopySettingsAtRuntime @ 14df2e350

void __thiscall
FIKRetargetStretchChainOpSettings::CopySettingsAtRuntime
          (FIKRetargetStretchChainOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  
  iVar1 = *(int *)&param_1[1].Controller.Object;
  plVar6 = *(longlong **)&param_1[1].LODThreshold;
  plVar7 = plVar6 + (longlong)iVar1 * 4;
  while( true ) {
    if (*(int *)&param_1[1].Controller.Object != iVar1) {
      `TCheckedPointerIterator<FRetargetStretchChainSettings_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (plVar6 == plVar7) break;
    iVar2 = (this->ChainsToStretch).ArrayNum;
    pFVar4 = (this->ChainsToStretch).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar2 * 0x20;
    while( true ) {
      if ((this->ChainsToStretch).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRetargetStretchChainSettings,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar4 == pFVar5) break;
      if (*(longlong *)pFVar4 == *plVar6) {
        lVar3 = plVar6[1];
        *(longlong *)pFVar4 = *plVar6;
        *(longlong *)(pFVar4 + 8) = lVar3;
        lVar3 = plVar6[3];
        *(longlong *)(pFVar4 + 0x10) = plVar6[2];
        *(longlong *)(pFVar4 + 0x18) = lVar3;
      }
      pFVar4 = pFVar4 + 0x20;
    }
    plVar6 = plVar6 + 4;
  }
  return;
}

// GetControllerType @ 14df37e30

UClass * __thiscall
FIKRetargetStretchChainOpSettings::GetControllerType(FIKRetargetStretchChainOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetStretchChainController.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetStretchChainController",
               &Z_Registration_Info_UClass_UIKRetargetStretchChainController.InnerSingleton,
               UIKRetargetStretchChainController::
               StaticRegisterNativesUIKRetargetStretchChainController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetStretchChainController>,
               InternalVTableHelperCtorCaller<UIKRetargetStretchChainController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetStretchChainController.InnerSingleton;
}

