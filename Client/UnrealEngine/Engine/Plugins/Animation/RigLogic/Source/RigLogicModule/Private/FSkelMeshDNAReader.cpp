// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 228

// FSkelMeshDNAReader @ 14a6604c0

FSkelMeshDNAReader * __thiscall
FSkelMeshDNAReader::FSkelMeshDNAReader(FSkelMeshDNAReader *this,UDNAAsset *param_1)

{
  TSharedPtr<IDNAReader,1> *pTVar1;
  FSharedReferencer<1> *this_00;
  FPlatformRWLock *SRWLock;
  int iVar2;
  IDNAReader *pIVar3;
  code *pcVar4;
  bool bVar5;
  FSkelMeshDNAReader *pFVar6;
  FSharedReferencer<1> FVar7;
  int in_R8D;
  IDNAReader *local_38;
  FSharedReferencer<1> local_30;
  
  if (in_R8D != 0) {
    *(undefined1 **)&this->field_0x8 = &_vbtable__for__IRBFBehaviorReader__;
    *(undefined8 **)&this->field_0x18 = &_vbtable__for__IGeometryReader__;
    *(undefined8 **)&this->field_0x28 = &_vbtable__for__IMachineLearnedBehaviorReader__;
    *(undefined8 **)&this->field_0x38 = &_vbtable__for__IJointBehaviorMetadataReader__;
    *(undefined8 **)&this->field_0x48 = &_vbtable__for__ITwistSwingBehaviorReader__;
    *(undefined1 **)&this->field_0x90 = &_vbtable__for__IBehaviorReader__;
    *(undefined ***)&this->field_0x78 = &___7IDefinitionReader__6B_;
    *(undefined ***)&this->field_0x88 = &IBehaviorReader::_vftable__for__IBehaviorReader__;
    *(undefined ***)(&this->field_0x90 + *(int *)(*(longlong *)&this->field_0x90 + 4)) =
         &IBehaviorReader::_vftable__for__IDefinitionReader__;
  }
  IDNAReader::IDNAReader((IDNAReader *)this);
  *(undefined ***)this = &___7FSkelMeshDNAReader__6B_;
  pTVar1 = &this->BehaviorReader;
  *(undefined ***)&this->field_0x10 = &_vftable__for__IGeometryReader__;
  this_00 = &(this->BehaviorReader).SharedReferenceCount;
  *(undefined ***)&this->field_0x20 = &_vftable__for__IMachineLearnedBehaviorReader__;
  SRWLock = &param_1->DNAUpdateLock;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IJointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__ITwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__IDefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &_vftable__for__IBehaviorReader__;
  iVar2 = *(int *)(*(longlong *)&this->field_0x8 + 4);
  *(int *)(&this->field_0x4 + iVar2) = iVar2 + -0x70;
  iVar2 = *(int *)(*(longlong *)&this->field_0x8 + 8);
  *(int *)(&this->field_0x4 + iVar2) = iVar2 + -0x80;
  pTVar1->Object = (IDNAReader *)0x0;
  this_00->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->GeometryReader).Object = (IDNAReader *)0x0;
  (this->GeometryReader).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FSkelMeshDNAReader *)(*pcVar4)();
      return pFVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pIVar3 = (param_1->BehaviorReader).Object;
  FVar7.ReferenceController = (param_1->BehaviorReader).SharedReferenceCount.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pIVar3;
  local_30.ReferenceController = FVar7.ReferenceController;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (pTVar1 != (TSharedPtr<IDNAReader,1> *)&local_38) {
    pTVar1->Object = pIVar3;
    local_38 = (IDNAReader *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&local_30);
    FVar7.ReferenceController = local_30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// GetAge`vtordisp{4294967292,0}' @ 14a66c320

/* [thunk]:public: virtual unsigned short __cdecl FSkelMeshDNAReader::GetAge`vtordisp{4294967292,0}'
   (void)const __ptr64 */

ushort __thiscall FSkelMeshDNAReader::GetAge_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetAge((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetAge @ 14a66c340

ushort __thiscall FSkelMeshDNAReader::GetAge(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a66c391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x40))();
  return uVar3;
}

// GetAnimatedMapCount`vtordisp{4294967292,0}' @ 14a66c424

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetAnimatedMapCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetAnimatedMapCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetAnimatedMapCount((FSkelMeshDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetAnimatedMapCount @ 14a66c440

ushort __thiscall FSkelMeshDNAReader::GetAnimatedMapCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a66c491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x100))();
  return uVar3;
}

// GetAnimatedMapCutValues`vtordisp{4294967292,0}' @ 14a66c5c4

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl
   FSkelMeshDNAReader::GetAnimatedMapCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapCutValues_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapCutValues
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapCutValues @ 14a66c5e0

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapCutValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0xe0))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAnimatedMapFromValues`vtordisp{4294967292,0}' @ 14a66c784

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl
   FSkelMeshDNAReader::GetAnimatedMapFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapFromValues_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapFromValues
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapFromValues @ 14a66c7a0

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapFromValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 200))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAnimatedMapIndexListCount`vtordisp{4294967292,0}' @ 14a66c8a4

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetAnimatedMapIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetAnimatedMapIndexListCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetAnimatedMapIndexListCount
                    ((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94)
                    );
  return uVar1;
}

// GetAnimatedMapIndexListCount @ 14a66c8c0

ushort __thiscall FSkelMeshDNAReader::GetAnimatedMapIndexListCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a66c911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x110))();
  return uVar3;
}

// GetAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' @ 14a66cab4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapIndicesForLOD_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapIndicesForLOD
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetAnimatedMapIndicesForLOD @ 14a66cad0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapIndicesForLOD
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x118))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetAnimatedMapInputIndices`vtordisp{4294967292,0}' @ 14a66cce4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetAnimatedMapInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapInputIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapInputIndices
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapInputIndices @ 14a66cd00

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapInputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0xb8))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAnimatedMapLODs`vtordisp{4294967292,0}' @ 14a66cea4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetAnimatedMapLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapLODs_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapLODs((FSkelMeshDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                              __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapLODs @ 14a66cec0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapLODs
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0xb0))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAnimatedMapName`vtordisp{4294967292,0}' @ 14a66d120

/* [thunk]:public: virtual class FString __cdecl
   FSkelMeshDNAReader::GetAnimatedMapName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FSkelMeshDNAReader::GetAnimatedMapName_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetAnimatedMapName((FSkelMeshDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                              __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetAnimatedMapName @ 14a66d140

FString * __thiscall
FSkelMeshDNAReader::GetAnimatedMapName
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x108))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetAnimatedMapOutputIndices`vtordisp{4294967292,0}' @ 14a66d374

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetAnimatedMapOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapOutputIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapOutputIndices
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapOutputIndices @ 14a66d390

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapOutputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0xc0))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAnimatedMapSlopeValues`vtordisp{4294967292,0}' @ 14a66d5a4

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl
   FSkelMeshDNAReader::GetAnimatedMapSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapSlopeValues_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapSlopeValues
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapSlopeValues @ 14a66d5c0

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapSlopeValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0xd8))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAnimatedMapToValues`vtordisp{4294967292,0}' @ 14a66d764

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl
   FSkelMeshDNAReader::GetAnimatedMapToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapToValues_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetAnimatedMapToValues
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetAnimatedMapToValues @ 14a66d780

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetAnimatedMapToValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0xd0))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetArchetype`vtordisp{4294967292,0}' @ 14a66d880

/* [thunk]:public: virtual enum EArchetype __cdecl
   FSkelMeshDNAReader::GetArchetype`vtordisp{4294967292,0}' (void)const __ptr64 */

