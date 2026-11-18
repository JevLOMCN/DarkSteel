// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 13

// StaticStruct @ 1468dd310

UScriptStruct * __cdecl FDynamicPropertyPath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDynamicPropertyPath.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FDynamicPropertyPath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDynamicPropertyPath,(UObject *)pUVar1,
                         L"DynamicPropertyPath");
  }
  return Z_Registration_Info_UScriptStruct_FDynamicPropertyPath.OuterSingleton;
}

// GetValue<unsigned_char> @ 1468ef400

bool __thiscall
FDynamicPropertyPath::GetValue<unsigned_char>
          (FDynamicPropertyPath *this,UObject *param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FProperty *local_res10;
  FPropertyPathResolver local_28;
  uchar *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_E_PropertyPathHelpersInternal__6B_;
    local_18 = &local_res10;
    local_20 = param_2;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath
                      (param_1,(FCachedPropertyPath *)this,&local_28);
    return bVar2;
  }
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
  if (pUVar5 != (UFunction *)0x0) {
    pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<unsigned_char,UObject>::
            CallGetterFunction(param_1,pUVar5,param_2);
    return bVar2;
  }
  pvVar6 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this);
  if (pvVar6 != (void *)0x0) {
    bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<unsigned_char>::GetValue
                      ((FCachedPropertyPath *)this,param_2,&local_res10);
    return bVar2;
  }
  return false;
}

// GetValue<int> @ 1468efc80

bool __thiscall
FDynamicPropertyPath::GetValue<int>(FDynamicPropertyPath *this,UObject *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FProperty *local_res10;
  FPropertyPathResolver local_28;
  int *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_H_PropertyPathHelpersInternal__6B_;
    local_18 = &local_res10;
    local_20 = param_2;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath
                      (param_1,(FCachedPropertyPath *)this,&local_28);
    return bVar2;
  }
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
  if (pUVar5 != (UFunction *)0x0) {
    pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<int,UObject>::CallGetterFunction
                      (param_1,pUVar5,param_2);
    return bVar2;
  }
  pvVar6 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this);
  if (pvVar6 != (void *)0x0) {
    bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<int>::GetValue
                      ((FCachedPropertyPath *)this,param_2,&local_res10);
    return bVar2;
  }
  return false;
}

// GetValue<float> @ 1468efe20

bool __thiscall
FDynamicPropertyPath::GetValue<float>(FDynamicPropertyPath *this,UObject *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FProperty *local_res10;
  FPropertyPathResolver local_28;
  float *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_M_PropertyPathHelpersInternal__6B_;
    local_18 = &local_res10;
    local_20 = param_2;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath
                      (param_1,(FCachedPropertyPath *)this,&local_28);
    return bVar2;
  }
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
  if (pUVar5 != (UFunction *)0x0) {
    pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<float,UObject>::
            CallGetterFunction(param_1,pUVar5,param_2);
    return bVar2;
  }
  pvVar6 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this);
  if (pvVar6 != (void *)0x0) {
    bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<float>::GetValue
                      ((FCachedPropertyPath *)this,param_2,&local_res10);
    return bVar2;
  }
  return false;
}

// GetValue<UObject_*> @ 1468f05c0

bool __thiscall
FDynamicPropertyPath::GetValue<UObject_*>
          (FDynamicPropertyPath *this,UObject *param_1,UObject **param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FProperty *local_res10;
  FPropertyPathResolver local_28;
  UObject **local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_PEAVUObject___PropertyPathHelpersInternal__6B_;
    local_18 = &local_res10;
    local_20 = param_2;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath
                      (param_1,(FCachedPropertyPath *)this,&local_28);
    return bVar2;
  }
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
  if (pUVar5 != (UFunction *)0x0) {
    pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<UObject_*,UObject>::
            CallGetterFunction(param_1,pUVar5,param_2);
    return bVar2;
  }
  pvVar6 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this);
  if (pvVar6 != (void *)0x0) {
    bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<UObject_*>::GetValue
                      ((FCachedPropertyPath *)this,param_2,&local_res10);
    return bVar2;
  }
  return false;
}

// GetValue<FLinearColor> @ 1468f0760

bool __thiscall
FDynamicPropertyPath::GetValue<FLinearColor>
          (FDynamicPropertyPath *this,UObject *param_1,FLinearColor *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FProperty *local_res10;
  FPropertyPathResolver local_28;
  FLinearColor *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_UFLinearColor___PropertyPathHelpersInternal__6B_;
    local_18 = &local_res10;
    local_20 = param_2;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath
                      (param_1,(FCachedPropertyPath *)this,&local_28);
    return bVar2;
  }
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
  if (pUVar5 != (UFunction *)0x0) {
    pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FLinearColor,UObject>::
            CallGetterFunction(param_1,pUVar5,param_2);
    return bVar2;
  }
  pvVar6 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this);
  if (pvVar6 != (void *)0x0) {
    bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FLinearColor>::GetValue
                      ((FCachedPropertyPath *)this,param_2,&local_res10);
    return bVar2;
  }
  return false;
}

