// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147287520

UClass * __cdecl UMaterialExpressionAggregate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAggregate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAggregate",
               &Z_Registration_Info_UClass_UMaterialExpressionAggregate.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAggregate,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAggregate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAggregate>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAggregate.InnerSingleton;
}

// UMaterialExpressionAggregate @ 14728c110

UMaterialExpressionAggregate * __thiscall
UMaterialExpressionAggregate::UMaterialExpressionAggregate
          (UMaterialExpressionAggregate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionAggregate__6B_;
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
  this->Kind = MaterialAttributes;
  (this->UserAggregate).field0_0x0.DebugPtr = (UMaterialAggregate *)0x0;
  (this->AttributeNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeNames).ArrayNum = 0;
  (this->AttributeNames).ArrayMax = 0;
  (this->PrototypeInput).OutputIndex = 0;
  (this->PrototypeInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PrototypeInput).InputName.Number = 0;
  (this->PrototypeInput).MaskR = 0;
  (this->PrototypeInput).MaskG = 0;
  (this->PrototypeInput).MaskB = 0;
  (this->PrototypeInput).MaskA = 0;
  (this->PrototypeInput).Expression = (UMaterialExpression *)0x0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  return this;
}

// ~UMaterialExpressionAggregate @ 14728d620

void __thiscall
UMaterialExpressionAggregate::~UMaterialExpressionAggregate(UMaterialExpressionAggregate *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionAggregate__6B_;
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147290190

UClass * __cdecl UMaterialExpressionAggregate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAggregate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAggregate",
               &Z_Registration_Info_UClass_UMaterialExpressionAggregate.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAggregate,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAggregate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAggregate>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAggregate.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionAggregate @ 1472913b0

void __cdecl UMaterialExpressionAggregate::StaticRegisterNativesUMaterialExpressionAggregate(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UMaterialExpressionAggregate @ 148afa7c0

UMaterialExpressionAggregate * __thiscall
UMaterialExpressionAggregate::UMaterialExpressionAggregate
          (UMaterialExpressionAggregate *this,FObjectInitializer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  UObject::UObject((UObject *)this,param_1);
  plVar2 = &this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = 0;
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
  *plVar2 = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionAggregate__6B_;
  this->Kind = MaterialAttributes;
  (this->UserAggregate).field0_0x0.DebugPtr = (UMaterialAggregate *)0x0;
  (this->AttributeNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeNames).ArrayNum = 0;
  (this->AttributeNames).ArrayMax = 0;
  (this->PrototypeInput).OutputIndex = 0;
  (this->PrototypeInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PrototypeInput).InputName.Number = 0;
  (this->PrototypeInput).MaskR = 0;
  (this->PrototypeInput).MaskG = 0;
  (this->PrototypeInput).MaskB = 0;
  (this->PrototypeInput).MaskA = 0;
  (this->PrototypeInput).Expression = (UMaterialExpression *)0x0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 0;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x41c,(ForAnyElementType *)plVar2,piVar1);
  *(int *)&this->_padding_ = iVar4 + 1;
  lVar5 = (longlong)iVar4 * 0x1c;
  lVar3 = *plVar2;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5 + 8) = 0;
  *(undefined8 *)(lVar3 + lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar3 + lVar5 + 0x18) = 0;
  return this;
}

