// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// StaticStruct @ 145ef7330

UScriptStruct * __cdecl FLandscapeLayer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeLayer.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FLandscapeLayer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayer,(UObject *)pUVar1,
                         L"LandscapeLayer");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeLayer.OuterSingleton;
}

// FLandscapeLayer @ 145f02800

FLandscapeLayer * __thiscall FLandscapeLayer::FLandscapeLayer(FLandscapeLayer *this)

{
  this->_padding_ = (longlong)&___7FLandscapeLayer__6B_;
  FGuid::NewGuid(&this->Guid_DEPRECATED);
  (this->Name_DEPRECATED).ComparisonIndex = 0;
  (this->Name_DEPRECATED).Number = 0;
  (this->BlendMode_DEPRECATED).Value = '\0';
  (this->Brushes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Brushes).ArrayNum = 0;
  (this->Brushes).ArrayMax = 0;
  *(undefined8 *)&this->WeightmapLayerAllocationBlend_DEPRECATED = 0;
  *(undefined8 *)&(this->WeightmapLayerAllocationBlend_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->WeightmapLayerAllocationBlend_DEPRECATED).field_0x20 = 0;
  this->bVisible_DEPRECATED = true;
  this->bLocked_DEPRECATED = false;
  this->HeightmapAlpha_DEPRECATED = 1.0;
  this->WeightmapAlpha_DEPRECATED = 1.0;
  *(undefined4 *)&(this->WeightmapLayerAllocationBlend_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->WeightmapLayerAllocationBlend_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeightmapLayerAllocationBlend_DEPRECATED).field_0x34 = 0;
  *(undefined4 *)&(this->WeightmapLayerAllocationBlend_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WeightmapLayerAllocationBlend_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->WeightmapLayerAllocationBlend_DEPRECATED).field_0x48 = 0;
  (this->EditLayer).field0_0x0.DebugPtr = (ULandscapeEditLayerBase *)0x0;
  return this;
}

// ~FLandscapeLayer @ 145f03ee0

void __thiscall FLandscapeLayer::~FLandscapeLayer(FLandscapeLayer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->WeightmapLayerAllocationBlend_DEPRECATED).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WeightmapLayerAllocationBlend_DEPRECATED).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeLayerInfoObject>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeLayerInfoObject>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeLayerInfoObject>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WeightmapLayerAllocationBlend_DEPRECATED);
  pFVar2 = (this->Brushes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

