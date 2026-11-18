// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 3

// IterateInterfaces @ 144535c60

void __thiscall
Audio::ParameterInterfaceRegistryPrivate::FParameterInterfaceRegistry::IterateInterfaces
          (FParameterInterfaceRegistry *this,
          TFunction<void___cdecl(TSharedPtr<Audio::FParameterInterface,1>)> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_a8 [8];
  undefined1 *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined8 local_68;
  TReferenceControllerBase<1> *local_60;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar4 = *(int *)&this->field_0x38;
  puVar1 = &this->field_0x20;
  iStack_98 = 0;
  puVar2 = &this->field_0x10;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&this->field_0x30;
    if (*(uint **)&this->field_0x30 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_144535d0d;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_70 = (int)lVar9;
    iStack_84 = local_70 + -1 + local_80;
    if (iVar4 < iStack_84) {
      iStack_84 = iVar4;
    }
  }
LAB_144535d0d:
  iStack_78 = *(int *)&this->field_0x18 - *(int *)&this->field_0x44;
  uVar13 = *(uint *)&this->field_0x38;
  uStack_88 = 0xffffffff;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_50.CurrentBitIndex = iStack_84;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_50._28_4_ = iStack_84;
  TStack_50.BaseBitIndex = local_80;
  uStack_30 = CONCAT44(uStack_74,iStack_78);
  local_a0 = puVar2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_58 = (longlong *)puVar2;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&this->field_0x38;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&this->field_0x30;
    if (*(undefined1 **)&this->field_0x30 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144535e10;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_144535e10:
  while( true ) {
    plVar10 = local_58;
    if ((int)local_58[1] - *(int *)((longlong)local_58 + 0x34) != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TSharedPtr<Audio::FParameterInterface,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (((TStack_50.CurrentBitIndex == uVar13) &&
        (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (plVar10 == (longlong *)puVar2)) break;
    lVar9 = *plVar10;
    local_68 = *(undefined8 *)(lVar9 + (longlong)TStack_50.CurrentBitIndex * 0x18);
    local_60 = *(TReferenceControllerBase<1> **)
                (lVar9 + (longlong)TStack_50.CurrentBitIndex * 0x18 + 8);
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar6 = *(code **)param_1;
    plVar10 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar10 = (longlong *)&param_1->field_0x10;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar6)(uVar8,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// OnRegistration @ 144536570

void __thiscall
Audio::ParameterInterfaceRegistryPrivate::FParameterInterfaceRegistry::OnRegistration
          (FParameterInterfaceRegistry *this,
          TUniqueFunction<void___cdecl(TSharedPtr<Audio::FParameterInterface,1>)> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&this->field_0x60;
  uVar3 = *(undefined8 *)&this->field_0x68;
  uVar4 = *(undefined8 *)&this->field_0x70;
  uVar5 = *(undefined8 *)&this->field_0x78;
  uVar6 = *(undefined8 *)&this->field_0x80;
  uVar7 = *(undefined8 *)&this->field_0x88;
  *(undefined8 *)&this->field_0x60 = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x68 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x78 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&this->field_0x80 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x88 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  return;
}

// RegisterInterface @ 144536b80

void __thiscall
Audio::ParameterInterfaceRegistryPrivate::FParameterInterfaceRegistry::RegisterInterface
          (FParameterInterfaceRegistry *this,TSharedPtr<Audio::FParameterInterface,1> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  FParameterInterface *local_18;
  TReferenceControllerBase<1> *local_10;
  
  TSet<TSharedPtr<Audio::FParameterInterface,1>,DefaultKeyFuncs<TSharedPtr<Audio::FParameterInterface,1>,0>,FDefaultSetAllocator>
  ::Emplace<TSharedPtr<Audio::FParameterInterface,1>_const_&>
            ((TSet<TSharedPtr<Audio::FParameterInterface,1>,DefaultKeyFuncs<TSharedPtr<Audio::FParameterInterface,1>,0>,FDefaultSetAllocator>
              *)&this->field_0x10,(TSharedPtr<Audio::FParameterInterface,1> *)&stack0x00000008,
             (bool *)param_1);
  if (*(longlong *)&this->field_0x60 != 0) {
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x60);
    pcVar1 = *(code **)&this->field_0x60;
    plVar3 = (longlong *)&this->field_0x70;
    if (*(longlong **)&this->field_0x88 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x88;
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

