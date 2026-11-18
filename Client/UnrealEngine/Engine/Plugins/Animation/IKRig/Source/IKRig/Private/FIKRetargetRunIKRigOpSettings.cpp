// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 5

// StaticStruct @ 14def3160

UScriptStruct * __cdecl FIKRetargetRunIKRigOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRunIKRigOpSettings,(UObject *)pUVar1,
                         L"IKRetargetRunIKRigOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.OuterSingleton;
}

// FIKRetargetRunIKRigOpSettings @ 14df17490

FIKRetargetRunIKRigOpSettings * __thiscall
FIKRetargetRunIKRigOpSettings::FIKRetargetRunIKRigOpSettings
          (FIKRetargetRunIKRigOpSettings *this,FIKRetargetRunIKRigOpSettings *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
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
  this->_padding_ = (longlong)&___7FIKRetargetRunIKRigOpSettings__6B_;
  pUVar4 = (param_1->IKRigAsset).field0_0x0.DebugPtr;
  (this->IKRigAsset).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar1 = &this->ExcludedGoals;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ExcludedGoals).ArrayMax;
  iVar3 = (param_1->ExcludedGoals).ArrayNum;
  _Src = (param_1->ExcludedGoals).AllocatorInstance.Data;
  (this->ExcludedGoals).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->bDrawGoals = param_1->bDrawGoals;
  this->bDrawGoalBoneLocations = param_1->bDrawGoalBoneLocations;
  this->GoalDrawSize = param_1->GoalDrawSize;
  this->GoalDrawThickness = param_1->GoalDrawThickness;
  return this;
}

// operator= @ 14df1e140

FIKRetargetRunIKRigOpSettings * __thiscall
FIKRetargetRunIKRigOpSettings::operator=
          (FIKRetargetRunIKRigOpSettings *this,FIKRetargetRunIKRigOpSettings *param_1)

{
  UIKRigDefinition *pUVar1;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->IKRigAsset).field0_0x0.DebugPtr, pUVar1 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->IKRigAsset).field0_0x0 = (param_1->IKRigAsset).field0_0x0;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->ExcludedGoals,&param_1->ExcludedGoals)
  ;
  this->bDrawGoals = param_1->bDrawGoals;
  this->bDrawGoalBoneLocations = param_1->bDrawGoalBoneLocations;
  this->GoalDrawSize = param_1->GoalDrawSize;
  this->GoalDrawThickness = param_1->GoalDrawThickness;
  return this;
}

// CopySettingsAtRuntime @ 14df2dff0

void __thiscall
FIKRetargetRunIKRigOpSettings::CopySettingsAtRuntime
          (FIKRetargetRunIKRigOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  UPackage *pUVar1;
  FName local_res18 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  ::FName::FName(local_res18,"IKRigAsset");
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(FName *)local_18.AllocatorInstance.Data = local_res18[0];
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRunIKRigOpSettings,(UObject *)pUVar1,
                         L"IKRetargetRunIKRigOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.OuterSingleton,param_1,
             this,&local_18);
  if ((FName *)local_18.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetControllerType @ 14df37e00

UClass * __thiscall
FIKRetargetRunIKRigOpSettings::GetControllerType(FIKRetargetRunIKRigOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetRunIKRigController",
               &Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton,
               UIKRetargetRunIKRigController::StaticRegisterNativesUIKRetargetRunIKRigController,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetRunIKRigController>,
               InternalVTableHelperCtorCaller<UIKRetargetRunIKRigController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton;
}

