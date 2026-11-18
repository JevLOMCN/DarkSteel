// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 8

// StaticClass @ 14a873b60

UClass * __cdecl UDEPRECATED_ObjectChooser_EvaluateChooser::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ObjectChooser_EvaluateChooser",
               &Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ObjectChooser_EvaluateChooser,0x38,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ObjectChooser_EvaluateChooser>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ObjectChooser_EvaluateChooser>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser.InnerSingleton;
}

// UDEPRECATED_ObjectChooser_EvaluateChooser @ 14a87e080

UDEPRECATED_ObjectChooser_EvaluateChooser * __thiscall
UDEPRECATED_ObjectChooser_EvaluateChooser::UDEPRECATED_ObjectChooser_EvaluateChooser
          (UDEPRECATED_ObjectChooser_EvaluateChooser *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Chooser).field0_0x0.DebugPtr = (UChooserTable *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectChooser__;
  return this;
}

// UDEPRECATED_ObjectChooser_EvaluateChooser @ 14a87e0c0

UDEPRECATED_ObjectChooser_EvaluateChooser * __thiscall
UDEPRECATED_ObjectChooser_EvaluateChooser::UDEPRECATED_ObjectChooser_EvaluateChooser
          (UDEPRECATED_ObjectChooser_EvaluateChooser *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Chooser).field0_0x0.DebugPtr = (UChooserTable *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectChooser__;
  return this;
}

// ~UDEPRECATED_ObjectChooser_EvaluateChooser @ 14a87eac0

void __thiscall
UDEPRECATED_ObjectChooser_EvaluateChooser::~UDEPRECATED_ObjectChooser_EvaluateChooser
          (UDEPRECATED_ObjectChooser_EvaluateChooser *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IObjectChooser__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14a8843b0

void __thiscall
UDEPRECATED_ObjectChooser_EvaluateChooser::ConvertToInstancedStruct
          (UDEPRECATED_ObjectChooser_EvaluateChooser *this,FInstancedStruct *param_1)

{
  UChooserTable *pUVar1;
  UPackage *pUVar2;
  FEvaluateChooser *pFVar3;
  
  if (Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEvaluateChooser,(UObject *)pUVar2,
                         L"EvaluateChooser");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton,(uchar *)0x0)
  ;
  pFVar3 = FInstancedStruct::GetMutable<FEvaluateChooser>(param_1);
  pUVar1 = (UChooserTable *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UChooserTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    (pFVar3->Chooser).field0_0x0 = (TObjectPtr<UChooserTable>_u_0)this->_padding_;
    return;
  }
  (pFVar3->Chooser).field0_0x0.DebugPtr = pUVar1;
  return;
}

// GetPrivateStaticClass @ 14a88b350

UClass * __cdecl UDEPRECATED_ObjectChooser_EvaluateChooser::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ObjectChooser_EvaluateChooser",
               &Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ObjectChooser_EvaluateChooser,0x38,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ObjectChooser_EvaluateChooser>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ObjectChooser_EvaluateChooser>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_ObjectChooser_EvaluateChooser @ 14a88ff00

void __cdecl
UDEPRECATED_ObjectChooser_EvaluateChooser::
StaticRegisterNativesUDEPRECATED_ObjectChooser_EvaluateChooser(void)

{
  return;
}

// _getUObject @ 14a892e00

UObject * __thiscall
UDEPRECATED_ObjectChooser_EvaluateChooser::_getUObject
          (UDEPRECATED_ObjectChooser_EvaluateChooser *this)

{
  return (UObject *)&this[-1]._padding_;
}

