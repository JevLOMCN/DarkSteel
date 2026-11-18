// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 9

// StaticStruct @ 14ad72190

UScriptStruct * __cdecl FMetasoundFrontendClass::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClass.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClass.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClass,(UObject *)pUVar1,
                         L"MetasoundFrontendClass");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendClass.OuterSingleton;
}

// FMetasoundFrontendClass @ 14ad9a050

FMetasoundFrontendClass * __thiscall
FMetasoundFrontendClass::FMetasoundFrontendClass
          (FMetasoundFrontendClass *this,FMetasoundFrontendClass *param_1)

{
  FMetasoundFrontendClassInterface *pFVar1;
  int *piVar2;
  TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FMetasoundFrontendClassEnvironmentVariable,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FMetasoundFrontendClassInput *pFVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  FMetasoundFrontendVersionNumber FVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  ushort uVar14;
  
  this->_padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  pFVar1 = &this->Interface;
  uVar10 = (param_1->ID).B;
  uVar11 = (param_1->ID).C;
  uVar12 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar10;
  (this->ID).C = uVar11;
  (this->ID).D = uVar12;
  FVar8 = (param_1->Metadata).ClassName.Name;
  (this->Metadata).ClassName.Namespace = (param_1->Metadata).ClassName.Namespace;
  (this->Metadata).ClassName.Name = FVar8;
  FVar9 = (param_1->Metadata).Version;
  (this->Metadata).ClassName.Variant = (param_1->Metadata).ClassName.Variant;
  (this->Metadata).Version = FVar9;
  uVar13 = (param_1->Metadata).field_0x21;
  uVar14 = (param_1->Metadata).AccessFlags;
  uVar10 = (param_1->Metadata).ChangeID.A;
  uVar11 = (param_1->Metadata).ChangeID.B;
  uVar12 = (param_1->Metadata).ChangeID.C;
  (this->Metadata).Type = (param_1->Metadata).Type;
  (this->Metadata).field_0x21 = uVar13;
  (this->Metadata).AccessFlags = uVar14;
  (this->Metadata).ChangeID.A = uVar10;
  (this->Metadata).ChangeID.B = uVar11;
  (this->Metadata).ChangeID.C = uVar12;
  (this->Metadata).ChangeID.D = (param_1->Metadata).ChangeID.D;
  piVar2 = &(this->Interface).Inputs.ArrayMax;
  (pFVar1->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Interface).Inputs.ArrayNum;
  pFVar6 = (FMetasoundFrontendClassInput *)(param_1->Interface).Inputs.AllocatorInstance.Data;
  (this->Interface).Inputs.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar5,0,(ForAnyElementType *)pFVar1,iVar5,piVar2);
    ConstructItems<FMetasoundFrontendClassInput,FMetasoundFrontendClassInput,int>
              ((pFVar1->Inputs).AllocatorInstance.Data,pFVar6,iVar5);
  }
  pTVar3 = &(this->Interface).Outputs;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Interface).Outputs.ArrayMax;
  iVar5 = (param_1->Interface).Outputs.ArrayNum;
  pFVar7 = (param_1->Interface).Outputs.AllocatorInstance.Data;
  (this->Interface).Outputs.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x34,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar5 * 0x34);
  }
  pTVar4 = &(this->Interface).Environment;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Interface).Environment.ArrayMax;
  iVar5 = (param_1->Interface).Environment.ArrayNum;
  pFVar7 = (param_1->Interface).Environment.AllocatorInstance.Data;
  (this->Interface).Environment.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar5 * 0x14);
  }
  uVar10 = (param_1->Interface).ChangeID.B;
  uVar11 = (param_1->Interface).ChangeID.C;
  uVar12 = (param_1->Interface).ChangeID.D;
  (this->Interface).ChangeID.A = (param_1->Interface).ChangeID.A;
  (this->Interface).ChangeID.B = uVar10;
  (this->Interface).ChangeID.C = uVar11;
  (this->Interface).ChangeID.D = uVar12;
  return this;
}

// ~FMetasoundFrontendClass @ 14ad9e3b0

void __thiscall FMetasoundFrontendClass::~FMetasoundFrontendClass(FMetasoundFrontendClass *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Interface).Environment.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Interface).Outputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)(this->Interface).Inputs.AllocatorInstance.Data,
             (this->Interface).Inputs.ArrayNum);
  pFVar1 = (this->Interface).Inputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14ad9f4a0

FMetasoundFrontendClass * __thiscall
FMetasoundFrontendClass::operator=(FMetasoundFrontendClass *this,FMetasoundFrontendClass *param_1)

