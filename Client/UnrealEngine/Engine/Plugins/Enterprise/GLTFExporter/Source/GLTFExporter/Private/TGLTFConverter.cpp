// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 129

// ~TGLTFConverter<float,FMeshDescription_const_*,FMeshAttributesArray<int>,int> @ 14e5d3a80

void __thiscall
TGLTFConverter<float,FMeshDescription_const_*,FMeshAttributesArray<int>,int>::
~TGLTFConverter<float,FMeshDescription_const_*,FMeshAttributesArray<int>,int>
          (TGLTFConverter<float,FMeshDescription_const_*,FMeshAttributesArray<int>,int> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> @ 14e5d3ac0

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*>::
~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*> @ 14e5d3b00

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
::
~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool> @ 14e5d3b40

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
::
~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*> @ 14e5d3b80

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>::
~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*> @ 14e5d3bc0

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>::
~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int> @ 14e5d3c00

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
::
~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*> @ 14e5d3c40

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>::
~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int> @ 14e5d3c80

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
::
~TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> @ 14e5d3cc0

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>::
~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_> @ 14e5d3d00

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>::
~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_> @ 14e5d3d40

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>::
~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_> @ 14e5d3d80

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>::
~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_> @ 14e5d3dc0

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>::
~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool> @ 14e5d3e00

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>::
~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> @ 14e5d3e40

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>::
~TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*> @ 14e5d3e80

void __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>::
~TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
          (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*> @ 14e5d3ec0

void __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>::
~TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>
          (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*> *this
          )

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> @ 14e5d3f00

void __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>::
~TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>
          (TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> @ 14e5d3f40

void __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>::
~TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>
          (TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> @ 14e5d3f80

void __thiscall
TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>::
~TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>
          (TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_> @ 14e5d3fc0

void __thiscall
TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
::
~TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
          (TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> @ 14e5d4000

void __thiscall
TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>::
~TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>
          (TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> @ 14e5d4040

void __thiscall
TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>::
~TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>
          (TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> @ 14e5d4080

void __thiscall
TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>::
~TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>
          (TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> @ 14e5d40c0

void __thiscall
TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*>::
~TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*>
          (TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_> @ 14e5d4100

void __thiscall
TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
::
~TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
          (TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> @ 14e5d4140

void __thiscall
TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>::
~TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>
          (TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*> @ 14e5d4180

void __thiscall
TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>::
~TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>
          (TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int> @ 14e5d41c0

void __thiscall
TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
::
~TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
          (TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int> @ 14e5d4200

void __thiscall
TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
::
~TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
          (TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int> @ 14e5d4240

void __thiscall
TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
::
~TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
          (TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> @ 14e5d4280

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>::
~TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> @ 14e5d42c0

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>::
~TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> @ 14e5d4300

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>::
~TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonNode_*,AActor_const_*> @ 14e5d4340

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,AActor_const_*>::~TGLTFConverter<FGLTFJsonNode_*,AActor_const_*>
          (TGLTFConverter<FGLTFJsonNode_*,AActor_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<AActor_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<AActor_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<AActor_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> @ 14e5d4380

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*>::
~TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*>
          (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> @ 14e5d43c0

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>::
~TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>
          (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup> @ 14e5d4400

void __thiscall
TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>
::
~TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>
          (void *this)

{
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>,FGLTFJsonSampler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>,FGLTFJsonSampler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// ~TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> @ 14e5d4440

void __thiscall
TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*>::~TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*>
          (TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UWorld_const_*>,FGLTFJsonScene_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UWorld_const_*>,FGLTFJsonScene_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UWorld_const_*>,FGLTFJsonScene_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> @ 14e5d4480

void __thiscall
TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>::
~TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>
          (TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> @ 14e5d44c0

void __thiscall
TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>::
~TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>
          (TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress> @ 14e5d4500

void __thiscall
TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>::
~TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>
          (void *this)

{
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// ~TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool> @ 14e5d4540

void __thiscall
TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool>::
~TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool>
          (TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int> @ 14e5d4580

void __thiscall
TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>::
~TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
          (TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int> @ 14e5d45c0

void __thiscall
TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>::
~TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
          (TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_> @ 14e5d4600

void __thiscall
TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>::
~TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>
          (TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_> @ 14e5d4640

void __thiscall
TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>::
~TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>
          (TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// ~TGLTFConverter<UE::Math::TBox2<float>,FMeshDescription_const_*,FMeshAttributesArray<int>,int> @ 14e5d4680

void __thiscall
TGLTFConverter<UE::Math::TBox2<float>,FMeshDescription_const_*,FMeshAttributesArray<int>,int>::
~TGLTFConverter<UE::Math::TBox2<float>,FMeshDescription_const_*,FMeshAttributesArray<int>,int>
          (TGLTFConverter<UE::Math::TBox2<float>,FMeshDescription_const_*,FMeshAttributesArray<int>,int>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  return;
}

// GetOrAdd @ 14e5f8140

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
::GetOrAdd(TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
           *this,FGLTFMeshSection *param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          *param_2)

{
  longlong *plVar1;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
  *this_00;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
  *local_res8;
  FGLTFMeshSection *local_res10;
  TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
  *local_res18;
  FGLTFJsonAccessor *local_res20;
  FGLTFMeshSection *local_58;
  TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
  *local_50;
  FGLTFMeshSection **local_48;
  FGLTFJsonAccessor **local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18);
  local_58 = local_res10;
  local_50 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this->CachedOutputs);
        if (((FGLTFMeshSection *)*plVar1 == local_res10) &&
           ((TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
             *)plVar1[1] == local_res18)) {
          if (iVar6 != -1) {
            plVar4 = plVar1 + 2;
            if (plVar1 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            if (plVar4 != (longlong *)0x0) {
              return (FGLTFJsonAccessor *)*plVar4;
            }
          }
          break;
        }
        iVar6 = (int)plVar1[3];
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>_*>
                      (&local_res8);
  local_res20 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const*___ptr64>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const*___ptr64>
                            *)this_00);
  local_48 = &local_58;
  local_40 = &local_res20;
  TSet<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_48);
  return local_res20;
}

// GetOrAdd @ 14e5f8310

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
::GetOrAdd(TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
           *this,FGLTFMeshSection *param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          *param_2,bool param_3)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
  *this_00;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
  *local_res8;
  FGLTFMeshSection *local_res10;
  TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
  *local_res18;
  byte local_res20 [8];
  FGLTFJsonAccessor *local_68;
  FGLTFMeshSection **local_60;
  FGLTFJsonAccessor **local_58;
  FGLTFMeshSection *local_50;
  TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
  *local_48;
  byte local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20[0] = param_3;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,local_res20);
  local_50 = local_res10;
  local_48 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  local_40 = local_res20[0];
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 ^ uVar2;
  uVar2 = local_res20[0] + 0x9e3779b9 + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28;
        if (((*(FGLTFMeshSection **)(*(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28) ==
              local_res10) &&
            (*(TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
               **)(lVar1 + 8) == local_res18)) && (*(byte *)(lVar1 + 0x10) == local_res20[0])) {
          if (iVar6 != -1) {
            puVar4 = (undefined8 *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              puVar4 = (undefined8 *)0x0;
            }
            if (puVar4 != (undefined8 *)0x0) {
              return (FGLTFJsonAccessor *)*puVar4;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>_*>
                      (&local_res8);
  local_68 = (FGLTFJsonAccessor *)
             TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const*___ptr64,bool>
             ::_vcall__16__flat______
                       ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const*___ptr64,bool>
                         *)this_00);
  local_60 = &local_50;
  local_58 = &local_68;
  TSet<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_60);
  return local_68;
}

// GetOrAdd @ 14e5f8510

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>::GetOrAdd
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>
           *this,FGLTFMeshSection *param_1,FColorVertexBuffer *param_2)

{
  longlong *plVar1;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*> *this_00;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>
  *local_res8;
  FGLTFMeshSection *local_res10;
  FColorVertexBuffer *local_res18;
  FGLTFJsonAccessor *local_res20;
  FGLTFMeshSection *local_58;
  FColorVertexBuffer *local_50;
  FGLTFMeshSection **local_48;
  FGLTFJsonAccessor **local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18);
  local_58 = local_res10;
  local_50 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this->CachedOutputs);
        if (((FGLTFMeshSection *)*plVar1 == local_res10) &&
           ((FColorVertexBuffer *)plVar1[1] == local_res18)) {
          if (iVar6 != -1) {
            plVar4 = plVar1 + 2;
            if (plVar1 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            if (plVar4 != (longlong *)0x0) {
              return (FGLTFJsonAccessor *)*plVar4;
            }
          }
          break;
        }
        iVar6 = (int)plVar1[3];
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>_*>
                      (&local_res8);
  local_res20 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FColorVertexBuffer_const*___ptr64>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FColorVertexBuffer_const*___ptr64>
                            *)this_00);
  local_48 = &local_58;
  local_40 = &local_res20;
  TSet<TTuple<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_48);
  return local_res20;
}

// GetOrAdd @ 14e5f86e0

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>::GetOrAdd
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
           *this,FGLTFMeshSection *param_1,FPositionVertexBuffer *param_2)

{
  longlong *plVar1;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
  *this_00;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
  *local_res8;
  FGLTFMeshSection *local_res10;
  FPositionVertexBuffer *local_res18;
  FGLTFJsonAccessor *local_res20;
  FGLTFMeshSection *local_58;
  FPositionVertexBuffer *local_50;
  FGLTFMeshSection **local_48;
  FGLTFJsonAccessor **local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18);
  local_58 = local_res10;
  local_50 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this->CachedOutputs);
        if (((FGLTFMeshSection *)*plVar1 == local_res10) &&
           ((FPositionVertexBuffer *)plVar1[1] == local_res18)) {
          if (iVar6 != -1) {
            plVar4 = plVar1 + 2;
            if (plVar1 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            if (plVar4 != (longlong *)0x0) {
              return (FGLTFJsonAccessor *)*plVar4;
            }
          }
          break;
        }
        iVar6 = (int)plVar1[3];
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>_*>
                      (&local_res8);
  local_res20 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FPositionVertexBuffer_const*___ptr64>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FPositionVertexBuffer_const*___ptr64>
                            *)this_00);
  local_48 = &local_58;
  local_40 = &local_res20;
  TSet<TTuple<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_48);
  return local_res20;
}

// GetOrAdd @ 14e5f88b0

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
::GetOrAdd(TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
           *this,FGLTFMeshSection *param_1,FSkinWeightVertexBuffer *param_2,uint param_3)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
  *this_00;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
  *local_res8;
  FGLTFMeshSection *local_res10;
  FSkinWeightVertexBuffer *local_res18;
  uint local_res20 [2];
  FGLTFJsonAccessor *local_68;
  FGLTFMeshSection **local_60;
  FGLTFJsonAccessor **local_58;
  FGLTFMeshSection *local_50;
  FSkinWeightVertexBuffer *local_48;
  uint local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20[0] = param_3;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,local_res20);
  local_50 = local_res10;
  local_48 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  local_40 = local_res20[0];
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar2 = uVar2 * 0x40 + -0x61c88647 + local_res20[0] + (uVar2 >> 2) ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28;
        if (((*(FGLTFMeshSection **)(*(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28) ==
              local_res10) && (*(FSkinWeightVertexBuffer **)(lVar1 + 8) == local_res18)) &&
           (*(uint *)(lVar1 + 0x10) == local_res20[0])) {
          if (iVar6 != -1) {
            puVar4 = (undefined8 *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              puVar4 = (undefined8 *)0x0;
            }
            if (puVar4 != (undefined8 *)0x0) {
              return (FGLTFJsonAccessor *)*puVar4;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>_*>
                      (&local_res8);
  local_68 = (FGLTFJsonAccessor *)
             TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FSkinWeightVertexBuffer_const*___ptr64,unsigned_int>
             ::_vcall__16__flat______
                       ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FSkinWeightVertexBuffer_const*___ptr64,unsigned_int>
                         *)this_00);
  local_60 = &local_50;
  local_58 = &local_68;
  TSet<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_60);
  return local_68;
}

// GetOrAdd @ 14e5f8aa0

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>::
GetOrAdd(TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
         *this,FGLTFMeshSection *param_1,FStaticMeshVertexBuffer *param_2)

{
  longlong *plVar1;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
  *this_00;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
  *local_res8;
  FGLTFMeshSection *local_res10;
  FStaticMeshVertexBuffer *local_res18;
  FGLTFJsonAccessor *local_res20;
  FGLTFMeshSection *local_58;
  FStaticMeshVertexBuffer *local_50;
  FGLTFMeshSection **local_48;
  FGLTFJsonAccessor **local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18);
  local_58 = local_res10;
  local_50 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this->CachedOutputs);
        if (((FGLTFMeshSection *)*plVar1 == local_res10) &&
           ((FStaticMeshVertexBuffer *)plVar1[1] == local_res18)) {
          if (iVar6 != -1) {
            plVar4 = plVar1 + 2;
            if (plVar1 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            if (plVar4 != (longlong *)0x0) {
              return (FGLTFJsonAccessor *)*plVar4;
            }
          }
          break;
        }
        iVar6 = (int)plVar1[3];
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>_*>
                      (&local_res8);
  local_res20 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FStaticMeshVertexBuffer_const*___ptr64>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FStaticMeshVertexBuffer_const*___ptr64>
                            *)this_00);
  local_48 = &local_58;
  local_40 = &local_res20;
  TSet<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_48);
  return local_res20;
}

// GetOrAdd @ 14e5f8c70

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
::GetOrAdd(TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
           *this,FGLTFMeshSection *param_1,FStaticMeshVertexBuffer *param_2,uint param_3)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
  *this_00;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
  *local_res8;
  FGLTFMeshSection *local_res10;
  FStaticMeshVertexBuffer *local_res18;
  uint local_res20 [2];
  FGLTFJsonAccessor *local_68;
  FGLTFMeshSection **local_60;
  FGLTFJsonAccessor **local_58;
  FGLTFMeshSection *local_50;
  FStaticMeshVertexBuffer *local_48;
  uint local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20[0] = param_3;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,local_res20);
  local_50 = local_res10;
  local_48 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  local_40 = local_res20[0];
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar2 = uVar2 * 0x40 + -0x61c88647 + local_res20[0] + (uVar2 >> 2) ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28;
        if (((*(FGLTFMeshSection **)(*(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28) ==
              local_res10) && (*(FStaticMeshVertexBuffer **)(lVar1 + 8) == local_res18)) &&
           (*(uint *)(lVar1 + 0x10) == local_res20[0])) {
          if (iVar6 != -1) {
            puVar4 = (undefined8 *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              puVar4 = (undefined8 *)0x0;
            }
            if (puVar4 != (undefined8 *)0x0) {
              return (FGLTFJsonAccessor *)*puVar4;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>_*>
                      (&local_res8);
  local_68 = (FGLTFJsonAccessor *)
             TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FStaticMeshVertexBuffer_const*___ptr64,unsigned_int>
             ::_vcall__16__flat______
                       ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FStaticMeshVertexBuffer_const*___ptr64,unsigned_int>
                         *)this_00);
  local_60 = &local_50;
  local_58 = &local_68;
  TSet<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_60);
  return local_68;
}

// GetOrAdd @ 14e5f8e60

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>::GetOrAdd
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> *this,
          FMeshAttributesArray<int> *param_1,FString *param_2)

{
  TMap<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> *this_01;
  FGLTFJsonAccessor *pFVar8;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> *local_res8;
  FGLTFJsonAccessor *local_res10;
  undefined1 local_78 [16];
  FMeshAttributesArray<int> local_68;
  undefined1 local_58 [16];
  FString local_48;
  
  (**(code **)(this->_padding_ + 8))();
  local_58._0_8_ = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  local_58._8_4_ = *(undefined4 *)&param_1->field_0x8;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&param_1->field_0x8 = 0;
  local_48.Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = (param_2->Data).ArrayNum;
  local_48.Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  uVar3 = ::GetTypeHash((FMeshAttributesArray<int> *)local_58);
  iVar5 = local_48.Data.ArrayNum + -1;
  FVar2.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  this_00 = &this->CachedOutputs;
  uVar3 = uVar3 * 0x40 + (uVar3 >> 2) + uVar4 + 0x9e3779b9 ^ uVar3;
  iVar5 = TSet<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<FMeshAttributesArray<int>,FString>_>
                    ((TSet<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
                      *)this_00,uVar3,(TTuple<FMeshAttributesArray<int>,FString> *)local_58);
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0x30 + *(longlong *)&this_00->field_0x0;
    puVar7 = (undefined8 *)(lVar6 + 0x20);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      pFVar8 = (FGLTFJsonAccessor *)*puVar7;
      goto LAB_14e5f8faa;
    }
  }
  local_res8 = this;
  this_01 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>_*>
                      (&local_res8);
  ::FString::FString((FString *)local_78,&local_48);
  FMeshAttributesArray<int>::FMeshAttributesArray<int>
            (&local_68,(FMeshAttributesArray<int> *)local_58);
  local_res10 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<int>,FString>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<int>,FString>
                            *)this_01);
  local_78._0_8_ = local_58;
  local_78._8_8_ = &local_res10;
  TSet<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FMeshAttributesArray<int>,FString>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)this_00,(uint)&local_res8,
             (TPairInitializer<TTuple<FMeshAttributesArray<int>,FString>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)uVar3,(bool *)local_78);
  pFVar8 = local_res10;
LAB_14e5f8faa:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((void *)local_58._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pFVar8;
}

// GetOrAdd @ 14e5f9010

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>::
GetOrAdd(TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
         *this,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *param_1)

{
  longlong lVar1;
  FGLTFJsonAccessor *pFVar2;
  TIntVector4<unsigned_short> *pTVar3;
  int iVar4;
  bool bVar5;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
  *this_00;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint local_res8 [2];
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
  *local_res10;
  FGLTFJsonAccessor *local_res18;
  TIntVector4<unsigned_short> *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  
  (**(code **)(this->_padding_ + 8))();
  local_58 = *(TIntVector4<unsigned_short> **)param_1;
  *(undefined8 *)param_1 = 0;
  local_50 = *(int *)&param_1->field_0x8;
  local_4c = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&param_1->field_0x8 = 0;
  local_res8[0] =
       ::GetTypeHash((FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *)&local_58);
  iVar4 = local_50;
  pTVar3 = local_58;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar7 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->CachedOutputs).field_0x38;
    }
    iVar9 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->CachedOutputs).field_0x48 - 1U & local_res8[0]) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->CachedOutputs;
      do {
        puVar8 = (undefined8 *)((longlong)iVar9 * 0x20 + lVar1);
        if ((*(int *)(puVar8 + 1) == iVar4) &&
           (bVar5 = CompareItems<UE::Math::TIntVector4<unsigned_short>,int>
                              ((TIntVector4<unsigned_short> *)*puVar8,pTVar3,*(int *)(puVar8 + 1)),
           bVar5)) {
          if (iVar9 != -1) {
            puVar6 = puVar8 + 2;
            if (puVar8 == (undefined8 *)0x0) {
              puVar6 = (undefined8 *)0x0;
            }
            if (puVar6 != (undefined8 *)0x0) {
              pFVar2 = (FGLTFJsonAccessor *)*puVar6;
              goto joined_r0x00014e5f91b3;
            }
          }
          break;
        }
        iVar9 = *(int *)(puVar8 + 3);
      } while (iVar9 != -1);
    }
  }
  local_res10 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>_*>
                      (&local_res10);
  FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>::
  FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>
            ((FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *)local_48,
             (FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *)&local_58);
  local_res18 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
                            *)this_00);
  local_48._0_8_ = &local_58;
  local_48._8_8_ = &local_res18;
  TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)local_res8,
             (TPairInitializer<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)local_res8[0],(bool *)local_48);
  pFVar2 = local_res18;
  pTVar3 = local_58;
