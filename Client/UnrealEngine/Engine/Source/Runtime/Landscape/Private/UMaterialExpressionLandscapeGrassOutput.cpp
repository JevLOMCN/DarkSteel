// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 9

// StaticClass @ 145ef7650

UClass * __cdecl UMaterialExpressionLandscapeGrassOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeGrassOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeGrassOutput,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeGrassOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeGrassOutput>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.InnerSingleton;
}

// UMaterialExpressionLandscapeGrassOutput @ 145f031c0

UMaterialExpressionLandscapeGrassOutput * __thiscall
UMaterialExpressionLandscapeGrassOutput::UMaterialExpressionLandscapeGrassOutput
          (UMaterialExpressionLandscapeGrassOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeGrassOutput__6B_;
  (this->GrassTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrassTypes).ArrayNum = 0;
  (this->GrassTypes).ArrayMax = 0;
  return this;
}

// ~UMaterialExpressionLandscapeGrassOutput @ 145f04320

void __thiscall
UMaterialExpressionLandscapeGrassOutput::~UMaterialExpressionLandscapeGrassOutput
          (UMaterialExpressionLandscapeGrassOutput *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeGrassOutput__6B_;
  pFVar1 = (this->GrassTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetFunctionName @ 145f0efd0

FString * __thiscall
UMaterialExpressionLandscapeGrassOutput::GetFunctionName
          (UMaterialExpressionLandscapeGrassOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetGrassWeight");
  return __return_storage_ptr__;
}

// GetMaxOutputs @ 145f10df0

int __thiscall
UMaterialExpressionLandscapeGrassOutput::GetMaxOutputs
          (UMaterialExpressionLandscapeGrassOutput *this)

{
  return 0x20;
}

// GetNumOutputs @ 145f11520

int __thiscall
UMaterialExpressionLandscapeGrassOutput::GetNumOutputs
          (UMaterialExpressionLandscapeGrassOutput *this)

{
  return (this->GrassTypes).ArrayNum;
}

// GetPrivateStaticClass @ 145f12c50

UClass * __cdecl UMaterialExpressionLandscapeGrassOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeGrassOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeGrassOutput,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeGrassOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeGrassOutput>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLandscapeGrassOutput @ 145f1ef80

void __cdecl
UMaterialExpressionLandscapeGrassOutput::
StaticRegisterNativesUMaterialExpressionLandscapeGrassOutput(void)

{
  return;
}

// UMaterialExpressionLandscapeGrassOutput @ 145f42bf0

UMaterialExpressionLandscapeGrassOutput * __thiscall
UMaterialExpressionLandscapeGrassOutput::UMaterialExpressionLandscapeGrassOutput
          (UMaterialExpressionLandscapeGrassOutput *this,FObjectInitializer *param_1)

{
  TArray<FGrassInput,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  uint uVar5;
  UMaterialExpressionLandscapeGrassOutput *pUVar6;
  uint uVar7;
  ulonglong uVar8;
  FName *pFVar9;
  
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  uVar8 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeGrassOutput__6B_;
  pvVar3 = ThreadLocalStoragePointer;
  pTVar1 = &this->GrassTypes;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->GrassTypes).ArrayNum = 0;
  (this->GrassTypes).ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + uVar8 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.STRING_Landscape,L"Landscape",L"Landscape",L"Landscape");
      ::FName::FName(&::ConstructorStatics.NAME_Grass,"Grass");
      atexit(`UMaterialExpressionLandscapeGrassOutput::UMaterialExpressionLandscapeGrassOutput'::
             __l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar5 = (this->GrassTypes).ArrayNum;
  if (uVar5 == (this->GrassTypes).ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&pTVar1->AllocatorInstance,&(this->GrassTypes).ArrayMax);
  }
  (this->GrassTypes).ArrayNum = uVar5 + 1;
  uVar7 = 0;
  if ((int)uVar5 < (int)(uVar5 + 1)) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UMaterialExpressionLandscapeGrassOutput *)(*pcVar2)();
      return pUVar6;
    }
  }
  pFVar9 = (FName *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x38);
  if (pFVar9 != (FName *)0x0) {
    *pFVar9 = ::ConstructorStatics.NAME_Grass;
    pFVar9[1].ComparisonIndex = 0;
    pFVar9[1].Number = 0;
    pFVar9[3].ComparisonIndex = 0;
    pFVar9[3].Number = 0;
    pFVar9[4].ComparisonIndex = 0;
    pFVar9[4].Number = 0;
    pFVar9[5].ComparisonIndex = 0;
    pFVar9[5].Number = 0;
    pFVar9[6].ComparisonIndex = 0;
    pFVar9[6].Number = 0;
    pFVar9[2].ComparisonIndex = 0;
    pFVar9[2].Number = 0;
  }
  return this;
}