{
  FMetasoundFrontendClassInterface *pFVar1;
  FMetasoundFrontendClassInterface *pFVar2;
  TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FMetasoundFrontendClassEnvironmentVariable,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FMetasoundFrontendClassEnvironmentVariable,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  FMetasoundFrontendVersionNumber FVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  ushort uVar14;
  
  uVar10 = (param_1->ID).B;
  uVar11 = (param_1->ID).C;
  uVar12 = (param_1->ID).D;
  pFVar1 = &param_1->Interface;
  pFVar2 = &this->Interface;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar10;
  (this->ID).C = uVar11;
  (this->ID).D = uVar12;
  FVar8 = (param_1->Metadata).ClassName.Name;
  (this->Metadata).ClassName.Namespace = (param_1->Metadata).ClassName.Namespace;
  (this->Metadata).ClassName.Name = FVar8;
  FVar9 = (param_1->Metadata).Version;
  (this->Metadata).ClassName.Variant = (param_1->Metadata).ClassName.Variant;
  (this->Metadata).Version = FVar9;
  uVar13 = (param_1->Metadata).field_0x21;
  uVar14 = (param_1->Metadata).AccessFlags;
  uVar10 = (param_1->Metadata).ChangeID.A;
  uVar11 = (param_1->Metadata).ChangeID.B;
  uVar12 = (param_1->Metadata).ChangeID.C;
  (this->Metadata).Type = (param_1->Metadata).Type;
  (this->Metadata).field_0x21 = uVar13;
  (this->Metadata).AccessFlags = uVar14;
  (this->Metadata).ChangeID.A = uVar10;
  (this->Metadata).ChangeID.B = uVar11;
  (this->Metadata).ChangeID.C = uVar12;
  (this->Metadata).ChangeID.D = (param_1->Metadata).ChangeID.D;
  if (pFVar2 != pFVar1) {
    DestructItems<FMetasoundFrontendClassInput,int>
              ((FMetasoundFrontendClassInput *)(pFVar2->Inputs).AllocatorInstance.Data,
               (this->Interface).Inputs.ArrayNum);
    pFVar7 = (pFVar2->Inputs).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar2->Inputs).AllocatorInstance.Data = (pFVar1->Inputs).AllocatorInstance.Data;
    (pFVar1->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Interface).Inputs.ArrayNum = (param_1->Interface).Inputs.ArrayNum;
    (this->Interface).Inputs.ArrayMax = (param_1->Interface).Inputs.ArrayMax;
    (param_1->Interface).Inputs.ArrayNum = 0;
    (param_1->Interface).Inputs.ArrayMax = 0;
  }
  pTVar3 = &(param_1->Interface).Outputs;
  pTVar4 = &(this->Interface).Outputs;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Interface).Outputs.ArrayNum = (param_1->Interface).Outputs.ArrayNum;
    (this->Interface).Outputs.ArrayMax = (param_1->Interface).Outputs.ArrayMax;
    (param_1->Interface).Outputs.ArrayNum = 0;
    (param_1->Interface).Outputs.ArrayMax = 0;
  }
  pTVar5 = &(param_1->Interface).Environment;
  pTVar6 = &(this->Interface).Environment;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Interface).Environment.ArrayNum = (param_1->Interface).Environment.ArrayNum;
    (this->Interface).Environment.ArrayMax = (param_1->Interface).Environment.ArrayMax;
    (param_1->Interface).Environment.ArrayNum = 0;
    (param_1->Interface).Environment.ArrayMax = 0;
  }
  uVar10 = (param_1->Interface).ChangeID.B;
  uVar11 = (param_1->Interface).ChangeID.C;
  uVar12 = (param_1->Interface).ChangeID.D;
  (this->Interface).ChangeID.A = (param_1->Interface).ChangeID.A;
  (this->Interface).ChangeID.B = uVar10;
  (this->Interface).ChangeID.C = uVar11;
  (this->Interface).ChangeID.D = uVar12;
  return this;
}

// GetDefaultInterface @ 14adbde30

FMetasoundFrontendClassInterface * __thiscall
FMetasoundFrontendClass::GetDefaultInterface(FMetasoundFrontendClass *this)

{
  return &this->Interface;
}

// GetDefaultInterface @ 14adbde40

FMetasoundFrontendClassInterface * __thiscall
FMetasoundFrontendClass::GetDefaultInterface(FMetasoundFrontendClass *this)

{
  return &this->Interface;
}

// GetInterfaceForNode @ 14adbf660

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendClassInterface * __thiscall
FMetasoundFrontendClass::GetInterfaceForNode
          (FMetasoundFrontendClass *this,FMetasoundFrontendNode *param_1)

