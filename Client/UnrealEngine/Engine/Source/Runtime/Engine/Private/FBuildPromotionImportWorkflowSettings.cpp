// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1487dd4a0

UScriptStruct * __cdecl FBuildPromotionImportWorkflowSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBuildPromotionImportWorkflowSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBuildPromotionImportWorkflowSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings,
                         (UObject *)pUVar1,L"BuildPromotionImportWorkflowSettings");
  }
  return Z_Registration_Info_UScriptStruct_FBuildPromotionImportWorkflowSettings.OuterSingleton;
}

// FBuildPromotionImportWorkflowSettings @ 148805770

/* WARNING: Type propagation algorithm not settling */

FBuildPromotionImportWorkflowSettings * __thiscall
FBuildPromotionImportWorkflowSettings::FBuildPromotionImportWorkflowSettings
          (FBuildPromotionImportWorkflowSettings *this)

{
  (this->Diffuse).ImportFilePath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Diffuse).ImportFilePath.FilePath.Data.ArrayNum = 0;
  (this->Diffuse).ImportFilePath.FilePath.Data.ArrayMax = 0;
  (this->Diffuse).FactorySettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Diffuse).FactorySettings.ArrayNum = 0;
  (this->Diffuse).FactorySettings.ArrayMax = 0;
  (this->Normal).ImportFilePath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Normal).ImportFilePath.FilePath.Data.ArrayNum = 0;
  (this->Normal).ImportFilePath.FilePath.Data.ArrayMax = 0;
  (this->Normal).FactorySettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normal).FactorySettings.ArrayNum = 0;
  (this->Normal).FactorySettings.ArrayMax = 0;
  (this->StaticMesh).ImportFilePath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticMesh).ImportFilePath.FilePath.Data.ArrayNum = 0;
  (this->StaticMesh).ImportFilePath.FilePath.Data.ArrayMax = 0;
  (this->StaticMesh).FactorySettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMesh).FactorySettings.ArrayNum = 0;
  (this->StaticMesh).FactorySettings.ArrayMax = 0;
  (this->ReimportStaticMesh).ImportFilePath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReimportStaticMesh).ImportFilePath.FilePath.Data.ArrayNum = 0;
  (this->ReimportStaticMesh).ImportFilePath.FilePath.Data.ArrayMax = 0;
  (this->ReimportStaticMesh).FactorySettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ReimportStaticMesh).FactorySettings.ArrayNum = 0;
  (this->ReimportStaticMesh).FactorySettings.ArrayMax = 0;
  (this->BlendShapeMesh).ImportFilePath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BlendShapeMesh).ImportFilePath.FilePath.Data.ArrayNum = 0;
  (this->BlendShapeMesh).ImportFilePath.FilePath.Data.ArrayMax = 0;
  (this->BlendShapeMesh).FactorySettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendShapeMesh).FactorySettings.ArrayNum = 0;
  (this->BlendShapeMesh).FactorySettings.ArrayMax = 0;
  (this->MorphMesh).ImportFilePath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MorphMesh).ImportFilePath.FilePath.Data.ArrayNum = 0;
  (this->MorphMesh).ImportFilePath.FilePath.Data.ArrayMax = 0;
  (this->MorphMesh).FactorySettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphMesh).FactorySettings.ArrayNum = 0;
  (this->MorphMesh).FactorySettings.ArrayMax = 0;
  (this->SkeletalMesh).ImportFilePath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SkeletalMesh).ImportFilePath.FilePath.Data.ArrayNum = 0;
  (this->SkeletalMesh).ImportFilePath.FilePath.Data.ArrayMax = 0;
  (this->SkeletalMesh).FactorySettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMesh).FactorySettings.ArrayNum = 0;
  (this->SkeletalMesh).FactorySettings.ArrayMax = 0;
  (this->Animation).ImportFilePath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Animation).ImportFilePath.FilePath.Data.ArrayNum = 0;
  (this->Animation).ImportFilePath.FilePath.Data.ArrayMax = 0;
  (this->Animation).FactorySettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Animation).FactorySettings.ArrayNum = 0;
  (this->Animation).FactorySettings.ArrayMax = 0;
  (this->Sound).ImportFilePath.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Sound).ImportFilePath.FilePath.Data.ArrayNum = 0;
  (this->Sound).ImportFilePath.FilePath.Data.ArrayMax = 0;
  (this->Sound).FactorySettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sound).FactorySettings.ArrayNum = 0;
  (this->Sound).FactorySettings.ArrayMax = 0;
  (this->SurroundSound).ImportFilePath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SurroundSound).ImportFilePath.FilePath.Data.ArrayNum = 0;
  (this->SurroundSound).ImportFilePath.FilePath.Data.ArrayMax = 0;
  (this->SurroundSound).FactorySettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurroundSound).FactorySettings.ArrayNum = 0;
  (this->SurroundSound).FactorySettings.ArrayMax = 0;
  (this->OtherAssetsToImport).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OtherAssetsToImport).ArrayNum = 0;
  (this->OtherAssetsToImport).ArrayMax = 0;
  return this;
}