joined_r0x00014e5f91b3:
  if (pTVar3 != (TIntVector4<unsigned_short> *)0x0) {
    FMemory::Free(pTVar3);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return pFVar2;
}

// GetOrAdd @ 14e5f91c0

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>::GetOrAdd
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>
           *this,FMeshAttributesArray<UE::Math::TVector2<float>_> *param_1)

{
  longlong lVar1;
  FGLTFJsonAccessor *pFVar2;
  TVector2<float> *pTVar3;
  int iVar4;
  bool bVar5;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_> *this_00;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint local_res8 [2];
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_> *local_res10
  ;
  FGLTFJsonAccessor *local_res18;
  TVector2<float> *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  
  (**(code **)(this->_padding_ + 8))();
  local_58 = *(TVector2<float> **)param_1;
  *(undefined8 *)param_1 = 0;
  local_50 = *(int *)&param_1->field_0x8;
  local_4c = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&param_1->field_0x8 = 0;
  local_res8[0] = ::GetTypeHash((FMeshAttributesArray<UE::Math::TVector2<float>_> *)&local_58);
  iVar4 = local_50;
  pTVar3 = local_58;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar7 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->CachedOutputs).field_0x38;
    }
    iVar9 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->CachedOutputs).field_0x48 - 1U & local_res8[0]) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->CachedOutputs;
      do {
        puVar8 = (undefined8 *)((longlong)iVar9 * 0x20 + lVar1);
        if ((*(int *)(puVar8 + 1) == iVar4) &&
           (bVar5 = CompareItems<UE::Math::TVector2<float>,int>
                              ((TVector2<float> *)*puVar8,pTVar3,*(int *)(puVar8 + 1)), bVar5)) {
          if (iVar9 != -1) {
            puVar6 = puVar8 + 2;
            if (puVar8 == (undefined8 *)0x0) {
              puVar6 = (undefined8 *)0x0;
            }
            if (puVar6 != (undefined8 *)0x0) {
              pFVar2 = (FGLTFJsonAccessor *)*puVar6;
              goto joined_r0x00014e5f9363;
            }
          }
          break;
        }
        iVar9 = *(int *)(puVar8 + 3);
      } while (iVar9 != -1);
    }
  }
  local_res10 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>_*>
                      (&local_res10);
  FMeshAttributesArray<UE::Math::TVector2<float>_>::FMeshAttributesArray<UE::Math::TVector2<float>_>
            ((FMeshAttributesArray<UE::Math::TVector2<float>_> *)local_48,
             (FMeshAttributesArray<UE::Math::TVector2<float>_> *)&local_58);
  local_res18 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector2<float>_>_>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector2<float>_>_>
                            *)this_00);
  local_48._0_8_ = &local_58;
  local_48._8_8_ = &local_res18;
  TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)local_res8,
             (TPairInitializer<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)local_res8[0],(bool *)local_48);
  pFVar2 = local_res18;
  pTVar3 = local_58;
