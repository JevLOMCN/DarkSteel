// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 14

// StaticClass @ 14cf255a0

UClass * __cdecl UProxyTableFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyTableFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ProxyTableFunctionLibrary",
               &Z_Registration_Info_UClass_UProxyTableFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUProxyTableFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UProxyTableFunctionLibrary>,
               InternalVTableHelperCtorCaller<UProxyTableFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyTableFunctionLibrary.InnerSingleton;
}

// UProxyTableFunctionLibrary @ 14cf268b0

UProxyTableFunctionLibrary * __thiscall
UProxyTableFunctionLibrary::UProxyTableFunctionLibrary
          (UProxyTableFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UProxyTableFunctionLibrary__6B_;
  return this;
}

// UProxyTableFunctionLibrary @ 14cf268e0

UProxyTableFunctionLibrary * __thiscall
UProxyTableFunctionLibrary::UProxyTableFunctionLibrary
          (UProxyTableFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UProxyTableFunctionLibrary__6B_;
  return this;
}

// ~UProxyTableFunctionLibrary @ 14cf26a00

void __thiscall
UProxyTableFunctionLibrary::~UProxyTableFunctionLibrary(UProxyTableFunctionLibrary *this)

{
  *(undefined ***)this = &___7UProxyTableFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// EvaluateProxyAsset @ 14cf27090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UObject * __cdecl
UProxyTableFunctionLibrary::EvaluateProxyAsset
          (UObject *param_1,UProxyAsset *param_2,TSubclassOf<UObject> param_3)

{
  undefined1 auStack_c8 [40];
  FChooserEvaluationContext local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_2 != (UProxyAsset *)0x0) {
    local_a0.DebuggingInfo.CurrentChooser = (UObject *)0x0;
    local_a0.DebuggingInfo.bCurrentDebugTarget = false;
    local_a0.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
    local_a0.Params.ArrayNum = 0;
    local_a0.Params.ArrayMax = 4;
    local_a0.ObjectParams.ArrayNum = 0;
    local_a0.ObjectParams.ArrayMax = 4;
    FChooserEvaluationContext::AddObjectParam(&local_a0,param_1);
    if (*(longlong *)param_3.Class.field0_0x0 != 0) {
      Z_Construct_UClass_UObject_NoRegister();
    }
    if (local_a0.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
      FMemory::Free((void *)local_a0.Params.AllocatorInstance.SecondaryData);
    }
  }
  return (UObject *)0x0;
}

// EvaluateProxyTable @ 14cf27130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UObject * __cdecl
UProxyTableFunctionLibrary::EvaluateProxyTable(UObject *param_1,UProxyTable *param_2,FName param_3)

