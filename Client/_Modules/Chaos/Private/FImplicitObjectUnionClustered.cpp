// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FImplicitObjectUnionClustered @ 143b56b00

FImplicitObjectUnionClustered * __thiscall
Chaos::FImplicitObjectUnionClustered::FImplicitObjectUnionClustered
          (FImplicitObjectUnionClustered *this,FImplicitObjectUnionClustered *param_1)

{
  longlong lVar1;
  
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10100;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x505;
  this->_padding_ = (longlong)&___7FImplicitObjectUnion_Chaos__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7FImplicitObjectUnionClustered_Chaos__6B_;
  (this->MOriginalParticleLookupHack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MOriginalParticleLookupHack).ArrayNum = 0;
  (this->MOriginalParticleLookupHack).ArrayMax = 0;
  *(undefined8 *)&this->MCollisionParticleLookupHack = 0;
  *(undefined8 *)&(this->MCollisionParticleLookupHack).field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionParticleLookupHack).field_0x20 = 0;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x28 = 0;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x2c = 0x80;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x34 = 0;
  *(undefined8 *)&(this->MCollisionParticleLookupHack).field_0x40 = 0;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x48 = 0;
  if (*(longlong *)&(this->MCollisionParticleLookupHack).field_0x40 == 0) {
    *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x38 =
         *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x38;
  }
  *(undefined8 *)&(this->MCollisionParticleLookupHack).field_0x40 = 0;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x48 = 0;
  *(undefined1 *)&this->_padding_ = 0xf;
  return this;
}

// FImplicitObjectUnionClustered @ 143b56c20

FImplicitObjectUnionClustered * __thiscall
Chaos::FImplicitObjectUnionClustered::FImplicitObjectUnionClustered
          (FImplicitObjectUnionClustered *this,
          TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TMap<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
  *this_00;
  int *piVar2;
  FScriptContainerElement *_Src;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FImplicitObjectUnionClustered *pFVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 local_98;
  undefined8 *local_90;
  FScriptContainerElement *local_88;
  uint local_80;
  uint uStack_7c;
  undefined1 *puStack_78;
  undefined4 local_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  TMap<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_58;
  
  FImplicitObjectUnion::FImplicitObjectUnion((FImplicitObjectUnion *)this,param_1);
  pTVar1 = &this->MOriginalParticleLookupHack;
  uVar16 = 0;
  this->_padding_ = (longlong)&___7FImplicitObjectUnionClustered_Chaos__6B_;
  piVar2 = &(this->MOriginalParticleLookupHack).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar9 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->MOriginalParticleLookupHack).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar9,0,&pTVar1->AllocatorInstance,iVar9,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar9 << 3);
  }
  this_00 = &this->MCollisionParticleLookupHack;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->MCollisionParticleLookupHack).field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionParticleLookupHack).field_0x20 = 0;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x28 = 0;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x2c = 0x80;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x34 = 0;
  *(undefined8 *)&(this->MCollisionParticleLookupHack).field_0x40 = 0;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x48 = 0;
  iVar9 = (this->MOriginalParticleLookupHack).ArrayNum;
  *(undefined1 *)&this->_padding_ = 0xf;
  if (((iVar9 != 0) && (iVar9 != (int)this->_padding_)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MOriginalParticleLookupHack.Num() == 0 || MOriginalParticleLookupHack.Num() == MObjects.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                         ,0x219,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FImplicitObjectUnionClustered *)(*pcVar5)();
    return pFVar7;
  }
  uVar12 = (uint)this->_padding_;
  if ((this->MOriginalParticleLookupHack).ArrayNum < (int)uVar12) {
    uVar12 = (this->MOriginalParticleLookupHack).ArrayNum;
  }
  if (uVar12 <= (uint)(*(int *)&(this->MCollisionParticleLookupHack).field_0x8 -
                      *(int *)&(this->MCollisionParticleLookupHack).field_0x34)) goto LAB_143b56f66;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  iVar9 = *(int *)&(this->MCollisionParticleLookupHack).field_0x48;
  if ((iVar9 != 0) && ((int)uVar12 <= iVar9)) goto LAB_143b56f66;
  *(uint *)&(this->MCollisionParticleLookupHack).field_0x48 = uVar12;
  if (*(longlong *)&(this->MCollisionParticleLookupHack).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->MCollisionParticleLookupHack).field_0x40,0,0,4);
  }
  if (uVar12 != 0) {
    uVar13 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)&(this->MCollisionParticleLookupHack).field_0x40 != 0) {
        uVar13 = 0;
        goto LAB_143b56da9;
      }
    }
    else {
LAB_143b56da9:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->MCollisionParticleLookupHack).field_0x40,0,uVar13,4);
    }
    if (0 < (int)uVar12) {
      uVar14 = (ulonglong)uVar12;
      uVar11 = uVar16;
      do {
        puVar3 = *(undefined1 **)&(this->MCollisionParticleLookupHack).field_0x40;
        puVar10 = &(this->MCollisionParticleLookupHack).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar10 = puVar3;
        }
        uVar8 = uVar11 & (longlong)(int)uVar12 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(puVar10 + uVar8 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (*(int *)&(this->MCollisionParticleLookupHack).field_0x48 != 0) {
    uVar12 = *(uint *)&(this->MCollisionParticleLookupHack).field_0x28;
    puStack_78 = &(this->MCollisionParticleLookupHack).field_0x10;
    uStack_7c = 1;
    local_80 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uVar11 = uVar16;
    if (uVar12 != 0) {
      puVar15 = *(uint **)&(this->MCollisionParticleLookupHack).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puStack_78;
      }
      uVar13 = *puVar15;
      uVar14 = uVar16;
      while (uVar13 == 0) {
        uStack_68 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_68;
        iVar9 = (int)uVar11;
        local_80 = iVar9 + 1;
        uVar11 = (ulonglong)local_80;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_80)
        goto LAB_143b56e9d;
        uVar13 = puVar15[(longlong)iVar9 + 1];
      }
      uStack_7c = -uVar13 & uVar13;
      uVar11 = (ulonglong)uStack_7c * 2 + 1;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_6c = (int)lVar4 + -1 + uStack_68;
      uVar11 = (ulonglong)uStack_6c;
      if ((int)uVar12 < (int)uStack_6c) {
LAB_143b56e9d:
        uVar11 = (ulonglong)uVar12;
        uStack_6c = uVar12;
      }
    }
    local_70 = 0xffffffff;
    local_58._padding_ = CONCAT44(uStack_7c,local_80);
    local_58.CurrentBitIndex = uStack_6c;
    local_58.UnvisitedBitMask = 0xffffffff;
    local_58._28_4_ = uStack_64;
    local_58.BaseBitIndex = uStack_68;
    local_60 = this_00;
    local_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_78;
    if ((int)uVar11 < (int)uVar12) {
      do {
        iVar9 = (int)uVar11;
        lVar4 = *(longlong *)&local_60->field_0x0 + (longlong)iVar9 * 0x18;
        uVar11 = *(ulonglong *)(*(longlong *)&local_60->field_0x0 + (longlong)iVar9 * 0x18);
        uVar12 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        uVar12 = (uVar12 >> 0x10 ^ uVar12) &
                 *(int *)&(this->MCollisionParticleLookupHack).field_0x48 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar12;
        puVar3 = *(undefined1 **)&(this->MCollisionParticleLookupHack).field_0x40;
        puVar10 = &(this->MCollisionParticleLookupHack).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar10 = puVar3;
        }
        uVar11 = (longlong)*(int *)&(this->MCollisionParticleLookupHack).field_0x48 - 1U &
                 (longlong)(int)uVar12;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(puVar10 + uVar11 * 4);
        *(int *)(puVar10 + uVar11 * 4) = iVar9;
        local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_58);
        uVar11 = (ulonglong)(uint)local_58.CurrentBitIndex;
      } while (local_58.CurrentBitIndex < (local_58.Array)->NumBits);
    }
  }
