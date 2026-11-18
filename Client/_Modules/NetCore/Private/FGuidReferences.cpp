// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 10

// FGuidReferences @ 1441d1940

FGuidReferences * __thiscall
FGuidReferences::FGuidReferences(FGuidReferences *this,FGuidReferences *param_1)

{
  this->ParentIndex = param_1->ParentIndex;
  this->CmdIndex = param_1->CmdIndex;
  this->NumBufferBits = param_1->NumBufferBits;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements = 0;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x34 = 0;
  (this->UnmappedGUIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UnmappedGUIDs).HashSize = 0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
  Move<TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
            (&this->UnmappedGUIDs,&param_1->UnmappedGUIDs);
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements = 0;
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x34 = 0;
  (this->MappedDynamicGUIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MappedDynamicGUIDs).HashSize = 0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
  Move<TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
            (&this->MappedDynamicGUIDs,&param_1->MappedDynamicGUIDs);
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).AllocatorInstance.Data = (param_1->Buffer).AllocatorInstance.Data;
  (param_1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = (param_1->Buffer).ArrayNum;
  (this->Buffer).ArrayMax = (param_1->Buffer).ArrayMax;
  (param_1->Buffer).ArrayNum = 0;
  (param_1->Buffer).ArrayMax = 0;
  this->Array = param_1->Array;
  (this->PackageMap).WeakPtr = (param_1->PackageMap).WeakPtr;
  param_1->Array =
       (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
        *)0x0;
  param_1->NumBufferBits = 0;
  (param_1->PackageMap).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// FGuidReferences @ 1441d1a50

FGuidReferences * __thiscall
FGuidReferences::FGuidReferences
          (FGuidReferences *this,FBitReader *param_1,FBitReaderMark *param_2,
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *param_3,
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *param_4,
          int param_5,int param_6,UPackageMap *param_7)

{
  UPackageMap *pUVar1;
  
  this->ParentIndex = param_5;
  this->CmdIndex = param_6;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements = 0;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x34 = 0;
  (this->UnmappedGUIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UnmappedGUIDs).HashSize = 0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
            (&this->UnmappedGUIDs,param_3);
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements = 0;
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x34 = 0;
  (this->MappedDynamicGUIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MappedDynamicGUIDs).HashSize = 0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
            (&this->MappedDynamicGUIDs,param_4);
  pUVar1 = param_7;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0;
  this->Array = (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                 *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_7 != (UPackageMap *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_7);
  }
  (this->PackageMap).WeakPtr = (FWeakObjectPtr)0x0;
  param_7 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPackageMap *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&(this->PackageMap).WeakPtr,(FObjectPtr)&param_7);
  this->NumBufferBits = (int)param_1->Pos - (int)param_2->Pos;
  FBitReaderMark::Copy(param_2,param_1,&this->Buffer);
  TrackAllUnmappedGUIDs(this);
  return this;
}

// FGuidReferences @ 1441d1bb0

FGuidReferences * __thiscall
FGuidReferences::FGuidReferences(FGuidReferences *this,FGuidReferences *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *this_00;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *pTVar4;
  
  pTVar4 = (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
            *)0x0;
  this->ParentIndex = param_1->ParentIndex;
  this->CmdIndex = param_1->CmdIndex;
  this->NumBufferBits = param_1->NumBufferBits;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements = 0;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x34 = 0;
  (this->UnmappedGUIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UnmappedGUIDs).HashSize = 0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
            (&this->UnmappedGUIDs,&param_1->UnmappedGUIDs);
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements = 0;
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x34 = 0;
  (this->MappedDynamicGUIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MappedDynamicGUIDs).HashSize = 0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
            (&this->MappedDynamicGUIDs,&param_1->MappedDynamicGUIDs);
  pTVar2 = &this->Buffer;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Buffer).ArrayMax;
  iVar3 = (param_1->Buffer).ArrayNum;
  _Src = (param_1->Buffer).AllocatorInstance.Data;
  (this->Buffer).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  this->Array = (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                 *)0x0;
  (this->PackageMap).WeakPtr = (param_1->PackageMap).WeakPtr;
  if (param_1->Array !=
      (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
       *)0x0) {
    this_00 = ::operator_new(0x50);
    if (this_00 !=
        (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
         *)0x0) {
      TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
      ::
      TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                ((TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                  *)this_00,
                 (TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                  *)param_1->Array);
      pTVar4 = this_00;
    }
    this->Array = pTVar4;
  }
  TrackAllUnmappedGUIDs(this);
  return this;
}