EArchetype __thiscall
FSkelMeshDNAReader::GetArchetype_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  EArchetype EVar1;
  
  EVar1 = GetArchetype((FSkelMeshDNAReader *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return EVar1;
}

// GetArchetype @ 14a66d8a0

EArchetype __thiscall FSkelMeshDNAReader::GetArchetype(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  EArchetype EVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a66d8f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x30))();
  return EVar3;
}

// GetBlendShapeChannelCount`vtordisp{4294967292,0}' @ 14a66da24

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetBlendShapeChannelCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetBlendShapeChannelCount
                    ((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94)
                    );
  return uVar1;
}

// GetBlendShapeChannelCount @ 14a66da40

ushort __thiscall FSkelMeshDNAReader::GetBlendShapeChannelCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a66da91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0xe0))();
  return uVar3;
}

// GetBlendShapeChannelIndex @ 14a66daf0

ushort __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelIndex
          (FSkelMeshDNAReader *this,ushort param_1,ushort param_2)

{
  IDNAReader *pIVar1;
  ushort uVar2;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a66db01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x90))(&pIVar1->field_0x10);
    return uVar2;
  }
  return 0;
}

// GetBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' @ 14a66dba4

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' (void)const
   __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelIndexListCount_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetBlendShapeChannelIndexListCount
                    ((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94)
                    );
  return uVar1;
}

// GetBlendShapeChannelIndexListCount @ 14a66dbc0

ushort __thiscall FSkelMeshDNAReader::GetBlendShapeChannelIndexListCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a66dc11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0xf0))();
  return uVar3;
}

// GetBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' @ 14a66ddb4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelIndicesForLOD_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelIndicesForLOD
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetBlendShapeChannelIndicesForLOD @ 14a66ddd0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelIndicesForLOD
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xf8))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetBlendShapeChannelInputIndices`vtordisp{4294967292,0}' @ 14a66dfe4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetBlendShapeChannelInputIndices`vtordisp{4294967292,0}' (void)const __ptr64
    */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelInputIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelInputIndices
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetBlendShapeChannelInputIndices @ 14a66e000

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelInputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0xa8))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetBlendShapeChannelLODs`vtordisp{4294967292,0}' @ 14a66e1a4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetBlendShapeChannelLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelLODs_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelLODs
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetBlendShapeChannelLODs @ 14a66e1c0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelLODs
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x98))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetBlendShapeChannelName`vtordisp{4294967292,0}' @ 14a66e420

/* [thunk]:public: virtual class FString __cdecl
   FSkelMeshDNAReader::GetBlendShapeChannelName`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

FString * __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelName_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetBlendShapeChannelName
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetBlendShapeChannelName @ 14a66e440

FString * __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelName
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xe8))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' @ 14a66e674

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64
    */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelOutputIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetBlendShapeChannelOutputIndices
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetBlendShapeChannelOutputIndices @ 14a66e690

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeChannelOutputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0xa0))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetBlendShapeTargetCount @ 14a66e7d0

ushort __thiscall
FSkelMeshDNAReader::GetBlendShapeTargetCount(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  ushort uVar2;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a66e7e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x88))(&pIVar1->field_0x10);
    return uVar2;
  }
  return 0;
}

// GetBlendShapeTargetDelta @ 14a66e930

TVector<double> * __thiscall
FSkelMeshDNAReader::GetBlendShapeTargetDelta
          (FSkelMeshDNAReader *this,TVector<double> *__return_storage_ptr__,ushort param_1,
          ushort param_2,uint param_3)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0xa0))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaCount @ 14a66e9e0

uint __thiscall
FSkelMeshDNAReader::GetBlendShapeTargetDeltaCount
          (FSkelMeshDNAReader *this,ushort param_1,ushort param_2)

{
  IDNAReader *pIVar1;
  uint uVar2;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a66e9f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x98))(&pIVar1->field_0x10);
    return uVar2;
  }
  return 0;
}

// GetBlendShapeTargetDeltaXs @ 14a66eb00

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeTargetDeltaXs
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0xa8))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaYs @ 14a66ec40

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeTargetDeltaYs
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0xb0))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaZs @ 14a66ed80

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeTargetDeltaZs
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0xb8))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBlendShapeTargetVertexIndices @ 14a66eec0

TArrayView<unsigned_int_const_,int> * __thiscall
FSkelMeshDNAReader::GetBlendShapeTargetVertexIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0xc0))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetCoordinateSystem`vtordisp{4294967292,0}' @ 14a66f040

/* [thunk]:public: virtual struct FCoordinateSystem __cdecl
   FSkelMeshDNAReader::GetCoordinateSystem`vtordisp{4294967292,0}' (void)const __ptr64 */

FCoordinateSystem * __thiscall
FSkelMeshDNAReader::GetCoordinateSystem_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FCoordinateSystem *__return_storage_ptr__)

{
  FCoordinateSystem FVar1;
  undefined5 extraout_var;
  
  FVar1 = GetCoordinateSystem((FSkelMeshDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return (FCoordinateSystem *)CONCAT53(extraout_var,FVar1);
}

// GetCoordinateSystem @ 14a66f060

FCoordinateSystem __thiscall FSkelMeshDNAReader::GetCoordinateSystem(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  FCoordinateSystem FVar3;
  FCoordinateSystem in_EDX;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FCoordinateSystem)(*pcVar1)();
      return FVar3;
    }
  }
  (**(code **)(*(longlong *)
                ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                *(longlong *)&this[-1].field_0x70 + 8) + 0x70))();
  return in_EDX;
}

// GetDBComplexity`vtordisp{4294967292,0}' @ 14a66f2c0

/* [thunk]:public: virtual class FString __cdecl
   FSkelMeshDNAReader::GetDBComplexity`vtordisp{4294967292,0}' (void)const __ptr64 */

