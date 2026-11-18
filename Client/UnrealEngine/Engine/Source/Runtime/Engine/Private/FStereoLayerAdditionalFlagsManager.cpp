// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// CollectFlags @ 14878d610

void __thiscall
FStereoLayerAdditionalFlagsManager::CollectFlags(FStereoLayerAdditionalFlagsManager *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  IModularFeatures *pIVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStackX_10 [8];
  ulonglong uStack_48;
  ForAnyElementType FStack_40;
  int iStack_38;
  int aiStack_34 [3];
  
  pIVar8 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"StereoLayersFlagsSupplier");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar5 = `public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
          ::__l2::FeatureName;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  iStack_38 = 0;
  aiStack_34[0] = 0;
  iVar7 = (**(code **)((longlong)*pIVar8 + 0x18))
                    (pIVar8,`public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  uVar12 = 0;
  if (0 < iVar7) {
    do {
      lVar9 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar5,uVar12);
      uStack_48 = lVar9 - 8;
      if (lVar9 == 0) {
        uStack_48 = 0;
      }
      if (((FStack_40.Data <= (FScriptContainerElement *)&uStack_48) &&
          ((FScriptContainerElement *)&uStack_48 < FStack_40.Data + (longlong)aiStack_34[0] * 8)) &&
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
      if (iStack_38 == aiStack_34[0]) {
        iStack_38 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&FStack_40,aiStack_34);
      }
      iVar1 = iStack_38 + 1;
      uVar11 = (int)uVar12 + 1;
      *(ulonglong *)(FStack_40.Data + (longlong)iStack_38 * 8) = uStack_48;
      uVar12 = (ulonglong)uVar11;
      iStack_38 = iVar1;
    } while ((int)uVar11 < iVar7);
  }
  iVar7 = iStack_38;
  pFVar2 = FStack_40.Data + (longlong)iStack_38 * 8;
  FVar10.Data = FStack_40.Data;
  while( true ) {
    if (iStack_38 != iVar7) {
      `TCheckedPointerIterator<IStereoLayersFlagsSupplier_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_10);
    }
    if (FVar10.Data == pFVar2) break;
    puVar3 = *(undefined8 **)FVar10.Data;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,this);
    }
    FVar10.Data = FVar10.Data + 8;
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  return;
}

// CollectFlags @ 14878d620

void __cdecl
FStereoLayerAdditionalFlagsManager::CollectFlags
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  IModularFeatures *pIVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 local_res10 [8];
  ulonglong local_48;
  ForAnyElementType local_40;
  int local_38;
  int aiStack_34 [3];
  
  pIVar8 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"StereoLayersFlagsSupplier");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar5 = `public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
          ::__l2::FeatureName;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  aiStack_34[0] = 0;
  iVar7 = (**(code **)((longlong)*pIVar8 + 0x18))
                    (pIVar8,`public:_static_class_FName___cdecl_IStereoLayersFlagsSupplier::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  uVar12 = 0;
  if (0 < iVar7) {
    do {
      lVar9 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar5,uVar12);
      local_48 = lVar9 - 8;
      if (lVar9 == 0) {
        local_48 = 0;
      }
      if (((local_40.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)aiStack_34[0] * 8)) &&
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
      if (local_38 == aiStack_34[0]) {
        local_38 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_40,aiStack_34);
      }
      iVar1 = local_38 + 1;
      uVar11 = (int)uVar12 + 1;
      *(ulonglong *)(local_40.Data + (longlong)local_38 * 8) = local_48;
      uVar12 = (ulonglong)uVar11;
      local_38 = iVar1;
    } while ((int)uVar11 < iVar7);
  }
  iVar7 = local_38;
  pFVar2 = local_40.Data + (longlong)local_38 * 8;
  FVar10.Data = local_40.Data;
  while( true ) {
    if (local_38 != iVar7) {
      `TCheckedPointerIterator<IStereoLayersFlagsSupplier_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar10.Data == pFVar2) break;
    puVar3 = *(undefined8 **)FVar10.Data;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,param_1);
    }
    FVar10.Data = FVar10.Data + 8;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// CreateRuntimeFlagsMap @ 1487916f0

