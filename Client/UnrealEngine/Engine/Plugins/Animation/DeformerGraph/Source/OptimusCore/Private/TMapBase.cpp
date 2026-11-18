// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 66

// Emplace<UComputeDataInterface_const_*_const_&> @ 14e12aaa0

int * __thiscall
TMapBase<UComputeDataInterface_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>_>
::Emplace<UComputeDataInterface_const_*_const_&>
          (TMapBase<UComputeDataInterface_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>_>
           *this,UComputeDataInterface **param_1)

{
  TKeyInitializer<UComputeDataInterface_const_*_const_&> local_res8;
  UComputeDataInterface **local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<UComputeDataInterface_const_*,int>,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<UComputeDataInterface_const_*_const_&>_>
            (&this->Pairs,&local_res8,(bool *)local_res10);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x18 + 8);
}

// Emplace<UOptimusNodePin_const_*_const_&> @ 14e12ad00

FOptimus_KernelConnection * __thiscall
TMapBase<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
::Emplace<UOptimusNodePin_const_*_const_&>
          (TMapBase<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
           *this,UOptimusNodePin **param_1)

{
  TKeyInitializer<UOptimusNodePin_const_*_const_&> local_res8;
  UOptimusNodePin **local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<UOptimusNodePin_const_*,FOptimus_KernelConnection>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<UOptimusNodePin_const_*_const_&>_>
            (&this->Pairs,&local_res8,(bool *)local_res10);
  return (FOptimus_KernelConnection *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x20 + 8);
}

// Emplace<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_const_&,FOptimusDataInterfacePropertyOverrideInfo_const_&> @ 14e12ad40

FOptimusDataInterfacePropertyOverrideInfo * __thiscall
TMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
::
Emplace<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_const_&,FOptimusDataInterfacePropertyOverrideInfo_const_&>
          (TMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
           *this,TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> *param_1,
          FOptimusDataInterfacePropertyOverrideInfo *param_2)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>
  *_Src;
  void *_Dst;
  FWeakObjectPtr local_res8;
  FSparseArrayAllocationInfo local_38;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_38);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>
       *)0x0) {
    _Src = (TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>
            *)0x0;
  }
  else {
    *(FWeakObjectPtr *)local_38.Pointer = param_1->WeakPtr;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x34) = 0x80;
    *(undefined4 *)((longlong)local_38.Pointer + 0x38) = 0xffffffff;
    *(undefined4 *)((longlong)local_38.Pointer + 0x3c) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x48) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x50) = 0;
    TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
                 *)((longlong)local_38.Pointer + 8),
                (TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
                 *)param_2);
    *(undefined4 *)((longlong)local_38.Pointer + 0x58) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  FVar1.ObjectIndex = *(int *)&_Src->field_0x0;
  FVar1.ObjectSerialNumber = *(int *)&_Src->field_0x4;
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 != 1) {
    local_res8 = FVar1;
    iVar2 = TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_>
                      (&this->Pairs,FVar1.ObjectSerialNumber ^ FVar1.ObjectIndex,
                       (TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> *)&local_res8);
    if (iVar2 != -1) {
      _Dst = (void *)((longlong)iVar2 * 0x60 + *(longlong *)&(this->Pairs).Elements);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x48));
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FOptimusValueIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FOptimusValueIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FOptimusValueIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)((longlong)_Dst + 8));
      memmove(_Dst,_Src,0x58);
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar2;
      goto LAB_14e12ae54;
    }
  }
  TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,FVar1.ObjectSerialNumber ^ FVar1.ObjectIndex,_Src,local_38.Index);
LAB_14e12ae54:
  return (FOptimusDataInterfacePropertyOverrideInfo *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_38.Index * 0x60);
}

// Emplace<FOptimusInstancedNode_const_&> @ 14e12ae80

TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FOptimusInstancedNode_const_&>
          (TMapBase<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>_>
           *this,FOptimusInstancedNode *param_1)

{
  TKeyInitializer<FOptimusInstancedNode_const_&> local_res8;
  FOptimusInstancedNode *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FOptimusInstancedNode_const_&>_>
            (&this->Pairs,&local_res8,(bool *)local_res10);
  return (TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x58 + 0x40);
}

// Emplace<FOptimusInstancedNode_const_&> @ 14e12aec0

TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
* __thiscall
TMapBase<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>_>
::Emplace<FOptimusInstancedNode_const_&>
          (TMapBase<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>_>
           *this,FOptimusInstancedNode *param_1)

{
  TKeyInitializer<FOptimusInstancedNode_const_&> local_res8;
  FOptimusInstancedNode *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FOptimusInstancedNode_const_&>_>
            (&this->Pairs,&local_res8,(bool *)local_res10);
  return (TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x98 + 0x40);
}

// Emplace<FOptimusInstancedNode_const_&> @ 14e12af10

TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::Emplace<FOptimusInstancedNode_const_&>
          (TMapBase<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>_>
           *this,FOptimusInstancedNode *param_1)

{
  TKeyInitializer<FOptimusInstancedNode_const_&> local_res8;
  FOptimusInstancedNode *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FOptimusInstancedNode_const_&>_>
            (&this->Pairs,&local_res8,(bool *)local_res10);
  return (TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x98 + 0x40);
}

// Emplace<FOptimusInstancedNode_const_&,UComputeDataInterface_*_const_&> @ 14e12af60

UComputeDataInterface ** __thiscall
TMapBase<FOptimusInstancedNode,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>_>
::Emplace<FOptimusInstancedNode_const_&,UComputeDataInterface_*_const_&>
          (TMapBase<FOptimusInstancedNode,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>_>
           *this,FOptimusInstancedNode *param_1,UComputeDataInterface **param_2)

{
  TPairInitializer<FOptimusInstancedNode_const_&,UComputeDataInterface_*_const_&> local_res8 [2];
  FOptimusInstancedNode *local_18;
  UComputeDataInterface **local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FOptimusInstancedNode,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FOptimusInstancedNode_const_&,UComputeDataInterface_*_const_&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (UComputeDataInterface **)
         (*(longlong *)&(this->Pairs).Elements + 0x40 + (longlong)(int)local_res8[0].Key * 0x50);
}

// Emplace<FOptimusInstancedNode_const_&,UComputeKernel_*_const_&> @ 14e12afb0

UComputeKernel ** __thiscall
TMapBase<FOptimusInstancedNode,UComputeKernel_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeKernel_*,0>_>
::Emplace<FOptimusInstancedNode_const_&,UComputeKernel_*_const_&>
          (TMapBase<FOptimusInstancedNode,UComputeKernel_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeKernel_*,0>_>
           *this,FOptimusInstancedNode *param_1,UComputeKernel **param_2)

{
  TPairInitializer<FOptimusInstancedNode_const_&,UComputeKernel_*_const_&> local_res8 [2];
  FOptimusInstancedNode *local_18;
  UComputeKernel **local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FOptimusInstancedNode,UComputeKernel_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeKernel_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FOptimusInstancedNode_const_&,UComputeKernel_*_const_&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (UComputeKernel **)
         (*(longlong *)&(this->Pairs).Elements + 0x40 + (longlong)(int)local_res8[0].Key * 0x50);
}

// Emplace<FOptimusInstancedPin_const_&> @ 14e12b000

UComputeDataInterface ** __thiscall
TMapBase<FOptimusInstancedPin,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>_>
::Emplace<FOptimusInstancedPin_const_&>
          (TMapBase<FOptimusInstancedPin,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>_>
           *this,FOptimusInstancedPin *param_1)

{
  TKeyInitializer<FOptimusInstancedPin_const_&> local_res8;
  FOptimusInstancedPin *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<FOptimusInstancedPin,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_>
            (&this->Pairs,&local_res8,(bool *)local_res10);
  return (UComputeDataInterface **)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x58 + 0x48);
}

// Emplace<FOptimusInstancedPin_const_&> @ 14e12b040

FOptimusInstancedPin * __thiscall
TMapBase<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
::Emplace<FOptimusInstancedPin_const_&>
          (TMapBase<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
           *this,FOptimusInstancedPin *param_1)

{
  TKeyInitializer<FOptimusInstancedPin_const_&> local_res8;
  FOptimusInstancedPin *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_>
            (&this->Pairs,&local_res8,(bool *)local_res10);
  return (FOptimusInstancedPin *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x98 + 0x48);
}

// Emplace<FOptimusInstancedPin_const_&> @ 14e12b090

FDataInterfaceFunctionBinding * __thiscall
TMapBase<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding,0>_>
::Emplace<FOptimusInstancedPin_const_&>(void *this,FOptimusInstancedPin *param_1)

{
  TKeyInitializer<FOptimusInstancedPin_const_&> local_res8;
  FOptimusInstancedPin *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_>(this,&local_res8,(bool *)local_res10);
  return (FDataInterfaceFunctionBinding *)
         (*(longlong *)this + 0x48 + (longlong)(int)local_res8.Key * 0x60);
}

// Emplace<FOptimusRoutedConstNode_const_&> @ 14e12b0e0

FOptimusRoutedConstNode * __thiscall
TMapBase<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_>
::Emplace<FOptimusRoutedConstNode_const_&>
          (TMapBase<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_>
           *this,FOptimusRoutedConstNode *param_1)

{
  TKeyInitializer<FOptimusRoutedConstNode_const_&> local_res8;
  FOptimusRoutedConstNode *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FOptimusRoutedConstNode_const_&>_>
            (&this->Pairs,&local_res8,(bool *)local_res10);
  return (FOptimusRoutedConstNode *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x78 + 0x38);
}