LAB_143b56f66:
  iVar9 = (this->MOriginalParticleLookupHack).ArrayNum;
  uVar11 = uVar16;
  while( true ) {
    if ((iVar9 < 1) || (uVar12 = (uint)uVar11, (int)this->_padding_ <= (int)uVar12)) {
      return this;
    }
    if (((int)uVar12 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    lVar4 = *(longlong *)(uVar16 + this->_padding_);
    if (*(char *)(lVar4 + 0x18) == '\x04') {
      uVar13 = 0;
      if ((int)uVar12 < (this->MOriginalParticleLookupHack).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FImplicitObjectUnionClustered *)(*pcVar5)();
        return pFVar7;
      }
      local_98 = *(undefined8 *)(lVar4 + 0x20);
      local_90 = &local_98;
      local_88 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 8;
      TSet<TTuple<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<Chaos::FImplicitObject_const_*_&&,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>_>
                ((TSet<TTuple<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<Chaos::FImplicitObject_const_*_&&,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
                  *)&stack0x00000020,(bool *)&local_90);
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7376392192400555479>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                         ,0x229,"false");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FImplicitObjectUnionClustered *)(*pcVar5)();
        return pFVar7;
      }
    }
    uVar11 = (ulonglong)(uVar12 + 1);
    uVar16 = uVar16 + 8;
    iVar9 = (this->MOriginalParticleLookupHack).ArrayNum;
  }
  pcVar5 = (code *)swi(3);
  pFVar7 = (FImplicitObjectUnionClustered *)(*pcVar5)();
  return pFVar7;
}

// FImplicitObjectUnionClustered @ 143b570d0

