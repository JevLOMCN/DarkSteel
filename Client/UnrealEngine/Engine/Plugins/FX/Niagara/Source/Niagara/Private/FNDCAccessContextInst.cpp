// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// GetChecked<FNDCAccessContextBase> @ 148e4a210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNDCAccessContextBase * __thiscall
FNDCAccessContextInst::GetChecked<FNDCAccessContextBase>(FNDCAccessContextInst *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FNDCAccessContextBase *pFVar5;
  UScriptStruct *pUVar6;
  
  pFVar5 = (FNDCAccessContextBase *)(this->AccessContext).StructMemory;
  pUVar2 = (this->AccessContext).ScriptStruct.field0_0x0.DebugPtr;
  if ((pFVar5 == (FNDCAccessContextBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNDCAccessContextBase *)(*pcVar3)();
    return pFVar5;
  }
  if ((pUVar2 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNDCAccessContextBase *)(*pcVar3)();
    return pFVar5;
  }
  pUVar6 = FNDCAccessContextBase::StaticStruct();
  if (pUVar6 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      return pFVar5;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (!bVar4) {
    return pFVar5;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FNDCAccessContextBase *)(*pcVar3)();
  return pFVar5;
}

// StaticStruct @ 1490788a0

UScriptStruct * __cdecl FNDCAccessContextInst::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDCAccessContextInst.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCAccessContextInst.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContextInst,(UObject *)pUVar1,
                         L"NDCAccessContextInst");
  }
  return Z_Registration_Info_UScriptStruct_FNDCAccessContextInst.OuterSingleton;
}

// GetChecked<FNDCAccessContext_GameplayBurst> @ 14909a900

FNDCAccessContext_GameplayBurst * __thiscall
FNDCAccessContextInst::GetChecked<FNDCAccessContext_GameplayBurst>(FNDCAccessContextInst *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FNDCAccessContext_GameplayBurst *pFVar5;
  UPackage *pUVar6;
  
  pFVar5 = (FNDCAccessContext_GameplayBurst *)(this->AccessContext).StructMemory;
  pUVar2 = (this->AccessContext).ScriptStruct.field0_0x0.DebugPtr;
  if ((pFVar5 == (FNDCAccessContext_GameplayBurst *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNDCAccessContext_GameplayBurst *)(*pcVar3)();
    return pFVar5;
  }
  if ((pUVar2 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNDCAccessContext_GameplayBurst *)(*pcVar3)();
    return pFVar5;
  }
  if (Z_Registration_Info_UScriptStruct_FNDCAccessContext_GameplayBurst.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCAccessContext_GameplayBurst.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContext_GameplayBurst,(UObject *)pUVar6
                         ,L"NDCAccessContext_GameplayBurst");
    if (Z_Registration_Info_UScriptStruct_FNDCAccessContext_GameplayBurst.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14909a9be;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FNDCAccessContext_GameplayBurst.OuterSingleton)->
               _padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FNDCAccessContext_GameplayBurst.OuterSingleton)->_padding_
     )) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    return pFVar5;
  }
LAB_14909a9be:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (!bVar4) {
    return pFVar5;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FNDCAccessContext_GameplayBurst *)(*pcVar3)();
  return pFVar5;
}

// GetChecked<FNDCAccessContext_MapBase> @ 14909aa00

FNDCAccessContext_MapBase * __thiscall
FNDCAccessContextInst::GetChecked<FNDCAccessContext_MapBase>(FNDCAccessContextInst *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FNDCAccessContext_MapBase *pFVar5;
  UPackage *pUVar6;
  
  pFVar5 = (FNDCAccessContext_MapBase *)(this->AccessContext).StructMemory;
  pUVar2 = (this->AccessContext).ScriptStruct.field0_0x0.DebugPtr;
  if ((pFVar5 == (FNDCAccessContext_MapBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNDCAccessContext_MapBase *)(*pcVar3)();
    return pFVar5;
  }
  if ((pUVar2 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNDCAccessContext_MapBase *)(*pcVar3)();
    return pFVar5;
  }
  if (Z_Registration_Info_UScriptStruct_FNDCAccessContext_MapBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCAccessContext_MapBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContext_MapBase,(UObject *)pUVar6,
                         L"NDCAccessContext_MapBase");
    if (Z_Registration_Info_UScriptStruct_FNDCAccessContext_MapBase.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14909aabe;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FNDCAccessContext_MapBase.OuterSingleton)->
               _padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FNDCAccessContext_MapBase.OuterSingleton)->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    return pFVar5;
  }
LAB_14909aabe:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (!bVar4) {
    return pFVar5;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FNDCAccessContext_MapBase *)(*pcVar3)();
  return pFVar5;
}

// Init @ 149112750

bool __thiscall
FNDCAccessContextInst::Init(FNDCAccessContextInst *this,TNDCAccessContextType param_1)

{
  FInstancedStruct::InitializeAs(&this->AccessContext,param_1.AccessContextStruct,(uchar *)0x0);
  if (((this->AccessContext).StructMemory != (uchar *)0x0) &&
     ((this->AccessContext).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    return true;
  }
  return false;
}

