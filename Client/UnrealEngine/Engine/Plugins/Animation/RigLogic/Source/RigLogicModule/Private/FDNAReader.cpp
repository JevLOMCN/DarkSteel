// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 454

// FDNAReader<dna::BinaryStreamReader> @ 14a65fdd0

FDNAReader<dna::BinaryStreamReader> * __thiscall
FDNAReader<dna::BinaryStreamReader>::FDNAReader<dna::BinaryStreamReader>
          (FDNAReader<dna::BinaryStreamReader> *this,BinaryStreamReader *param_1)

{
  int iVar1;
  int in_R8D;
  
  if (in_R8D != 0) {
    *(undefined1 **)&this->field_0x8 = &_vbtable__for__IRBFBehaviorReader__;
    *(undefined8 **)&this->field_0x18 = &_vbtable__for__IGeometryReader__;
    *(undefined8 **)&this->field_0x28 = &_vbtable__for__IMachineLearnedBehaviorReader__;
    *(undefined8 **)&this->field_0x38 = &_vbtable__for__IJointBehaviorMetadataReader__;
    *(undefined8 **)&this->field_0x48 = &_vbtable__for__ITwistSwingBehaviorReader__;
    *(undefined1 **)&this->field_0x88 = &_vbtable__for__IBehaviorReader__;
    *(undefined ***)&this->field_0x70 = &___7IDefinitionReader__6B_;
    *(undefined ***)&this->field_0x80 = &IBehaviorReader::_vftable__for__IBehaviorReader__;
    *(undefined ***)(&this->field_0x88 + *(int *)(*(longlong *)&this->field_0x88 + 4)) =
         &IBehaviorReader::_vftable__for__IDefinitionReader__;
  }
  IDNAReader::IDNAReader((IDNAReader *)this);
  *(undefined ***)this = &___7__FDNAReader_VBinaryStreamReader_dna____6B_;
  *(undefined ***)&this->field_0x10 = &_vftable__for__IGeometryReader__;
  *(undefined ***)&this->field_0x20 = &_vftable__for__IMachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IJointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__ITwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__IDefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &_vftable__for__IBehaviorReader__;
  iVar1 = *(int *)(*(longlong *)&this->field_0x8 + 4);
  *(int *)(&this->field_0x4 + iVar1) = iVar1 + -0x68;
  iVar1 = *(int *)(*(longlong *)&this->field_0x8 + 8);
  *(int *)(&this->field_0x4 + iVar1) = iVar1 + -0x78;
  FMemoryResource::SharedInstance(&this->MemoryResource);
  (this->ReaderPtr).Ptr = param_1;
  return this;
}

// FDNAReader<RigLogicDNAReader> @ 14a65ff10

FDNAReader<RigLogicDNAReader> * __thiscall
FDNAReader<RigLogicDNAReader>::FDNAReader<RigLogicDNAReader>
          (FDNAReader<RigLogicDNAReader> *this,RigLogicDNAReader *param_1)

{
  int iVar1;
  int in_R8D;
  
  if (in_R8D != 0) {
    *(undefined1 **)&this->field_0x8 = &_vbtable__for__IRBFBehaviorReader__;
    *(undefined8 **)&this->field_0x18 = &_vbtable__for__IGeometryReader__;
    *(undefined8 **)&this->field_0x28 = &_vbtable__for__IMachineLearnedBehaviorReader__;
    *(undefined8 **)&this->field_0x38 = &_vbtable__for__IJointBehaviorMetadataReader__;
    *(undefined8 **)&this->field_0x48 = &_vbtable__for__ITwistSwingBehaviorReader__;
    *(undefined1 **)&this->field_0x88 = &_vbtable__for__IBehaviorReader__;
    *(undefined ***)&this->field_0x70 = &___7IDefinitionReader__6B_;
    *(undefined ***)&this->field_0x80 = &IBehaviorReader::_vftable__for__IBehaviorReader__;
    *(undefined ***)(&this->field_0x88 + *(int *)(*(longlong *)&this->field_0x88 + 4)) =
         &IBehaviorReader::_vftable__for__IDefinitionReader__;
  }
  IDNAReader::IDNAReader((IDNAReader *)this);
  *(undefined ***)this = &___7__FDNAReader_VRigLogicDNAReader____6B_;
  *(undefined ***)&this->field_0x10 = &_vftable__for__IGeometryReader__;
  *(undefined ***)&this->field_0x20 = &_vftable__for__IMachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IJointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__ITwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__IDefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &_vftable__for__IBehaviorReader__;
  iVar1 = *(int *)(*(longlong *)&this->field_0x8 + 4);
  *(int *)(&this->field_0x4 + iVar1) = iVar1 + -0x68;
  iVar1 = *(int *)(*(longlong *)&this->field_0x8 + 8);
  *(int *)(&this->field_0x4 + iVar1) = iVar1 + -0x78;
  FMemoryResource::SharedInstance(&this->MemoryResource);
  (this->ReaderPtr).Ptr = param_1;
  return this;
}

// GetAge`vtordisp{4294967292,0}' @ 14a66c2a0

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAge`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAge_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetAge((FDNAReader<dna::BinaryStreamReader> *)
                 ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetAge @ 14a66c2c0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAge(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66c2d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x30))();
  return uVar1;
}

// GetAge`vtordisp{4294967292,0}' @ 14a66c2e0

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAge`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetAge_vtordisp_4294967292_0__(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetAge((FDNAReader<RigLogicDNAReader> *)
                 ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetAge @ 14a66c300

ushort __thiscall FDNAReader<RigLogicDNAReader>::GetAge(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66c316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x30))();
  return uVar1;
}

// GetAnimatedMapCount`vtordisp{4294967292,0}' @ 14a66c3ac

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAnimatedMapCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetAnimatedMapCount((FDNAReader<dna::BinaryStreamReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetAnimatedMapCount @ 14a66c3c0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66c3d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0xf0))();
  return uVar1;
}

// GetAnimatedMapCount`vtordisp{4294967292,0}' @ 14a66c3e4

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAnimatedMapCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetAnimatedMapCount((FDNAReader<RigLogicDNAReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetAnimatedMapCount @ 14a66c400

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66c416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0xf0))();
  return uVar1;
}

// GetAnimatedMapCutValues`vtordisp{4294967292,0}' @ 14a66c4ac

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAnimatedMapCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapCutValues_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapCutValues
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapCutValues @ 14a66c4c0

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapCutValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xe0))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapCutValues`vtordisp{4294967292,0}' @ 14a66c534

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAnimatedMapCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapCutValues_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapCutValues
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapCutValues @ 14a66c550

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapCutValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xe0))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapFromValues`vtordisp{4294967292,0}' @ 14a66c664

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAnimatedMapFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapFromValues_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapFromValues
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapFromValues @ 14a66c680

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapFromValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 200))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapFromValues`vtordisp{4294967292,0}' @ 14a66c6f4

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAnimatedMapFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapFromValues_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapFromValues
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapFromValues @ 14a66c710

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapFromValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 200))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapIndexListCount`vtordisp{4294967292,0}' @ 14a66c824

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAnimatedMapIndexListCount`vtordisp{4294967292,0}' (void)const
   __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapIndexListCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetAnimatedMapIndexListCount
                    ((FDNAReader<dna::BinaryStreamReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetAnimatedMapIndexListCount @ 14a66c840

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapIndexListCount
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66c856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x100))();
  return uVar1;
}

// GetAnimatedMapIndexListCount`vtordisp{4294967292,0}' @ 14a66c864

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAnimatedMapIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapIndexListCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetAnimatedMapIndexListCount
                    ((FDNAReader<RigLogicDNAReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetAnimatedMapIndexListCount @ 14a66c880

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapIndexListCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66c896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x100))();
  return uVar1;
}

// GetAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' @ 14a66c92c

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapIndicesForLOD_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapIndicesForLOD
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetAnimatedMapIndicesForLOD @ 14a66c940

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapIndicesForLOD
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar4 + 0x108))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' @ 14a66c9b4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapIndicesForLOD_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapIndicesForLOD
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetAnimatedMapIndicesForLOD @ 14a66c9d0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapIndicesForLOD
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar4 + 0x108))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapInputIndices`vtordisp{4294967292,0}' @ 14a66cbc4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAnimatedMapInputIndices`vtordisp{4294967292,0}' (void)const __ptr64
    */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapInputIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapInputIndices
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapInputIndices @ 14a66cbe0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapInputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xb8))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapInputIndices`vtordisp{4294967292,0}' @ 14a66cc54

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAnimatedMapInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapInputIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapInputIndices
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapInputIndices @ 14a66cc70

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapInputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xb8))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapLODs`vtordisp{4294967292,0}' @ 14a66cd84

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAnimatedMapLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapLODs_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapLODs((FDNAReader<dna::BinaryStreamReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                              __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapLODs @ 14a66cda0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapLODs
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xb0))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapLODs`vtordisp{4294967292,0}' @ 14a66ce14

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAnimatedMapLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapLODs_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapLODs((FDNAReader<RigLogicDNAReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                              __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapLODs @ 14a66ce30

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapLODs
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xb0))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapName`vtordisp{4294967292,0}' @ 14a66cf44

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAnimatedMapName`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapName_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetAnimatedMapName((FDNAReader<dna::BinaryStreamReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                              __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetAnimatedMapName @ 14a66cf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0xf8))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapName`vtordisp{4294967292,0}' @ 14a66d030

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAnimatedMapName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapName_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetAnimatedMapName((FDNAReader<RigLogicDNAReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                              __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetAnimatedMapName @ 14a66d050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0xf8))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapOutputIndices`vtordisp{4294967292,0}' @ 14a66d250

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAnimatedMapOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64
    */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapOutputIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapOutputIndices
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapOutputIndices @ 14a66d270

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapOutputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xc0))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapOutputIndices`vtordisp{4294967292,0}' @ 14a66d2e4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAnimatedMapOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapOutputIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapOutputIndices
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapOutputIndices @ 14a66d300

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapOutputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xc0))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapSlopeValues`vtordisp{4294967292,0}' @ 14a66d484

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAnimatedMapSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64
    */

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapSlopeValues_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapSlopeValues
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapSlopeValues @ 14a66d4a0

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapSlopeValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xd8))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapSlopeValues`vtordisp{4294967292,0}' @ 14a66d514

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAnimatedMapSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapSlopeValues_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapSlopeValues
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapSlopeValues @ 14a66d530

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapSlopeValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xd8))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapToValues`vtordisp{4294967292,0}' @ 14a66d644

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetAnimatedMapToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapToValues_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapToValues
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapToValues @ 14a66d660

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetAnimatedMapToValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapToValues`vtordisp{4294967292,0}' @ 14a66d6d4

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetAnimatedMapToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapToValues_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapToValues
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapToValues @ 14a66d6f0

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetAnimatedMapToValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetArchetype`vtordisp{4294967292,0}' @ 14a66d804

/* [thunk]:public: virtual enum EArchetype __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetArchetype`vtordisp{4294967292,0}' (void)const __ptr64 */