// Emplace<FOptimusRoutedConstNode_const_&> @ 14e12b120

TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FOptimusRoutedConstNode_const_&>
          (TMapBase<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,FOptimusRoutedConstNode *param_1)

{
  TKeyInitializer<FOptimusRoutedConstNode_const_&> local_res8;
  FOptimusRoutedConstNode *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FOptimusRoutedConstNode_const_&>_>
            (&this->Pairs,&local_res8,(bool *)local_res10);
  return (TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 0x38 + (longlong)(int)local_res8.Key * 0x50);
}

// Emplace<FOptimusRoutedConstNode_const_&> @ 14e12b170

EOptimusNodeGraphType * __thiscall
TMapBase<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>_>
::Emplace<FOptimusRoutedConstNode_const_&>(void *this,FOptimusRoutedConstNode *param_1)

{
  TKeyInitializer<FOptimusRoutedConstNode_const_&> local_res8;
  FOptimusRoutedConstNode *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FOptimusRoutedConstNode_const_&>_>(this,&local_res8,(bool *)local_res10)
  ;
  return (EOptimusNodeGraphType *)(*(longlong *)this + (longlong)(int)local_res8.Key * 0x48 + 0x38);
}

// Emplace<FOptimusRoutedConstNode_const_&,UOptimusComputeDataInterface_*_const_&> @ 14e12b390

UOptimusComputeDataInterface ** __thiscall
TMapBase<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>_>
::Emplace<FOptimusRoutedConstNode_const_&,UOptimusComputeDataInterface_*_const_&>
          (TMapBase<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>_>
           *this,FOptimusRoutedConstNode *param_1,UOptimusComputeDataInterface **param_2)

{
  TPairInitializer<FOptimusRoutedConstNode_const_&,UOptimusComputeDataInterface_*_const_&>
  local_res8 [2];
  FOptimusRoutedConstNode *local_18;
  UOptimusComputeDataInterface **local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOptimusRoutedConstNode_const_&,UOptimusComputeDataInterface_*_const_&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (UOptimusComputeDataInterface **)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x48 + 0x38);
}

// Emplace<FOptimusRoutedConstNode_const_&,FOptimusRoutedConstNode_const_&> @ 14e12b3e0

FOptimusRoutedConstNode * __thiscall
TMapBase<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_>
::Emplace<FOptimusRoutedConstNode_const_&,FOptimusRoutedConstNode_const_&>
          (TMapBase<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_>
           *this,FOptimusRoutedConstNode *param_1,FOptimusRoutedConstNode *param_2)

{
  TPairInitializer<FOptimusRoutedConstNode_const_&,FOptimusRoutedConstNode_const_&> local_res8 [2];
  FOptimusRoutedConstNode *local_18;
  FOptimusRoutedConstNode *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FOptimusRoutedConstNode_const_&,FOptimusRoutedConstNode_const_&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (FOptimusRoutedConstNode *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x78 + 0x38);
}

// Emplace<FOptimusRoutedConstNodePin_const_&,FOptimusRoutedConstNodePin_const_&> @ 14e12b680

FOptimusRoutedConstNodePin * __thiscall
TMapBase<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_>
::Emplace<FOptimusRoutedConstNodePin_const_&,FOptimusRoutedConstNodePin_const_&>
          (TMapBase<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_>
           *this,FOptimusRoutedConstNodePin *param_1,FOptimusRoutedConstNodePin *param_2)

{
  TPairInitializer<FOptimusRoutedConstNodePin_const_&,FOptimusRoutedConstNodePin_const_&>
  local_res8 [2];
  FOptimusRoutedConstNodePin *local_18;
  FOptimusRoutedConstNodePin *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOptimusRoutedConstNodePin_const_&,FOptimusRoutedConstNodePin_const_&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (FOptimusRoutedConstNodePin *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x78 + 0x38);
}

// Emplace<FOptimusValueIdentifier_const_&,FOptimusValueDescription_const_&> @ 14e12b6d0

FOptimusValueDescription * __thiscall
TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
::Emplace<FOptimusValueIdentifier_const_&,FOptimusValueDescription_const_&>
          (TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
           *this,FOptimusValueIdentifier *param_1,FOptimusValueDescription *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  TPairInitializer<FOptimusValueIdentifier_const_&,FOptimusValueDescription_const_&> local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar2 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar3 = *(int *)((longlong)iVar6 * 0x80 + 4 + lVar8);
    iVar2 = iVar2 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar3;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x80 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar6);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_> *)0x0) {
    TPairInitializer<FOptimusValueIdentifier_const_&,FOptimusValueDescription_const_&>::
    operator<FOptimusValueIdentifier,FOptimusValueDescription>_TTuple<FOptimusValueIdentifier,FOptimusValueDescription>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x78) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)((longlong)local_18.Pointer + 4);
  local_res8[0] = local_18.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  bVar1 = *(byte *)local_18.Pointer;
  uVar7 = (uint)bVar1 * 0x40 + uVar7 + (int)((ulonglong)uVar4 >> 0x20) + (bVar1 >> 2) + 0x9e3779b9 ^
          (uint)bVar1;
  bVar5 = TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_18.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_18.Pointer,local_res8[0]);
  }
  return (FOptimusValueDescription *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar8 * 0x80);
}

