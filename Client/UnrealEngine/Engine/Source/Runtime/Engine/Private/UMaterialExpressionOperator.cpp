// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b9a10

UClass * __cdecl UMaterialExpressionOperator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionOperator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionOperator",
               &Z_Registration_Info_UClass_UMaterialExpressionOperator.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionOperator,0xd0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionOperator>,
               InternalVTableHelperCtorCaller<UMaterialExpressionOperator>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionOperator.InnerSingleton;
}

// UMaterialExpressionOperator @ 1472c0780

UMaterialExpressionOperator * __thiscall
UMaterialExpressionOperator::UMaterialExpressionOperator
          (UMaterialExpressionOperator *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Operator = Add;
  this->_padding_ = (longlong)&___7UMaterialExpressionOperator__6B_;
  (this->DynamicInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicInputs).ArrayNum = 0;
  (this->DynamicInputs).ArrayMax = 0;
  this->Arity = 2;
  this->bAllowAddPin = true;
  return this;
}

// ~UMaterialExpressionOperator @ 1472c2210

void __thiscall
UMaterialExpressionOperator::~UMaterialExpressionOperator(UMaterialExpressionOperator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionOperator__6B_;
  pFVar1 = (this->DynamicInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5230

UClass * __cdecl UMaterialExpressionOperator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionOperator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionOperator",
               &Z_Registration_Info_UClass_UMaterialExpressionOperator.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionOperator,0xd0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionOperator>,
               InternalVTableHelperCtorCaller<UMaterialExpressionOperator>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionOperator.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionOperator @ 1472c7550

void __cdecl UMaterialExpressionOperator::StaticRegisterNativesUMaterialExpressionOperator(void)

{
  return;
}

// UMaterialExpressionOperator @ 148afd5a0

UMaterialExpressionOperator * __thiscall
UMaterialExpressionOperator::UMaterialExpressionOperator
          (UMaterialExpressionOperator *this,FObjectInitializer *param_1)

{
  TArray<FMaterialExpressionOperatorInput,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMaterialExpressionOperator *pUVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  UObject::UObject((UObject *)this,param_1);
  uVar8 = 0;
  this->Operator = Add;
  pTVar1 = &this->DynamicInputs;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DynamicInputs).ArrayNum = 0;
  (this->DynamicInputs).ArrayMax = 0;
  this->Arity = 2;
  this->_padding_ = (longlong)&___7UMaterialExpressionOperator__6B_;
  this->bAllowAddPin = true;
  do {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    uStack_30 = 0;
    local_28 = 0;
    uStack_14 = 0;
    local_38 = 0;
    uStack_10 = 0x3f800000;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 <
        pFVar2 + (longlong)(this->DynamicInputs).ArrayMax * 0x30)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UMaterialExpressionOperator *)(*pcVar3)();
        return pUVar6;
      }
    }
    iVar5 = (this->DynamicInputs).ArrayNum;
    if (iVar5 == (this->DynamicInputs).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&(this->DynamicInputs).ArrayMax);
    }
    uVar8 = uVar8 + 1;
    (this->DynamicInputs).ArrayNum = iVar5 + 1;
    lVar7 = (longlong)iVar5;
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar7 * 0x30) = local_38;
    *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 8) = uStack_30;
    *(ulonglong *)(pFVar2 + lVar7 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
    *(ulonglong *)(pFVar2 + lVar7 * 0x30 + 0x10 + 8) = CONCAT44(uStack_1c,uStack_20);
    *(ulonglong *)(pFVar2 + lVar7 * 0x30 + 0x20) = CONCAT44(uStack_14,uStack_18);
    *(ulonglong *)(pFVar2 + lVar7 * 0x30 + 0x20 + 8) = CONCAT44(uStack_c,uStack_10);
  } while (uVar8 < this->Arity);
  return this;
}

