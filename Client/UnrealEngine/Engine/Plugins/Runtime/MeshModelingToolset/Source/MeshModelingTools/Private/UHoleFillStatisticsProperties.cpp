// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cc91f30

UClass * __cdecl UHoleFillStatisticsProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoleFillStatisticsProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"HoleFillStatisticsProperties",
               &Z_Registration_Info_UClass_UHoleFillStatisticsProperties.InnerSingleton,
               StaticRegisterNativesUHoleFillStatisticsProperties,0x100,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UHoleFillStatisticsProperties>,
               InternalVTableHelperCtorCaller<UHoleFillStatisticsProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoleFillStatisticsProperties.InnerSingleton;
}

// UHoleFillStatisticsProperties @ 14ccbade0

UHoleFillStatisticsProperties * __thiscall
UHoleFillStatisticsProperties::UHoleFillStatisticsProperties
          (UHoleFillStatisticsProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UHoleFillStatisticsProperties__6B_;
  (this->InitialHoles).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialHoles).Data.ArrayNum = 0;
  (this->InitialHoles).Data.ArrayMax = 0;
  (this->SelectedHoles).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedHoles).Data.ArrayNum = 0;
  (this->SelectedHoles).Data.ArrayMax = 0;
  (this->SuccessfulFills).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuccessfulFills).Data.ArrayNum = 0;
  (this->SuccessfulFills).Data.ArrayMax = 0;
  (this->FailedFills).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FailedFills).Data.ArrayNum = 0;
  (this->FailedFills).Data.ArrayMax = 0;
  (this->RemainingHoles).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainingHoles).Data.ArrayNum = 0;
  (this->RemainingHoles).Data.ArrayMax = 0;
  return this;
}

// UHoleFillStatisticsProperties @ 14ccbae50

UHoleFillStatisticsProperties * __thiscall
UHoleFillStatisticsProperties::UHoleFillStatisticsProperties
          (UHoleFillStatisticsProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UHoleFillStatisticsProperties__6B_;
  (this->InitialHoles).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialHoles).Data.ArrayNum = 0;
  (this->InitialHoles).Data.ArrayMax = 0;
  (this->SelectedHoles).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedHoles).Data.ArrayNum = 0;
  (this->SelectedHoles).Data.ArrayMax = 0;
  (this->SuccessfulFills).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuccessfulFills).Data.ArrayNum = 0;
  (this->SuccessfulFills).Data.ArrayMax = 0;
  (this->FailedFills).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FailedFills).Data.ArrayNum = 0;
  (this->FailedFills).Data.ArrayMax = 0;
  (this->RemainingHoles).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainingHoles).Data.ArrayNum = 0;
  (this->RemainingHoles).Data.ArrayMax = 0;
  return this;
}

// ~UHoleFillStatisticsProperties @ 14ccc3410

void __thiscall
UHoleFillStatisticsProperties::~UHoleFillStatisticsProperties(UHoleFillStatisticsProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UHoleFillStatisticsProperties__6B_;
  pFVar1 = (this->RemainingHoles).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FailedFills).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SuccessfulFills).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SelectedHoles).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InitialHoles).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccff010

UClass * __cdecl UHoleFillStatisticsProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoleFillStatisticsProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"HoleFillStatisticsProperties",
               &Z_Registration_Info_UClass_UHoleFillStatisticsProperties.InnerSingleton,
               StaticRegisterNativesUHoleFillStatisticsProperties,0x100,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UHoleFillStatisticsProperties>,
               InternalVTableHelperCtorCaller<UHoleFillStatisticsProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoleFillStatisticsProperties.InnerSingleton;
}

// Initialize @ 14cd042c0

void __thiscall
UHoleFillStatisticsProperties::Initialize
          (UHoleFillStatisticsProperties *this,UHoleFillTool *param_1)

{
  FString *pFVar1;
  int iVar2;
  FMeshBoundaryLoops *pFVar3;
  FScriptContainerElement *pFVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar3 = (param_1->BoundaryLoops).Ptr;
  if (pFVar3 != (FMeshBoundaryLoops *)0x0) {
    iVar2 = (pFVar3->Loops).ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_58,iVar2);
    pFVar1 = &this->InitialHoles;
    if (pFVar1 != &local_58) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (this->InitialHoles).Data.ArrayNum = local_58.Data.ArrayNum;
      (this->InitialHoles).Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_48,0);
    pFVar1 = &this->SelectedHoles;
    if (pFVar1 != &local_48) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (this->SelectedHoles).Data.ArrayNum = local_48.Data.ArrayNum;
      (this->SelectedHoles).Data.ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_38,0);
    pFVar1 = &this->SuccessfulFills;
    if (pFVar1 != &local_38) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (this->SuccessfulFills).Data.ArrayNum = local_38.Data.ArrayNum;
      (this->SuccessfulFills).Data.ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_28,0);
    pFVar1 = &this->FailedFills;
    if (pFVar1 != &local_28) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (this->FailedFills).Data.ArrayNum = local_28.Data.ArrayNum;
      (this->FailedFills).Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_18,iVar2);
    pFVar1 = &this->RemainingHoles;
    if (pFVar1 != &local_18) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (this->RemainingHoles).Data.ArrayNum = local_18.Data.ArrayNum;
      (this->RemainingHoles).Data.ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUHoleFillStatisticsProperties @ 14cd2ee00

void __cdecl UHoleFillStatisticsProperties::StaticRegisterNativesUHoleFillStatisticsProperties(void)

{
  return;
}

// Update @ 14cd31660

void __thiscall
UHoleFillStatisticsProperties::Update
          (UHoleFillStatisticsProperties *this,UHoleFillTool *param_1,FHoleFillOp *param_2)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FMeshBoundaryLoops *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar5 = (param_1->BoundaryLoops).Ptr;
  if (pFVar5 != (FMeshBoundaryLoops *)0x0) {
    iVar2 = param_2->NumFailedLoops;
    iVar3 = (pFVar5->Loops).ArrayNum;
    iVar4 = (param_2->Loops).ArrayNum;
    iVar7 = iVar4 - iVar2;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_78,iVar3);
    pFVar1 = &this->InitialHoles;
    if (pFVar1 != &local_78) {
      pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (this->InitialHoles).Data.ArrayNum = local_78.Data.ArrayNum;
      (this->InitialHoles).Data.ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_68,iVar4);
    pFVar1 = &this->SelectedHoles;
    if (pFVar1 != &local_68) {
      pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (this->SelectedHoles).Data.ArrayNum = local_68.Data.ArrayNum;
      (this->SelectedHoles).Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_58,iVar7);
    pFVar1 = &this->SuccessfulFills;
    if (pFVar1 != &local_58) {
      pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (this->SuccessfulFills).Data.ArrayNum = local_58.Data.ArrayNum;
      (this->SuccessfulFills).Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_48,iVar2);
    pFVar1 = &this->FailedFills;
    if (pFVar1 != &local_48) {
      pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (this->FailedFills).Data.ArrayNum = local_48.Data.ArrayNum;
      (this->FailedFills).Data.ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_38,iVar3 - iVar7);
    pFVar1 = &this->RemainingHoles;
    if (pFVar1 != &local_38) {
      pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (this->RemainingHoles).Data.ArrayNum = local_38.Data.ArrayNum;
      (this->RemainingHoles).Data.ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