void __thiscall
FStereoLayerAdditionalFlagsManager::CreateRuntimeFlagsMap(FStereoLayerAdditionalFlagsManager *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  FStereoLayerAdditionalFlagsManager *pFVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18;
  longlong local_b8;
  int *local_b0;
  FStereoLayerAdditionalFlagsManager *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  FStereoLayerAdditionalFlagsManager *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  bVar6 = 1 < *(int *)&(this->RuntimeFlags).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->RuntimeFlags);
  }
  iVar9 = 0;
  puVar2 = &(this->RuntimeFlags).field_0xc;
  *(undefined4 *)&(this->RuntimeFlags).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)&this->RuntimeFlags,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->RuntimeFlags).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RuntimeFlags).field_0x34 = 0;
  iVar3 = *(int *)&(this->RuntimeFlags).field_0x2c;
  *(undefined4 *)&(this->RuntimeFlags).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->RuntimeFlags).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RuntimeFlags).field_0x10,0);
  }
  uVar7 = 1;
  if (bVar6) {
    *(undefined4 *)&(this->RuntimeFlags).field_0x48 = 1;
    TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->RuntimeFlags);
  }
  puVar2 = &(this->UniqueFlags).Elements.field_0x10;
  local_res10[0] = 0x100;
  iVar3 = *(int *)&(this->UniqueFlags).Elements.field_0x28;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->UniqueFlags).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar11 = *puVar13;
    local_88 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      local_88 = local_88 + 0x20;
      iVar9 = iVar9 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14879182e;
      uVar11 = puVar13[lVar8 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iStack_8c = local_res18 + -1 + local_88;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_14879182e:
  uVar11 = *(uint *)&(this->UniqueFlags).Elements.field_0x28;
  uVar14 = uVar11 & 0xffffffe0;
  iStack_80 = *(int *)&(this->UniqueFlags).Elements.field_0x8 -
              *(int *)&(this->UniqueFlags).Elements.field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uVar7,iVar9);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = this;
  iStack_a0 = iVar9;
  uStack_9c = uVar7;
  local_98 = puVar2;
  iStack_84 = iStack_8c;
  local_78 = this;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->UniqueFlags).Elements.field_0x28;
  if (uVar11 != uVar7) {
    puVar12 = *(undefined1 **)&(this->UniqueFlags).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148791930;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_148791930:
  while( true ) {
    pFVar5 = local_78;
    if (*(int *)&(local_78->UniqueFlags).Elements.field_0x8 -
        *(int *)&(local_78->UniqueFlags).Elements.field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar11) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pFVar5 == this))
    break;
    local_b8 = (longlong)TStack_70.CurrentBitIndex * 0x10 +
               *(longlong *)&(pFVar5->UniqueFlags).Elements;
    local_b0 = local_res10;
    TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->RuntimeFlags,
               (TPairInitializer<FName_const_&,unsigned_int_const_&> *)&stack0x00000020,
               (bool *)&local_b8);
    local_res10[0] = local_res10[0] << 1;
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// Destroy @ 148792300

void __cdecl FStereoLayerAdditionalFlagsManager::Destroy(void)

{
  FSharedReferencer<1> local_10 [2];
  
  if (Instance.Object != (FStereoLayerAdditionalFlagsManager *)0x0) {
    local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    Instance.Object = (FStereoLayerAdditionalFlagsManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&Instance.SharedReferenceCount,local_10)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10[0].ReferenceController);
    return;
  }
  return;
}

// Get @ 14879afc0

TSharedPtr<FStereoLayerAdditionalFlagsManager,1> * __cdecl
FStereoLayerAdditionalFlagsManager::Get
          (TSharedPtr<FStereoLayerAdditionalFlagsManager,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  TSharedPtr<FStereoLayerAdditionalFlagsManager,1> *pTVar5;
  FStereoLayerAdditionalFlagsManager *pFVar6;
  FSharedReferencer<1> local_10;
  
  if (Instance.Object == (FStereoLayerAdditionalFlagsManager *)0x0) {
    local_10.ReferenceController = ::operator_new(0xb0);
    if (local_10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar6 = (FStereoLayerAdditionalFlagsManager *)&DAT_00000010;
    }
    else {
      (local_10.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar6 = (FStereoLayerAdditionalFlagsManager *)(local_10.ReferenceController + 1);
      (local_10.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_10.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFStereoLayerAdditionalFlagsManager___00_SharedPointerInternals__6B_
      ;
      local_10.ReferenceController[1]._padding_ = 0;
      local_10.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      local_10.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      local_10.ReferenceController[3]._padding_ = 0;
      local_10.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      local_10.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&local_10.ReferenceController[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&local_10.ReferenceController[4]._padding_ + 4) = 0;
      local_10.ReferenceController[5]._padding_ = 0;
      local_10.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
      local_10.ReferenceController[6]._padding_ = 0;
      local_10.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
      local_10.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
      local_10.ReferenceController[8]._padding_ = 0;
      local_10.ReferenceController[8].SharedReferenceCount = (atomic<int>)0x0;
      local_10.ReferenceController[8].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&local_10.ReferenceController[9]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&local_10.ReferenceController[9]._padding_ + 4) = 0;
      local_10.ReferenceController[10]._padding_ = 0;
      local_10.ReferenceController[10].SharedReferenceCount = (atomic<int>)0x0;
      if (pFVar6 == (FStereoLayerAdditionalFlagsManager *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedPtr<FStereoLayerAdditionalFlagsManager,1> *)(*pcVar2)();
          return pTVar5;
        }
      }
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar3.ReferenceController = local_10.ReferenceController;
    Instance.Object = pFVar6;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&Instance.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
    if (Instance.Object == (FStereoLayerAdditionalFlagsManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FStereoLayerAdditionalFlagsManager,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    CollectFlags(&(Instance.Object)->UniqueFlags);
    if (Instance.Object == (FStereoLayerAdditionalFlagsManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FStereoLayerAdditionalFlagsManager,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    CreateRuntimeFlagsMap(Instance.Object);
  }
  __return_storage_ptr__->Object = Instance.Object;
  FVar3 = Instance.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       Instance.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFlagValue @ 1487a0500

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FStereoLayerAdditionalFlagsManager::GetFlagValue
          (FStereoLayerAdditionalFlagsManager *this,FName param_1)

{
  uint *puVar1;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  puVar1 = TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
           ::Find((TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
                   *)&this->RuntimeFlags,param_1);
  if (puVar1 != (uint *)0x0) {
    return *puVar1;
  }
  if (4 < (byte)LogStereoLayerFlags._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStereoLayerFlags);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