// ~FBuildPromotionImportWorkflowSettings @ 14880be70

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FBuildPromotionImportWorkflowSettings::~FBuildPromotionImportWorkflowSettings
          (FBuildPromotionImportWorkflowSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FEditorImportWorkflowDefinition,int>
            ((FEditorImportWorkflowDefinition *)(this->OtherAssetsToImport).AllocatorInstance.Data,
             (this->OtherAssetsToImport).ArrayNum);
  pFVar1 = (this->OtherAssetsToImport).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImportFactorySettingValues,int>
            ((FImportFactorySettingValues *)
             (this->SurroundSound).FactorySettings.AllocatorInstance.Data,
             (this->SurroundSound).FactorySettings.ArrayNum);
  pFVar1 = (this->SurroundSound).FactorySettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SurroundSound).ImportFilePath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImportFactorySettingValues,int>
            ((FImportFactorySettingValues *)(this->Sound).FactorySettings.AllocatorInstance.Data,
             (this->Sound).FactorySettings.ArrayNum);
  pFVar1 = (this->Sound).FactorySettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Sound).ImportFilePath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImportFactorySettingValues,int>
            ((FImportFactorySettingValues *)(this->Animation).FactorySettings.AllocatorInstance.Data
             ,(this->Animation).FactorySettings.ArrayNum);
  pFVar1 = (this->Animation).FactorySettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Animation).ImportFilePath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImportFactorySettingValues,int>
            ((FImportFactorySettingValues *)
             (this->SkeletalMesh).FactorySettings.AllocatorInstance.Data,
             (this->SkeletalMesh).FactorySettings.ArrayNum);
  pFVar1 = (this->SkeletalMesh).FactorySettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletalMesh).ImportFilePath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImportFactorySettingValues,int>
            ((FImportFactorySettingValues *)(this->MorphMesh).FactorySettings.AllocatorInstance.Data
             ,(this->MorphMesh).FactorySettings.ArrayNum);
  pFVar1 = (this->MorphMesh).FactorySettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MorphMesh).ImportFilePath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImportFactorySettingValues,int>
            ((FImportFactorySettingValues *)
             (this->BlendShapeMesh).FactorySettings.AllocatorInstance.Data,
             (this->BlendShapeMesh).FactorySettings.ArrayNum);
  pFVar1 = (this->BlendShapeMesh).FactorySettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlendShapeMesh).ImportFilePath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImportFactorySettingValues,int>
            ((FImportFactorySettingValues *)
             (this->ReimportStaticMesh).FactorySettings.AllocatorInstance.Data,
             (this->ReimportStaticMesh).FactorySettings.ArrayNum);
  pFVar1 = (this->ReimportStaticMesh).FactorySettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReimportStaticMesh).ImportFilePath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImportFactorySettingValues,int>
            ((FImportFactorySettingValues *)
             (this->StaticMesh).FactorySettings.AllocatorInstance.Data,
             (this->StaticMesh).FactorySettings.ArrayNum);
  pFVar1 = (this->StaticMesh).FactorySettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticMesh).ImportFilePath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImportFactorySettingValues,int>
            ((FImportFactorySettingValues *)(this->Normal).FactorySettings.AllocatorInstance.Data,
             (this->Normal).FactorySettings.ArrayNum);
  pFVar1 = (this->Normal).FactorySettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Normal).ImportFilePath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImportFactorySettingValues,int>
            ((FImportFactorySettingValues *)(this->Diffuse).FactorySettings.AllocatorInstance.Data,
             (this->Diffuse).FactorySettings.ArrayNum);
  pFVar1 = (this->Diffuse).FactorySettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Diffuse).ImportFilePath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14880e000

