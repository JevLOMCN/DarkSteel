// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 8

// StaticClass @ 14a871860

UClass * __cdecl UDEPRECATED_ChooserParameterBool_ContextProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterBool_ContextProperty",
               &Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty.
                InnerSingleton,StaticRegisterNativesUDEPRECATED_ChooserParameterBool_ContextProperty
               ,0x40,8,CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ChooserParameterBool_ContextProperty>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ChooserParameterBool_ContextProperty>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty.InnerSingleton;
}

// UDEPRECATED_ChooserParameterBool_ContextProperty @ 14a87de00

UDEPRECATED_ChooserParameterBool_ContextProperty * __thiscall
UDEPRECATED_ChooserParameterBool_ContextProperty::UDEPRECATED_ChooserParameterBool_ContextProperty
          (UDEPRECATED_ChooserParameterBool_ContextProperty *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IChooserParameterBool__;
  (this->PropertyBindingChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyBindingChain).ArrayNum = 0;
  (this->PropertyBindingChain).ArrayMax = 0;
  return this;
}

// UDEPRECATED_ChooserParameterBool_ContextProperty @ 14a87de40

UDEPRECATED_ChooserParameterBool_ContextProperty * __thiscall
UDEPRECATED_ChooserParameterBool_ContextProperty::UDEPRECATED_ChooserParameterBool_ContextProperty
          (UDEPRECATED_ChooserParameterBool_ContextProperty *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IChooserParameterBool__;
  (this->PropertyBindingChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyBindingChain).ArrayNum = 0;
  (this->PropertyBindingChain).ArrayMax = 0;
  return this;
}

// ~UDEPRECATED_ChooserParameterBool_ContextProperty @ 14a87e960

void __thiscall
UDEPRECATED_ChooserParameterBool_ContextProperty::~UDEPRECATED_ChooserParameterBool_ContextProperty
          (UDEPRECATED_ChooserParameterBool_ContextProperty *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IChooserParameterBool__;
  pFVar1 = (this->PropertyBindingChain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IChooserParameterBool__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14a883cf0

void __thiscall
UDEPRECATED_ChooserParameterBool_ContextProperty::ConvertToInstancedStruct
          (UDEPRECATED_ChooserParameterBool_ContextProperty *this,FInstancedStruct *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  
  if (Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolContextProperty,(UObject *)pUVar6,
                         L"BoolContextProperty");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton,
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
  if (Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolContextProperty,(UObject *)pUVar6,
                         L"BoolContextProperty");
    if (Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14a883dd1;
  }
  else {
LAB_14a883dd1:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14a883e1b;
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
LAB_14a883e1b:
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar2 + 0x20),
             (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  return;
}

// GetPrivateStaticClass @ 14a88afe0

UClass * __cdecl UDEPRECATED_ChooserParameterBool_ContextProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterBool_ContextProperty",
               &Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty.
                InnerSingleton,StaticRegisterNativesUDEPRECATED_ChooserParameterBool_ContextProperty
               ,0x40,8,CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ChooserParameterBool_ContextProperty>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ChooserParameterBool_ContextProperty>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_ChooserParameterBool_ContextProperty @ 14a88feb0

void __cdecl
UDEPRECATED_ChooserParameterBool_ContextProperty::
StaticRegisterNativesUDEPRECATED_ChooserParameterBool_ContextProperty(void)

{
  return;
}

// _getUObject @ 14a892db0

UObject * __thiscall
UDEPRECATED_ChooserParameterBool_ContextProperty::_getUObject
          (UDEPRECATED_ChooserParameterBool_ContextProperty *this)

{
  return (UObject *)&this[-1]._padding_;
}

