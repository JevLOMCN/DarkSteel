// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 4

// StaticStruct @ 14deee230

UScriptStruct * __cdecl FIKRetargetCurveRemapOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCurveRemapOpSettings,(UObject *)pUVar1
                         ,L"IKRetargetCurveRemapOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.OuterSingleton;
}

// FIKRetargetCurveRemapOpSettings @ 14df16200

FIKRetargetCurveRemapOpSettings * __thiscall
FIKRetargetCurveRemapOpSettings::FIKRetargetCurveRemapOpSettings
          (FIKRetargetCurveRemapOpSettings *this,FIKRetargetCurveRemapOpSettings *param_1)

{
  TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_> *pTVar1;
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
  this->_padding_ = (longlong)&___7FIKRetargetCurveRemapOpSettings__6B_;
  pTVar1 = &this->CurvesToRemap;
  this->bCopyAllSourceCurves = param_1->bCopyAllSourceCurves;
  this->bRemapCurves = param_1->bRemapCurves;
  piVar2 = &(this->CurvesToRemap).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->CurvesToRemap).ArrayNum;
  _Src = (param_1->CurvesToRemap).AllocatorInstance.Data;
  (this->CurvesToRemap).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

// CopySettingsAtRuntime @ 14df2d810

void __thiscall
FIKRetargetCurveRemapOpSettings::CopySettingsAtRuntime
          (FIKRetargetCurveRemapOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  UPackage *pUVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCurveRemapOpSettings,(UObject *)pUVar1
                         ,L"IKRetargetCurveRemapOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.OuterSingleton,
             param_1,this,&local_18);
  return;
}

// GetControllerType @ 14df37d80

UClass * __thiscall
FIKRetargetCurveRemapOpSettings::GetControllerType(FIKRetargetCurveRemapOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetCurveRemapController",
               &Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton,
               UIKRetargetCurveRemapController::StaticRegisterNativesUIKRetargetCurveRemapController
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetCurveRemapController>,
               InternalVTableHelperCtorCaller<UIKRetargetCurveRemapController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton;
}

