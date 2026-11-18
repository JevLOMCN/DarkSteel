// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 6

// FMeshAttributesArray<int> @ 14e5cf4b0

FMeshAttributesArray<int> * __thiscall
FMeshAttributesArray<int>::FMeshAttributesArray<int>
          (FMeshAttributesArray<int> *this,FMeshAttributesArray<int> *param_1)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)&param_1->field_0x8;
  _Src = *(void **)param_1;
  *(int *)&this->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0xc = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0xc);
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 2);
  return this;
}

// FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> @ 14e5cf540

FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> * __thiscall
FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>::
FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>
          (FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *this,
          FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *param_1)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)&param_1->field_0x8;
  _Src = *(void **)param_1;
  *(int *)&this->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0xc = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,2,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0xc);
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  return this;
}

// FMeshAttributesArray<UE::Math::TVector2<float>_> @ 14e5cf5d0

FMeshAttributesArray<UE::Math::TVector2<float>_> * __thiscall
FMeshAttributesArray<UE::Math::TVector2<float>_>::FMeshAttributesArray<UE::Math::TVector2<float>_>
          (FMeshAttributesArray<UE::Math::TVector2<float>_> *this,
          FMeshAttributesArray<UE::Math::TVector2<float>_> *param_1)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)&param_1->field_0x8;
  _Src = *(void **)param_1;
  *(int *)&this->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0xc = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0xc);
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  return this;
}

// FMeshAttributesArray<UE::Math::TVector4<float>_> @ 14e5cf660

FMeshAttributesArray<UE::Math::TVector4<float>_> * __thiscall
FMeshAttributesArray<UE::Math::TVector4<float>_>::FMeshAttributesArray<UE::Math::TVector4<float>_>
          (FMeshAttributesArray<UE::Math::TVector4<float>_> *this,
          FMeshAttributesArray<UE::Math::TVector4<float>_> *param_1)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)&param_1->field_0x8;
  _Src = *(void **)param_1;
  *(int *)&this->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0xc = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0xc);
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 4);
  return this;
}

// FMeshAttributesArray<UE::Math::TVector<float>_> @ 14e5cf6f0

FMeshAttributesArray<UE::Math::TVector<float>_> * __thiscall
FMeshAttributesArray<UE::Math::TVector<float>_>::FMeshAttributesArray<UE::Math::TVector<float>_>
          (FMeshAttributesArray<UE::Math::TVector<float>_> *this,
          FMeshAttributesArray<UE::Math::TVector<float>_> *param_1)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)&param_1->field_0x8;
  _Src = *(void **)param_1;
  *(int *)&this->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0xc = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0xc);
  memcpy(*(void **)this,_Src,(longlong)iVar1 * 0xc);
  return this;
}

// FMeshAttributesArray<FColor> @ 14e5cf780

FMeshAttributesArray<FColor> * __thiscall
FMeshAttributesArray<FColor>::FMeshAttributesArray<FColor>
          (FMeshAttributesArray<FColor> *this,FMeshAttributesArray<FColor> *param_1)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)&param_1->field_0x8;
  _Src = *(void **)param_1;
  *(int *)&this->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0xc = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0xc);
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 2);
  return this;
}

