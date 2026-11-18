// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// GetMutable<FChooserParameterBase> @ 14a877750

FChooserParameterBase * __thiscall
FInstancedStruct::GetMutable<FChooserParameterBase>(FInstancedStruct *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FChooserParameterBase *pFVar5;
  UPackage *pUVar6;
  
  pFVar5 = (FChooserParameterBase *)this->StructMemory;
  pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((pFVar5 == (FChooserParameterBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FChooserParameterBase *)(*pcVar3)();
    return pFVar5;
  }
  if ((pUVar2 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FChooserParameterBase *)(*pcVar3)();
    return pFVar5;
  }
  if (Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar6 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterBase,(UObject *)pUVar6,
                         L"ChooserParameterBase");
    if (Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14a87780e;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton)->_padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton)->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    return pFVar5;
  }
LAB_14a87780e:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (!bVar4) {
    return pFVar5;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FChooserParameterBase *)(*pcVar3)();
  return pFVar5;
}

// GetMutable<FEvaluateChooser> @ 14a877850

FEvaluateChooser * __thiscall FInstancedStruct::GetMutable<FEvaluateChooser>(FInstancedStruct *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FEvaluateChooser *pFVar5;
  UPackage *pUVar6;
  
  pFVar5 = (FEvaluateChooser *)this->StructMemory;
  pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((pFVar5 == (FEvaluateChooser *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FEvaluateChooser *)(*pcVar3)();
    return pFVar5;
  }
  if ((pUVar2 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FEvaluateChooser *)(*pcVar3)();
    return pFVar5;
  }
  if (Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEvaluateChooser,(UObject *)pUVar6,
                         L"EvaluateChooser");
    if (Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_14a87790e;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton)->_padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton)->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    return pFVar5;
  }
LAB_14a87790e:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (!bVar4) {
    return pFVar5;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FEvaluateChooser *)(*pcVar3)();
  return pFVar5;
}

// GetMutablePtr<FChooserParameterBase> @ 14a877950

/* WARNING: Removing unreachable block (ram,0x00014a8779d3) */

FChooserParameterBase * __thiscall
FInstancedStruct::GetMutablePtr<FChooserParameterBase>(FInstancedStruct *this)

{
  int iVar1;
  FChooserParameterBase *pFVar2;
  UScriptStruct *pUVar3;
  UPackage *pUVar4;
  
  pFVar2 = (FChooserParameterBase *)this->StructMemory;
  if ((pFVar2 == (FChooserParameterBase *)0x0) ||
     (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 == (UScriptStruct *)0x0)) {
    return (FChooserParameterBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar4 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterBase,(UObject *)pUVar4,
                         L"ChooserParameterBase");
    if (Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return (FChooserParameterBase *)0x0;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton)->_padding_;
  if ((iVar1 <= (int)pUVar3->_padding_) &&
     ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton)->_padding_)) {
    return pFVar2;
  }
  return (FChooserParameterBase *)0x0;
}

// GetPtr<FContextObjectTypeClass> @ 14a877ad0

FContextObjectTypeClass * __thiscall
FInstancedStruct::GetPtr<FContextObjectTypeClass>(FInstancedStruct *this)

{
  int iVar1;
  FContextObjectTypeClass *pFVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  UPackage *pUVar5;
  
  pFVar2 = (FContextObjectTypeClass *)this->StructMemory;
  if ((pFVar2 == (FContextObjectTypeClass *)0x0) ||
     (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 == (UScriptStruct *)0x0)) {
    return (FContextObjectTypeClass *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FContextObjectTypeClass.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FContextObjectTypeClass.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FContextObjectTypeClass,(UObject *)pUVar5,
                         L"ContextObjectTypeClass");
  }
  if (pUVar3 != Z_Registration_Info_UScriptStruct_FContextObjectTypeClass.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FContextObjectTypeClass.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FContextObjectTypeClass.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FContextObjectTypeClass,(UObject *)pUVar5,
                           L"ContextObjectTypeClass");
      if (Z_Registration_Info_UScriptStruct_FContextObjectTypeClass.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FContextObjectTypeClass *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FContextObjectTypeClass.OuterSingleton)->
                 _padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FContextObjectTypeClass.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return (FContextObjectTypeClass *)0x0;
    }
  }
  return pFVar2;
}

// GetPtr<FContextObjectTypeStruct> @ 14a877ba0

FContextObjectTypeStruct * __thiscall
FInstancedStruct::GetPtr<FContextObjectTypeStruct>(FInstancedStruct *this)

{
  int iVar1;
  FContextObjectTypeStruct *pFVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  UPackage *pUVar5;
  
  pFVar2 = (FContextObjectTypeStruct *)this->StructMemory;
  if ((pFVar2 == (FContextObjectTypeStruct *)0x0) ||
     (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 == (UScriptStruct *)0x0)) {
    return (FContextObjectTypeStruct *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FContextObjectTypeStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FContextObjectTypeStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FContextObjectTypeStruct,(UObject *)pUVar5,
                         L"ContextObjectTypeStruct");
  }
  if (pUVar3 != Z_Registration_Info_UScriptStruct_FContextObjectTypeStruct.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FContextObjectTypeStruct.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FContextObjectTypeStruct.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FContextObjectTypeStruct,(UObject *)pUVar5,
                           L"ContextObjectTypeStruct");
      if (Z_Registration_Info_UScriptStruct_FContextObjectTypeStruct.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FContextObjectTypeStruct *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FContextObjectTypeStruct.OuterSingleton)->
                 _padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FContextObjectTypeStruct.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return (FContextObjectTypeStruct *)0x0;
    }
  }
  return pFVar2;
}

// GetPtr<FObjectChooserBase> @ 14a877c70

FObjectChooserBase * __thiscall FInstancedStruct::GetPtr<FObjectChooserBase>(FInstancedStruct *this)

{
  int iVar1;
  FObjectChooserBase *pFVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  UPackage *pUVar5;
  
  pFVar2 = (FObjectChooserBase *)this->StructMemory;
  if ((pFVar2 == (FObjectChooserBase *)0x0) ||
     (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 == (UScriptStruct *)0x0)) {
    return (FObjectChooserBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FObjectChooserBase,(UObject *)pUVar5,
                         L"ObjectChooserBase");
  }
  if (pUVar3 != Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar5 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FObjectChooserBase,(UObject *)pUVar5,
                           L"ObjectChooserBase");
      if (Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FObjectChooserBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return (FObjectChooserBase *)0x0;
    }
  }
  return pFVar2;
}