FString * __thiscall
FSkelMeshDNAReader::GetDBComplexity_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = GetDBComplexity((FSkelMeshDNAReader *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                           __return_storage_ptr__);
  return pFVar1;
}

// GetDBComplexity @ 14a66f2e0

FString * __thiscall
FSkelMeshDNAReader::GetDBComplexity(FSkelMeshDNAReader *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x88))(plVar4,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDBMaxLOD`vtordisp{4294967292,0}' @ 14a66f3e0

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetDBMaxLOD`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall FSkelMeshDNAReader::GetDBMaxLOD_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetDBMaxLOD((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetDBMaxLOD @ 14a66f400

ushort __thiscall FSkelMeshDNAReader::GetDBMaxLOD(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a66f451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x80))();
  return uVar3;
}

// GetDBName`vtordisp{4294967292,0}' @ 14a66f640

/* [thunk]:public: virtual class FString __cdecl
   FSkelMeshDNAReader::GetDBName`vtordisp{4294967292,0}' (void)const __ptr64 */

FString * __thiscall
FSkelMeshDNAReader::GetDBName_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = GetDBName((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94)
                     ,__return_storage_ptr__);
  return pFVar1;
}

// GetDBName @ 14a66f660

FString * __thiscall
FSkelMeshDNAReader::GetDBName(FSkelMeshDNAReader *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x90))(plVar4,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFaceCount @ 14a670060

uint __thiscall FSkelMeshDNAReader::GetFaceCount(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  uint uVar2;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a670071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x48))(&pIVar1->field_0x10);
    return uVar2;
  }
  return 0;
}

// GetFaceVertexLayoutIndices @ 14a670170

TArrayView<unsigned_int_const_,int> * __thiscall
FSkelMeshDNAReader::GetFaceVertexLayoutIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x50))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetFileFormatGeneration`vtordisp{4294967292,0}' @ 14a670240

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetFileFormatGeneration`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetFileFormatGeneration_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetFileFormatGeneration
                    ((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94)
                    );
  return uVar1;
}

// GetFileFormatGeneration @ 14a670260

ushort __thiscall FSkelMeshDNAReader::GetFileFormatGeneration(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6702b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x18))();
  return uVar3;
}

// GetFileFormatVersion`vtordisp{4294967292,0}' @ 14a670340

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetFileFormatVersion`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetFileFormatVersion_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetFileFormatVersion
                    ((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94)
                    );
  return uVar1;
}

// GetFileFormatVersion @ 14a670360

ushort __thiscall FSkelMeshDNAReader::GetFileFormatVersion(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6703b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x20))();
  return uVar3;
}

// GetGUIControlCount`vtordisp{4294967292,0}' @ 14a670484

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetGUIControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetGUIControlCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetGUIControlCount((FSkelMeshDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetGUIControlCount @ 14a6704a0

ushort __thiscall FSkelMeshDNAReader::GetGUIControlCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6704f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x98))();
  return uVar3;
}

// GetGUIControlName`vtordisp{4294967292,0}' @ 14a6706e0

/* [thunk]:public: virtual class FString __cdecl
   FSkelMeshDNAReader::GetGUIControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FSkelMeshDNAReader::GetGUIControlName_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetGUIControlName((FSkelMeshDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                             __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetGUIControlName @ 14a670700

FString * __thiscall
FSkelMeshDNAReader::GetGUIControlName
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xa0))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetGUIToRawCutValues`vtordisp{4294967292,0}' @ 14a670930

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl
   FSkelMeshDNAReader::GetGUIToRawCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawCutValues_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawCutValues
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawCutValues @ 14a670950

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawCutValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x28))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGUIToRawFromValues`vtordisp{4294967292,0}' @ 14a670af0

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl
   FSkelMeshDNAReader::GetGUIToRawFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawFromValues_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawFromValues
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawFromValues @ 14a670b10

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawFromValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x10))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGUIToRawInputIndices`vtordisp{4294967292,0}' @ 14a670cb0

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetGUIToRawInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawInputIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawInputIndices
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawInputIndices @ 14a670cd0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawInputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined8 *puVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  puVar5 = (undefined8 *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)*puVar5)(puVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGUIToRawOutputIndices`vtordisp{4294967292,0}' @ 14a670e70

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetGUIToRawOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawOutputIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawOutputIndices
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawOutputIndices @ 14a670e90

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawOutputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 8))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGUIToRawSlopeValues`vtordisp{4294967292,0}' @ 14a671030

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl
   FSkelMeshDNAReader::GetGUIToRawSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawSlopeValues_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawSlopeValues
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawSlopeValues @ 14a671050

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawSlopeValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x20))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGUIToRawToValues`vtordisp{4294967292,0}' @ 14a6711f0

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl
   FSkelMeshDNAReader::GetGUIToRawToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawToValues_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetGUIToRawToValues((FSkelMeshDNAReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                               __return_storage_ptr__);
  return pTVar1;
}

// GetGUIToRawToValues @ 14a671210

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetGUIToRawToValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x18))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGender`vtordisp{4294967292,0}' @ 14a671310

/* [thunk]:public: virtual enum EGender __cdecl
   FSkelMeshDNAReader::GetGender`vtordisp{4294967292,0}' (void)const __ptr64 */

EGender __thiscall FSkelMeshDNAReader::GetGender_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  EGender EVar1;
  
  EVar1 = GetGender((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94))
  ;
  return EVar1;
}

// GetGender @ 14a671330

EGender __thiscall FSkelMeshDNAReader::GetGender(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  EGender EVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a671381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x38))();
  return EVar3;
}

