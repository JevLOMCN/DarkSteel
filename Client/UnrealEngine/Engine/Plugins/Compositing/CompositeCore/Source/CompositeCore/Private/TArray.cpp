// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 7

// AddDefaulted_GetRef @ 14ea79c00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPassTexture * __thiscall
TArray<UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
          (TArray<UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  FPassTexture *pFVar2;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  pFVar2 = (FPassTexture *)((this->AllocatorInstance).Data + (longlong)iVar1 * 0x20);
  DefaultConstructItems<UE::CompositeCore::FPassTexture,int>(pFVar2,1);
  return pFVar2;
}

// InsertUninitializedImpl @ 14ea80250

void __thiscall
TArray<TTuple<int,UE::CompositeCore::FPassTexture>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<int,UE::CompositeCore::FPassTexture>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 14ea802d0

void __thiscall
TArray<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14ea80350

void __thiscall
TArray<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// InsertUninitializedImpl @ 14ea803d0

void __thiscall
TArray<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14ea80450

void __thiscall
TArray<TTuple<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 14ea804d0

void __thiscall
TArray<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl(void *this,int param_1,int param_2)

{
  void *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
  _Src = (void *)(*(longlong *)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar1 - param_1) * 0x18);
  return;
}

