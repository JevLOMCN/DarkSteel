// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 5

// TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> @ 14e6293d0

TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<enum_GLTF::EExtension,TSizedDefaultAllocator<32>_> @ 14e6293f0

TArray<GLTF::EExtension,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_GLTF::EExtension,TSizedDefaultAllocator<32>_>::
TArray<enum_GLTF::EExtension,TSizedDefaultAllocator<32>_>
          (void *this,initializer_list<GLTF::EExtension> *param_1)

{
  EExtension *_Src;
  EExtension *pEVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pEVar1 = param_1->_Last;
  *(undefined8 *)this = 0;
  iVar2 = (int)((longlong)pEVar1 - (longlong)_Src >> 2);
  *(int *)((longlong)this + 8) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,this,iVar2,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar2 << 2);
  return this;
}

// AddZeroed @ 14e62d5e0

int __thiscall
TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// Empty @ 14e633f60

void __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Empty
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 14e649200

void __thiscall
TArray<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_> *_Dst;
  
  _Dst = (TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x50);
  DestructItems<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