FBuildPromotionImportWorkflowSettings * __thiscall
FBuildPromotionImportWorkflowSettings::operator=
          (FBuildPromotionImportWorkflowSettings *this,
          FBuildPromotionImportWorkflowSettings *param_1)

{
  int *piVar1;
  TArray<FEditorImportWorkflowDefinition,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FEditorImportWorkflowDefinition *pFVar4;
  
  ::FString::operator=((FString *)this,(FString *)param_1);
  TArray<FImportFactorySettingValues,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Diffuse).FactorySettings,&(param_1->Diffuse).FactorySettings);
  ::FString::operator=((FString *)&this->Normal,(FString *)&param_1->Normal);
  TArray<FImportFactorySettingValues,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Normal).FactorySettings,&(param_1->Normal).FactorySettings);
  ::FString::operator=((FString *)&this->StaticMesh,(FString *)&param_1->StaticMesh);
  TArray<FImportFactorySettingValues,TSizedDefaultAllocator<32>_>::operator=
            (&(this->StaticMesh).FactorySettings,&(param_1->StaticMesh).FactorySettings);
  ::FString::operator=((FString *)&this->ReimportStaticMesh,(FString *)&param_1->ReimportStaticMesh)
  ;
  TArray<FImportFactorySettingValues,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ReimportStaticMesh).FactorySettings,
             &(param_1->ReimportStaticMesh).FactorySettings);
  ::FString::operator=((FString *)&this->BlendShapeMesh,(FString *)&param_1->BlendShapeMesh);
  TArray<FImportFactorySettingValues,TSizedDefaultAllocator<32>_>::operator=
            (&(this->BlendShapeMesh).FactorySettings,&(param_1->BlendShapeMesh).FactorySettings);
  ::FString::operator=((FString *)&this->MorphMesh,(FString *)&param_1->MorphMesh);
  TArray<FImportFactorySettingValues,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MorphMesh).FactorySettings,&(param_1->MorphMesh).FactorySettings);
  ::FString::operator=((FString *)&this->SkeletalMesh,(FString *)&param_1->SkeletalMesh);
  TArray<FImportFactorySettingValues,TSizedDefaultAllocator<32>_>::operator=
            (&(this->SkeletalMesh).FactorySettings,&(param_1->SkeletalMesh).FactorySettings);
  ::FString::operator=((FString *)&this->Animation,(FString *)&param_1->Animation);
  TArray<FImportFactorySettingValues,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Animation).FactorySettings,&(param_1->Animation).FactorySettings);
  ::FString::operator=((FString *)&this->Sound,(FString *)&param_1->Sound);
  TArray<FImportFactorySettingValues,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Sound).FactorySettings,&(param_1->Sound).FactorySettings);
  ::FString::operator=((FString *)&this->SurroundSound,(FString *)&param_1->SurroundSound);
  TArray<FImportFactorySettingValues,TSizedDefaultAllocator<32>_>::operator=
            (&(this->SurroundSound).FactorySettings,&(param_1->SurroundSound).FactorySettings);
  pTVar2 = &this->OtherAssetsToImport;
  if (pTVar2 != &param_1->OtherAssetsToImport) {
    DestructItems<FEditorImportWorkflowDefinition,int>
              ((FEditorImportWorkflowDefinition *)(pTVar2->AllocatorInstance).Data,
               (this->OtherAssetsToImport).ArrayNum);
    iVar3 = (param_1->OtherAssetsToImport).ArrayNum;
    piVar1 = &(this->OtherAssetsToImport).ArrayMax;
    pFVar4 = (FEditorImportWorkflowDefinition *)
             (param_1->OtherAssetsToImport).AllocatorInstance.Data;
    (this->OtherAssetsToImport).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FEditorImportWorkflowDefinition,FEditorImportWorkflowDefinition,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