EArchetype __thiscall
FDNAReader<dna::BinaryStreamReader>::GetArchetype_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  EArchetype EVar1;
  
  EVar1 = GetArchetype((FDNAReader<dna::BinaryStreamReader> *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return EVar1;
}

// GetArchetype @ 14a66d820

EArchetype __thiscall
FDNAReader<dna::BinaryStreamReader>::GetArchetype(FDNAReader<dna::BinaryStreamReader> *this)

{
  EArchetype EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66d836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x20))();
  return EVar1;
}

// GetArchetype`vtordisp{4294967292,0}' @ 14a66d840

/* [thunk]:public: virtual enum EArchetype __cdecl FDNAReader<class
   RigLogicDNAReader>::GetArchetype`vtordisp{4294967292,0}' (void)const __ptr64 */

EArchetype __thiscall
FDNAReader<RigLogicDNAReader>::GetArchetype_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  EArchetype EVar1;
  
  EVar1 = GetArchetype((FDNAReader<RigLogicDNAReader> *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return EVar1;
}

// GetArchetype @ 14a66d860

EArchetype __thiscall
FDNAReader<RigLogicDNAReader>::GetArchetype(FDNAReader<RigLogicDNAReader> *this)

{
  EArchetype EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66d876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x20))();
  return EVar1;
}

// GetBlendShapeChannelCount`vtordisp{4294967292,0}' @ 14a66d9a8

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetBlendShapeChannelCount`vtordisp{4294967292,0}' (void)const __ptr64
    */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetBlendShapeChannelCount
                    ((FDNAReader<dna::BinaryStreamReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetBlendShapeChannelCount @ 14a66d9c0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelCount
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66d9d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0xd0))();
  return uVar1;
}

// GetBlendShapeChannelCount`vtordisp{4294967292,0}' @ 14a66d9e4

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetBlendShapeChannelCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetBlendShapeChannelCount
                    ((FDNAReader<RigLogicDNAReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetBlendShapeChannelCount @ 14a66da00

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66da16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0xd0))();
  return uVar1;
}

// GetBlendShapeChannelIndex @ 14a66dab0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelIndex
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1,ushort param_2)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66dabb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0xd0))();
  return uVar1;
}

// GetBlendShapeChannelIndex @ 14a66dad0

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelIndex
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1,ushort param_2)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66dadb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0xd0))();
  return uVar1;
}

// GetBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' @ 14a66db2c

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' (void)const
   __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelIndexListCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetBlendShapeChannelIndexListCount
                    ((FDNAReader<dna::BinaryStreamReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetBlendShapeChannelIndexListCount @ 14a66db40

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelIndexListCount
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66db56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0xe0))();
  return uVar1;
}

// GetBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' @ 14a66db64

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' (void)const
   __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelIndexListCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetBlendShapeChannelIndexListCount
                    ((FDNAReader<RigLogicDNAReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetBlendShapeChannelIndexListCount @ 14a66db80

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelIndexListCount
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66db96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0xe0))();
  return uVar1;
}

// GetBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' @ 14a66dc2c

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelIndicesForLOD_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelIndicesForLOD
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetBlendShapeChannelIndicesForLOD @ 14a66dc40

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelIndicesForLOD
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar4 + 0xe8))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' @ 14a66dcb4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelIndicesForLOD_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelIndicesForLOD
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetBlendShapeChannelIndicesForLOD @ 14a66dcd0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelIndicesForLOD
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar4 + 0xe8))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeChannelInputIndices`vtordisp{4294967292,0}' @ 14a66dec4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetBlendShapeChannelInputIndices`vtordisp{4294967292,0}' (void)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelInputIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelInputIndices
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetBlendShapeChannelInputIndices @ 14a66dee0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelInputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xa0))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeChannelInputIndices`vtordisp{4294967292,0}' @ 14a66df54

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetBlendShapeChannelInputIndices`vtordisp{4294967292,0}' (void)const __ptr64
    */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelInputIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelInputIndices
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetBlendShapeChannelInputIndices @ 14a66df70

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelInputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xa0))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeChannelLODs`vtordisp{4294967292,0}' @ 14a66e084

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetBlendShapeChannelLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelLODs_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelLODs
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetBlendShapeChannelLODs @ 14a66e0a0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelLODs
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x98))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeChannelLODs`vtordisp{4294967292,0}' @ 14a66e114

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetBlendShapeChannelLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelLODs_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelLODs
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetBlendShapeChannelLODs @ 14a66e130

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelLODs
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x98))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeChannelName`vtordisp{4294967292,0}' @ 14a66e244

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetBlendShapeChannelName`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelName_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetBlendShapeChannelName
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetBlendShapeChannelName @ 14a66e260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0xd8))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetBlendShapeChannelName`vtordisp{4294967292,0}' @ 14a66e330

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   RigLogicDNAReader>::GetBlendShapeChannelName`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelName_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetBlendShapeChannelName
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetBlendShapeChannelName @ 14a66e350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0xd8))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' @ 14a66e554

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' (void)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelOutputIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelOutputIndices
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetBlendShapeChannelOutputIndices @ 14a66e570

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeChannelOutputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' @ 14a66e5e4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64
    */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelOutputIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelOutputIndices
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetBlendShapeChannelOutputIndices @ 14a66e600

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeChannelOutputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeTargetCount @ 14a66e790

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeTargetCount
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66e79b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 200))();
  return uVar1;
}

// GetBlendShapeTargetCount @ 14a66e7b0

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeTargetCount
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66e7bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 200))();
  return uVar1;
}

// GetBlendShapeTargetDelta @ 14a66e810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeTargetDelta
          (FDNAReader<dna::BinaryStreamReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1,ushort param_2,uint param_3)

{
  FMemoryResource *pFVar1;
  undefined1 auStack_58 [32];
  uint local_38;
  float local_28;
  float local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = (this->MemoryResource).Object + 2;
  local_38 = param_3;
  (**(code **)((longlong)*pFVar1 + 0xe0))(pFVar1,&local_28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_24;
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDelta @ 14a66e8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeTargetDelta
          (FDNAReader<RigLogicDNAReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1,ushort param_2,uint param_3)

{
  FMemoryResource *pFVar1;
  undefined1 auStack_58 [32];
  uint local_38;
  float local_28;
  float local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = (this->MemoryResource).Object + 2;
  local_38 = param_3;
  (**(code **)((longlong)*pFVar1 + 0xe0))(pFVar1,&local_28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_24;
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaCount @ 14a66e9a0

uint __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeTargetDeltaCount
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1,ushort param_2)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66e9ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0xd8))();
  return uVar1;
}

// GetBlendShapeTargetDeltaCount @ 14a66e9c0

uint __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeTargetDeltaCount
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1,ushort param_2)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66e9cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0xd8))();
  return uVar1;
}

// GetBlendShapeTargetDeltaXs @ 14a66ea20

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeTargetDeltaXs
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xe8))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaXs @ 14a66ea90

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeTargetDeltaXs
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xe8))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaYs @ 14a66eb60

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeTargetDeltaYs
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xf8))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaYs @ 14a66ebd0

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeTargetDeltaYs
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xf8))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaZs @ 14a66eca0

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeTargetDeltaZs
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xf0))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaZs @ 14a66ed10

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeTargetDeltaZs
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xf0))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeTargetVertexIndices @ 14a66ede0

TArrayView<unsigned_int_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetBlendShapeTargetVertexIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_int_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  uint *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0x100))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_int_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeTargetVertexIndices @ 14a66ee50

TArrayView<unsigned_int_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetBlendShapeTargetVertexIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_int_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  uint *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0x100))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_int_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetCoordinateSystem`vtordisp{4294967292,0}' @ 14a66ef2c

/* [thunk]:public: virtual struct FCoordinateSystem __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetCoordinateSystem`vtordisp{4294967292,0}' (void)const __ptr64 */

FCoordinateSystem * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetCoordinateSystem_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FCoordinateSystem *__return_storage_ptr__)

{
  FCoordinateSystem FVar1;
  undefined5 extraout_var;
  
  FVar1 = GetCoordinateSystem((FDNAReader<dna::BinaryStreamReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return (FCoordinateSystem *)CONCAT53(extraout_var,FVar1);
}

// GetCoordinateSystem @ 14a66ef40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCoordinateSystem __thiscall
FDNAReader<dna::BinaryStreamReader>::GetCoordinateSystem(FDNAReader<dna::BinaryStreamReader> *this)

{
  longlong *plVar1;
  undefined1 *in_RDX;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined1 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)
           (*(longlong *)&this[-1].field_0x80 + 8 +
           (longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4));
  (**(code **)(*plVar1 + 0x60))(plVar1,local_28);
  *in_RDX = local_28[0];
  in_RDX[1] = local_24;
  in_RDX[2] = local_20;
  return SUB83(in_RDX,0);
}

// GetCoordinateSystem`vtordisp{4294967292,0}' @ 14a66efb0

/* [thunk]:public: virtual struct FCoordinateSystem __cdecl FDNAReader<class
   RigLogicDNAReader>::GetCoordinateSystem`vtordisp{4294967292,0}' (void)const __ptr64 */

FCoordinateSystem * __thiscall
FDNAReader<RigLogicDNAReader>::GetCoordinateSystem_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FCoordinateSystem *__return_storage_ptr__)