{
  FMetasoundFrontendClassInterface *pFVar1;
  FString local_18;
  
  pFVar1 = TInstancedStruct<FMetasoundFrontendClassInterface>::
           GetPtr<FMetasoundFrontendClassInterface,void>(&param_1->ClassInterfaceOverride);
  if (pFVar1 != (FMetasoundFrontendClassInterface *)0x0) {
    if (((this->Metadata).Type != External) && (1 < (byte)LogMetaSound._0_1_)) {
      FMetasoundFrontendClassName::ToString(&(this->Metadata).ClassName,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return pFVar1;
  }
  return &this->Interface;
}

// SetDefaultInterface @ 14add0860

void __thiscall
FMetasoundFrontendClass::SetDefaultInterface
          (FMetasoundFrontendClass *this,FMetasoundFrontendClassInterface *param_1)

{
  FMetasoundFrontendClassInterface::operator=(&this->Interface,param_1);
  return;
}

// FMetasoundFrontendClass @ 14addc970

FMetasoundFrontendClass * __thiscall
FMetasoundFrontendClass::FMetasoundFrontendClass
          (FMetasoundFrontendClass *this,FMetasoundFrontendClass *param_1)

{
  FName FVar1;
  FMetasoundFrontendVersionNumber FVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  ushort uVar7;
  
  this->_padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  uVar3 = (param_1->ID).B;
  uVar4 = (param_1->ID).C;
  uVar5 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar3;
  (this->ID).C = uVar4;
  (this->ID).D = uVar5;
  FVar1 = (param_1->Metadata).ClassName.Name;
  (this->Metadata).ClassName.Namespace = (param_1->Metadata).ClassName.Namespace;
  (this->Metadata).ClassName.Name = FVar1;
  FVar2 = (param_1->Metadata).Version;
  (this->Metadata).ClassName.Variant = (param_1->Metadata).ClassName.Variant;
  (this->Metadata).Version = FVar2;
  uVar6 = (param_1->Metadata).field_0x21;
  uVar7 = (param_1->Metadata).AccessFlags;
  uVar3 = (param_1->Metadata).ChangeID.A;
  uVar4 = (param_1->Metadata).ChangeID.B;
  uVar5 = (param_1->Metadata).ChangeID.C;
  (this->Metadata).Type = (param_1->Metadata).Type;
  (this->Metadata).field_0x21 = uVar6;
  (this->Metadata).AccessFlags = uVar7;
  (this->Metadata).ChangeID.A = uVar3;
  (this->Metadata).ChangeID.B = uVar4;
  (this->Metadata).ChangeID.C = uVar5;
  (this->Metadata).ChangeID.D = (param_1->Metadata).ChangeID.D;
  (this->Interface).Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Inputs.AllocatorInstance.Data =
       (param_1->Interface).Inputs.AllocatorInstance.Data;
  (param_1->Interface).Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Inputs.ArrayNum = (param_1->Interface).Inputs.ArrayNum;
  (this->Interface).Inputs.ArrayMax = (param_1->Interface).Inputs.ArrayMax;
  (param_1->Interface).Inputs.ArrayNum = 0;
  (param_1->Interface).Inputs.ArrayMax = 0;
  (this->Interface).Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Outputs.AllocatorInstance.Data =
       (param_1->Interface).Outputs.AllocatorInstance.Data;
  (param_1->Interface).Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Outputs.ArrayNum = (param_1->Interface).Outputs.ArrayNum;
  (this->Interface).Outputs.ArrayMax = (param_1->Interface).Outputs.ArrayMax;
  (param_1->Interface).Outputs.ArrayNum = 0;
  (param_1->Interface).Outputs.ArrayMax = 0;
  (this->Interface).Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Environment.AllocatorInstance.Data =
       (param_1->Interface).Environment.AllocatorInstance.Data;
  (param_1->Interface).Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Environment.ArrayNum = (param_1->Interface).Environment.ArrayNum;
  (this->Interface).Environment.ArrayMax = (param_1->Interface).Environment.ArrayMax;
  (param_1->Interface).Environment.ArrayNum = 0;
  (param_1->Interface).Environment.ArrayMax = 0;
  uVar3 = (param_1->Interface).ChangeID.B;
  uVar4 = (param_1->Interface).ChangeID.C;
  uVar5 = (param_1->Interface).ChangeID.D;
  (this->Interface).ChangeID.A = (param_1->Interface).ChangeID.A;
  (this->Interface).ChangeID.B = uVar3;
  (this->Interface).ChangeID.C = uVar4;
  (this->Interface).ChangeID.D = uVar5;
  return this;
}

