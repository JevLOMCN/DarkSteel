// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives><TObjectPtr<UComputeKernel_const_>_const_&,FPCGSpawnerPrimitives> @ 14978ec10

TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives> * __thiscall
TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>::
TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives><TObjectPtr<UComputeKernel_const_>_const_&,FPCGSpawnerPrimitives>
          (TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives> *this,
          TObjectPtr<UComputeKernel_const_> *param_1,FPCGSpawnerPrimitives *param_2)

{
  uint uVar1;
  UComputeKernel *pUVar2;
  
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UComputeKernel **)this = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UComputeKernel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(IPCGRuntimePrimitiveFactory **)&this->field_0x8 = (param_2->PrimitiveFactory).Object;
  *(TReferenceControllerBase<1> **)&this->field_0x10 =
       (param_2->PrimitiveFactory).SharedReferenceCount.ReferenceController;
  (param_2->PrimitiveFactory).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_2->PrimitiveFactory).Object = (IPCGRuntimePrimitiveFactory *)0x0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(FScriptContainerElement **)&this->field_0x18 =
       (param_2->PrimitiveMeshBounds).AllocatorInstance.Data;
  (param_2->PrimitiveMeshBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this->field_0x20 = (param_2->PrimitiveMeshBounds).ArrayNum;
  *(int *)&this->field_0x24 = (param_2->PrimitiveMeshBounds).ArrayMax;
  (param_2->PrimitiveMeshBounds).ArrayNum = 0;
  (param_2->PrimitiveMeshBounds).ArrayMax = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(FScriptContainerElement **)&this->field_0x28 = (param_2->SelectionCDF).AllocatorInstance.Data;
  (param_2->SelectionCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this->field_0x30 = (param_2->SelectionCDF).ArrayNum;
  *(int *)&this->field_0x34 = (param_2->SelectionCDF).ArrayMax;
  (param_2->SelectionCDF).ArrayNum = 0;
  (param_2->SelectionCDF).ArrayMax = 0;
  uVar1 = param_2->NumCustomFloats;
  *(undefined8 *)&this->field_0x40 = 0;
  *(uint *)&this->field_0x38 = uVar1;
  *(FScriptContainerElement **)&this->field_0x40 =
       (param_2->AttributeIdOffsetStrides).AllocatorInstance.Data;
  (param_2->AttributeIdOffsetStrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this->field_0x48 = (param_2->AttributeIdOffsetStrides).ArrayNum;
  *(int *)&this->field_0x4c = (param_2->AttributeIdOffsetStrides).ArrayMax;
  (param_2->AttributeIdOffsetStrides).ArrayNum = 0;
  (param_2->AttributeIdOffsetStrides).ArrayMax = 0;
  *(int *)&this->field_0x50 = param_2->SelectorAttributeId;
  return this;
}

// TTuple<FPCGKernelOverridableParam,int><FPCGKernelOverridableParam_const_&,int_const_&> @ 14978ece0

TTuple<FPCGKernelOverridableParam,int> * __thiscall
TTuple<FPCGKernelOverridableParam,int>::
TTuple<FPCGKernelOverridableParam,int><FPCGKernelOverridableParam_const_&,int_const_&>
          (TTuple<FPCGKernelOverridableParam,int> *this,FPCGKernelOverridableParam *param_1,
          int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  uint uVar3;
  
  uVar3 = (param_1->Label).Number;
  puVar1 = &this->field_0x8;
  *(uint *)&this->field_0x0 = (param_1->Label).ComparisonIndex.Value;
  *(uint *)&this->field_0x4 = uVar3;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (param_1->PropertiesNames).ArrayNum;
  _Src = (param_1->PropertiesNames).AllocatorInstance.Data;
  *(int *)&this->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 3);
  }
  this->field_0x18 = param_1->bRequiresGPUReadback;
  this->field_0x19 = param_1->bIsPropertyOverriddenByPin;
  *(int *)&this->field_0x20 = *param_2;
  return this;
}

// TTuple<__int64,float> @ 14988c030