joined_r0x00014e5f9363:
  if (pTVar3 != (TVector2<float> *)0x0) {
    FMemory::Free(pTVar3);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return pFVar2;
}

// GetOrAdd @ 14e5f9370

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>::GetOrAdd
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>
           *this,FMeshAttributesArray<UE::Math::TVector4<float>_> *param_1)

{
  longlong lVar1;
  FGLTFJsonAccessor *pFVar2;
  TVector4<float> *pTVar3;
  int iVar4;
  bool bVar5;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_> *this_00;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint local_res8 [2];
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_> *local_res10
  ;
  FGLTFJsonAccessor *local_res18;
  TVector4<float> *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  
  (**(code **)(this->_padding_ + 8))();
  local_58 = *(TVector4<float> **)param_1;
  *(undefined8 *)param_1 = 0;
  local_50 = *(int *)&param_1->field_0x8;
  local_4c = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&param_1->field_0x8 = 0;
  local_res8[0] = ::GetTypeHash((FMeshAttributesArray<UE::Math::TVector4<float>_> *)&local_58);
  iVar4 = local_50;
  pTVar3 = local_58;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar7 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->CachedOutputs).field_0x38;
    }
    iVar9 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->CachedOutputs).field_0x48 - 1U & local_res8[0]) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->CachedOutputs;
      do {
        puVar8 = (undefined8 *)((longlong)iVar9 * 0x20 + lVar1);
        if ((*(int *)(puVar8 + 1) == iVar4) &&
           (bVar5 = CompareItems<UE::Math::TVector4<float>,int>
                              ((TVector4<float> *)*puVar8,pTVar3,*(int *)(puVar8 + 1)), bVar5)) {
          if (iVar9 != -1) {
            puVar6 = puVar8 + 2;
            if (puVar8 == (undefined8 *)0x0) {
              puVar6 = (undefined8 *)0x0;
            }
            if (puVar6 != (undefined8 *)0x0) {
              pFVar2 = (FGLTFJsonAccessor *)*puVar6;
              goto joined_r0x00014e5f9513;
            }
          }
          break;
        }
        iVar9 = *(int *)(puVar8 + 3);
      } while (iVar9 != -1);
    }
  }
  local_res10 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>_*>
                      (&local_res10);
  FMeshAttributesArray<UE::Math::TVector4<float>_>::FMeshAttributesArray<UE::Math::TVector4<float>_>
            ((FMeshAttributesArray<UE::Math::TVector4<float>_> *)local_48,
             (FMeshAttributesArray<UE::Math::TVector4<float>_> *)&local_58);
  local_res18 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector4<float>_>_>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector4<float>_>_>
                            *)this_00);
  local_48._0_8_ = &local_58;
  local_48._8_8_ = &local_res18;
  TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)local_res8,
             (TPairInitializer<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)local_res8[0],(bool *)local_48);
  pFVar2 = local_res18;
  pTVar3 = local_58;
joined_r0x00014e5f9513:
  if (pTVar3 != (TVector4<float> *)0x0) {
    FMemory::Free(pTVar3);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return pFVar2;
}

// GetOrAdd @ 14e5f9520

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>::GetOrAdd
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>
           *this,FMeshAttributesArray<UE::Math::TVector<float>_> *param_1)

{
  longlong lVar1;
  FGLTFJsonAccessor *pFVar2;
  TVector<float> *pTVar3;
  int iVar4;
  bool bVar5;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_> *this_00;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint local_res8 [2];
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_> *local_res10;
  FGLTFJsonAccessor *local_res18;
  TVector<float> *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  
  (**(code **)(this->_padding_ + 8))();
  local_58 = *(TVector<float> **)param_1;
  *(undefined8 *)param_1 = 0;
  local_50 = *(int *)&param_1->field_0x8;
  local_4c = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&param_1->field_0x8 = 0;
  local_res8[0] = ::GetTypeHash((FMeshAttributesArray<UE::Math::TVector<float>_> *)&local_58);
  iVar4 = local_50;
  pTVar3 = local_58;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar7 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->CachedOutputs).field_0x38;
    }
    iVar9 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->CachedOutputs).field_0x48 - 1U & local_res8[0]) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->CachedOutputs;
      do {
        puVar8 = (undefined8 *)((longlong)iVar9 * 0x20 + lVar1);
        if ((*(int *)(puVar8 + 1) == iVar4) &&
           (bVar5 = CompareItems<UE::Math::TVector<float>,int>
                              ((TVector<float> *)*puVar8,pTVar3,*(int *)(puVar8 + 1)), bVar5)) {
          if (iVar9 != -1) {
            puVar6 = puVar8 + 2;
            if (puVar8 == (undefined8 *)0x0) {
              puVar6 = (undefined8 *)0x0;
            }
            if (puVar6 != (undefined8 *)0x0) {
              pFVar2 = (FGLTFJsonAccessor *)*puVar6;
              goto joined_r0x00014e5f96c3;
            }
          }
          break;
        }
        iVar9 = *(int *)(puVar8 + 3);
      } while (iVar9 != -1);
    }
  }
  local_res10 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>_*>
                      (&local_res10);
  FMeshAttributesArray<UE::Math::TVector<float>_>::FMeshAttributesArray<UE::Math::TVector<float>_>
            ((FMeshAttributesArray<UE::Math::TVector<float>_> *)local_48,
             (FMeshAttributesArray<UE::Math::TVector<float>_> *)&local_58);
  local_res18 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector<float>_>_>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector<float>_>_>
                            *)this_00);
  local_48._0_8_ = &local_58;
  local_48._8_8_ = &local_res18;
  TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)local_res8,
             (TPairInitializer<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)local_res8[0],(bool *)local_48);
  pFVar2 = local_res18;
  pTVar3 = local_58;
joined_r0x00014e5f96c3:
  if (pTVar3 != (TVector<float> *)0x0) {
    FMemory::Free(pTVar3);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return pFVar2;
}

// GetOrAdd @ 14e5f96d0

FGLTFJsonAccessor * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>::GetOrAdd
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> *this,
          FMeshAttributesArray<FColor> *param_1)

{
  longlong lVar1;
  FGLTFJsonAccessor *pFVar2;
  FColor *pFVar3;
  int iVar4;
  bool bVar5;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> *this_00;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint local_res8 [2];
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> *local_res10;
  FGLTFJsonAccessor *local_res18;
  FColor *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  
  (**(code **)(this->_padding_ + 8))();
  local_58 = *(FColor **)param_1;
  *(undefined8 *)param_1 = 0;
  local_50 = *(int *)&param_1->field_0x8;
  local_4c = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&param_1->field_0x8 = 0;
  local_res8[0] = ::GetTypeHash((FMeshAttributesArray<FColor> *)&local_58);
  iVar4 = local_50;
  pFVar3 = local_58;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar7 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->CachedOutputs).field_0x38;
    }
    iVar9 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->CachedOutputs).field_0x48 - 1U & local_res8[0]) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->CachedOutputs;
      do {
        puVar8 = (undefined8 *)((longlong)iVar9 * 0x20 + lVar1);
        if ((*(int *)(puVar8 + 1) == iVar4) &&
           (bVar5 = CompareItems<FColor,int>((FColor *)*puVar8,pFVar3,*(int *)(puVar8 + 1)), bVar5))
        {
          if (iVar9 != -1) {
            puVar6 = puVar8 + 2;
            if (puVar8 == (undefined8 *)0x0) {
              puVar6 = (undefined8 *)0x0;
            }
            if (puVar6 != (undefined8 *)0x0) {
              pFVar2 = (FGLTFJsonAccessor *)*puVar6;
              goto joined_r0x00014e5f9873;
            }
          }
          break;
        }
        iVar9 = *(int *)(puVar8 + 3);
      } while (iVar9 != -1);
    }
  }
  local_res10 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>_*>
                      (&local_res10);
  FMeshAttributesArray<FColor>::FMeshAttributesArray<FColor>
            ((FMeshAttributesArray<FColor> *)local_48,(FMeshAttributesArray<FColor> *)&local_58);
  local_res18 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<FColor>_>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<FColor>_>
                            *)this_00);
  local_48._0_8_ = &local_58;
  local_48._8_8_ = &local_res18;
  TSet<TTuple<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FMeshAttributesArray<FColor>_>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)local_res8,
             (TPairInitializer<TTuple<FMeshAttributesArray<FColor>_>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)local_res8[0],(bool *)local_48);
  pFVar2 = local_res18;
  pFVar3 = local_58;
