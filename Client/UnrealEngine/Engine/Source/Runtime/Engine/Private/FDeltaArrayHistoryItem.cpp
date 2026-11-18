// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CountBytes @ 1484cc070

void __thiscall FDeltaArrayHistoryItem::CountBytes(FDeltaArrayHistoryItem *this,FArchive *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88;
  FString local_78;
  FScopeMarker local_68;
  
  ::FString::FString(&local_88,"FDeltaArrayHistoryItem::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_68,param_1,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_68);
  TSet<TTuple<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,param_1);
  iVar3 = *(int *)&(this->ChangelistByID).field_0x28;
  puVar1 = &(this->ChangelistByID).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ChangelistByID).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1484cc14e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar13 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1484cc14e:
  uVar10 = *(uint *)&(this->ChangelistByID).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar6,iVar11);
  TStack_b0.CurrentBitIndex = iVar7;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_b0._28_4_ = iVar7;
  TStack_b0.BaseBitIndex = iVar13;
  uStack_90 = CONCAT44(uStack_bc,
                       *(int *)&(this->ChangelistByID).field_0x8 -
                       *(int *)&(this->ChangelistByID).field_0x34);
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ChangelistByID).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ChangelistByID).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1484cc250;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1484cc250:
  while( true ) {
    if (*(int *)&(this->ChangelistByID).field_0x8 - *(int *)&(this->ChangelistByID).field_0x34 !=
        (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_b0.CurrentBitIndex == uVar10) &&
       (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)
                       *(int *)((longlong)TStack_b0.CurrentBitIndex * 0x20 + 0x10 +
                               *(longlong *)&this->ChangelistByID) * 2,
               (longlong)
               *(int *)((longlong)TStack_b0.CurrentBitIndex * 0x20 + 0x14 +
                       *(longlong *)&this->ChangelistByID) * 2);
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  ::FString::FString(&local_78,"ChangelistByID");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_68,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_68);
  return;
}

