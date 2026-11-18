// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FGuidReferences @ 1484ba4b0

FGuidReferences * __thiscall
FGuidReferences::FGuidReferences
          (FGuidReferences *this,
          TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
          *param_1,int param_2,int param_3,UPackageMap *param_4)

{
  UPackageMap *pUVar1;
  
  pUVar1 = param_4;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements = 0;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UnmappedGUIDs).Elements.field_0x20 = 0;
  this->NumBufferBits = 0;
  this->ParentIndex = param_2;
  this->CmdIndex = param_3;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnmappedGUIDs).Elements.field_0x34 = 0;
  (this->UnmappedGUIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UnmappedGUIDs).HashSize = 0;
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements = 0;
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MappedDynamicGUIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MappedDynamicGUIDs).Elements.field_0x34 = 0;
  (this->MappedDynamicGUIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MappedDynamicGUIDs).HashSize = 0;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0;
  this->Array = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UPackageMap *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  (this->PackageMap).WeakPtr = (FWeakObjectPtr)0x0;
  param_4 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPackageMap *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&(this->PackageMap).WeakPtr,(FObjectPtr)&param_4);
  return this;
}

// CountBytes @ 1484cc4e0

void __thiscall FGuidReferences::CountBytes(FGuidReferences *this,FArchive *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *pTVar4;
  code *pcVar5;
  bool bVar6;
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
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
            (&this->UnmappedGUIDs,param_1);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
            (&this->MappedDynamicGUIDs,param_1);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)(this->Buffer).ArrayNum);
  if ((TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
       *)this->Array !=
      (TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
       *)0x0) {
    TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
                  *)this->Array,param_1);
    pTVar4 = this->Array;
    iVar12 = 0;
    iVar3 = *(int *)&pTVar4->field_0x28;
    puVar1 = &pTVar4->field_0x10;
    uVar7 = 1;
    iVar14 = 0;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&pTVar4->field_0x20;
      if (*(uint **)&pTVar4->field_0x20 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1484cc5ed;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar7 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res10 = (int)lVar9;
      iVar8 = local_res10 + -1 + iVar14;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_1484cc5ed:
    uVar11 = *(uint *)&pTVar4->field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar12);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,*(int *)&pTVar4->field_0x8 - *(int *)&pTVar4->field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)&pTVar4->field_0x28;
    if (uVar11 != uVar7) {
      puVar13 = *(undefined1 **)&pTVar4->field_0x20;
      if (*(undefined1 **)&pTVar4->field_0x20 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1484cc700;
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
LAB_1484cc700:
    while( true ) {
      if (*(int *)&pTVar4->field_0x8 - *(int *)&pTVar4->field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      CountBytes((FGuidReferences *)
                 ((longlong)TStack_60.CurrentBitIndex * 0xe0 + *(longlong *)pTVar4 + 8),param_1);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

