// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 246

// ~FakeDNAReader @ 14c30d9c0

void __thiscall dna::FakeDNAReader::~FakeDNAReader(FakeDNAReader *this)

{
  int iVar1;
  
  *(undefined ***)&this[-1].field_0x20 = &___7FakeDNAReader_dna__6B_;
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

// `vector_deleting_destructor'`vtordisp{4294967292,0}' @ 14c30da54

/* [thunk]:public: virtual void * __ptr64 __cdecl dna::FakeDNAReader::`vector deleting
   destructor'`vtordisp{4294967292,0}' (unsigned int) __ptr64 */

void * __thiscall
dna::FakeDNAReader::_vector_deleting_destructor__vtordisp_4294967292_0__
          (FakeDNAReader *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14c30da70

void * __thiscall dna::FakeDNAReader::_scalar_deleting_destructor_(FakeDNAReader *this,uint param_1)

{
  int iVar1;
  
  *(undefined ***)&this[-1].field_0x20 = &___7FakeDNAReader_dna__6B_;
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

// getAge`vtordisp{4294967292,0}' @ 14c30db4c

/* [thunk]:public: virtual unsigned short __cdecl dna::FakeDNAReader::getAge`vtordisp{4294967292,0}'
   (void)const __ptr64 */

ushort __thiscall dna::FakeDNAReader::getAge_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getAge((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getAge @ 14c30db60

ushort __thiscall dna::FakeDNAReader::getAge(FakeDNAReader *this)

{
  return 0;
}

// getAnimatedMapCount`vtordisp{4294967292,0}' @ 14c30db6c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getAnimatedMapCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getAnimatedMapCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getAnimatedMapCount((FakeDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getAnimatedMapCount @ 14c30db80

ushort __thiscall dna::FakeDNAReader::getAnimatedMapCount(FakeDNAReader *this)

{
  return 0;
}

// getAnimatedMapCutValues`vtordisp{4294967292,0}' @ 14c30db8c

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getAnimatedMapCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapCutValues_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapCutValues
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapCutValues @ 14c30dba0

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapCutValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapFromValues`vtordisp{4294967292,0}' @ 14c30dbb4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getAnimatedMapFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapFromValues_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapFromValues
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapFromValues @ 14c30dbd0

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapFromValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapIndexListCount`vtordisp{4294967292,0}' @ 14c30dbe4

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getAnimatedMapIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getAnimatedMapIndexListCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getAnimatedMapIndexListCount
                    ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getAnimatedMapIndexListCount @ 14c30dc00

ushort __thiscall dna::FakeDNAReader::getAnimatedMapIndexListCount(FakeDNAReader *this)

{
  return 0;
}

// getAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' @ 14c30dc0c

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapIndicesForLOD_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapIndicesForLOD
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getAnimatedMapIndicesForLOD @ 14c30dc20

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapIndicesForLOD
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapInputIndices`vtordisp{4294967292,0}' @ 14c30dc34

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getAnimatedMapInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapInputIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapInputIndices
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapInputIndices @ 14c30dc50

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapInputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapLODs`vtordisp{4294967292,0}' @ 14c30dc64

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getAnimatedMapLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapLODs_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapLODs((FakeDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                              __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapLODs @ 14c30dc80

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapLODs
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapName`vtordisp{4294967292,0}' @ 14c30dc94

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeDNAReader::getAnimatedMapName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
dna::FakeDNAReader::getAnimatedMapName_vtordisp_4294967292_0__
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getAnimatedMapName((FakeDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                              __return_storage_ptr__,param_1);
  return pSVar1;
}

// getAnimatedMapName @ 14c30dcb0

StringView * __thiscall
dna::FakeDNAReader::getAnimatedMapName
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapOutputIndices`vtordisp{4294967292,0}' @ 14c30dcc4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getAnimatedMapOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapOutputIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapOutputIndices
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapOutputIndices @ 14c30dce0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapOutputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapSlopeValues`vtordisp{4294967292,0}' @ 14c30dcf4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getAnimatedMapSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapSlopeValues_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapSlopeValues
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapSlopeValues @ 14c30dd10

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapSlopeValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getAnimatedMapToValues`vtordisp{4294967292,0}' @ 14c30dd24

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getAnimatedMapToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapToValues_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapToValues
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapToValues @ 14c30dd40

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getAnimatedMapToValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getArchetype`vtordisp{4294967292,0}' @ 14c30dd54

/* [thunk]:public: virtual enum dna::Archetype __cdecl
   dna::FakeDNAReader::getArchetype`vtordisp{4294967292,0}' (void)const __ptr64 */

Archetype __thiscall dna::FakeDNAReader::getArchetype_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  Archetype AVar1;
  
  AVar1 = getArchetype((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return AVar1;
}

// getArchetype @ 14c30dd70

Archetype __thiscall dna::FakeDNAReader::getArchetype(FakeDNAReader *this)

{
  return asian;
}

// getBlendShapeChannelCount`vtordisp{4294967292,0}' @ 14c30dd7c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getBlendShapeChannelCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getBlendShapeChannelCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getBlendShapeChannelCount
                    ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getBlendShapeChannelCount @ 14c30dd90

ushort __thiscall dna::FakeDNAReader::getBlendShapeChannelCount(FakeDNAReader *this)

{
  return 0;
}

// getBlendShapeChannelIndex @ 14c30dda0

ushort __thiscall
dna::FakeDNAReader::getBlendShapeChannelIndex(FakeDNAReader *this,ushort param_1,ushort param_2)

{
  return 0;
}

// getBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' @ 14c30ddac

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' (void)const
   __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getBlendShapeChannelIndexListCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getBlendShapeChannelIndexListCount
                    ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getBlendShapeChannelIndexListCount @ 14c30ddc0

ushort __thiscall dna::FakeDNAReader::getBlendShapeChannelIndexListCount(FakeDNAReader *this)

{
  return 0;
}

// getBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' @ 14c30ddcc

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeChannelIndicesForLOD_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelIndicesForLOD
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getBlendShapeChannelIndicesForLOD @ 14c30dde0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeChannelIndicesForLOD
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeChannelInputIndices`vtordisp{4294967292,0}' @ 14c30ddf4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getBlendShapeChannelInputIndices`vtordisp{4294967292,0}' (void)const __ptr64
    */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeChannelInputIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelInputIndices
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getBlendShapeChannelInputIndices @ 14c30de10

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeChannelInputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeChannelLODs`vtordisp{4294967292,0}' @ 14c30de24

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getBlendShapeChannelLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeChannelLODs_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelLODs
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getBlendShapeChannelLODs @ 14c30de40

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeChannelLODs
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeChannelName`vtordisp{4294967292,0}' @ 14c30de54

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeDNAReader::getBlendShapeChannelName`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

StringView * __thiscall
dna::FakeDNAReader::getBlendShapeChannelName_vtordisp_4294967292_0__
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getBlendShapeChannelName
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pSVar1;
}

// getBlendShapeChannelName @ 14c30de70

StringView * __thiscall
dna::FakeDNAReader::getBlendShapeChannelName
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' @ 14c30de84

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64
    */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeChannelOutputIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelOutputIndices
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getBlendShapeChannelOutputIndices @ 14c30dea0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeChannelOutputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeTargetCount @ 14c30dec0

ushort __thiscall dna::FakeDNAReader::getBlendShapeTargetCount(FakeDNAReader *this,ushort param_1)

{
  return 0;
}

// getBlendShapeTargetDelta @ 14c30ded0

Vector3 * __thiscall
dna::FakeDNAReader::getBlendShapeTargetDelta
          (FakeDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1,ushort param_2,
          uint param_3)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

// getBlendShapeTargetDeltaCount @ 14c30def0

uint __thiscall
dna::FakeDNAReader::getBlendShapeTargetDeltaCount(FakeDNAReader *this,ushort param_1,ushort param_2)

{
  return 0;
}

// getBlendShapeTargetDeltaXs @ 14c30df00

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeTargetDeltaXs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeTargetDeltaYs @ 14c30df20

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeTargetDeltaYs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeTargetDeltaZs @ 14c30df40

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeTargetDeltaZs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getBlendShapeTargetVertexIndices @ 14c30df60

ArrayView<unsigned_int_const_> * __thiscall
dna::FakeDNAReader::getBlendShapeTargetVertexIndices
          (FakeDNAReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,ushort param_1
          ,ushort param_2)

{
  __return_storage_ptr__->ptr = (uint *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getCoordinateSystem`vtordisp{4294967292,0}' @ 14c30df74

/* [thunk]:public: virtual struct dna::CoordinateSystem __cdecl
   dna::FakeDNAReader::getCoordinateSystem`vtordisp{4294967292,0}' (void)const __ptr64 */

CoordinateSystem * __thiscall
dna::FakeDNAReader::getCoordinateSystem_vtordisp_4294967292_0__
          (FakeDNAReader *this,CoordinateSystem *__return_storage_ptr__)

{
  CoordinateSystem *pCVar1;
  
  pCVar1 = getCoordinateSystem((FakeDNAReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                               __return_storage_ptr__);
  return pCVar1;
}

// getCoordinateSystem @ 14c30df90

CoordinateSystem * __thiscall
dna::FakeDNAReader::getCoordinateSystem
          (FakeDNAReader *this,CoordinateSystem *__return_storage_ptr__)

{
  __return_storage_ptr__->xAxis = left;
  __return_storage_ptr__->yAxis = left;
  __return_storage_ptr__->zAxis = left;
  return __return_storage_ptr__;
}

// getDBComplexity`vtordisp{4294967292,0}' @ 14c30dfa4

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeDNAReader::getDBComplexity`vtordisp{4294967292,0}' (void)const __ptr64 */

StringView * __thiscall
dna::FakeDNAReader::getDBComplexity_vtordisp_4294967292_0__
          (FakeDNAReader *this,StringView *__return_storage_ptr__)

{
  StringView *pSVar1;
  
  pSVar1 = getDBComplexity((FakeDNAReader *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                           __return_storage_ptr__);
  return pSVar1;
}

// getDBComplexity @ 14c30dfc0

StringView * __thiscall
dna::FakeDNAReader::getDBComplexity(FakeDNAReader *this,StringView *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getDBMaxLOD`vtordisp{4294967292,0}' @ 14c30dfd4

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getDBMaxLOD`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeDNAReader::getDBMaxLOD_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getDBMaxLOD((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getDBMaxLOD @ 14c30dff0

ushort __thiscall dna::FakeDNAReader::getDBMaxLOD(FakeDNAReader *this)

{
  return 0;
}

// getDBName`vtordisp{4294967292,0}' @ 14c30dffc

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeDNAReader::getDBName`vtordisp{4294967292,0}' (void)const __ptr64 */

StringView * __thiscall
dna::FakeDNAReader::getDBName_vtordisp_4294967292_0__
          (FakeDNAReader *this,StringView *__return_storage_ptr__)

{
  StringView *pSVar1;
  
  pSVar1 = getDBName((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                     __return_storage_ptr__);
  return pSVar1;
}

// getDBName @ 14c30e010

StringView * __thiscall
dna::FakeDNAReader::getDBName(FakeDNAReader *this,StringView *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getFaceCount @ 14c30e030

uint __thiscall dna::FakeDNAReader::getFaceCount(FakeDNAReader *this,ushort param_1)

{
  return 0;
}

// getFaceVertexLayoutIndices @ 14c30e040

ArrayView<unsigned_int_const_> * __thiscall
dna::FakeDNAReader::getFaceVertexLayoutIndices
          (FakeDNAReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,ushort param_1
          ,uint param_2)

{
  __return_storage_ptr__->ptr = (uint *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getFileFormatGeneration`vtordisp{4294967292,0}' @ 14c30e054

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getFileFormatGeneration`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getFileFormatGeneration_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getFileFormatGeneration
                    ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getFileFormatGeneration @ 14c30e070

ushort __thiscall dna::FakeDNAReader::getFileFormatGeneration(FakeDNAReader *this)

{
  return 2;
}

// getFileFormatVersion`vtordisp{4294967292,0}' @ 14c30e07c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getFileFormatVersion`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getFileFormatVersion_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getFileFormatVersion
                    ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getFileFormatVersion @ 14c30e090

ushort __thiscall dna::FakeDNAReader::getFileFormatVersion(FakeDNAReader *this)

{
  return 1;
}

// getGUIControlCount`vtordisp{4294967292,0}' @ 14c30e09c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getGUIControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getGUIControlCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getGUIControlCount((FakeDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getGUIControlCount @ 14c30e0b0

ushort __thiscall dna::FakeDNAReader::getGUIControlCount(FakeDNAReader *this)

{
  return 0;
}

// getGUIControlName`vtordisp{4294967292,0}' @ 14c30e0bc

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeDNAReader::getGUIControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
dna::FakeDNAReader::getGUIControlName_vtordisp_4294967292_0__
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getGUIControlName((FakeDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                             __return_storage_ptr__,param_1);
  return pSVar1;
}

// getGUIControlName @ 14c30e0d0

StringView * __thiscall
dna::FakeDNAReader::getGUIControlName
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getGUIToRawCutValues`vtordisp{4294967292,0}' @ 14c30e0e4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getGUIToRawCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawCutValues_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawCutValues
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawCutValues @ 14c30e100

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawCutValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGUIToRawFromValues`vtordisp{4294967292,0}' @ 14c30e114

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getGUIToRawFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawFromValues_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawFromValues
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawFromValues @ 14c30e130

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawFromValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGUIToRawInputIndices`vtordisp{4294967292,0}' @ 14c30e144

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getGUIToRawInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawInputIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getGUIToRawInputIndices
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawInputIndices @ 14c30e160

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawInputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGUIToRawOutputIndices`vtordisp{4294967292,0}' @ 14c30e174

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getGUIToRawOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawOutputIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getGUIToRawOutputIndices
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawOutputIndices @ 14c30e190

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawOutputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGUIToRawSlopeValues`vtordisp{4294967292,0}' @ 14c30e1a4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getGUIToRawSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawSlopeValues_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawSlopeValues
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawSlopeValues @ 14c30e1c0

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawSlopeValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGUIToRawToValues`vtordisp{4294967292,0}' @ 14c30e1d4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getGUIToRawToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawToValues_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawToValues((FakeDNAReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                               __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawToValues @ 14c30e1f0

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getGUIToRawToValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getGender`vtordisp{4294967292,0}' @ 14c30e204

/* [thunk]:public: virtual enum dna::Gender __cdecl
   dna::FakeDNAReader::getGender`vtordisp{4294967292,0}' (void)const __ptr64 */

Gender __thiscall dna::FakeDNAReader::getGender_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  Gender GVar1;
  
  GVar1 = getGender((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return GVar1;
}

// getGender @ 14c30e220

Gender __thiscall dna::FakeDNAReader::getGender(FakeDNAReader *this)

{
  return male;
}

// getJointColumnCount`vtordisp{4294967292,0}' @ 14c30e22c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getJointColumnCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getJointColumnCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointColumnCount((FakeDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointColumnCount @ 14c30e240

ushort __thiscall dna::FakeDNAReader::getJointColumnCount(FakeDNAReader *this)

{
  return 0;
}

// getJointCount`vtordisp{4294967292,0}' @ 14c30e24c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getJointCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeDNAReader::getJointCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointCount((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointCount @ 14c30e260

ushort __thiscall dna::FakeDNAReader::getJointCount(FakeDNAReader *this)

{
  return 0;
}

// getJointGroupCount`vtordisp{4294967292,0}' @ 14c30e26c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getJointGroupCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getJointGroupCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointGroupCount((FakeDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointGroupCount @ 14c30e280

ushort __thiscall dna::FakeDNAReader::getJointGroupCount(FakeDNAReader *this)

{
  return 0;
}

// getJointGroupInputIndices`vtordisp{4294967292,0}' @ 14c30e28c

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getJointGroupInputIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointGroupInputIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupInputIndices
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupInputIndices @ 14c30e2a0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointGroupInputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointGroupJointIndices`vtordisp{4294967292,0}' @ 14c30e2b4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getJointGroupJointIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointGroupJointIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupJointIndices
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupJointIndices @ 14c30e2d0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointGroupJointIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointGroupLODs`vtordisp{4294967292,0}' @ 14c30e2e4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getJointGroupLODs`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointGroupLODs_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupLODs((FakeDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                             __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupLODs @ 14c30e300

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointGroupLODs
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointGroupOutputIndices`vtordisp{4294967292,0}' @ 14c30e314

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getJointGroupOutputIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointGroupOutputIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupOutputIndices
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupOutputIndices @ 14c30e330

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointGroupOutputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointGroupValues`vtordisp{4294967292,0}' @ 14c30e344

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getJointGroupValues`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getJointGroupValues_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getJointGroupValues((FakeDNAReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                               __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupValues @ 14c30e360

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getJointGroupValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointIndexListCount`vtordisp{4294967292,0}' @ 14c30e374

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getJointIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getJointIndexListCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointIndexListCount
                    ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointIndexListCount @ 14c30e390

ushort __thiscall dna::FakeDNAReader::getJointIndexListCount(FakeDNAReader *this)

{
  return 0;
}

// getJointIndicesForLOD`vtordisp{4294967292,0}' @ 14c30e39c

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getJointIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointIndicesForLOD_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointIndicesForLOD
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointIndicesForLOD @ 14c30e3b0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointIndicesForLOD
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getJointName`vtordisp{4294967292,0}' @ 14c30e3c4

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeDNAReader::getJointName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
dna::FakeDNAReader::getJointName_vtordisp_4294967292_0__
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getJointName((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                        __return_storage_ptr__,param_1);
  return pSVar1;
}

// getJointName @ 14c30e3e0

StringView * __thiscall
dna::FakeDNAReader::getJointName
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getJointParentIndex`vtordisp{4294967292,0}' @ 14c30e3f4

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getJointParentIndex`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getJointParentIndex_vtordisp_4294967292_0__(FakeDNAReader *this,ushort param_1)

{
  ushort uVar1;
  
  uVar1 = getJointParentIndex((FakeDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),param_1);
  return uVar1;
}

// getJointParentIndex @ 14c30e410

ushort __thiscall dna::FakeDNAReader::getJointParentIndex(FakeDNAReader *this,ushort param_1)

{
  return 0;
}

// getJointRotationRepresentation @ 14c30e420

RotationRepresentation __thiscall
dna::FakeDNAReader::getJointRotationRepresentation(FakeDNAReader *this,ushort param_1)

{
  return EulerAngles;
}

// getJointRowCount`vtordisp{4294967292,0}' @ 14c30e42c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getJointRowCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeDNAReader::getJointRowCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointRowCount((FakeDNAReader *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointRowCount @ 14c30e440

ushort __thiscall dna::FakeDNAReader::getJointRowCount(FakeDNAReader *this)

{
  return 0;
}

// getJointScaleRepresentation @ 14c30e450

ScaleRepresentation __thiscall
dna::FakeDNAReader::getJointScaleRepresentation(FakeDNAReader *this,ushort param_1)

{
  return Vector;
}

// getJointTranslationRepresentation @ 14c30e460

TranslationRepresentation __thiscall
dna::FakeDNAReader::getJointTranslationRepresentation(FakeDNAReader *this,ushort param_1)

{
  return Vector;
}

// getJointVariableAttributeIndices`vtordisp{4294967292,0}' @ 14c30e46c

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getJointVariableAttributeIndices`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointVariableAttributeIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointVariableAttributeIndices
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointVariableAttributeIndices @ 14c30e480

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getJointVariableAttributeIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getLODCount`vtordisp{4294967292,0}' @ 14c30e494

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getLODCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeDNAReader::getLODCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getLODCount((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getLODCount @ 14c30e4b0

ushort __thiscall dna::FakeDNAReader::getLODCount(FakeDNAReader *this)

{
  return 0;
}

// getMLControlCount @ 14c30e4c0

ushort __thiscall dna::FakeDNAReader::getMLControlCount(FakeDNAReader *this)

{
  return 0;
}

// getMLControlName @ 14c30e4d0

StringView * __thiscall
dna::FakeDNAReader::getMLControlName
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getMaximumInfluencePerVertex @ 14c30e4f0

ushort __thiscall
dna::FakeDNAReader::getMaximumInfluencePerVertex(FakeDNAReader *this,ushort param_1)

{
  return 0;
}

// getMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' @ 14c30e4fc

/* [thunk]:public: virtual struct dna::MeshBlendShapeChannelMapping __cdecl
   dna::FakeDNAReader::getMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

MeshBlendShapeChannelMapping __thiscall
dna::FakeDNAReader::getMeshBlendShapeChannelMapping_vtordisp_4294967292_0__
          (FakeDNAReader *this,ushort param_1)

{
  MeshBlendShapeChannelMapping MVar1;
  
  MVar1 = getMeshBlendShapeChannelMapping
                    ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                     param_1);
  return MVar1;
}

// getMeshBlendShapeChannelMapping @ 14c30e510

MeshBlendShapeChannelMapping __thiscall
dna::FakeDNAReader::getMeshBlendShapeChannelMapping(FakeDNAReader *this,ushort param_1)

{
  undefined6 in_register_00000012;
  
  *(undefined4 *)CONCAT62(in_register_00000012,param_1) = 0;
  return SUB84(CONCAT62(in_register_00000012,param_1),0);
}

// getMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}' @ 14c30e520

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}' (void)const
   __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getMeshBlendShapeChannelMappingCount_vtordisp_4294967292_0__
          (FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getMeshBlendShapeChannelMappingCount
                    ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getMeshBlendShapeChannelMappingCount @ 14c30e540

ushort __thiscall dna::FakeDNAReader::getMeshBlendShapeChannelMappingCount(FakeDNAReader *this)

{
  return 0;
}

// getMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}' @ 14c30e54c

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}'
   (unsigned short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getMeshBlendShapeChannelMappingIndicesForLOD_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getMeshBlendShapeChannelMappingIndicesForLOD
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getMeshBlendShapeChannelMappingIndicesForLOD @ 14c30e560

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getMeshBlendShapeChannelMappingIndicesForLOD
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getMeshCount`vtordisp{4294967292,0}' @ 14c30e574

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getMeshCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeDNAReader::getMeshCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getMeshCount((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getMeshCount @ 14c30e590

ushort __thiscall dna::FakeDNAReader::getMeshCount(FakeDNAReader *this)

{
  return 0;
}

// getMeshIndexListCount`vtordisp{4294967292,0}' @ 14c30e59c

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getMeshIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getMeshIndexListCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getMeshIndexListCount
                    ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getMeshIndexListCount @ 14c30e5b0

ushort __thiscall dna::FakeDNAReader::getMeshIndexListCount(FakeDNAReader *this)

{
  return 0;
}

// getMeshIndicesForLOD`vtordisp{4294967292,0}' @ 14c30e5bc

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getMeshIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getMeshIndicesForLOD_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getMeshIndicesForLOD
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getMeshIndicesForLOD @ 14c30e5d0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getMeshIndicesForLOD
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getMeshName`vtordisp{4294967292,0}' @ 14c30e5e4

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeDNAReader::getMeshName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
dna::FakeDNAReader::getMeshName_vtordisp_4294967292_0__
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getMeshName((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                       __return_storage_ptr__,param_1);
  return pSVar1;
}

// getMeshName @ 14c30e600

StringView * __thiscall
dna::FakeDNAReader::getMeshName
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getMeshRegionCount @ 14c30e620

ushort __thiscall dna::FakeDNAReader::getMeshRegionCount(FakeDNAReader *this,ushort param_1)

{
  return 0;
}

// getMeshRegionName @ 14c30e630

StringView * __thiscall
dna::FakeDNAReader::getMeshRegionName
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getMetaDataCount`vtordisp{4294967292,0}' @ 14c30e644

/* [thunk]:public: virtual unsigned int __cdecl
   dna::FakeDNAReader::getMetaDataCount`vtordisp{4294967292,0}' (void)const __ptr64 */

uint __thiscall dna::FakeDNAReader::getMetaDataCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  uint uVar1;
  
  uVar1 = getMetaDataCount((FakeDNAReader *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getMetaDataCount @ 14c30e660

uint __thiscall dna::FakeDNAReader::getMetaDataCount(FakeDNAReader *this)

{
  return 0;
}

// getMetaDataKey`vtordisp{4294967292,0}' @ 14c30e66c

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeDNAReader::getMetaDataKey`vtordisp{4294967292,0}' (unsigned int)const __ptr64 */

StringView * __thiscall
dna::FakeDNAReader::getMetaDataKey_vtordisp_4294967292_0__
          (FakeDNAReader *this,StringView *__return_storage_ptr__,uint param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getMetaDataKey((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74)
                          ,__return_storage_ptr__,param_1);
  return pSVar1;
}

// getMetaDataKey @ 14c30e680

StringView * __thiscall
dna::FakeDNAReader::getMetaDataKey
          (FakeDNAReader *this,StringView *__return_storage_ptr__,uint param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getMetaDataValue`vtordisp{4294967292,0}' @ 14c30e694

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeDNAReader::getMetaDataValue`vtordisp{4294967292,0}' (char const * __ptr64)const __ptr64
    */

StringView * __thiscall
dna::FakeDNAReader::getMetaDataValue_vtordisp_4294967292_0__
          (FakeDNAReader *this,StringView *__return_storage_ptr__,char *param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getMetaDataValue((FakeDNAReader *)
                            ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                            __return_storage_ptr__,param_1);
  return pSVar1;
}

// getMetaDataValue @ 14c30e6b0

StringView * __thiscall
dna::FakeDNAReader::getMetaDataValue
          (FakeDNAReader *this,StringView *__return_storage_ptr__,char *param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getName`vtordisp{4294967292,0}' @ 14c30e6c4

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeDNAReader::getName`vtordisp{4294967292,0}' (void)const __ptr64 */

StringView * __thiscall
dna::FakeDNAReader::getName_vtordisp_4294967292_0__
          (FakeDNAReader *this,StringView *__return_storage_ptr__)

{
  StringView *pSVar1;
  
  pSVar1 = getName((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                   __return_storage_ptr__);
  return pSVar1;
}

// getName @ 14c30e6e0

StringView * __thiscall
dna::FakeDNAReader::getName(FakeDNAReader *this,StringView *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkCount @ 14c30e700

ushort __thiscall dna::FakeDNAReader::getNeuralNetworkCount(FakeDNAReader *this)

{
  return 0;
}

// getNeuralNetworkIndexListCount @ 14c30e710

ushort __thiscall dna::FakeDNAReader::getNeuralNetworkIndexListCount(FakeDNAReader *this)

{
  return 0;
}

// getNeuralNetworkIndicesForLOD @ 14c30e720

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getNeuralNetworkIndicesForLOD
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkIndicesForMeshRegion @ 14c30e740

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getNeuralNetworkIndicesForMeshRegion
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkInputIndices @ 14c30e760

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getNeuralNetworkInputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerActivationFunction @ 14c30e780

ActivationFunction __thiscall
dna::FakeDNAReader::getNeuralNetworkLayerActivationFunction
          (FakeDNAReader *this,ushort param_1,ushort param_2)

{
  return linear;
}

// getNeuralNetworkLayerActivationFunctionParameters @ 14c30e790

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeuralNetworkLayerActivationFunctionParameters
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerBiases @ 14c30e7b0

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeuralNetworkLayerBiases
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerCount @ 14c30e7d0

ushort __thiscall dna::FakeDNAReader::getNeuralNetworkLayerCount(FakeDNAReader *this,ushort param_1)

{
  return 0;
}

// getNeuralNetworkLayerWeights @ 14c30e7e0

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeuralNetworkLayerWeights
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeuralNetworkOutputIndices @ 14c30e800

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getNeuralNetworkOutputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointRotation`vtordisp{4294967292,0}' @ 14c30e814

/* [thunk]:public: virtual struct dna::Vector3 __cdecl
   dna::FakeDNAReader::getNeutralJointRotation`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

Vector3 * __thiscall
dna::FakeDNAReader::getNeutralJointRotation_vtordisp_4294967292_0__
          (FakeDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  Vector3 *pVVar1;
  
  pVVar1 = getNeutralJointRotation
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pVVar1;
}

// getNeutralJointRotation @ 14c30e830

Vector3 * __thiscall
dna::FakeDNAReader::getNeutralJointRotation
          (FakeDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

// getNeutralJointRotationXs`vtordisp{4294967292,0}' @ 14c30e844

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getNeutralJointRotationXs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointRotationXs_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationXs
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationXs @ 14c30e860

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointRotationXs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointRotationYs`vtordisp{4294967292,0}' @ 14c30e874

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getNeutralJointRotationYs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointRotationYs_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationYs
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationYs @ 14c30e890

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointRotationYs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointRotationZs`vtordisp{4294967292,0}' @ 14c30e8a4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getNeutralJointRotationZs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointRotationZs_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationZs
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationZs @ 14c30e8c0

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointRotationZs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointTranslation`vtordisp{4294967292,0}' @ 14c30e8d4

/* [thunk]:public: virtual struct dna::Vector3 __cdecl
   dna::FakeDNAReader::getNeutralJointTranslation`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

Vector3 * __thiscall
dna::FakeDNAReader::getNeutralJointTranslation_vtordisp_4294967292_0__
          (FakeDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  Vector3 *pVVar1;
  
  pVVar1 = getNeutralJointTranslation
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pVVar1;
}

// getNeutralJointTranslation @ 14c30e8f0

Vector3 * __thiscall
dna::FakeDNAReader::getNeutralJointTranslation
          (FakeDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

// getNeutralJointTranslationXs`vtordisp{4294967292,0}' @ 14c30e904

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getNeutralJointTranslationXs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointTranslationXs_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationXs
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationXs @ 14c30e920

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointTranslationXs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointTranslationYs`vtordisp{4294967292,0}' @ 14c30e934

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getNeutralJointTranslationYs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointTranslationYs_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationYs
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationYs @ 14c30e950

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointTranslationYs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getNeutralJointTranslationZs`vtordisp{4294967292,0}' @ 14c30e964

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getNeutralJointTranslationZs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointTranslationZs_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationZs
                     ((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationZs @ 14c30e980

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getNeutralJointTranslationZs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getPSDColumnIndices`vtordisp{4294967292,0}' @ 14c30e994

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getPSDColumnIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getPSDColumnIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getPSDColumnIndices((FakeDNAReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                               __return_storage_ptr__);
  return pAVar1;
}

// getPSDColumnIndices @ 14c30e9b0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getPSDColumnIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getPSDCount`vtordisp{4294967292,0}' @ 14c30e9c4

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getPSDCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall dna::FakeDNAReader::getPSDCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getPSDCount((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getPSDCount @ 14c30e9e0

ushort __thiscall dna::FakeDNAReader::getPSDCount(FakeDNAReader *this)

{
  return 0;
}

// getPSDRowIndices`vtordisp{4294967292,0}' @ 14c30e9ec

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   dna::FakeDNAReader::getPSDRowIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getPSDRowIndices_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getPSDRowIndices((FakeDNAReader *)
                            ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                            __return_storage_ptr__);
  return pAVar1;
}

// getPSDRowIndices @ 14c30ea00

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getPSDRowIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getPSDValues`vtordisp{4294967292,0}' @ 14c30ea14

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   dna::FakeDNAReader::getPSDValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getPSDValues_vtordisp_4294967292_0__
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getPSDValues((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                        __return_storage_ptr__);
  return pAVar1;
}

// getPSDValues @ 14c30ea30

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getPSDValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseAnimatedMapOutputIndices @ 14c30ea50

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getRBFPoseAnimatedMapOutputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseBlendShapeChannelOutputIndices @ 14c30ea70

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getRBFPoseBlendShapeChannelOutputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseControlCount @ 14c30ea90

ushort __thiscall dna::FakeDNAReader::getRBFPoseControlCount(FakeDNAReader *this)

{
  return 0;
}

// getRBFPoseControlName @ 14c30eaa0

StringView * __thiscall
dna::FakeDNAReader::getRBFPoseControlName
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getRBFPoseCount @ 14c30eac0

ushort __thiscall dna::FakeDNAReader::getRBFPoseCount(FakeDNAReader *this)

{
  return 0;
}

// getRBFPoseInputControlIndices @ 14c30ead0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getRBFPoseInputControlIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseJointOutputIndices @ 14c30eaf0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getRBFPoseJointOutputIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseJointOutputValues @ 14c30eb10

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getRBFPoseJointOutputValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseName @ 14c30eb30

StringView * __thiscall
dna::FakeDNAReader::getRBFPoseName
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getRBFPoseOutputControlIndices @ 14c30eb50

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getRBFPoseOutputControlIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseOutputControlWeights @ 14c30eb70

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getRBFPoseOutputControlWeights
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFPoseScale @ 14c30eb90

float __thiscall dna::FakeDNAReader::getRBFPoseScale(FakeDNAReader *this,ushort param_1)

{
  return 0.0;
}

// getRBFSolverAutomaticRadius @ 14c30eba0

AutomaticRadius __thiscall
dna::FakeDNAReader::getRBFSolverAutomaticRadius(FakeDNAReader *this,ushort param_1)

{
  return On;
}

// getRBFSolverCount @ 14c30ebb0

ushort __thiscall dna::FakeDNAReader::getRBFSolverCount(FakeDNAReader *this)

{
  return 0;
}

// getRBFSolverDistanceMethod @ 14c30ebc0

RBFDistanceMethod __thiscall
dna::FakeDNAReader::getRBFSolverDistanceMethod(FakeDNAReader *this,ushort param_1)

{
  return Euclidean;
}

// getRBFSolverFunctionType @ 14c30ebd0

RBFFunctionType __thiscall
dna::FakeDNAReader::getRBFSolverFunctionType(FakeDNAReader *this,ushort param_1)

{
  return Gaussian;
}

// getRBFSolverIndexListCount @ 14c30ebe0

ushort __thiscall dna::FakeDNAReader::getRBFSolverIndexListCount(FakeDNAReader *this)

{
  return 0;
}

// getRBFSolverIndicesForLOD @ 14c30ebf0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getRBFSolverIndicesForLOD
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFSolverName @ 14c30ec10

StringView * __thiscall
dna::FakeDNAReader::getRBFSolverName
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getRBFSolverNormalizeMethod @ 14c30ec30

RBFNormalizeMethod __thiscall
dna::FakeDNAReader::getRBFSolverNormalizeMethod(FakeDNAReader *this,ushort param_1)

{
  return OnlyNormalizeAboveOne;
}

// getRBFSolverPoseIndices @ 14c30ec40

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getRBFSolverPoseIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFSolverRadius @ 14c30ec60

float __thiscall dna::FakeDNAReader::getRBFSolverRadius(FakeDNAReader *this,ushort param_1)

{
  return 0.0;
}

// getRBFSolverRawControlIndices @ 14c30ec70

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getRBFSolverRawControlIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFSolverRawControlValues @ 14c30ec90

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getRBFSolverRawControlValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getRBFSolverTwistAxis @ 14c30ecb0

TwistAxis __thiscall dna::FakeDNAReader::getRBFSolverTwistAxis(FakeDNAReader *this,ushort param_1)

{
  return X;
}

// getRBFSolverType @ 14c30ecc0

RBFSolverType __thiscall dna::FakeDNAReader::getRBFSolverType(FakeDNAReader *this,ushort param_1)

{
  return Additive;
}

// getRBFSolverWeightThreshold @ 14c30ecd0

float __thiscall dna::FakeDNAReader::getRBFSolverWeightThreshold(FakeDNAReader *this,ushort param_1)

{
  return 0.0;
}

// getRawControlCount`vtordisp{4294967292,0}' @ 14c30ecdc

/* [thunk]:public: virtual unsigned short __cdecl
   dna::FakeDNAReader::getRawControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
dna::FakeDNAReader::getRawControlCount_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getRawControlCount((FakeDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getRawControlCount @ 14c30ecf0

ushort __thiscall dna::FakeDNAReader::getRawControlCount(FakeDNAReader *this)

{
  return 0;
}

// getRawControlName`vtordisp{4294967292,0}' @ 14c30ecfc

/* [thunk]:public: virtual class av::StringView __cdecl
   dna::FakeDNAReader::getRawControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
dna::FakeDNAReader::getRawControlName_vtordisp_4294967292_0__
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getRawControlName((FakeDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                             __return_storage_ptr__,param_1);
  return pSVar1;
}

// getRawControlName @ 14c30ed10

StringView * __thiscall
dna::FakeDNAReader::getRawControlName
          (FakeDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// getRotationUnit`vtordisp{4294967292,0}' @ 14c30ed24

/* [thunk]:public: virtual enum dna::RotationUnit __cdecl
   dna::FakeDNAReader::getRotationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

RotationUnit __thiscall
dna::FakeDNAReader::getRotationUnit_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  RotationUnit RVar1;
  
  RVar1 = getRotationUnit((FakeDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74)
                         );
  return RVar1;
}

// getRotationUnit @ 14c30ed40

RotationUnit __thiscall dna::FakeDNAReader::getRotationUnit(FakeDNAReader *this)

{
  return degrees;
}

// getSkinWeightsCount @ 14c30ed50

uint __thiscall dna::FakeDNAReader::getSkinWeightsCount(FakeDNAReader *this,ushort param_1)

{
  return 0;
}

// getSkinWeightsJointIndices @ 14c30ed60

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getSkinWeightsJointIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getSkinWeightsValues @ 14c30ed80

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getSkinWeightsValues
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getSwingBlendWeights @ 14c30eda0

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getSwingBlendWeights
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getSwingCount @ 14c30edc0

ushort __thiscall dna::FakeDNAReader::getSwingCount(FakeDNAReader *this)

{
  return 0;
}

// getSwingInputControlIndices @ 14c30edd0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getSwingInputControlIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getSwingOutputJointIndices @ 14c30edf0

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getSwingOutputJointIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getSwingSetupTwistAxis @ 14c30ee10

TwistAxis __thiscall dna::FakeDNAReader::getSwingSetupTwistAxis(FakeDNAReader *this,ushort param_1)

{
  return X;
}

// getTranslationUnit`vtordisp{4294967292,0}' @ 14c30ee1c

/* [thunk]:public: virtual enum dna::TranslationUnit __cdecl
   dna::FakeDNAReader::getTranslationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

TranslationUnit __thiscall
dna::FakeDNAReader::getTranslationUnit_vtordisp_4294967292_0__(FakeDNAReader *this)

{
  TranslationUnit TVar1;
  
  TVar1 = getTranslationUnit((FakeDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return TVar1;
}

// getTranslationUnit @ 14c30ee30

TranslationUnit __thiscall dna::FakeDNAReader::getTranslationUnit(FakeDNAReader *this)

{
  return cm;
}

// getTwistBlendWeights @ 14c30ee40

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getTwistBlendWeights
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getTwistCount @ 14c30ee60

ushort __thiscall dna::FakeDNAReader::getTwistCount(FakeDNAReader *this)

{
  return 0;
}

// getTwistInputControlIndices @ 14c30ee70

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getTwistInputControlIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getTwistOutputJointIndices @ 14c30ee90

ArrayView<unsigned_short_const_> * __thiscall
dna::FakeDNAReader::getTwistOutputJointIndices
          (FakeDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->ptr = (ushort *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getTwistSetupTwistAxis @ 14c30eeb0

TwistAxis __thiscall dna::FakeDNAReader::getTwistSetupTwistAxis(FakeDNAReader *this,ushort param_1)

{
  return X;
}

// getVertexLayout @ 14c30eec0

VertexLayout * __thiscall
dna::FakeDNAReader::getVertexLayout
          (FakeDNAReader *this,VertexLayout *__return_storage_ptr__,ushort param_1,uint param_2)

{
  __return_storage_ptr__->position = 0;
  __return_storage_ptr__->textureCoordinate = 0;
  __return_storage_ptr__->normal = 0;
  return __return_storage_ptr__;
}

// getVertexLayoutCount @ 14c30eee0

uint __thiscall dna::FakeDNAReader::getVertexLayoutCount(FakeDNAReader *this,ushort param_1)

{
  return 0;
}

// getVertexLayoutNormalIndices @ 14c30eef0

ArrayView<unsigned_int_const_> * __thiscall
dna::FakeDNAReader::getVertexLayoutNormalIndices
          (FakeDNAReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,ushort param_1
          )

{
  __return_storage_ptr__->ptr = (uint *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexLayoutPositionIndices @ 14c30ef10

ArrayView<unsigned_int_const_> * __thiscall
dna::FakeDNAReader::getVertexLayoutPositionIndices
          (FakeDNAReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,ushort param_1
          )

{
  __return_storage_ptr__->ptr = (uint *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexLayoutTextureCoordinateIndices @ 14c30ef30

ArrayView<unsigned_int_const_> * __thiscall
dna::FakeDNAReader::getVertexLayoutTextureCoordinateIndices
          (FakeDNAReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,ushort param_1
          )

{
  __return_storage_ptr__->ptr = (uint *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexNormal @ 14c30ef50

Vector3 * __thiscall
dna::FakeDNAReader::getVertexNormal
          (FakeDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1,uint param_2)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

// getVertexNormalCount @ 14c30ef70

uint __thiscall dna::FakeDNAReader::getVertexNormalCount(FakeDNAReader *this,ushort param_1)

{
  return 0;
}

// getVertexNormalXs @ 14c30ef80

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getVertexNormalXs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexNormalYs @ 14c30efa0

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getVertexNormalYs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexNormalZs @ 14c30efc0

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getVertexNormalZs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexPosition @ 14c30efe0

Vector3 * __thiscall
dna::FakeDNAReader::getVertexPosition
          (FakeDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1,uint param_2)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

// getVertexPositionCount @ 14c30f000

uint __thiscall dna::FakeDNAReader::getVertexPositionCount(FakeDNAReader *this,ushort param_1)

{
  return 0;
}

// getVertexPositionXs @ 14c30f010

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getVertexPositionXs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexPositionYs @ 14c30f030

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getVertexPositionYs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexPositionZs @ 14c30f050

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getVertexPositionZs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexTextureCoordinate @ 14c30f070

TextureCoordinate __thiscall
dna::FakeDNAReader::getVertexTextureCoordinate(FakeDNAReader *this,ushort param_1,uint param_2)

{
  TextureCoordinate TVar1;
  undefined6 in_register_00000012;
  
  *(undefined8 *)CONCAT62(in_register_00000012,param_1) = 0;
  TVar1._2_6_ = in_register_00000012;
  TVar1.u._0_2_ = param_1;
  return TVar1;
}

// getVertexTextureCoordinateCount @ 14c30f080

uint __thiscall
dna::FakeDNAReader::getVertexTextureCoordinateCount(FakeDNAReader *this,ushort param_1)

{
  return 0;
}

// getVertexTextureCoordinateUs @ 14c30f090

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getVertexTextureCoordinateUs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// getVertexTextureCoordinateVs @ 14c30f0b0

ArrayView<float_const_> * __thiscall
dna::FakeDNAReader::getVertexTextureCoordinateVs
          (FakeDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  __return_storage_ptr__->ptr = (float *)0x0;
  __return_storage_ptr__->sz = 0;
  return __return_storage_ptr__;
}

// unload @ 14c30f0d0

void __thiscall dna::FakeDNAReader::unload(FakeDNAReader *this,DataLayer param_1)

{
  return;
}

