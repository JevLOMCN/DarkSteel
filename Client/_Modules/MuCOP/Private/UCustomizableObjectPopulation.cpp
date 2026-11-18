// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 12

// StaticClass @ 14d363fb0

UClass * __cdecl UCustomizableObjectPopulation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObjectPopulation",L"CustomizableObjectPopulation",
               &Z_Registration_Info_UClass_UCustomizableObjectPopulation.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectPopulation,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectPopulation>,
               InternalVTableHelperCtorCaller<UCustomizableObjectPopulation>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulation.InnerSingleton;
}

// UCustomizableObjectPopulation @ 14d367890

UCustomizableObjectPopulation * __thiscall
UCustomizableObjectPopulation::UCustomizableObjectPopulation
          (UCustomizableObjectPopulation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulation__6B_;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->ClassWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassWeights).ArrayNum = 0;
  (this->ClassWeights).ArrayMax = 0;
  (this->Generator).field0_0x0.DebugPtr = (UCustomizableObjectPopulationGenerator *)0x0;
  return this;
}

// UCustomizableObjectPopulation @ 14d3678d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCustomizableObjectPopulation * __thiscall
UCustomizableObjectPopulation::UCustomizableObjectPopulation(UCustomizableObjectPopulation *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCustomizableObjectPopulationGenerator *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulation__6B_;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->ClassWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassWeights).ArrayNum = 0;
  (this->ClassWeights).ArrayMax = 0;
  (this->Generator).field0_0x0.DebugPtr = (UCustomizableObjectPopulationGenerator *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UCustomizableObjectPopulationGenerator::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UCustomizableObjectPopulationGenerator *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UCustomizableObjectPopulationGenerator *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->Generator).field0_0x0.DebugPtr = pUVar3;
  return this;
}

// ~UCustomizableObjectPopulation @ 14d367c90

void __thiscall
UCustomizableObjectPopulation::~UCustomizableObjectPopulation(UCustomizableObjectPopulation *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulation__6B_;
  pFVar1 = (this->ClassWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GeneratePopulation @ 14d369f50

int __thiscall
UCustomizableObjectPopulation::GeneratePopulation
          (UCustomizableObjectPopulation *this,
          TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  UCustomizableObjectPopulationGenerator *this_00;
  LARGE_INTEGER local_res8;
  
  this_00 = (this->Generator).field0_0x0.DebugPtr;
  if (this_00 != (UCustomizableObjectPopulationGenerator *)0x0) {
    QueryPerformanceCounter(&local_res8);
    UCustomizableObjectPopulationGenerator::Generate(this_00,local_res8.s.LowPart,param_1,param_2);
    return local_res8.s.LowPart;
  }
  return -1;
}

// GetPrivateStaticClass @ 14d36a090

UClass * __cdecl UCustomizableObjectPopulation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObjectPopulation",L"CustomizableObjectPopulation",
               &Z_Registration_Info_UClass_UCustomizableObjectPopulation.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectPopulation,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectPopulation>,
               InternalVTableHelperCtorCaller<UCustomizableObjectPopulation>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulation.InnerSingleton;
}

// HasGenerator @ 14d36a320

bool __thiscall UCustomizableObjectPopulation::HasGenerator(UCustomizableObjectPopulation *this)

{
  return (this->Generator).field0_0x0.DebugPtr != (UCustomizableObjectPopulationGenerator *)0x0;
}

// IsValidPopulation @ 14d36a360

bool __thiscall
UCustomizableObjectPopulation::IsValidPopulation(UCustomizableObjectPopulation *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ClassWeights).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ClassWeights).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(longlong *)((this->ClassWeights).AllocatorInstance.Data + lVar6) == 0) {
        return false;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (this->ClassWeights).ArrayNum);
  }
  return true;
}

// RegeneratePopulation @ 14d36a590

bool __thiscall
UCustomizableObjectPopulation::RegeneratePopulation
          (UCustomizableObjectPopulation *this,int param_1,
          TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  UCustomizableObjectPopulationGenerator *this_00;
  
  this_00 = (this->Generator).field0_0x0.DebugPtr;
  if (this_00 != (UCustomizableObjectPopulationGenerator *)0x0) {
    UCustomizableObjectPopulationGenerator::Generate(this_00,param_1,param_2,param_3);
    return true;
  }
  return false;
}

// StaticRegisterNativesUCustomizableObjectPopulation @ 14d36b210

void __cdecl UCustomizableObjectPopulation::StaticRegisterNativesUCustomizableObjectPopulation(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCustomizableObjectPopulation_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGeneratePopulation @ 14d36b3a0

void __cdecl
UCustomizableObjectPopulation::execGeneratePopulation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCustomizableObjectPopulationGenerator *this;
  int iVar2;
  TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res8 [2];
  LARGE_INTEGER local_res10;
  TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  pTVar3 = &local_28;
  if ((TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UCustomizableObjectPopulationGenerator **)&param_1[1].field_0x20;
  if (this == (UCustomizableObjectPopulationGenerator *)0x0) {
    local_res10.s.LowPart = 0xffffffff;
  }
  else {
    QueryPerformanceCounter(&local_res10);
    UCustomizableObjectPopulationGenerator::Generate(this,local_res10.s.LowPart,pTVar3,iVar2);
  }
  *(undefined4 *)param_3 = local_res10.s.LowPart;
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execRegeneratePopulation @ 14d36b4d0

void __cdecl
UCustomizableObjectPopulation::execRegeneratePopulation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCustomizableObjectPopulationGenerator *this;
  TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res8 [2];
  int local_res10 [2];
  TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  pTVar2 = &local_28;
  if ((TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UCustomizableObjectPopulationGenerator **)&param_1[1].field_0x20;
  if (this != (UCustomizableObjectPopulationGenerator *)0x0) {
    UCustomizableObjectPopulationGenerator::Generate(this,local_res10[0],pTVar2,local_res8[0]);
  }
  *(bool *)param_3 = this != (UCustomizableObjectPopulationGenerator *)0x0;
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

