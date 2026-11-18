// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc94b10

UClass * __cdecl UMeshStatisticsProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshStatisticsProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshStatisticsProperties",
               &Z_Registration_Info_UClass_UMeshStatisticsProperties.InnerSingleton,
               StaticRegisterNativesUMeshStatisticsProperties,0xe0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMeshStatisticsProperties>,
               InternalVTableHelperCtorCaller<UMeshStatisticsProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshStatisticsProperties.InnerSingleton;
}

// UMeshStatisticsProperties @ 14ccbda40

UMeshStatisticsProperties * __thiscall
UMeshStatisticsProperties::UMeshStatisticsProperties
          (UMeshStatisticsProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshStatisticsProperties__6B_;
  (this->Mesh).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mesh).Data.ArrayNum = 0;
  (this->Mesh).Data.ArrayMax = 0;
  (this->UV).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UV).Data.ArrayNum = 0;
  (this->UV).Data.ArrayMax = 0;
  (this->Attributes).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).Data.ArrayNum = 0;
  (this->Attributes).Data.ArrayMax = 0;
  return this;
}

// UMeshStatisticsProperties @ 14ccbdaa0

UMeshStatisticsProperties * __thiscall
UMeshStatisticsProperties::UMeshStatisticsProperties
          (UMeshStatisticsProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshStatisticsProperties__6B_;
  (this->Mesh).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mesh).Data.ArrayNum = 0;
  (this->Mesh).Data.ArrayMax = 0;
  (this->UV).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UV).Data.ArrayNum = 0;
  (this->UV).Data.ArrayMax = 0;
  (this->Attributes).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).Data.ArrayNum = 0;
  (this->Attributes).Data.ArrayMax = 0;
  return this;
}

// ~UMeshStatisticsProperties @ 14ccc41c0

void __thiscall
UMeshStatisticsProperties::~UMeshStatisticsProperties(UMeshStatisticsProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshStatisticsProperties__6B_;
  pFVar1 = (this->Attributes).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UV).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Mesh).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd005b0

UClass * __cdecl UMeshStatisticsProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshStatisticsProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshStatisticsProperties",
               &Z_Registration_Info_UClass_UMeshStatisticsProperties.InnerSingleton,
               StaticRegisterNativesUMeshStatisticsProperties,0xe0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMeshStatisticsProperties>,
               InternalVTableHelperCtorCaller<UMeshStatisticsProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshStatisticsProperties.InnerSingleton;
}

// StaticRegisterNativesUMeshStatisticsProperties @ 14cd2f0f0

void __cdecl UMeshStatisticsProperties::StaticRegisterNativesUMeshStatisticsProperties(void)

{
  return;
}

// Update @ 14cd318d0

void __thiscall
UMeshStatisticsProperties::Update(UMeshStatisticsProperties *this,FDynamicMesh3 *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FDynamicMeshAttributeSet *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  int iVar8;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FString::PrintfImpl(&local_78,L"T: %d  V: %d  E: %d");
  iVar8 = 0;
  pFVar1 = &this->Mesh;
  if (pFVar1 != &local_78) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (this->Mesh).Data.ArrayNum = local_78.Data.ArrayNum;
    (this->Mesh).Data.ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar3 = (param_1->AttributeSet).Ptr;
  if (pFVar3 == (FDynamicMeshAttributeSet *)0x0) {
    pFVar7 = ::FString::FString(&local_38,L"none");
    pFVar1 = &this->UV;
    if (pFVar1 != pFVar7) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->UV).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (this->UV).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = ::FString::FString(&local_28,L"none");
    pFVar1 = &this->Attributes;
    if (pFVar1 != pFVar7) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Attributes).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (this->Attributes).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
  }
  else {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    iVar6 = (**(code **)(pFVar3->_padding_ + 0xa8))(pFVar3);
    if (0 < iVar6) {
      do {
        if ((((iVar8 < (pFVar3->UVLayers).Array.ArrayNum) && (-1 < iVar8)) && (iVar8 < 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ::FString::PrintfImpl(&local_48,L"UV%d: %d  ");
        iVar6 = local_48.Data.ArrayNum + -1;
        if (local_48.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar6);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        iVar8 = iVar8 + 1;
        iVar6 = (**(code **)(pFVar3->_padding_ + 0xa8))(pFVar3);
      } while (iVar8 < iVar6);
    }
    iVar8 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange(&this->UV,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar8);
    ::FString::PrintfImpl(&local_68,L"Normals: %d");
    pFVar1 = &this->Attributes;
    if (pFVar1 != &local_68) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (this->Attributes).Data.ArrayNum = local_68.Data.ArrayNum;
      (this->Attributes).Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_28.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      local_28.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

