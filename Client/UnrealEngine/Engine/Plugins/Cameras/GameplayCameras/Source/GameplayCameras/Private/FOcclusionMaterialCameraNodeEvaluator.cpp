// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 11

// FOcclusionMaterialCameraNodeEvaluator @ 14d5fc5d0

FOcclusionMaterialCameraNodeEvaluator * __thiscall
UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::FOcclusionMaterialCameraNodeEvaluator
          (FOcclusionMaterialCameraNodeEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOcclusionMaterialCameraNodeEvaluator_Cameras_UE__6B_;
  (this->OcclusionSphereRadiusReader).DefaultValuePtr = (float *)0x0;
  (this->OcclusionTargetOffsetReader).DefaultValuePtr = (TVector<double> *)0x0;
  (this->OcclusionTraceHandle).field0_0x0._Handle = 0;
  (this->OcclusionTraceHandle).bTransactional = false;
  *(undefined8 *)&(this->CurrentlyOccludedMeshComponents).Elements = 0;
  *(undefined8 *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&this->_padding_ = 7;
  (this->OcclusionSphereRadiusReader).VariableID.Value = 0xffffffff;
  (this->OcclusionTargetOffsetReader).VariableID.Value = 0xffffffff;
  *(undefined4 *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x34 = 0;
  (this->CurrentlyOccludedMeshComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentlyOccludedMeshComponents).HashSize = 0;
  *(undefined8 *)&this->AppliedMaterialOverrides = 0;
  *(undefined8 *)&(this->AppliedMaterialOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->AppliedMaterialOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->AppliedMaterialOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->AppliedMaterialOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->AppliedMaterialOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AppliedMaterialOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->AppliedMaterialOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->AppliedMaterialOverrides).field_0x48 = 0;
  return this;
}

// ~FOcclusionMaterialCameraNodeEvaluator @ 14d600270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::~FOcclusionMaterialCameraNodeEvaluator
          (FOcclusionMaterialCameraNodeEvaluator *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  undefined1 auStackY_e8 [32];
  TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  local_b8;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_b8.Elements._48_8_ = _UNK_150631d98;
  local_b8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  this->_padding_ = (longlong)&___7FOcclusionMaterialCameraNodeEvaluator_Cameras_UE__6B_;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::operator=(&local_b8,&this->CurrentlyOccludedMeshComponents);
  ResolveWeakMeshComponents
            (this,&local_b8,
             (TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
              *)local_68);
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_b8.Elements._48_8_ = _UNK_150631d98;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>::
  operator=((TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
             *)&local_b8,
            (TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
             *)local_68);
  RemoveOcclusionMaterial
            (this,(TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
                   *)&local_b8);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar3 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  *(undefined4 *)&(this->AppliedMaterialOverrides).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AppliedMaterialOverrides).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AppliedMaterialOverrides);
  (this->CurrentlyOccludedMeshComponents).HashSize = 0;
  FVar2 = (this->CurrentlyOccludedMeshComponents).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CurrentlyOccludedMeshComponents).Elements);
  return;
}

// ApplyOcclusionMaterial @ 14d60be20

void __thiscall
UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::ApplyOcclusionMaterial
          (FOcclusionMaterialCameraNodeEvaluator *this,
          TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
          *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  UStaticMeshComponent *this_00;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *pTVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  undefined1 local_118 [4];
  uint local_114;
  undefined8 local_110;
  FWeakObjectPtr local_108;
  UMaterialInterface *local_100;
  undefined1 local_f8 [4];
  FWeakObjectPtr local_f4;
  undefined8 local_e8;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  UStaticMeshComponent *local_a8;
  FWeakObjectPtr local_a0;
  UStaticMeshComponent *local_98;
  FWeakObjectPtr *local_90;
  longlong local_88;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *local_80;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  FOcclusionMaterialCameraNodeEvaluator *local_70;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_80 = param_1;
  local_70 = this;
  if (this->_padding_ != 0) {
    pUVar8 = UOcclusionMaterialCameraNode::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar6) {
      lVar9 = this->_padding_;
      goto LAB_14d60be67;
    }
  }
  lVar9 = 0;
LAB_14d60be67:
  local_88 = *(longlong *)(lVar9 + 0x38);
  if (local_88 != 0) {
    iVar7 = *(int *)&(param_1->Elements).field_0x28;
    iStack_d8 = 0;
    local_c0 = 0;
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
    uStack_d4 = 1;
    iStack_c4 = 0;
    if (iVar7 != 0) {
      puVar14 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)pTVar15;
      }
      uVar12 = *puVar14;
      while (uVar12 == 0) {
        lVar9 = (longlong)iStack_d8;
        local_c0 = local_c0 + 0x20;
        iStack_d8 = iStack_d8 + 1;
        iStack_c4 = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14d60bf1d;
        uVar12 = puVar14[lVar9 + 1];
      }
      uStack_d4 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_d4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_b0 = (int)lVar9;
      iStack_c4 = local_c0 + -1 + local_b0;
      if (iVar7 < iStack_c4) {
        iStack_c4 = iVar7;
      }
    }