// ~FGuidReferences @ 1441d3b40

void __thiscall FGuidReferences::~FGuidReferences(FGuidReferences *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *this_00;
  FScriptContainerElement *pFVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UObject *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this_00 = this->Array;
  if (this_00 !=
      (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
       *)0x0) {
    TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
    ::
    ~TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
              ((TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                *)this_00);
    ::operator_delete(this_00,0x50);
  }
  if ((UE::Net::Private::bRemapStableSubobjects != false) &&
     (pUVar10 = FWeakObjectPtr::Get(&(this->PackageMap).WeakPtr), pUVar10 != (UObject *)0x0)) {
    iVar3 = *(int *)&(this->UnmappedGUIDs).Elements.field_0x28;
    iVar14 = 0;
    iVar16 = 0;
    puVar1 = &(this->UnmappedGUIDs).Elements.field_0x10;
    uVar8 = 1;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&(this->UnmappedGUIDs).Elements.field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1441d3c4e;
        uVar13 = puVar17[lVar11 + 1];
      }
      uVar8 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res10 = (int)lVar11;
      iVar9 = local_res10 + -1 + iVar16;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_1441d3c4e:
    uVar13 = *(uint *)&(this->UnmappedGUIDs).Elements.field_0x28;
    uVar12 = uVar13 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar8,iVar14);
    TStack_60.CurrentBitIndex = iVar9;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_60._28_4_ = iVar9;
    TStack_60.BaseBitIndex = iVar16;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->UnmappedGUIDs).Elements.field_0x8 -
                         *(int *)&(this->UnmappedGUIDs).Elements.field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = *(uint *)&(this->UnmappedGUIDs).Elements.field_0x28;
    if (uVar13 != uVar8) {
      puVar15 = *(undefined1 **)&(this->UnmappedGUIDs).Elements.field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar14;
        uVar12 = uVar12 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1441d3d60;
        uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar13 = (int)lVar11 + -1 + uVar12;
      if ((int)uVar8 < (int)uVar13) {
        uVar13 = uVar8;
      }
    }
LAB_1441d3d60:
    while( true ) {
      if (*(int *)&(this->UnmappedGUIDs).Elements.field_0x8 -
          *(int *)&(this->UnmappedGUIDs).Elements.field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar13) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (**(code **)(*(longlong *)pUVar10 + 0x310))
                (pUVar10,*(undefined8 *)
                          (*(longlong *)&(this->UnmappedGUIDs).Elements +
                          (longlong)TStack_60.CurrentBitIndex * 0x10));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  pFVar4 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  (this->MappedDynamicGUIDs).HashSize = 0;
  FVar5 = (this->MappedDynamicGUIDs).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MappedDynamicGUIDs).Elements);
  (this->UnmappedGUIDs).HashSize = 0;
  FVar5 = (this->UnmappedGUIDs).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UnmappedGUIDs).Elements);
  return;
}

// operator= @ 1441d4fb0

FGuidReferences * __thiscall
FGuidReferences::operator=(FGuidReferences *this,FGuidReferences *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    this_00 = this->Array;
    if (this_00 !=
        (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
         *)0x0) {
      TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
      ::
      ~TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                ((TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                  *)this_00);
      ::operator_delete(this_00,0x50);
    }
    this->ParentIndex = param_1->ParentIndex;
    this->CmdIndex = param_1->CmdIndex;
    this->NumBufferBits = param_1->NumBufferBits;
    if (&this->UnmappedGUIDs != &param_1->UnmappedGUIDs) {
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Move<TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
                (&this->UnmappedGUIDs,&param_1->UnmappedGUIDs);
    }
    if (&this->MappedDynamicGUIDs != &param_1->MappedDynamicGUIDs) {
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Move<TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
                (&this->MappedDynamicGUIDs,&param_1->MappedDynamicGUIDs);
    }
    pTVar1 = &param_1->Buffer;
    pTVar2 = &this->Buffer;
    if (pTVar2 != pTVar1) {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Buffer).ArrayNum = (param_1->Buffer).ArrayNum;
      (this->Buffer).ArrayMax = (param_1->Buffer).ArrayMax;
      (param_1->Buffer).ArrayNum = 0;
      (param_1->Buffer).ArrayMax = 0;
    }
    this->Array = param_1->Array;
    (this->PackageMap).WeakPtr = (param_1->PackageMap).WeakPtr;
    param_1->Array =
         (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
          *)0x0;
    param_1->NumBufferBits = 0;
    (param_1->PackageMap).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return this;
}