{
  FCoordinateSystem FVar1;
  undefined5 extraout_var;
  
  FVar1 = GetCoordinateSystem((FDNAReader<RigLogicDNAReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return (FCoordinateSystem *)CONCAT53(extraout_var,FVar1);
}

// GetCoordinateSystem @ 14a66efd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCoordinateSystem __thiscall
FDNAReader<RigLogicDNAReader>::GetCoordinateSystem(FDNAReader<RigLogicDNAReader> *this)

{
  longlong *plVar1;
  undefined1 *in_RDX;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined1 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)
           (*(longlong *)&this[-1].field_0x80 + 8 +
           (longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4));
  (**(code **)(*plVar1 + 0x60))(plVar1,local_28);
  *in_RDX = local_28[0];
  in_RDX[1] = local_24;
  in_RDX[2] = local_20;
  return SUB83(in_RDX,0);
}

// GetDBComplexity`vtordisp{4294967292,0}' @ 14a66f0e4

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetDBComplexity`vtordisp{4294967292,0}' (void)const __ptr64 */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetDBComplexity_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = GetDBComplexity((FDNAReader<dna::BinaryStreamReader> *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                           __return_storage_ptr__);
  return pFVar1;
}

// GetDBComplexity @ 14a66f100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetDBComplexity
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  undefined1 auStack_168 [48];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)
                         ((longlong)
                          *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                         *(longlong *)&this[-1].field_0x80 + 8) + 0x78))();
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetDBComplexity`vtordisp{4294967292,0}' @ 14a66f1d0

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   RigLogicDNAReader>::GetDBComplexity`vtordisp{4294967292,0}' (void)const __ptr64 */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetDBComplexity_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = GetDBComplexity((FDNAReader<RigLogicDNAReader> *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                           __return_storage_ptr__);
  return pFVar1;
}

// GetDBComplexity @ 14a66f1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetDBComplexity
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  undefined1 auStack_168 [48];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)
                         ((longlong)
                          *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                         *(longlong *)&this[-1].field_0x80 + 8) + 0x78))();
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetDBMaxLOD`vtordisp{4294967292,0}' @ 14a66f364

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetDBMaxLOD`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetDBMaxLOD_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetDBMaxLOD((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetDBMaxLOD @ 14a66f380

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetDBMaxLOD(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66f396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x70))();
  return uVar1;
}

// GetDBMaxLOD`vtordisp{4294967292,0}' @ 14a66f3a0

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetDBMaxLOD`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetDBMaxLOD_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetDBMaxLOD((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetDBMaxLOD @ 14a66f3c0

ushort __thiscall FDNAReader<RigLogicDNAReader>::GetDBMaxLOD(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a66f3d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x70))();
  return uVar1;
}

// GetDBName`vtordisp{4294967292,0}' @ 14a66f46c

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetDBName`vtordisp{4294967292,0}' (void)const __ptr64 */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetDBName_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = GetDBName((FDNAReader<dna::BinaryStreamReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                     __return_storage_ptr__);
  return pFVar1;
}

// GetDBName @ 14a66f480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetDBName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  undefined1 auStack_168 [48];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)
                         ((longlong)
                          *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                         *(longlong *)&this[-1].field_0x80 + 8) + 0x80))();
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetDBName`vtordisp{4294967292,0}' @ 14a66f550

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   RigLogicDNAReader>::GetDBName`vtordisp{4294967292,0}' (void)const __ptr64 */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetDBName_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = GetDBName((FDNAReader<RigLogicDNAReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                     __return_storage_ptr__);
  return pFVar1;
}

// GetDBName @ 14a66f570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetDBName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  undefined1 auStack_168 [48];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)
                         ((longlong)
                          *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                         *(longlong *)&this[-1].field_0x80 + 8) + 0x80))();
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetFaceCount @ 14a670020

uint __thiscall
FDNAReader<dna::BinaryStreamReader>::GetFaceCount
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67002b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0x98))();
  return uVar1;
}

// GetFaceCount @ 14a670040

uint __thiscall
FDNAReader<RigLogicDNAReader>::GetFaceCount(FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67004b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0x98))();
  return uVar1;
}

// GetFaceVertexLayoutIndices @ 14a670090

TArrayView<unsigned_int_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetFaceVertexLayoutIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,ushort param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_int_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined4 in_register_0000008c;
  uint *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xa0))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT44(in_register_0000008c,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_int_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetFaceVertexLayoutIndices @ 14a670100

TArrayView<unsigned_int_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetFaceVertexLayoutIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,ushort param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_int_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined4 in_register_0000008c;
  uint *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xa0))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT44(in_register_0000008c,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_int_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetFileFormatGeneration`vtordisp{4294967292,0}' @ 14a6701c4

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetFileFormatGeneration`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetFileFormatGeneration_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetFileFormatGeneration
                    ((FDNAReader<dna::BinaryStreamReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetFileFormatGeneration @ 14a6701e0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetFileFormatGeneration
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6701f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 8))();
  return uVar1;
}

// GetFileFormatGeneration`vtordisp{4294967292,0}' @ 14a670200

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetFileFormatGeneration`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetFileFormatGeneration_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetFileFormatGeneration
                    ((FDNAReader<RigLogicDNAReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetFileFormatGeneration @ 14a670220

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetFileFormatGeneration(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a670236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 8))();
  return uVar1;
}

// GetFileFormatVersion`vtordisp{4294967292,0}' @ 14a6702cc

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetFileFormatVersion`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetFileFormatVersion_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetFileFormatVersion
                    ((FDNAReader<dna::BinaryStreamReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetFileFormatVersion @ 14a6702e0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetFileFormatVersion(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6702f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x10))();
  return uVar1;
}

// GetFileFormatVersion`vtordisp{4294967292,0}' @ 14a670300

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetFileFormatVersion`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetFileFormatVersion_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetFileFormatVersion
                    ((FDNAReader<RigLogicDNAReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetFileFormatVersion @ 14a670320

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetFileFormatVersion(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a670336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x10))();
  return uVar1;
}

// GetGUIControlCount`vtordisp{4294967292,0}' @ 14a6703e4

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetGUIControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIControlCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetGUIControlCount((FDNAReader<dna::BinaryStreamReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetGUIControlCount @ 14a670400

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIControlCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a670416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x88))();
  return uVar1;
}

// GetGUIControlCount`vtordisp{4294967292,0}' @ 14a670424

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetGUIControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIControlCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetGUIControlCount((FDNAReader<RigLogicDNAReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetGUIControlCount @ 14a670440

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIControlCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a670456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x88))();
  return uVar1;
}

// GetGUIControlName`vtordisp{4294967292,0}' @ 14a67050c

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetGUIControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIControlName_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetGUIControlName((FDNAReader<dna::BinaryStreamReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                             __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetGUIControlName @ 14a670520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIControlName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0x90))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetGUIControlName`vtordisp{4294967292,0}' @ 14a6705f0

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   RigLogicDNAReader>::GetGUIControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIControlName_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetGUIControlName((FDNAReader<RigLogicDNAReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                             __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetGUIControlName @ 14a670610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIControlName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0x90))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetGUIToRawCutValues`vtordisp{4294967292,0}' @ 14a670814

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetGUIToRawCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawCutValues_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawCutValues
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawCutValues @ 14a670830

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawCutValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIToRawCutValues`vtordisp{4294967292,0}' @ 14a6708a0

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetGUIToRawCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawCutValues_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawCutValues
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawCutValues @ 14a6708c0

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawCutValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIToRawFromValues`vtordisp{4294967292,0}' @ 14a6709d4

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetGUIToRawFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawFromValues_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawFromValues
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawFromValues @ 14a6709f0

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawFromValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIToRawFromValues`vtordisp{4294967292,0}' @ 14a670a60

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetGUIToRawFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawFromValues_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawFromValues
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawFromValues @ 14a670a80

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawFromValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIToRawInputIndices`vtordisp{4294967292,0}' @ 14a670b94

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetGUIToRawInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawInputIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawInputIndices
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawInputIndices @ 14a670bb0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawInputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  undefined8 *puVar4;
  ushort *local_18;
  int local_10;
  
  puVar4 = (undefined8 *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)*puVar4)(puVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIToRawInputIndices`vtordisp{4294967292,0}' @ 14a670c20

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetGUIToRawInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawInputIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawInputIndices
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawInputIndices @ 14a670c40

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawInputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  undefined8 *puVar4;
  ushort *local_18;
  int local_10;
  
  puVar4 = (undefined8 *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)*puVar4)(puVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIToRawOutputIndices`vtordisp{4294967292,0}' @ 14a670d54

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetGUIToRawOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawOutputIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawOutputIndices
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawOutputIndices @ 14a670d70

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawOutputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 8))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIToRawOutputIndices`vtordisp{4294967292,0}' @ 14a670de0

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetGUIToRawOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawOutputIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawOutputIndices
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawOutputIndices @ 14a670e00

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawOutputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 8))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIToRawSlopeValues`vtordisp{4294967292,0}' @ 14a670f14

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetGUIToRawSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawSlopeValues_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawSlopeValues
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawSlopeValues @ 14a670f30

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawSlopeValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIToRawSlopeValues`vtordisp{4294967292,0}' @ 14a670fa0

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetGUIToRawSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawSlopeValues_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawSlopeValues
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawSlopeValues @ 14a670fc0

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawSlopeValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIToRawToValues`vtordisp{4294967292,0}' @ 14a6710d4

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetGUIToRawToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawToValues_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawToValues((FDNAReader<dna::BinaryStreamReader> *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                               __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawToValues @ 14a6710f0

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGUIToRawToValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIToRawToValues`vtordisp{4294967292,0}' @ 14a671160

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetGUIToRawToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawToValues_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawToValues((FDNAReader<RigLogicDNAReader> *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                               __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawToValues @ 14a671180

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetGUIToRawToValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetGender`vtordisp{4294967292,0}' @ 14a671294

/* [thunk]:public: virtual enum EGender __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetGender`vtordisp{4294967292,0}' (void)const __ptr64 */

EGender __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGender_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  EGender EVar1;
  
  EVar1 = GetGender((FDNAReader<dna::BinaryStreamReader> *)
                    ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return EVar1;
}

// GetGender @ 14a6712b0

EGender __thiscall
FDNAReader<dna::BinaryStreamReader>::GetGender(FDNAReader<dna::BinaryStreamReader> *this)

{
  EGender EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6712c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x28))();
  return EVar1;
}

// GetGender`vtordisp{4294967292,0}' @ 14a6712d0

/* [thunk]:public: virtual enum EGender __cdecl FDNAReader<class
   RigLogicDNAReader>::GetGender`vtordisp{4294967292,0}' (void)const __ptr64 */

EGender __thiscall
FDNAReader<RigLogicDNAReader>::GetGender_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  EGender EVar1;
  
  EVar1 = GetGender((FDNAReader<RigLogicDNAReader> *)
                    ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return EVar1;
}

// GetGender @ 14a6712f0

EGender __thiscall FDNAReader<RigLogicDNAReader>::GetGender(FDNAReader<RigLogicDNAReader> *this)

{
  EGender EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a671306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x28))();
  return EVar1;
}

// GetJointColumnCount`vtordisp{4294967292,0}' @ 14a67139c

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointColumnCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointColumnCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetJointColumnCount((FDNAReader<dna::BinaryStreamReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetJointColumnCount @ 14a6713b0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointColumnCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6713c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x58))();
  return uVar1;
}

// GetJointColumnCount`vtordisp{4294967292,0}' @ 14a6713d0

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointColumnCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetJointColumnCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetJointColumnCount((FDNAReader<RigLogicDNAReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetJointColumnCount @ 14a6713f0

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetJointColumnCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a671406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x58))();
  return uVar1;
}

// GetJointCount`vtordisp{4294967292,0}' @ 14a67149c

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetJointCount((FDNAReader<dna::BinaryStreamReader> *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetJointCount @ 14a6714b0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6714c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0xa8))();
  return uVar1;
}

// GetJointCount`vtordisp{4294967292,0}' @ 14a6714d4

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetJointCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetJointCount((FDNAReader<RigLogicDNAReader> *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetJointCount @ 14a6714f0

ushort __thiscall FDNAReader<RigLogicDNAReader>::GetJointCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a671506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0xa8))();
  return uVar1;
}

// GetJointGroupCount`vtordisp{4294967292,0}' @ 14a6715a0

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointGroupCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetJointGroupCount((FDNAReader<dna::BinaryStreamReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetJointGroupCount @ 14a6715c0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6715d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x68))();
  return uVar1;
}

// GetJointGroupCount`vtordisp{4294967292,0}' @ 14a6715e0

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointGroupCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetJointGroupCount((FDNAReader<RigLogicDNAReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetJointGroupCount @ 14a671600

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a671616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x68))();
  return uVar1;
}

