// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 17

// StaticClass @ 14d528310

UClass * __cdecl UStateTreeSchema::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeSchema.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeSchema",
               &Z_Registration_Info_UClass_UStateTreeSchema.InnerSingleton,
               StaticRegisterNativesUStateTreeSchema,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UStateTreeSchema>,
               InternalVTableHelperCtorCaller<UStateTreeSchema>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeSchema.InnerSingleton;
}

// UStateTreeSchema @ 14d52cda0

UStateTreeSchema * __thiscall
UStateTreeSchema::UStateTreeSchema(UStateTreeSchema *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UStateTreeSchema__6B_;
  return this;
}

// UStateTreeSchema @ 14d52cdd0

UStateTreeSchema * __thiscall
UStateTreeSchema::UStateTreeSchema(UStateTreeSchema *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UStateTreeSchema__6B_;
  return this;
}

// ~UStateTreeSchema @ 14d52ce80

void __thiscall UStateTreeSchema::~UStateTreeSchema(UStateTreeSchema *this)

{
  *(undefined ***)this = &___7UStateTreeSchema__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetContextDataDescs @ 14d52fdc0

TArrayView<FStateTreeExternalDataDesc_const_,int> * __thiscall
UStateTreeSchema::GetContextDataDescs
          (UStateTreeSchema *this,
          TArrayView<FStateTreeExternalDataDesc_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FStateTreeExternalDataDesc *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetGlobalParameterDataType @ 14d530450

EStateTreeParameterDataType __thiscall
UStateTreeSchema::GetGlobalParameterDataType(UStateTreeSchema *this)

{
  return GlobalParameterData;
}

// GetPrivateStaticClass @ 14d530d80

UClass * __cdecl UStateTreeSchema::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeSchema.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeSchema",
               &Z_Registration_Info_UClass_UStateTreeSchema.InnerSingleton,
               StaticRegisterNativesUStateTreeSchema,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UStateTreeSchema>,
               InternalVTableHelperCtorCaller<UStateTreeSchema>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeSchema.InnerSingleton;
}

// GetStateSelectionRules @ 14d5310f0

EStateTreeStateSelectionRules __thiscall
UStateTreeSchema::GetStateSelectionRules(UStateTreeSchema *this)

{
  EStateTreeStateSelectionRules EVar1;
  
  EVar1 = (EStateTreeStateSelectionRules)
          UE::StateTree::Private::bCompletedTransitionStatesCreateNewStates;
  if (UE::StateTree::Private::bCompletedStateBeforeTransitionSourceFailsTransition) {
    EVar1 = EVar1 | CompletedStateBeforeTransitionSourceFailsTransition;
  }
  return EVar1;
}

// IsChildOfBlueprintBase @ 14d531ec0

bool __cdecl UStateTreeSchema::IsChildOfBlueprintBase(UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UStateTreeNodeBlueprintBase_NoRegister();
  if (pUVar2 != (UClass *)0x0) {
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) == &pUVar2->_padding_
       )) {
      return true;
    }
  }
  return false;
}

// IsClassAllowed @ 14d531f10

bool __thiscall UStateTreeSchema::IsClassAllowed(UStateTreeSchema *this,UClass *param_1)

{
  return false;
}

// IsExternalItemAllowed @ 14d531f20

bool __thiscall UStateTreeSchema::IsExternalItemAllowed(UStateTreeSchema *this,UStruct *param_1)

{
  return false;
}

// IsScheduledTickAllowed @ 14d5320a0

bool __thiscall UStateTreeSchema::IsScheduledTickAllowed(UStateTreeSchema *this)

{
  return false;
}

// IsStateSelectionAllowed @ 14d5320b0

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

bool __thiscall
UStateTreeSchema::IsStateSelectionAllowed
          (UStateTreeSchema *this,EStateTreeStateSelectionBehavior param_1)

{
  return true;
}

// IsStateTypeAllowed @ 14d5320c0

bool __thiscall
UStateTreeSchema::IsStateTypeAllowed(UStateTreeSchema *this,EStateTreeStateType param_1)

{
  return true;
}

// IsStructAllowed @ 14d5320d0

bool __thiscall UStateTreeSchema::IsStructAllowed(UStateTreeSchema *this,UScriptStruct *param_1)

{
  return false;
}

// Link @ 14d532220

bool __thiscall UStateTreeSchema::Link(UStateTreeSchema *this,FStateTreeLinker *param_1)

{
  return true;
}

// StaticRegisterNativesUStateTreeSchema @ 14d534090

void __cdecl UStateTreeSchema::StaticRegisterNativesUStateTreeSchema(void)

{
  return;
}

