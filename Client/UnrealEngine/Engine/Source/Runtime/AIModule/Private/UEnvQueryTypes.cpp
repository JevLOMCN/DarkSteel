// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146f12e70

UClass * __cdecl UEnvQueryTypes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTypes",
               &Z_Registration_Info_UClass_UEnvQueryTypes.InnerSingleton,
               StaticRegisterNativesUEnvQueryTypes,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTypes>,
               InternalVTableHelperCtorCaller<UEnvQueryTypes>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTypes.InnerSingleton;
}

// UEnvQueryTypes @ 146f2dc50

UEnvQueryTypes * __thiscall
UEnvQueryTypes::UEnvQueryTypes(UEnvQueryTypes *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryTypes__6B_;
  return this;
}

// UEnvQueryTypes @ 146f2dc80

UEnvQueryTypes * __thiscall
UEnvQueryTypes::UEnvQueryTypes(UEnvQueryTypes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryTypes__6B_;
  return this;
}

// ~UEnvQueryTypes @ 146f2f310

void __thiscall UEnvQueryTypes::~UEnvQueryTypes(UEnvQueryTypes *this)

{
  *(undefined ***)this = &___7UEnvQueryTypes__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DescribeContext @ 146f40520

FText * __cdecl
UEnvQueryTypes::DescribeContext(FText *__return_storage_ptr__,TSubclassOf<UEnvQueryContext> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = UEnvQueryContext::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar5 = *(UObject **)param_1.Class.field0_0x0;
        goto LAB_146f40572;
      }
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_146f40572:
  GetShortTypeName(__return_storage_ptr__,pUVar5);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f59790

UClass * __cdecl UEnvQueryTypes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTypes",
               &Z_Registration_Info_UClass_UEnvQueryTypes.InnerSingleton,
               StaticRegisterNativesUEnvQueryTypes,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTypes>,
               InternalVTableHelperCtorCaller<UEnvQueryTypes>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTypes.InnerSingleton;
}

// GetShortTypeName @ 146f5a190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FText * __cdecl UEnvQueryTypes::GetShortTypeName(FText *__return_storage_ptr__,UObject *param_1)

{
  UObject *pUVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FText *pFVar7;
  int iVar8;
  FName local_res10;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"EnvQueryGenerator",L"Unknown",L"unknown");
    return __return_storage_ptr__;
  }
  pUVar6 = Z_Construct_UClass_UClass_NoRegister();
  pUVar1 = *(UObject **)&param_1->field_0x10;
  iVar5 = (int)pUVar6->_padding_;
  if ((((*(int *)&pUVar1[1].field_0x10 < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar1[1].field_0x8 + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) && (param_1 = pUVar1, pUVar1 == (UObject *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryTypes.cpp"
                         ,0x68,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FText *)(*pcVar3)();
    return pFVar7;
  }
  FVar2.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  FVar2.Number = *(uint *)&param_1->field_0x1c;
  if ((*(uint *)&param_1[5].field_0xc >> 0x12 & 1) == 0) {
    local_res18[0] = FVar2;
    ::FName::ToString(local_res18,&local_28);
    iVar5 = ::FString::Find(&local_28,L"_",1,CaseSensitive,FromStart,-1);
    if (iVar5 != -1) {
      ::FString::RemoveAt(&local_28,0,iVar5 + 1,No);
    }
    FText::FromString(__return_storage_ptr__,&local_28);
  }
  else {
    local_res10 = FVar2;
    ::FName::ToString(&local_res10,&local_48);
    iVar5 = 0;
    if (local_48.Data.ArrayNum != 0) {
      iVar5 = local_48.Data.ArrayNum + -1;
    }
    if (iVar5 + -2 < iVar5) {
      iVar5 = iVar5 + -2;
    }
    iVar8 = 0;
    if (0 < iVar5) {
      iVar8 = iVar5;
    }
    ::FString::RemoveAt(&local_48,iVar8,2,No);
    local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_38.Data.ArrayNum = local_48.Data.ArrayNum;
    local_38.Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FText::FromString(__return_storage_ptr__,&local_38);
    local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUEnvQueryTypes @ 146f76f40

void __cdecl UEnvQueryTypes::StaticRegisterNativesUEnvQueryTypes(void)

{
  return;
}