// GetJointGroupInputIndices`vtordisp{4294967292,0}' @ 14a6716bc

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointGroupInputIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupInputIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupInputIndices
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupInputIndices @ 14a6716d0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupInputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x78))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointGroupInputIndices`vtordisp{4294967292,0}' @ 14a671740

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointGroupInputIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupInputIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupInputIndices
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupInputIndices @ 14a671760

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupInputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x78))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointGroupJointIndices`vtordisp{4294967292,0}' @ 14a671884

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointGroupJointIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupJointIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupJointIndices
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupJointIndices @ 14a6718a0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupJointIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x90))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointGroupJointIndices`vtordisp{4294967292,0}' @ 14a671914

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointGroupJointIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupJointIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupJointIndices
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupJointIndices @ 14a671930

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupJointIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x90))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointGroupLODs`vtordisp{4294967292,0}' @ 14a671a64

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointGroupLODs`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupLODs_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupLODs((FDNAReader<dna::BinaryStreamReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                             __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupLODs @ 14a671a80

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupLODs
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointGroupLODs`vtordisp{4294967292,0}' @ 14a671af0

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointGroupLODs`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupLODs_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupLODs((FDNAReader<RigLogicDNAReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                             __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupLODs @ 14a671b10

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupLODs
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointGroupOutputIndices`vtordisp{4294967292,0}' @ 14a671c34

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointGroupOutputIndices`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupOutputIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupOutputIndices
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupOutputIndices @ 14a671c50

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupOutputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x80))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointGroupOutputIndices`vtordisp{4294967292,0}' @ 14a671cc4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointGroupOutputIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupOutputIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupOutputIndices
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupOutputIndices @ 14a671ce0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupOutputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x80))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointGroupValues`vtordisp{4294967292,0}' @ 14a671e14

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointGroupValues`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupValues_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupValues((FDNAReader<dna::BinaryStreamReader> *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                               __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupValues @ 14a671e30

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointGroupValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x88))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointGroupValues`vtordisp{4294967292,0}' @ 14a671ea4

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointGroupValues`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupValues_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupValues((FDNAReader<RigLogicDNAReader> *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                               __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupValues @ 14a671ec0

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointGroupValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x88))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointIndexListCount`vtordisp{4294967292,0}' @ 14a671ff4

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointIndexListCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetJointIndexListCount
                    ((FDNAReader<dna::BinaryStreamReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetJointIndexListCount @ 14a672010

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointIndexListCount
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0xb8))();
  return uVar1;
}

// GetJointIndexListCount`vtordisp{4294967292,0}' @ 14a672034

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetJointIndexListCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetJointIndexListCount
                    ((FDNAReader<RigLogicDNAReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetJointIndexListCount @ 14a672050

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetJointIndexListCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0xb8))();
  return uVar1;
}

// GetJointIndicesForLOD`vtordisp{4294967292,0}' @ 14a6720fc

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointIndicesForLOD_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointIndicesForLOD
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointIndicesForLOD @ 14a672110

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointIndicesForLOD
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar4 + 0xc0))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointIndicesForLOD`vtordisp{4294967292,0}' @ 14a672184

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointIndicesForLOD_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointIndicesForLOD
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointIndicesForLOD @ 14a6721a0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointIndicesForLOD
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar4 + 0xc0))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointName`vtordisp{4294967292,0}' @ 14a6723a0

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointName_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetJointName((FDNAReader<dna::BinaryStreamReader> *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                        __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetJointName @ 14a6723c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0xb0))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetJointName`vtordisp{4294967292,0}' @ 14a672490

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointName_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetJointName((FDNAReader<RigLogicDNAReader> *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                        __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetJointName @ 14a6724b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0xb0))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetJointParentIndex`vtordisp{4294967292,0}' @ 14a672724

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointParentIndex`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointParentIndex_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ushort uVar1;
  
  uVar1 = GetJointParentIndex((FDNAReader<dna::BinaryStreamReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),param_1);
  return uVar1;
}

// GetJointParentIndex @ 14a672740

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointParentIndex
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 200))();
  return uVar1;
}

// GetJointParentIndex`vtordisp{4294967292,0}' @ 14a672764

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointParentIndex`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetJointParentIndex_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ushort uVar1;
  
  uVar1 = GetJointParentIndex((FDNAReader<RigLogicDNAReader> *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),param_1);
  return uVar1;
}

// GetJointParentIndex @ 14a672780

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetJointParentIndex
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 200))();
  return uVar1;
}

// GetJointRotationRepresentation @ 14a672840

ERotationRepresentation __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointRotationRepresentation
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ERotationRepresentation EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67284b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x30) + 8))();
  return EVar1;
}

// GetJointRotationRepresentation @ 14a672860

ERotationRepresentation __thiscall
FDNAReader<RigLogicDNAReader>::GetJointRotationRepresentation
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ERotationRepresentation EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67286b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x30) + 8))();
  return EVar1;
}

// GetJointRowCount`vtordisp{4294967292,0}' @ 14a6728ec

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointRowCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointRowCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetJointRowCount((FDNAReader<dna::BinaryStreamReader> *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetJointRowCount @ 14a672900

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointRowCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x50))();
  return uVar1;
}

// GetJointRowCount`vtordisp{4294967292,0}' @ 14a672920

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointRowCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetJointRowCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetJointRowCount((FDNAReader<RigLogicDNAReader> *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetJointRowCount @ 14a672940

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetJointRowCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x50))();
  return uVar1;
}

// GetJointScaleRepresentation @ 14a6729f0

EScaleRepresentation __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointScaleRepresentation
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  EScaleRepresentation EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6729fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x30) + 0x10))();
  return EVar1;
}

// GetJointScaleRepresentation @ 14a672a10

EScaleRepresentation __thiscall
FDNAReader<RigLogicDNAReader>::GetJointScaleRepresentation
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  EScaleRepresentation EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672a1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x30) + 0x10))();
  return EVar1;
}

// GetJointTranslationRepresentation @ 14a672aa0

ETranslationRepresentation __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointTranslationRepresentation
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ETranslationRepresentation EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672aab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x30 + 0x30))();
  return EVar1;
}

// GetJointTranslationRepresentation @ 14a672ac0

ETranslationRepresentation __thiscall
FDNAReader<RigLogicDNAReader>::GetJointTranslationRepresentation
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ETranslationRepresentation EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x30 + 0x30))();
  return EVar1;
}

// GetJointVariableAttributeIndices`vtordisp{4294967292,0}' @ 14a672b4c

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetJointVariableAttributeIndices`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointVariableAttributeIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointVariableAttributeIndices
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointVariableAttributeIndices @ 14a672b60

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetJointVariableAttributeIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetJointVariableAttributeIndices`vtordisp{4294967292,0}' @ 14a672bd0

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetJointVariableAttributeIndices`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointVariableAttributeIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointVariableAttributeIndices
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointVariableAttributeIndices @ 14a672bf0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetJointVariableAttributeIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetLODCount`vtordisp{4294967292,0}' @ 14a672d94

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetLODCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetLODCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetLODCount((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetLODCount @ 14a672db0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetLODCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x68))();
  return uVar1;
}

// GetLODCount`vtordisp{4294967292,0}' @ 14a672dd0

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetLODCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetLODCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetLODCount((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetLODCount @ 14a672df0

ushort __thiscall FDNAReader<RigLogicDNAReader>::GetLODCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x68))();
  return uVar1;
}

// GetMLControlCount @ 14a672ee0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMLControlCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672eeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x40 + 0x20))();
  return uVar1;
}

// GetMLControlCount @ 14a672f00

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetMLControlCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x40 + 0x20))();
  return uVar1;
}

// GetMLControlName @ 14a672fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMLControlName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 8))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetMLControlName @ 14a673070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetMLControlName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 8))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetMaximumInfluencePerVertex @ 14a673250

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMaximumInfluencePerVertex
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67325b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0xa8))();
  return uVar1;
}

// GetMaximumInfluencePerVertex @ 14a673270

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetMaximumInfluencePerVertex
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67327b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0xa8))();
  return uVar1;
}

// GetMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' @ 14a6732bc

