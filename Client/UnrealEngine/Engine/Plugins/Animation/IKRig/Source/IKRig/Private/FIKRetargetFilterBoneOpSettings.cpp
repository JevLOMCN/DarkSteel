// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 5

// StaticStruct @ 14df04960

UScriptStruct * __cdecl FIKRetargetFilterBoneOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFilterBoneOpSettings,(UObject *)pUVar1
                         ,L"IKRetargetFilterBoneOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.OuterSingleton;
}

// FIKRetargetFilterBoneOpSettings @ 14df16540

FIKRetargetFilterBoneOpSettings * __thiscall
FIKRetargetFilterBoneOpSettings::FIKRetargetFilterBoneOpSettings
          (FIKRetargetFilterBoneOpSettings *this,FIKRetargetFilterBoneOpSettings *param_1)

{
  TArray<FFilterBoneData,TSizedDefaultAllocator<32>_> *pTVar1;
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
  pTVar1 = &this->BonesToFilter;
  this->_padding_ = (longlong)&___7FIKRetargetFilterBoneOpSettings__6B_;
  piVar2 = &(this->BonesToFilter).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->BonesToFilter).ArrayNum;
  _Src = (param_1->BonesToFilter).AllocatorInstance.Data;
  (this->BonesToFilter).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 7);
  }
  this->MinFrequency = param_1->MinFrequency;
  this->Responsiveness = param_1->Responsiveness;
  this->VelocityCutoffHz = param_1->VelocityCutoffHz;
  this->bResetPlayback = param_1->bResetPlayback;
  return this;
}

// operator= @ 14df1d7e0

FIKRetargetFilterBoneOpSettings * __thiscall
FIKRetargetFilterBoneOpSettings::operator=
          (FIKRetargetFilterBoneOpSettings *this,FIKRetargetFilterBoneOpSettings *param_1)

{
  TArray<FFilterBoneData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  pTVar1 = &this->BonesToFilter;
  if (pTVar1 != &param_1->BonesToFilter) {
    iVar3 = (this->BonesToFilter).ArrayMax;
    piVar2 = &(this->BonesToFilter).ArrayMax;
    _Src = (param_1->BonesToFilter).AllocatorInstance.Data;
    iVar4 = (param_1->BonesToFilter).ArrayNum;
    (this->BonesToFilter).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 7);
      }
    }
  }
  this->MinFrequency = param_1->MinFrequency;
  this->Responsiveness = param_1->Responsiveness;
  this->VelocityCutoffHz = param_1->VelocityCutoffHz;
  this->bResetPlayback = param_1->bResetPlayback;
  return this;
}

// CopySettingsAtRuntime @ 14df2da00

void __thiscall
FIKRetargetFilterBoneOpSettings::CopySettingsAtRuntime
          (FIKRetargetFilterBoneOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  UPackage *pUVar1;
  FName local_res18 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  ::FName::FName(local_res18,"BonesToFilter");
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(FName *)local_18.AllocatorInstance.Data = local_res18[0];
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFilterBoneOpSettings,(UObject *)pUVar1
                         ,L"IKRetargetFilterBoneOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.OuterSingleton,
             param_1,this,&local_18);
  if ((FName *)local_18.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetControllerType @ 14df37da0

UClass * __thiscall
FIKRetargetFilterBoneOpSettings::GetControllerType(FIKRetargetFilterBoneOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetFilterBoneController",
               &Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton,
               UIKRetargetFilterBoneController::StaticRegisterNativesUIKRetargetFilterBoneController
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetFilterBoneController>,
               InternalVTableHelperCtorCaller<UIKRetargetFilterBoneController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton;
}

