// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FPCGPinPropertiesGPU @ 149738a10

FPCGPinPropertiesGPU * __thiscall
FPCGPinPropertiesGPU::FPCGPinPropertiesGPU
          (FPCGPinPropertiesGPU *this,FName *param_1,FPCGDataTypeIdentifier *param_2)

{
  FScriptContainerElement *pFVar1;
  FText *pFVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FPCGDataTypeIdentifier local_28;
  
  pFVar2 = FText::GetEmpty();
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,param_2);
  FPCGPinProperties::FPCGPinProperties((FPCGPinProperties *)this,param_1,pFVar3,true,true,pFVar2);
  (this->PropertiesGPU).InitializationMode = FromInputPins;
  (this->PropertiesGPU).PinsToInititalizeFrom.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PropertiesGPU).PinsToInititalizeFrom.ArrayNum = 0;
  (this->PropertiesGPU).PinsToInititalizeFrom.ArrayMax = 0;
  (this->PropertiesGPU).DataCountMode = FromInputData;
  (this->PropertiesGPU).DataMultiplicity = Pairwise;
  (this->PropertiesGPU).ElementCountMode = FromInputData;
  (this->PropertiesGPU).ElementMultiplicity = Product;
  (this->PropertiesGPU).CreatedKernelAttributeKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PropertiesGPU).CreatedKernelAttributeKeys.ArrayNum = 0;
  (this->PropertiesGPU).CreatedKernelAttributeKeys.ArrayMax = 0;
  (this->PropertiesGPU).DataCount = 1;
  (this->PropertiesGPU).ElementCount = 1;
  (this->PropertiesGPU).NumElements2D.field0_0x0._s_0.X = 0x40;
  (this->PropertiesGPU).NumElements2D.field0_0x0._s_0.Y = 0x40;
  (this->PropertiesGPU).ElementCountMultiplier = 1;
  (this->PropertiesGPU).AttributeInheritanceMode = CopyAttributeSetup;
  pFVar1 = (param_2->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// StaticStruct @ 1497895e0

UScriptStruct * __cdecl FPCGPinPropertiesGPU::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPinPropertiesGPU.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPinPropertiesGPU.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPinPropertiesGPU,(UObject *)pUVar1,
                         L"PCGPinPropertiesGPU");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPinPropertiesGPU.OuterSingleton;
}

// FPCGPinPropertiesGPU @ 1497dfa40

FPCGPinPropertiesGPU * __thiscall
FPCGPinPropertiesGPU::FPCGPinPropertiesGPU(FPCGPinPropertiesGPU *this,FPCGPinPropertiesGPU *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FPCGKernelAttributeKey *pFVar5;
  
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
            ((FPCGDataTypeIdentifier *)&this->_padding_,
             (FPCGDataTypeIdentifier *)&param_1->_padding_);
  pTVar1 = &(this->PropertiesGPU).PinsToInititalizeFrom;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined1 *)((longlong)&this->_padding_ + 3) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 3);
  (this->PropertiesGPU).InitializationMode = (param_1->PropertiesGPU).InitializationMode;
  piVar2 = &(this->PropertiesGPU).PinsToInititalizeFrom.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->PropertiesGPU).PinsToInititalizeFrom.ArrayNum;
  _Src = (param_1->PropertiesGPU).PinsToInititalizeFrom.AllocatorInstance.Data;
  (this->PropertiesGPU).PinsToInititalizeFrom.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
  }
  pTVar3 = &(this->PropertiesGPU).CreatedKernelAttributeKeys;
  (this->PropertiesGPU).DataCountMode = (param_1->PropertiesGPU).DataCountMode;
  (this->PropertiesGPU).DataMultiplicity = (param_1->PropertiesGPU).DataMultiplicity;
  (this->PropertiesGPU).DataCount = (param_1->PropertiesGPU).DataCount;
  (this->PropertiesGPU).ElementCountMode = (param_1->PropertiesGPU).ElementCountMode;
  (this->PropertiesGPU).ElementMultiplicity = (param_1->PropertiesGPU).ElementMultiplicity;
  (this->PropertiesGPU).ElementCount = (param_1->PropertiesGPU).ElementCount;
  (this->PropertiesGPU).NumElements2D.field0_0x0 = (param_1->PropertiesGPU).NumElements2D.field0_0x0
  ;
  (this->PropertiesGPU).ElementCountMultiplier = (param_1->PropertiesGPU).ElementCountMultiplier;
  (this->PropertiesGPU).AttributeInheritanceMode = (param_1->PropertiesGPU).AttributeInheritanceMode
  ;
  piVar2 = &(this->PropertiesGPU).CreatedKernelAttributeKeys.ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->PropertiesGPU).CreatedKernelAttributeKeys.ArrayNum;
  pFVar5 = (FPCGKernelAttributeKey *)
           (param_1->PropertiesGPU).CreatedKernelAttributeKeys.AllocatorInstance.Data;
  (this->PropertiesGPU).CreatedKernelAttributeKeys.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FPCGKernelAttributeKey,FPCGKernelAttributeKey,int>
              ((pTVar3->AllocatorInstance).Data,pFVar5,iVar4);
  }
  return this;
}

// ~FPCGPinPropertiesGPU @ 1497e2b20

void __thiscall FPCGPinPropertiesGPU::~FPCGPinPropertiesGPU(FPCGPinPropertiesGPU *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FPCGKernelAttributeKey,int>
            ((FPCGKernelAttributeKey *)
             (this->PropertiesGPU).CreatedKernelAttributeKeys.AllocatorInstance.Data,
             (this->PropertiesGPU).CreatedKernelAttributeKeys.ArrayNum);
  pFVar1 = (this->PropertiesGPU).CreatedKernelAttributeKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertiesGPU).PinsToInititalizeFrom.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// GetElementCountMultiplier @ 149814490

uint __thiscall FPCGPinPropertiesGPU::GetElementCountMultiplier(FPCGPinPropertiesGPU *this)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((this->PropertiesGPU).ElementCountMode != Fixed) {
    uVar1 = 1;
    if (1 < (this->PropertiesGPU).ElementCountMultiplier) {
      uVar1 = (this->PropertiesGPU).ElementCountMultiplier;
    }
  }
  return uVar1;
}