/* [thunk]:public: virtual struct FMeshBlendShapeChannelMapping __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

FMeshBlendShapeChannelMapping __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshBlendShapeChannelMapping_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  FMeshBlendShapeChannelMapping FVar1;
  
  FVar1 = GetMeshBlendShapeChannelMapping
                    ((FDNAReader<dna::BinaryStreamReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),param_1);
  return FVar1;
}

// GetMeshBlendShapeChannelMapping @ 14a6732d0

FMeshBlendShapeChannelMapping __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshBlendShapeChannelMapping
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  longlong *plVar1;
  undefined6 in_register_00000012;
  FMeshBlendShapeChannelMapping FVar2;
  ushort local_res8;
  ushort local_resa;
  
  FVar2._2_6_ = in_register_00000012;
  FVar2.MeshIndex._0_2_ = param_1;
  plVar1 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar1 + 0x138))(plVar1,&local_res8);
  *(uint *)FVar2 = (uint)local_res8;
  *(uint *)((longlong)FVar2 + 4) = (uint)local_resa;
  return FVar2;
}

// GetMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' @ 14a673318

/* [thunk]:public: virtual struct FMeshBlendShapeChannelMapping __cdecl FDNAReader<class
   RigLogicDNAReader>::GetMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

FMeshBlendShapeChannelMapping __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshBlendShapeChannelMapping_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  FMeshBlendShapeChannelMapping FVar1;
  
  FVar1 = GetMeshBlendShapeChannelMapping
                    ((FDNAReader<RigLogicDNAReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),param_1);
  return FVar1;
}

// GetMeshBlendShapeChannelMapping @ 14a673330

FMeshBlendShapeChannelMapping __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshBlendShapeChannelMapping
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  longlong *plVar1;
  undefined6 in_register_00000012;
  FMeshBlendShapeChannelMapping FVar2;
  ushort local_res8;
  ushort local_resa;
  
  FVar2._2_6_ = in_register_00000012;
  FVar2.MeshIndex._0_2_ = param_1;
  plVar1 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar1 + 0x138))(plVar1,&local_res8);
  *(uint *)FVar2 = (uint)local_res8;
  *(uint *)((longlong)FVar2 + 4) = (uint)local_resa;
  return FVar2;
}

// GetMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}' @ 14a673498

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}'
   (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshBlendShapeChannelMappingCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetMeshBlendShapeChannelMappingCount
                    ((FDNAReader<dna::BinaryStreamReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetMeshBlendShapeChannelMappingCount @ 14a6734b0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshBlendShapeChannelMappingCount
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6734c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x130))();
  return uVar1;
}

// GetMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}' @ 14a6734d4

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}' (void)const
   __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshBlendShapeChannelMappingCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetMeshBlendShapeChannelMappingCount
                    ((FDNAReader<RigLogicDNAReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetMeshBlendShapeChannelMappingCount @ 14a6734f0

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshBlendShapeChannelMappingCount
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a673506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x130))();
  return uVar1;
}

// GetMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}' @ 14a67359c

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}'
   (unsigned short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::
GetMeshBlendShapeChannelMappingIndicesForLOD_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetMeshBlendShapeChannelMappingIndicesForLOD
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetMeshBlendShapeChannelMappingIndicesForLOD @ 14a6735b0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshBlendShapeChannelMappingIndicesForLOD
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar4 + 0x140))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}' @ 14a673624

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}'
   (unsigned short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshBlendShapeChannelMappingIndicesForLOD_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetMeshBlendShapeChannelMappingIndicesForLOD
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetMeshBlendShapeChannelMappingIndicesForLOD @ 14a673640

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshBlendShapeChannelMappingIndicesForLOD
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar4 + 0x140))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetMeshCount`vtordisp{4294967292,0}' @ 14a6737c4

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetMeshCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetMeshCount((FDNAReader<dna::BinaryStreamReader> *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetMeshCount @ 14a6737e0

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6737f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x110))();
  return uVar1;
}

// GetMeshCount`vtordisp{4294967292,0}' @ 14a673804

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetMeshCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetMeshCount((FDNAReader<RigLogicDNAReader> *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetMeshCount @ 14a673820

ushort __thiscall FDNAReader<RigLogicDNAReader>::GetMeshCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a673836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x110))();
  return uVar1;
}

// GetMeshIndexListCount`vtordisp{4294967292,0}' @ 14a6738ec

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetMeshIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshIndexListCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetMeshIndexListCount
                    ((FDNAReader<dna::BinaryStreamReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetMeshIndexListCount @ 14a673900

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshIndexListCount
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a673916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x120))();
  return uVar1;
}

// GetMeshIndexListCount`vtordisp{4294967292,0}' @ 14a673924

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetMeshIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshIndexListCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetMeshIndexListCount
                    ((FDNAReader<RigLogicDNAReader> *)
                     ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetMeshIndexListCount @ 14a673940

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshIndexListCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a673956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x120))();
  return uVar1;
}

// GetMeshIndicesForLOD`vtordisp{4294967292,0}' @ 14a6739ec

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetMeshIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshIndicesForLOD_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetMeshIndicesForLOD
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetMeshIndicesForLOD @ 14a673a00

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshIndicesForLOD
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar4 + 0x128))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetMeshIndicesForLOD`vtordisp{4294967292,0}' @ 14a673a74

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetMeshIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshIndicesForLOD_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetMeshIndicesForLOD
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetMeshIndicesForLOD @ 14a673a90

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshIndicesForLOD
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar4 + 0x128))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetMeshName`vtordisp{4294967292,0}' @ 14a673c20

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetMeshName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshName_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetMeshName((FDNAReader<dna::BinaryStreamReader> *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                       __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetMeshName @ 14a673c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0x118))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetMeshName`vtordisp{4294967292,0}' @ 14a673d10

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   RigLogicDNAReader>::GetMeshName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshName_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetMeshName((FDNAReader<RigLogicDNAReader> *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                       __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetMeshName @ 14a673d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0x118))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetMeshRegionCount @ 14a673f40

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshRegionCount
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a673f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x20) + 0x28))();
  return uVar1;
}

// GetMeshRegionCount @ 14a673f60

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshRegionCount
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a673f6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x20) + 0x28))();
  return uVar1;
}

// GetMeshRegionName @ 14a674010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMeshRegionName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  plVar3 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0x30))
                     (plVar3,local_158,CONCAT62(in_register_00000082,param_1),
                      CONCAT62(in_register_0000008a,param_2));
  _Str = (char *)*puVar1;
  local_148._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_148.Ptr);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return __return_storage_ptr__;
}

// GetMeshRegionName @ 14a6740d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetMeshRegionName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  plVar3 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0x30))
                     (plVar3,local_158,CONCAT62(in_register_00000082,param_1),
                      CONCAT62(in_register_0000008a,param_2));
  _Str = (char *)*puVar1;
  local_148._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_148.Ptr);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return __return_storage_ptr__;
}

// GetMetaDataCount`vtordisp{4294967292,0}' @ 14a674234

/* [thunk]:public: virtual unsigned int __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetMetaDataCount`vtordisp{4294967292,0}' (void)const __ptr64 */

uint __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMetaDataCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  uint uVar1;
  
  uVar1 = GetMetaDataCount((FDNAReader<dna::BinaryStreamReader> *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetMetaDataCount @ 14a674250

uint __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMetaDataCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a674266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x38))();
  return uVar1;
}

// GetMetaDataCount`vtordisp{4294967292,0}' @ 14a674270

/* [thunk]:public: virtual unsigned int __cdecl FDNAReader<class
   RigLogicDNAReader>::GetMetaDataCount`vtordisp{4294967292,0}' (void)const __ptr64 */

uint __thiscall
FDNAReader<RigLogicDNAReader>::GetMetaDataCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  uint uVar1;
  
  uVar1 = GetMetaDataCount((FDNAReader<RigLogicDNAReader> *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetMetaDataCount @ 14a674290

uint __thiscall FDNAReader<RigLogicDNAReader>::GetMetaDataCount(FDNAReader<RigLogicDNAReader> *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6742a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x38))();
  return uVar1;
}

// GetMetaDataKey`vtordisp{4294967292,0}' @ 14a67433c

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetMetaDataKey`vtordisp{4294967292,0}' (unsigned int)const __ptr64 */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMetaDataKey_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,uint param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetMetaDataKey((FDNAReader<dna::BinaryStreamReader> *)
                          ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                          __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetMetaDataKey @ 14a674350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMetaDataKey
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,uint param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined4 in_register_00000084;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0x40))(plVar3,local_148,CONCAT44(in_register_00000084,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetMetaDataKey`vtordisp{4294967292,0}' @ 14a674420

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   RigLogicDNAReader>::GetMetaDataKey`vtordisp{4294967292,0}' (unsigned int)const __ptr64 */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetMetaDataKey_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,uint param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetMetaDataKey((FDNAReader<RigLogicDNAReader> *)
                          ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                          __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetMetaDataKey @ 14a674440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetMetaDataKey
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,uint param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined4 in_register_00000084;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0x40))(plVar3,local_148,CONCAT44(in_register_00000084,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetMetaDataValue`vtordisp{4294967292,0}' @ 14a6745c4

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetMetaDataValue`vtordisp{4294967292,0}' (class FString const &
   __ptr64)const __ptr64 */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMetaDataValue_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,
          FString *param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetMetaDataValue((FDNAReader<dna::BinaryStreamReader> *)
                            ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                            __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetMetaDataValue @ 14a6745e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetMetaDataValue
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char *_Str;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  undefined8 *puVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1e8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  lVar6 = (longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
          *(longlong *)&this[-1].field_0x80;
  pcVar1 = *(code **)(*(longlong *)(lVar6 + 8) + 0x48);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar2 = StringCast<char,128,wchar_t>(&local_c8,pwVar5);
  puVar3 = (undefined8 *)(*pcVar1)(lVar6 + 8,local_1f8,pTVar2->Ptr);
  _Str = (char *)*puVar3;
  local_1e8._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_1e8.Ptr = (wchar_t *)0x0;
    local_1e8.StringLength = 0;
  }
  else {
    sVar4 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_1e8,_Str,(int)sVar4,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_1e8.Ptr);
  if ((void *)local_1e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1e8._padding_);
  }
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  return __return_storage_ptr__;
}

// GetMetaDataValue`vtordisp{4294967292,0}' @ 14a6746e4

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   RigLogicDNAReader>::GetMetaDataValue`vtordisp{4294967292,0}' (class FString const & __ptr64)const
   __ptr64 */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetMetaDataValue_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetMetaDataValue((FDNAReader<RigLogicDNAReader> *)
                            ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                            __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetMetaDataValue @ 14a674700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetMetaDataValue
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char *_Str;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  undefined8 *puVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1e8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  lVar6 = (longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
          *(longlong *)&this[-1].field_0x80;
  pcVar1 = *(code **)(*(longlong *)(lVar6 + 8) + 0x48);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar2 = StringCast<char,128,wchar_t>(&local_c8,pwVar5);
  puVar3 = (undefined8 *)(*pcVar1)(lVar6 + 8,local_1f8,pTVar2->Ptr);
  _Str = (char *)*puVar3;
  local_1e8._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_1e8.Ptr = (wchar_t *)0x0;
    local_1e8.StringLength = 0;
  }
  else {
    sVar4 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_1e8,_Str,(int)sVar4,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_1e8.Ptr);
  if ((void *)local_1e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1e8._padding_);
  }
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  return __return_storage_ptr__;
}

// GetName`vtordisp{4294967292,0}' @ 14a6748b4

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetName`vtordisp{4294967292,0}' (void)const __ptr64 */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetName_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = GetName((FDNAReader<dna::BinaryStreamReader> *)
                   ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),__return_storage_ptr__)
  ;
  return pFVar1;
}

// GetName @ 14a6748d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  undefined1 auStack_168 [48];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)
                         ((longlong)
                          *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                         *(longlong *)&this[-1].field_0x80 + 8) + 0x18))();
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetName`vtordisp{4294967292,0}' @ 14a6749a0

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   RigLogicDNAReader>::GetName`vtordisp{4294967292,0}' (void)const __ptr64 */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetName_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = GetName((FDNAReader<RigLogicDNAReader> *)
                   ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),__return_storage_ptr__)
  ;
  return pFVar1;
}

// GetName @ 14a6749c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  undefined1 auStack_168 [48];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)
                         ((longlong)
                          *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                         *(longlong *)&this[-1].field_0x80 + 8) + 0x18))();
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkCount @ 14a674b40

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeuralNetworkCount
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a674b4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x20) + 0x10))();
  return uVar1;
}

// GetNeuralNetworkCount @ 14a674b60

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetNeuralNetworkCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a674b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x20) + 0x10))();
  return uVar1;
}

// GetNeuralNetworkIndexListCount @ 14a674c20

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeuralNetworkIndexListCount
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a674c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x20) + 0x18))();
  return uVar1;
}

// GetNeuralNetworkIndexListCount @ 14a674c40

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetNeuralNetworkIndexListCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a674c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x20) + 0x18))();
  return uVar1;
}

// GetNeuralNetworkIndicesForLOD @ 14a674d30

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeuralNetworkIndicesForLOD
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkIndicesForLOD @ 14a674da0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetNeuralNetworkIndicesForLOD
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkIndicesForMeshRegion @ 14a674f20

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeuralNetworkIndicesForMeshRegion
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x38))
            (plVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkIndicesForMeshRegion @ 14a674f90

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetNeuralNetworkIndicesForMeshRegion
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x38))
            (plVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkInputIndices @ 14a6750b0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeuralNetworkInputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkInputIndices @ 14a675120

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetNeuralNetworkInputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerActivationFunction @ 14a675230

EActivationFunction __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeuralNetworkLayerActivationFunction
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1,ushort param_2)

{
  EActivationFunction EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67523b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x20) + 0x58))();
  return EVar1;
}

// GetNeuralNetworkLayerActivationFunction @ 14a675250

EActivationFunction __thiscall
FDNAReader<RigLogicDNAReader>::GetNeuralNetworkLayerActivationFunction
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1,ushort param_2)

{
  EActivationFunction EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67525b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x20) + 0x58))();
  return EVar1;
}

// GetNeuralNetworkLayerActivationFunctionParameters @ 14a675300

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeuralNetworkLayerActivationFunctionParameters
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x60))
            (plVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerActivationFunctionParameters @ 14a675370

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetNeuralNetworkLayerActivationFunctionParameters
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x60))
            (plVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerBiases @ 14a675490

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeuralNetworkLayerBiases
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x68))
            (plVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerBiases @ 14a675500

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetNeuralNetworkLayerBiases
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x68))
            (plVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerCount @ 14a675620

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeuralNetworkLayerCount
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67562b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x20) + 0x50))();
  return uVar1;
}

// GetNeuralNetworkLayerCount @ 14a675640

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetNeuralNetworkLayerCount
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67564b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x20) + 0x50))();
  return uVar1;
}

// GetNeuralNetworkLayerWeights @ 14a6756d0

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeuralNetworkLayerWeights
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x70))
            (plVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerWeights @ 14a675740

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetNeuralNetworkLayerWeights
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x70))
            (plVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkOutputIndices @ 14a675880

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeuralNetworkOutputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x48))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkOutputIndices @ 14a6758f0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetNeuralNetworkOutputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x40 + 0x20);
  (**(code **)(*plVar4 + 0x48))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNeutralJointRotation`vtordisp{4294967292,0}' @ 14a6759f4

