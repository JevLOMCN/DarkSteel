// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 4

// ~FFastGeoGatherFastGeoContainerAssetRefsArchive @ 14da1b480

void __thiscall
FFastGeoGatherFastGeoContainerAssetRefsArchive::~FFastGeoGatherFastGeoContainerAssetRefsArchive
          (FFastGeoGatherFastGeoContainerAssetRefsArchive *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->UniqueAssets).HashSize = 0;
  FVar1 = (this->UniqueAssets).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UniqueAssets).Elements);
  (this->KnownClasses).HashSize = 0;
  FVar1 = (this->KnownClasses).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->KnownClasses).Elements);
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator<< @ 14da1c120

FArchive * __thiscall
FFastGeoGatherFastGeoContainerAssetRefsArchive::operator<<
          (FFastGeoGatherFastGeoContainerAssetRefsArchive *this,UObject **param_1)

{
  UObject *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FArchive *pFVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  UObject *local_res8;
  
  if ((((UObjectBaseUtility *)*param_1 == (UObjectBaseUtility *)0x0) ||
      (bVar4 = UObjectBaseUtility::IsTemplate
                         ((UObjectBaseUtility *)*param_1,RF_ArchetypeObject|RF_ClassDefaultObject),
      bVar4)) || ((*(uint *)&(*param_1)->field_0x8 & 0x40) != 0)) {
    return (FArchive *)this;
  }
  pUVar1 = *param_1;
  uVar7 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->UniqueAssets).Elements.field_0x8 !=
      *(int *)&(this->UniqueAssets).Elements.field_0x34) {
    FVar8 = (this->UniqueAssets).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->UniqueAssets).Hash;
    }
    iVar5 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->UniqueAssets).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->UniqueAssets).Elements;
      do {
        if (*(UObject **)(lVar2 + (longlong)iVar5 * 0x10) == pUVar1) {
          return (FArchive *)this;
        }
        iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = IsKnownClass(this,*(UClass **)&pUVar1->field_0x10);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsKnownClass(Obj->GetClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x259,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FArchive *)(*pcVar3)();
    return pFVar6;
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
            (&this->UniqueAssets,&local_res8,(bool *)param_1);
  return (FArchive *)this;
}

// operator<< @ 14da1c250

FArchive * __thiscall
FFastGeoGatherFastGeoContainerAssetRefsArchive::operator<<
          (FFastGeoGatherFastGeoContainerAssetRefsArchive *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FArchive *pFVar2;
  FObjectPtr_u_0 local_res8;
  
  local_res8 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  pFVar2 = (FArchive *)(**(code **)(this->_padding_ + 0x168))(this,&local_res8);
  FVar1 = local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.Handle != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable(local_res8.Handle);
  }
  (param_1->field0_0x0).Handle = (UObject *)FVar1;
  return pFVar2;
}

// IsKnownClass @ 14da2d970

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FFastGeoGatherFastGeoContainerAssetRefsArchive::IsKnownClass
          (FFastGeoGatherFastGeoContainerAssetRefsArchive *this,UClass *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->KnownClasses).Elements.field_0x10;
  iVar3 = *(int *)&(this->KnownClasses).Elements.field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->KnownClasses).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14da2da1d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14da2da1d:
  uVar11 = *(uint *)&(this->KnownClasses).Elements.field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->KnownClasses).Elements.field_0x8 -
                       *(int *)&(this->KnownClasses).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->KnownClasses).Elements.field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->KnownClasses).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14da2db20;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14da2db20:
  while( true ) {
    if (*(int *)&(this->KnownClasses).Elements.field_0x8 -
        *(int *)&(this->KnownClasses).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = *(longlong *)
             (*(longlong *)&(this->KnownClasses).Elements +
             (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (lVar9 != 0) {
      if (((int)param_1->_padding_ < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)(param_1->_padding_ + (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30))
      {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        return true;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

