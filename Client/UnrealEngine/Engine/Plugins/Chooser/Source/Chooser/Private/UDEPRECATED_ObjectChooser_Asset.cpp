// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 8

// StaticClass @ 14a875370

UClass * __cdecl UDEPRECATED_ObjectChooser_Asset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_Asset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ObjectChooser_Asset",
               &Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_Asset.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ObjectChooser_Asset,0x38,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ObjectChooser_Asset>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ObjectChooser_Asset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_Asset.InnerSingleton;
}

// UDEPRECATED_ObjectChooser_Asset @ 14a87e000

UDEPRECATED_ObjectChooser_Asset * __thiscall
UDEPRECATED_ObjectChooser_Asset::UDEPRECATED_ObjectChooser_Asset
          (UDEPRECATED_ObjectChooser_Asset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Asset).field0_0x0.DebugPtr = (UObject *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectChooser__;
  return this;
}

// UDEPRECATED_ObjectChooser_Asset @ 14a87e040

UDEPRECATED_ObjectChooser_Asset * __thiscall
UDEPRECATED_ObjectChooser_Asset::UDEPRECATED_ObjectChooser_Asset
          (UDEPRECATED_ObjectChooser_Asset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Asset).field0_0x0.DebugPtr = (UObject *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectChooser__;
  return this;
}

// ~UDEPRECATED_ObjectChooser_Asset @ 14a87eaa0

void __thiscall
UDEPRECATED_ObjectChooser_Asset::~UDEPRECATED_ObjectChooser_Asset
          (UDEPRECATED_ObjectChooser_Asset *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IObjectChooser__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14a884230

void __thiscall
UDEPRECATED_ObjectChooser_Asset::ConvertToInstancedStruct
          (UDEPRECATED_ObjectChooser_Asset *this,FInstancedStruct *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  
  if (Z_Registration_Info_UScriptStruct_FAssetChooser.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FAssetChooser.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetChooser,(UObject *)pUVar6,L"AssetChooser");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FAssetChooser.OuterSingleton,(uchar *)0x0);
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
  if (Z_Registration_Info_UScriptStruct_FAssetChooser.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FAssetChooser.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetChooser,(UObject *)pUVar6,L"AssetChooser");
    if (Z_Registration_Info_UScriptStruct_FAssetChooser.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14a884311;
  }
  else {
LAB_14a884311:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAssetChooser.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAssetChooser.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14a88435b;
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
LAB_14a88435b:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UObject *)this->_padding_ == (UObject *)0x0) {
      puVar2[8] = '\0';
      puVar2[9] = '\0';
      puVar2[10] = '\0';
      puVar2[0xb] = '\0';
      puVar2[0xc] = '\0';
      puVar2[0xd] = '\0';
      puVar2[0xe] = '\0';
      puVar2[0xf] = '\0';
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this->_padding_);
  }
  *(longlong *)(puVar2 + 8) = this->_padding_;
  return;
}

// GetPrivateStaticClass @ 14a88b2a0

UClass * __cdecl UDEPRECATED_ObjectChooser_Asset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_Asset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ObjectChooser_Asset",
               &Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_Asset.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ObjectChooser_Asset,0x38,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ObjectChooser_Asset>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ObjectChooser_Asset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_Asset.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_ObjectChooser_Asset @ 14a88fef0

void __cdecl
UDEPRECATED_ObjectChooser_Asset::StaticRegisterNativesUDEPRECATED_ObjectChooser_Asset(void)

{
  return;
}

// _getUObject @ 14a892df0

UObject * __thiscall
UDEPRECATED_ObjectChooser_Asset::_getUObject(UDEPRECATED_ObjectChooser_Asset *this)

{
  return (UObject *)&this[-1]._padding_;
}

