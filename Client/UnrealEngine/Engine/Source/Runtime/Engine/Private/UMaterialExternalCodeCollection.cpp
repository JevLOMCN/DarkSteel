// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147f0e640

UClass * __cdecl UMaterialExternalCodeCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExternalCodeCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExternalCodeCollection",
               &Z_Registration_Info_UClass_UMaterialExternalCodeCollection.InnerSingleton,
               StaticRegisterNativesUMaterialExternalCodeCollection,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExternalCodeCollection>,
               InternalVTableHelperCtorCaller<UMaterialExternalCodeCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExternalCodeCollection.InnerSingleton;
}

// UMaterialExternalCodeCollection @ 147f2dd70

UMaterialExternalCodeCollection * __thiscall
UMaterialExternalCodeCollection::UMaterialExternalCodeCollection
          (UMaterialExternalCodeCollection *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExternalCodeCollection__6B_;
  (this->ExternalCodeDeclarations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCodeDeclarations).ArrayNum = 0;
  (this->ExternalCodeDeclarations).ArrayMax = 0;
  return this;
}

// UMaterialExternalCodeCollection @ 147f2ddb0

UMaterialExternalCodeCollection * __thiscall
UMaterialExternalCodeCollection::UMaterialExternalCodeCollection
          (UMaterialExternalCodeCollection *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExternalCodeCollection__6B_;
  (this->ExternalCodeDeclarations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCodeDeclarations).ArrayNum = 0;
  (this->ExternalCodeDeclarations).ArrayMax = 0;
  return this;
}

// ~UMaterialExternalCodeCollection @ 147f2f230

void __thiscall
UMaterialExternalCodeCollection::~UMaterialExternalCodeCollection
          (UMaterialExternalCodeCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExternalCodeCollection__6B_;
  DestructItems<FMaterialExternalCodeDeclaration,int>
            ((FMaterialExternalCodeDeclaration *)
             (this->ExternalCodeDeclarations).AllocatorInstance.Data,
             (this->ExternalCodeDeclarations).ArrayNum);
  pFVar1 = (this->ExternalCodeDeclarations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147f43510

UClass * __cdecl UMaterialExternalCodeCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExternalCodeCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExternalCodeCollection",
               &Z_Registration_Info_UClass_UMaterialExternalCodeCollection.InnerSingleton,
               StaticRegisterNativesUMaterialExternalCodeCollection,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExternalCodeCollection>,
               InternalVTableHelperCtorCaller<UMaterialExternalCodeCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExternalCodeCollection.InnerSingleton;
}

// PostInitProperties @ 147f4ccc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMaterialExternalCodeCollection::PostInitProperties(UMaterialExternalCodeCollection *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_1098 [32];
  undefined1 local_1078 [8];
  FString local_1070;
  TStringBuilderBase<wchar_t> local_1058;
  wchar_t local_1038 [2048];
  ulonglong local_38 [2];
  
  local_38[1] = 0x147f4ccdf;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1098;
  UObject::PostInitProperties((UObject *)this);
  iVar1 = (this->ExternalCodeDeclarations).ArrayNum;
  local_1058.Base = local_1038;
  pFVar2 = (this->ExternalCodeDeclarations).AllocatorInstance.Data;
  local_1058.CurPos = local_1038;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x78;
  local_1058.End = (wchar_t *)local_38;
  local_1058.bIsDynamic = false;
  local_1058.bIsExternal = false;
  while( true ) {
    if ((this->ExternalCodeDeclarations).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMaterialExternalCodeDeclaration,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1078);
    }
    if (pFVar2 == pFVar3) break;
    local_1058.CurPos = local_1058.Base;
    if (*(int *)(pFVar2 + 0x20) < 2) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1058,L"Definition is empty",0x13);
    }
    if (pFVar2[0x48] == (FScriptContainerElement)0x3) {
      if (*(int *)(pFVar2 + 0x30) < 2) {
        if (0 < (int)((longlong)local_1058.CurPos - (longlong)local_1058.Base >> 1)) {
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1058,L", ",2);
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1058,L"DefinitionDDX is empty",0x16);
      }
      if (*(int *)(pFVar2 + 0x40) < 2) {
        if (0 < (int)((longlong)local_1058.CurPos - (longlong)local_1058.Base >> 1)) {
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1058,L", ",2);
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1058,L"DefinitionDDY is empty",0x16);
      }
    }
    if ((0 < (int)((longlong)local_1058.CurPos - (longlong)local_1058.Base >> 1)) &&
       (1 < (byte)LogMaterial._0_1_)) {
      if (local_1058.End < local_1058.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_1058,1);
      }
      *local_1058.CurPos = L'\0';
      ::FName::ToString((FName *)(pFVar2 + 0x10),&local_1070);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      if (local_1070.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1070.Data.AllocatorInstance.Data);
      }
    }
    pFVar2 = pFVar2 + 0x78;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1058);
  return;
}

// StaticRegisterNativesUMaterialExternalCodeCollection @ 147f52c50

void __cdecl
UMaterialExternalCodeCollection::StaticRegisterNativesUMaterialExternalCodeCollection(void)

{
  return;
}