{
  FRuntimeProxyValue *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  FObjectChooserBase *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FName local_res18;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  FChooserEvaluationContext local_1e8;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_218;
  if (param_2 != (UProxyTable *)0x0) {
    local_158.Base = local_138;
    local_158.bIsDynamic = false;
    local_158.bIsExternal = false;
    local_158.CurPos = local_138;
    local_158.End = (wchar_t *)local_38;
    local_res18 = param_3;
    ::FName::AppendString(&local_res18,&local_158);
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>
                      ((int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1),
                       local_158.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    local_1e8.Params.ArrayMax = 4;
    local_1e8.DebuggingInfo.CurrentChooser = (UObject *)0x0;
    local_1e8.DebuggingInfo.bCurrentDebugTarget = false;
    local_1e8.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
    uVar11 = 0;
    local_1e8.Params.ArrayNum = 0;
    local_1e8.ObjectParams.ArrayNum = 0;
    local_1e8.ObjectParams.ArrayMax = 4;
    FChooserEvaluationContext::AddObjectParam(&local_1e8,param_1);
    uVar12 = (param_2->Keys).ArrayNum;
    pFVar2 = (param_2->Keys).AllocatorInstance.Data;
    uVar10 = uVar11;
    uVar14 = uVar12;
    uVar9 = 0;
    if (0 < (int)uVar12) {
      do {
        uVar15 = uVar14 >> 1;
        iVar16 = uVar15 + uVar9;
        if (*(uint *)(pFVar2 + (longlong)iVar16 * 0x10) < uVar5) {
          uVar8 = 1;
        }
        else {
          uVar8 = uVar11;
          if ((*(uint *)(pFVar2 + (longlong)iVar16 * 0x10) <= uVar5) &&
             (*(int *)(pFVar2 + (longlong)iVar16 * 0x10 + 4) != 0)) {
            uVar8 = 0;
          }
        }
        uVar10 = uVar9;
        if (uVar8 != 0) {
          uVar10 = iVar16 + (uVar14 & 1);
        }
        uVar14 = uVar15;
        uVar9 = uVar10;
      } while (uVar15 != 0);
    }
    if ((int)uVar10 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar10;
      if ((*(uint *)(pFVar2 + lVar13 * 0x10) <= uVar5) &&
         (((uVar5 != *(uint *)(pFVar2 + lVar13 * 0x10) ||
           (((*(int *)(pFVar2 + lVar13 * 0x10 + 4) == 0 &&
             (*(int *)(pFVar2 + lVar13 * 0x10 + 8) == 0)) &&
            (*(int *)(pFVar2 + lVar13 * 0x10 + 0xc) == 0)))) && (uVar10 != 0xffffffff)))) {
        iVar16 = (param_2->RuntimeValues).ArrayNum;
        uVar12 = 0;
        if ((int)uVar10 < iVar16) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_1f8 = lVar13, local_1f0 = (longlong)iVar16,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar6 = (UObject *)(*pcVar3)();
          return pUVar6;
        }
        pFVar1 = (FRuntimeProxyValue *)
                 ((param_2->RuntimeValues).AllocatorInstance.Data + lVar13 * 0x28);
        pFVar7 = FInstancedStruct::Get<FObjectChooserBase_const_>(&pFVar1->Value);
        pUVar6 = (UObject *)(**(code **)((longlong)*pFVar7 + 0x18))(pFVar7,&local_1e8);
        OutputStructData(param_2,pFVar1,&local_1e8);
        if (pUVar6 != (UObject *)0x0) {
          if (local_1e8.Params.AllocatorInstance.SecondaryData == (ForElementType<FStructView>)0x0)
          {
            return pUVar6;
          }
          FMemory::Free((void *)local_1e8.Params.AllocatorInstance.SecondaryData);
          return pUVar6;
        }
      }
    }
    if (local_1e8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
      FMemory::Free((void *)local_1e8.Params.AllocatorInstance.SecondaryData);
    }
  }
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 14cf27a10

UClass * __cdecl UProxyTableFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyTableFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ProxyTableFunctionLibrary",
               &Z_Registration_Info_UClass_UProxyTableFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUProxyTableFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UProxyTableFunctionLibrary>,
               InternalVTableHelperCtorCaller<UProxyTableFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyTableFunctionLibrary.InnerSingleton;
}

// MakeLookupProxy @ 14cf27f80

FInstancedStruct * __cdecl
UProxyTableFunctionLibrary::MakeLookupProxy
          (FInstancedStruct *__return_storage_ptr__,UProxyAsset *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  FInstancedStruct *pFVar7;
  
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxy,(UObject *)pUVar6,L"LookupProxy");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton,
             (uchar *)0x0);
  puVar2 = __return_storage_ptr__->StructMemory;
  pUVar3 = (__return_storage_ptr__->ScriptStruct).field0_0x0.DebugPtr;
  if (puVar2 == (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FInstancedStruct *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (pUVar3 == (UScriptStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FInstancedStruct *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxy,(UObject *)pUVar6,L"LookupProxy");
    if (Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14cf2806b;
  }
  else {
LAB_14cf2806b:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14cf280b5;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FInstancedStruct *)(*pcVar4)();
    return pFVar7;
  }
LAB_14cf280b5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UProxyAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(UProxyAsset **)(puVar2 + 8) = param_1;
  return __return_storage_ptr__;
}

// MakeLookupProxyWithOverrideTable @ 14cf280f0

FInstancedStruct * __cdecl
UProxyTableFunctionLibrary::MakeLookupProxyWithOverrideTable
          (FInstancedStruct *__return_storage_ptr__,UProxyAsset *param_1,UProxyTable *param_2)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  FInstancedStruct *pFVar7;
  
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable,(UObject *)pUVar6,
                         L"LookupProxyWithOverrideTable");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton,
             (uchar *)0x0);
  puVar2 = __return_storage_ptr__->StructMemory;
  pUVar3 = (__return_storage_ptr__->ScriptStruct).field0_0x0.DebugPtr;
  if (puVar2 == (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FInstancedStruct *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (pUVar3 == (UScriptStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FInstancedStruct *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable,(UObject *)pUVar6,
                         L"LookupProxyWithOverrideTable");
    if (Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14cf281e4;
  }
  else {
LAB_14cf281e4:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton)->
                 _padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton)->_padding_
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14cf2822f;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FInstancedStruct *)(*pcVar4)();
    return pFVar7;
  }
