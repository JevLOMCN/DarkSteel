// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AndroidPermission
// Functions: 11

// StaticClass @ 14f00be80

UClass * __cdecl UAndroidPermissionFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AndroidPermission",L"AndroidPermissionFunctionLibrary",
               &Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUAndroidPermissionFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAndroidPermissionFunctionLibrary>,
               InternalVTableHelperCtorCaller<UAndroidPermissionFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.InnerSingleton;
}

// UAndroidPermissionFunctionLibrary @ 14f00c500

UAndroidPermissionFunctionLibrary * __thiscall
UAndroidPermissionFunctionLibrary::UAndroidPermissionFunctionLibrary
          (UAndroidPermissionFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAndroidPermissionFunctionLibrary__6B_;
  return this;
}

// UAndroidPermissionFunctionLibrary @ 14f00c530

UAndroidPermissionFunctionLibrary * __thiscall
UAndroidPermissionFunctionLibrary::UAndroidPermissionFunctionLibrary
          (UAndroidPermissionFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAndroidPermissionFunctionLibrary__6B_;
  return this;
}

// ~UAndroidPermissionFunctionLibrary @ 14f00c5d0

void __thiscall
UAndroidPermissionFunctionLibrary::~UAndroidPermissionFunctionLibrary
          (UAndroidPermissionFunctionLibrary *this)

{
  *(undefined ***)this = &___7UAndroidPermissionFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AcquirePermissions @ 14f00c700

/* WARNING: Enum "Type": Some values do not have unique names */

UAndroidPermissionCallbackProxy * __cdecl
UAndroidPermissionFunctionLibrary::AcquirePermissions
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  UAndroidPermissionCallbackProxy *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res10 [8];
  FString local_28;
  
  if (4 < (byte)LogAndroidPermission._0_1_) {
    pFVar4 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    bVar2 = true;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar4 == pFVar5) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_28,L",",1);
      }
      iVar6 = *(int *)(pFVar4 + 8) + -1;
      if (*(int *)(pFVar4 + 8) == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_28,*(wchar_t **)pFVar4,iVar6);
      pFVar4 = pFVar4 + 0x10;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAndroidPermission);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pUVar3 = UAndroidPermissionCallbackProxy::GetInstance();
  return pUVar3;
}

// CheckPermission @ 14f00c810

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UAndroidPermissionFunctionLibrary::CheckPermission(FString *param_1)

{
  if (4 < (byte)LogAndroidPermission._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAndroidPermission);
  }
  return false;
}

// GetPrivateStaticClass @ 14f00cba0

UClass * __cdecl UAndroidPermissionFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AndroidPermission",L"AndroidPermissionFunctionLibrary",
               &Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUAndroidPermissionFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAndroidPermissionFunctionLibrary>,
               InternalVTableHelperCtorCaller<UAndroidPermissionFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.InnerSingleton;
}

// Initialize @ 14f00cc60

void __cdecl UAndroidPermissionFunctionLibrary::Initialize(void)

{
  return;
}

// StaticRegisterNativesUAndroidPermissionFunctionLibrary @ 14f00ccb0

void __cdecl
UAndroidPermissionFunctionLibrary::StaticRegisterNativesUAndroidPermissionFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAcquirePermissions @ 14f00cdb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAndroidPermissionFunctionLibrary::execAcquirePermissions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  UAndroidPermissionCallbackProxy *pUVar5;
  FString *pFVar6;
  FString *pFVar7;
  FString **ppFVar8;
  int iVar9;
  undefined1 local_res10 [8];
  FString *local_48;
  undefined8 local_40;
  FString local_38;
  
  local_48 = (FString *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  ppFVar8 = &local_48;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar8 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (4 < (byte)LogAndroidPermission._0_1_) {
    pFVar6 = *ppFVar8;
    bVar4 = true;
    iVar1 = *(int *)(ppFVar8 + 1);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar7 = pFVar6 + iVar1;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    while( true ) {
      if (*(int *)(ppFVar8 + 1) != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar6 == pFVar7) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        ::FString::AppendChars(&local_38,L",",1);
      }
      iVar2 = (pFVar6->Data).ArrayNum;
      iVar9 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
      pFVar6 = pFVar6 + 1;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAndroidPermission);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pUVar5 = UAndroidPermissionCallbackProxy::GetInstance();
  *(UAndroidPermissionCallbackProxy **)param_3 = pUVar5;
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execCheckPermission @ 14f00cf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAndroidPermissionFunctionLibrary::execCheckPermission
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (4 < (byte)LogAndroidPermission._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAndroidPermission);
  }
  *(undefined1 *)param_3 = 0;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