LAB_14d60bf1d:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar11 = uVar12 & 0xffffffe0;
    iStack_b8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uStack_c8 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_d4,iStack_d8);
    TStack_60.CurrentBitIndex = iStack_c4;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar12 >> 5;
    TStack_60._28_4_ = iStack_c4;
    TStack_60.BaseBitIndex = local_c0;
    uStack_40 = CONCAT44(uStack_b4,iStack_b8);
    local_114 = uVar12;
    local_e0 = param_1;
    local_d0 = (undefined1 *)pTVar15;
    iStack_bc = iStack_c4;
    local_78 = pTVar15;
    local_68 = param_1;
    TStack_60.Array = pTVar15;
    if ((((int)uVar12 < 0) || (iVar7 < (int)uVar12)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar2) {
      puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = (undefined1 *)pTVar15;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar10;
        uVar11 = uVar11 + 0x20;
        iVar10 = iVar10 + 1;
        uVar12 = uVar2;
        local_114 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14d60c021;
        uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_ac = (int)lVar9;
      uVar12 = local_ac + -1 + uVar11;
      local_114 = uVar12;
      if ((int)uVar2 < (int)uVar12) {
        uVar12 = uVar2;
        local_114 = uVar2;
      }
    }
LAB_14d60c021:
    while( true ) {
      pTVar5 = local_68;
      if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
          (int)uStack_40) {
        local_118[0] = 0;
        `TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
      }
      if (((TStack_60.CurrentBitIndex == uVar12) && (TStack_60.Array == pTVar15)) &&
         (pTVar5 == param_1)) break;
      this_00 = *(UStaticMeshComponent **)
                 (*(longlong *)&pTVar5->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
      if (this_00 != (UStaticMeshComponent *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)this_00);
        }
        local_108.ObjectIndex = 0;
        local_108.ObjectSerialNumber = 0;
        local_a8 = this_00;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)this_00);
        }
        FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_a8);
        local_a0 = local_108;
        iVar7 = TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr>_>
                          ((TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
                            *)&this->AppliedMaterialOverrides,
                           local_108.ObjectSerialNumber ^ local_108.ObjectIndex,
                           (TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr> *)&local_a0);
        if (iVar7 == -1) {
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable((UObject *)this_00);
          }
          local_f4.ObjectIndex = 0;
          local_f4.ObjectSerialNumber = 0;
          local_98 = this_00;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=(&local_f4,(FObjectPtr)&local_98);
          local_90 = &local_f4;
          TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_&&>_>
                    ((TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
                      *)&this->AppliedMaterialOverrides,
                     (TKeyInitializer<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_&&> *)
                     local_f8,(bool *)&local_90);
          iVar10 = 0;
          lVar9 = (longlong)(int)local_f8 * 0x30 + *(longlong *)&this->AppliedMaterialOverrides;
          iVar7 = (**(code **)(this_00->_padding_ + 0x810))(this_00);
          if (iVar7 < 1) {
            pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
          }
          else {
            local_e8 = 0;
            do {
              local_100 = UStaticMeshComponent::GetMaterial(this_00,iVar10);
              local_110 = (**(code **)(this_00->_padding_ + 0x6d8))(this_00,iVar10,local_88,0);
              if (((*(UMaterialInterface ***)(lVar9 + 8) <= &local_100) &&
                  (&local_100 < *(UMaterialInterface ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar7 = *(int *)(lVar9 + 0x10);
              if (iVar7 == *(int *)(lVar9 + 0x14)) {
                iVar7 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
              }
              *(int *)(lVar9 + 0x10) = iVar7 + 1;
              *(UMaterialInterface **)(*(longlong *)(lVar9 + 8) + (longlong)iVar7 * 8) = local_100;
              if (((*(undefined8 **)(lVar9 + 0x18) <= &local_110) &&
                  (&local_110 < *(undefined8 **)(lVar9 + 0x18) + *(int *)(lVar9 + 0x24))) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar7 = *(int *)(lVar9 + 0x20);
              if (iVar7 == *(int *)(lVar9 + 0x24)) {
                iVar7 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,(ForAnyElementType *)(lVar9 + 0x18),(int *)(lVar9 + 0x24));
              }
              *(int *)(lVar9 + 0x20) = iVar7 + 1;
              *(undefined8 *)(*(longlong *)(lVar9 + 0x18) + (longlong)iVar7 * 8) = local_110;
              (**(code **)(this_00->_padding_ + 0x6b8))(this_00,iVar10,local_110);
              iVar10 = iVar10 + 1;
              iVar7 = (**(code **)(this_00->_padding_ + 0x810))(this_00);
              this = local_70;
              pTVar15 = local_78;
              param_1 = local_80;
              uVar12 = local_114;
            } while (iVar10 < iVar7);
          }
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  param_1->HashSize = 0;
  FVar3 = (param_1->Hash).SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_1->Elements);
  return;
}

// GetTypeID @ 14d61e630

FCameraObjectTypeID * __thiscall
UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::GetTypeID
          (FOcclusionMaterialCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// HandleOcclusionTraceResult @ 14d61ebc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::HandleOcclusionTraceResult
          (FOcclusionMaterialCameraNodeEvaluator *this,UWorld *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  byte bVar9;
  int iVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 auStackY_4b8 [32];
  undefined1 local_488;
  undefined1 local_487 [3];
  FWeakObjectPtr local_484;
  UObject *local_478;
  undefined8 local_470;
  TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr> local_468;
  UObject *local_460;
  longlong *local_458;
  uint uStack_450;
  uint uStack_44c;
  TBitArray<FDefaultBitArrayAllocator> *local_448;
  undefined4 uStack_440;
  uint uStack_43c;
  uint local_438;
  undefined4 uStack_434;
  int iStack_430;
  undefined4 uStack_42c;
  longlong *local_428;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_420;
  undefined8 uStack_400;
  TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  local_3f8;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  local_3a8;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  local_358;
  undefined4 local_2ec;
  undefined1 local_2e8 [32];
  uint *local_2c8;
  uint local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  int local_2b4;
  ForElementType<FSetElementId> local_2a8;
  int local_2a0;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  local_298;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  local_248;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  local_1f8;
  FTraceDatum local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  if ((this->OcclusionTraceHandle).field0_0x0._Handle != 0) {
    FTraceDatum::FTraceDatum(&local_1a8);
    bVar5 = UWorld::QueryTraceData(param_1,&this->OcclusionTraceHandle,&local_1a8);
    iVar10 = local_1a8.OutHits.ArrayNum;
    if (bVar5) {
      uVar6 = (ulonglong)local_1a8.OutHits.ArrayNum;
      pFVar13 = local_1a8.OutHits.AllocatorInstance.Data + uVar6 * 0x100;
      local_2e8._0_8_ = 0;
      local_2e8._8_8_ = 0;
      local_2c8 = (uint *)0x0;
      uVar14 = 0;
      local_2c0 = 0;
      local_2bc = 0x80;
      local_2b8 = 0xffffffff;
      local_2b4 = 0;
      local_2a8 = (ForElementType<FSetElementId>)0x0;
      local_2a0 = 0;
      FVar11.Data = local_1a8.OutHits.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar6 != iVar10) {
          local_488 = 0;
          `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_488);
        }
        if (FVar11.Data == pFVar13) break;
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(FVar11.Data + 0xd8));
        if (pUVar7 == (UObject *)0x0) {
LAB_14d61ed1e:
          uVar6 = (ulonglong)(uint)local_1a8.OutHits.ArrayNum;
          FVar11.Data = FVar11.Data + 0x100;
          local_478 = (UObject *)0x0;
        }
        else {
          pUVar8 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
          iVar1 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar8->_padding_)) goto LAB_14d61ed1e;
          local_478 = pUVar7;
          TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
          ::Emplace<UStaticMeshComponent_*_const_&>
                    ((TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
                      *)local_2e8,(UStaticMeshComponent **)&local_470,(bool *)&local_478);
          uVar6 = (ulonglong)(uint)local_1a8.OutHits.ArrayNum;
          FVar11.Data = FVar11.Data + 0x100;
        }
      }
      local_298.Elements._0_8_ = 0;
      local_3f8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_3f8.Elements._48_8_ = _UNK_150631d98;
      local_298.Elements._8_8_ = 0;
      local_298.Elements._32_8_ = 0;
      local_298.Elements._40_4_ = 0;
      local_298.Elements._44_4_ = 0x80;
      local_298.Elements._48_4_ = 0xffffffff;
      local_298.Elements._52_4_ = 0;
      local_298.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_298.HashSize = 0;
      local_3f8.Elements._0_8_ = 0;
      local_3f8.Elements._8_8_ = 0;
      local_3f8.Elements._32_8_ = 0;
      local_3f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_3f8.HashSize = 0;
      TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::operator=(&local_3f8,&this->CurrentlyOccludedMeshComponents);
      ResolveWeakMeshComponents(this,&local_3f8,&local_298);
      TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>::
      Difference((TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
                  *)local_2e8,&local_1f8,&local_298);
      TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>::
      Difference(&local_298,&local_248,
                 (TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
                  *)local_2e8);
      if (*(int *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x8 !=
          *(int *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x34) {
        TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::UnhashElements(&this->CurrentlyOccludedMeshComponents);
        iVar10 = *(int *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0xc;
        *(undefined4 *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x8 = 0;
        if (iVar10 < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)&this->CurrentlyOccludedMeshComponents,0,
                     (int *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0xc);
        }
        *(undefined4 *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x34 = 0;
        *(undefined4 *)&(this->CurrentlyOccludedMeshComponents).Elements.field_0x28 = 0;
      }
      uVar16 = local_2c0;
      uStack_44c = 1;
      local_438 = 0;
      uStack_43c = local_438;
      if (local_2c0 != 0) {
        puVar15 = (uint *)(local_2e8 + 0x10);
        if (local_2c8 != (uint *)0x0) {
          puVar15 = local_2c8;
        }
        uVar12 = *puVar15;
        uVar14 = 0;
        local_438 = 0;
        while (uVar12 == 0) {
          uVar14 = uVar14 + 1;
          local_438 = local_438 + 0x20;
          uStack_43c = local_2c0;
          if ((int)((local_2c0 - 1) + ((int)(local_2c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
          goto LAB_14d61eed0;
          uVar12 = puVar15[(int)uVar14];
        }
        uStack_44c = -uVar12 & uVar12;
        uVar6 = (ulonglong)uStack_44c * 2 + 1;
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        local_470._4_4_ = (int)lVar2;
        uStack_43c = local_470._4_4_ + -1 + local_438;
        if ((int)local_2c0 < (int)uStack_43c) {
          uStack_43c = local_2c0;
        }
      }
LAB_14d61eed0:
      local_458 = (longlong *)local_2e8;
      uStack_434 = local_2ec;
      local_448 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10);
      uVar12 = local_2c0 & 0xffffffe0;
      iStack_430 = local_2e8._8_4_ - local_2b4;
      uStack_440 = 0xffffffff;
      TStack_420.CurrentBitIndex = uStack_43c;
      TStack_420.UnvisitedBitMask = 0xffffffff;
      TStack_420._padding_ = CONCAT44(uStack_44c,uVar14);
      iVar10 = (int)local_2c0 >> 5;
      TStack_420._28_4_ = local_2ec;
      TStack_420.BaseBitIndex = local_438;
      uStack_400 = CONCAT44(uStack_42c,iStack_430);
      bVar9 = (byte)local_2c0;
      uStack_450 = uVar14;
      local_428 = local_458;
      TStack_420.Array = local_448;
      if (((int)local_2c0 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar16 != local_2c0) {
        puVar15 = (uint *)(local_2e8 + 0x10);
        if (local_2c8 != (uint *)0x0) {
          puVar15 = local_2c8;
        }
        uVar14 = -1 << (bVar9 & 0x1f) & puVar15[iVar10];
        while (uVar14 == 0) {
          iVar10 = iVar10 + 1;
          uVar12 = uVar12 + 0x20;
          uVar16 = local_2c0;
          if ((int)(((int)(local_2c0 - 1) >> 0x1f & 0x1fU) + (local_2c0 - 1)) >> 5 < iVar10)
          goto LAB_14d61f000;
          uVar14 = puVar15[iVar10];
        }
        uVar6 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        uVar16 = (int)lVar2 + -1 + uVar12;
        if ((int)local_2c0 < (int)uVar16) {
          uVar16 = local_2c0;
        }
      }
LAB_14d61f000:
      while( true ) {
        plVar4 = local_428;
        if ((int)local_428[1] - *(int *)((longlong)local_428 + 0x34) != (int)uStack_400) {
          `TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_487);
        }
        if (((TStack_420.CurrentBitIndex == uVar16) &&
            (TStack_420.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10))) &&
           (plVar4 == (longlong *)local_2e8)) break;
        pUVar7 = *(UObject **)(*plVar4 + (longlong)TStack_420.CurrentBitIndex * 0x10);
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar7);
        }
        local_484.ObjectIndex = 0;
        local_484.ObjectSerialNumber = 0;
        local_460 = pUVar7;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=(&local_484,(FObjectPtr)&local_460);
        TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Emplace<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_>
                  (&this->CurrentlyOccludedMeshComponents,&local_468,(bool *)&local_484);
        TStack_420.UnvisitedBitMask = TStack_420.UnvisitedBitMask & ~TStack_420._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_420);
      }
      local_3a8.Elements._0_8_ = 0;
      local_3a8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_3a8.Elements._48_8_ = _UNK_150631d98;
      local_3a8.Elements._8_8_ = 0;
      local_3a8.Elements._32_8_ = 0;
      local_3a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_3a8.HashSize = 0;
      TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>::
      operator=(&local_3a8,&local_1f8);
      ApplyOcclusionMaterial(this,&local_3a8);
      local_358.Elements._0_8_ = 0;
      local_358.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_358.Elements._48_8_ = _UNK_150631d98;
      local_358.Elements._8_8_ = 0;
      local_358.Elements._32_8_ = 0;
      local_358.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_358.HashSize = 0;
      TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>::
      operator=(&local_358,&local_248);
      RemoveOcclusionMaterial(this,&local_358);
      (this->OcclusionTraceHandle).field0_0x0._Handle = 0;
      local_248.HashSize = 0;
      if (local_248.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_248.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_248.Elements);
      local_1f8.HashSize = 0;
      if (local_1f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1f8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1f8.Elements);
      local_298.HashSize = 0;
      if (local_298.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_298.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_298.Elements);
      local_2a0 = 0;
      if (local_2a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2a8);
      }
      TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_2e8);
    }
    if (local_1a8.OutHits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.OutHits.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1a8.Delegate);
    if ((void *)local_1a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1a8._padding_);
    }
    if ((void *)local_1a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1a8._padding_);
    }
  }
  return;
}

// IsKindOf @ 14d621320

bool __thiscall
UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::IsKindOf
          (FOcclusionMaterialCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FOcclusionMaterialCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d6288c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::OnInitialize
          (FOcclusionMaterialCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1
          ,FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  FName local_res8;
  FString local_18;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar2 = UOcclusionMaterialCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d6288f8;
    }
  }
  lVar3 = 0;
LAB_14d6288f8:
  (this->OcclusionSphereRadiusReader).DefaultValuePtr = (float *)(lVar3 + 0x40);
  (this->OcclusionSphereRadiusReader).VariableID.Value = *(uint *)(lVar3 + 0x44);
  (this->OcclusionTargetOffsetReader).DefaultValuePtr = (TVector<double> *)(lVar3 + 0x58);
  (this->OcclusionTargetOffsetReader).VariableID.Value = *(uint *)(lVar3 + 0x70);
  if ((*(longlong *)(lVar3 + 0x38) == 0) && (1 < (byte)LogCameraSystem._0_1_)) {
    local_res8 = *(FName *)(lVar3 + 0x18);
    ::FName::ToString(&local_res8,&local_18);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnRun @ 14d62b6c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::OnRun
          (FOcclusionMaterialCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraEvaluationContext *this_00;
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  this_00 = (param_1->EvaluationContext).Object;
  if (this_00 == (FCameraEvaluationContext *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5618584300032098211>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Collision\\OcclusionMaterialCameraNode.cpp"
                       ,0x5d,"Params.EvaluationContext");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((param_1->EvaluationType == Standard) &&
          (pUVar3 = FCameraEvaluationContext::GetWorld(this_00), pUVar3 != (UWorld *)0x0)) {
    HandleOcclusionTraceResult(this,pUVar3);
    RunOcclusionTrace(this,pUVar3,param_1,param_2);
  }
  return;
}

// RemoveOcclusionMaterial @ 14d631470

void __thiscall
UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::RemoveOcclusionMaterial
          (FOcclusionMaterialCameraNodeEvaluator *this,
          TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
          *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  UObject *pUVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  FOcclusionMaterialCameraNodeEvaluator *pFVar6;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int iVar13;
  void *pvVar14;
  uint uVar15;
  TMap<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>_>
  *this_00;
  uint uVar16;
  void *pvVar17;
  undefined1 *puVar18;
  int iVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  longlong lVar21;
  undefined1 local_108 [4];
  uint local_104;
  FWeakObjectPtr local_100;
  void *local_f8;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int local_b4;
  FOcclusionMaterialCameraNodeEvaluator *local_b0;
  UObject *local_a8;
  FWeakObjectPtr local_a0;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *local_98;
  TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined8 local_60 [2];
  undefined8 local_50 [3];
  
  iVar19 = *(int *)&(param_1->Elements).field_0x28;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  iStack_e0 = 0;
  local_c8 = 0;
  uStack_dc = 1;
  iStack_cc = 0;
  if (iVar19 != 0) {
    puVar12 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)pTVar20;
    }
    uVar16 = *puVar12;
    while (uVar16 == 0) {
      lVar10 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14d63151d;
      uVar16 = puVar12[lVar10 + 1];
    }
    uStack_dc = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_b8 = (int)lVar10;
    iStack_cc = local_b8 + -1 + local_c8;
    if (iVar19 < iStack_cc) {
      iStack_cc = iVar19;
    }
  }
LAB_14d63151d:
  uVar16 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_c0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_d0 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_88.CurrentBitIndex = iStack_cc;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_88._28_4_ = iStack_cc;
  TStack_88.BaseBitIndex = local_c8;
  uStack_68 = CONCAT44(uStack_bc,iStack_c0);
  local_104 = uVar16;
  local_f0 = pTVar20;
  local_e8 = param_1;
  local_d8 = (undefined1 *)pTVar20;
  iStack_c4 = iStack_cc;
  local_b0 = this;
  local_98 = param_1;
  local_90 = param_1;
  TStack_88.Array = pTVar20;
  if ((((int)uVar16 < 0) || (iVar19 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar16 != uVar2) {
    puVar18 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar20;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar2;
      local_104 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d631630;
      uVar16 = *(uint *)(puVar18 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_b4 = (int)lVar10;
    uVar16 = local_b4 + -1 + uVar15;
    local_104 = uVar16;
    if ((int)uVar2 < (int)uVar16) {
      uVar16 = uVar2;
      local_104 = uVar2;
    }
  }
LAB_14d631630:
  pTVar7 = local_90;
  if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
      (int)uStack_68) {
    local_108[0] = 0;
    `TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
  }
  pFVar6 = local_b0;
  if (((TStack_88.CurrentBitIndex == uVar16) && (TStack_88.Array == pTVar20)) && (pTVar7 == param_1)
     ) {
    param_1->HashSize = 0;
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&param_1->Elements);
    return;
  }
  pUVar3 = *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
  if (pUVar3 != (UObject *)0x0) {
    pvVar17 = (void *)0x0;
    this_00 = &local_b0->AppliedMaterialOverrides;
    local_f8 = (void *)0x0;
    iVar19 = 0;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar3);
    }
    local_100.ObjectIndex = 0;
    local_100.ObjectSerialNumber = 0;
    local_a8 = pUVar3;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_a8);
    local_a0 = local_100;
    uVar15 = TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
             ::FindIndexByHash<TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr>_>
                       ((TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
                         *)this_00,local_100.ObjectSerialNumber ^ local_100.ObjectIndex,
                        (TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr> *)&local_a0);
    pvVar14 = pvVar17;
    if (uVar15 != 0xffffffff) {
      lVar10 = *(longlong *)&this_00->field_0x0;
      lVar21 = (longlong)(int)uVar15 * 0x30;
      puVar9 = (undefined8 *)(lVar10 + 8 + lVar21);
      if (local_60 != puVar9) {
        pvVar17 = (void *)*puVar9;
        *puVar9 = 0;
        iVar19 = *(int *)(puVar9 + 1);
        puVar9[1] = 0;
      }
      puVar9 = puVar9 + 2;
      if (local_50 != puVar9) {
        local_f8 = (void *)*puVar9;
        *puVar9 = 0;
        *(undefined8 *)(lVar10 + 0x20 + lVar21) = 0;
      }
      if ((-1 < (int)uVar15) &&
         ((int)uVar15 < *(int *)&(pFVar6->AppliedMaterialOverrides).field_0x28)) {
        if ((*(int *)&(pFVar6->AppliedMaterialOverrides).field_0x28 <= (int)uVar15) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar18 = *(undefined1 **)&(pFVar6->AppliedMaterialOverrides).field_0x20;
        puVar11 = &(pFVar6->AppliedMaterialOverrides).field_0x10;
        if (puVar18 != (undefined1 *)0x0) {
          puVar11 = puVar18;
        }
        uVar16 = uVar15;
        if ((int)uVar15 < 0) {
          uVar16 = uVar15 + 0x1f;
        }
        if ((*(uint *)(puVar11 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar15 & 0x1f) & 1) != 0)
        goto LAB_14d6317c9;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Elements.IsValidIndex(ElementIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_14d6317c9:
      puVar18 = *(undefined1 **)&(pFVar6->AppliedMaterialOverrides).field_0x40;
      lVar21 = lVar21 + *(longlong *)&this_00->field_0x0;
      puVar11 = &(pFVar6->AppliedMaterialOverrides).field_0x38;
      if (puVar18 != (undefined1 *)0x0) {
        puVar11 = puVar18;
      }
      puVar12 = (uint *)(puVar11 + (longlong)*(int *)(lVar21 + 0x2c) * 4);
      do {
        uVar16 = *puVar12;
        if (uVar16 == 0xffffffff) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NextElementIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2b5,L"Corrupt hash");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else if (uVar16 == uVar15) goto LAB_14d63182b;
        puVar12 = (uint *)(*(longlong *)&this_00->field_0x0 + 0x28 + (longlong)(int)uVar16 * 0x30);
      } while( true );
    }
    goto LAB_14d6318d0;
  }
  goto LAB_14d6318ef;
LAB_14d63182b:
  *puVar12 = *(uint *)(lVar21 + 0x28);
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,uVar15,1);
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00,uVar15,1);
  uVar15 = 0;
  lVar10 = 0;
  pvVar14 = local_f8;
  uVar16 = local_104;
  if (0 < iVar19) {
    do {
      pcVar5 = *(code **)(*(longlong *)pUVar3 + 0x6b8);
      uVar16 = 0;
      if ((int)uVar15 < iVar19) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (*pcVar5)(pUVar3,uVar15,*(undefined8 *)((longlong)pvVar17 + lVar10 * 8));
      uVar15 = uVar15 + 1;
      lVar10 = lVar10 + 1;
      pvVar14 = local_f8;
      uVar16 = local_104;
    } while (lVar10 < iVar19);
  }
LAB_14d6318d0:
  if (pvVar14 != (void *)0x0) {
    FMemory::Free(pvVar14);
  }
  pTVar20 = local_f0;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
    pTVar20 = local_f0;
  }
LAB_14d6318ef:
  TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  param_1 = local_98;
  goto LAB_14d631630;
}

// ResolveWeakMeshComponents @ 14d6329b0

void __thiscall
UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::ResolveWeakMeshComponents
          (FOcclusionMaterialCameraNodeEvaluator *this,
          TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_1,TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
                   *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_b8 [8];
  TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  undefined1 local_7c [4];
  FWeakObjectPtr local_78;
  UObject *local_70;
  TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14d632a4d;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_a4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_80 = (int)lVar9;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar3 < iStack_94) {
      iStack_94 = iVar3;
    }
  }
LAB_14d632a4d:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d632b50;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14d632b50:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    local_78 = *(FWeakObjectPtr *)
                (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    local_70 = FWeakObjectPtr::Get(&local_78);
    if (local_70 != (UObject *)0x0) {
      TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>::
      Emplace<UStaticMeshComponent_*_const_&>
                (param_2,(UStaticMeshComponent **)local_7c,(bool *)&local_70);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  param_1->HashSize = 0;
  FVar5 = (param_1->Hash).SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_1->Elements);
  return;
}

// RunOcclusionTrace @ 14d6343f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::RunOcclusionTrace
          (FOcclusionMaterialCameraNodeEvaluator *this,UWorld *param_1,
          FCameraNodeEvaluationParams *param_2,FCameraNodeEvaluationResult *param_3)

{
  float fVar1;
  byte bVar2;
  FCameraEvaluationContext *pFVar3;
  code *pcVar4;
  undefined7 uVar5;
  bool bVar6;
  UClass *pUVar7;
  TVector<double> *pTVar8;
  float *pfVar9;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *pTVar10;
  UObject *pUVar11;
  FName *pFVar12;
  FTraceHandle *pFVar13;
  longlong lVar14;
  AActor *pAVar15;
  AActor *pAVar16;
  ulonglong uVar17;
  undefined1 auStackY_208 [32];
  TStatId local_1a8;
  UWorld *local_1a0;
  FCameraNodeSpaceParams local_198;
  TVector<double>_u_0 local_188;
  FCollisionShape local_170;
  TVector<double>_u_0 local_160;
  FName local_148;
  FName local_140;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_138;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  FTraceHandle local_f8;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar17 = (ulonglong)_tls_index;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8);
  local_1a0 = param_1;
  if ((*(int *)(lVar14 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&OcclusionTraceTag,L"CameraOcclusion");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar14 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&OcclusionTraceOwnerTag,L"OcclusionMaterialCameraNode");
    _Init_thread_footer(&::_TSS1);
  }
  if (this->_padding_ != 0) {
    pUVar7 = UOcclusionMaterialCameraNode::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar7);
    if (bVar6) {
      lVar14 = this->_padding_;
      goto LAB_14d6344e4;
    }
  }
  lVar14 = 0;
LAB_14d6344e4:
  local_198.EvaluationParams = param_2;
  local_198.EvaluationResult = param_3;
  bVar6 = FCameraNodeSpaceMath::GetCameraNodeOriginPosition
                    (&local_198,*(ECameraNodeOriginPosition *)(lVar14 + 0x51),
                     (TVector<double> *)&local_188._s_0);
  if (bVar6) {
    pTVar8 = TCameraParameterReader<UE::Math::TVector<double>_>::Get
                       (&this->OcclusionTargetOffsetReader,&param_3->VariableTable);
    local_160._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    local_160._s_0.Y = (pTVar8->field0_0x0)._s_0.Y;
    local_160._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    if (((local_160._s_0.X != 0.0) || (local_160._s_0.Y != 0.0)) || (local_160._s_0.Z != 0.0)) {
      FCameraNodeSpaceMath::OffsetCameraNodeSpacePosition
                (&local_198,(TVector<double> *)&local_188._s_0,(TVector<double> *)&local_160._s_0,
                 *(ECameraNodeSpace *)(lVar14 + 0x52),(TVector<double> *)&local_188._s_0);
    }
    bVar2 = *(byte *)(lVar14 + 0x50);
    pfVar9 = TCameraParameterReader<float>::Get
                       (&this->OcclusionSphereRadiusReader,&param_3->VariableTable);
    local_110._s_0.X = (param_3->CameraPose).Location.field0_0x0._s_0.X;
    local_110._s_0.Y = (param_3->CameraPose).Location.field0_0x0._s_0.Y;
    local_110._s_0.Z = (param_3->CameraPose).Location.field0_0x0._s_0.Z;
    pAVar16 = (AActor *)0x0;
    fVar1 = *pfVar9;
    local_128._s_0.X = local_188._s_0.X;
    local_128._s_0.Y = local_188._s_0.Y;
    local_128._s_0.Z = local_188._s_0.Z;
    if (param_2->Evaluator == (FCameraSystemEvaluator *)0x0) {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8527320952441143323>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Math\\CameraNodeSpaceMath.cpp"
                         ,0x1b,"EvaluationParams.Evaluator");
      pAVar15 = pAVar16;
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pTVar10 = FCameraEvaluationContextStack::GetActiveContext
                          (&param_2->Evaluator->ContextStack,&local_138);
      pAVar15 = (AActor *)(pTVar10->SharedReferenceCount).ReferenceController;
      pFVar3 = pTVar10->Object;
      if (pAVar15 != (AActor *)0x0) {
        LOCK();
        *(atomic<int> *)&pAVar15->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pAVar15->_padding_ + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.SharedReferenceCount.ReferenceController);
      if (((pFVar3 != (FCameraEvaluationContext *)0x0) &&
          (pUVar11 = FWeakObjectPtr::Get(&(pFVar3->WeakPlayerController).WeakPtr),
          pAVar16 = (AActor *)0x0, pUVar11 != (UObject *)0x0)) &&
         ((pAVar16 = *(AActor **)&pUVar11[0x13].field_0x18,
          GC::GIsIncrementalReachabilityPending != false && (pAVar16 != (AActor *)0x0)))) {
        GC::MarkAsReachable((UObject *)pAVar16);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pAVar15);
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8);
    local_170.ShapeType = Sphere;
    local_170.field1_0x4.Box.HalfExtentX = fVar1;
    if ((*(int *)(lVar14 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_StartOcclusionSweep =
           (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::RunOcclusionTrace(UWorld_*,UE::Cameras::FCameraNodeEvaluationParams_const_&,UE::Cameras::FCameraNodeEvaluationResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_StartOcclusionSweep>
            )0x0;
      pFVar12 = ::FName::FName(&local_148,"StartOcclusionSweep");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_StartOcclusionSweep,*pFVar12,
                 L"StartOcclusionSweep","STATGROUP_CollisionTags","STATCAT_Advanced",
                 L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_1a8.StatIdPtr = (TStatIdData *)StatPtr_StartOcclusionSweep;
    if (StatPtr_StartOcclusionSweep ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::RunOcclusionTrace(UWorld_*,UE::Cameras::FCameraNodeEvaluationParams_const_&,UE::Cameras::FCameraNodeEvaluationResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_StartOcclusionSweep>
         )0x0) {
      pFVar12 = ::FName::FName(&local_140,"StartOcclusionSweep");
      local_1a8.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_StartOcclusionSweep,*pFVar12,
                      L"StartOcclusionSweep","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar14 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"StartOcclusionSweep");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams(&local_e8,::StaticName,&local_1a8,false,pAVar16);
    local_e8.TraceTag = OcclusionTraceTag;
    local_e8.OwnerTag = OcclusionTraceOwnerTag;
    pFVar13 = UWorld::AsyncSweepByChannel
                        (local_1a0,&local_f8,Multi,(TVector<double> *)&local_110._s_0,
                         (TVector<double> *)&local_128._s_0,&UE::Math::TQuat<double>::Identity,
                         (uint)bVar2,&local_170,&local_e8,
                         &FCollisionResponseParams::DefaultResponseParam,
                         (TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                          *)0x0,0);
    bVar6 = pFVar13->bTransactional;
    uVar5 = *(undefined7 *)&pFVar13->field_0x9;
    (this->OcclusionTraceHandle).field0_0x0 = pFVar13->field0_0x0;
    (this->OcclusionTraceHandle).bTransactional = bVar6;
    *(undefined7 *)&(this->OcclusionTraceHandle).field_0x9 = uVar5;
    if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