/* [thunk]:public: virtual struct UE::Math::TVector<double> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetNeutralJointRotation`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TVector<double> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeutralJointRotation_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1)

{
  TVector<double> *pTVar1;
  
  pTVar1 = GetNeutralJointRotation
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetNeutralJointRotation @ 14a675a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeutralJointRotation
          (FDNAReader<dna::BinaryStreamReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_48 [32];
  float local_28;
  uint local_24;
  uint local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar1 + 0x168))(plVar1,&local_28);
  fVar2 = (float)(local_20 ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)(local_24 ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_28;
  return __return_storage_ptr__;
}

// GetNeutralJointRotation`vtordisp{4294967292,0}' @ 14a675aa4

/* [thunk]:public: virtual struct UE::Math::TVector<double> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetNeutralJointRotation`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

TVector<double> * __thiscall
FDNAReader<RigLogicDNAReader>::GetNeutralJointRotation_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1)

{
  TVector<double> *pTVar1;
  
  pTVar1 = GetNeutralJointRotation
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetNeutralJointRotation @ 14a675ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FDNAReader<RigLogicDNAReader>::GetNeutralJointRotation
          (FDNAReader<RigLogicDNAReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_48 [32];
  float local_28;
  uint local_24;
  uint local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar1 + 0x168))(plVar1,&local_28);
  fVar2 = (float)(local_20 ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)(local_24 ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_28;
  return __return_storage_ptr__;
}

// GetNeutralJointTranslation`vtordisp{4294967292,0}' @ 14a675c18

/* [thunk]:public: virtual struct UE::Math::TVector<double> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetNeutralJointTranslation`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

TVector<double> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeutralJointTranslation_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1)

{
  TVector<double> *pTVar1;
  
  pTVar1 = GetNeutralJointTranslation
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetNeutralJointTranslation @ 14a675c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetNeutralJointTranslation
          (FDNAReader<dna::BinaryStreamReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_48 [32];
  float local_28;
  uint local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar1 + 0x148))(plVar1,&local_28);
  fVar2 = (float)(local_24 ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_20;
  return __return_storage_ptr__;
}

// GetNeutralJointTranslation`vtordisp{4294967292,0}' @ 14a675cc0

/* [thunk]:public: virtual struct UE::Math::TVector<double> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetNeutralJointTranslation`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TVector<double> * __thiscall
FDNAReader<RigLogicDNAReader>::GetNeutralJointTranslation_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1)

{
  TVector<double> *pTVar1;
  
  pTVar1 = GetNeutralJointTranslation
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetNeutralJointTranslation @ 14a675ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FDNAReader<RigLogicDNAReader>::GetNeutralJointTranslation
          (FDNAReader<RigLogicDNAReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_48 [32];
  float local_28;
  uint local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  (**(code **)(*plVar1 + 0x148))(plVar1,&local_28);
  fVar2 = (float)(local_24 ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_20;
  return __return_storage_ptr__;
}

// GetPSDColumnIndices`vtordisp{4294967292,0}' @ 14a675ea4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetPSDColumnIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetPSDColumnIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetPSDColumnIndices((FDNAReader<dna::BinaryStreamReader> *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                               __return_storage_ptr__);
  return pTVar1;
}

// GetPSDColumnIndices @ 14a675ec0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetPSDColumnIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetPSDColumnIndices`vtordisp{4294967292,0}' @ 14a675f30

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetPSDColumnIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetPSDColumnIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetPSDColumnIndices((FDNAReader<RigLogicDNAReader> *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                               __return_storage_ptr__);
  return pTVar1;
}

// GetPSDColumnIndices @ 14a675f50

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetPSDColumnIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetPSDCount`vtordisp{4294967292,0}' @ 14a676114

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetPSDCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetPSDCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetPSDCount((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetPSDCount @ 14a676130

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetPSDCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a676146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x30))();
  return uVar1;
}

// GetPSDCount`vtordisp{4294967292,0}' @ 14a676150

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetPSDCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetPSDCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetPSDCount((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetPSDCount @ 14a676170

ushort __thiscall FDNAReader<RigLogicDNAReader>::GetPSDCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a676186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x30))();
  return uVar1;
}

// GetPSDRowIndices`vtordisp{4294967292,0}' @ 14a67621c

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetPSDRowIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetPSDRowIndices_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetPSDRowIndices((FDNAReader<dna::BinaryStreamReader> *)
                            ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                            __return_storage_ptr__);
  return pTVar1;
}

// GetPSDRowIndices @ 14a676230

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetPSDRowIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetPSDRowIndices`vtordisp{4294967292,0}' @ 14a6762a0

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetPSDRowIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetPSDRowIndices_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetPSDRowIndices((FDNAReader<RigLogicDNAReader> *)
                            ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                            __return_storage_ptr__);
  return pTVar1;
}

// GetPSDRowIndices @ 14a6762c0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetPSDRowIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetPSDValues`vtordisp{4294967292,0}' @ 14a6763d4

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetPSDValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetPSDValues_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetPSDValues((FDNAReader<dna::BinaryStreamReader> *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                        __return_storage_ptr__);
  return pTVar1;
}

// GetPSDValues @ 14a6763f0

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetPSDValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x48))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetPSDValues`vtordisp{4294967292,0}' @ 14a676460

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl FDNAReader<class
   RigLogicDNAReader>::GetPSDValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetPSDValues_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetPSDValues((FDNAReader<RigLogicDNAReader> *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                        __return_storage_ptr__);
  return pTVar1;
}

// GetPSDValues @ 14a676480

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetPSDValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 8) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x48))(plVar4,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseAnimatedMapOutputIndices @ 14a676880

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseAnimatedMapOutputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pBVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pBVar1 + 0x20))(pBVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseAnimatedMapOutputIndices @ 14a6768f0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseAnimatedMapOutputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pRVar1 + 0x20))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseBlendShapeChannelOutputIndices @ 14a6769f0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseBlendShapeChannelOutputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pBVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pBVar1 + 0x18))(pBVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseBlendShapeChannelOutputIndices @ 14a676a60

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseBlendShapeChannelOutputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pRVar1 + 0x18))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseControlCount @ 14a676b60

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseControlCount
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a676b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0x38))();
  return uVar1;
}

// GetRBFPoseControlCount @ 14a676b80

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseControlCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a676b87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0x38))();
  return uVar1;
}

// GetRBFPoseControlName @ 14a676c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseControlName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  char *_Str;
  undefined8 *puVar2;
  size_t sVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pBVar1 = (this->ReaderPtr).Ptr;
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)pBVar1 + 0x40))
                     (pBVar1,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar2;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar3 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar3,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetRBFPoseControlName @ 14a676cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseControlName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  char *_Str;
  undefined8 *puVar2;
  size_t sVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pRVar1 = (this->ReaderPtr).Ptr;
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)pRVar1 + 0x40))
                     (pRVar1,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar2;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar3 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar3,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetRBFPoseCount @ 14a676e10

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a676e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)(this->ReaderPtr).Ptr)();
  return uVar1;
}

// GetRBFPoseCount @ 14a676e20

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a676e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)(this->ReaderPtr).Ptr)();
  return uVar1;
}

// GetRBFPoseInputControlIndices @ 14a676e90

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseInputControlIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pBVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pBVar1 + 0x48))(pBVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseInputControlIndices @ 14a676f00

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseInputControlIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pRVar1 + 0x48))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseJointOutputIndices @ 14a677000

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseJointOutputIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pBVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pBVar1 + 0x10))(pBVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseJointOutputIndices @ 14a677070

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseJointOutputIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pRVar1 + 0x10))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseJointOutputValues @ 14a677170

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseJointOutputValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pBVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pBVar1 + 0x28))(pBVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseJointOutputValues @ 14a6771e0

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseJointOutputValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pRVar1 + 0x28))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseName @ 14a6772e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  char *_Str;
  undefined8 *puVar2;
  size_t sVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pBVar1 = (this->ReaderPtr).Ptr;
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)pBVar1 + 8))
                     (pBVar1,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar2;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar3 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar3,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetRBFPoseName @ 14a6773a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  char *_Str;
  undefined8 *puVar2;
  size_t sVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pRVar1 = (this->ReaderPtr).Ptr;
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)pRVar1 + 8))
                     (pRVar1,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar2;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar3 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar3,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetRBFPoseOutputControlIndices @ 14a6774f0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseOutputControlIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pBVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pBVar1 + 0x50))(pBVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseOutputControlIndices @ 14a677560

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseOutputControlIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pRVar1 + 0x50))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseOutputControlWeights @ 14a677660

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseOutputControlWeights
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pBVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pBVar1 + 0x58))(pBVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseOutputControlWeights @ 14a6776d0

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseOutputControlWeights
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pRVar1 + 0x58))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFPoseScale @ 14a6777d0

float __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFPoseScale
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6777d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0x30))();
  return fVar1;
}

// GetRBFPoseScale @ 14a6777f0

float __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFPoseScale(FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6777f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0x30))();
  return fVar1;
}

// GetRBFSolverAutomaticRadius @ 14a677880

EAutomaticRadius __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverAutomaticRadius
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  EAutomaticRadius EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a677887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xa8))();
  return EVar1;
}

// GetRBFSolverAutomaticRadius @ 14a6778a0

EAutomaticRadius __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverAutomaticRadius
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  EAutomaticRadius EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6778a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xa8))();
  return EVar1;
}

// GetRBFSolverCount @ 14a677930

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a677937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0x60))();
  return uVar1;
}

// GetRBFSolverCount @ 14a677950

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a677957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0x60))();
  return uVar1;
}

// GetRBFSolverDistanceMethod @ 14a6779f0

ERBFDistanceMethod __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverDistanceMethod
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ERBFDistanceMethod EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6779f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xb8))();
  return EVar1;
}

// GetRBFSolverDistanceMethod @ 14a677a10

ERBFDistanceMethod __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverDistanceMethod
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ERBFDistanceMethod EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a677a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xb8))();
  return EVar1;
}

// GetRBFSolverFunctionType @ 14a677aa0

ERBFFunctionType __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverFunctionType
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ERBFFunctionType EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a677aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 200))();
  return EVar1;
}

// GetRBFSolverFunctionType @ 14a677ac0

ERBFFunctionType __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverFunctionType
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ERBFFunctionType EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a677ac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 200))();
  return EVar1;
}

// GetRBFSolverIndexListCount @ 14a677b50

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverIndexListCount
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a677b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0x68))();
  return uVar1;
}

// GetRBFSolverIndexListCount @ 14a677b70

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverIndexListCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a677b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0x68))();
  return uVar1;
}

// GetRBFSolverIndicesForLOD @ 14a677bf0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverIndicesForLOD
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pBVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pBVar1 + 0x70))(pBVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFSolverIndicesForLOD @ 14a677c60

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverIndicesForLOD
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pRVar1 + 0x70))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFSolverName @ 14a677dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  char *_Str;
  undefined8 *puVar2;
  size_t sVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pBVar1 = (this->ReaderPtr).Ptr;
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)pBVar1 + 0x78))
                     (pBVar1,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar2;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar3 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar3,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetRBFSolverName @ 14a677e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  char *_Str;
  undefined8 *puVar2;
  size_t sVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pRVar1 = (this->ReaderPtr).Ptr;
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)pRVar1 + 0x78))
                     (pRVar1,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar2;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar3 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar3,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetRBFSolverNormalizeMethod @ 14a677fe0

ERBFNormalizeMethod __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverNormalizeMethod
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ERBFNormalizeMethod EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a677fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xc0))();
  return EVar1;
}

// GetRBFSolverNormalizeMethod @ 14a678000

ERBFNormalizeMethod __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverNormalizeMethod
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ERBFNormalizeMethod EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xc0))();
  return EVar1;
}

// GetRBFSolverPoseIndices @ 14a678090

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverPoseIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pBVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pBVar1 + 0x88))(pBVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFSolverPoseIndices @ 14a678100

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverPoseIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pRVar1 + 0x88))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFSolverRadius @ 14a678210

float __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverRadius
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xa0))();
  return fVar1;
}

// GetRBFSolverRadius @ 14a678230

float __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverRadius
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xa0))();
  return fVar1;
}

// GetRBFSolverRawControlIndices @ 14a6782c0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverRawControlIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pBVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pBVar1 + 0x80))(pBVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFSolverRawControlIndices @ 14a678330

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverRawControlIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pRVar1 + 0x80))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFSolverRawControlValues @ 14a678440

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverRawControlValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1)

{
  BinaryStreamReader *pBVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pBVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pBVar1 + 0x90))(pBVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFSolverRawControlValues @ 14a6784b0

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverRawControlValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  RigLogicDNAReader *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->ReaderPtr).Ptr;
  (**(code **)(*(longlong *)pRVar1 + 0x90))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1))
  ;
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFSolverTwistAxis @ 14a6785c0

ETwistAxis __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverTwistAxis
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ETwistAxis EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6785c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xd0))();
  return EVar1;
}

// GetRBFSolverTwistAxis @ 14a6785e0

ETwistAxis __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverTwistAxis
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ETwistAxis EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6785e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xd0))();
  return EVar1;
}

// GetRBFSolverType @ 14a678670

ERBFSolverType __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverType
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ERBFSolverType EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0x98))();
  return EVar1;
}

// GetRBFSolverType @ 14a678690

ERBFSolverType __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverType(FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ERBFSolverType EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0x98))();
  return EVar1;
}

// GetRBFSolverWeightThreshold @ 14a678720

float __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRBFSolverWeightThreshold
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xb0))();
  return fVar1;
}

// GetRBFSolverWeightThreshold @ 14a678740

float __thiscall
FDNAReader<RigLogicDNAReader>::GetRBFSolverWeightThreshold
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)(this->ReaderPtr).Ptr + 0xb0))();
  return fVar1;
}

// GetRawControlCount`vtordisp{4294967292,0}' @ 14a6787e4

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetRawControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRawControlCount_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetRawControlCount((FDNAReader<dna::BinaryStreamReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetRawControlCount @ 14a678800

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRawControlCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x98))();
  return uVar1;
}

// GetRawControlCount`vtordisp{4294967292,0}' @ 14a678824

/* [thunk]:public: virtual unsigned short __cdecl FDNAReader<class
   RigLogicDNAReader>::GetRawControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetRawControlCount_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
  uVar1 = GetRawControlCount((FDNAReader<RigLogicDNAReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return uVar1;
}

// GetRawControlCount @ 14a678840

ushort __thiscall
FDNAReader<RigLogicDNAReader>::GetRawControlCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x98))();
  return uVar1;
}

// GetRawControlName`vtordisp{4294967292,0}' @ 14a678910

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetRawControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRawControlName_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetRawControlName((FDNAReader<dna::BinaryStreamReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                             __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetRawControlName @ 14a678930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRawControlName
          (FDNAReader<dna::BinaryStreamReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0xa0))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetRawControlName`vtordisp{4294967292,0}' @ 14a678a00

/* [thunk]:public: virtual class FString __cdecl FDNAReader<class
   RigLogicDNAReader>::GetRawControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetRawControlName_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetRawControlName((FDNAReader<RigLogicDNAReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
                             __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetRawControlName @ 14a678a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDNAReader<RigLogicDNAReader>::GetRawControlName
          (FDNAReader<RigLogicDNAReader> *this,FString *__return_storage_ptr__,ushort param_1)

{
  char *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined6 in_register_00000082;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
           *(longlong *)&this[-1].field_0x80 + 8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar3 + 0xa0))(plVar3,local_148,CONCAT62(in_register_00000082,param_1));
  _Str = (char *)*puVar1;
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetRotationUnit`vtordisp{4294967292,0}' @ 14a678de4

/* [thunk]:public: virtual enum ERotationUnit __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetRotationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

ERotationUnit __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRotationUnit_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ERotationUnit EVar1;
  
  EVar1 = GetRotationUnit((FDNAReader<dna::BinaryStreamReader> *)
                          ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return EVar1;
}

// GetRotationUnit @ 14a678e00

ERotationUnit __thiscall
FDNAReader<dna::BinaryStreamReader>::GetRotationUnit(FDNAReader<dna::BinaryStreamReader> *this)

{
  ERotationUnit EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x58))();
  return EVar1;
}

// GetRotationUnit`vtordisp{4294967292,0}' @ 14a678e20

/* [thunk]:public: virtual enum ERotationUnit __cdecl FDNAReader<class
   RigLogicDNAReader>::GetRotationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

ERotationUnit __thiscall
FDNAReader<RigLogicDNAReader>::GetRotationUnit_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ERotationUnit EVar1;
  
  EVar1 = GetRotationUnit((FDNAReader<RigLogicDNAReader> *)
                          ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return EVar1;
}

// GetRotationUnit @ 14a678e40

ERotationUnit __thiscall
FDNAReader<RigLogicDNAReader>::GetRotationUnit(FDNAReader<RigLogicDNAReader> *this)

{
  ERotationUnit EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x58))();
  return EVar1;
}

// GetSkinWeightsCount @ 14a678fe0

uint __thiscall
FDNAReader<dna::BinaryStreamReader>::GetSkinWeightsCount
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0xb0))();
  return uVar1;
}

// GetSkinWeightsCount @ 14a679000

uint __thiscall
FDNAReader<RigLogicDNAReader>::GetSkinWeightsCount
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67900b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0xb0))();
  return uVar1;
}

// GetSkinWeightsJointIndices @ 14a679050

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetSkinWeightsJointIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined4 in_register_0000008c;
  ushort *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xc0))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT44(in_register_0000008c,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetSkinWeightsJointIndices @ 14a6790c0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetSkinWeightsJointIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined4 in_register_0000008c;
  ushort *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xc0))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT44(in_register_0000008c,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetSkinWeightsValues @ 14a679190

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetSkinWeightsValues
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined4 in_register_0000008c;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xb8))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT44(in_register_0000008c,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetSkinWeightsValues @ 14a679200

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetSkinWeightsValues
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  undefined4 in_register_0000008c;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0xb8))
            (pFVar4,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT44(in_register_0000008c,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetSwingBlendWeights @ 14a6792d0

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetSwingBlendWeights
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x48))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetSwingBlendWeights @ 14a679340

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetSwingBlendWeights
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x48))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetSwingCount @ 14a679450

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetSwingCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67945b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x20 + 0x40) + 0x28))();
  return uVar1;
}

// GetSwingCount @ 14a679470

ushort __thiscall FDNAReader<RigLogicDNAReader>::GetSwingCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67947b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x20 + 0x40) + 0x28))();
  return uVar1;
}

// GetSwingInputControlIndices @ 14a6794f0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetSwingInputControlIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x38))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetSwingInputControlIndices @ 14a679560

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetSwingInputControlIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x38))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetSwingOutputJointIndices @ 14a679670

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetSwingOutputJointIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetSwingOutputJointIndices @ 14a6796e0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetSwingOutputJointIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetSwingSetupTwistAxis @ 14a6797f0

ETwistAxis __thiscall
FDNAReader<dna::BinaryStreamReader>::GetSwingSetupTwistAxis
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ETwistAxis EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6797fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x20 + 0x40) + 0x30))();
  return EVar1;
}

// GetSwingSetupTwistAxis @ 14a679810

ETwistAxis __thiscall
FDNAReader<RigLogicDNAReader>::GetSwingSetupTwistAxis
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ETwistAxis EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67981b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x20 + 0x40) + 0x30))();
  return EVar1;
}

// GetTranslationUnit`vtordisp{4294967292,0}' @ 14a67989c

/* [thunk]:public: virtual enum ETranslationUnit __cdecl FDNAReader<class
   dna::BinaryStreamReader>::GetTranslationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

ETranslationUnit __thiscall
FDNAReader<dna::BinaryStreamReader>::GetTranslationUnit_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  ETranslationUnit EVar1;
  
  EVar1 = GetTranslationUnit((FDNAReader<dna::BinaryStreamReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return EVar1;
}

// GetTranslationUnit @ 14a6798b0

ETranslationUnit __thiscall
FDNAReader<dna::BinaryStreamReader>::GetTranslationUnit(FDNAReader<dna::BinaryStreamReader> *this)

{
  ETranslationUnit EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6798c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x50))();
  return EVar1;
}

// GetTranslationUnit`vtordisp{4294967292,0}' @ 14a6798d0

/* [thunk]:public: virtual enum ETranslationUnit __cdecl FDNAReader<class
   RigLogicDNAReader>::GetTranslationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

ETranslationUnit __thiscall
FDNAReader<RigLogicDNAReader>::GetTranslationUnit_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this)

{
  ETranslationUnit EVar1;
  
  EVar1 = GetTranslationUnit((FDNAReader<RigLogicDNAReader> *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return EVar1;
}

// GetTranslationUnit @ 14a6798f0

ETranslationUnit __thiscall
FDNAReader<RigLogicDNAReader>::GetTranslationUnit(FDNAReader<RigLogicDNAReader> *this)

{
  ETranslationUnit EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a679906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x80 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x80 + 8) + 0x50))();
  return EVar1;
}

// GetTwistBlendWeights @ 14a6799a0

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetTwistBlendWeights
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetTwistBlendWeights @ 14a679a10

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetTwistBlendWeights
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetTwistCount @ 14a679b20

ushort __thiscall
FDNAReader<dna::BinaryStreamReader>::GetTwistCount(FDNAReader<dna::BinaryStreamReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a679b2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x20 + 0x40))();
  return uVar1;
}

// GetTwistCount @ 14a679b40

ushort __thiscall FDNAReader<RigLogicDNAReader>::GetTwistCount(FDNAReader<RigLogicDNAReader> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a679b4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x20 + 0x40))();
  return uVar1;
}

// GetTwistInputControlIndices @ 14a679bc0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetTwistInputControlIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetTwistInputControlIndices @ 14a679c30

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetTwistInputControlIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetTwistOutputJointIndices @ 14a679d40

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetTwistOutputJointIndices
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetTwistOutputJointIndices @ 14a679db0

TArrayView<unsigned_short_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetTwistOutputJointIndices
          (FDNAReader<RigLogicDNAReader> *this,
          TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x40);
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetTwistSetupTwistAxis @ 14a679ec0

ETwistAxis __thiscall
FDNAReader<dna::BinaryStreamReader>::GetTwistSetupTwistAxis
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  ETwistAxis EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a679ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x20 + 0x40) + 8))();
  return EVar1;
}

// GetTwistSetupTwistAxis @ 14a679ee0

ETwistAxis __thiscall
FDNAReader<RigLogicDNAReader>::GetTwistSetupTwistAxis
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  ETwistAxis EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a679eeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x20 + 0x40) + 8))();
  return EVar1;
}

// GetVertexLayout @ 14a679f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexLayout * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetVertexLayout
          (FDNAReader<dna::BinaryStreamReader> *this,FVertexLayout *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  FMemoryResource *pFVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar1 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar1 + 0x78))(pFVar1,&local_28);
  __return_storage_ptr__->Position = local_28;
  __return_storage_ptr__->TextureCoordinate = local_24;
  __return_storage_ptr__->Normal = local_20;
  return __return_storage_ptr__;
}

// GetVertexLayout @ 14a679fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexLayout * __thiscall
FDNAReader<RigLogicDNAReader>::GetVertexLayout
          (FDNAReader<RigLogicDNAReader> *this,FVertexLayout *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  FMemoryResource *pFVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar1 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar1 + 0x78))(pFVar1,&local_28);
  __return_storage_ptr__->Position = local_28;
  __return_storage_ptr__->TextureCoordinate = local_24;
  __return_storage_ptr__->Normal = local_20;
  return __return_storage_ptr__;
}

// GetVertexLayoutCount @ 14a67a090

uint __thiscall
FDNAReader<dna::BinaryStreamReader>::GetVertexLayoutCount
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67a09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0x70))();
  return uVar1;
}

// GetVertexLayoutCount @ 14a67a0b0

uint __thiscall
FDNAReader<RigLogicDNAReader>::GetVertexLayoutCount
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67a0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0x70))();
  return uVar1;
}

// GetVertexNormal @ 14a67a100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetVertexNormal
          (FDNAReader<dna::BinaryStreamReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  FMemoryResource *pFVar1;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar1 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar1 + 0x50))(pFVar1,&local_28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_24;
  return __return_storage_ptr__;
}

// GetVertexNormal @ 14a67a180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FDNAReader<RigLogicDNAReader>::GetVertexNormal
          (FDNAReader<RigLogicDNAReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  FMemoryResource *pFVar1;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar1 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar1 + 0x50))(pFVar1,&local_28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_24;
  return __return_storage_ptr__;
}

// GetVertexNormalCount @ 14a67a270

uint __thiscall
FDNAReader<dna::BinaryStreamReader>::GetVertexNormalCount
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67a27b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0x48))();
  return uVar1;
}

// GetVertexNormalCount @ 14a67a290

uint __thiscall
FDNAReader<RigLogicDNAReader>::GetVertexNormalCount
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67a29b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0x48))();
  return uVar1;
}

// GetVertexPosition @ 14a67a2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetVertexPosition
          (FDNAReader<dna::BinaryStreamReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  FMemoryResource *pFVar1;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar1 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar1 + 8))(pFVar1,&local_28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_24;
  return __return_storage_ptr__;
}

// GetVertexPosition @ 14a67a360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FDNAReader<RigLogicDNAReader>::GetVertexPosition
          (FDNAReader<RigLogicDNAReader> *this,TVector<double> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  FMemoryResource *pFVar1;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar1 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar1 + 8))(pFVar1,&local_28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_24;
  return __return_storage_ptr__;
}

// GetVertexPositionCount @ 14a67a450

uint __thiscall
FDNAReader<dna::BinaryStreamReader>::GetVertexPositionCount
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67a45b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->MemoryResource).Object[2])();
  return uVar1;
}

// GetVertexPositionCount @ 14a67a470

uint __thiscall
FDNAReader<RigLogicDNAReader>::GetVertexPositionCount
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67a47b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->MemoryResource).Object[2])();
  return uVar1;
}

// GetVertexPositionXs @ 14a67a4c0

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetVertexPositionXs
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0x10))(pFVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetVertexPositionXs @ 14a67a530

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetVertexPositionXs
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0x10))(pFVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetVertexPositionYs @ 14a67a600

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetVertexPositionYs
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0x20))(pFVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetVertexPositionYs @ 14a67a670

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetVertexPositionYs
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0x20))(pFVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetVertexPositionZs @ 14a67a740

TArrayView<float_const_,int> * __thiscall
FDNAReader<dna::BinaryStreamReader>::GetVertexPositionZs
          (FDNAReader<dna::BinaryStreamReader> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0x18))(pFVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetVertexPositionZs @ 14a67a7b0

TArrayView<float_const_,int> * __thiscall
FDNAReader<RigLogicDNAReader>::GetVertexPositionZs
          (FDNAReader<RigLogicDNAReader> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  FMemoryResource *pFVar4;
  undefined6 in_register_00000082;
  float *local_18;
  int local_10;
  
  pFVar4 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar4 + 0x18))(pFVar4,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetVertexTextureCoordinate @ 14a67a880

FTextureCoordinate __thiscall
FDNAReader<dna::BinaryStreamReader>::GetVertexTextureCoordinate
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1,uint param_2)

{
  FMemoryResource *pFVar1;
  undefined6 in_register_00000012;
  FTextureCoordinate FVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FVar2._2_6_ = in_register_00000012;
  FVar2.U._0_2_ = param_1;
  pFVar1 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,&local_res8);
  *(undefined4 *)FVar2 = local_res8;
  *(undefined4 *)((longlong)FVar2 + 4) = local_resc;
  return FVar2;
}

// GetVertexTextureCoordinate @ 14a67a8c0

FTextureCoordinate __thiscall
FDNAReader<RigLogicDNAReader>::GetVertexTextureCoordinate
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1,uint param_2)

{
  FMemoryResource *pFVar1;
  undefined6 in_register_00000012;
  FTextureCoordinate FVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FVar2._2_6_ = in_register_00000012;
  FVar2.U._0_2_ = param_1;
  pFVar1 = (this->MemoryResource).Object + 2;
  (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,&local_res8);
  *(undefined4 *)FVar2 = local_res8;
  *(undefined4 *)((longlong)FVar2 + 4) = local_resc;
  return FVar2;
}

// GetVertexTextureCoordinateCount @ 14a67a950

uint __thiscall
FDNAReader<dna::BinaryStreamReader>::GetVertexTextureCoordinateCount
          (FDNAReader<dna::BinaryStreamReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67a95b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0x28))();
  return uVar1;
}

// GetVertexTextureCoordinateCount @ 14a67a970

uint __thiscall
FDNAReader<RigLogicDNAReader>::GetVertexTextureCoordinateCount
          (FDNAReader<RigLogicDNAReader> *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a67a97b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)(this->MemoryResource).Object[2] + 0x28))();
  return uVar1;
}

// Unload`vtordisp{4294967292,0}' @ 14a683784

/* [thunk]:public: virtual void __cdecl FDNAReader<class
   dna::BinaryStreamReader>::Unload`vtordisp{4294967292,0}' (enum EDNADataLayer) __ptr64 */

