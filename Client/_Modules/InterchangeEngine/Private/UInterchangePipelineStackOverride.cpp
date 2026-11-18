// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 12

// StaticClass @ 14e4cc150

UClass * __cdecl UInterchangePipelineStackOverride::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePipelineStackOverride.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePipelineStackOverride",
               &Z_Registration_Info_UClass_UInterchangePipelineStackOverride.InnerSingleton,
               StaticRegisterNativesUInterchangePipelineStackOverride,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangePipelineStackOverride>,
               InternalVTableHelperCtorCaller<UInterchangePipelineStackOverride>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineStackOverride.InnerSingleton;
}

// UInterchangePipelineStackOverride @ 14e4d8da0

UInterchangePipelineStackOverride * __thiscall
UInterchangePipelineStackOverride::UInterchangePipelineStackOverride
          (UInterchangePipelineStackOverride *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangePipelineStackOverride__6B_;
  (this->OverridePipelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverridePipelines).ArrayNum = 0;
  (this->OverridePipelines).ArrayMax = 0;
  return this;
}

// UInterchangePipelineStackOverride @ 14e4d8de0

UInterchangePipelineStackOverride * __thiscall
UInterchangePipelineStackOverride::UInterchangePipelineStackOverride
          (UInterchangePipelineStackOverride *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangePipelineStackOverride__6B_;
  (this->OverridePipelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverridePipelines).ArrayNum = 0;
  (this->OverridePipelines).ArrayMax = 0;
  return this;
}

// ~UInterchangePipelineStackOverride @ 14e4db0d0

void __thiscall
UInterchangePipelineStackOverride::~UInterchangePipelineStackOverride
          (UInterchangePipelineStackOverride *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangePipelineStackOverride__6B_;
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->OverridePipelines).AllocatorInstance.Data,
             (this->OverridePipelines).ArrayNum);
  pFVar1 = (this->OverridePipelines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddBlueprintPipeline @ 14e4e1aa0

/* WARNING: Removing unreachable block (ram,0x00014e4e1b9f) */

void __thiscall
UInterchangePipelineStackOverride::AddBlueprintPipeline
          (UInterchangePipelineStackOverride *this,UInterchangeBlueprintPipelineBase *param_1)

{
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FSoftObjectPath *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FSoftObjectPath local_28;
  
  pTVar1 = &this->OverridePipelines;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,(UObject *)param_1);
  pFVar3 = (FSoftObjectPath *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= &local_28) && (&local_28 < pFVar3 + (this->OverridePipelines).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->OverridePipelines).ArrayNum;
  piVar2 = &(this->OverridePipelines).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->OverridePipelines).ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x20);
  *pFVar7 = local_28.AssetPath.PackageName;
  pFVar7[1] = local_28.AssetPath.AssetName;
  pFVar7[2].ComparisonIndex = 0;
  pFVar7[2].Number = 0;
  pFVar7[2] = (FName)local_28.SubPathString.Data.AllocatorInstance.Data;
  pFVar7[3].ComparisonIndex.Value = local_28.SubPathString.Data.ArrayNum;
  pFVar7[3].Number = local_28.SubPathString.Data.ArrayMax;
  return;
}

// AddPipeline @ 14e4e27e0

/* WARNING: Removing unreachable block (ram,0x00014e4e28df) */

void __thiscall
UInterchangePipelineStackOverride::AddPipeline
          (UInterchangePipelineStackOverride *this,UInterchangePipelineBase *param_1)

{
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FSoftObjectPath *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FSoftObjectPath local_28;
  
  pTVar1 = &this->OverridePipelines;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,(UObject *)param_1);
  pFVar3 = (FSoftObjectPath *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= &local_28) && (&local_28 < pFVar3 + (this->OverridePipelines).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->OverridePipelines).ArrayNum;
  piVar2 = &(this->OverridePipelines).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->OverridePipelines).ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x20);
  *pFVar7 = local_28.AssetPath.PackageName;
  pFVar7[1] = local_28.AssetPath.AssetName;
  pFVar7[2].ComparisonIndex = 0;
  pFVar7[2].Number = 0;
  pFVar7[2] = (FName)local_28.SubPathString.Data.AllocatorInstance.Data;
  pFVar7[3].ComparisonIndex.Value = local_28.SubPathString.Data.ArrayNum;
  pFVar7[3].Number = local_28.SubPathString.Data.ArrayMax;
  return;
}

// AddPythonPipeline @ 14e4e2900

/* WARNING: Removing unreachable block (ram,0x00014e4e29ff) */

void __thiscall
UInterchangePipelineStackOverride::AddPythonPipeline
          (UInterchangePipelineStackOverride *this,UInterchangePythonPipelineBase *param_1)

{
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FSoftObjectPath *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FSoftObjectPath local_28;
  
  pTVar1 = &this->OverridePipelines;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,(UObject *)param_1);
  pFVar3 = (FSoftObjectPath *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= &local_28) && (&local_28 < pFVar3 + (this->OverridePipelines).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->OverridePipelines).ArrayNum;
  piVar2 = &(this->OverridePipelines).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->OverridePipelines).ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x20);
  *pFVar7 = local_28.AssetPath.PackageName;
  pFVar7[1] = local_28.AssetPath.AssetName;
  pFVar7[2].ComparisonIndex = 0;
  pFVar7[2].Number = 0;
  pFVar7[2] = (FName)local_28.SubPathString.Data.AllocatorInstance.Data;
  pFVar7[3].ComparisonIndex.Value = local_28.SubPathString.Data.ArrayNum;
  pFVar7[3].Number = local_28.SubPathString.Data.ArrayMax;
  return;
}

