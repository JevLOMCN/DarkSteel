// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// FUpdateImportAssetDataParameters @ 14e4d7ef0

FUpdateImportAssetDataParameters * __thiscall
UE::Interchange::FFactoryCommon::FUpdateImportAssetDataParameters::FUpdateImportAssetDataParameters
          (FUpdateImportAssetDataParameters *this,UObject *param_1,UAssetImportData *param_2,
          UInterchangeSourceData *param_3,FString *param_4,UInterchangeBaseNodeContainer *param_5,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_6,UInterchangeTranslatorBase *param_7
          )

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FUpdateImportAssetDataParameters *pFVar7;
  
  this->AssetImportDataOuter = param_1;
  this->AssetImportData = param_2;
  this->SourceData = param_3;
  ::FString::FString(&this->NodeUniqueID,param_4);
  pTVar1 = &this->Pipelines;
  this->NodeContainer = param_5;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_6->ArrayNum;
  pFVar4 = (param_6->AllocatorInstance).Data;
  piVar2 = &(this->Pipelines).ArrayMax;
  (this->Pipelines).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  this->Translator = param_7;
  if (this->AssetImportDataOuter == (UObject *)0x0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_554463325677682547>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
                       ,0x8d,"AssetImportDataOuter");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUpdateImportAssetDataParameters *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (this->SourceData == (UInterchangeSourceData *)0x0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_554463325677682546>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
                       ,0x8e,"SourceData");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUpdateImportAssetDataParameters *)(*pcVar5)();
      return pFVar7;
    }
  }
  if ((this->NodeUniqueID).Data.ArrayNum < 2) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_554463325677682545>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
                       ,0x8f,"!NodeUniqueID.IsEmpty()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUpdateImportAssetDataParameters *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (this->NodeContainer == (UInterchangeBaseNodeContainer *)0x0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_554463325677682544>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
                       ,0x90,"NodeContainer");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUpdateImportAssetDataParameters *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (this->Translator == (UInterchangeTranslatorBase *)0x0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_554463325677682543>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
                       ,0x91,"Translator");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUpdateImportAssetDataParameters *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar4 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return this;
}

