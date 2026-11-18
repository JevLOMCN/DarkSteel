// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// StaticStruct @ 1460630b0

UScriptStruct * __cdecl FNavigationToolSaveState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavigationToolSaveState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FNavigationToolSaveState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationToolSaveState,(UObject *)pUVar1,
                         L"NavigationToolSaveState");
  }
  return Z_Registration_Info_UScriptStruct_FNavigationToolSaveState.OuterSingleton;
}

// FNavigationToolSaveState @ 1460942a0

FNavigationToolSaveState * __thiscall
FNavigationToolSaveState::FNavigationToolSaveState(FNavigationToolSaveState *this)

{
  (this->SerializedTree).RootNode.LocalIndex = -1;
  (this->SerializedTree).RootNode.GlobalIndex = -1;
  (this->SerializedTree).RootNode.ChildrenIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SerializedTree).RootNode.ChildrenIndices.ArrayNum = 0;
  (this->SerializedTree).RootNode.ChildrenIndices.ArrayMax = 0;
  (this->SerializedTree).SceneItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedTree).SceneItems.ArrayNum = 0;
  (this->SerializedTree).SceneItems.ArrayMax = 0;
  *(undefined8 *)&(this->SerializedTree).ItemTreeMap = 0;
  *(undefined8 *)&(this->SerializedTree).ItemTreeMap.field_0x8 = 0;
  *(undefined8 *)&(this->SerializedTree).ItemTreeMap.field_0x20 = 0;
  (this->SerializedTree).RootNode.ParentIndex = -1;
  *(undefined4 *)&(this->SerializedTree).ItemTreeMap.field_0x28 = 0;
  *(undefined4 *)&(this->SerializedTree).ItemTreeMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SerializedTree).ItemTreeMap.field_0x34 = 0;
  *(undefined4 *)&(this->SerializedTree).ItemTreeMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SerializedTree).ItemTreeMap.field_0x40 = 0;
  *(undefined4 *)&(this->SerializedTree).ItemTreeMap.field_0x48 = 0;
  (this->SerializedTree).RootNode.OwningTree = &this->SerializedTree;
  *(undefined8 *)&this->ItemColorMap = 0;
  *(undefined8 *)&(this->ItemColorMap).field_0x8 = 0;
  *(undefined8 *)&(this->ItemColorMap).field_0x20 = 0;
  *(undefined4 *)&(this->ItemColorMap).field_0x28 = 0;
  *(undefined4 *)&(this->ItemColorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemColorMap).field_0x34 = 0;
  *(undefined4 *)&(this->ItemColorMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemColorMap).field_0x40 = 0;
  *(undefined4 *)&(this->ItemColorMap).field_0x48 = 0;
  (this->ToolViewSaveStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ToolViewSaveStates).ArrayNum = 0;
  (this->ToolViewSaveStates).ArrayMax = 0;
  (this->ContextPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextPath).Data.ArrayNum = 0;
  (this->ContextPath).Data.ArrayMax = 0;
  return this;
}

// ~FNavigationToolSaveState @ 146097f20

void __thiscall FNavigationToolSaveState::~FNavigationToolSaveState(FNavigationToolSaveState *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ContextPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNavigationToolViewSaveState,int>
            ((FNavigationToolViewSaveState *)(this->ToolViewSaveStates).AllocatorInstance.Data,
             (this->ToolViewSaveStates).ArrayNum);
  pFVar1 = (this->ToolViewSaveStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ItemColorMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ItemColorMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemColorMap);
  FNavigationToolSerializedTree::~FNavigationToolSerializedTree(&this->SerializedTree);
  return;
}

