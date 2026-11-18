// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 8

// StaticClass @ 14a86d1e0

UClass * __cdecl UDEPRECATED_ChooserParameterFloat_ContextProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterFloat_ContextProperty",
               &Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty.
                InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ChooserParameterFloat_ContextProperty,0x40,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ChooserParameterFloat_ContextProperty>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ChooserParameterFloat_ContextProperty>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty.InnerSingleton
  ;
}

// UDEPRECATED_ChooserParameterFloat_ContextProperty @ 14a87df00

UDEPRECATED_ChooserParameterFloat_ContextProperty * __thiscall
UDEPRECATED_ChooserParameterFloat_ContextProperty::UDEPRECATED_ChooserParameterFloat_ContextProperty
          (UDEPRECATED_ChooserParameterFloat_ContextProperty *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IChooserParameterFloat__;
  (this->PropertyBindingChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyBindingChain).ArrayNum = 0;
  (this->PropertyBindingChain).ArrayMax = 0;
  return this;
}

// UDEPRECATED_ChooserParameterFloat_ContextProperty @ 14a87df40

UDEPRECATED_ChooserParameterFloat_ContextProperty * __thiscall
UDEPRECATED_ChooserParameterFloat_ContextProperty::UDEPRECATED_ChooserParameterFloat_ContextProperty
          (UDEPRECATED_ChooserParameterFloat_ContextProperty *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IChooserParameterFloat__;
  (this->PropertyBindingChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyBindingChain).ArrayNum = 0;
  (this->PropertyBindingChain).ArrayMax = 0;
  return this;
}

// ~UDEPRECATED_ChooserParameterFloat_ContextProperty @ 14a87ea00

void __thiscall
UDEPRECATED_ChooserParameterFloat_ContextProperty::
~UDEPRECATED_ChooserParameterFloat_ContextProperty
          (UDEPRECATED_ChooserParameterFloat_ContextProperty *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IChooserParameterFloat__;
  pFVar1 = (this->PropertyBindingChain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IChooserParameterFloat__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14a883f90

void __thiscall
UDEPRECATED_ChooserParameterFloat_ContextProperty::ConvertToInstancedStruct
          (UDEPRECATED_ChooserParameterFloat_ContextProperty *this,FInstancedStruct *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  
  if (Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar6 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatContextProperty,(UObject *)pUVar6,
                         L"FloatContextProperty");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton,
             (uchar *)0x0);
  puVar2 = param_1->StructMemory;
  pUVar3 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (puVar2 == (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pUVar3 == (UScriptStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar6 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatContextProperty,(UObject *)pUVar6,
                         L"FloatContextProperty");
    if (Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14a884071;
  }
  else {
LAB_14a884071:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton)->_padding_
    ;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14a8840bb;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14a8840bb:
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar2 + 0x20),
             (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  return;
}

// GetPrivateStaticClass @ 14a88b140

UClass * __cdecl UDEPRECATED_ChooserParameterFloat_ContextProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterFloat_ContextProperty",
               &Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty.
                InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ChooserParameterFloat_ContextProperty,0x40,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ChooserParameterFloat_ContextProperty>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ChooserParameterFloat_ContextProperty>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty.InnerSingleton
  ;
}

// StaticRegisterNativesUDEPRECATED_ChooserParameterFloat_ContextProperty @ 14a88fed0

void __cdecl
UDEPRECATED_ChooserParameterFloat_ContextProperty::
StaticRegisterNativesUDEPRECATED_ChooserParameterFloat_ContextProperty(void)

{
  return;
}

// _getUObject @ 14a892dd0

UObject * __thiscall
UDEPRECATED_ChooserParameterFloat_ContextProperty::_getUObject
          (UDEPRECATED_ChooserParameterFloat_ContextProperty *this)

{
  return (UObject *)&this[-1]._padding_;
}

