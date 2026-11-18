// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FItem @ 14768a660

void __thiscall Audio::FTabularRenderHelper::FItem::~FItem(FItem *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Text).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// FItem @ 147f64750

FItem * __thiscall
FUniformExpressionCacheAsyncUpdater::FItem::FItem
          (FItem *this,FUniformExpressionCache *param_1,FUniformExpressionSet *param_2,
          FRHIUniformBufferLayout *param_3,FMaterialRenderContext *param_4)

{
  TArray<IAllocatedVirtualTexture_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FRHIUniformBuffer *this_00;
  FScriptContainerElement *_Src;
  
  (this->UniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
  this_00 = (param_1->UniformBuffer).Reference;
  (this->UniformBuffer).Reference = this_00;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  pTVar1 = &this->AllocatedVTs;
  (pTVar1->AllocatorInstance).Data = (IAllocatedVirtualTexture **)0x0;
  piVar2 = &(this->AllocatedVTs).ArrayMax;
  iVar3 = (param_1->AllocatedVTs).ArrayNum;
  _Src = (param_1->AllocatedVTs).AllocatorInstance.Data;
  (this->AllocatedVTs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<IAllocatedVirtualTexture_*>_>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->UniformBufferLayout = param_3;
  this->UniformExpressionSet = param_2;
  this->MaterialRenderProxy = param_4->MaterialRenderProxy;
  this->Material = param_4->Material;
  this->bShowSelection = param_4->bShowSelection;
  return this;
}

// FItem @ 148b1dbe0

FItem * __thiscall UE::FItem::FItem(FItem *this,FItem *param_1)

{
  this->Class = param_1->Class;
  this->Count = param_1->Count;
  this->Num = param_1->Num;
  this->Max = param_1->Max;
  (this->TrueResourceSize).ResourceSizeMode = (param_1->TrueResourceSize).ResourceSizeMode;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->TrueResourceSize).DedicatedSystemMemoryBytesMap,
             &(param_1->TrueResourceSize).DedicatedSystemMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->TrueResourceSize).DedicatedVideoMemoryBytesMap,
             &(param_1->TrueResourceSize).DedicatedVideoMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->TrueResourceSize).UnknownMemoryBytesMap,
             &(param_1->TrueResourceSize).UnknownMemoryBytesMap);
  return this;
}