joined_r0x00014e5f9873:
  if (pFVar3 != (FColor *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return pFVar2;
}

// GetOrAdd @ 14e5f9880

FGLTFJsonAnimation * __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>::
GetOrAdd(TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
         *this,FGLTFJsonNode *param_1,USkeletalMesh *param_2,UAnimSequence *param_3)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
  *this_00;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
  *local_res8;
  FGLTFJsonNode *local_res10;
  USkeletalMesh *local_res18;
  UAnimSequence *local_res20;
  FGLTFJsonAnimation *local_68;
  FGLTFJsonNode **local_60;
  FGLTFJsonAnimation **local_58;
  FGLTFJsonNode *local_50;
  USkeletalMesh *local_48;
  UAnimSequence *local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,&local_res20);
  local_50 = local_res10;
  local_48 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  local_40 = local_res20;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 + -0x61c88647 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res20 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28;
        if (((*(FGLTFJsonNode **)(*(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28) ==
              local_res10) && (*(USkeletalMesh **)(lVar1 + 8) == local_res18)) &&
           (*(UAnimSequence **)(lVar1 + 0x10) == local_res20)) {
          if (iVar6 != -1) {
            puVar4 = (undefined8 *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              puVar4 = (undefined8 *)0x0;
            }
            if (puVar4 != (undefined8 *)0x0) {
              return (FGLTFJsonAnimation *)*puVar4;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>_*>
                      (&local_res8);
  local_68 = (FGLTFJsonAnimation *)
             TGLTFConverter<FGLTFJsonAnimation*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,UAnimSequence_const*___ptr64>
             ::_vcall__16__flat______
                       ((TGLTFConverter<FGLTFJsonAnimation*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,UAnimSequence_const*___ptr64>
                         *)this_00);
  local_60 = &local_50;
  local_58 = &local_68;
  TSet<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>_&&,FGLTFJsonAnimation_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>_&&,FGLTFJsonAnimation_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_60);
  return local_68;
}

// GetOrAdd @ 14e5f9aa0

FGLTFJsonAnimation * __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>::GetOrAdd
          (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*> *this
          ,FGLTFJsonNode *param_1,USkeletalMeshComponent *param_2)

{
  longlong *plVar1;
  TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*> *this_00;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*> *local_res8;
  FGLTFJsonNode *local_res10;
  USkeletalMeshComponent *local_res18;
  FGLTFJsonAnimation *local_res20;
  FGLTFJsonNode *local_58;
  USkeletalMeshComponent *local_50;
  FGLTFJsonNode **local_48;
  FGLTFJsonAnimation **local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18);
  local_58 = local_res10;
  local_50 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this->CachedOutputs);
        if (((FGLTFJsonNode *)*plVar1 == local_res10) &&
           ((USkeletalMeshComponent *)plVar1[1] == local_res18)) {
          if (iVar6 != -1) {
            plVar4 = plVar1 + 2;
            if (plVar1 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            if (plVar4 != (longlong *)0x0) {
              return (FGLTFJsonAnimation *)*plVar4;
            }
          }
          break;
        }
        iVar6 = (int)plVar1[3];
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>_*>
                      (&local_res8);
  local_res20 = (FGLTFJsonAnimation *)
                TGLTFConverter<FGLTFJsonAnimation*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMeshComponent_const*___ptr64>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAnimation*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMeshComponent_const*___ptr64>
                            *)this_00);
  local_48 = &local_58;
  local_40 = &local_res20;
  TSet<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>_&&,FGLTFJsonAnimation_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>_&&,FGLTFJsonAnimation_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_48);
  return local_res20;
}

// GetOrAdd @ 14e5f9c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGLTFJsonAnimation * __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>::GetOrAdd
          (TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> *this,
          ULevel *param_1,ULevelSequence *param_2)

{
  longlong *plVar1;
  TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> *this_00;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> *local_res8;
  ULevel *local_res10;
  ULevelSequence *local_res18;
  FGLTFJsonAnimation *local_res20;
  ULevel *local_58;
  ULevelSequence *local_50;
  ULevel **local_48;
  FGLTFJsonAnimation **local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18);
  local_58 = local_res10;
  local_50 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this->CachedOutputs);
        if (((ULevel *)*plVar1 == local_res10) && ((ULevelSequence *)plVar1[1] == local_res18)) {
          if (iVar6 != -1) {
            plVar4 = plVar1 + 2;
            if (plVar1 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            if (plVar4 != (longlong *)0x0) {
              return (FGLTFJsonAnimation *)*plVar4;
            }
          }
          break;
        }
        iVar6 = (int)plVar1[3];
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>_*>
                      (&local_res8);
  local_res20 = (FGLTFJsonAnimation *)
                TGLTFConverter<FGLTFJsonAnimation*___ptr64,ULevel_const*___ptr64,ULevelSequence_const*___ptr64>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAnimation*___ptr64,ULevel_const*___ptr64,ULevelSequence_const*___ptr64>
                            *)this_00);
  local_48 = &local_58;
  local_40 = &local_res20;
  TSet<TTuple<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*>,TDefaultMapHashableKeyFuncs<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<ULevel_const_*,ULevelSequence_const_*>_&&,FGLTFJsonAnimation_*_const_&>_>
            ((TSet<TTuple<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*>,TDefaultMapHashableKeyFuncs<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<ULevel_const_*,ULevelSequence_const_*>_&&,FGLTFJsonAnimation_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_48);
  return local_res20;
}

// GetOrAdd @ 14e5f9e40

FGLTFJsonImage * __thiscall
TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
::GetOrAdd(TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
           *this,TGLTFSuperfluous<FString> *param_1,bool param_2,TIntPoint<int> param_3,
          TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1> *param_4)

{
  TMap<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*,0>_>
  *this_00;
  TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1> *pTVar1;
  int iVar2;
  TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
  *this_01;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  FGLTFJsonImage *pFVar7;
  uint uVar8;
  uint uVar9;
  FGLTFJsonImage *local_res8;
  byte local_res18 [8];
  TIntPoint<int>_u_0 local_res20;
  undefined1 local_88 [16];
  FString local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  
  pTVar1 = param_4;
  local_res18[0] = param_2;
  local_res20 = param_3.field0_0x0;
  (**(code **)(this->_padding_ + 8))(this,param_1,local_res18,&local_res20,param_4);
  local_68._0_8_ = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  local_68._8_4_ = *(undefined4 *)&param_1->field_0x8;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&param_1->field_0x8 = 0;
  local_48._0_8_ = *(undefined8 *)pTVar1;
  local_48._8_8_ = *(undefined8 *)&pTVar1->field_0x8;
  local_68[0x10] = local_res18[0];
  local_68._20_8_ = local_res20;
  if ((TReferenceControllerBase<1> *)local_48._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_48._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_48._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar8 = local_res18[0] + 0x9e3779b9;
  iVar2 = local_res20._s_0.Y;
  uVar9 = local_res20._s_0.X - iVar2 ^
          (uint)((ulonglong)((longlong)local_res20 >> 0x20) >> 0xd) & 0x7ffff;
  uVar3 = (-0x61c88647 - uVar9) - iVar2 ^ uVar9 << 8;
  uVar6 = (iVar2 - uVar3) - uVar9 ^ uVar3 >> 0xd;
  uVar9 = (uVar9 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar9) - uVar6 ^ uVar9 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar9 ^ uVar3 >> 5;
  uVar9 = (uVar9 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar9) - uVar6 ^ uVar9 << 10;
  uVar8 = (uVar8 >> 2) + ((uVar6 - uVar3) - uVar9 ^ uVar3 >> 0xf) + 0x9e3779b9 + uVar8 * 0x40 ^
          uVar8;
  uVar3 = ::GetTypeHash((TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1> *)
                        local_48);
  this_00 = &this->CachedOutputs;
  uVar8 = uVar8 * 0x40 + (uVar8 >> 2) + uVar3 + 0x9e3779b9 ^ uVar8;
  iVar2 = TSet<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>,TDefaultMapHashableKeyFuncs<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>_>
                    ((TSet<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>,TDefaultMapHashableKeyFuncs<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*,0>,FDefaultSetAllocator>
                      *)this_00,uVar8,
                     (TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
                      *)local_68);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x40 + *(longlong *)&this_00->field_0x0;
    puVar5 = (undefined8 *)(lVar4 + 0x30);
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      pFVar7 = (FGLTFJsonImage *)*puVar5;
      goto LAB_14e5fa059;
    }
  }
  param_4 = (TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1> *)this;
  this_01 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>_*>
                      ((TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
                        **)&param_4);
  local_88._0_8_ = local_48._0_8_;
  local_88._8_8_ = local_48._8_8_;
  if ((TReferenceControllerBase<1> *)local_48._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_48._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_48._8_8_ + 8) + 1);
    UNLOCK();
  }
  ::FString::FString(&local_78,(FString *)local_68);
  local_res8 = (FGLTFJsonImage *)
               TGLTFConverter<FGLTFJsonImage*___ptr64,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
               ::_vcall__16__flat______
                         ((TGLTFConverter<FGLTFJsonImage*___ptr64,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
                           *)this_01);
  local_88._0_8_ = local_68;
  local_88._8_8_ = &local_res8;
  TSet<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>,TDefaultMapHashableKeyFuncs<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>_&&,FGLTFJsonImage_*_const_&>_>
            ((TSet<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>,TDefaultMapHashableKeyFuncs<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*,0>,FDefaultSetAllocator>
              *)this_00,(uint)&param_4,
             (TPairInitializer<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>_&&,FGLTFJsonImage_*_const_&>
              *)(ulonglong)uVar8,(bool *)local_88);
  pFVar7 = local_res8;
LAB_14e5fa059:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&pTVar1->field_0x8);
  return pFVar7;
}

// GetOrAdd @ 14e5fa0b0