// GetJointColumnCount`vtordisp{4294967292,0}' @ 14a671410

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetJointColumnCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetJointColumnCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetJointColumnCount((FSkelMeshDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetJointColumnCount @ 14a671430

ushort __thiscall FSkelMeshDNAReader::GetJointColumnCount(FSkelMeshDNAReader *this)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
                    /* WARNING: Could not recover jumptable at 0x00014a671481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)
                        (&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8)) + 0x58)
          )();
  return uVar4;
}

// GetJointCount`vtordisp{4294967292,0}' @ 14a671514

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetJointCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetJointCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetJointCount((FSkelMeshDNAReader *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetJointCount @ 14a671530

ushort __thiscall FSkelMeshDNAReader::GetJointCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a671581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0xb8))();
  return uVar3;
}

// GetJointGroupCount`vtordisp{4294967292,0}' @ 14a671634

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetJointGroupCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetJointGroupCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetJointGroupCount((FSkelMeshDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetJointGroupCount @ 14a671650

ushort __thiscall FSkelMeshDNAReader::GetJointGroupCount(FSkelMeshDNAReader *this)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
                    /* WARNING: Could not recover jumptable at 0x00014a6716a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)
                        (&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8)) + 0x68)
          )();
  return uVar4;
}

// GetJointGroupInputIndices`vtordisp{4294967292,0}' @ 14a6717d0

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetJointGroupInputIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointGroupInputIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupInputIndices
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupInputIndices @ 14a6717f0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointGroupInputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x78))(plVar5,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetJointGroupJointIndices`vtordisp{4294967292,0}' @ 14a6719a4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetJointGroupJointIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointGroupJointIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupJointIndices
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupJointIndices @ 14a6719c0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointGroupJointIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x90))(plVar5,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetJointGroupLODs`vtordisp{4294967292,0}' @ 14a671b80

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetJointGroupLODs`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointGroupLODs_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupLODs((FSkelMeshDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                             __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupLODs @ 14a671ba0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointGroupLODs
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x70))(plVar5,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetJointGroupOutputIndices`vtordisp{4294967292,0}' @ 14a671d54

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetJointGroupOutputIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointGroupOutputIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupOutputIndices
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupOutputIndices @ 14a671d70

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointGroupOutputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x80))(plVar5,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetJointGroupValues`vtordisp{4294967292,0}' @ 14a671f34

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl
   FSkelMeshDNAReader::GetJointGroupValues`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointGroupValues_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetJointGroupValues((FSkelMeshDNAReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                               __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointGroupValues @ 14a671f50

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointGroupValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x88))(plVar5,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetJointIndexListCount`vtordisp{4294967292,0}' @ 14a672074

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetJointIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetJointIndexListCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetJointIndexListCount
                    ((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94)
                    );
  return uVar1;
}

// GetJointIndexListCount @ 14a672090

ushort __thiscall FSkelMeshDNAReader::GetJointIndexListCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6720e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 200))();
  return uVar3;
}

// GetJointIndicesForLOD`vtordisp{4294967292,0}' @ 14a672284

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetJointIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointIndicesForLOD_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointIndicesForLOD
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointIndicesForLOD @ 14a6722a0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointIndicesForLOD
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xd0))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetJointName`vtordisp{4294967292,0}' @ 14a672580

/* [thunk]:public: virtual class FString __cdecl
   FSkelMeshDNAReader::GetJointName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FSkelMeshDNAReader::GetJointName_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetJointName((FSkelMeshDNAReader *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                        __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetJointName @ 14a6725a0

FString * __thiscall
FSkelMeshDNAReader::GetJointName
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xc0))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetJointParentIndex`vtordisp{4294967292,0}' @ 14a6727a4

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetJointParentIndex`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetJointParentIndex_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,ushort param_1)

{
  ushort uVar1;
  
  uVar1 = GetJointParentIndex((FSkelMeshDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),param_1);
  return uVar1;
}

// GetJointParentIndex @ 14a6727c0

ushort __thiscall FSkelMeshDNAReader::GetJointParentIndex(FSkelMeshDNAReader *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) + 8 +
           *(longlong *)&this[-1].field_0x70);
                    /* WARNING: Could not recover jumptable at 0x00014a672820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4,param_1);
  return uVar3;
}

// GetJointRotationRepresentation @ 14a672880

ERotationRepresentation __thiscall
FSkelMeshDNAReader::GetJointRotationRepresentation(FSkelMeshDNAReader *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  ERotationRepresentation EVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00014a6728d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_1);
  return EVar3;
}

// GetJointRowCount`vtordisp{4294967292,0}' @ 14a672960

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetJointRowCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetJointRowCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetJointRowCount((FSkelMeshDNAReader *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetJointRowCount @ 14a672980

ushort __thiscall FSkelMeshDNAReader::GetJointRowCount(FSkelMeshDNAReader *this)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
                    /* WARNING: Could not recover jumptable at 0x00014a6729d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)
                        (&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8)) + 0x50)
          )();
  return uVar4;
}

// GetJointScaleRepresentation @ 14a672a30

EScaleRepresentation __thiscall
FSkelMeshDNAReader::GetJointScaleRepresentation(FSkelMeshDNAReader *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  EScaleRepresentation EVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00014a672a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
  return EVar3;
}

// GetJointTranslationRepresentation @ 14a672ae0

ETranslationRepresentation __thiscall
FSkelMeshDNAReader::GetJointTranslationRepresentation(FSkelMeshDNAReader *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  ETranslationRepresentation EVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  puVar4 = (undefined8 *)(*(longlong *)&this->field_0x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00014a672b35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)*puVar4)(puVar4,param_1);
  return EVar3;
}

// GetJointVariableAttributeIndices`vtordisp{4294967292,0}' @ 14a672cc4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetJointVariableAttributeIndices`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointVariableAttributeIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetJointVariableAttributeIndices
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetJointVariableAttributeIndices @ 14a672ce0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetJointVariableAttributeIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x60))(plVar5,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetLODCount`vtordisp{4294967292,0}' @ 14a672e24

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetLODCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall FSkelMeshDNAReader::GetLODCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetLODCount((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetLODCount @ 14a672e40

ushort __thiscall FSkelMeshDNAReader::GetLODCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a672e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x78))();
  return uVar3;
}

// GetMLControlCount @ 14a672f40

ushort __thiscall FSkelMeshDNAReader::GetMLControlCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a672f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x30 + 0x20))();
  return uVar3;
}

// GetMLControlName @ 14a673140

FString * __thiscall
FSkelMeshDNAReader::GetMLControlName
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
  (**(code **)(*plVar4 + 8))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMaximumInfluencePerVertex @ 14a673290

ushort __thiscall
FSkelMeshDNAReader::GetMaximumInfluencePerVertex(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  ushort uVar2;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a6732a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x68))(&pIVar1->field_0x10);
    return uVar2;
  }
  return 0;
}

// GetMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' @ 14a673378

/* [thunk]:public: virtual struct FMeshBlendShapeChannelMapping __cdecl
   FSkelMeshDNAReader::GetMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

FMeshBlendShapeChannelMapping __thiscall
FSkelMeshDNAReader::GetMeshBlendShapeChannelMapping_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,ushort param_1)

{
  FMeshBlendShapeChannelMapping FVar1;
  
  FVar1 = GetMeshBlendShapeChannelMapping
                    ((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94)
                     ,param_1);
  return FVar1;
}

// GetMeshBlendShapeChannelMapping @ 14a673390

FMeshBlendShapeChannelMapping __thiscall
FSkelMeshDNAReader::GetMeshBlendShapeChannelMapping(FSkelMeshDNAReader *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FMeshBlendShapeChannelMapping FVar3;
  longlong *plVar4;
  undefined6 in_register_00000012;
  undefined2 in_R8W;
  
  FVar3._2_6_ = in_register_00000012;
  FVar3.MeshIndex._0_2_ = param_1;
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FMeshBlendShapeChannelMapping)(*pcVar1)();
      return FVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x148))(plVar4,FVar3,in_R8W);
  return FVar3;
}

// GetMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}' @ 14a673514

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}' (void)const
   __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetMeshBlendShapeChannelMappingCount_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetMeshBlendShapeChannelMappingCount
                    ((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94)
                    );
  return uVar1;
}

// GetMeshBlendShapeChannelMappingCount @ 14a673530

ushort __thiscall FSkelMeshDNAReader::GetMeshBlendShapeChannelMappingCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a673581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x140))();
  return uVar3;
}

// GetMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}' @ 14a6736b4

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}'
   (unsigned short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetMeshBlendShapeChannelMappingIndicesForLOD_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetMeshBlendShapeChannelMappingIndicesForLOD
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetMeshBlendShapeChannelMappingIndicesForLOD @ 14a6736d0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetMeshBlendShapeChannelMappingIndicesForLOD
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x150))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMeshCount`vtordisp{4294967292,0}' @ 14a673864

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetMeshCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall FSkelMeshDNAReader::GetMeshCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetMeshCount((FSkelMeshDNAReader *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetMeshCount @ 14a673880

ushort __thiscall FSkelMeshDNAReader::GetMeshCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6738d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x120))();
  return uVar3;
}

// GetMeshIndexListCount`vtordisp{4294967292,0}' @ 14a673964

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetMeshIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetMeshIndexListCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetMeshIndexListCount
                    ((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94)
                    );
  return uVar1;
}

// GetMeshIndexListCount @ 14a673980

ushort __thiscall FSkelMeshDNAReader::GetMeshIndexListCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6739d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x130))();
  return uVar3;
}

// GetMeshIndicesForLOD`vtordisp{4294967292,0}' @ 14a673b04

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetMeshIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetMeshIndicesForLOD_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetMeshIndicesForLOD
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetMeshIndicesForLOD @ 14a673b20

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetMeshIndicesForLOD
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x138))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMeshName`vtordisp{4294967292,0}' @ 14a673e00

/* [thunk]:public: virtual class FString __cdecl
   FSkelMeshDNAReader::GetMeshName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FSkelMeshDNAReader::GetMeshName_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetMeshName((FSkelMeshDNAReader *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                       __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetMeshName @ 14a673e20

FString * __thiscall
FSkelMeshDNAReader::GetMeshName
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x128))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMeshRegionCount @ 14a673fa0

ushort __thiscall FSkelMeshDNAReader::GetMeshRegionCount(FSkelMeshDNAReader *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014a673ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
  return uVar3;
}

// GetMeshRegionName @ 14a674190

FString * __thiscall
FSkelMeshDNAReader::GetMeshRegionName
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
  (**(code **)(*plVar4 + 0x30))(plVar4,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetMetaDataCount`vtordisp{4294967292,0}' @ 14a6742b0

/* [thunk]:public: virtual unsigned int __cdecl
   FSkelMeshDNAReader::GetMetaDataCount`vtordisp{4294967292,0}' (void)const __ptr64 */

uint __thiscall
FSkelMeshDNAReader::GetMetaDataCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  uint uVar1;
  
  uVar1 = GetMetaDataCount((FSkelMeshDNAReader *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetMetaDataCount @ 14a6742d0

uint __thiscall FSkelMeshDNAReader::GetMetaDataCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a674321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x48))();
  return uVar3;
}

// GetMetaDataKey`vtordisp{4294967292,0}' @ 14a674510

/* [thunk]:public: virtual class FString __cdecl
   FSkelMeshDNAReader::GetMetaDataKey`vtordisp{4294967292,0}' (unsigned int)const __ptr64 */

FString * __thiscall
FSkelMeshDNAReader::GetMetaDataKey_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,uint param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetMetaDataKey((FSkelMeshDNAReader *)
                          ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                          __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetMetaDataKey @ 14a674530

FString * __thiscall
FSkelMeshDNAReader::GetMetaDataKey
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x50))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMetaDataValue`vtordisp{4294967292,0}' @ 14a674804

/* [thunk]:public: virtual class FString __cdecl
   FSkelMeshDNAReader::GetMetaDataValue`vtordisp{4294967292,0}' (class FString const & __ptr64)const
   __ptr64 */

