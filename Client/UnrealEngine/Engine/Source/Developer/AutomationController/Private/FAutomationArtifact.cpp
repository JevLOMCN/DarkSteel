// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 3

// StaticStruct @ 148c4d660

UScriptStruct * __cdecl FAutomationArtifact::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomationArtifact.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AutomationController();
    Z_Registration_Info_UScriptStruct_FAutomationArtifact.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomationArtifact,(UObject *)pUVar1,
                         L"AutomationArtifact");
  }
  return Z_Registration_Info_UScriptStruct_FAutomationArtifact.OuterSingleton;
}

// FAutomationArtifact @ 148c52b40

FAutomationArtifact * __thiscall
FAutomationArtifact::FAutomationArtifact(FAutomationArtifact *this,FAutomationArtifact *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1->Id).B;
  uVar2 = (param_1->Id).C;
  uVar3 = (param_1->Id).D;
  (this->Id).A = (param_1->Id).A;
  (this->Id).B = uVar1;
  (this->Id).C = uVar2;
  (this->Id).D = uVar3;
  ::FString::FString(&this->Name,&param_1->Name);
  this->Type = param_1->Type;
  *(undefined8 *)&(this->Files).field_0x0 = 0;
  *(undefined8 *)&(this->Files).field_0x8 = 0;
  *(undefined8 *)&(this->Files).field_0x20 = 0;
  *(undefined4 *)&(this->Files).field_0x28 = 0;
  *(undefined4 *)&(this->Files).field_0x2c = 0x80;
  *(undefined4 *)&(this->Files).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Files).field_0x34 = 0;
  *(undefined8 *)&(this->Files).field_0x40 = 0;
  *(undefined4 *)&(this->Files).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->Files,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->Files);
  *(undefined8 *)&(this->LocalFiles).field_0x0 = 0;
  *(undefined8 *)&(this->LocalFiles).field_0x8 = 0;
  *(undefined8 *)&(this->LocalFiles).field_0x20 = 0;
  *(undefined4 *)&(this->LocalFiles).field_0x28 = 0;
  *(undefined4 *)&(this->LocalFiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalFiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalFiles).field_0x34 = 0;
  *(undefined8 *)&(this->LocalFiles).field_0x40 = 0;
  *(undefined4 *)&(this->LocalFiles).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->LocalFiles,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->LocalFiles);
  return this;
}

// ~FAutomationArtifact @ 148c53d80

void __thiscall FAutomationArtifact::~FAutomationArtifact(FAutomationArtifact *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->LocalFiles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LocalFiles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocalFiles);
  *(undefined4 *)&(this->Files).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Files).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Files);
  pFVar2 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