FGLTFJsonMaterial * __thiscall
TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
::GetOrAdd(TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
           *this,UMaterialInterface *param_1,FGLTFMeshData *param_2,
          FMeshAttributesArray<int> *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
  *this_00;
  uint uVar4;
  uint uVar5;
  FGLTFJsonMaterial *pFVar6;
  TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
  *local_res8;
  UMaterialInterface *local_res10;
  FGLTFMeshData *local_res18;
  FGLTFJsonMaterial *local_res20;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  void *local_48 [2];
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18);
  local_48[0] = *(void **)param_3;
  local_58._0_8_ = local_res10;
  *(undefined8 *)param_3 = 0;
  local_48[1]._0_4_ = *(undefined4 *)&param_3->field_0x8;
  local_48[1]._4_4_ = *(undefined4 *)&param_3->field_0xc;
  local_58._8_8_ = local_res18;
  uVar4 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  *(undefined8 *)&param_3->field_0x8 = 0;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar4 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = (uVar5 >> 2) + (uVar4 >> 0x10 ^ uVar4) + uVar5 * 0x40 + -0x61c88647 ^ uVar5;
  uVar4 = ::GetTypeHash((FMeshAttributesArray<int> *)local_48);
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + uVar4 + 0x9e3779b9 ^ uVar5;
  iVar1 = TSet<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>,TDefaultMapHashableKeyFuncs<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>_>
                    ((TSet<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>,TDefaultMapHashableKeyFuncs<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*,0>,FDefaultSetAllocator>
                      *)&this->CachedOutputs,uVar5,
                     (TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
                      *)local_58);
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&this->CachedOutputs;
    puVar3 = (undefined8 *)(lVar2 + 0x20);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      pFVar6 = (FGLTFJsonMaterial *)*puVar3;
      goto LAB_14e5fa230;
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>_*>
                      (&local_res8);
  FMeshAttributesArray<int>::FMeshAttributesArray<int>
            ((FMeshAttributesArray<int> *)local_68,(FMeshAttributesArray<int> *)local_48);
  local_res20 = (FGLTFJsonMaterial *)
                TGLTFConverter<FGLTFJsonMaterial*___ptr64,UMaterialInterface_const*___ptr64,FGLTFMeshData_const*___ptr64,FMeshAttributesArray<int>_>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonMaterial*___ptr64,UMaterialInterface_const*___ptr64,FGLTFMeshData_const*___ptr64,FMeshAttributesArray<int>_>
                            *)this_00);
  local_68._0_8_ = local_58;
  local_68._8_8_ = &local_res20;
  TSet<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>,TDefaultMapHashableKeyFuncs<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>_&&,FGLTFJsonMaterial_*_const_&>_>
            ((TSet<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>,TDefaultMapHashableKeyFuncs<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>_&&,FGLTFJsonMaterial_*_const_&>
              *)(ulonglong)uVar5,(bool *)local_68);
  pFVar6 = local_res20;
LAB_14e5fa230:
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return pFVar6;
}

// GetOrAdd @ 14e5fa270

FGLTFJsonMesh * __thiscall
TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>::GetOrAdd
          (TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>
           *this,ULandscapeComponent *param_1,UMaterialInterface *param_2)

{
  longlong *plVar1;
  TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*> *this_00;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*> *local_res8
  ;
  ULandscapeComponent *local_res10;
  UMaterialInterface *local_res18;
  FGLTFJsonMesh *local_res20;
  ULandscapeComponent *local_58;
  UMaterialInterface *local_50;
  ULandscapeComponent **local_48;
  FGLTFJsonMesh **local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18);
  local_58 = local_res10;
  local_50 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this->CachedOutputs);
        if (((ULandscapeComponent *)*plVar1 == local_res10) &&
           ((UMaterialInterface *)plVar1[1] == local_res18)) {
          if (iVar6 != -1) {
            plVar4 = plVar1 + 2;
            if (plVar1 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            if (plVar4 != (longlong *)0x0) {
              return (FGLTFJsonMesh *)*plVar4;
            }
          }
          break;
        }
        iVar6 = (int)plVar1[3];
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>,TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>_*>
                      (&local_res8);
  local_res20 = (FGLTFJsonMesh *)
                TGLTFConverter<FGLTFJsonMesh*___ptr64,ULandscapeComponent_const*___ptr64,UMaterialInterface_const*___ptr64>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonMesh*___ptr64,ULandscapeComponent_const*___ptr64,UMaterialInterface_const*___ptr64>
                            *)this_00);
  local_48 = &local_58;
  local_40 = &local_res20;
  TSet<TTuple<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>_&&,FGLTFJsonMesh_*_const_&>_>
            ((TSet<TTuple<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>_&&,FGLTFJsonMesh_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_48);
  return local_res20;
}

// GetOrAdd @ 14e5fa440

FGLTFJsonMesh * __thiscall
TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
::GetOrAdd(TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
           *this,USkeletalMesh *param_1,USkeletalMeshComponent *param_2,FGLTFMaterialArray *param_3,
          int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
  *this_00;
  uint uVar4;
  uint uVar5;
  FGLTFJsonMesh *pFVar6;
  TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
  *local_res8;
  USkeletalMesh *local_res10;
  USkeletalMeshComponent *local_res18;
  FGLTFJsonMesh *local_res20;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  void *local_68 [2];
  int local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,param_3,&param_4);
  local_68[0] = *(void **)param_3;
  local_78._0_8_ = local_res10;
  *(undefined8 *)param_3 = 0;
  local_68[1]._0_4_ = *(undefined4 *)&param_3->field_0x8;
  local_68[1]._4_4_ = *(undefined4 *)&param_3->field_0xc;
  local_58 = param_4;
  local_78._8_8_ = local_res18;
  uVar4 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  *(undefined8 *)&param_3->field_0x8 = 0;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar4 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = (uVar5 >> 2) + (uVar4 >> 0x10 ^ uVar4) + uVar5 * 0x40 + -0x61c88647 ^ uVar5;
  uVar4 = ::GetTypeHash((FGLTFMaterialArray *)local_68);
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + uVar4 + 0x9e3779b9 ^ uVar5;
  uVar5 = uVar5 * 0x40 + local_58 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  iVar1 = TSet<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>_>
                    ((TSet<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
                      *)&this->CachedOutputs,uVar5,
                     (TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
                      *)local_78);
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&this->CachedOutputs;
    puVar3 = (undefined8 *)(lVar2 + 0x28);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      pFVar6 = (FGLTFJsonMesh *)*puVar3;
      goto LAB_14e5fa5f5;
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>_*>
                      (&local_res8);
  FGLTFMaterialArray::FGLTFMaterialArray
            ((FGLTFMaterialArray *)local_88,(FGLTFMaterialArray *)local_68);
  local_res20 = (FGLTFJsonMesh *)
                TGLTFConverter<FGLTFJsonMesh*___ptr64,USkeletalMesh_const*___ptr64,USkeletalMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonMesh*___ptr64,USkeletalMesh_const*___ptr64,USkeletalMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
                            *)this_00);
  local_88._0_8_ = local_78;
  local_88._8_8_ = &local_res20;
  TSet<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>_&&,FGLTFJsonMesh_*_const_&>_>
            ((TSet<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>_&&,FGLTFJsonMesh_*_const_&>
              *)(ulonglong)uVar5,(bool *)local_88);
  pFVar6 = local_res20;
LAB_14e5fa5f5:
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return pFVar6;
}

// GetOrAdd @ 14e5fa630

FGLTFJsonMesh * __thiscall
TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
::GetOrAdd(TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
           *this,UStaticMesh *param_1,USplineMeshComponent *param_2,FGLTFMaterialArray *param_3,
          int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
  *this_00;
  uint uVar4;
  uint uVar5;
  FGLTFJsonMesh *pFVar6;
  TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
  *local_res8;
  UStaticMesh *local_res10;
  USplineMeshComponent *local_res18;
  FGLTFJsonMesh *local_res20;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  void *local_68 [2];
  int local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,param_3,&param_4);
  local_68[0] = *(void **)param_3;
  local_78._0_8_ = local_res10;
  *(undefined8 *)param_3 = 0;
  local_68[1]._0_4_ = *(undefined4 *)&param_3->field_0x8;
  local_68[1]._4_4_ = *(undefined4 *)&param_3->field_0xc;
  local_58 = param_4;
  local_78._8_8_ = local_res18;
  uVar4 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  *(undefined8 *)&param_3->field_0x8 = 0;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar4 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = (uVar5 >> 2) + (uVar4 >> 0x10 ^ uVar4) + uVar5 * 0x40 + -0x61c88647 ^ uVar5;
  uVar4 = ::GetTypeHash((FGLTFMaterialArray *)local_68);
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + uVar4 + 0x9e3779b9 ^ uVar5;
  uVar5 = uVar5 * 0x40 + local_58 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  iVar1 = TSet<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>_>
                    ((TSet<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
                      *)&this->CachedOutputs,uVar5,
                     (TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
                      *)local_78);
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&this->CachedOutputs;
    puVar3 = (undefined8 *)(lVar2 + 0x28);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      pFVar6 = (FGLTFJsonMesh *)*puVar3;
      goto LAB_14e5fa7e5;
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>_*>
                      (&local_res8);
  FGLTFMaterialArray::FGLTFMaterialArray
            ((FGLTFMaterialArray *)local_88,(FGLTFMaterialArray *)local_68);
  local_res20 = (FGLTFJsonMesh *)
                TGLTFConverter<FGLTFJsonMesh*___ptr64,UStaticMesh_const*___ptr64,USplineMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonMesh*___ptr64,UStaticMesh_const*___ptr64,USplineMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
                            *)this_00);
  local_88._0_8_ = local_78;
  local_88._8_8_ = &local_res20;
  TSet<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>_&&,FGLTFJsonMesh_*_const_&>_>
            ((TSet<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>_&&,FGLTFJsonMesh_*_const_&>
              *)(ulonglong)uVar5,(bool *)local_88);
  pFVar6 = local_res20;
LAB_14e5fa7e5:
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return pFVar6;
}

// GetOrAdd @ 14e5fa820

FGLTFJsonMesh * __thiscall
TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
::GetOrAdd(TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
           *this,UStaticMesh *param_1,UStaticMeshComponent *param_2,FGLTFMaterialArray *param_3,
          int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
  *this_00;
  uint uVar4;
  uint uVar5;
  FGLTFJsonMesh *pFVar6;
  TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
  *local_res8;
  UStaticMesh *local_res10;
  UStaticMeshComponent *local_res18;
  FGLTFJsonMesh *local_res20;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  void *local_68 [2];
  int local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,param_3,&param_4);
  local_68[0] = *(void **)param_3;
  local_78._0_8_ = local_res10;
  *(undefined8 *)param_3 = 0;
  local_68[1]._0_4_ = *(undefined4 *)&param_3->field_0x8;
  local_68[1]._4_4_ = *(undefined4 *)&param_3->field_0xc;
  local_58 = param_4;
  local_78._8_8_ = local_res18;
  uVar4 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  *(undefined8 *)&param_3->field_0x8 = 0;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar4 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = (uVar5 >> 2) + (uVar4 >> 0x10 ^ uVar4) + uVar5 * 0x40 + -0x61c88647 ^ uVar5;
  uVar4 = ::GetTypeHash((FGLTFMaterialArray *)local_68);
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + uVar4 + 0x9e3779b9 ^ uVar5;
  uVar5 = uVar5 * 0x40 + local_58 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  iVar1 = TSet<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>_>
                    ((TSet<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
                      *)&this->CachedOutputs,uVar5,
                     (TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
                      *)local_78);
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&this->CachedOutputs;
    puVar3 = (undefined8 *)(lVar2 + 0x28);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      pFVar6 = (FGLTFJsonMesh *)*puVar3;
      goto LAB_14e5fa9d5;
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>_*>
                      (&local_res8);
  FGLTFMaterialArray::FGLTFMaterialArray
            ((FGLTFMaterialArray *)local_88,(FGLTFMaterialArray *)local_68);
  local_res20 = (FGLTFJsonMesh *)
                TGLTFConverter<FGLTFJsonMesh*___ptr64,UStaticMesh_const*___ptr64,UStaticMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonMesh*___ptr64,UStaticMesh_const*___ptr64,UStaticMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
                            *)this_00);
  local_88._0_8_ = local_78;
  local_88._8_8_ = &local_res20;
  TSet<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>_&&,FGLTFJsonMesh_*_const_&>_>
            ((TSet<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>_&&,FGLTFJsonMesh_*_const_&>
              *)(ulonglong)uVar5,(bool *)local_88);
  pFVar6 = local_res20;