void __thiscall
FDNAReader<dna::BinaryStreamReader>::Unload_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,EDNADataLayer param_1)

{
  Unload((FDNAReader<dna::BinaryStreamReader> *)
         ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),param_1);
  return;
}

// Unload @ 14a6837a0

void __thiscall
FDNAReader<dna::BinaryStreamReader>::Unload
          (FDNAReader<dna::BinaryStreamReader> *this,EDNADataLayer param_1)

{
  uint uVar1;
  
  uVar1 = param_1 | 0x183;
  if ((param_1 & RBFBehavior) != RBFBehavior) {
    uVar1 = (uint)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6837c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this[-1].field_0x80 + 0xd8))
            (*(longlong **)&this[-1].field_0x80,uVar1);
  return;
}

// Unload`vtordisp{4294967292,0}' @ 14a6837d0

/* [thunk]:public: virtual void __cdecl FDNAReader<class
   RigLogicDNAReader>::Unload`vtordisp{4294967292,0}' (enum EDNADataLayer) __ptr64 */

void __thiscall
FDNAReader<RigLogicDNAReader>::Unload_vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,EDNADataLayer param_1)

{
  Unload((FDNAReader<RigLogicDNAReader> *)((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),
         param_1);
  return;
}

// Unload @ 14a6837f0

void __thiscall
FDNAReader<RigLogicDNAReader>::Unload(FDNAReader<RigLogicDNAReader> *this,EDNADataLayer param_1)

{
  uint uVar1;
  
  uVar1 = param_1 | 0x183;
  if ((param_1 & RBFBehavior) != RBFBehavior) {
    uVar1 = (uint)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a683811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this[-1].field_0x80 + 0xd8))
            (*(longlong **)&this[-1].field_0x80,uVar1);
  return;
}