FString * __thiscall
FSkelMeshDNAReader::GetMetaDataValue_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetMetaDataValue((FSkelMeshDNAReader *)
                            ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                            __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetMetaDataValue @ 14a674820

FString * __thiscall
FSkelMeshDNAReader::GetMetaDataValue
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x58))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetName`vtordisp{4294967292,0}' @ 14a674a90

/* [thunk]:public: virtual class FString __cdecl FSkelMeshDNAReader::GetName`vtordisp{4294967292,0}'
   (void)const __ptr64 */

FString * __thiscall
FSkelMeshDNAReader::GetName_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = GetName((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                   __return_storage_ptr__);
  return pFVar1;
}

// GetName @ 14a674ab0

FString * __thiscall
FSkelMeshDNAReader::GetName(FSkelMeshDNAReader *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x28))(plVar4,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNeuralNetworkCount @ 14a674bc0

ushort __thiscall FSkelMeshDNAReader::GetNeuralNetworkCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a674c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x10))();
  return uVar3;
}

// GetNeuralNetworkIndexListCount @ 14a674c60

ushort __thiscall FSkelMeshDNAReader::GetNeuralNetworkIndexListCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a674ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x18))();
  return uVar3;
}

// GetNeuralNetworkIndicesForLOD @ 14a674e80

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetNeuralNetworkIndicesForLOD
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
  (**(code **)(*plVar4 + 0x20))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetNeuralNetworkIndicesForMeshRegion @ 14a675000

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetNeuralNetworkIndicesForMeshRegion
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
  (**(code **)(*plVar4 + 0x38))(plVar4,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetNeuralNetworkInputIndices @ 14a675190

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetNeuralNetworkInputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
  (**(code **)(*plVar4 + 0x40))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerActivationFunction @ 14a675270

EActivationFunction __thiscall
FSkelMeshDNAReader::GetNeuralNetworkLayerActivationFunction
          (FSkelMeshDNAReader *this,ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  EActivationFunction EVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014a6752d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,param_1,param_2);
  return EVar3;
}