LAB_14e5fa9d5:
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return pFVar6;
}

// GetOrAdd @ 14e5faa10

FGLTFJsonNode * __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>::GetOrAdd
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> *this,
          FGLTFJsonNode *param_1,USkeletalMesh *param_2,int param_3)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> *this_00;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> *local_res8;
  FGLTFJsonNode *local_res10;
  USkeletalMesh *local_res18;
  int local_res20 [2];
  FGLTFJsonNode *local_68;
  FGLTFJsonNode **local_60;
  FGLTFJsonNode **local_58;
  FGLTFJsonNode *local_50;
  USkeletalMesh *local_48;
  int local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20[0] = param_3;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,local_res20);
  local_50 = local_res10;
  local_48 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  local_40 = local_res20[0];
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar2 = uVar2 * 0x40 + -0x61c88647 + local_res20[0] + (uVar2 >> 2) ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28;
        if (((*(FGLTFJsonNode **)(*(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28) ==
              local_res10) && (*(USkeletalMesh **)(lVar1 + 8) == local_res18)) &&
           (*(int *)(lVar1 + 0x10) == local_res20[0])) {
          if (iVar6 != -1) {
            puVar4 = (undefined8 *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              puVar4 = (undefined8 *)0x0;
            }
            if (puVar4 != (undefined8 *)0x0) {
              return (FGLTFJsonNode *)*puVar4;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>,TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>_*>
                      (&local_res8);
  local_68 = (FGLTFJsonNode *)
             TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,int>
             ::_vcall__16__flat______
                       ((TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,int>
                         *)this_00);
  local_60 = &local_50;
  local_58 = &local_68;
  TSet<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>_&&,FGLTFJsonNode_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>_&&,FGLTFJsonNode_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_60);
  return local_68;
}

// GetOrAdd @ 14e5fac00

FGLTFJsonNode * __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>::GetOrAdd
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> *this,
          FGLTFJsonNode *param_1,USkeletalMesh *param_2,FName param_3)

{
  longlong lVar1;
  FName FVar2;
  TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> *this_00;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> *local_res8;
  FGLTFJsonNode *local_res10;
  USkeletalMesh *local_res18;
  FName local_res20;
  FGLTFJsonNode *local_78;
  FGLTFJsonNode **local_70;
  FGLTFJsonNode **local_68;
  FGLTFJsonNode *local_60;
  USkeletalMesh *local_58;
  FName local_50;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,&local_res20);
  FVar2 = local_res20;
  local_60 = local_res10;
  local_58 = local_res18;
  uVar3 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  local_50 = local_res20;
  uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar4 = (uVar4 >> 2) + (uVar3 >> 0x10 ^ uVar3) + uVar4 * 0x40 + -0x61c88647 ^ uVar4;
  uVar3 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
  uVar4 = uVar4 * 0x40 + FVar2.Number + (uVar4 >> 2) + uVar3 + 0x9e3779b9 ^ uVar4;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar6 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->CachedOutputs).field_0x38;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar4) *
                              4);
    if (iVar7 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedOutputs + (longlong)iVar7 * 0x28;
        if (((*(FGLTFJsonNode **)(*(longlong *)&this->CachedOutputs + (longlong)iVar7 * 0x28) ==
              local_60) && (*(USkeletalMesh **)(lVar1 + 8) == local_58)) &&
           (*(FName *)(lVar1 + 0x10) == local_50)) {
          if (iVar7 != -1) {
            puVar5 = (undefined8 *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              puVar5 = (undefined8 *)0x0;
            }
            if (puVar5 != (undefined8 *)0x0) {
              return (FGLTFJsonNode *)*puVar5;
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x20);
      } while (iVar7 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>_*>
                      (&local_res8);
  local_78 = (FGLTFJsonNode *)
             TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,FName>
             ::_vcall__16__flat______
                       ((TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,FName>
                         *)this_00);
  local_70 = &local_60;
  local_68 = &local_78;
  TSet<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>_&&,FGLTFJsonNode_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>_&&,FGLTFJsonNode_*_const_&>
              *)(ulonglong)uVar4,(bool *)&local_70);
  return local_78;
}

// GetOrAdd @ 14e5fade0

FGLTFJsonNode * __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>::GetOrAdd
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> *this,
          FGLTFJsonNode *param_1,UStaticMesh *param_2,FName param_3)

{
  longlong lVar1;
  FName FVar2;
  TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> *this_00;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> *local_res8;
  FGLTFJsonNode *local_res10;
  UStaticMesh *local_res18;
  FName local_res20;
  FGLTFJsonNode *local_78;
  FGLTFJsonNode **local_70;
  FGLTFJsonNode **local_68;
  FGLTFJsonNode *local_60;
  UStaticMesh *local_58;
  FName local_50;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,&local_res20);
  FVar2 = local_res20;
  local_60 = local_res10;
  local_58 = local_res18;
  uVar3 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  local_50 = local_res20;
  uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar4 = (uVar4 >> 2) + (uVar3 >> 0x10 ^ uVar3) + uVar4 * 0x40 + -0x61c88647 ^ uVar4;
  uVar3 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
  uVar4 = uVar4 * 0x40 + FVar2.Number + (uVar4 >> 2) + uVar3 + 0x9e3779b9 ^ uVar4;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar6 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->CachedOutputs).field_0x38;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar4) *
                              4);
    if (iVar7 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedOutputs + (longlong)iVar7 * 0x28;
        if (((*(FGLTFJsonNode **)(*(longlong *)&this->CachedOutputs + (longlong)iVar7 * 0x28) ==
              local_60) && (*(UStaticMesh **)(lVar1 + 8) == local_58)) &&
           (*(FName *)(lVar1 + 0x10) == local_50)) {
          if (iVar7 != -1) {
            puVar5 = (undefined8 *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              puVar5 = (undefined8 *)0x0;
            }
            if (puVar5 != (undefined8 *)0x0) {
              return (FGLTFJsonNode *)*puVar5;
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x20);
      } while (iVar7 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>,TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>_*>
                      (&local_res8);
  local_78 = (FGLTFJsonNode *)
             TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,UStaticMesh_const*___ptr64,FName>
             ::_vcall__16__flat______
                       ((TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,UStaticMesh_const*___ptr64,FName>
                         *)this_00);
  local_70 = &local_60;
  local_68 = &local_78;
  TSet<TTuple<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>_&&,FGLTFJsonNode_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>_&&,FGLTFJsonNode_*_const_&>
              *)(ulonglong)uVar4,(bool *)&local_70);
  return local_78;
}

// GetOrAdd @ 14e5fafc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGLTFJsonNode * __thiscall
TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>::GetOrAdd
          (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> *this,
          USceneComponent *param_1,FName param_2)

{
  FName FVar1;
  longlong *plVar2;
  TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> *this_00;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  int iVar7;
  TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> *local_res8;
  USceneComponent *local_res10;
  FName local_res18;
  FGLTFJsonNode *local_res20;
  USceneComponent *local_58;
  FName local_50;
  USceneComponent **local_48;
  FGLTFJsonNode **local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18);
  FVar1 = local_res18;
  local_58 = local_res10;
  local_50 = local_res18;
  uVar3 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  uVar4 = uVar4 * 0x40 + FVar1.Number + (uVar4 >> 2) + uVar3 + 0x9e3779b9 ^ uVar4;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar6 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->CachedOutputs).field_0x38;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar4) *
                              4);
    if (iVar7 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar7 * 0x20 + *(longlong *)&this->CachedOutputs);
        if (((USceneComponent *)*plVar2 == local_58) && (*(FName *)(plVar2 + 1) == local_50)) {
          if (iVar7 != -1) {
            plVar5 = plVar2 + 2;
            if (plVar2 == (longlong *)0x0) {
              plVar5 = (longlong *)0x0;
            }
            if (plVar5 != (longlong *)0x0) {
              return (FGLTFJsonNode *)*plVar5;
            }
          }
          break;
        }
        iVar7 = (int)plVar2[3];
      } while (iVar7 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>,TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>_*>
                      (&local_res8);
  local_res20 = (FGLTFJsonNode *)
                TGLTFConverter<FGLTFJsonNode*___ptr64,USceneComponent_const*___ptr64,FName>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonNode*___ptr64,USceneComponent_const*___ptr64,FName>
                            *)this_00);
  local_48 = &local_58;
  local_40 = &local_res20;
  TSet<TTuple<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<USceneComponent_const_*,FName>_&&,FGLTFJsonNode_*_const_&>_>
            ((TSet<TTuple<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<USceneComponent_const_*,FName>_&&,FGLTFJsonNode_*_const_&> *)
             (ulonglong)uVar4,(bool *)&local_48);
  return local_res20;
}

// GetOrAdd @ 14e5fb170

FGLTFJsonSampler * __thiscall
TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>
::GetOrAdd(void *this,TextureAddress param_1,TextureAddress param_2,TextureFilter param_3,
          TextureGroup param_4)