// Emplace<FOptimusValueIdentifier_const_&,FOptimusValueDescription> @ 14e12b830

FOptimusValueDescription * __thiscall
TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
::Emplace<FOptimusValueIdentifier_const_&,FOptimusValueDescription>
          (TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
           *this,FOptimusValueIdentifier *param_1,FOptimusValueDescription *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar2 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar3 = *(int *)((longlong)iVar6 * 0x80 + 4 + lVar8);
    iVar2 = iVar2 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar3;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x80 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1;
    *(uint *)((longlong)local_28.Pointer + 8) = (param_1->Name).Number;
    FOptimusValueDescription::FOptimusValueDescription
              ((FOptimusValueDescription *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x78) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)((longlong)local_28.Pointer + 4);
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  bVar1 = *(byte *)local_28.Pointer;
  uVar7 = (uint)bVar1 * 0x40 + uVar7 + (int)((ulonglong)uVar4 >> 0x20) + (bVar1 >> 2) + 0x9e3779b9 ^
          (uint)bVar1;
  bVar5 = TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (FOptimusValueDescription *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar8 * 0x80);
}

// Emplace<FName_const_&> @ 14e12bb70

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FName_const_&>
          (TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
           *this,FName *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (TArray<float,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// Emplace<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&> @ 14e12bcb0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>
          (TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
           *this,FName *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&> local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>::
    operator<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (TArray<float,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// Emplace<UComputeDataInterface_const_*> @ 14e12c150

int * __thiscall
TMapBase<UComputeDataInterface_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>_>
::Emplace<UComputeDataInterface_const_*>
          (TMapBase<UComputeDataInterface_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>_>
           *this,UComputeDataInterface **param_1)

{
  TKeyInitializer<UComputeDataInterface_const_*_&&> local_res8;
  UComputeDataInterface **local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<UComputeDataInterface_const_*,int>,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<UComputeDataInterface_const_*_&&>_>
            (&this->Pairs,&local_res8,(bool *)local_res10);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x18 + 8);
}

// Emplace<FName> @ 14e131040

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FName>(TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
                 *this,FName *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_> *)
      0x0) {
    *(FName *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// Emplace<FName,FOptimusValueIdentifier> @ 14e131180

FOptimusValueIdentifier * __thiscall
TMapBase<FName,FOptimusValueIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>_>
::Emplace<FName,FOptimusValueIdentifier>
          (TMapBase<FName,FOptimusValueIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>_>
           *this,FName *param_1,FOptimusValueIdentifier *param_2)

{
  TPairInitializer<FName_&&,FOptimusValueIdentifier_&&> local_res8 [2];
  FName *local_18;
  FOptimusValueIdentifier *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,FOptimusValueIdentifier_&&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (FOptimusValueIdentifier *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x1c + 8);
}

// Emplace<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_> @ 14e1311d0

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>
          (TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,FName *param_1,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar8 = (TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_> *)
      0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = 0;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 8) =
         (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x10) = param_2->ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x14) = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  uVar3 = *(undefined8 *)pTVar8;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,pTVar8,local_res8[0]);
  }
  return (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// EmplaceByHash<FOptimusValueIdentifier_const_&> @ 14e1314b0

FOptimusValueDescription * __thiscall
TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
::EmplaceByHash<FOptimusValueIdentifier_const_&>
          (TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
           *this,uint param_1,FOptimusValueIdentifier *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FOptimusValueIdentifier_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x80 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x80 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_> *)0x0) {
    TKeyInitializer<FOptimusValueIdentifier_const_&>::
    operator<FOptimusValueIdentifier,FOptimusValueDescription>_TTuple<FOptimusValueIdentifier,FOptimusValueDescription>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x78) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FOptimusValueDescription *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x80 + 0x10);
}

// EmplaceByHash<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_> @ 14e1315d0

FOptimusDataInterfacePropertyOverrideInfo * __thiscall
TMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
::EmplaceByHash<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
           *this,uint param_1,TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> *param_2)

