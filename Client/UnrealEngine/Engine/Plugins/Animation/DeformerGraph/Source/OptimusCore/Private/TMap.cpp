// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 36

// Append<FDefaultSetAllocator> @ 14e125d80

void __thiscall
TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
::Append<FDefaultSetAllocator>
          (TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
           *this,TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> *pTVar9;
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
  
  TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e125e2d;
      uVar11 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e125e2d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
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
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e125f30;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14e125f30:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pTVar9 = (TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> *)
             ((longlong)TStack_60.CurrentBitIndex * 0x60 + *(longlong *)param_1);
    TMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
    ::
    Emplace<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_const_&,FOptimusDataInterfacePropertyOverrideInfo_const_&>
              ((TMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
                *)this,pTVar9,(FOptimusDataInterfacePropertyOverrideInfo *)(pTVar9 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_> @ 14e14c0c0

TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
* __thiscall
TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
::
TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
          (TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
           *this,TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0x38,(int *)&this->field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  return this;
}

// TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_> @ 14e14c130

TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
* __thiscall
TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
::
TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
          (TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<UOptimusNode_const_*,enum_EOptimusValueUsage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,enum_EOptimusValueUsage,0>_> @ 14e14c170

TMap<UOptimusNode_const_*,EOptimusValueUsage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,EOptimusValueUsage,0>_>
* __thiscall
TMap<UOptimusNode_const_*,enum_EOptimusValueUsage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,enum_EOptimusValueUsage,0>_>
::
TMap<UOptimusNode_const_*,enum_EOptimusValueUsage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,enum_EOptimusValueUsage,0>_>
          (void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  return this;
}

// TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_> @ 14e14c1b0

TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
* __thiscall
TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
::
TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
          (TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
           *this,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_> @ 14e14c2d0

TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
* __thiscall
TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
::
TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
          (TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_> @ 14e14c310

TMap<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
* __thiscall
TMap<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
::
TMap<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
          (TMap<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>_> @ 14e14c350

TMap<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMap<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>_>
::
TMap<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>_>
          (TMap<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_> @ 14e14c390

TMap<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
* __thiscall
TMap<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
::
TMap<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
          (TMap<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_> @ 14e14c3d0

TMap<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_>
* __thiscall
TMap<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_>
::
TMap<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_>
          (TMap<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_> @ 14e14c410

TMap<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMap<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
::
TMap<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
          (TMap<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>_> @ 14e14c450

TMap<FOptimusRoutedConstNode,EOptimusNodeGraphType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,EOptimusNodeGraphType,0>_>
* __thiscall
TMap<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>_>
::
TMap<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>_>
          (void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  return this;
}

// TMap<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_> @ 14e14c490

TMap<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_>
* __thiscall
TMap<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_>
::
TMap<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_>
          (TMap<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_> @ 14e14c4d0

TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
* __thiscall
TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
::
TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
          (TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> @ 14e14c510

TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> * __thiscall
TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// TMap<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_> @ 14e14c630

TMap<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
* __thiscall
TMap<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
::
TMap<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
          (TMap<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
           *this,initializer_list<TPairInitializer<FName_const_&,UScriptStruct_*_const_&>_> *param_1
          )

{
  TPairInitializer<FName_const_&,UScriptStruct_*_const_&> *pTVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  TPairInitializer<FName_const_&,UScriptStruct_*_const_&> *pTVar13;
  undefined8 local_78;
  UScriptStruct **ppUStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar7 = 0;
  pTVar13 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar10 = (uint)((longlong)pTVar1 - (longlong)pTVar13 >> 4);
  if (uVar10 == 0) goto joined_r0x00014e14c8a1;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar10 <= *(int *)&this->field_0x48))
  goto joined_r0x00014e14c8a1;
  *(uint *)&this->field_0x48 = uVar10;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar10 != 0) {
    uVar5 = uVar10;
    if (uVar10 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar5 = 0;
        goto LAB_14e14c70b;
      }
    }
    else {
LAB_14e14c70b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar5,4);
    }
    if (0 < (int)uVar10) {
      uVar11 = (ulonglong)uVar10;
      uVar8 = uVar7;
      do {
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar4 = uVar8 & (longlong)(int)uVar10 - 1U;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(puVar6 + uVar4 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar10 = *(uint *)&this->field_0x28;
    ppUStack_70 = (UScriptStruct **)&this->field_0x10;
    local_78 = (FName *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar10 != 0) {
      puVar12 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar12 = (uint *)ppUStack_70;
      }
      uVar5 = *puVar12;
      uVar8 = uVar7;
      while (uVar5 == 0) {
        iVar9 = (int)uVar7;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uVar5 = iVar9 + 1;
        uVar7 = (ulonglong)local_78 >> 0x20;
        local_78 = (FName *)CONCAT44((int)uVar7,uVar5);
        uVar7 = (ulonglong)uVar5;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar5)
        goto LAB_14e14c7fb;
        uVar5 = puVar12[(longlong)iVar9 + 1];
      }
      local_78 = (FName *)CONCAT44(-uVar5 & uVar5,SUB84(local_78,0));
      uVar7 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar10 < (int)uStack_64) {
LAB_14e14c7fb:
        uVar7 = (ulonglong)uVar10;
        uStack_64 = uVar10;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)ppUStack_70;
    if ((int)uVar7 < (int)uVar10) {
      do {
        iVar9 = (int)uVar7;
        uVar2 = *(undefined8 *)(*(longlong *)local_58 + (longlong)iVar9 * 0x18);
        lVar3 = *(longlong *)local_58 + (longlong)iVar9 * 0x18;
        uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar10 = *(int *)&this->field_0x48 - 1U & uVar10 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)(lVar3 + 0x14) = uVar10;
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar7 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(puVar6 + uVar7 * 4);
        *(int *)(puVar6 + uVar7 * 4) = iVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014e14c8a1:
  for (; pTVar13 != pTVar1; pTVar13 = pTVar13 + 1) {
    local_78 = pTVar13->Key;
    ppUStack_70 = pTVar13->Value;
    TSet<TTuple<FName,UScriptStruct_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,UScriptStruct_*_const_&>_>
              ((TSet<TTuple<FName,UScriptStruct_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,UScriptStruct_*_const_&> *)&stack0x00000008,
               (bool *)&local_78);
  }
  return this;
}

// TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> @ 14e14c910

TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> * __thiscall
TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *this,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// ~TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_> @ 14e15e890

void __thiscall
TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
::
~TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
          (TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<UComputeDataInterface_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>_> @ 14e15e8d0

void __thiscall
TMap<UComputeDataInterface_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>_>
::
~TMap<UComputeDataInterface_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>_>
          (TMap<UComputeDataInterface_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<UComputeDataInterface_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UComputeDataInterface_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UComputeDataInterface_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<UOptimusNode_const_*,enum_EOptimusValueUsage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,enum_EOptimusValueUsage,0>_> @ 14e15e910

void __thiscall
TMap<UOptimusNode_const_*,enum_EOptimusValueUsage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,enum_EOptimusValueUsage,0>_>
::
~TMap<UOptimusNode_const_*,enum_EOptimusValueUsage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,enum_EOptimusValueUsage,0>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 0x48) = 0;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<UOptimusNode_const_*,enum_EOptimusValueUsage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UOptimusNode_const_*,enum_EOptimusValueUsage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  return;
}

// ~TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_> @ 14e15e950

void __thiscall
TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
::
~TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
          (TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusInstancedNode,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>_> @ 14e15e990

void __thiscall
TMap<FOptimusInstancedNode,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>_>
::
~TMap<FOptimusInstancedNode,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>_>
          (TMap<FOptimusInstancedNode,UComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,UComputeDataInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,UComputeDataInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,UComputeDataInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>_> @ 14e15e9d0

void __thiscall
TMap<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>_>
::
~TMap<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>_>
          (TMap<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>_> @ 14e15ea10

void __thiscall
TMap<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>_>
::
~TMap<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>_>
          (TMap<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>_> @ 14e15ea50

void __thiscall
TMap<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::
~TMap<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>_>
          (TMap<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusInstancedPin,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>_> @ 14e15ea90

void __thiscall
TMap<FOptimusInstancedPin,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>_>
::
~TMap<FOptimusInstancedPin,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>_>
          (TMap<FOptimusInstancedPin,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_> @ 14e15ead0

void __thiscall
TMap<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
::
~TMap<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
          (TMap<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>_> @ 14e15eb10

void __thiscall
TMap<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>_>
::
~TMap<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>_>
          (TMap<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_> @ 14e15eb50

void __thiscall
TMap<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
::
~TMap<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
          (TMap<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>_> @ 14e15eb90

void __thiscall
TMap<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>_>
::
~TMap<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>_>
          (TMap<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_> @ 14e15ebd0

void __thiscall
TMap<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_>
::
~TMap<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_>
          (TMap<FOptimusRoutedConstNode,FOptimusRoutedConstNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>_> @ 14e15ec10

void __thiscall
TMap<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>_>
::
~TMap<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>_>
          (TMap<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_> @ 14e15ec50

void __thiscall
TMap<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
::
~TMap<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
          (TMap<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>_> @ 14e15ec90

void __thiscall
TMap<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>_>
::
~TMap<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 0x48) = 0;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  return;
}

// ~TMap<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_> @ 14e15ecd0

void __thiscall
TMap<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_>
::
~TMap<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_>
          (TMap<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_> @ 14e15ed10

void __thiscall
TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
::
~TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
          (TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

