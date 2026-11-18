// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cbfef50

UClass * __cdecl UDynamicSculptToolActions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicSculptToolActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DynamicSculptToolActions",
               &Z_Registration_Info_UClass_UDynamicSculptToolActions.InnerSingleton,
               StaticRegisterNativesUDynamicSculptToolActions,0xb8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDynamicSculptToolActions>,
               InternalVTableHelperCtorCaller<UDynamicSculptToolActions>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicSculptToolActions.InnerSingleton;
}

// UDynamicSculptToolActions @ 14cc1ef20

UDynamicSculptToolActions * __thiscall
UDynamicSculptToolActions::UDynamicSculptToolActions
          (UDynamicSculptToolActions *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UDynamicSculptToolActions__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDynamicSculptToolActions @ 14cc1ef50

UDynamicSculptToolActions * __thiscall
UDynamicSculptToolActions::UDynamicSculptToolActions
          (UDynamicSculptToolActions *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UDynamicSculptToolActions__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDynamicSculptToolActions @ 14cc230c0

void __thiscall
UDynamicSculptToolActions::~UDynamicSculptToolActions(UDynamicSculptToolActions *this)

{
  this->_padding_ = (longlong)&___7UDynamicSculptToolActions__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// DiscardAttributes @ 14cc53370

void __thiscall UDynamicSculptToolActions::DiscardAttributes(UDynamicSculptToolActions *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ParentTool).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014cc53391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x420))(pUVar1,*(code **)(*(longlong *)pUVar1 + 0x420));
  return;
}

// GetPrivateStaticClass @ 14cc5cd70

UClass * __cdecl UDynamicSculptToolActions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicSculptToolActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DynamicSculptToolActions",
               &Z_Registration_Info_UClass_UDynamicSculptToolActions.InnerSingleton,
               StaticRegisterNativesUDynamicSculptToolActions,0xb8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDynamicSculptToolActions>,
               InternalVTableHelperCtorCaller<UDynamicSculptToolActions>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicSculptToolActions.InnerSingleton;
}

// StaticRegisterNativesUDynamicSculptToolActions @ 14cc82470

void __cdecl UDynamicSculptToolActions::StaticRegisterNativesUDynamicSculptToolActions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDynamicSculptToolActions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDiscardAttributes @ 14cc8aa70

void __cdecl
UDynamicSculptToolActions::execDiscardAttributes(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8aaa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x420))(pUVar1,*(code **)(*(longlong *)pUVar1 + 0x420));
  return;
}