TTuple<__int64,float> * __thiscall
TTuple<__int64,float>::TTuple<__int64,float>(TTuple<__int64,float> *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  return this;
}

// TTuple<TWeakObjectPtr<ULandscapeGrassType,FWeakObjectPtr>,int><TObjectPtr<ULandscapeGrassType>_&,int_&> @ 149b33150

TTuple<TWeakObjectPtr<ULandscapeGrassType,FWeakObjectPtr>,int> * __thiscall
TTuple<TWeakObjectPtr<ULandscapeGrassType,FWeakObjectPtr>,int>::
TTuple<TWeakObjectPtr<ULandscapeGrassType,FWeakObjectPtr>,int><TObjectPtr<ULandscapeGrassType>_&,int_&>
          (TTuple<TWeakObjectPtr<ULandscapeGrassType,FWeakObjectPtr>,int> *this,
          TObjectPtr<ULandscapeGrassType> *param_1,int *param_2)

{
  ULandscapeGrassType *pUVar1;
  ULandscapeGrassType *local_res8;
  
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (ULandscapeGrassType *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (ULandscapeGrassType *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)this = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (ULandscapeGrassType *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  *(int *)&this->field_0x8 = *param_2;
  return this;
}

// TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams><FPCGMetadataDomainID_const_&,FPCGMetadataDomainInitializeParams> @ 149d78ee0

TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> * __thiscall
TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>::
TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams><FPCGMetadataDomainID_const_&,FPCGMetadataDomainInitializeParams>
          (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *this,
          FPCGMetadataDomainID *param_1,FPCGMetadataDomainInitializeParams *param_2)

{
  bool bVar1;
  long64 lVar2;
  undefined3 uVar3;
  int iVar4;
  FNameEntryId FVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar3 = *(undefined3 *)&param_1->field_0x1;
  iVar4 = param_1->CustomFlag;
  FVar5.Value = (param_1->DebugName).ComparisonIndex.Value;
  uVar6 = (param_1->DebugName).Number;
  this->field_0x0 = param_1->Flag;
  *(undefined3 *)&this->field_0x1 = uVar3;
  *(int *)&this->field_0x4 = iVar4;
  *(uint *)&this->field_0x8 = FVar5.Value;
  *(uint *)&this->field_0xc = uVar6;
  *(FPCGMetadataDomain **)&this->field_0x10 = param_2->Parent;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x24 = 0xffffffff;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x44 = 0x80;
  *(undefined4 *)&this->field_0x48 = 0xffffffff;
  *(undefined4 *)&this->field_0x4c = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  if (*(int *)((longlong)&(param_2->FilteredAttributes).field0_0x0 + 0xc) != -1) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&this->field_0x18,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               &param_2->FilteredAttributes);
  }
  this->field_0x68 = param_2->FilterMode;
  this->field_0x69 = param_2->MatchOperator;
  this->field_0x90 = 0;
  bVar1 = (param_2->OptionalEntriesToCopy).bIsSet;
  this->field_0x90 = bVar1;
  if (bVar1 != false) {
    iVar4 = (param_2->OptionalEntriesToCopy).TypedValue.ElementView.BytesBetweenElements;
    iVar7 = (param_2->OptionalEntriesToCopy).TypedValue.ElementView.NumElements;
    *(long64 **)&this->field_0x70 =
         (param_2->OptionalEntriesToCopy).TypedValue.ElementView.FirstElementPtr;
    *(int *)&this->field_0x78 = iVar4;
    *(int *)&this->field_0x7c = iVar7;
    uVar8 = *(undefined4 *)&(param_2->OptionalEntriesToCopy).TypedValue.field_0x14;
    lVar2 = (param_2->OptionalEntriesToCopy).TypedValue.StubValue;
    *(int *)&this->field_0x80 = (param_2->OptionalEntriesToCopy).TypedValue.NumElements;
    *(undefined4 *)&this->field_0x84 = uVar8;
    *(long64 *)&this->field_0x88 = lVar2;
  }
  return this;
}

