// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FindAndRemoveChecked @ 143a668d0

TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_> __thiscall
TMap<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
::FindAndRemoveChecked
          (TMap<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
           *this,UObject *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_> TVar6;
  undefined1 *puVar7;
  ulonglong in_R8;
  uint uVar8;
  uint *puVar9;
  
  uVar8 = ((uint)(in_R8 >> 0x14) & 0xffff ^ (uint)(in_R8 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar8 = *(uint *)(puVar7 + (ulonglong)(*(int *)&this->field_0x48 - 1U & (uVar8 >> 0x10 ^ uVar8))
                               * 4);
    if (uVar8 != 0xffffffff) {
      do {
        if (*(ulonglong *)(*(longlong *)this + (longlong)(int)uVar8 * 0x18) == in_R8) {
          if (uVar8 == 0xffffffff) goto LAB_143a6697f;
          goto LAB_143a669ab;
        }
        uVar8 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar8 * 0x18);
      } while (uVar8 != 0xffffffff);
    }
  }
  uVar8 = 0xffffffff;
LAB_143a6697f:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    TVar6.Ptr = (FThreadingProxy *)(*pcVar4)();
    return (TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>
           )TVar6.Ptr;
  }
LAB_143a669ab:
  lVar1 = (longlong)(int)uVar8 * 0x18;
  lVar3 = *(longlong *)this;
  *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + 8 + lVar1);
  *(undefined8 *)(lVar3 + 8 + lVar1) = 0;
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&this->field_0x28)) {
    puVar7 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x10;
    }
    if ((*(uint *)(puVar7 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_143a66a29;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    TVar6.Ptr = (FThreadingProxy *)(*pcVar4)();
    return (TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>
           )TVar6.Ptr;
  }
LAB_143a66a29:
  puVar7 = *(undefined1 **)&this->field_0x40;
  lVar3 = *(longlong *)this;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &this->field_0x38;
  }
  puVar9 = (uint *)(puVar7 + (longlong)*(int *)(lVar3 + lVar1 + 0x14) * 4);
  while( true ) {
    uVar2 = *puVar9;
    if ((uVar2 == 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar5)) break;
    if (uVar2 == uVar8) {
      *puVar9 = *(uint *)(lVar3 + lVar1 + 0x10);
      TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this,uVar8,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar8,1);
      return (TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>
              )(FThreadingProxy *)param_1;
    }
    puVar9 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
  }
  pcVar4 = (code *)swi(3);
  TVar6.Ptr = (FThreadingProxy *)(*pcVar4)();
  return (TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>)
         TVar6.Ptr;
}

// Append<FDefaultSetAllocator> @ 143aa1950

void __thiscall
TMap<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>_>
::Append<FDefaultSetAllocator>
          (TMap<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>_>
           *this,TMap<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_a8;
  longlong local_a0;
  TMap<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_143aa1a0d;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_143aa1a0d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_143aa1b10;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_143aa1b10:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = *(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x70;
    local_a0 = local_a8 + 0x10;
    TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<IPhysicsProxyBase_const_*_const_&,Chaos::FDirtyRigidParticleReplicationErrorData_const_&>_>
              ((TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<IPhysicsProxyBase_const_*_const_&,Chaos::FDirtyRigidParticleReplicationErrorData_const_&>
                        *)&stack0x00000018,(bool *)&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// RemoveAndCopyValueByHash<IPhysicsProxyBase_const_*> @ 143df1870

bool __thiscall
TMap<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>_>
::RemoveAndCopyValueByHash<IPhysicsProxyBase_const_*>
          (TMap<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>_>
           *this,uint param_1,IPhysicsProxyBase **param_2,
          TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
          *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  FSerializedDataBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_> *pTVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar10 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar10 = &this->field_0x38;
    }
    uVar12 = *(uint *)(puVar10 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1) * 4);
    if (uVar12 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar12 * 0x18;
        if (*(IPhysicsProxyBase **)(lVar1 + lVar3) == *param_2) {
          pTVar9 = (TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
                    *)(lVar3 + 8 + lVar1);
          if (param_3 != pTVar9) {
            pFVar4 = param_3->Ptr;
            param_3->Ptr = pTVar9->Ptr;
            pTVar9->Ptr = (FSerializedDataBuffer *)0x0;
            if (pFVar4 != (FSerializedDataBuffer *)0x0) {
              pFVar5 = (pFVar4->DataBuffer).AllocatorInstance.Data;
              if (pFVar5 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar5);
              }
              ::operator_delete(pFVar4,0x10);
            }
          }
          if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)&this->field_0x28)) {
            puVar10 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar10 = &this->field_0x10;
            }
            if ((*(uint *)(puVar10 +
                          (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4) >>
                 (uVar12 & 0x1f) & 1) != 0) goto LAB_143df1993;
          }
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
LAB_143df1993:
          lVar3 = *(longlong *)this;
          puVar10 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar10 = &this->field_0x38;
          }
          puVar11 = (uint *)(puVar10 + (longlong)*(int *)(lVar3 + lVar1 + 0x14) * 4);
          do {
            uVar2 = *puVar11;
            if (uVar2 == 0xffffffff) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
            }
            else if (uVar2 == uVar12) {
              *puVar11 = *(uint *)(lVar3 + lVar1 + 0x10);
              TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar12,1);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar12,1);
              return true;
            }
            puVar11 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar12 = *(uint *)(lVar1 + 0x10 + lVar3);
      } while (uVar12 != 0xffffffff);
    }
  }
  return false;
}

// Append<FDefaultSetAllocator> @ 144009820

void __thiscall
TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
Append<FDefaultSetAllocator>
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_a8;
  longlong local_a0;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                  *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1440098dd;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_1440098dd:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1440099e0;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1440099e0:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = *(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x10;
    local_a0 = local_a8 + 4;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this,(TPairInitializer<int_const_&,int_const_&> *)&stack0x00000018,(bool *)&local_a8)
    ;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