// Unwrap`vtordisp{4294967292,0}' @ 14a68385c

/* [thunk]:private: virtual class dna::Reader * __ptr64 __cdecl FDNAReader<class
   dna::BinaryStreamReader>::Unwrap`vtordisp{4294967292,0}' (void)const __ptr64 */

Reader * __thiscall
FDNAReader<dna::BinaryStreamReader>::Unwrap_vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this)

{
  Reader *pRVar1;
  
  pRVar1 = Unwrap((FDNAReader<dna::BinaryStreamReader> *)
                  ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return pRVar1;
}

// Unwrap @ 14a683870

Reader * __thiscall
FDNAReader<dna::BinaryStreamReader>::Unwrap(FDNAReader<dna::BinaryStreamReader> *this)

{
  return *(Reader **)&this[-1].field_0x80;
}

// Unwrap`vtordisp{4294967292,0}' @ 14a68387c

/* [thunk]:private: virtual class dna::Reader * __ptr64 __cdecl FDNAReader<class
   RigLogicDNAReader>::Unwrap`vtordisp{4294967292,0}' (void)const __ptr64 */

Reader * __thiscall
FDNAReader<RigLogicDNAReader>::Unwrap_vtordisp_4294967292_0__(FDNAReader<RigLogicDNAReader> *this)

{
  Reader *pRVar1;
  
  pRVar1 = Unwrap((FDNAReader<RigLogicDNAReader> *)
                  ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c));
  return pRVar1;
}

// Unwrap @ 14a683890

Reader * __thiscall FDNAReader<RigLogicDNAReader>::Unwrap(FDNAReader<RigLogicDNAReader> *this)

{
  return *(Reader **)&this[-1].field_0x80;
}