FImplicitObjectUnionClustered * __thiscall
Chaos::FImplicitObjectUnionClustered::FImplicitObjectUnionClustered
          (FImplicitObjectUnionClustered *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10100;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x50f;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FImplicitObjectUnionClustered_Chaos__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->MOriginalParticleLookupHack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MOriginalParticleLookupHack).ArrayNum = 0;
  (this->MOriginalParticleLookupHack).ArrayMax = 0;
  *(undefined8 *)&this->MCollisionParticleLookupHack = 0;
  *(undefined8 *)&(this->MCollisionParticleLookupHack).field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionParticleLookupHack).field_0x20 = 0;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x28 = 0;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x2c = 0x80;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x34 = 0;
  *(undefined8 *)&(this->MCollisionParticleLookupHack).field_0x40 = 0;
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x48 = 0;
  return this;
}

// ~FImplicitObjectUnionClustered @ 143b58140

void __thiscall
Chaos::FImplicitObjectUnionClustered::~FImplicitObjectUnionClustered
          (FImplicitObjectUnionClustered *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MCollisionParticleLookupHack).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MCollisionParticleLookupHack);
  pFVar2 = (this->MOriginalParticleLookupHack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FImplicitObjectUnion::~FImplicitObjectUnion((FImplicitObjectUnion *)this);
  return;
}

// FindAllIntersectingChildren @ 143b637c0

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FImplicitObjectUnionClustered::FindAllIntersectingChildren
          (FImplicitObjectUnionClustered *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TAABB<double,3> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  <lambda_1> local_38;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (((FImplicitBVH *)this->_padding_ != (FImplicitBVH *)0x0) &&
     (CVars::bChaosUnionBVHEnabled != false)) {
    local_28 = (float)*(double *)&param_1->MMin;
    local_24 = (float)*(double *)&(param_1->MMin).field_0x8;
    local_20 = (float)*(double *)&(param_1->MMin).field_0x10;
    local_1c = (float)*(double *)&param_1->MMax;
    local_18 = (float)*(double *)&(param_1->MMax).field_0x8;
    local_14 = (float)*(double *)&(param_1->MMax).field_0x10;
    local_38.__this = this;
    local_38.IntersectingChildren = __return_storage_ptr__;
    Chaos::Private::FImplicitBVH::
    VisitOverlappingNodesStack<_Chaos::FImplicitObjectUnionClustered::FindAllIntersectingChildren_::__l5::<lambda_1>_>
              ((FImplicitBVH *)this->_padding_,(TAABB<float,3> *)&local_28,&local_38);
    return __return_storage_ptr__;
  }
  if (__return_storage_ptr__ != &this->MOriginalParticleLookupHack) {
    _Src = (this->MOriginalParticleLookupHack).AllocatorInstance.Data;
    iVar1 = (this->MOriginalParticleLookupHack).ArrayNum;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return __return_storage_ptr__;
}

// FindParticleForImplicitObject @ 143b660f0

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::FImplicitObjectUnionClustered::FindParticleForImplicitObject
          (FImplicitObjectUnionClustered *this,FImplicitObject *param_1)

{
  TPBDRigidParticleHandleImp<double,3,1> **ppTVar1;
  FImplicitObject *pFVar2;
  FImplicitObject *pFVar3;
  
  pFVar3 = (FImplicitObject *)0x0;
  pFVar2 = param_1;
  if (param_1->Type != '\x04') {
    pFVar2 = pFVar3;
  }
  if (pFVar2 != (FImplicitObject *)0x0) {
    param_1 = (FImplicitObject *)pFVar2[1]._padding_;
  }
  ppTVar1 = TMapBase<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
            ::Find((TMapBase<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
                    *)&this->MCollisionParticleLookupHack,param_1);
  if (ppTVar1 != (TPBDRigidParticleHandleImp<double,3,1> **)0x0) {
    pFVar3 = (FImplicitObject *)*ppTVar1;
  }
  return (TPBDRigidParticleHandleImp<double,3,1> *)pFVar3;
}

// GetChildSimplicial @ 143b67550

FBVHParticles * __thiscall
Chaos::FImplicitObjectUnionClustered::GetChildSimplicial
          (FImplicitObjectUnionClustered *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FBVHParticles *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if ((-1 < param_1) && (param_1 < (this->MOriginalParticleLookupHack).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (this->MOriginalParticleLookupHack).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FBVHParticles *)(*pcVar3)();
        return pFVar5;
      }
    }
    plVar1 = *(longlong **)
              ((this->MOriginalParticleLookupHack).AllocatorInstance.Data + (longlong)param_1 * 8);
    uVar6 = *(uint *)(plVar1 + 1);
    lVar2 = *plVar1;
    uVar7 = 0;
    if ((int)uVar6 < *(int *)(lVar2 + 0x4c0)) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FBVHParticles *)(*pcVar3)();
        return pFVar5;
      }
    }
    return *(FBVHParticles **)(*(longlong *)(lVar2 + 0x4b8) + (longlong)(int)uVar6 * 8);
  }
  return (FBVHParticles *)0x0;
}

