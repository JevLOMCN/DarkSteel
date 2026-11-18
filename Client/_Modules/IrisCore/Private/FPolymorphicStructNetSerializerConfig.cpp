// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// StaticStruct @ 144322550

UScriptStruct * __cdecl FPolymorphicStructNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPolymorphicStructNetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FPolymorphicStructNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig,
                         (UObject *)pUVar1,L"PolymorphicStructNetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FPolymorphicStructNetSerializerConfig.OuterSingleton;
}

// operator= @ 144327360

FPolymorphicStructNetSerializerConfig * __thiscall
FPolymorphicStructNetSerializerConfig::operator=
          (FPolymorphicStructNetSerializerConfig *this,
          FPolymorphicStructNetSerializerConfig *param_1)

{
  FPolymorphicNetSerializerScriptStructCache *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FTypeInfo *pFVar5;
  
  pFVar1 = &this->RegisteredTypes;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  if (pFVar1 != &param_1->RegisteredTypes) {
    DestructItems<UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,int>
              ((FTypeInfo *)(pFVar1->RegisteredTypes).AllocatorInstance.Data,
               (this->RegisteredTypes).RegisteredTypes.ArrayNum);
    iVar3 = (param_1->RegisteredTypes).RegisteredTypes.ArrayNum;
    piVar2 = &(this->RegisteredTypes).RegisteredTypes.ArrayMax;
    pFVar5 = (FTypeInfo *)(param_1->RegisteredTypes).RegisteredTypes.AllocatorInstance.Data;
    iVar4 = *piVar2;
    (this->RegisteredTypes).RegisteredTypes.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,iVar4,(ForAnyElementType *)pFVar1,iVar3,piVar2);
      ConstructItems<UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,int>
                ((pFVar1->RegisteredTypes).AllocatorInstance.Data,pFVar5,iVar3);
    }
  }
  (this->RegisteredTypes).CommonTraits = (param_1->RegisteredTypes).CommonTraits;
  (this->RegisteredTypes).EstimatedScriptStructCount =
       (param_1->RegisteredTypes).EstimatedScriptStructCount;
  return this;
}

