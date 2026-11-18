// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// ~FRemoteObjectStubMap @ 1421b67d0

void __thiscall
UE::RemoteObject::Private::FRemoteObjectStubMap::~FRemoteObjectStubMap(FRemoteObjectStubMap *this)

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
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar11 = 0;
  puVar1 = &this->field_0x18;
  *(undefined ***)this = &___7FRemoteObjectStubMap_Private_RemoteObject_UE__6B_;
  iVar3 = *(int *)&this->field_0x30;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&this->field_0x28;
    if (*(uint **)&this->field_0x28 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1421b687d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1421b687d:
  uVar10 = *(uint *)&this->field_0x30;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,*(int *)&this->field_0x10 - *(int *)&this->field_0x3c);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&this->field_0x30;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&this->field_0x28;
    if (*(undefined1 **)&this->field_0x28 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1421b6980;
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
LAB_1421b6980:
  while( true ) {
    if (*(int *)&this->field_0x10 - *(int *)&this->field_0x3c != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,UE::RemoteObject::Handle::FRemoteObjectStub_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    ::operator_delete(*(void **)(*(longlong *)&this->field_0x8 + 8 +
                                (longlong)TStack_50.CurrentBitIndex * 0x18),0x38);
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,UE::RemoteObject::Handle::FRemoteObjectStub_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,UE::RemoteObject::Handle::FRemoteObjectStub_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,UE::RemoteObject::Handle::FRemoteObjectStub_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  return;
}

// FindOrAdd @ 1421cbb30

FRemoteObjectStub ** __thiscall
UE::RemoteObject::Private::FRemoteObjectStubMap::FindOrAdd
          (FRemoteObjectStubMap *this,FRemoteObjectId param_1)

{
  undefined1 *this_00;
  int iVar1;
  long64 lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int local_res8 [2];
  FRemoteObjectId_u_0 local_res10;
  FRemoteObjectId_u_0 *local_res18 [2];
  
  this_00 = &this->field_0x8;
  uVar7 = param_1.field0_0x0._4_4_ >> 0x16;
  if (param_1.field0_0x0._4_4_ >> 0x16 == FRemoteServerId::GlobalServerId.Id) {
    uVar7 = 0x3fd;
  }
  uVar4 = (ulonglong)uVar7;
  local_res10.Id = uVar4 << 0x36 | (ulonglong)param_1.field0_0x0 & 0x3ffffffffffffe;
  if ((uint)((ulonglong)local_res10 >> 0x36) == FRemoteServerId::GlobalServerId.Id) {
    uVar4 = 0x3fd;
  }
  uVar5 = ((ulonglong)param_1.field0_0x0 & 0x3ffffffffffffe) >> 1;
  uVar7 = (int)((uVar4 << 0x35 | uVar5) >> 0x1f) * 0x17 + (int)uVar5 * 2;
  if (*(int *)&this->field_0x10 != *(int *)&this->field_0x3c) {
    puVar6 = *(undefined1 **)&this->field_0x48;
    if (*(undefined1 **)&this->field_0x48 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x40;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)(*(int *)&this->field_0x50 - 1U & uVar7) * 4);
    while (iVar1 != -1) {
      lVar3 = (longlong)iVar1 * 0x18;
      lVar2 = FRemoteObjectId::Compare
                        ((FRemoteObjectId *)(*(longlong *)this_00 + lVar3),
                         (FRemoteObjectId)local_res10._s_0);
      if (lVar2 == 0) {
        lVar3 = *(longlong *)this_00 + lVar3;
        if (lVar3 != 0) goto LAB_1421cbc44;
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x10 + *(longlong *)this_00);
    }
  }
  local_res18[0] = &local_res10;
  TSet<TTuple<FRemoteObjectId,UE::RemoteObject::Handle::FRemoteObjectStub_*>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,UE::RemoteObject::Handle::FRemoteObjectStub_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FRemoteObjectId_&&>_>
            ((TSet<TTuple<FRemoteObjectId,UE::RemoteObject::Handle::FRemoteObjectStub_*>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,UE::RemoteObject::Handle::FRemoteObjectStub_*,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res8,(TKeyInitializer<FRemoteObjectId_&&> *)(ulonglong)uVar7,
             (bool *)local_res18);
  lVar3 = *(longlong *)this_00 + (longlong)local_res8[0] * 0x18;
LAB_1421cbc44:
  return (FRemoteObjectStub **)(lVar3 + 8);
}