LAB_14cf2822f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UProxyAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(UProxyAsset **)(puVar2 + 8) = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UProxyTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(UProxyTable **)(puVar2 + 0x10) = param_2;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUProxyTableFunctionLibrary @ 14cf28600

void __cdecl UProxyTableFunctionLibrary::StaticRegisterNativesUProxyTableFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEvaluateProxyAsset @ 14cf289d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UProxyTableFunctionLibrary::execEvaluateProxyAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  undefined1 auStack_e8 [32];
  UObject *local_c8;
  longlong local_c0;
  UObject *local_b8 [2];
  FChooserEvaluationContext local_a8;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b8[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_c0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pUVar3 = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_c8);
  }
  if (local_c0 != 0) {
    local_a8.DebuggingInfo.CurrentChooser = (UObject *)0x0;
    local_a8.DebuggingInfo.bCurrentDebugTarget = false;
    local_a8.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
    local_a8.Params.ArrayNum = 0;
    local_a8.Params.ArrayMax = 4;
    local_a8.ObjectParams.ArrayNum = 0;
    local_a8.ObjectParams.ArrayMax = 4;
    FChooserEvaluationContext::AddObjectParam(&local_a8,local_b8[0]);
    if (pUVar3 != (UObject *)0x0) {
      Z_Construct_UClass_UObject_NoRegister();
    }
    if (local_a8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
      FMemory::Free((void *)local_a8.Params.AllocatorInstance.SecondaryData);
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execEvaluateProxyTable @ 14cf28b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UProxyTableFunctionLibrary::execEvaluateProxyTable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FRuntimeProxyValue *pFVar2;
  uint uVar3;
  int iVar4;
  FProperty *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  UProxyTable *pUVar8;
  UObject *pUVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FObjectChooserBase *pFVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  FName local_208;
  UProxyTable *local_200;
  UObject *local_1f8;
  FName local_1f0;
  FChooserEvaluationContext local_1e8;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_238;
  uVar12 = 0;
  local_1f8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  local_200 = (UProxyTable *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_200,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_200);
  }
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  pUVar9 = local_1f8;
  pUVar8 = local_200;
  local_1f0 = local_208;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_200 != (UProxyTable *)0x0) {
    local_158.bIsDynamic = false;
    local_158.bIsExternal = false;
    local_158.End = (wchar_t *)local_38;
    local_158.Base = local_138;
    local_158.CurPos = local_138;
    ::FName::AppendString(&local_1f0,&local_158);
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>
                       ((int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1),
                        local_158.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    local_1e8.DebuggingInfo.CurrentChooser = (UObject *)0x0;
    local_1e8.DebuggingInfo.bCurrentDebugTarget = false;
    local_1e8.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
    local_1e8.Params.ArrayNum = 0;
    local_1e8.Params.ArrayMax = 4;
    local_1e8.ObjectParams.ArrayNum = 0;
    local_1e8.ObjectParams.ArrayMax = 4;
    FChooserEvaluationContext::AddObjectParam(&local_1e8,pUVar9);
    uVar3 = (pUVar8->Keys).ArrayNum;
    pFVar6 = (pUVar8->Keys).AllocatorInstance.Data;
    uVar14 = 0;
    uVar16 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar17 = uVar16 >> 1;
        uVar14 = uVar12;
        if (*(uint *)(pFVar6 + (longlong)(int)(uVar17 + uVar12) * 0x10) < uVar11) {
          uVar14 = uVar17 + uVar12 + (uVar16 & 1);
        }
        uVar16 = uVar17;
        uVar12 = uVar14;
      } while (uVar17 != 0);
    }
    if ((int)uVar14 < (int)uVar3) {
      lVar15 = (longlong)(int)uVar14;
      if ((*(uint *)(pFVar6 + lVar15 * 0x10) <= uVar11) &&
         (((uVar11 != *(uint *)(pFVar6 + lVar15 * 0x10) ||
           (((*(int *)(pFVar6 + lVar15 * 0x10 + 4) == 0 &&
             (*(int *)(pFVar6 + lVar15 * 0x10 + 8) == 0)) &&
            (*(int *)(pFVar6 + lVar15 * 0x10 + 0xc) == 0)))) && (uVar14 != 0xffffffff)))) {
        iVar4 = (pUVar8->RuntimeValues).ArrayNum;
        uVar12 = 0;
        if ((int)uVar14 < iVar4) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_218 = lVar15, local_210 = (longlong)iVar4,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = (FRuntimeProxyValue *)
                 ((pUVar8->RuntimeValues).AllocatorInstance.Data + lVar15 * 0x28);
        pFVar13 = FInstancedStruct::Get<FObjectChooserBase_const_>(&pFVar2->Value);
        lVar15 = (**(code **)((longlong)*pFVar13 + 0x18))(pFVar13,&local_1e8);
        OutputStructData(pUVar8,pFVar2,&local_1e8);
        if (lVar15 != 0) {
          if (local_1e8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0)
          {
            FMemory::Free((void *)local_1e8.Params.AllocatorInstance.SecondaryData);
          }
          *(longlong *)param_3 = lVar15;
          return;
        }
      }
    }
    if (local_1e8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
      FMemory::Free((void *)local_1e8.Params.AllocatorInstance.SecondaryData);
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execMakeLookupProxy @ 14cf28e90

void __cdecl
UProxyTableFunctionLibrary::execMakeLookupProxy(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UObject *pUVar4;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar5;
  longlong lVar6;
  bool bVar7;
  UPackage *pUVar8;
  UObject *local_res10;
  TObjectPtr<UScriptStruct_const_>_u_0 local_18;
  longlong lStack_10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_18.ObjectPtr);
  if (Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxy,(UObject *)pUVar8,L"LookupProxy");
  }
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)&local_18.ObjectPtr,
             Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton,(uchar *)0x0);
  lVar6 = lStack_10;
  TVar5 = local_18;
  if (lStack_10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd1,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (TVar5.DebugPtr == (UScriptStruct *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd2,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxy,(UObject *)pUVar8,L"LookupProxy");
    if (Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14cf28fdd;
  }
  else {
LAB_14cf28fdd:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton)->_padding_;
    if (((int)(TVar5.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar5.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton)->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_14cf29027;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14cf29027:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)(lVar6 + 8) = pUVar4;
  if (param_3 != &local_18) {
    FInstancedStruct::Reset(param_3);
    lVar6 = lStack_10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
    }
    *(TObjectPtr<UScriptStruct_const_>_u_0 *)param_3 = local_18;
    local_18.DebugPtr = (UScriptStruct *)0x0;
    lStack_10 = 0;
    *(longlong *)((longlong)param_3 + 8) = lVar6;
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_18.ObjectPtr);
  return;
}

// execMakeLookupProxyWithOverrideTable @ 14cf290b0

void __cdecl
UProxyTableFunctionLibrary::execMakeLookupProxyWithOverrideTable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar6;
  longlong lVar7;
  bool bVar8;
  UPackage *pUVar9;
  UObject *local_res10;
  UObject *local_res18 [2];
  TObjectPtr<UScriptStruct_const_>_u_0 local_38;
  longlong lStack_30;
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res18[0];
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_38.ObjectPtr);
  if (Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable,(UObject *)pUVar9,
                         L"LookupProxyWithOverrideTable");
  }
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)&local_38.ObjectPtr,
             Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton,
             (uchar *)0x0);
  lVar7 = lStack_30;
  TVar6 = local_38;
  if (lStack_30 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd1,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (TVar6.DebugPtr == (UScriptStruct *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd2,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable,(UObject *)pUVar9,
                         L"LookupProxyWithOverrideTable");
    if (Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14cf2923d;
  }
  else {
LAB_14cf2923d:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton)->
                 _padding_;
    if (((int)(TVar6.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar6.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton)->_padding_
       )) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) goto LAB_14cf29287;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14cf29287:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)(lVar7 + 8) = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)(lVar7 + 0x10) = pUVar4;
  if (param_3 != &local_38) {
    FInstancedStruct::Reset(param_3);
    lVar7 = lStack_30;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
    }
    *(TObjectPtr<UScriptStruct_const_>_u_0 *)param_3 = local_38;
    local_38.DebugPtr = (UScriptStruct *)0x0;
    lStack_30 = 0;
    *(longlong *)((longlong)param_3 + 8) = lVar7;
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_38.ObjectPtr);
  return;
}