{
  int iVar1;
  void *_Dst;
  TKeyInitializer<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_&&> local_res8;
  FSparseArrayAllocationInfo local_28;
  
  local_res8.Key = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_28);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>
       *)0x0) {
    TKeyInitializer<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_&&>::
    operator<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>
              (&local_res8,local_28.Pointer);
    *(undefined4 *)((longlong)local_28.Pointer + 0x58) = 0xffffffff;
  }
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 != 1) {
    local_res8.Key =
         *(TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> **)local_28.Pointer;
    iVar1 = TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_>
                      (&this->Pairs,param_1,
                       (TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> *)&local_res8);
    if (iVar1 != -1) {
      _Dst = (void *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x48));
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FOptimusValueIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FOptimusValueIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FOptimusValueIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)((longlong)_Dst + 8));
      memmove(_Dst,local_28.Pointer,0x58);
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_28.Index,1);
      local_28.Index = iVar1;
      goto LAB_14e1316ac;
    }
  }
  TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_28.Index);
LAB_14e1316ac:
  return (FOptimusDataInterfacePropertyOverrideInfo *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_28.Index * 0x60);
}

// FindOrAddImpl<int_const_&> @ 14e134a50

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FGuid,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<UOptimusNode_const_*_const_&> @ 14e134b00

EOptimusValueUsage * __thiscall
TMapBase<UOptimusNode_const_*,enum_EOptimusValueUsage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,enum_EOptimusValueUsage,0>_>
::FindOrAddImpl<UOptimusNode_const_*_const_&>(void *this,uint param_1,UOptimusNode **param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [6];
  UOptimusNode **local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x18;
        if (*(UOptimusNode **)(*(longlong *)this + (longlong)iVar1 * 0x18) == *param_2) {
          if (lVar2 != 0) goto LAB_14e134b92;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x10);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UOptimusNode_const_*,enum_EOptimusValueUsage>,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,enum_EOptimusValueUsage,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UOptimusNode_const_*_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<UOptimusNode_const_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x18;
LAB_14e134b92:
  return (EOptimusValueUsage *)(lVar2 + 8);
}

// FindOrAddImpl<UOptimusNodePin_const_*_const_&> @ 14e134bb0

TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UOptimusNodePin_const_*_const_&>
          (TMapBase<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UOptimusNodePin **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UOptimusNodePin **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UOptimusNodePin *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UOptimusNodePin_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UOptimusNodePin_const_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FOptimusInstancedPin_const_&> @ 14e134c60

TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FOptimusInstancedPin_const_&>
          (TMapBase<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FOptimusInstancedPin *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FOptimusInstancedPin *local_res20;
  
  iVar1 = TSet<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusInstancedPin>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x48);
  }
  local_res20 = param_2;
  TSet<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FOptimusInstancedPin_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FOptimusInstancedPin_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 0x48 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FOptimusRoutedConstNode_const_&> @ 14e134d00

int * __thiscall
TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
::FindOrAddImpl<FOptimusRoutedConstNode_const_&>
          (TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
           *this,uint param_1,FOptimusRoutedConstNode *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FOptimusRoutedConstNode *local_res20;
  
  iVar1 = TSet<TTuple<FOptimusRoutedConstNode,int>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusRoutedConstNode>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x48, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FOptimusRoutedConstNode,int>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FOptimusRoutedConstNode_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<FOptimusRoutedConstNode_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x48;
  }
  return (int *)(lVar2 + 0x38);
}

// FindOrAddImpl<FOptimusRoutedConstNode_const_&> @ 14e134d80

TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FOptimusRoutedConstNode_const_&>
          (TMapBase<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FOptimusRoutedConstNode *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FOptimusRoutedConstNode *local_res20;
  
  iVar1 = TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusRoutedConstNode>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x38);
  }
  local_res20 = param_2;
  TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FOptimusRoutedConstNode_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FOptimusRoutedConstNode_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 0x38 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<FOptimusValueIdentifier_const_&> @ 14e134e20

FOptimusValueDescription * __thiscall
TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
::FindOrAddImpl<FOptimusValueIdentifier_const_&>
          (TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
           *this,uint param_1,FOptimusValueIdentifier *param_2)

{
  int iVar1;
  longlong lVar2;
  FOptimusValueDescription *pFVar3;
  
  iVar1 = TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusValueIdentifier>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x80 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FOptimusValueDescription *)(lVar2 + 0x10);
  }
  pFVar3 = EmplaceByHash<FOptimusValueIdentifier_const_&>(this,param_1,param_2);
  return pFVar3;
}

// FindOrAddImpl<FName_const_&> @ 14e134e90

TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>
                    *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<enum_EOptimusDeformerExecutionPhase_const_&> @ 14e134f40

TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::FindOrAddImpl<enum_EOptimusDeformerExecutionPhase_const_&>
          (void *this,uint param_1,EOptimusDeformerExecutionPhase *param_2)

