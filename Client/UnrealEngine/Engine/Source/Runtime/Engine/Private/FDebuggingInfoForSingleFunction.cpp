// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147675fd0

UScriptStruct * __cdecl FDebuggingInfoForSingleFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDebuggingInfoForSingleFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDebuggingInfoForSingleFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction,(UObject *)pUVar1
                         ,L"DebuggingInfoForSingleFunction");
  }
  return Z_Registration_Info_UScriptStruct_FDebuggingInfoForSingleFunction.OuterSingleton;
}

// FDebuggingInfoForSingleFunction @ 1476878d0

FDebuggingInfoForSingleFunction * __thiscall
FDebuggingInfoForSingleFunction::FDebuggingInfoForSingleFunction
          (FDebuggingInfoForSingleFunction *this)

{
  *(undefined8 *)&this->LineNumberToSourceNodeMap = 0;
  *(undefined8 *)&(this->LineNumberToSourceNodeMap).field_0x8 = 0;
  *(undefined8 *)&(this->LineNumberToSourceNodeMap).field_0x20 = 0;
  *(undefined4 *)&(this->LineNumberToSourceNodeMap).field_0x28 = 0;
  *(undefined4 *)&(this->LineNumberToSourceNodeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LineNumberToSourceNodeMap).field_0x34 = 0;
  *(undefined4 *)&(this->LineNumberToSourceNodeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LineNumberToSourceNodeMap).field_0x40 = 0;
  *(undefined4 *)&(this->LineNumberToSourceNodeMap).field_0x48 = 0;
  *(undefined8 *)&this->LineNumberToSourcePinMap = 0;
  *(undefined8 *)&(this->LineNumberToSourcePinMap).field_0x8 = 0;
  *(undefined8 *)&(this->LineNumberToSourcePinMap).field_0x20 = 0;
  *(undefined4 *)&(this->LineNumberToSourcePinMap).field_0x28 = 0;
  *(undefined4 *)&(this->LineNumberToSourcePinMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LineNumberToSourcePinMap).field_0x34 = 0;
  *(undefined4 *)&(this->LineNumberToSourcePinMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LineNumberToSourcePinMap).field_0x40 = 0;
  *(undefined4 *)&(this->LineNumberToSourcePinMap).field_0x48 = 0;
  *(undefined8 *)&this->SourcePinToLineNumbersMap = 0;
  *(undefined8 *)&(this->SourcePinToLineNumbersMap).field_0x8 = 0;
  *(undefined8 *)&(this->SourcePinToLineNumbersMap).field_0x20 = 0;
  *(undefined4 *)&(this->SourcePinToLineNumbersMap).field_0x28 = 0;
  *(undefined4 *)&(this->SourcePinToLineNumbersMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourcePinToLineNumbersMap).field_0x34 = 0;
  *(undefined4 *)&(this->SourcePinToLineNumbersMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SourcePinToLineNumbersMap).field_0x40 = 0;
  *(undefined4 *)&(this->SourcePinToLineNumbersMap).field_0x48 = 0;
  *(undefined8 *)&this->PureNodeScriptCodeRangeMap = 0;
  *(undefined8 *)&(this->PureNodeScriptCodeRangeMap).field_0x8 = 0;
  *(undefined8 *)&(this->PureNodeScriptCodeRangeMap).field_0x20 = 0;
  *(undefined4 *)&(this->PureNodeScriptCodeRangeMap).field_0x28 = 0;
  *(undefined4 *)&(this->PureNodeScriptCodeRangeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PureNodeScriptCodeRangeMap).field_0x34 = 0;
  *(undefined4 *)&(this->PureNodeScriptCodeRangeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PureNodeScriptCodeRangeMap).field_0x40 = 0;
  *(undefined4 *)&(this->PureNodeScriptCodeRangeMap).field_0x48 = 0;
  *(undefined8 *)&this->LineNumberToTunnelInstanceSourceNodesMap = 0;
  *(undefined8 *)&(this->LineNumberToTunnelInstanceSourceNodesMap).field_0x8 = 0;
  *(undefined8 *)&(this->LineNumberToTunnelInstanceSourceNodesMap).field_0x20 = 0;
  *(undefined4 *)&(this->LineNumberToTunnelInstanceSourceNodesMap).field_0x28 = 0;
  *(undefined4 *)&(this->LineNumberToTunnelInstanceSourceNodesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LineNumberToTunnelInstanceSourceNodesMap).field_0x34 = 0;
  *(undefined4 *)&(this->LineNumberToTunnelInstanceSourceNodesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LineNumberToTunnelInstanceSourceNodesMap).field_0x40 = 0;
  *(undefined4 *)&(this->LineNumberToTunnelInstanceSourceNodesMap).field_0x48 = 0;
  return this;
}

// ~FDebuggingInfoForSingleFunction @ 14768a560

void __thiscall
FDebuggingInfoForSingleFunction::~FDebuggingInfoForSingleFunction
          (FDebuggingInfoForSingleFunction *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->LineNumberToTunnelInstanceSourceNodesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LineNumberToTunnelInstanceSourceNodesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LineNumberToTunnelInstanceSourceNodesMap);
  *(undefined4 *)&(this->PureNodeScriptCodeRangeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PureNodeScriptCodeRangeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,FInt32Range>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,FInt32Range>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,FInt32Range>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PureNodeScriptCodeRangeMap);
  *(undefined4 *)&(this->SourcePinToLineNumbersMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SourcePinToLineNumbersMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FEdGraphPinReference,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FEdGraphPinReference,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FEdGraphPinReference,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourcePinToLineNumbersMap);
  *(undefined4 *)&(this->LineNumberToSourcePinMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LineNumberToSourcePinMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FEdGraphPinReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FEdGraphPinReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FEdGraphPinReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LineNumberToSourcePinMap);
  *(undefined4 *)&(this->LineNumberToSourceNodeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LineNumberToSourceNodeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

