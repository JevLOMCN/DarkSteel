// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146f12670

UClass * __cdecl UAIDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIDataProvider",
               &Z_Registration_Info_UClass_UAIDataProvider.InnerSingleton,
               StaticRegisterNativesUAIDataProvider,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAIDataProvider>,
               InternalVTableHelperCtorCaller<UAIDataProvider>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIDataProvider.InnerSingleton;
}

// UAIDataProvider @ 146f29ee0

UAIDataProvider * __thiscall
UAIDataProvider::UAIDataProvider(UAIDataProvider *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAIDataProvider__6B_;
  return this;
}

// UAIDataProvider @ 146f29f10

UAIDataProvider * __thiscall
UAIDataProvider::UAIDataProvider(UAIDataProvider *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAIDataProvider__6B_;
  return this;
}

// ~UAIDataProvider @ 146f2e640

void __thiscall UAIDataProvider::~UAIDataProvider(UAIDataProvider *this)

{
  *(undefined ***)this = &___7UAIDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BindData @ 146f352c0

void __thiscall UAIDataProvider::BindData(UAIDataProvider *this,UObject *param_1,int param_2)

{
  return;
}

// GetPrivateStaticClass @ 146f57640

UClass * __cdecl UAIDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIDataProvider",
               &Z_Registration_Info_UClass_UAIDataProvider.InnerSingleton,
               StaticRegisterNativesUAIDataProvider,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAIDataProvider>,
               InternalVTableHelperCtorCaller<UAIDataProvider>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIDataProvider.InnerSingleton;
}

// StaticRegisterNativesUAIDataProvider @ 146f76bb0

void __cdecl UAIDataProvider::StaticRegisterNativesUAIDataProvider(void)

{
  return;
}

// ToString @ 146f7a620

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
UAIDataProvider::ToString(UAIDataProvider *this,FString *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FName local_res8 [2];
  FName local_res18 [2];
  FString local_18;
  
  local_res8[0] = *(FName *)(*(longlong *)&this->field_0x10 + 0x18);
  local_res18[0] = param_1;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  pFVar5 = pFVar2;
  do {
    if (pFVar5 == pFVar2 + (longlong)(__return_storage_ptr__->Data).ArrayNum * 2) {
LAB_146f7a685:
      ::FString::AppendChar(__return_storage_ptr__,L'.');
      pFVar3 = ::FName::ToString(local_res18,&local_18);
      iVar1 = (pFVar3->Data).ArrayNum;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (*(short *)pFVar5 == 0x5f) {
      iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar2 >> 1);
      if (iVar4 != -1) {
        ::FString::RemoveAt(__return_storage_ptr__,0,iVar4 + 1,No);
      }
      goto LAB_146f7a685;
    }
    pFVar5 = pFVar5 + 2;
  } while( true );
}