{
  undefined4 uVar1;
  EOptimusDeformerExecutionPhase *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EOptimusDeformerExecutionPhase *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EOptimusDeformerExecutionPhase *)((longlong)(int)uVar1 * 0x60 + *(longlong *)this)
        ;
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EOptimusDeformerExecutionPhase *)0x0) {
            return (TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
                    *)(pEVar2 + 8);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x58);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EOptimusDeformerExecutionPhase_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<EOptimusDeformerExecutionPhase_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
          *)(*(longlong *)this + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_> @ 14e134ff0

FOptimusDataInterfacePropertyOverrideInfo * __thiscall
TMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
::FindOrAddImpl<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
           *this,uint param_1,TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> *param_2)

{
  int iVar1;
  longlong lVar2;
  FOptimusDataInterfacePropertyOverrideInfo *pFVar3;
  
  iVar1 = TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_>
                    (&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FOptimusDataInterfacePropertyOverrideInfo *)(lVar2 + 8);
  }
  pFVar3 = EmplaceByHash<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_>
                     (this,param_1,param_2);
  return pFVar3;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14e135960

void __thiscall
TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14e135a33;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14e135a33:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4) =
           *(undefined4 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14e135bb0

void __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
           *this,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14e135c92;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14e135c92:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14e135e00

void __thiscall
TMapBase<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
           *this,TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e135ed3;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14e135ed3:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14e1af340

FOptimus_KernelConnection * __thiscall
TMapBase<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
::Find(TMapBase<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
       *this,UOptimusNodePin *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FOptimus_KernelConnection *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UOptimusNodePin *)*plVar2 == param_1) {
          pFVar4 = (FOptimus_KernelConnection *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FOptimus_KernelConnection *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FOptimus_KernelConnection *)0x0;
}

// Find @ 14e1af3e0

TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
       *this,UOptimusNodePin *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UOptimusNodePin *)*plVar2 == param_1) {
          pTVar4 = (TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 14e1af480

UOptimusComputeDataInterface ** __thiscall
TMapBase<FOptimusInstancedPin,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>_>
::Find(TMapBase<FOptimusInstancedPin,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>_>
       *this,FOptimusInstancedPin *param_1)

{
  TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*> *pTVar1;
  UOptimusComputeDataInterface **ppUVar2;
  
  pTVar1 = TSet<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  ppUVar2 = (UOptimusComputeDataInterface **)0x0;
  if (pTVar1 != (TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*> *)0x0) {
    ppUVar2 = (UOptimusComputeDataInterface **)&pTVar1->field_0x48;
  }
  return ppUVar2;
}

// Find @ 14e1af4b0

UOptimusComputeDataInterface ** __thiscall
TMapBase<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>_>
::Find(TMapBase<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>_>
       *this,FOptimusRoutedConstNode *param_1)

{
  TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*> *pTVar1;
  UOptimusComputeDataInterface **ppUVar2;
  
  pTVar1 = TSet<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  ppUVar2 = (UOptimusComputeDataInterface **)0x0;
  if (pTVar1 != (TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*> *)0x0) {
    ppUVar2 = (UOptimusComputeDataInterface **)&pTVar1->field_0x38;
  }
  return ppUVar2;
}

// Find @ 14e1af4e0

TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
       *this,FOptimusRoutedConstNode *param_1)

{
  TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar1 = TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  pTVar2 = (TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> *)0x0;
  if (pTVar1 != (TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar2 = (TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> *)&pTVar1->field_0x38;
  }
  return pTVar2;
}

// Find @ 14e1af510

UScriptStruct ** __thiscall
TMapBase<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
::Find(TMapBase<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  UScriptStruct **ppUVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppUVar5 = (UScriptStruct **)0x0;
          if (lVar1 != 0) {
            ppUVar5 = (UScriptStruct **)(lVar1 + 8);
          }
          return ppUVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (UScriptStruct **)0x0;
}

// Find @ 14e1af5b0

FOptimusValueIdentifier * __thiscall
TMapBase<FName,FOptimusValueIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>_>
::Find(TMapBase<FName,FOptimusValueIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FOptimusValueIdentifier *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FOptimusValueIdentifier *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FOptimusValueIdentifier *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[2].Number;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FOptimusValueIdentifier *)0x0;
}

// FindChecked @ 14e1b02b0

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FGuid,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14e1b0350

TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::FindChecked(TMapBase<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                    *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x16];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14e1b03f0

int * __thiscall
TMapBase<UComputeDataInterface_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>_>
::FindChecked(TMapBase<UComputeDataInterface_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>_>
              *this,UComputeDataInterface *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(UComputeDataInterface **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (int *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  piVar6 = (int *)(*pcVar3)();
  return piVar6;
}

// FindChecked @ 14e1b04c0

EOptimusValueUsage * __thiscall
TMapBase<UOptimusNode_const_*,enum_EOptimusValueUsage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,enum_EOptimusValueUsage,0>_>
::FindChecked(void *this,UOptimusNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EOptimusValueUsage *pEVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(UOptimusNode **)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (EOptimusValueUsage *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return &DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EOptimusValueUsage *)(*pcVar1)();
  return pEVar4;
}

// FindChecked @ 14e1b0590

FName * __thiscall
TMapBase<UOptimusNodeLink_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>_>
::FindChecked(TMapBase<UOptimusNodeLink_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>_>
              *this,UOptimusNodeLink *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(UOptimusNodeLink **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FName *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FName *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FName *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14e1b0660

UComputeDataInterface ** __thiscall
TMapBase<FOptimusInstancedNode,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>_>
::FindChecked(TMapBase<FOptimusInstancedNode,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>_>
              *this,FOptimusInstancedNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UComputeDataInterface **ppUVar5;
  longlong lVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FOptimusInstancedNode,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusInstancedNode>(&this->Pairs,uVar3,param_1);
  if ((iVar4 != -1) &&
     (lVar6 = (longlong)iVar4 * 0x50 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (UComputeDataInterface **)(lVar6 + 0x40);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (UComputeDataInterface **)&DAT_00000040;
  }
  pcVar1 = (code *)swi(3);
  ppUVar5 = (UComputeDataInterface **)(*pcVar1)();
  return ppUVar5;
}

// FindChecked @ 14e1b06f0

TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>_>
              *this,FOptimusInstancedNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusInstancedNode>(&this->Pairs,uVar3,param_1);
  if ((iVar4 != -1) &&
     (lVar6 = (longlong)iVar4 * 0x58 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x40);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_> *)&DAT_00000040;
  }
  pcVar1 = (code *)swi(3);
  pTVar5 = (TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar5;
}

// FindChecked @ 14e1b0780

TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
* __thiscall
TMapBase<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>_>
::FindChecked(TMapBase<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>_>
              *this,FOptimusInstancedNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
  *pTVar5;
  longlong lVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusInstancedNode>(&this->Pairs,uVar3,param_1);
  if ((iVar4 != -1) &&
     (lVar6 = (longlong)iVar4 * 0x98 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
            *)(lVar6 + 0x40);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
            *)&DAT_00000040;
  }
  pcVar1 = (code *)swi(3);
  pTVar5 = (TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
            *)(*pcVar1)();
  return pTVar5;
}

// FindChecked @ 14e1b0810

TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::FindChecked(TMapBase<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>_>
              *this,FOptimusInstancedNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  longlong lVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusInstancedNode>(&this->Pairs,uVar3,param_1);
  if ((iVar4 != -1) &&
     (lVar6 = (longlong)iVar4 * 0x98 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
            *)(lVar6 + 0x40);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
            *)&DAT_00000040;
  }
  pcVar1 = (code *)swi(3);
  pTVar5 = (TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
            *)(*pcVar1)();
  return pTVar5;
}

// FindChecked @ 14e1b08a0

UComputeDataInterface ** __thiscall
TMapBase<FOptimusInstancedPin,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>_>
::FindChecked(TMapBase<FOptimusInstancedPin,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>_>
              *this,FOptimusInstancedPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UComputeDataInterface **ppUVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1->Pin >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1->Pin >> 4))
          * -0x7a143595;
  uVar5 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = ::GetTypeHash(&param_1->InstancedNode);
  iVar3 = TSet<TTuple<FOptimusInstancedPin,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusInstancedPin>
                    (&this->Pairs,
                     (uVar5 >> 0x10 ^ uVar5) + uVar7 * 0x40 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar7,
                     param_1);
  if (iVar3 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)iVar3 * 0x58 + *(longlong *)&(this->Pairs).Elements;
    if (lVar6 != 0) goto LAB_14e1b0946;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    ppUVar4 = (UComputeDataInterface **)(*pcVar1)();
    return ppUVar4;
  }
LAB_14e1b0946:
  return (UComputeDataInterface **)(lVar6 + 0x48);
}

// FindChecked @ 14e1b0960

UOptimusComputeDataInterface ** __thiscall
TMapBase<FOptimusInstancedPin,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>_>
::FindChecked(TMapBase<FOptimusInstancedPin,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>_>
              *this,FOptimusInstancedPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*> *pTVar3;
  UOptimusComputeDataInterface **ppUVar4;
  
  pTVar3 = TSet<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*> *)0x0) {
    return (UOptimusComputeDataInterface **)&pTVar3->field_0x48;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    ppUVar4 = (UOptimusComputeDataInterface **)(*pcVar1)();
    return ppUVar4;
  }
  return (UOptimusComputeDataInterface **)&DAT_00000048;
}

// FindChecked @ 14e1b09c0

