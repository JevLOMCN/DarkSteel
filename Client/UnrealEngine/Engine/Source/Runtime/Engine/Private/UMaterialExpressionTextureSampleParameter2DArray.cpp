// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472ddb00

UClass * __cdecl UMaterialExpressionTextureSampleParameter2DArray::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2DArray.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameter2DArray",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2DArray.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureSampleParameter2DArray
               ,0x228,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameter2DArray>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameter2DArray>,
               local_res8,UMaterialExpressionTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2DArray.InnerSingleton;
}

// UMaterialExpressionTextureSampleParameter2DArray @ 1472e2300

UMaterialExpressionTextureSampleParameter2DArray * __thiscall
UMaterialExpressionTextureSampleParameter2DArray::UMaterialExpressionTextureSampleParameter2DArray
          (UMaterialExpressionTextureSampleParameter2DArray *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this,param_1);
  *(undefined4 *)&this->field_0x220 = 0x20;
  *(undefined8 *)&this->field_0x200 = 0;
  *(undefined8 *)&this->field_0x208 = 0;
  *(undefined8 *)&this->field_0x210 = 0;
  *(undefined8 *)&this->field_0x218 = 0;
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameter2DArray__6B_;
  return this;
}

// UMaterialExpressionTextureSampleParameter2DArray @ 1472e2350

UMaterialExpressionTextureSampleParameter2DArray * __thiscall
UMaterialExpressionTextureSampleParameter2DArray::UMaterialExpressionTextureSampleParameter2DArray
          (UMaterialExpressionTextureSampleParameter2DArray *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureSampleParameter::UMaterialExpressionTextureSampleParameter
            ((UMaterialExpressionTextureSampleParameter *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameter2DArray__6B_;
  return this;
}

// ~UMaterialExpressionTextureSampleParameter2DArray @ 1472e3580

void __thiscall
UMaterialExpressionTextureSampleParameter2DArray::~UMaterialExpressionTextureSampleParameter2DArray
          (UMaterialExpressionTextureSampleParameter2DArray *this)

{
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameter__6B_;
  UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this);
  return;
}

// GetPrivateStaticClass @ 1472e5e20

UClass * __cdecl UMaterialExpressionTextureSampleParameter2DArray::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2DArray.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameter2DArray",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2DArray.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureSampleParameter2DArray
               ,0x228,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameter2DArray>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameter2DArray>,
               local_res8,UMaterialExpressionTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2DArray.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureSampleParameter2DArray @ 1472e7890

void __cdecl
UMaterialExpressionTextureSampleParameter2DArray::
StaticRegisterNativesUMaterialExpressionTextureSampleParameter2DArray(void)

{
  return;
}

// GetRequirements @ 148b023f0

wchar_t * __thiscall
UMaterialExpressionTextureSampleParameter2DArray::GetRequirements
          (UMaterialExpressionTextureSampleParameter2DArray *this)

{
  return L"Requires Texture2DArray";
}

// IsAllowedIn @ 148b02770

bool __thiscall
UMaterialExpressionTextureSampleParameter2DArray::IsAllowedIn
          (UMaterialExpressionTextureSampleParameter2DArray *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  TConsoleVariableData<int> *pTVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar4 = IConsoleManager::Get();
      plVar5 = (longlong *)
               (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.AllowTexture2DArrayCreation",1);
      pTVar6 = (TConsoleVariableData<int> *)0x0;
      if (plVar5 != (longlong *)0x0) {
        pTVar6 = (TConsoleVariableData<int> *)(**(code **)(*plVar5 + 0x68))(plVar5);
      }
      AllowTextureArrayAssetCreationVar = pTVar6;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar6 = AllowTextureArrayAssetCreationVar;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (pTVar6->ShadowedValue[0] == 0) {
    return false;
  }
  bVar2 = IsExpressionClassPermitted(*(UClass **)&this->field_0x10);
  return bVar2;
}