{
  TextureAddress *pTVar1;
  TGLTFConverter<FGLTFJsonSampler_*,TextureAddress,TextureAddress,TextureFilter,TextureGroup>
  *this_00;
  TextureAddress *pTVar2;
  TextureAddress TVar3;
  longlong lVar4;
  TextureAddress TVar5;
  TGLTFConverter<FGLTFJsonSampler_*,TextureAddress,TextureAddress,TextureFilter,TextureGroup>
  *local_res8;
  TextureAddress local_res10 [2];
  TextureAddress local_res18 [2];
  TextureAddress local_res20 [2];
  FGLTFJsonSampler *local_78;
  TextureAddress local_70;
  TextureAddress local_6c;
  TextureAddress local_68;
  TextureGroup local_64;
  TextureAddress *local_60;
  FGLTFJsonSampler **local_58;
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  (**(code **)(*(longlong *)this + 8))(this,local_res10,local_res18,local_res20,&param_4);
  local_70 = local_res10[0];
  local_6c = local_res18[0];
  TVar3 = local_res10[0] * 0x40 + local_res18[0] + (local_res10[0] >> 2) + 0x9e3779b9 ^
          local_res10[0];
  local_68 = local_res20[0];
  local_64 = param_4;
  TVar3 = TVar3 * 0x40 + local_res20[0] + (TVar3 >> 2) + 0x9e3779b9 ^ TVar3;
  TVar3 = TVar3 * 0x40 + -0x61c88647 + param_4 + (TVar3 >> 2) ^ TVar3;
  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
    lVar4 = *(longlong *)((longlong)this + 0x48);
    if (*(longlong *)((longlong)this + 0x48) == 0) {
      lVar4 = (longlong)this + 0x40;
    }
    TVar5 = *(TextureAddress *)
             (lVar4 + (ulonglong)(*(int *)((longlong)this + 0x50) - TA_Clamp & TVar3) * 4);
    if (TVar5 != ~TA_Wrap) {
      do {
        pTVar1 = (TextureAddress *)((longlong)(int)TVar5 * 0x20 + *(longlong *)((longlong)this + 8))
        ;
        if ((((*pTVar1 == local_res10[0]) && (pTVar1[1] == local_res18[0])) &&
            (pTVar1[2] == local_res20[0])) && (pTVar1[3] == param_4)) {
          if (TVar5 != ~TA_Wrap) {
            pTVar2 = pTVar1 + 4;
            if (pTVar1 == (TextureAddress *)0x0) {
              pTVar2 = (TextureAddress *)0x0;
            }
            if (pTVar2 != (TextureAddress *)0x0) {
              return *(FGLTFJsonSampler **)pTVar2;
            }
          }
          break;
        }
        TVar5 = pTVar1[6];
      } while (TVar5 != ~TA_Wrap);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>,TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>_*>
                      (&local_res8);
  local_78 = (FGLTFJsonSampler *)
             TGLTFConverter<FGLTFJsonSampler*___ptr64,TextureAddress,TextureAddress,TextureFilter,TextureGroup>
             ::_vcall__16__flat______
                       ((TGLTFConverter<FGLTFJsonSampler*___ptr64,TextureAddress,TextureAddress,TextureFilter,TextureGroup>
                         *)this_00);
  local_60 = &local_70;
  local_58 = &local_78;
  TSet<TTuple<TTuple<enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>,FGLTFJsonSampler_*>,TDefaultMapHashableKeyFuncs<TTuple<enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>,FGLTFJsonSampler_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>_&&,FGLTFJsonSampler_*_const_&>_>
            ((void *)((longlong)this + 8),(uint)&local_res8,
             (TPairInitializer<TTuple<TextureAddress,TextureAddress,TextureFilter,TextureGroup>_&&,FGLTFJsonSampler_*_const_&>
              *)(ulonglong)TVar3,(bool *)&local_60);
  return local_78;
}

// GetOrAdd @ 14e5fb310

FGLTFJsonSkin * __thiscall
TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>::GetOrAdd
          (TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> *this,
          FGLTFJsonNode *param_1,USkeletalMesh *param_2)

{
  longlong *plVar1;
  TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> *this_00;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> *local_res8;
  FGLTFJsonNode *local_res10;
  USkeletalMesh *local_res18;
  FGLTFJsonSkin *local_res20;
  FGLTFJsonNode *local_58;
  USkeletalMesh *local_50;
  FGLTFJsonNode **local_48;
  FGLTFJsonSkin **local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18);
  local_58 = local_res10;
  local_50 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this->CachedOutputs);
        if (((FGLTFJsonNode *)*plVar1 == local_res10) && ((USkeletalMesh *)plVar1[1] == local_res18)
           ) {
          if (iVar6 != -1) {
            plVar4 = plVar1 + 2;
            if (plVar1 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            if (plVar4 != (longlong *)0x0) {
              return (FGLTFJsonSkin *)*plVar4;
            }
          }
          break;
        }
        iVar6 = (int)plVar1[3];
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>,TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>_*>
                      (&local_res8);
  local_res20 = (FGLTFJsonSkin *)
                TGLTFConverter<FGLTFJsonSkin*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonSkin*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64>
                            *)this_00);
  local_48 = &local_58;
  local_40 = &local_res20;
  TSet<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>_&&,FGLTFJsonSkin_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>_&&,FGLTFJsonSkin_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_48);
  return local_res20;
}

// GetOrAdd @ 14e5fb4e0

FGLTFJsonTexture * __thiscall
TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>::
GetOrAdd(void *this,UTexture2D *param_1,bool param_2,TextureAddress param_3,TextureAddress param_4)

{
  TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,TextureAddress,TextureAddress> *this_00;
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,TextureAddress,TextureAddress>
  *local_res8;
  UTexture2D *local_res10;
  byte local_res18 [8];
  TextureAddress local_res20 [2];
  FGLTFJsonTexture *local_78;
  UTexture2D **local_70;
  FGLTFJsonTexture **local_68;
  UTexture2D *local_60;
  byte local_58;
  TextureAddress local_54;
  TextureAddress local_50;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  (**(code **)(*(longlong *)this + 8))(this,&local_res10,local_res18,local_res20,&param_4);
  local_60 = local_res10;
  local_58 = local_res18[0];
  uVar1 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  local_54 = local_res20[0];
  local_50 = param_4;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  uVar1 = local_res18[0] + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
  uVar1 = uVar1 * 0x40 + local_res20[0] + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar1 = uVar1 * 0x40 + -0x61c88647 + param_4 + (uVar1 >> 2) ^ uVar1;
  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
    lVar3 = *(longlong *)((longlong)this + 0x48);
    if (*(longlong *)((longlong)this + 0x48) == 0) {
      lVar3 = (longlong)this + 0x40;
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x50) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)((longlong)this + 8) + (longlong)iVar4 * 0x28;
        if ((((*(UTexture2D **)(*(longlong *)((longlong)this + 8) + (longlong)iVar4 * 0x28) ==
               local_res10) && (*(byte *)(lVar3 + 8) == local_res18[0])) &&
            (*(TextureAddress *)(lVar3 + 0xc) == local_res20[0])) &&
           (*(TextureAddress *)(lVar3 + 0x10) == param_4)) {
          if (iVar4 != -1) {
            puVar2 = (undefined8 *)(lVar3 + 0x18);
            if (lVar3 == 0) {
              puVar2 = (undefined8 *)0x0;
            }
            if (puVar2 != (undefined8 *)0x0) {
              return (FGLTFJsonTexture *)*puVar2;
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x20);
      } while (iVar4 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>,TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>_*>
                      (&local_res8);
  local_78 = (FGLTFJsonTexture *)
             TGLTFConverter<FGLTFJsonTexture*___ptr64,UTexture2D_const*___ptr64,bool,TextureAddress,TextureAddress>
             ::_vcall__16__flat______
                       ((TGLTFConverter<FGLTFJsonTexture*___ptr64,UTexture2D_const*___ptr64,bool,TextureAddress,TextureAddress>
                         *)this_00);
  local_70 = &local_60;
  local_68 = &local_78;
  TSet<TTuple<TTuple<UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>,FGLTFJsonTexture_*>,TDefaultMapHashableKeyFuncs<TTuple<UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>,FGLTFJsonTexture_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>_&&,FGLTFJsonTexture_*_const_&>_>
            ((void *)((longlong)this + 8),(uint)&local_res8,
             (TPairInitializer<TTuple<UTexture2D_const_*,bool,TextureAddress,TextureAddress>_&&,FGLTFJsonTexture_*_const_&>
              *)(ulonglong)uVar1,(bool *)&local_70);
  return local_78;
}

// GetOrAdd @ 14e5fb6c0

FGLTFMeshData * __thiscall
TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>::
GetOrAdd(TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
         *this,USkeletalMesh *param_1,USkeletalMeshComponent *param_2,int param_3)

{
  longlong lVar1;
  TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
  *this_00;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
  *local_res8;
  USkeletalMesh *local_res10;
  USkeletalMeshComponent *local_res18;
  int local_res20 [2];
  FGLTFMeshData *local_68;
  USkeletalMesh **local_60;
  FGLTFMeshData **local_58;
  USkeletalMesh *local_50;
  USkeletalMeshComponent *local_48;
  int local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20[0] = param_3;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,local_res20);
  local_50 = local_res10;
  local_48 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  local_40 = local_res20[0];
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar2 = uVar2 * 0x40 + -0x61c88647 + local_res20[0] + (uVar2 >> 2) ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28;
        if (((*(USkeletalMesh **)(*(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28) ==
              local_res10) && (*(USkeletalMeshComponent **)(lVar1 + 8) == local_res18)) &&
           (*(int *)(lVar1 + 0x10) == local_res20[0])) {
          if (iVar6 != -1) {
            puVar4 = (undefined8 *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              puVar4 = (undefined8 *)0x0;
            }
            if (puVar4 != (undefined8 *)0x0) {
              return (FGLTFMeshData *)*puVar4;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>_*>
                      (&local_res8);
  local_68 = (FGLTFMeshData *)
             TGLTFConverter<FGLTFMeshData_const*___ptr64,USkeletalMesh_const*___ptr64,USkeletalMeshComponent_const*___ptr64,int>
             ::_vcall__16__flat______
                       ((TGLTFConverter<FGLTFMeshData_const*___ptr64,USkeletalMesh_const*___ptr64,USkeletalMeshComponent_const*___ptr64,int>
                         *)this_00);
  local_60 = &local_50;
  local_58 = &local_68;
  TSet<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>,TDefaultMapHashableKeyFuncs<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>_&&,FGLTFMeshData_const_*_const_&>_>
            ((TSet<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>,TDefaultMapHashableKeyFuncs<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>_&&,FGLTFMeshData_const_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_60);
  return local_68;
}

// GetOrAdd @ 14e5fb8b0

FGLTFMeshData * __thiscall
TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>::GetOrAdd
          (TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
           *this,UStaticMesh *param_1,UStaticMeshComponent *param_2,int param_3)

{
  longlong lVar1;
  TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
  *this_00;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
  *local_res8;
  UStaticMesh *local_res10;
  UStaticMeshComponent *local_res18;
  int local_res20 [2];
  FGLTFMeshData *local_68;
  UStaticMesh **local_60;
  FGLTFMeshData **local_58;
  UStaticMesh *local_50;
  UStaticMeshComponent *local_48;
  int local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20[0] = param_3;
  (**(code **)(this->_padding_ + 8))(this,&local_res10,&local_res18,local_res20);
  local_50 = local_res10;
  local_48 = local_res18;
  uVar2 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  local_40 = local_res20[0];
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar2 = uVar2 * 0x40 + -0x61c88647 + local_res20[0] + (uVar2 >> 2) ^ uVar2;
  if (*(int *)&(this->CachedOutputs).field_0x8 != *(int *)&(this->CachedOutputs).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachedOutputs).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachedOutputs).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CachedOutputs).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28;
        if (((*(UStaticMesh **)(*(longlong *)&this->CachedOutputs + (longlong)iVar6 * 0x28) ==
              local_res10) && (*(UStaticMeshComponent **)(lVar1 + 8) == local_res18)) &&
           (*(int *)(lVar1 + 0x10) == local_res20[0])) {
          if (iVar6 != -1) {
            puVar4 = (undefined8 *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              puVar4 = (undefined8 *)0x0;
            }
            if (puVar4 != (undefined8 *)0x0) {
              return (FGLTFMeshData *)*puVar4;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  local_res8 = this;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>_*>
                      (&local_res8);
  local_68 = (FGLTFMeshData *)
             TGLTFConverter<FGLTFMeshData_const*___ptr64,UStaticMesh_const*___ptr64,UStaticMeshComponent_const*___ptr64,int>
             ::_vcall__16__flat______
                       ((TGLTFConverter<FGLTFMeshData_const*___ptr64,UStaticMesh_const*___ptr64,UStaticMeshComponent_const*___ptr64,int>
                         *)this_00);
  local_60 = &local_50;
  local_58 = &local_68;
  TSet<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>_&&,FGLTFMeshData_const_*_const_&>_>
            ((TSet<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*,0>,FDefaultSetAllocator>
              *)&this->CachedOutputs,(uint)&local_res8,
             (TPairInitializer<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>_&&,FGLTFMeshData_const_*_const_&>
              *)(ulonglong)uVar2,(bool *)&local_60);
  return local_68;
}

// Sanitize @ 14e6122e0

void __thiscall
TGLTFConverter<float,FMeshDescription_const_*,FMeshAttributesArray<int>,int>::Sanitize
          (TGLTFConverter<float,FMeshDescription_const_*,FMeshAttributesArray<int>,int> *this,
          FMeshDescription **param_1,FMeshAttributesArray<int> *param_2,int *param_3)

{
  return;
}

// Sanitize @ 14e6122f0

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> *this,
          FGLTFMeshSection **param_1)

{
  return;
}

// Sanitize @ 14e612300

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
::Sanitize(TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
           *this,FGLTFMeshSection **param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          **param_2)

{
  return;
}

// Sanitize @ 14e612310

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
::Sanitize(TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
           *this,FGLTFMeshSection **param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          **param_2,bool *param_3)

{
  return;
}

// Sanitize @ 14e612320

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>
           *this,FGLTFMeshSection **param_1,FColorVertexBuffer **param_2)

{
  return;
}

// Sanitize @ 14e612330

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
           *this,FGLTFMeshSection **param_1,FPositionVertexBuffer **param_2)

{
  return;
}

// Sanitize @ 14e612340

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
::Sanitize(TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
           *this,FGLTFMeshSection **param_1,FSkinWeightVertexBuffer **param_2,uint *param_3)

{
  return;
}

// Sanitize @ 14e612350

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>::
Sanitize(TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
         *this,FGLTFMeshSection **param_1,FStaticMeshVertexBuffer **param_2)

{
  return;
}

// Sanitize @ 14e612360

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
::Sanitize(TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
           *this,FGLTFMeshSection **param_1,FStaticMeshVertexBuffer **param_2,uint *param_3)

{
  return;
}

// Sanitize @ 14e612370

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>::Sanitize
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> *this,
          FMeshAttributesArray<int> *param_1,FString *param_2)

{
  return;
}

// Sanitize @ 14e612380

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>::
Sanitize(TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
         *this,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *param_1)

{
  return;
}

// Sanitize @ 14e612390

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>::Sanitize
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>
           *this,FMeshAttributesArray<UE::Math::TVector2<float>_> *param_1)

{
  return;
}

// Sanitize @ 14e6123a0

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>::Sanitize
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>
           *this,FMeshAttributesArray<UE::Math::TVector4<float>_> *param_1)