// GetValue<FSlateColor> @ 1468f16a0

bool __thiscall
FDynamicPropertyPath::GetValue<FSlateColor>
          (FDynamicPropertyPath *this,UObject *param_1,FSlateColor *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FProperty *local_res10;
  FPropertyPathResolver local_28;
  FSlateColor *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_UFSlateColor___PropertyPathHelpersInternal__6B_;
    local_18 = &local_res10;
    local_20 = param_2;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath
                      (param_1,(FCachedPropertyPath *)this,&local_28);
    return bVar2;
  }
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
  if (pUVar5 != (UFunction *)0x0) {
    pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FSlateColor,UObject>::
            CallGetterFunction(param_1,pUVar5,param_2);
    return bVar2;
  }
  pvVar6 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this);
  if (pvVar6 != (void *)0x0) {
    bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FSlateColor>::GetValue
                      ((FCachedPropertyPath *)this,param_2,&local_res10);
    return bVar2;
  }
  return false;
}

// GetValue<FString> @ 1468f1ed0

bool __thiscall
FDynamicPropertyPath::GetValue<FString>
          (FDynamicPropertyPath *this,UObject *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FProperty *local_res10;
  FPropertyPathResolver local_28;
  FString *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_VFString___PropertyPathHelpersInternal__6B_;
    local_18 = &local_res10;
    local_20 = param_2;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath
                      (param_1,(FCachedPropertyPath *)this,&local_28);
    return bVar2;
  }
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
  if (pUVar5 != (UFunction *)0x0) {
    pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FString,UObject>::
            CallGetterFunction(param_1,pUVar5,param_2);
    return bVar2;
  }
  pvVar6 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this);
  if (pvVar6 != (void *)0x0) {
    bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FString>::GetValue
                      ((FCachedPropertyPath *)this,param_2,&local_res10);
    return bVar2;
  }
  return false;
}

// GetValue<FText> @ 1468f2070

bool __thiscall
FDynamicPropertyPath::GetValue<FText>(FDynamicPropertyPath *this,UObject *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FProperty *local_res10;
  FPropertyPathResolver local_28;
  FText *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_VFText___PropertyPathHelpersInternal__6B_;
    local_18 = &local_res10;
    local_20 = param_2;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath
                      (param_1,(FCachedPropertyPath *)this,&local_28);
    return bVar2;
  }
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
  if (pUVar5 != (UFunction *)0x0) {
    pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FText,UObject>::
            CallGetterFunction(param_1,pUVar5,param_2);
    return bVar2;
  }
  pvVar6 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this);
  if (pvVar6 != (void *)0x0) {
    bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FText>::GetValue
                      ((FCachedPropertyPath *)this,param_2,&local_res10);
    return bVar2;
  }
  return false;
}

// GetValue<bool> @ 1468f2810

bool __thiscall
FDynamicPropertyPath::GetValue<bool>(FDynamicPropertyPath *this,UObject *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FProperty *local_res10;
  FPropertyPathResolver local_28;
  bool *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver__N_PropertyPathHelpersInternal__6B_;
    local_18 = &local_res10;
    local_20 = param_2;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath
                      (param_1,(FCachedPropertyPath *)this,&local_28);
    return bVar2;
  }
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
  if (pUVar5 != (UFunction *)0x0) {
    pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<bool,UObject>::CallGetterFunction
                      (param_1,pUVar5,param_2);
    return bVar2;
  }
  pvVar6 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this);
  if (pvVar6 != (void *)0x0) {
    bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<bool>::GetValue
                      ((FCachedPropertyPath *)this,param_2,&local_res10);
    return bVar2;
  }
  return false;
}

// FDynamicPropertyPath @ 1468fe1e0

FDynamicPropertyPath * __thiscall
FDynamicPropertyPath::FDynamicPropertyPath
          (FDynamicPropertyPath *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)this,param_1);
  return this;
}

// FDynamicPropertyPath @ 1468fe200

FDynamicPropertyPath * __thiscall
FDynamicPropertyPath::FDynamicPropertyPath(FDynamicPropertyPath *this,FString *param_1)

{
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)this,param_1);
  return this;
}

// FDynamicPropertyPath @ 1468fe220

FDynamicPropertyPath * __thiscall
FDynamicPropertyPath::FDynamicPropertyPath(FDynamicPropertyPath *this)

{
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)this);
  return this;
}

