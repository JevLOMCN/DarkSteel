// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 13

// StaticClass @ 14cc948d0

UClass * __cdecl UExistingMeshMaterialProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExistingMeshMaterialProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ExistingMeshMaterialProperties",
               &Z_Registration_Info_UClass_UExistingMeshMaterialProperties.InnerSingleton,
               StaticRegisterNativesUExistingMeshMaterialProperties,0xe8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UExistingMeshMaterialProperties>,
               InternalVTableHelperCtorCaller<UExistingMeshMaterialProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExistingMeshMaterialProperties.InnerSingleton;
}

// UExistingMeshMaterialProperties @ 14ccbab40

UExistingMeshMaterialProperties * __thiscall
UExistingMeshMaterialProperties::UExistingMeshMaterialProperties
          (UExistingMeshMaterialProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->MaterialMode = Original;
  this->_padding_ = (longlong)&___7UExistingMeshMaterialProperties__6B_;
  (this->OverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->UVChannel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVChannel).Data.ArrayNum = 0;
  (this->UVChannel).Data.ArrayMax = 0;
  (this->UVChannelNamesList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVChannelNamesList).ArrayNum = 0;
  (this->UVChannelNamesList).ArrayMax = 0;
  (this->CheckerMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  this->CheckerDensity = 20.0;
  return this;
}

// UExistingMeshMaterialProperties @ 14ccbabb0

UExistingMeshMaterialProperties * __thiscall
UExistingMeshMaterialProperties::UExistingMeshMaterialProperties
          (UExistingMeshMaterialProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->MaterialMode = Original;
  this->_padding_ = (longlong)&___7UExistingMeshMaterialProperties__6B_;
  (this->OverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->UVChannel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVChannel).Data.ArrayNum = 0;
  (this->UVChannel).Data.ArrayMax = 0;
  (this->UVChannelNamesList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVChannelNamesList).ArrayNum = 0;
  (this->UVChannelNamesList).ArrayMax = 0;
  (this->CheckerMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  this->CheckerDensity = 20.0;
  return this;
}

// ~UExistingMeshMaterialProperties @ 14ccc3370

void __thiscall
UExistingMeshMaterialProperties::~UExistingMeshMaterialProperties
          (UExistingMeshMaterialProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UExistingMeshMaterialProperties__6B_;
  DestructItems<FString,int>
            ((FString *)(this->UVChannelNamesList).AllocatorInstance.Data,
             (this->UVChannelNamesList).ArrayNum);
  pFVar1 = (this->UVChannelNamesList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVChannel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetActiveOverrideMaterial @ 14ccfca80

UMaterialInterface * __thiscall
UExistingMeshMaterialProperties::GetActiveOverrideMaterial(UExistingMeshMaterialProperties *this)

{
  if (this->MaterialMode == Checkerboard) {
    return (UMaterialInterface *)(this->CheckerMaterial).field0_0x0.DebugPtr;
  }
  if (this->MaterialMode == Override) {
    return (this->OverrideMaterial).field0_0x0.DebugPtr;
  }
  return (UMaterialInterface *)0x0;
}

// GetPrivateStaticClass @ 14ccfede0

UClass * __cdecl UExistingMeshMaterialProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExistingMeshMaterialProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ExistingMeshMaterialProperties",
               &Z_Registration_Info_UClass_UExistingMeshMaterialProperties.InnerSingleton,
               StaticRegisterNativesUExistingMeshMaterialProperties,0xe8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UExistingMeshMaterialProperties>,
               InternalVTableHelperCtorCaller<UExistingMeshMaterialProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExistingMeshMaterialProperties.InnerSingleton;
}

// GetUVChannelNamesFunc @ 14cd02e00

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UExistingMeshMaterialProperties::GetUVChannelNamesFunc(UExistingMeshMaterialProperties *this)

{
  return &this->UVChannelNamesList;
}

// RestoreProperties @ 14cd1c8e0

void __thiscall
UExistingMeshMaterialProperties::RestoreProperties
          (UExistingMeshMaterialProperties *this,UInteractiveTool *param_1,FString *param_2)

{
  float fVar1;
  int iVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *pUVar5;
  FName *pFVar6;
  FName local_res20;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  UInteractiveToolPropertySet::RestoreProperties
            ((UInteractiveToolPropertySet *)this,param_1,param_2);
  local_28[0].Size = 0x31;
  local_28[0].DataPtr = L"/MeshModelingToolsetExp/Materials/CheckerMaterial";
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,local_28,&local_38,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar4 != (UMaterialInterface *)0x0) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    pUVar5 = UMaterialInstanceDynamic::Create(pUVar4,(UObject *)0x0,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar5 == (UMaterialInstanceDynamic *)0x0)) {
      (this->CheckerMaterial).field0_0x0.DebugPtr = pUVar5;
      if (pUVar5 == (UMaterialInstanceDynamic *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
      (this->CheckerMaterial).field0_0x0.DebugPtr = pUVar5;
    }
    fVar1 = this->CheckerDensity;
    pFVar6 = ::FName::FName(&local_res20,"Density");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar5,*pFVar6,fVar1);
    pUVar5 = (this->CheckerMaterial).field0_0x0.DebugPtr;
    iVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                      (&this->UVChannelNamesList,&this->UVChannel);
    pFVar6 = ::FName::FName(&local_res20,"UVChannel");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar5,*pFVar6,(float)iVar2);
  }
  return;
}

