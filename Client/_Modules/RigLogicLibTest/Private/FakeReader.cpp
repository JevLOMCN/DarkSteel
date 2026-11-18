// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 246

// ~FakeReader @ 14c477ab0

void __thiscall dna::FakeReader::~FakeReader(FakeReader *this)

{
  int iVar1;
  
  *(undefined ***)&this[-1].field_0x20 = &___7FakeReader_dna__6B_;
  *(undefined ***)&this[-1].field_0x30 = &_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this[-1].field_0x40 = &_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this[-1].field_0x50 = &_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this[-1].field_0x60 = &_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 4) + -0x50 + (longlong)this) =
       &_vftable__for__dna__DefinitionReader__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 8) + -0x50 + (longlong)this) =
       &_vftable__for__dna__BehaviorReader__;
  iVar1 = *(int *)(*(longlong *)&this[-1].field_0x28 + 4);
  *(int *)((longlong)iVar1 + -0x54 + (longlong)this) = iVar1 + -0x50;
  iVar1 = *(int *)(*(longlong *)&this[-1].field_0x28 + 8);
  *(int *)((longlong)iVar1 + -0x54 + (longlong)this) = iVar1 + -0x60;
  Reader::~Reader((Reader *)&this[-1].field_0x70);
  return;
}

// `vector_deleting_destructor'`vtordisp{4294967292,0}' @ 14c477b44

/* [thunk]:public: virtual void * __ptr64 __cdecl dna::FakeReader::`vector deleting
   destructor'`vtordisp{4294967292,0}' (unsigned int) __ptr64 */

void * __thiscall
dna::FakeReader::_vector_deleting_destructor__vtordisp_4294967292_0__(FakeReader *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14c477b60

void * __thiscall dna::FakeReader::_scalar_deleting_destructor_(FakeReader *this,uint param_1)

{
  int iVar1;
  
  *(undefined ***)&this[-1].field_0x20 = &___7FakeReader_dna__6B_;
  *(undefined ***)&this[-1].field_0x30 = &_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this[-1].field_0x40 = &_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this[-1].field_0x50 = &_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this[-1].field_0x60 = &_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 4) + -0x50 + (longlong)this) =
       &_vftable__for__dna__DefinitionReader__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 8) + -0x50 + (longlong)this) =
       &_vftable__for__dna__BehaviorReader__;
  iVar1 = *(int *)(*(longlong *)&this[-1].field_0x28 + 4);
  *(int *)((longlong)iVar1 + -0x54 + (longlong)this) = iVar1 + -0x50;
  iVar1 = *(int *)(*(longlong *)&this[-1].field_0x28 + 8);
  *(int *)((longlong)iVar1 + -0x54 + (longlong)this) = iVar1 + -0x60;
  Reader::~Reader((Reader *)&this[-1].field_0x70);
  BehaviorReader::~BehaviorReader((BehaviorReader *)&this->field_0x20);
  DefinitionReader::~DefinitionReader((DefinitionReader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x20,0x78);
  }
  return &this[-1].field_0x20;
}

// getAge`vtordisp{4294967292,0}' @ 14c477c3c

/* [thunk]:public: virtual unsigned short __cdecl dna::FakeReader::getAge`vtordisp{4294967292,0}'
   (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getAge_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getAge((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getAge @ 14c477c50

ushort __thiscall dna::FakeReader::getAge(FakeReader *this)

{
  return 0;
}

// getAnimatedMapCount`vtordisp{4294967292,0}' @ 14c477c5c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getAnimatedMapCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getAnimatedMapCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getAnimatedMapCount((FakeReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getAnimatedMapCount @ 14c477c70

ushort __thiscall dna::FakeReader::getAnimatedMapCount(FakeReader *this)

{
  return 0;
}

// getAnimatedMapCutValues`vtordisp{4294967292,0}' @ 14c477c7c

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getAnimatedMapCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getAnimatedMapCutValues_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapCutValues
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapCutValues @ 14c477c90

ArrayView<float_const_> * __thiscall
dna::FakeReader::getAnimatedMapCutValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapFromValues`vtordisp{4294967292,0}' @ 14c477ca4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getAnimatedMapFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getAnimatedMapFromValues_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapFromValues
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapFromValues @ 14c477cc0

ArrayView<float_const_> * __thiscall
dna::FakeReader::getAnimatedMapFromValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapIndexListCount`vtordisp{4294967292,0}' @ 14c477cd4

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getAnimatedMapIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeReader::getAnimatedMapIndexListCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getAnimatedMapIndexListCount
                    ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getAnimatedMapIndexListCount @ 14c477cf0

ushort __thiscall dna::FakeReader::getAnimatedMapIndexListCount(FakeReader *this)

{
  return 0;
}

// getAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' @ 14c477cfc

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getAnimatedMapIndicesForLOD_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapIndicesForLOD
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getAnimatedMapIndicesForLOD @ 14c477d10

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getAnimatedMapIndicesForLOD
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapInputIndices`vtordisp{4294967292,0}' @ 14c477d24

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getAnimatedMapInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getAnimatedMapInputIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapInputIndices
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapInputIndices @ 14c477d40

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getAnimatedMapInputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapLODs`vtordisp{4294967292,0}' @ 14c477d54

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getAnimatedMapLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getAnimatedMapLODs_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapLODs((FakeReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                              __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapLODs @ 14c477d70

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getAnimatedMapLODs
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapName`vtordisp{4294967292,0}' @ 14c477d84

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeReader::getAnimatedMapName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
dna::FakeReader::getAnimatedMapName_vtordisp_4294967292_0__
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getAnimatedMapName((FakeReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                              __return_storage_ptr__,param_1);
  return pSVar1;
}

// getAnimatedMapName @ 14c477da0

StringView * __thiscall
dna::FakeReader::getAnimatedMapName
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapOutputIndices`vtordisp{4294967292,0}' @ 14c477db4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getAnimatedMapOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getAnimatedMapOutputIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapOutputIndices
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapOutputIndices @ 14c477dd0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getAnimatedMapOutputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapSlopeValues`vtordisp{4294967292,0}' @ 14c477de4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getAnimatedMapSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getAnimatedMapSlopeValues_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapSlopeValues
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapSlopeValues @ 14c477e00

ArrayView<float_const_> * __thiscall
dna::FakeReader::getAnimatedMapSlopeValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapToValues`vtordisp{4294967292,0}' @ 14c477e14

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getAnimatedMapToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getAnimatedMapToValues_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapToValues
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapToValues @ 14c477e30

ArrayView<float_const_> * __thiscall
dna::FakeReader::getAnimatedMapToValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getArchetype`vtordisp{4294967292,0}' @ 14c477e44

/* [thunk]:public: virtual enum dna::Archetype __cdecl
   dna::FakeReader::getArchetype`vtordisp{4294967292,0}' (void)const __ptr64 */