FDataInterfaceFunctionBinding * __thiscall
TMapBase<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding,0>_>
::FindChecked(void *this,FOptimusInstancedPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDataInterfaceFunctionBinding *pFVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1->Pin >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1->Pin >> 4))
          * -0x7a143595;
  uVar5 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = ::GetTypeHash(&param_1->InstancedNode);
  iVar3 = TSet<TTuple<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusInstancedPin>
                    (this,(uVar5 >> 0x10 ^ uVar5) + uVar7 * 0x40 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar7
                     ,param_1);
  if (iVar3 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)iVar3 * 0x60 + *(longlong *)this;
    if (lVar6 != 0) goto LAB_14e1b0a6a;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FDataInterfaceFunctionBinding *)(*pcVar1)();
    return pFVar4;
  }
LAB_14e1b0a6a:
  return (FDataInterfaceFunctionBinding *)(lVar6 + 0x48);
}

// FindChecked @ 14e1b0a90

int * __thiscall
TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
::FindChecked(TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
              *this,FOptimusRoutedConstNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1->Node >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1->Node >> 4)
          ) * -0x7a143595;
  uVar5 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar7 = ::GetTypeHash(&param_1->TraversalContext);
  iVar3 = TSet<TTuple<FOptimusRoutedConstNode,int>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusRoutedConstNode>
                    (&this->Pairs,uVar5 * 0x40 + (uVar5 >> 2) + uVar7 + 0x9e3779b9 ^ uVar5,param_1);
  if (iVar3 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x48;
    if (lVar6 != 0) goto LAB_14e1b0b3c;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    piVar4 = (int *)(*pcVar1)();
    return piVar4;
  }
LAB_14e1b0b3c:
  return (int *)(lVar6 + 0x38);
}

// FindChecked @ 14e1b0b60

UOptimusComputeDataInterface ** __thiscall
TMapBase<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>_>
::FindChecked(TMapBase<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>_>
              *this,FOptimusRoutedConstNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*> *pTVar3;
  UOptimusComputeDataInterface **ppUVar4;
  
  pTVar3 = TSet<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*> *)0x0) {
    return (UOptimusComputeDataInterface **)&pTVar3->field_0x38;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    ppUVar4 = (UOptimusComputeDataInterface **)(*pcVar1)();
    return ppUVar4;
  }
  return (UOptimusComputeDataInterface **)&DAT_00000038;
}

// FindChecked @ 14e1b0bc0

TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>_>
              *this,FOptimusRoutedConstNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1->Node >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1->Node >> 4)
          ) * -0x7a143595;
  uVar5 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar7 = ::GetTypeHash(&param_1->TraversalContext);
  iVar3 = TSet<TTuple<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusRoutedConstNode>
                    (&this->Pairs,uVar5 * 0x40 + (uVar5 >> 2) + uVar7 + 0x9e3779b9 ^ uVar5,param_1);
  if (iVar3 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)iVar3 * 0x50 + *(longlong *)&(this->Pairs).Elements;
    if (lVar6 != 0) goto LAB_14e1b0c69;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
LAB_14e1b0c69:
  return (TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x38);
}

// FindChecked @ 14e1b0c90

TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
              *this,FOptimusRoutedConstNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pTVar3 = TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    return (TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> *)&pTVar3->field_0x38;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  return (TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> *)&DAT_00000038;
}

// FindChecked @ 14e1b0cf0

EOptimusNodeGraphType * __thiscall
TMapBase<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>_>
::FindChecked(void *this,FOptimusRoutedConstNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EOptimusNodeGraphType *pEVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1->Node >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1->Node >> 4)
          ) * -0x7a143595;
  uVar5 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar7 = ::GetTypeHash(&param_1->TraversalContext);
  iVar3 = TSet<TTuple<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusRoutedConstNode>
                    (this,uVar5 * 0x40 + (uVar5 >> 2) + uVar7 + 0x9e3779b9 ^ uVar5,param_1);
  if (iVar3 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)this + (longlong)iVar3 * 0x48;
    if (lVar6 != 0) goto LAB_14e1b0d9c;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pEVar4 = (EOptimusNodeGraphType *)(*pcVar1)();
    return pEVar4;
  }
LAB_14e1b0d9c:
  return (EOptimusNodeGraphType *)(lVar6 + 0x38);
}

// FindChecked @ 14e1b0dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent ** __thiscall
TMapBase<FName,UActorComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UActorComponent_*,0>_>
::FindChecked(TMapBase<FName,UActorComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UActorComponent_*,0>_>
              *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UActorComponent **ppUVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (UActorComponent **)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (UActorComponent **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppUVar7 = (UActorComponent **)(*pcVar3)();
  return ppUVar7;
}

// FindChecked @ 14e1b0e80

FShaderFunctionDefinition ** __thiscall
TMapBase<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
::FindChecked(TMapBase<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FShaderFunctionDefinition **ppFVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar5 = (FShaderFunctionDefinition **)(*pcVar1)();
      return ppFVar5;
    }
  }
  return (FShaderFunctionDefinition **)(lVar8 + 0x10);
}