// Setup @ 14cd204e0

void __thiscall UExistingMeshMaterialProperties::Setup(UExistingMeshMaterialProperties *this)

{
  float fVar1;
  int iVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *pUVar5;
  FName *pFVar6;
  FName local_res10 [3];
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  local_28[0].Size = 0x31;
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_28[0].DataPtr = L"/MeshModelingToolsetExp/Materials/CheckerMaterial";
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,local_28,&local_38,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar4 != (UMaterialInterface *)0x0) {
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    pUVar5 = UMaterialInstanceDynamic::Create(pUVar4,(UObject *)0x0,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar5 == (UMaterialInstanceDynamic *)0x0)) {
      (this->CheckerMaterial).field0_0x0.DebugPtr = pUVar5;
      if (pUVar5 == (UMaterialInstanceDynamic *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
      (this->CheckerMaterial).field0_0x0.DebugPtr = pUVar5;
    }
    fVar1 = this->CheckerDensity;
    pFVar6 = ::FName::FName(local_res10,"Density");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar5,*pFVar6,fVar1);
    pUVar5 = (this->CheckerMaterial).field0_0x0.DebugPtr;
    iVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                      (&this->UVChannelNamesList,&this->UVChannel);
    pFVar6 = ::FName::FName(local_res10,"UVChannel");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar5,*pFVar6,(float)iVar2);
  }
  return;
}

// StaticRegisterNativesUExistingMeshMaterialProperties @ 14cd2eda0

void __cdecl
UExistingMeshMaterialProperties::StaticRegisterNativesUExistingMeshMaterialProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateMaterials @ 14cd35310

void __thiscall
UExistingMeshMaterialProperties::UpdateMaterials(UExistingMeshMaterialProperties *this)

{
  float fVar1;
  UMaterialInstanceDynamic *pUVar2;
  int iVar3;
  FName *pFVar4;
  FName local_res8;
  
  pUVar2 = (this->CheckerMaterial).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInstanceDynamic *)0x0) {
    fVar1 = this->CheckerDensity;
    pFVar4 = ::FName::FName(&local_res8,"Density");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar2,*pFVar4,fVar1);
    pUVar2 = (this->CheckerMaterial).field0_0x0.DebugPtr;
    iVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                      (&this->UVChannelNamesList,&this->UVChannel);
    pFVar4 = ::FName::FName(&local_res8,"UVChannel");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar2,*pFVar4,(float)iVar3);
  }
  return;
}

// UpdateUVChannels @ 14cd3c830

void __thiscall
UExistingMeshMaterialProperties::UpdateUVChannels
          (UExistingMeshMaterialProperties *this,int param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  int iVar6;
  FString local_38;
  FString local_28;
  
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->UVChannelNamesList,param_2);
  if (param_3) {
    if ((param_1 < 0) || (param_2->ArrayNum <= param_1)) {
      pFVar5 = ::FString::FString(&local_38,L"");
      bVar3 = false;
      bVar4 = true;
    }
    else {
      if (param_1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar5 = ::FString::FString(&local_28,
                                  (FString *)
                                  ((param_2->AllocatorInstance).Data + (longlong)param_1 * 0x10));
      bVar3 = true;
      bVar4 = false;
    }
    iVar1 = (pFVar5->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(&this->UVChannel,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar6);
    if (bVar4) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// execGetUVChannelNamesFunc @ 14cd3fd70

void __cdecl
UExistingMeshMaterialProperties::execGetUVChannelNamesFunc
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FString,TSizedDefaultAllocator<32>_> *)&param_1[5].field_0x8);
  return;
}

