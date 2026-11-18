// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// StaticStruct @ 146f107f0

UScriptStruct * __cdecl FEnvQueryContextData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryContextData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FEnvQueryContextData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryContextData,(UObject *)pUVar1,
                         L"EnvQueryContextData");
  }
  return Z_Registration_Info_UScriptStruct_FEnvQueryContextData.OuterSingleton;
}

// FEnvQueryContextData @ 146f28da0

FEnvQueryContextData * __thiscall
FEnvQueryContextData::FEnvQueryContextData(FEnvQueryContextData *this,FEnvQueryContextData *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UClass *pUVar4;
  FScriptContainerElement *_Src;
  
  pUVar4 = (param_1->ValueType).Class.field0_0x0.DebugPtr;
  (this->ValueType).Class.field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar1 = &this->RawData;
  this->NumValues = param_1->NumValues;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RawData).ArrayMax;
  iVar3 = (param_1->RawData).ArrayNum;
  _Src = (param_1->RawData).AllocatorInstance.Data;
  (this->RawData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  return this;
}

// operator= @ 146f2fa90

FEnvQueryContextData * __thiscall
FEnvQueryContextData::operator=(FEnvQueryContextData *this,FEnvQueryContextData *param_1)

{
  UClass *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->ValueType).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ValueType).Class.field0_0x0 = (param_1->ValueType).Class.field0_0x0;
  this->NumValues = param_1->NumValues;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&this->RawData,&param_1->RawData);
  return this;
}

