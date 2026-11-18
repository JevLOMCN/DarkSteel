// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 5

// StaticStruct @ 14def53f0

UScriptStruct * __cdecl FIKRetargetSpeedPlantingOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOpSettings,
                         (UObject *)pUVar1,L"IKRetargetSpeedPlantingOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton;
}

// FIKRetargetSpeedPlantingOpSettings @ 14df17640

FIKRetargetSpeedPlantingOpSettings * __thiscall
FIKRetargetSpeedPlantingOpSettings::FIKRetargetSpeedPlantingOpSettings
          (FIKRetargetSpeedPlantingOpSettings *this,FIKRetargetSpeedPlantingOpSettings *param_1)

{
  TArray<FRetargetSpeedPlantingSettings,TSizedDefaultAllocator<32>_> *pTVar1;
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
  pTVar1 = &this->ChainsToSpeedPlant;
  this->_padding_ = (longlong)&___7FIKRetargetSpeedPlantingOpSettings__6B_;
  piVar2 = &(this->ChainsToSpeedPlant).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ChainsToSpeedPlant).ArrayNum;
  _Src = (param_1->ChainsToSpeedPlant).AllocatorInstance.Data;
  (this->ChainsToSpeedPlant).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  this->SpeedThreshold = param_1->SpeedThreshold;
  this->Stiffness = param_1->Stiffness;
  this->CriticalDamping = param_1->CriticalDamping;
  return this;
}

// operator= @ 14df1e230

FIKRetargetSpeedPlantingOpSettings * __thiscall
FIKRetargetSpeedPlantingOpSettings::operator=
          (FIKRetargetSpeedPlantingOpSettings *this,FIKRetargetSpeedPlantingOpSettings *param_1)

{
  TArray<FRetargetSpeedPlantingSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  pTVar1 = &this->ChainsToSpeedPlant;
  if (pTVar1 != &param_1->ChainsToSpeedPlant) {
    iVar3 = (this->ChainsToSpeedPlant).ArrayMax;
    piVar2 = &(this->ChainsToSpeedPlant).ArrayMax;
    _Src = (param_1->ChainsToSpeedPlant).AllocatorInstance.Data;
    iVar4 = (param_1->ChainsToSpeedPlant).ArrayNum;
    (this->ChainsToSpeedPlant).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
      }
    }
  }
  this->SpeedThreshold = param_1->SpeedThreshold;
  this->Stiffness = param_1->Stiffness;
  this->CriticalDamping = param_1->CriticalDamping;
  return this;
}

// CopySettingsAtRuntime @ 14df2e190

void __thiscall
FIKRetargetSpeedPlantingOpSettings::CopySettingsAtRuntime
          (FIKRetargetSpeedPlantingOpSettings *this,FIKRetargetOpSettingsBase *param_1)

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
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&local_res10,"ChainsToSpeedPlant");
      PropertiesToIgnore.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      PropertiesToIgnore.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,0,&PropertiesToIgnore.AllocatorInstance,1,&PropertiesToIgnore.ArrayMax);
      *(FName *)PropertiesToIgnore.AllocatorInstance.Data = local_res10;
      atexit(`FIKRetargetSpeedPlantingOpSettings::CopySettingsAtRuntime'::__l2::
             _dynamic_atexit_destructor_for__PropertiesToIgnore__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOpSettings,
                         (UObject *)pUVar4,L"IKRetargetSpeedPlantingOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton,
             param_1,this,&PropertiesToIgnore);
  iVar1 = param_1[1].LODThreshold;
  plVar7 = (longlong *)param_1[1]._padding_;
  plVar8 = plVar7 + (longlong)iVar1 * 2;
  while( true ) {
    if (param_1[1].LODThreshold != iVar1) {
      `TCheckedPointerIterator<FRetargetSpeedPlantingSettings_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res10);
    }
    if (plVar7 == plVar8) break;
    iVar2 = (this->ChainsToSpeedPlant).ArrayNum;
    pFVar5 = (this->ChainsToSpeedPlant).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->ChainsToSpeedPlant).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRetargetSpeedPlantingSettings,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res10);
      }
      if (pFVar5 == pFVar6) break;
      if (*(longlong *)pFVar5 == *plVar7) {
        lVar3 = plVar7[1];
        *(longlong *)pFVar5 = *plVar7;
        *(longlong *)(pFVar5 + 8) = lVar3;
      }
      pFVar5 = pFVar5 + 0x10;
    }
    plVar7 = plVar7 + 2;
  }
  return;
}

// GetControllerType @ 14df37e20

UClass * __thiscall
FIKRetargetSpeedPlantingOpSettings::GetControllerType(FIKRetargetSpeedPlantingOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetSpeedPlantingController",
               &Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton,
               UIKRetargetSpeedPlantingController::
               StaticRegisterNativesUIKRetargetSpeedPlantingController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetSpeedPlantingController>,
               InternalVTableHelperCtorCaller<UIKRetargetSpeedPlantingController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton;
}

