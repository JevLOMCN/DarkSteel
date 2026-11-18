// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanVertexDeclaration @ 145b94a40

FVulkanVertexDeclaration * __thiscall
FVulkanVertexDeclaration::FVulkanVertexDeclaration
          (FVulkanVertexDeclaration *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1,
          uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_VertexDeclaration);
  this->_padding_ = (longlong)&___7FVulkanVertexDeclaration__6B_;
  iVar2 = param_1->ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  (this->Elements).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0x11;
  }
  else {
    UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
              (8,2,iVar2,0,&(this->Elements).AllocatorInstance,iVar2,piVar1);
    memcpy(&this->Elements,param_1,(longlong)iVar2 << 3);
  }
  this->HashNoStrides = param_3;
  this->Hash = param_2;
  return this;
}

// EmptyCache @ 145ba75c0

void __cdecl FVulkanVertexDeclaration::EmptyCache(void)

{
  bool bVar1;
  
  bVar1 = 1 < (int)GVertexDeclarationCache._72_4_;
  if (!bVar1) {
    TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
                      *)&GVertexDeclarationCache);
  }
  TSparseArray<TSparseSetElement<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&GVertexDeclarationCache,0,GVertexDeclarationCache._8_4_);
  GVertexDeclarationCache._8_4_ = 0;
  if (GVertexDeclarationCache._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,0,(ForAnyElementType *)&GVertexDeclarationCache,0,
               (int *)&GVertexDeclarationCache.field_0xc);
  }
  GVertexDeclarationCache._48_4_ = 0xffffffff;
  GVertexDeclarationCache._52_4_ = 0;
  GVertexDeclarationCache._40_4_ = 0;
  if (0x80 < (uint)GVertexDeclarationCache._44_4_) {
    GVertexDeclarationCache._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GVertexDeclarationCache.field_0x10,0);
  }
  if (bVar1) {
    GVertexDeclarationCache._72_4_ = 1;
    TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
              *)&GVertexDeclarationCache);
  }
  return;
}

// GetInitializer @ 145babeb0

bool __thiscall
FVulkanVertexDeclaration::GetInitializer
          (FVulkanVertexDeclaration *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != &this->Elements) {
    piVar1 = &param_1->ArrayMax;
    iVar2 = (this->Elements).ArrayNum;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0x11;
      return true;
    }
    UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
              (8,2,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy(param_1,&this->Elements,(longlong)iVar2 << 3);
    }
  }
  return true;
}

// GetPrecachePSOHash @ 145bac730

uint __thiscall FVulkanVertexDeclaration::GetPrecachePSOHash(FVulkanVertexDeclaration *this)

{
  return this->HashNoStrides;
}