Archetype __thiscall dna::FakeReader::getArchetype_vtordisp_4294967292_0__(FakeReader *this)

{
  Archetype AVar1;
  
  AVar1 = getArchetype((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return AVar1;
}

// getArchetype @ 14c477e60

Archetype __thiscall dna::FakeReader::getArchetype(FakeReader *this)

{
  return asian;
}

// getBlendShapeChannelCount`vtordisp{4294967292,0}' @ 14c477e6c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getBlendShapeChannelCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeReader::getBlendShapeChannelCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getBlendShapeChannelCount
                    ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getBlendShapeChannelCount @ 14c477e80

ushort __thiscall dna::FakeReader::getBlendShapeChannelCount(FakeReader *this)

{
  return 0;
}

// getBlendShapeChannelIndex @ 14c477e90

ushort __thiscall
dna::FakeReader::getBlendShapeChannelIndex(FakeReader *this,ushort param_1,ushort param_2)

{
  return 0;
}

// getBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' @ 14c477e9c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64
    */

ushort __thiscall
dna::FakeReader::getBlendShapeChannelIndexListCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getBlendShapeChannelIndexListCount
                    ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getBlendShapeChannelIndexListCount @ 14c477eb0

ushort __thiscall dna::FakeReader::getBlendShapeChannelIndexListCount(FakeReader *this)

{
  return 0;
}

// getBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' @ 14c477ebc

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getBlendShapeChannelIndicesForLOD_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelIndicesForLOD
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getBlendShapeChannelIndicesForLOD @ 14c477ed0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getBlendShapeChannelIndicesForLOD
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeChannelInputIndices`vtordisp{4294967292,0}' @ 14c477ee4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getBlendShapeChannelInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getBlendShapeChannelInputIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelInputIndices
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getBlendShapeChannelInputIndices @ 14c477f00

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getBlendShapeChannelInputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeChannelLODs`vtordisp{4294967292,0}' @ 14c477f14

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getBlendShapeChannelLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getBlendShapeChannelLODs_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelLODs
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getBlendShapeChannelLODs @ 14c477f30

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getBlendShapeChannelLODs
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeChannelName`vtordisp{4294967292,0}' @ 14c477f44

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeReader::getBlendShapeChannelName`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

StringView * __thiscall
dna::FakeReader::getBlendShapeChannelName_vtordisp_4294967292_0__
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getBlendShapeChannelName
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pSVar1;
}

// getBlendShapeChannelName @ 14c477f60

StringView * __thiscall
dna::FakeReader::getBlendShapeChannelName
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' @ 14c477f74

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getBlendShapeChannelOutputIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelOutputIndices
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getBlendShapeChannelOutputIndices @ 14c477f90

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getBlendShapeChannelOutputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeTargetCount @ 14c477fb0

ushort __thiscall dna::FakeReader::getBlendShapeTargetCount(FakeReader *this,ushort param_1)

{
  return 0;
}

// getBlendShapeTargetDelta @ 14c477fc0

Vector3 * __thiscall
dna::FakeReader::getBlendShapeTargetDelta
          (FakeReader *this,Vector3 *__return_storage_ptr__,ushort param_1,ushort param_2,
          uint param_3)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

// getBlendShapeTargetDeltaCount @ 14c477fe0

uint __thiscall
dna::FakeReader::getBlendShapeTargetDeltaCount(FakeReader *this,ushort param_1,ushort param_2)

{
  return 0;
}

// getBlendShapeTargetDeltaXs @ 14c477ff0

ArrayView<float_const_> * __thiscall
dna::FakeReader::getBlendShapeTargetDeltaXs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeTargetDeltaYs @ 14c478010

ArrayView<float_const_> * __thiscall
dna::FakeReader::getBlendShapeTargetDeltaYs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeTargetDeltaZs @ 14c478030

ArrayView<float_const_> * __thiscall
dna::FakeReader::getBlendShapeTargetDeltaZs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeTargetVertexIndices @ 14c478050

ArrayView<unsigned_int_const_> * __thiscall
dna::FakeReader::getBlendShapeTargetVertexIndices
          (FakeReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (uint *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getCoordinateSystem`vtordisp{4294967292,0}' @ 14c478064

/* [thunk]:public: virtual struct dna::CoordinateSystem __cdecl
   dna::FakeReader::getCoordinateSystem`vtordisp{4294967292,0}' (void)const __ptr64 */

CoordinateSystem * __thiscall
dna::FakeReader::getCoordinateSystem_vtordisp_4294967292_0__
          (FakeReader *this,CoordinateSystem *__return_storage_ptr__)

{
  CoordinateSystem *pCVar1;
  
  pCVar1 = getCoordinateSystem((FakeReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                               __return_storage_ptr__);
  return pCVar1;
}

// getCoordinateSystem @ 14c478080

CoordinateSystem * __thiscall
dna::FakeReader::getCoordinateSystem(FakeReader *this,CoordinateSystem *__return_storage_ptr__)

{
  __return_storage_ptr__->xAxis = left;
  __return_storage_ptr__->yAxis = left;
  __return_storage_ptr__->zAxis = left;
  return __return_storage_ptr__;
}

// getDBComplexity`vtordisp{4294967292,0}' @ 14c478094

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeReader::getDBComplexity`vtordisp{4294967292,0}' (void)const __ptr64 */

StringView * __thiscall
dna::FakeReader::getDBComplexity_vtordisp_4294967292_0__
          (FakeReader *this,StringView *__return_storage_ptr__)

{
  StringView *pSVar1;
  
  pSVar1 = getDBComplexity((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                           __return_storage_ptr__);
  return pSVar1;
}

// getDBComplexity @ 14c4780b0

StringView * __thiscall
dna::FakeReader::getDBComplexity(FakeReader *this,StringView *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getDBMaxLOD`vtordisp{4294967292,0}' @ 14c4780c4

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getDBMaxLOD`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getDBMaxLOD_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getDBMaxLOD((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getDBMaxLOD @ 14c4780e0

ushort __thiscall dna::FakeReader::getDBMaxLOD(FakeReader *this)

{
  return 0;
}

// getDBName`vtordisp{4294967292,0}' @ 14c4780ec

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeReader::getDBName`vtordisp{4294967292,0}' (void)const __ptr64 */

StringView * __thiscall
dna::FakeReader::getDBName_vtordisp_4294967292_0__
          (FakeReader *this,StringView *__return_storage_ptr__)

{
  StringView *pSVar1;
  
  pSVar1 = getDBName((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                     __return_storage_ptr__);
  return pSVar1;
}

// getDBName @ 14c478100

StringView * __thiscall
dna::FakeReader::getDBName(FakeReader *this,StringView *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getFaceCount @ 14c478120

uint __thiscall dna::FakeReader::getFaceCount(FakeReader *this,ushort param_1)

{
  return 0;
}

// getFaceVertexLayoutIndices @ 14c478130

ArrayView<unsigned_int_const_> * __thiscall
dna::FakeReader::getFaceVertexLayoutIndices
          (FakeReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  __return_storage_ptr__->ptr = (uint *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getFileFormatGeneration`vtordisp{4294967292,0}' @ 14c478144

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getFileFormatGeneration`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getFileFormatGeneration_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getFileFormatGeneration
                    ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getFileFormatGeneration @ 14c478160

ushort __thiscall dna::FakeReader::getFileFormatGeneration(FakeReader *this)

{
  return 2;
}

// getFileFormatVersion`vtordisp{4294967292,0}' @ 14c47816c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getFileFormatVersion`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getFileFormatVersion_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getFileFormatVersion
                    ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getFileFormatVersion @ 14c478180

ushort __thiscall dna::FakeReader::getFileFormatVersion(FakeReader *this)

{
  return 3;
}

// getGUIControlCount`vtordisp{4294967292,0}' @ 14c47818c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getGUIControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getGUIControlCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getGUIControlCount((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74)
                            );
  return uVar1;
}

// getGUIControlCount @ 14c4781a0

ushort __thiscall dna::FakeReader::getGUIControlCount(FakeReader *this)

{
  return 0;
}

// getGUIControlName`vtordisp{4294967292,0}' @ 14c4781ac

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeReader::getGUIControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
dna::FakeReader::getGUIControlName_vtordisp_4294967292_0__
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getGUIControlName((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74)
                             ,__return_storage_ptr__,param_1);
  return pSVar1;
}

// getGUIControlName @ 14c4781c0

StringView * __thiscall
dna::FakeReader::getGUIControlName
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getGUIToRawCutValues`vtordisp{4294967292,0}' @ 14c4781d4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getGUIToRawCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getGUIToRawCutValues_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawCutValues
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawCutValues @ 14c4781f0

ArrayView<float_const_> * __thiscall
dna::FakeReader::getGUIToRawCutValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGUIToRawFromValues`vtordisp{4294967292,0}' @ 14c478204

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getGUIToRawFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getGUIToRawFromValues_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawFromValues
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawFromValues @ 14c478220

ArrayView<float_const_> * __thiscall
dna::FakeReader::getGUIToRawFromValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGUIToRawInputIndices`vtordisp{4294967292,0}' @ 14c478234

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getGUIToRawInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getGUIToRawInputIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getGUIToRawInputIndices
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawInputIndices @ 14c478250

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getGUIToRawInputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGUIToRawOutputIndices`vtordisp{4294967292,0}' @ 14c478264

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getGUIToRawOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getGUIToRawOutputIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getGUIToRawOutputIndices
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawOutputIndices @ 14c478280

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getGUIToRawOutputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGUIToRawSlopeValues`vtordisp{4294967292,0}' @ 14c478294

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getGUIToRawSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getGUIToRawSlopeValues_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawSlopeValues
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawSlopeValues @ 14c4782b0

ArrayView<float_const_> * __thiscall
dna::FakeReader::getGUIToRawSlopeValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGUIToRawToValues`vtordisp{4294967292,0}' @ 14c4782c4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getGUIToRawToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getGUIToRawToValues_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawToValues((FakeReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                               __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawToValues @ 14c4782e0

ArrayView<float_const_> * __thiscall
dna::FakeReader::getGUIToRawToValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGender`vtordisp{4294967292,0}' @ 14c4782f4

/* [thunk]:public: virtual enum dna::Gender __cdecl
   dna::FakeReader::getGender`vtordisp{4294967292,0}' (void)const __ptr64 */

Gender __thiscall dna::FakeReader::getGender_vtordisp_4294967292_0__(FakeReader *this)

{
  Gender GVar1;
  
  GVar1 = getGender((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return GVar1;
}

// getGender @ 14c478310

Gender __thiscall dna::FakeReader::getGender(FakeReader *this)

{
  return male;
}

// getJointColumnCount`vtordisp{4294967292,0}' @ 14c47831c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getJointColumnCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getJointColumnCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointColumnCount((FakeReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointColumnCount @ 14c478330

ushort __thiscall dna::FakeReader::getJointColumnCount(FakeReader *this)

{
  return 0;
}

// getJointCount`vtordisp{4294967292,0}' @ 14c47833c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getJointCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getJointCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointCount((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointCount @ 14c478350

ushort __thiscall dna::FakeReader::getJointCount(FakeReader *this)

{
  return 0;
}

// getJointGroupCount`vtordisp{4294967292,0}' @ 14c47835c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getJointGroupCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getJointGroupCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointGroupCount((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74)
                            );
  return uVar1;
}

// getJointGroupCount @ 14c478370

ushort __thiscall dna::FakeReader::getJointGroupCount(FakeReader *this)

{
  return 0;
}

// getJointGroupInputIndices`vtordisp{4294967292,0}' @ 14c47837c

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getJointGroupInputIndices`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointGroupInputIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupInputIndices
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupInputIndices @ 14c478390

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointGroupInputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointGroupJointIndices`vtordisp{4294967292,0}' @ 14c4783a4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getJointGroupJointIndices`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointGroupJointIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupJointIndices
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupJointIndices @ 14c4783c0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointGroupJointIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointGroupLODs`vtordisp{4294967292,0}' @ 14c4783d4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getJointGroupLODs`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointGroupLODs_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupLODs((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74)
                             ,__return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupLODs @ 14c4783f0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointGroupLODs
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointGroupOutputIndices`vtordisp{4294967292,0}' @ 14c478404

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getJointGroupOutputIndices`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointGroupOutputIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupOutputIndices
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupOutputIndices @ 14c478420

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointGroupOutputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointGroupValues`vtordisp{4294967292,0}' @ 14c478434

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getJointGroupValues`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getJointGroupValues_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getJointGroupValues((FakeReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                               __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupValues @ 14c478450

ArrayView<float_const_> * __thiscall
dna::FakeReader::getJointGroupValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointIndexListCount`vtordisp{4294967292,0}' @ 14c478464

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getJointIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getJointIndexListCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointIndexListCount
                    ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointIndexListCount @ 14c478480

ushort __thiscall dna::FakeReader::getJointIndexListCount(FakeReader *this)

{
  return 0;
}

// getJointIndicesForLOD`vtordisp{4294967292,0}' @ 14c47848c

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getJointIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointIndicesForLOD_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointIndicesForLOD
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointIndicesForLOD @ 14c4784a0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointIndicesForLOD
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointName`vtordisp{4294967292,0}' @ 14c4784b4

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeReader::getJointName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
dna::FakeReader::getJointName_vtordisp_4294967292_0__
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getJointName((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                        __return_storage_ptr__,param_1);
  return pSVar1;
}

// getJointName @ 14c4784d0

StringView * __thiscall
dna::FakeReader::getJointName(FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getJointParentIndex`vtordisp{4294967292,0}' @ 14c4784e4

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getJointParentIndex`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ushort __thiscall
dna::FakeReader::getJointParentIndex_vtordisp_4294967292_0__(FakeReader *this,ushort param_1)

{
  ushort uVar1;
  
  uVar1 = getJointParentIndex((FakeReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),param_1);
  return uVar1;
}

// getJointParentIndex @ 14c478500

ushort __thiscall dna::FakeReader::getJointParentIndex(FakeReader *this,ushort param_1)

{
  return 0;
}

// getJointRotationRepresentation @ 14c478510

RotationRepresentation __thiscall
dna::FakeReader::getJointRotationRepresentation(FakeReader *this,ushort param_1)

{
  return EulerAngles;
}

// getJointRowCount`vtordisp{4294967292,0}' @ 14c47851c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getJointRowCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getJointRowCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointRowCount((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointRowCount @ 14c478530

ushort __thiscall dna::FakeReader::getJointRowCount(FakeReader *this)

{
  return 0;
}

// getJointScaleRepresentation @ 14c478540

ScaleRepresentation __thiscall
dna::FakeReader::getJointScaleRepresentation(FakeReader *this,ushort param_1)

{
  return Vector;
}

// getJointTranslationRepresentation @ 14c478550

TranslationRepresentation __thiscall
dna::FakeReader::getJointTranslationRepresentation(FakeReader *this,ushort param_1)

{
  return Vector;
}

// getJointVariableAttributeIndices`vtordisp{4294967292,0}' @ 14c47855c

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getJointVariableAttributeIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointVariableAttributeIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointVariableAttributeIndices
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointVariableAttributeIndices @ 14c478570

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getJointVariableAttributeIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getLODCount`vtordisp{4294967292,0}' @ 14c478584

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getLODCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getLODCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getLODCount((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getLODCount @ 14c4785a0

ushort __thiscall dna::FakeReader::getLODCount(FakeReader *this)

{
  return 0;
}

// getMLControlCount @ 14c4785b0

ushort __thiscall dna::FakeReader::getMLControlCount(FakeReader *this)

{
  return 0;
}

// getMLControlName @ 14c4785c0

StringView * __thiscall
dna::FakeReader::getMLControlName
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getMaximumInfluencePerVertex @ 14c4785e0

ushort __thiscall dna::FakeReader::getMaximumInfluencePerVertex(FakeReader *this,ushort param_1)

{
  return 0;
}

// getMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' @ 14c4785ec

/* [thunk]:public: virtual struct dna::MeshBlendShapeChannelMapping __cdecl
   dna::FakeReader::getMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

MeshBlendShapeChannelMapping __thiscall
dna::FakeReader::getMeshBlendShapeChannelMapping_vtordisp_4294967292_0__
          (FakeReader *this,ushort param_1)

{
  MeshBlendShapeChannelMapping MVar1;
  
  MVar1 = getMeshBlendShapeChannelMapping
                    ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),param_1
                    );
  return MVar1;
}

// getMeshBlendShapeChannelMapping @ 14c478600

MeshBlendShapeChannelMapping __thiscall
dna::FakeReader::getMeshBlendShapeChannelMapping(FakeReader *this,ushort param_1)

{
  undefined6 in_register_00000012;
  
  *(undefined4 *)CONCAT62(in_register_00000012,param_1) = 0;
  return SUB84(CONCAT62(in_register_00000012,param_1),0);
}

// getMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}' @ 14c478610

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}' (void)const __ptr64
    */

ushort __thiscall
dna::FakeReader::getMeshBlendShapeChannelMappingCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getMeshBlendShapeChannelMappingCount
                    ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getMeshBlendShapeChannelMappingCount @ 14c478630

ushort __thiscall dna::FakeReader::getMeshBlendShapeChannelMappingCount(FakeReader *this)

{
  return 0;
}

// getMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}' @ 14c47863c

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getMeshBlendShapeChannelMappingIndicesForLOD_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getMeshBlendShapeChannelMappingIndicesForLOD
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getMeshBlendShapeChannelMappingIndicesForLOD @ 14c478650

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getMeshBlendShapeChannelMappingIndicesForLOD
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getMeshCount`vtordisp{4294967292,0}' @ 14c478664

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getMeshCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getMeshCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getMeshCount((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getMeshCount @ 14c478680

ushort __thiscall dna::FakeReader::getMeshCount(FakeReader *this)

{
  return 0;
}

// getMeshIndexListCount`vtordisp{4294967292,0}' @ 14c47868c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getMeshIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getMeshIndexListCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getMeshIndexListCount
                    ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getMeshIndexListCount @ 14c4786a0

ushort __thiscall dna::FakeReader::getMeshIndexListCount(FakeReader *this)

{
  return 0;
}

// getMeshIndicesForLOD`vtordisp{4294967292,0}' @ 14c4786ac

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getMeshIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getMeshIndicesForLOD_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getMeshIndicesForLOD
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getMeshIndicesForLOD @ 14c4786c0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getMeshIndicesForLOD
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getMeshName`vtordisp{4294967292,0}' @ 14c4786d4

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeReader::getMeshName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
dna::FakeReader::getMeshName_vtordisp_4294967292_0__
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getMeshName((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                       __return_storage_ptr__,param_1);
  return pSVar1;
}

// getMeshName @ 14c4786f0

StringView * __thiscall
dna::FakeReader::getMeshName(FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getMeshRegionCount @ 14c478710

ushort __thiscall dna::FakeReader::getMeshRegionCount(FakeReader *this,ushort param_1)

{
  return 0;
}

// getMeshRegionName @ 14c478720

StringView * __thiscall
dna::FakeReader::getMeshRegionName
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getMetaDataCount`vtordisp{4294967292,0}' @ 14c478734

/* [thunk]:public: virtual unsigned int __cdecl
   dna::FakeReader::getMetaDataCount`vtordisp{4294967292,0}' (void)const __ptr64 */

uint __thiscall dna::FakeReader::getMetaDataCount_vtordisp_4294967292_0__(FakeReader *this)

{
  uint uVar1;
  
  uVar1 = getMetaDataCount((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getMetaDataCount @ 14c478750

uint __thiscall dna::FakeReader::getMetaDataCount(FakeReader *this)

{
  return 0;
}

// getMetaDataKey`vtordisp{4294967292,0}' @ 14c47875c

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeReader::getMetaDataKey`vtordisp{4294967292,0}' (unsigned int)const __ptr64 */

StringView * __thiscall
dna::FakeReader::getMetaDataKey_vtordisp_4294967292_0__
          (FakeReader *this,StringView *__return_storage_ptr__,uint param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getMetaDataKey((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                          __return_storage_ptr__,param_1);
  return pSVar1;
}

// getMetaDataKey @ 14c478770

StringView * __thiscall
dna::FakeReader::getMetaDataKey(FakeReader *this,StringView *__return_storage_ptr__,uint param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getMetaDataValue`vtordisp{4294967292,0}' @ 14c478784

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeReader::getMetaDataValue`vtordisp{4294967292,0}' (char const * __ptr64)const __ptr64 */

StringView * __thiscall
dna::FakeReader::getMetaDataValue_vtordisp_4294967292_0__
          (FakeReader *this,StringView *__return_storage_ptr__,char *param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getMetaDataValue((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                            __return_storage_ptr__,param_1);
  return pSVar1;
}

// getMetaDataValue @ 14c4787a0

StringView * __thiscall
dna::FakeReader::getMetaDataValue(FakeReader *this,StringView *__return_storage_ptr__,char *param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getName`vtordisp{4294967292,0}' @ 14c4787b4

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeReader::getName`vtordisp{4294967292,0}' (void)const __ptr64 */

StringView * __thiscall
dna::FakeReader::getName_vtordisp_4294967292_0__
          (FakeReader *this,StringView *__return_storage_ptr__)

{
  StringView *pSVar1;
  
  pSVar1 = getName((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                   __return_storage_ptr__);
  return pSVar1;
}

// getName @ 14c4787d0

StringView * __thiscall
dna::FakeReader::getName(FakeReader *this,StringView *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkCount @ 14c4787f0

ushort __thiscall dna::FakeReader::getNeuralNetworkCount(FakeReader *this)

{
  return 0;
}

// getNeuralNetworkIndexListCount @ 14c478800

ushort __thiscall dna::FakeReader::getNeuralNetworkIndexListCount(FakeReader *this)

{
  return 0;
}

// getNeuralNetworkIndicesForLOD @ 14c478810

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getNeuralNetworkIndicesForLOD
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkIndicesForMeshRegion @ 14c478830

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getNeuralNetworkIndicesForMeshRegion
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkInputIndices @ 14c478850

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getNeuralNetworkInputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerActivationFunction @ 14c478870

ActivationFunction __thiscall
dna::FakeReader::getNeuralNetworkLayerActivationFunction
          (FakeReader *this,ushort param_1,ushort param_2)

{
  return linear;
}

// getNeuralNetworkLayerActivationFunctionParameters @ 14c478880

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeuralNetworkLayerActivationFunctionParameters
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerBiases @ 14c4788a0

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeuralNetworkLayerBiases
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerCount @ 14c4788c0

ushort __thiscall dna::FakeReader::getNeuralNetworkLayerCount(FakeReader *this,ushort param_1)

{
  return 0;
}

// getNeuralNetworkLayerWeights @ 14c4788d0

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeuralNetworkLayerWeights
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkOutputIndices @ 14c4788f0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getNeuralNetworkOutputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointRotation`vtordisp{4294967292,0}' @ 14c478904

/* [thunk]:public: virtual struct dna::Vector3 __cdecl
   dna::FakeReader::getNeutralJointRotation`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

Vector3 * __thiscall
dna::FakeReader::getNeutralJointRotation_vtordisp_4294967292_0__
          (FakeReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  Vector3 *pVVar1;
  
  pVVar1 = getNeutralJointRotation
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pVVar1;
}

// getNeutralJointRotation @ 14c478920

Vector3 * __thiscall
dna::FakeReader::getNeutralJointRotation
          (FakeReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

// getNeutralJointRotationXs`vtordisp{4294967292,0}' @ 14c478934

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getNeutralJointRotationXs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointRotationXs_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationXs
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationXs @ 14c478950

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointRotationXs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointRotationYs`vtordisp{4294967292,0}' @ 14c478964

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getNeutralJointRotationYs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointRotationYs_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationYs
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationYs @ 14c478980

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointRotationYs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointRotationZs`vtordisp{4294967292,0}' @ 14c478994

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getNeutralJointRotationZs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointRotationZs_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationZs
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationZs @ 14c4789b0

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointRotationZs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointTranslation`vtordisp{4294967292,0}' @ 14c4789c4

/* [thunk]:public: virtual struct dna::Vector3 __cdecl
   dna::FakeReader::getNeutralJointTranslation`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

Vector3 * __thiscall
dna::FakeReader::getNeutralJointTranslation_vtordisp_4294967292_0__
          (FakeReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  Vector3 *pVVar1;
  
  pVVar1 = getNeutralJointTranslation
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pVVar1;
}

// getNeutralJointTranslation @ 14c4789e0

Vector3 * __thiscall
dna::FakeReader::getNeutralJointTranslation
          (FakeReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

// getNeutralJointTranslationXs`vtordisp{4294967292,0}' @ 14c4789f4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getNeutralJointTranslationXs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointTranslationXs_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationXs
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationXs @ 14c478a10

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointTranslationXs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointTranslationYs`vtordisp{4294967292,0}' @ 14c478a24

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getNeutralJointTranslationYs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointTranslationYs_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationYs
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationYs @ 14c478a40

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointTranslationYs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointTranslationZs`vtordisp{4294967292,0}' @ 14c478a54

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getNeutralJointTranslationZs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointTranslationZs_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationZs
                     ((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationZs @ 14c478a70

ArrayView<float_const_> * __thiscall
dna::FakeReader::getNeutralJointTranslationZs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getPSDColumnIndices`vtordisp{4294967292,0}' @ 14c478a84

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getPSDColumnIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getPSDColumnIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getPSDColumnIndices((FakeReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                               __return_storage_ptr__);
  return pAVar1;
}

// getPSDColumnIndices @ 14c478aa0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getPSDColumnIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getPSDCount`vtordisp{4294967292,0}' @ 14c478ab4

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getPSDCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getPSDCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getPSDCount((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getPSDCount @ 14c478ad0

ushort __thiscall dna::FakeReader::getPSDCount(FakeReader *this)

{
  return 0;
}

// getPSDRowIndices`vtordisp{4294967292,0}' @ 14c478adc

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeReader::getPSDRowIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getPSDRowIndices_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getPSDRowIndices((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                            __return_storage_ptr__);
  return pAVar1;
}

// getPSDRowIndices @ 14c478af0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getPSDRowIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getPSDValues`vtordisp{4294967292,0}' @ 14c478b04

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeReader::getPSDValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeReader::getPSDValues_vtordisp_4294967292_0__
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getPSDValues((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                        __return_storage_ptr__);
  return pAVar1;
}

// getPSDValues @ 14c478b20

ArrayView<float_const_> * __thiscall
dna::FakeReader::getPSDValues(FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseAnimatedMapOutputIndices @ 14c478b40

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getRBFPoseAnimatedMapOutputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseBlendShapeChannelOutputIndices @ 14c478b60

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getRBFPoseBlendShapeChannelOutputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseControlCount @ 14c478b80

ushort __thiscall dna::FakeReader::getRBFPoseControlCount(FakeReader *this)

{
  return 0;
}

// getRBFPoseControlName @ 14c478b90

StringView * __thiscall
dna::FakeReader::getRBFPoseControlName
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getRBFPoseCount @ 14c478bb0

ushort __thiscall dna::FakeReader::getRBFPoseCount(FakeReader *this)

{
  return 0;
}

// getRBFPoseInputControlIndices @ 14c478bc0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getRBFPoseInputControlIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseJointOutputIndices @ 14c478be0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getRBFPoseJointOutputIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseJointOutputValues @ 14c478c00

ArrayView<float_const_> * __thiscall
dna::FakeReader::getRBFPoseJointOutputValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseName @ 14c478c20

StringView * __thiscall
dna::FakeReader::getRBFPoseName(FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getRBFPoseOutputControlIndices @ 14c478c40

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getRBFPoseOutputControlIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseOutputControlWeights @ 14c478c60

ArrayView<float_const_> * __thiscall
dna::FakeReader::getRBFPoseOutputControlWeights
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseScale @ 14c478c80

float __thiscall dna::FakeReader::getRBFPoseScale(FakeReader *this,ushort param_1)

{
  return 0.0;
}

// getRBFSolverAutomaticRadius @ 14c478c90

AutomaticRadius __thiscall
dna::FakeReader::getRBFSolverAutomaticRadius(FakeReader *this,ushort param_1)

{
  return On;
}

// getRBFSolverCount @ 14c478ca0

ushort __thiscall dna::FakeReader::getRBFSolverCount(FakeReader *this)

{
  return 0;
}

// getRBFSolverDistanceMethod @ 14c478cb0

RBFDistanceMethod __thiscall
dna::FakeReader::getRBFSolverDistanceMethod(FakeReader *this,ushort param_1)

{
  return Euclidean;
}

// getRBFSolverFunctionType @ 14c478cc0

RBFFunctionType __thiscall
dna::FakeReader::getRBFSolverFunctionType(FakeReader *this,ushort param_1)

{
  return Gaussian;
}

// getRBFSolverIndexListCount @ 14c478cd0

ushort __thiscall dna::FakeReader::getRBFSolverIndexListCount(FakeReader *this)

{
  return 0;
}

// getRBFSolverIndicesForLOD @ 14c478ce0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getRBFSolverIndicesForLOD
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFSolverName @ 14c478d00

StringView * __thiscall
dna::FakeReader::getRBFSolverName
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getRBFSolverNormalizeMethod @ 14c478d20

RBFNormalizeMethod __thiscall
dna::FakeReader::getRBFSolverNormalizeMethod(FakeReader *this,ushort param_1)

{
  return OnlyNormalizeAboveOne;
}

// getRBFSolverPoseIndices @ 14c478d30

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getRBFSolverPoseIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFSolverRadius @ 14c478d50

float __thiscall dna::FakeReader::getRBFSolverRadius(FakeReader *this,ushort param_1)

{
  return 0.0;
}

// getRBFSolverRawControlIndices @ 14c478d60

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getRBFSolverRawControlIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFSolverRawControlValues @ 14c478d80

ArrayView<float_const_> * __thiscall
dna::FakeReader::getRBFSolverRawControlValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFSolverTwistAxis @ 14c478da0

TwistAxis __thiscall dna::FakeReader::getRBFSolverTwistAxis(FakeReader *this,ushort param_1)

{
  return X;
}

// getRBFSolverType @ 14c478db0

RBFSolverType __thiscall dna::FakeReader::getRBFSolverType(FakeReader *this,ushort param_1)

{
  return Additive;
}

// getRBFSolverWeightThreshold @ 14c478dc0

float __thiscall dna::FakeReader::getRBFSolverWeightThreshold(FakeReader *this,ushort param_1)

{
  return 0.0;
}

// getRawControlCount`vtordisp{4294967292,0}' @ 14c478dcc

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeReader::getRawControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeReader::getRawControlCount_vtordisp_4294967292_0__(FakeReader *this)

{
  ushort uVar1;
  
  uVar1 = getRawControlCount((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74)
                            );
  return uVar1;
}

// getRawControlCount @ 14c478de0

ushort __thiscall dna::FakeReader::getRawControlCount(FakeReader *this)

{
  return 0;
}

// getRawControlName`vtordisp{4294967292,0}' @ 14c478dec

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeReader::getRawControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
dna::FakeReader::getRawControlName_vtordisp_4294967292_0__
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getRawControlName((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74)
                             ,__return_storage_ptr__,param_1);
  return pSVar1;
}

// getRawControlName @ 14c478e00

StringView * __thiscall
dna::FakeReader::getRawControlName
          (FakeReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getRotationUnit`vtordisp{4294967292,0}' @ 14c478e14

/* [thunk]:public: virtual enum dna::RotationUnit __cdecl
   dna::FakeReader::getRotationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

RotationUnit __thiscall dna::FakeReader::getRotationUnit_vtordisp_4294967292_0__(FakeReader *this)

{
  RotationUnit RVar1;
  
  RVar1 = getRotationUnit((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return RVar1;
}

// getRotationUnit @ 14c478e30

RotationUnit __thiscall dna::FakeReader::getRotationUnit(FakeReader *this)

{
  return degrees;
}

// getSkinWeightsCount @ 14c478e40

uint __thiscall dna::FakeReader::getSkinWeightsCount(FakeReader *this,ushort param_1)

{
  return 0;
}

// getSkinWeightsJointIndices @ 14c478e50

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getSkinWeightsJointIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getSkinWeightsValues @ 14c478e70

ArrayView<float_const_> * __thiscall
dna::FakeReader::getSkinWeightsValues
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getSwingBlendWeights @ 14c478e90

ArrayView<float_const_> * __thiscall
dna::FakeReader::getSwingBlendWeights
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getSwingCount @ 14c478eb0

ushort __thiscall dna::FakeReader::getSwingCount(FakeReader *this)

{
  return 0;
}

// getSwingInputControlIndices @ 14c478ec0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getSwingInputControlIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getSwingOutputJointIndices @ 14c478ee0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getSwingOutputJointIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getSwingSetupTwistAxis @ 14c478f00

TwistAxis __thiscall dna::FakeReader::getSwingSetupTwistAxis(FakeReader *this,ushort param_1)

{
  return X;
}

// getTranslationUnit`vtordisp{4294967292,0}' @ 14c478f0c

/* [thunk]:public: virtual enum dna::TranslationUnit __cdecl
   dna::FakeReader::getTranslationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

TranslationUnit __thiscall
dna::FakeReader::getTranslationUnit_vtordisp_4294967292_0__(FakeReader *this)

{
  TranslationUnit TVar1;
  
  TVar1 = getTranslationUnit((FakeReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74)
                            );
  return TVar1;
}

// getTranslationUnit @ 14c478f20

TranslationUnit __thiscall dna::FakeReader::getTranslationUnit(FakeReader *this)

{
  return cm;
}

// getTwistBlendWeights @ 14c478f30

ArrayView<float_const_> * __thiscall
dna::FakeReader::getTwistBlendWeights
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getTwistCount @ 14c478f50

ushort __thiscall dna::FakeReader::getTwistCount(FakeReader *this)

{
  return 0;
}

// getTwistInputControlIndices @ 14c478f60

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getTwistInputControlIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getTwistOutputJointIndices @ 14c478f80

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeReader::getTwistOutputJointIndices
          (FakeReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getTwistSetupTwistAxis @ 14c478fa0

TwistAxis __thiscall dna::FakeReader::getTwistSetupTwistAxis(FakeReader *this,ushort param_1)

{
  return X;
}

// getVertexLayout @ 14c478fb0

VertexLayout * __thiscall
dna::FakeReader::getVertexLayout
          (FakeReader *this,VertexLayout *__return_storage_ptr__,ushort param_1,uint param_2)

{
  __return_storage_ptr__->position = 0;
  __return_storage_ptr__->textureCoordinate = 0;
  __return_storage_ptr__->normal = 0;
  return __return_storage_ptr__;
}

// getVertexLayoutCount @ 14c478fd0

uint __thiscall dna::FakeReader::getVertexLayoutCount(FakeReader *this,ushort param_1)

{
  return 0;
}

// getVertexLayoutNormalIndices @ 14c478fe0

ArrayView<unsigned_int_const_> * __thiscall
dna::FakeReader::getVertexLayoutNormalIndices
          (FakeReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (uint *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexLayoutPositionIndices @ 14c479000

ArrayView<unsigned_int_const_> * __thiscall
dna::FakeReader::getVertexLayoutPositionIndices
          (FakeReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (uint *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexLayoutTextureCoordinateIndices @ 14c479020

ArrayView<unsigned_int_const_> * __thiscall
dna::FakeReader::getVertexLayoutTextureCoordinateIndices
          (FakeReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (uint *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexNormal @ 14c479040

Vector3 * __thiscall
dna::FakeReader::getVertexNormal
          (FakeReader *this,Vector3 *__return_storage_ptr__,ushort param_1,uint param_2)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

// getVertexNormalCount @ 14c479060

uint __thiscall dna::FakeReader::getVertexNormalCount(FakeReader *this,ushort param_1)

{
  return 0;
}

// getVertexNormalXs @ 14c479070

ArrayView<float_const_> * __thiscall
dna::FakeReader::getVertexNormalXs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexNormalYs @ 14c479090

ArrayView<float_const_> * __thiscall
dna::FakeReader::getVertexNormalYs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexNormalZs @ 14c4790b0

ArrayView<float_const_> * __thiscall
dna::FakeReader::getVertexNormalZs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexPosition @ 14c4790d0

Vector3 * __thiscall
dna::FakeReader::getVertexPosition
          (FakeReader *this,Vector3 *__return_storage_ptr__,ushort param_1,uint param_2)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

// getVertexPositionCount @ 14c4790f0

uint __thiscall dna::FakeReader::getVertexPositionCount(FakeReader *this,ushort param_1)

{
  return 0;
}

// getVertexPositionXs @ 14c479100

ArrayView<float_const_> * __thiscall
dna::FakeReader::getVertexPositionXs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexPositionYs @ 14c479120

ArrayView<float_const_> * __thiscall
dna::FakeReader::getVertexPositionYs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexPositionZs @ 14c479140

ArrayView<float_const_> * __thiscall
dna::FakeReader::getVertexPositionZs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexTextureCoordinate @ 14c479160

TextureCoordinate __thiscall
dna::FakeReader::getVertexTextureCoordinate(FakeReader *this,ushort param_1,uint param_2)

{
  TextureCoordinate TVar1;
  undefined6 in_register_00000012;
  
  *(undefined8 *)CONCAT62(in_register_00000012,param_1) = 0;
  TVar1._2_6_ = in_register_00000012;
  TVar1.u._0_2_ = param_1;
  return TVar1;
}

// getVertexTextureCoordinateCount @ 14c479170

uint __thiscall dna::FakeReader::getVertexTextureCoordinateCount(FakeReader *this,ushort param_1)

{
  return 0;
}

// getVertexTextureCoordinateUs @ 14c479180

ArrayView<float_const_> * __thiscall
dna::FakeReader::getVertexTextureCoordinateUs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexTextureCoordinateVs @ 14c4791a0

ArrayView<float_const_> * __thiscall
dna::FakeReader::getVertexTextureCoordinateVs
          (FakeReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// unload @ 14c4791c0

void __thiscall dna::FakeReader::unload(FakeReader *this,DataLayer param_1)

{
  return;
}