// AddUnmappedGUID @ 1441d6980

void __thiscall FGuidReferences::AddUnmappedGUID(FGuidReferences *this,FNetworkGUID param_1)

{
  UObject *pUVar1;
  FNetworkGUID_u_0 local_res10;
  FNetworkGUID local_res18;
  
  local_res10 = param_1.field0_0x0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
  Emplace<FNetworkGUID_const_&>(&this->UnmappedGUIDs,&local_res18,(bool *)&local_res10);
  if ((UE::Net::Private::bRemapStableSubobjects != false) &&
     (pUVar1 = FWeakObjectPtr::Get(&(this->PackageMap).WeakPtr), pUVar1 != (UObject *)0x0)) {
    pUVar1 = FWeakObjectPtr::Get(&(this->PackageMap).WeakPtr);
    (**(code **)(*(longlong *)pUVar1 + 0x308))(pUVar1,param_1.field0_0x0);
  }
  return;
}

// RemoveUnmappedGUID @ 1441e8200

/* WARNING: Removing unreachable block (ram,0x0001441e828e) */

void __thiscall FGuidReferences::RemoveUnmappedGUID(FGuidReferences *this,FNetworkGUID param_1)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->UnmappedGUIDs).Elements.field_0x8 !=
      *(int *)&(this->UnmappedGUIDs).Elements.field_0x34) {
    FVar5 = (this->UnmappedGUIDs).Hash.SecondaryData;
    bVar2 = false;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->UnmappedGUIDs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 +
                    ((longlong)(int)(param_1.field0_0x0._4_4_ * 0x17 + param_1.field0_0x0.Value) &
                    (longlong)(this->UnmappedGUIDs).HashSize - 1U) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->UnmappedGUIDs).Elements;
      do {
        if ((FNetworkGUID_u_0)((FNetworkGUID_u_0 *)(lVar1 + (longlong)iVar4 * 0x10))->ObjectId ==
            param_1.field0_0x0) {
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::RemoveByIndex
                    (&this->UnmappedGUIDs,iVar4);
          bVar2 = true;
          break;
        }
        iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
    if (((bVar2) && (UE::Net::Private::bRemapStableSubobjects != false)) &&
       (pUVar3 = FWeakObjectPtr::Get(&(this->PackageMap).WeakPtr), pUVar3 != (UObject *)0x0)) {
      pUVar3 = FWeakObjectPtr::Get(&(this->PackageMap).WeakPtr);
      (**(code **)(*(longlong *)pUVar3 + 0x310))(pUVar3,param_1.field0_0x0);
    }
  }
  return;
}

// TrackAllUnmappedGUIDs @ 1441eeb50

void __thiscall FGuidReferences::TrackAllUnmappedGUIDs(FGuidReferences *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((UE::Net::Private::bRemapStableSubobjects) &&
     (pUVar8 = FWeakObjectPtr::Get(&(this->PackageMap).WeakPtr), pUVar8 != (UObject *)0x0)) {
    iVar3 = *(int *)&(this->UnmappedGUIDs).Elements.field_0x28;
    iVar12 = 0;
    iVar14 = 0;
    uVar6 = 1;
    puVar1 = &(this->UnmappedGUIDs).Elements.field_0x10;
    iVar7 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->UnmappedGUIDs).Elements.field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1441eec3d;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar6 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar7 = local_res18 + -1 + iVar14;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_1441eec3d:
    uVar11 = *(uint *)&(this->UnmappedGUIDs).Elements.field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar6,iVar12);
    TStack_60.CurrentBitIndex = iVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar7;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->UnmappedGUIDs).Elements.field_0x8 -
                         *(int *)&(this->UnmappedGUIDs).Elements.field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)&(this->UnmappedGUIDs).Elements.field_0x28;
    if (uVar11 != uVar6) {
      puVar13 = *(undefined1 **)&(this->UnmappedGUIDs).Elements.field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1441eed50;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar10;
      if ((int)uVar6 < (int)uVar11) {
        uVar11 = uVar6;
      }
    }