// GetPrivateStaticClass @ 14e4f8130

UClass * __cdecl UInterchangePipelineStackOverride::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePipelineStackOverride.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePipelineStackOverride",
               &Z_Registration_Info_UClass_UInterchangePipelineStackOverride.InnerSingleton,
               StaticRegisterNativesUInterchangePipelineStackOverride,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangePipelineStackOverride>,
               InternalVTableHelperCtorCaller<UInterchangePipelineStackOverride>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineStackOverride.InnerSingleton;
}

// StaticRegisterNativesUInterchangePipelineStackOverride @ 14e50ab60

void __cdecl
UInterchangePipelineStackOverride::StaticRegisterNativesUInterchangePipelineStackOverride(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddBlueprintPipeline @ 14e50c6c0

/* WARNING: Removing unreachable block (ram,0x00014e50c82d) */

void __cdecl
UInterchangePipelineStackOverride::execAddBlueprintPipeline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  UObject *local_res8;
  FSoftObjectPath local_28;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,local_res8);
  if (((*(FSoftObjectPath **)(param_1 + 1) <= &local_28) &&
      (&local_28 < *(FSoftObjectPath **)(param_1 + 1) + *(int *)&param_1[1].field_0xc)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = *(int *)&param_1[1].field_0x8;
  if (iVar4 == *(int *)&param_1[1].field_0xc) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)(param_1 + 1),(int *)&param_1[1].field_0xc);
  }
  *(int *)&param_1[1].field_0x8 = iVar4 + 1;
  pFVar5 = (FName *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 1));
  *pFVar5 = local_28.AssetPath.PackageName;
  pFVar5[1] = local_28.AssetPath.AssetName;
  pFVar5[2].ComparisonIndex = 0;
  pFVar5[2].Number = 0;
  pFVar5[2] = (FName)local_28.SubPathString.Data.AllocatorInstance.Data;
  pFVar5[3].ComparisonIndex.Value = local_28.SubPathString.Data.ArrayNum;
  pFVar5[3].Number = local_28.SubPathString.Data.ArrayMax;
  return;
}

// execAddPipeline @ 14e50c850

/* WARNING: Removing unreachable block (ram,0x00014e50c9bd) */

void __cdecl
UInterchangePipelineStackOverride::execAddPipeline(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  UObject *local_res8;
  FSoftObjectPath local_28;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,local_res8);
  if (((*(FSoftObjectPath **)(param_1 + 1) <= &local_28) &&
      (&local_28 < *(FSoftObjectPath **)(param_1 + 1) + *(int *)&param_1[1].field_0xc)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = *(int *)&param_1[1].field_0x8;
  if (iVar4 == *(int *)&param_1[1].field_0xc) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)(param_1 + 1),(int *)&param_1[1].field_0xc);
  }
  *(int *)&param_1[1].field_0x8 = iVar4 + 1;
  pFVar5 = (FName *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 1));
  *pFVar5 = local_28.AssetPath.PackageName;
  pFVar5[1] = local_28.AssetPath.AssetName;
  pFVar5[2].ComparisonIndex = 0;
  pFVar5[2].Number = 0;
  pFVar5[2] = (FName)local_28.SubPathString.Data.AllocatorInstance.Data;
  pFVar5[3].ComparisonIndex.Value = local_28.SubPathString.Data.ArrayNum;
  pFVar5[3].Number = local_28.SubPathString.Data.ArrayMax;
  return;
}

// execAddPythonPipeline @ 14e50c9e0

/* WARNING: Removing unreachable block (ram,0x00014e50cb4d) */

void __cdecl
UInterchangePipelineStackOverride::execAddPythonPipeline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  UObject *local_res8;
  FSoftObjectPath local_28;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,local_res8);
  if (((*(FSoftObjectPath **)(param_1 + 1) <= &local_28) &&
      (&local_28 < *(FSoftObjectPath **)(param_1 + 1) + *(int *)&param_1[1].field_0xc)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = *(int *)&param_1[1].field_0x8;
  if (iVar4 == *(int *)&param_1[1].field_0xc) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)(param_1 + 1),(int *)&param_1[1].field_0xc);
  }
  *(int *)&param_1[1].field_0x8 = iVar4 + 1;
  pFVar5 = (FName *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 1));
  *pFVar5 = local_28.AssetPath.PackageName;
  pFVar5[1] = local_28.AssetPath.AssetName;
  pFVar5[2].ComparisonIndex = 0;
  pFVar5[2].Number = 0;
  pFVar5[2] = (FName)local_28.SubPathString.Data.AllocatorInstance.Data;
  pFVar5[3].ComparisonIndex.Value = local_28.SubPathString.Data.ArrayNum;
  pFVar5[3].Number = local_28.SubPathString.Data.ArrayMax;
  return;
}

