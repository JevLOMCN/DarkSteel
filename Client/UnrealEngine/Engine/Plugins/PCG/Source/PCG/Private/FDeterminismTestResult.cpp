// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 149f747e0

UScriptStruct * __cdecl FDeterminismTestResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDeterminismTestResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FDeterminismTestResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDeterminismTestResult,(UObject *)pUVar1,
                         L"DeterminismTestResult");
  }
  return Z_Registration_Info_UScriptStruct_FDeterminismTestResult.OuterSingleton;
}

// FDeterminismTestResult @ 149f94fd0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FDeterminismTestResult * __thiscall
FDeterminismTestResult::FDeterminismTestResult(FDeterminismTestResult *this)

{
  this->Index = -1;
  ::FName::FName(&this->TestResultTitle,L"Untitled");
  ::FString::FString(&this->TestResultName,L"Unnamed");
  this->Seed = -1;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&this->DataTypesTested,None);
  *(undefined8 *)&this->TestResults = 0;
  *(undefined8 *)&(this->TestResults).field_0x8 = 0;
  *(undefined8 *)&(this->TestResults).field_0x20 = 0;
  *(undefined4 *)&(this->TestResults).field_0x28 = 0;
  *(undefined4 *)&(this->TestResults).field_0x2c = 0x80;
  *(undefined4 *)&(this->TestResults).field_0x34 = 0;
  *(undefined4 *)&(this->TestResults).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TestResults).field_0x40 = 0;
  *(undefined4 *)&(this->TestResults).field_0x48 = 0;
  (this->AdditionalDetails).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalDetails).ArrayNum = 0;
  (this->AdditionalDetails).ArrayMax = 0;
  this->bFlagRaised = false;
  return this;
}

// ~FDeterminismTestResult @ 149f952f0

void __thiscall FDeterminismTestResult::~FDeterminismTestResult(FDeterminismTestResult *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->AdditionalDetails).AllocatorInstance.Data,
             (this->AdditionalDetails).ArrayNum);
  pFVar1 = (this->AdditionalDetails).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TestResults).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TestResults).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_EDeterminismLevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_EDeterminismLevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->TestResults);
  pFVar1 = (this->DataTypesTested).Ids.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TestResultName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 149f953c0

FDeterminismTestResult * __thiscall
FDeterminismTestResult::operator=(FDeterminismTestResult *this,FDeterminismTestResult *param_1)

{
  FPCGDataTypeIdentifier *pFVar1;
  TMap<FName,EDeterminismLevel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,EDeterminismLevel,0>_>
  *this_00;
  undefined1 *puVar2;
  undefined1 *this_01;
  int *piVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  this->Index = param_1->Index;
  this->TestResultTitle = param_1->TestResultTitle;
  ::FString::operator=(&this->TestResultName,&param_1->TestResultName);
  pFVar1 = &this->DataTypesTested;
  this->Seed = param_1->Seed;
  if (pFVar1 != &param_1->DataTypesTested) {
    iVar5 = (param_1->DataTypesTested).Ids.ArrayNum;
    piVar3 = &(this->DataTypesTested).Ids.ArrayMax;
    iVar6 = *piVar3;
    pFVar7 = (param_1->DataTypesTested).Ids.AllocatorInstance.Data;
    (this->DataTypesTested).Ids.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,iVar6,(ForAnyElementType *)pFVar1,iVar5,piVar3);
      ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                ((pFVar1->Ids).AllocatorInstance.Data,(FPCGDataTypeBaseId *)pFVar7,iVar5);
    }
  }
  (this->DataTypesTested).CustomSubtype = (param_1->DataTypesTested).CustomSubtype;
  this_00 = &this->TestResults;
  if (this_00 != &param_1->TestResults) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->TestResults).field_0x38,
               (int *)&(this->TestResults).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->TestResults).field_0x38,
               *(int *)&(param_1->TestResults).field_0x48);
    iVar5 = *(int *)&(param_1->TestResults).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,enum_EDeterminismLevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(this_00,iVar5);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar5,(ForAnyElementType *)this_00,(int *)&(this->TestResults).field_0x8,
               (int *)&(this->TestResults).field_0xc);
    puVar2 = &(param_1->TestResults).field_0x10;
    this_01 = &(this->TestResults).field_0x10;
    *(undefined4 *)&(this->TestResults).field_0x30 =
         *(undefined4 *)&(param_1->TestResults).field_0x30;
    *(undefined4 *)&(this->TestResults).field_0x34 =
         *(undefined4 *)&(param_1->TestResults).field_0x34;
    if (this_01 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar5 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->TestResults,(longlong)iVar5 * 0x14);
    }
  }
  pTVar4 = &this->AdditionalDetails;
  if (pTVar4 != &param_1->AdditionalDetails) {
    DestructItems<FString,int>
              ((FString *)(pTVar4->AllocatorInstance).Data,(this->AdditionalDetails).ArrayNum);
    iVar5 = (param_1->AdditionalDetails).ArrayNum;
    piVar3 = &(this->AdditionalDetails).ArrayMax;
    pFVar7 = (param_1->AdditionalDetails).AllocatorInstance.Data;
    (this->AdditionalDetails).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar3,&pTVar4->AllocatorInstance,iVar5,piVar3);
      ConstructItems<FString,FString,int>((pTVar4->AllocatorInstance).Data,(FString *)pFVar7,iVar5);
    }
  }
  this->bFlagRaised = param_1->bFlagRaised;
  return this;
}

