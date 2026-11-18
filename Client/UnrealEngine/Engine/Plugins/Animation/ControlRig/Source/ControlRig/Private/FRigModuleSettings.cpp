// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// FRigModuleSettings @ 14a221260

FRigModuleSettings * __thiscall FRigModuleSettings::FRigModuleSettings(FRigModuleSettings *this)

{
  (this->Identifier).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Identifier).Name.Data.ArrayNum = 0;
  (this->Identifier).Name.Data.ArrayMax = 0;
  ::FString::FString(&(this->Identifier).Type,L"Module");
  (this->Icon).AssetPath.PackageName.ComparisonIndex = 0;
  (this->Icon).AssetPath.PackageName.Number = 0;
  (this->Icon).AssetPath.AssetName.ComparisonIndex = 0;
  (this->Icon).AssetPath.AssetName.Number = 0;
  (this->Icon).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Icon).SubPathString.Data.ArrayNum = 0;
  (this->Icon).SubPathString.Data.ArrayMax = 0;
  (this->Category).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Category).Data.ArrayNum = 0;
  (this->Category).Data.ArrayMax = 0;
  (this->Keywords).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keywords).Data.ArrayNum = 0;
  (this->Keywords).Data.ArrayMax = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->ExposedConnectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExposedConnectors).ArrayNum = 0;
  (this->ExposedConnectors).ArrayMax = 0;
  return this;
}

// ~FRigModuleSettings @ 14a226050

void __thiscall FRigModuleSettings::~FRigModuleSettings(FRigModuleSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FRigModuleConnector,int>
            ((FRigModuleConnector *)(this->ExposedConnectors).AllocatorInstance.Data,
             (this->ExposedConnectors).ArrayNum);
  pFVar1 = (this->ExposedConnectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Keywords).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Category).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Icon).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Identifier).Type.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Identifier).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// StaticStruct @ 14a37adb0

UScriptStruct * __cdecl FRigModuleSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigModuleSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigModuleSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigModuleSettings,(UObject *)pUVar1,
                         L"RigModuleSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRigModuleSettings.OuterSingleton;
}

// operator= @ 14a3bdd80

FRigModuleSettings * __thiscall
FRigModuleSettings::operator=(FRigModuleSettings *this,FRigModuleSettings *param_1)

{
  TArray<FRigModuleConnector,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRigModuleConnector *pFVar4;
  
  ::FString::operator=((FString *)this,(FString *)param_1);
  ::FString::operator=(&(this->Identifier).Type,&(param_1->Identifier).Type);
  FSoftObjectPath::operator=(&this->Icon,&param_1->Icon);
  ::FString::operator=(&this->Category,&param_1->Category);
  ::FString::operator=(&this->Keywords,&param_1->Keywords);
  ::FString::operator=(&this->Description,&param_1->Description);
  pTVar1 = &this->ExposedConnectors;
  if (pTVar1 != &param_1->ExposedConnectors) {
    DestructItems<FRigModuleConnector,int>
              ((FRigModuleConnector *)(pTVar1->AllocatorInstance).Data,
               (this->ExposedConnectors).ArrayNum);
    iVar3 = (param_1->ExposedConnectors).ArrayNum;
    piVar2 = &(this->ExposedConnectors).ArrayMax;
    pFVar4 = (FRigModuleConnector *)(param_1->ExposedConnectors).AllocatorInstance.Data;
    (this->ExposedConnectors).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FRigModuleConnector,FRigModuleConnector,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