// GetNeuralNetworkLayerActivationFunctionParameters @ 14a6753e0

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetNeuralNetworkLayerActivationFunctionParameters
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
  (**(code **)(*plVar4 + 0x60))(plVar4,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerBiases @ 14a675570

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetNeuralNetworkLayerBiases
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
  (**(code **)(*plVar4 + 0x68))(plVar4,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerCount @ 14a675660

ushort __thiscall
FSkelMeshDNAReader::GetNeuralNetworkLayerCount(FSkelMeshDNAReader *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014a6756b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,param_1);
  return uVar3;
}

// GetNeuralNetworkLayerWeights @ 14a6757b0

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetNeuralNetworkLayerWeights
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
  (**(code **)(*plVar4 + 0x70))(plVar4,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetNeuralNetworkOutputIndices @ 14a675960

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetNeuralNetworkOutputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x30 + 0x20);
  (**(code **)(*plVar4 + 0x48))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetNeutralJointRotation`vtordisp{4294967292,0}' @ 14a675b54

/* [thunk]:public: virtual struct UE::Math::TVector<double> __cdecl
   FSkelMeshDNAReader::GetNeutralJointRotation`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

TVector<double> * __thiscall
FSkelMeshDNAReader::GetNeutralJointRotation_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TVector<double> *__return_storage_ptr__,ushort param_1)

{
  TVector<double> *pTVar1;
  
  pTVar1 = GetNeutralJointRotation
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetNeutralJointRotation @ 14a675b70

TVector<double> * __thiscall
FSkelMeshDNAReader::GetNeutralJointRotation
          (FSkelMeshDNAReader *this,TVector<double> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x160))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetNeutralJointTranslation`vtordisp{4294967292,0}' @ 14a675d70

/* [thunk]:public: virtual struct UE::Math::TVector<double> __cdecl
   FSkelMeshDNAReader::GetNeutralJointTranslation`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

TVector<double> * __thiscall
FSkelMeshDNAReader::GetNeutralJointTranslation_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TVector<double> *__return_storage_ptr__,ushort param_1)

{
  TVector<double> *pTVar1;
  
  pTVar1 = GetNeutralJointTranslation
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                      __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetNeutralJointTranslation @ 14a675d90

TVector<double> * __thiscall
FSkelMeshDNAReader::GetNeutralJointTranslation
          (FSkelMeshDNAReader *this,TVector<double> *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0x158))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPSDColumnIndices`vtordisp{4294967292,0}' @ 14a675fc0

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetPSDColumnIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetPSDColumnIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetPSDColumnIndices((FSkelMeshDNAReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                               __return_storage_ptr__);
  return pTVar1;
}

// GetPSDColumnIndices @ 14a675fe0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetPSDColumnIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x40))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPSDCount`vtordisp{4294967292,0}' @ 14a676190

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetPSDCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall FSkelMeshDNAReader::GetPSDCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetPSDCount((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetPSDCount @ 14a6761b0

ushort __thiscall FSkelMeshDNAReader::GetPSDCount(FSkelMeshDNAReader *this)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
                    /* WARNING: Could not recover jumptable at 0x00014a676201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)
                        (&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8)) + 0x30)
          )();
  return uVar4;
}

// GetPSDRowIndices`vtordisp{4294967292,0}' @ 14a676330

/* [thunk]:public: virtual class TArrayView<unsigned short const ,int> __cdecl
   FSkelMeshDNAReader::GetPSDRowIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetPSDRowIndices_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  TArrayView<unsigned_short_const_,int> *pTVar1;
  
  pTVar1 = GetPSDRowIndices((FSkelMeshDNAReader *)
                            ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                            __return_storage_ptr__);
  return pTVar1;
}

// GetPSDRowIndices @ 14a676350

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetPSDRowIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x38))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPSDValues`vtordisp{4294967292,0}' @ 14a6764f0

/* [thunk]:public: virtual class TArrayView<float const ,int> __cdecl
   FSkelMeshDNAReader::GetPSDValues`vtordisp{4294967292,0}' (void)const __ptr64 */

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetPSDValues_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArrayView<float_const_,int> *pTVar1;
  
  pTVar1 = GetPSDValues((FSkelMeshDNAReader *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                        __return_storage_ptr__);
  return pTVar1;
}

// GetPSDValues @ 14a676510

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetPSDValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  longlong *plVar5;
  
  if (this[-1].GeometryReader.Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = this[-1].GeometryReader.Object;
  plVar5 = (longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 8));
  (**(code **)(*plVar5 + 0x48))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRBFPoseAnimatedMapOutputIndices @ 14a676960

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetRBFPoseAnimatedMapOutputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x20))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFPoseBlendShapeChannelOutputIndices @ 14a676ad0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetRBFPoseBlendShapeChannelOutputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x18))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFPoseControlCount @ 14a676ba0

ushort __thiscall FSkelMeshDNAReader::GetRBFPoseControlCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a676be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)(this->BehaviorReader).Object + 0x38))();
  return uVar3;
}

// GetRBFPoseControlName @ 14a676d80

FString * __thiscall
FSkelMeshDNAReader::GetRBFPoseControlName
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFPoseCount @ 14a676e30

ushort __thiscall FSkelMeshDNAReader::GetRBFPoseCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a676e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)**(undefined8 **)(this->BehaviorReader).Object)();
  return uVar3;
}

// GetRBFPoseInputControlIndices @ 14a676f70

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetRBFPoseInputControlIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x48))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFPoseJointOutputIndices @ 14a6770e0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetRBFPoseJointOutputIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x10))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFPoseJointOutputValues @ 14a677250

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetRBFPoseJointOutputValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x28))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFPoseName @ 14a677460

FString * __thiscall
FSkelMeshDNAReader::GetRBFPoseName
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 8))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFPoseOutputControlIndices @ 14a6775d0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetRBFPoseOutputControlIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFPoseOutputControlWeights @ 14a677740

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetRBFPoseOutputControlWeights
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x58))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFPoseScale @ 14a677810

