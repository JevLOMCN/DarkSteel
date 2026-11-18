// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 7

// StaticClass @ 14a874b20

UClass * __cdecl UDEPRECATED_ChooserColumnEnum::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserColumnEnum",
               &Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnEnum.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ChooserColumnEnum,0x50,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ChooserColumnEnum>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ChooserColumnEnum>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnEnum.InnerSingleton;
}

// UDEPRECATED_ChooserColumnEnum @ 14a87dd10

UDEPRECATED_ChooserColumnEnum * __thiscall
UDEPRECATED_ChooserColumnEnum::UDEPRECATED_ChooserColumnEnum
          (UDEPRECATED_ChooserColumnEnum *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IChooserColumn__;
  *(undefined8 *)&this->InputValue = 0;
  *(undefined8 *)&(this->InputValue).field_0x8 = 0;
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  return this;
}

// ~UDEPRECATED_ChooserColumnEnum @ 14a87e860

void __thiscall
UDEPRECATED_ChooserColumnEnum::~UDEPRECATED_ChooserColumnEnum(UDEPRECATED_ChooserColumnEnum *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IChooserColumn__;
  pFVar1 = (this->RowValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IChooserColumn__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14a8838a0

void __thiscall
UDEPRECATED_ChooserColumnEnum::ConvertToInstancedStruct
          (UDEPRECATED_ChooserColumnEnum *this,FInstancedStruct *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  UPackage *pUVar7;
  
  if (Z_Registration_Info_UScriptStruct_FEnumColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FEnumColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnumColumn,(UObject *)pUVar7,L"EnumColumn");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FEnumColumn.OuterSingleton,(uchar *)0x0);
  puVar2 = param_1->StructMemory;
  pUVar3 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (puVar2 == (uchar *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pUVar3 == (UScriptStruct *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FEnumColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FEnumColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnumColumn,(UObject *)pUVar7,L"EnumColumn");
    if (Z_Registration_Info_UScriptStruct_FEnumColumn.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14a883981;
  }
  else {
LAB_14a883981:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FEnumColumn.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FEnumColumn.OuterSingleton)->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14a8839cb;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14a8839cb:
  if ((this->_padding_ != 0) && (plVar4 = (longlong *)this->_padding_, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4,puVar2 + 8);
  }
  TArray<FChooserEnumRowData,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FChooserEnumRowData,TSizedDefaultAllocator<32>_> *)(puVar2 + 0x18),
             (TArray<FChooserEnumRowData,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  return;
}

// GetPrivateStaticClass @ 14a88add0

UClass * __cdecl UDEPRECATED_ChooserColumnEnum::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserColumnEnum",
               &Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnEnum.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ChooserColumnEnum,0x50,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ChooserColumnEnum>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ChooserColumnEnum>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnEnum.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_ChooserColumnEnum @ 14a88fe80

void __cdecl UDEPRECATED_ChooserColumnEnum::StaticRegisterNativesUDEPRECATED_ChooserColumnEnum(void)

{
  return;
}

// _getUObject @ 14a892d80

UObject * __thiscall UDEPRECATED_ChooserColumnEnum::_getUObject(UDEPRECATED_ChooserColumnEnum *this)

{
  return (UObject *)&this[-1]._padding_;
}