{
  return;
}

// Sanitize @ 14e6123b0

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>::Sanitize
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>
           *this,FMeshAttributesArray<UE::Math::TVector<float>_> *param_1)

{
  return;
}

// Sanitize @ 14e6123c0

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>::Sanitize
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>
           *this,FMeshAttributesArray<UE::Math::TVector<float>_> *param_1,bool *param_2)

{
  return;
}

// Sanitize @ 14e6123d0

void __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>::Sanitize
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> *this,
          FMeshAttributesArray<FColor> *param_1)

{
  return;
}

// Sanitize @ 14e6123e0

void __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>::
Sanitize(TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
         *this,FGLTFJsonNode **param_1,USkeletalMesh **param_2,UAnimSequence **param_3)

{
  return;
}

// Sanitize @ 14e6123f0

void __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*> *this
          ,FGLTFJsonNode **param_1,USkeletalMeshComponent **param_2)

{
  return;
}

// Sanitize @ 14e612400

void __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *this,
          ALevelSequenceActor **param_1)

{
  return;
}

// Sanitize @ 14e612410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> *this,
          ULevel **param_1,ULevelSequence **param_2)

{
  return;
}

// Sanitize @ 14e612420

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> *this,
          UCameraComponent **param_1)

{
  return;
}

// Sanitize @ 14e612430

void __thiscall
TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
::Sanitize(TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
           *this,TGLTFSuperfluous<FString> *param_1,bool *param_2,TIntPoint<int> *param_3,
          TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1> *param_4)

{
  return;
}

// Sanitize @ 14e612440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> *this,ULightComponent **param_1)

{
  return;
}

// Sanitize @ 14e612450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *this,
          ULightComponent **param_1)

{
  return;
}

// Sanitize @ 14e612460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> *this,
          ULightComponent **param_1)

{
  return;
}

// Sanitize @ 14e612470

void __thiscall
TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> *this,
          UStaticMeshComponent **param_1)

{
  return;
}

// Sanitize @ 14e612480

void __thiscall
TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
::Sanitize(TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
           *this,UMaterialInterface **param_1,FGLTFMeshData **param_2,
          FMeshAttributesArray<int> *param_3)

{
  return;
}

// Sanitize @ 14e612490

void __thiscall
TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *this,UVariant **param_1)

{
  return;
}

// Sanitize @ 14e6124a0

void __thiscall
TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>
           *this,ULandscapeComponent **param_1,UMaterialInterface **param_2)

{
  return;
}

// Sanitize @ 14e6124b0

void __thiscall
TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
::Sanitize(TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
           *this,USkeletalMesh **param_1,USkeletalMeshComponent **param_2,
          FGLTFMaterialArray *param_3,int *param_4)

{
  return;
}

// Sanitize @ 14e6124c0

void __thiscall
TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
::Sanitize(TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
           *this,UStaticMesh **param_1,USplineMeshComponent **param_2,FGLTFMaterialArray *param_3,
          int *param_4)

{
  return;
}

// Sanitize @ 14e6124d0

void __thiscall
TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
::Sanitize(TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
           *this,UStaticMesh **param_1,UStaticMeshComponent **param_2,FGLTFMaterialArray *param_3,
          int *param_4)

{
  return;
}

// Sanitize @ 14e6124e0

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>::Sanitize
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> *this,
          FGLTFJsonNode **param_1,USkeletalMesh **param_2,int *param_3)

{
  return;
}

// Sanitize @ 14e6124f0

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>::Sanitize
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> *this,
          FGLTFJsonNode **param_1,USkeletalMesh **param_2,FName *param_3)

{
  return;
}

// Sanitize @ 14e612500

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>::Sanitize
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> *this,
          FGLTFJsonNode **param_1,UStaticMesh **param_2,FName *param_3)

{
  return;
}

// Sanitize @ 14e612510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,AActor_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonNode_*,AActor_const_*> *this,AActor **param_1)

{
  return;
}

// Sanitize @ 14e612520

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> *this,USceneComponent **param_1)

{
  return;
}

// Sanitize @ 14e612530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>::Sanitize
          (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> *this,
          USceneComponent **param_1,FName *param_2)

{
  return;
}

// Sanitize @ 14e612540

void __thiscall
TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>
::Sanitize(void *this,TextureAddress *param_1,TextureAddress *param_2,TextureFilter *param_3,
          TextureGroup *param_4)

{
  return;
}

// Sanitize @ 14e612550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> *this,UWorld **param_1)

{
  return;
}

// Sanitize @ 14e612560

void __thiscall
TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> *this,
          FGLTFJsonNode **param_1,USkeletalMesh **param_2)

{
  return;
}

// Sanitize @ 14e612570

void __thiscall
TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>::Sanitize
          (TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *this,
          ULightMapTexture2D **param_1)

{
  return;
}

// Sanitize @ 14e612580

void __thiscall
TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>::
Sanitize(void *this,UTexture2D **param_1,bool *param_2,TextureAddress *param_3,
        TextureAddress *param_4)

{
  return;
}

// Sanitize @ 14e612590

void __thiscall
TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool>::Sanitize
          (TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool> *this,
          UTextureRenderTarget2D **param_1,bool *param_2)

{
  return;
}

// Sanitize @ 14e6125a0

void __thiscall
TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>::
Sanitize(TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
         *this,USkeletalMesh **param_1,USkeletalMeshComponent **param_2,int *param_3)

{
  return;
}

// Sanitize @ 14e6125b0

void __thiscall
TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>::Sanitize
          (TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
           *this,UStaticMesh **param_1,UStaticMeshComponent **param_2,int *param_3)

{
  return;
}

// Sanitize @ 14e6125c0

void __thiscall
TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>::
Sanitize(TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>
         *this,USkeletalMesh **param_1,int *param_2,FMeshAttributesArray<int> *param_3)

{
  return;
}

// Sanitize @ 14e6125d0

void __thiscall
TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>::
Sanitize(TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>
         *this,UStaticMesh **param_1,int *param_2,FMeshAttributesArray<int> *param_3)

{
  return;
}

// Sanitize @ 14e6125e0

void __thiscall
TGLTFConverter<UE::Math::TBox2<float>,FMeshDescription_const_*,FMeshAttributesArray<int>,int>::
Sanitize(TGLTFConverter<UE::Math::TBox2<float>,FMeshDescription_const_*,FMeshAttributesArray<int>,int>
         *this,FMeshDescription **param_1,FMeshAttributesArray<int> *param_2,int *param_3)

{
  return;
}