float __thiscall FSkelMeshDNAReader::GetRBFPoseScale(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
                    /* WARNING: Could not recover jumptable at 0x00014a677861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(**(code **)(*(longlong *)pIVar1 + 0x30))(pIVar1,param_1);
  return fVar4;
}

// GetRBFSolverAutomaticRadius @ 14a6778c0

EAutomaticRadius __thiscall
FSkelMeshDNAReader::GetRBFSolverAutomaticRadius(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  EAutomaticRadius EVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
                    /* WARNING: Could not recover jumptable at 0x00014a677911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar4 = (**(code **)(*(longlong *)pIVar1 + 0xa8))(pIVar1,param_1);
  return EVar4;
}

// GetRBFSolverCount @ 14a677990

ushort __thiscall FSkelMeshDNAReader::GetRBFSolverCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6779d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)(this->BehaviorReader).Object + 0x60))();
  return uVar3;
}

// GetRBFSolverDistanceMethod @ 14a677a30

ERBFDistanceMethod __thiscall
FSkelMeshDNAReader::GetRBFSolverDistanceMethod(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  ERBFDistanceMethod EVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
                    /* WARNING: Could not recover jumptable at 0x00014a677a81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar4 = (**(code **)(*(longlong *)pIVar1 + 0xb8))(pIVar1,param_1);
  return EVar4;
}

// GetRBFSolverFunctionType @ 14a677ae0

ERBFFunctionType __thiscall
FSkelMeshDNAReader::GetRBFSolverFunctionType(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  ERBFFunctionType EVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
                    /* WARNING: Could not recover jumptable at 0x00014a677b31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar4 = (**(code **)(*(longlong *)pIVar1 + 200))(pIVar1,param_1);
  return EVar4;
}

// GetRBFSolverIndexListCount @ 14a677b90

ushort __thiscall FSkelMeshDNAReader::GetRBFSolverIndexListCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a677bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)(this->BehaviorReader).Object + 0x68))();
  return uVar3;
}

// GetRBFSolverIndicesForLOD @ 14a677d40

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetRBFSolverIndicesForLOD
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x70))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFSolverName @ 14a677f50

FString * __thiscall
FSkelMeshDNAReader::GetRBFSolverName
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x78))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFSolverNormalizeMethod @ 14a678020

ERBFNormalizeMethod __thiscall
FSkelMeshDNAReader::GetRBFSolverNormalizeMethod(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  ERBFNormalizeMethod EVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
                    /* WARNING: Could not recover jumptable at 0x00014a678071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar4 = (**(code **)(*(longlong *)pIVar1 + 0xc0))(pIVar1,param_1);
  return EVar4;
}

// GetRBFSolverPoseIndices @ 14a678170

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetRBFSolverPoseIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x88))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFSolverRadius @ 14a678250

float __thiscall FSkelMeshDNAReader::GetRBFSolverRadius(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
                    /* WARNING: Could not recover jumptable at 0x00014a6782a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(**(code **)(*(longlong *)pIVar1 + 0xa0))(pIVar1,param_1);
  return fVar4;
}

// GetRBFSolverRawControlIndices @ 14a6783a0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetRBFSolverRawControlIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x80))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFSolverRawControlValues @ 14a678520

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetRBFSolverRawControlValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x90))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRBFSolverTwistAxis @ 14a678600

ETwistAxis __thiscall
FSkelMeshDNAReader::GetRBFSolverTwistAxis(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  ETwistAxis EVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
                    /* WARNING: Could not recover jumptable at 0x00014a678651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar4 = (**(code **)(*(longlong *)pIVar1 + 0xd0))(pIVar1,param_1);
  return EVar4;
}

// GetRBFSolverType @ 14a6786b0

ERBFSolverType __thiscall
FSkelMeshDNAReader::GetRBFSolverType(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  ERBFSolverType EVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
                    /* WARNING: Could not recover jumptable at 0x00014a678701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar4 = (**(code **)(*(longlong *)pIVar1 + 0x98))(pIVar1,param_1);
  return EVar4;
}

// GetRBFSolverWeightThreshold @ 14a678760

float __thiscall
FSkelMeshDNAReader::GetRBFSolverWeightThreshold(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if ((this->BehaviorReader).Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  pIVar1 = (this->BehaviorReader).Object;
                    /* WARNING: Could not recover jumptable at 0x00014a6787b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(**(code **)(*(longlong *)pIVar1 + 0xb0))(pIVar1,param_1);
  return fVar4;
}

// GetRawControlCount`vtordisp{4294967292,0}' @ 14a678884

/* [thunk]:public: virtual unsigned short __cdecl
   FSkelMeshDNAReader::GetRawControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
FSkelMeshDNAReader::GetRawControlCount_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = GetRawControlCount((FSkelMeshDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return uVar1;
}

// GetRawControlCount @ 14a6788a0

ushort __thiscall FSkelMeshDNAReader::GetRawControlCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6788f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0xa8))();
  return uVar3;
}

// GetRawControlName`vtordisp{4294967292,0}' @ 14a678af0

/* [thunk]:public: virtual class FString __cdecl
   FSkelMeshDNAReader::GetRawControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

FString * __thiscall
FSkelMeshDNAReader::GetRawControlName_vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  FString *pFVar1;
  
  pFVar1 = GetRawControlName((FSkelMeshDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),
                             __return_storage_ptr__,param_1);
  return pFVar1;
}

// GetRawControlName @ 14a678b10

FString * __thiscall
FSkelMeshDNAReader::GetRawControlName
          (FSkelMeshDNAReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
           *(longlong *)&this[-1].field_0x70 + 8);
  (**(code **)(*plVar4 + 0xb0))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRotationUnit`vtordisp{4294967292,0}' @ 14a678e60

/* [thunk]:public: virtual enum ERotationUnit __cdecl
   FSkelMeshDNAReader::GetRotationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

ERotationUnit __thiscall
FSkelMeshDNAReader::GetRotationUnit_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ERotationUnit EVar1;
  
  EVar1 = GetRotationUnit((FSkelMeshDNAReader *)
                          ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return EVar1;
}

// GetRotationUnit @ 14a678e80

ERotationUnit __thiscall FSkelMeshDNAReader::GetRotationUnit(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ERotationUnit EVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a678ed1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x68))();
  return EVar3;
}

// GetSkinWeightsCount @ 14a679020

uint __thiscall FSkelMeshDNAReader::GetSkinWeightsCount(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  uint uVar2;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a679031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x70))(&pIVar1->field_0x10);
    return uVar2;
  }
  return 0;
}

// GetSkinWeightsJointIndices @ 14a679130

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetSkinWeightsJointIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x80))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSkinWeightsValues @ 14a679270

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetSkinWeightsValues
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x78))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSwingBlendWeights @ 14a6793b0

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetSwingBlendWeights
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x10 + 0x40);
  (**(code **)(*plVar4 + 0x48))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetSwingCount @ 14a679490

ushort __thiscall FSkelMeshDNAReader::GetSwingCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6794d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x40) + 0x28))();
  return uVar3;
}

// GetSwingInputControlIndices @ 14a6795d0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetSwingInputControlIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x10 + 0x40);
  (**(code **)(*plVar4 + 0x38))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetSwingOutputJointIndices @ 14a679750

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetSwingOutputJointIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x10 + 0x40);
  (**(code **)(*plVar4 + 0x40))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetSwingSetupTwistAxis @ 14a679830

ETwistAxis __thiscall
FSkelMeshDNAReader::GetSwingSetupTwistAxis(FSkelMeshDNAReader *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  ETwistAxis EVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x10 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00014a679885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
  return EVar3;
}

// GetTranslationUnit`vtordisp{4294967292,0}' @ 14a679910

/* [thunk]:public: virtual enum ETranslationUnit __cdecl
   FSkelMeshDNAReader::GetTranslationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

ETranslationUnit __thiscall
FSkelMeshDNAReader::GetTranslationUnit_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  ETranslationUnit EVar1;
  
  EVar1 = GetTranslationUnit((FSkelMeshDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return EVar1;
}

// GetTranslationUnit @ 14a679930

ETranslationUnit __thiscall FSkelMeshDNAReader::GetTranslationUnit(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ETranslationUnit EVar3;
  
  if (*(longlong *)&this[-1].field_0x70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a679981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*(longlong *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)&this[-1].field_0x70 + 8) + 4) +
                        *(longlong *)&this[-1].field_0x70 + 8) + 0x60))();
  return EVar3;
}

// GetTwistBlendWeights @ 14a679a80

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetTwistBlendWeights
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x10 + 0x40);
  (**(code **)(*plVar4 + 0x20))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTwistCount @ 14a679b60

ushort __thiscall FSkelMeshDNAReader::GetTwistCount(FSkelMeshDNAReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a679ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x10 + 0x40))();
  return uVar3;
}

// GetTwistInputControlIndices @ 14a679ca0

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetTwistInputControlIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x10 + 0x40);
  (**(code **)(*plVar4 + 0x10))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTwistOutputJointIndices @ 14a679e20

TArrayView<unsigned_short_const_,int> * __thiscall
FSkelMeshDNAReader::GetTwistOutputJointIndices
          (FSkelMeshDNAReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short_const_,int> *pTVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x10 + 0x40);
  (**(code **)(*plVar4 + 0x18))(plVar4,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTwistSetupTwistAxis @ 14a679f00

ETwistAxis __thiscall
FSkelMeshDNAReader::GetTwistSetupTwistAxis(FSkelMeshDNAReader *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  ETwistAxis EVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  plVar4 = (longlong *)(*(longlong *)&this->field_0x10 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00014a679f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_1);
  return EVar3;
}

// GetVertexLayout @ 14a67a030

FVertexLayout * __thiscall
FSkelMeshDNAReader::GetVertexLayout
          (FSkelMeshDNAReader *this,FVertexLayout *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x60))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Position = 0;
  __return_storage_ptr__->TextureCoordinate = 0;
  __return_storage_ptr__->Normal = 0;
  return __return_storage_ptr__;
}

// GetVertexLayoutCount @ 14a67a0d0

uint __thiscall FSkelMeshDNAReader::GetVertexLayoutCount(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  uint uVar2;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a67a0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x58))(&pIVar1->field_0x10);
    return uVar2;
  }
  return 0;
}

// GetVertexNormal @ 14a67a200

TVector<double> * __thiscall
FSkelMeshDNAReader::GetVertexNormal
          (FSkelMeshDNAReader *this,TVector<double> *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x40))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetVertexNormalCount @ 14a67a2b0

uint __thiscall FSkelMeshDNAReader::GetVertexNormalCount(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  uint uVar2;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a67a2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x38))(&pIVar1->field_0x10);
    return uVar2;
  }
  return 0;
}

// GetVertexPosition @ 14a67a3e0

TVector<double> * __thiscall
FSkelMeshDNAReader::GetVertexPosition
          (FSkelMeshDNAReader *this,TVector<double> *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 8))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetVertexPositionCount @ 14a67a490

uint __thiscall FSkelMeshDNAReader::GetVertexPositionCount(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  uint uVar2;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a67a4a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)**(undefined8 **)&pIVar1->field_0x10)(&pIVar1->field_0x10);
    return uVar2;
  }
  return 0;
}

// GetVertexPositionXs @ 14a67a5a0

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetVertexPositionXs
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x10))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetVertexPositionYs @ 14a67a6e0

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetVertexPositionYs
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x18))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetVertexPositionZs @ 14a67a820

TArrayView<float_const_,int> * __thiscall
FSkelMeshDNAReader::GetVertexPositionZs
          (FSkelMeshDNAReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  IDNAReader *pIVar1;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x20))(&pIVar1->field_0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetVertexTextureCoordinate @ 14a67a900

FTextureCoordinate __thiscall
FSkelMeshDNAReader::GetVertexTextureCoordinate(FSkelMeshDNAReader *this,ushort param_1,uint param_2)

{
  IDNAReader *pIVar1;
  FTextureCoordinate FVar2;
  undefined6 in_register_00000012;
  
  pIVar1 = (this->BehaviorReader).Object;
  FVar2._2_6_ = in_register_00000012;
  FVar2.U._0_2_ = param_1;
  if (pIVar1 != (IDNAReader *)0x0) {
    (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x30))(&pIVar1->field_0x10);
    return FVar2;
  }
  *(undefined8 *)CONCAT62(in_register_00000012,param_1) = 0;
  return FVar2;
}

// GetVertexTextureCoordinateCount @ 14a67a990

uint __thiscall
FSkelMeshDNAReader::GetVertexTextureCoordinateCount(FSkelMeshDNAReader *this,ushort param_1)

{
  IDNAReader *pIVar1;
  uint uVar2;
  
  pIVar1 = (this->BehaviorReader).Object;
  if (pIVar1 != (IDNAReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a67a9a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)&pIVar1->field_0x10 + 0x28))(&pIVar1->field_0x10);
    return uVar2;
  }
  return 0;
}

// Unload`vtordisp{4294967292,0}' @ 14a683820

/* [thunk]:public: virtual void __cdecl FSkelMeshDNAReader::Unload`vtordisp{4294967292,0}' (enum
   EDNADataLayer) __ptr64 */

void __thiscall
FSkelMeshDNAReader::Unload_vtordisp_4294967292_0__(FSkelMeshDNAReader *this,EDNADataLayer param_1)

{
  Unload((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94),param_1);
  return;
}

// Unload @ 14a683840

void __thiscall FSkelMeshDNAReader::Unload(FSkelMeshDNAReader *this,EDNADataLayer param_1)

{
  undefined1 local_res18 [16];
  
  `FSkelMeshDNAReader::Unload'::__l2::<lambda_1>::operator()(local_res18);
  return;
}

// Unwrap`vtordisp{4294967292,0}' @ 14a6838bc

/* [thunk]:private: virtual class dna::Reader * __ptr64 __cdecl
   FSkelMeshDNAReader::Unwrap`vtordisp{4294967292,0}' (void)const __ptr64 */

Reader * __thiscall FSkelMeshDNAReader::Unwrap_vtordisp_4294967292_0__(FSkelMeshDNAReader *this)

{
  Reader *pRVar1;
  
  pRVar1 = Unwrap((FSkelMeshDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x94));
  return pRVar1;
}

// Unwrap @ 14a6838d0

Reader * __thiscall FSkelMeshDNAReader::Unwrap(FSkelMeshDNAReader *this)

{
  return (Reader *)0x0;
}

// operator() @ 15054f380

bool __thiscall `FSkelMeshDNAReader::Unload'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4910345550131364743>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4910345550131364743>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