LAB_1441eed50:
    while( true ) {
      if (*(int *)&(this->UnmappedGUIDs).Elements.field_0x8 -
          *(int *)&(this->UnmappedGUIDs).Elements.field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (**(code **)(*(longlong *)pUVar8 + 0x308))
                (pUVar8,*(undefined8 *)
                         (*(longlong *)&(this->UnmappedGUIDs).Elements +
                         (longlong)TStack_60.CurrentBitIndex * 0x10));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// UpdateUnmappedGUIDs @ 1441f1870

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGuidReferences::UpdateUnmappedGUIDs
          (FGuidReferences *this,UPackageMap *param_1,UObject *param_2,FProperty *param_3,
          int param_4)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  bool *pbVar8;
  FNetworkGUID local_res8;
  FName local_res10;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  undefined1 local_68 [12];
  uint local_5c;
  longlong local_58;
  uint local_50;
  int local_4c;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *local_40;
  
  if ((param_1 == (UPackageMap *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPackageMap != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\GuidReferences.cpp"
                         ,0x8c,L"FGuidReferences::UpdateUnmappedGUIDs: invalid PackageMap"), bVar3))
  {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  bVar3 = false;
  bVar7 = false;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::TIterator::TIterator
            ((TIterator *)local_68,&this->UnmappedGUIDs);
  if (local_4c < *(int *)(local_58 + 0x18)) {
    do {
      iVar2 = local_4c;
      pbVar8 = (bool *)((longlong)local_4c * 0x10 + *(longlong *)local_68._0_8_);
      cVar5 = (**(code **)(param_1->_padding_ + 0x340))(param_1,pbVar8,0);
      bVar7 = bVar3;
      if (cVar5 == '\0') {
        lVar6 = (**(code **)(param_1->_padding_ + 0x330))(param_1,pbVar8);
        if (lVar6 != 0) {
          if (6 < (byte)LogNetCore._0_1_) {
            local_res10 = *(FName *)(lVar6 + 0x18);
            ::FName::ToString(&local_res10,&local_78);
            bVar3 = IsThisNotNull(param_3,"FField::GetName");
            if (bVar3) {
              ::FName::ToString((FName *)&param_3->_padding_,&local_a8);
            }
            else {
              ::FString::FString(&local_a8,L"None");
            }
            ::FString::PrintfImpl(&local_88,L"%llu");
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          if ((*(ulonglong *)pbVar8 != 0) && ((*(ulonglong *)pbVar8 & 1) == 0)) {
            TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
            Emplace<FNetworkGUID_const_&>(&this->MappedDynamicGUIDs,&local_res8,pbVar8);
          }
          (**(code **)(param_1->_padding_ + 0x310))(param_1,*(undefined8 *)pbVar8);
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::RemoveByIndex
                    (local_40,iVar2);
          bVar7 = true;
        }
      }
      else {
        if (2 < (byte)LogNetCore._0_1_) {
          ::FString::PrintfImpl(&local_98,L"%llu");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        (**(code **)(param_1->_padding_ + 0x310))(param_1,*(undefined8 *)pbVar8);
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::RemoveByIndex
                  (local_40,iVar2);
      }
      local_50 = local_50 & ~local_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_68 + 8));
      bVar3 = bVar7;
    } while (local_4c < *(int *)(local_58 + 0x18));
  }
  return bVar7;
}

// operator() @ 1504b1ac0

bool __thiscall `FGuidReferences::RemoveUnmappedGUID'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3835504940353060993>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3835504940353060993>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

