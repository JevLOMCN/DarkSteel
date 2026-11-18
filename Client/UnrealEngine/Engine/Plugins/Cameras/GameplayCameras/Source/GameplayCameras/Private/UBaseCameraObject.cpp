// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d537f20

UClass * __cdecl UBaseCameraObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseCameraObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BaseCameraObject",
               &Z_Registration_Info_UClass_UBaseCameraObject.InnerSingleton,
               StaticRegisterNativesUBaseCameraObject,0xa8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseCameraObject>,
               InternalVTableHelperCtorCaller<UBaseCameraObject>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseCameraObject.InnerSingleton;
}

// UBaseCameraObject @ 14d543700

UBaseCameraObject * __thiscall
UBaseCameraObject::UBaseCameraObject(UBaseCameraObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBaseCameraObject__6B_;
  (this->Interface).BlendableParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).BlendableParameters.ArrayNum = 0;
  (this->Interface).BlendableParameters.ArrayMax = 0;
  (this->Interface).DataParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).DataParameters.ArrayNum = 0;
  (this->Interface).DataParameters.ArrayMax = 0;
  (this->Interface).DisplayName_DEPRECATED.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Interface).DisplayName_DEPRECATED.Data.ArrayNum = 0;
  (this->Interface).DisplayName_DEPRECATED.Data.ArrayMax = 0;
  (this->AllocationInfo).EvaluatorInfo.TotalSizeof = 0;
  (this->AllocationInfo).EvaluatorInfo.MaxAlignof = 0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum = 0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax = 0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayNum = 0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&(this->DefaultParameters).Value);
  (this->ParameterDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterDefinitions).ArrayNum = 0;
  (this->ParameterDefinitions).ArrayMax = 0;
  return this;
}

// UBaseCameraObject @ 14d543780

UBaseCameraObject * __thiscall
UBaseCameraObject::UBaseCameraObject(UBaseCameraObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBaseCameraObject__6B_;
  (this->Interface).BlendableParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).BlendableParameters.ArrayNum = 0;
  (this->Interface).BlendableParameters.ArrayMax = 0;
  (this->Interface).DataParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).DataParameters.ArrayNum = 0;
  (this->Interface).DataParameters.ArrayMax = 0;
  (this->Interface).DisplayName_DEPRECATED.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Interface).DisplayName_DEPRECATED.Data.ArrayNum = 0;
  (this->Interface).DisplayName_DEPRECATED.Data.ArrayMax = 0;
  (this->AllocationInfo).EvaluatorInfo.TotalSizeof = 0;
  (this->AllocationInfo).EvaluatorInfo.MaxAlignof = 0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum = 0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax = 0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayNum = 0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&(this->DefaultParameters).Value);
  (this->ParameterDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterDefinitions).ArrayNum = 0;
  (this->ParameterDefinitions).ArrayMax = 0;
  return this;
}

// ~UBaseCameraObject @ 14d544a00

void __thiscall UBaseCameraObject::~UBaseCameraObject(UBaseCameraObject *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBaseCameraObject__6B_;
  pFVar1 = (this->ParameterDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&(this->DefaultParameters).Value);
  pFVar1 = (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Interface).DisplayName_DEPRECATED.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Interface).DataParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Interface).BlendableParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d558250

UClass * __cdecl UBaseCameraObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseCameraObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BaseCameraObject",
               &Z_Registration_Info_UClass_UBaseCameraObject.InnerSingleton,
               StaticRegisterNativesUBaseCameraObject,0xa8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseCameraObject>,
               InternalVTableHelperCtorCaller<UBaseCameraObject>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseCameraObject.InnerSingleton;
}

// GetRootNode @ 14d558a70

UCameraNode * __thiscall UBaseCameraObject::GetRootNode(UBaseCameraObject *this)

{
  return (UCameraNode *)0x0;
}

// PostLoad @ 14d55db90

void __thiscall UBaseCameraObject::PostLoad(UBaseCameraObject *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uStack_1c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_18;
  
  UObject::PostLoad((UObject *)this);
  local_18.DataPtr =
       (FCameraObjectInterfaceParameterDefinition *)
       (this->ParameterDefinitions).AllocatorInstance.Data;
  iVar1 = (this->ParameterDefinitions).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  UE::Cameras::FCameraObjectInterfaceParameterBuilder::FixUpDefaultParameterProperties
            (&local_18,&this->DefaultParameters);
  return;
}

// StaticRegisterNativesUBaseCameraObject @ 14d568550

void __cdecl UBaseCameraObject::StaticRegisterNativesUBaseCameraObject(void)

{
  return;
}

