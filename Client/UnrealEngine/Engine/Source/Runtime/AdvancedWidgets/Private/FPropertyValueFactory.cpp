// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 9

// FPropertyValueFactory @ 14d836470

FPropertyValueFactory * __thiscall
UE::PropertyViewer::FPropertyValueFactory::FPropertyValueFactory(FPropertyValueFactory *this)

{
  FPropertyValueFactoryImpl *pFVar1;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FPropertyViewerMapItem *pFVar8;
  FFieldClass *pFVar9;
  uint uVar10;
  int iVar11;
  FName local_res8;
  FPropertyValueFactory local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  FDelegateAllocation local_78;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  puVar6 = (undefined8 *)0x0;
  (this->Impl).Ptr = (FPropertyValueFactoryImpl *)0x0;
  puVar5 = ::operator_new(0xb0);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0;
    *puVar5 = Core::Private::PimplPtr::
              DeleterFunc<UE::PropertyViewer::Private::FPropertyValueFactoryImpl>;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[9] = 0;
    puVar5[0xb] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x13] = 0;
    puVar5[0x15] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[6] = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x80;
    *(undefined4 *)(puVar5 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x44) = 0;
    puVar5[10] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0x10] = 0;
    *(undefined4 *)(puVar5 + 0x11) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x8c) = 0x80;
    *(undefined4 *)(puVar5 + 0x12) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x94) = 0;
    puVar5[0x14] = 0;
    puVar6 = puVar5;
  }
  if (&local_88 == this) {
    if ((FPropertyValueFactoryImpl *)(puVar6 + 2) != (FPropertyValueFactoryImpl *)0x0)
    goto LAB_14d836561;
  }
  else {
    pFVar1 = (this->Impl).Ptr;
    (this->Impl).Ptr = (FPropertyValueFactoryImpl *)(puVar6 + 2);
    if (pFVar1 != (FPropertyValueFactoryImpl *)0x0) {
      puVar6 = (undefined8 *)&pFVar1[-1].RegisteredFieldEditor.field_0x40;
LAB_14d836561:
      (*(code *)*puVar6)();
    }
  }
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_78.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)&local_50);
  local_38 = &local_78;
  puVar6 = Core::Private::DelegateAllocate(0x20,&local_78);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__UFGenerateArgs_FPropertyValueFactory_PropertyViewer_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[3] = PropertyViewer::Private::GenerateNumericEditor;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedPtr_VSWidget___00__UFGenerateArgs_FPropertyValueFactory_PropertyViewer_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  local_res8 = (FName)FNumericProperty::StaticClass();
  if (local_res8 == (FName)0x0) {
LAB_14d8367bf:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_68);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_80,(FReadAccessScope *)&local_68);
    if (((local_78.DelegateSize == 0) ||
        (local_78.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar4 = (**(code **)((longlong)*(atomic<unsigned___int64> *)local_78.DelegateAllocator +
                            0x38))(), cVar4 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_68);
      goto LAB_14d8367bf;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_68);
    iVar11 = Generator + 1;
    local_50.AccessType = Reader;
    local_50._4_4_ = 0;
    local_50.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_50._16_4_ = 0;
    local_38 = (FDelegateAllocation *)((ulonglong)local_38 & 0xffffffff00000000);
    Generator = iVar11;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_68);
    iVar3 = local_78.DelegateSize;
    FVar2 = local_78.DelegateAllocator;
    local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_78.DelegateSize = 0;
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_50,
               (FWriteAccessScope *)&local_68);
    if (local_50._16_4_ == 0) {
LAB_14d8366c2:
      if (local_50.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
        FMemory::Free(local_50.Accessor);
      }
    }
    else if (local_50.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
      (**(code **)(local_50.Accessor)->State)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50.Accessor,0,0,0x10);
      local_50._16_4_ = 0;
      goto LAB_14d8366c2;
    }
    local_50.Accessor = (FMRSWRecursiveAccessDetector *)FVar2;
    local_50._16_4_ = iVar3;
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    local_38 = (FDelegateAllocation *)CONCAT44(local_38._4_4_,iVar11);
    uVar10 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    pFVar8 = TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
             ::FindOrAddImpl<FFieldClass_const_*_const_&>
                       ((TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                         *)(this->Impl).Ptr,uVar10 >> 0x10 ^ uVar10,(FFieldClass **)&local_res8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_50);
    (pFVar8->Handle).Id = (int)local_38;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_50,
               (FWriteAccessScope *)&local_68);
    if ((local_50._16_4_ != 0) &&
       ((ForElementType<TAlignedBytes<16,16>_>)local_50.Accessor !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)(local_50.Accessor)->State)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50.Accessor,0,0,0x10);
      local_50._16_4_ = 0;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if ((ForElementType<TAlignedBytes<16,16>_>)local_50.Accessor !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free(local_50.Accessor);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_68);
  }
  if ((local_78.DelegateSize != 0) &&
     (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_78.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_78,0,0,0x10);
    local_78.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_78.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_78.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)&local_50);
  local_38 = &local_78;
  puVar6 = Core::Private::DelegateAllocate(0x20,&local_78);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__UFGenerateArgs_FPropertyValueFactory_PropertyViewer_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[3] = SBoolPropertyValue::CreateInstance;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedPtr_VSWidget___00__UFGenerateArgs_FPropertyValueFactory_PropertyViewer_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  local_res8 = (FName)FBoolProperty::StaticClass();
  if (local_res8 == (FName)0x0) {
LAB_14d836a63:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_68);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_80,(FReadAccessScope *)&local_68);
    if (((local_78.DelegateSize == 0) ||
        (local_78.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar4 = (**(code **)((longlong)*(atomic<unsigned___int64> *)local_78.DelegateAllocator +
                            0x38))(), cVar4 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_68);
      goto LAB_14d836a63;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_68);
    iVar11 = Generator + 1;
    local_50.AccessType = Reader;
    local_50._4_4_ = 0;
    local_50.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_50._16_4_ = 0;
    local_38 = (FDelegateAllocation *)((ulonglong)local_38 & 0xffffffff00000000);
    Generator = iVar11;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_68);
    iVar3 = local_78.DelegateSize;
    FVar2 = local_78.DelegateAllocator;
    local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_78.DelegateSize = 0;
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_50,
               (FWriteAccessScope *)&local_68);
    if (local_50._16_4_ == 0) {
LAB_14d836966:
      if (local_50.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
        FMemory::Free(local_50.Accessor);
      }
    }
    else if (local_50.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
      (**(code **)(local_50.Accessor)->State)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50.Accessor,0,0,0x10);
      local_50._16_4_ = 0;
      goto LAB_14d836966;
    }
    local_50.Accessor = (FMRSWRecursiveAccessDetector *)FVar2;
    local_50._16_4_ = iVar3;
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    local_38 = (FDelegateAllocation *)CONCAT44(local_38._4_4_,iVar11);
    uVar10 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    pFVar8 = TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
             ::FindOrAddImpl<FFieldClass_const_*_const_&>
                       ((TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                         *)(this->Impl).Ptr,uVar10 >> 0x10 ^ uVar10,(FFieldClass **)&local_res8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_50);
    (pFVar8->Handle).Id = (int)local_38;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_50,
               (FWriteAccessScope *)&local_68);
    if ((local_50._16_4_ != 0) &&
       ((ForElementType<TAlignedBytes<16,16>_>)local_50.Accessor !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)(local_50.Accessor)->State)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50.Accessor,0,0,0x10);
      local_50._16_4_ = 0;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if ((ForElementType<TAlignedBytes<16,16>_>)local_50.Accessor !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free(local_50.Accessor);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_68);
  }
  if ((local_78.DelegateSize != 0) &&
     (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_78.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_78,0,0,0x10);
    local_78.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_78.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_78.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)&local_50);
  local_38 = &local_78;
  puVar6 = Core::Private::DelegateAllocate(0x20,&local_78);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__UFGenerateArgs_FPropertyValueFactory_PropertyViewer_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[3] = SEnumPropertyValue::CreateInstance;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedPtr_VSWidget___00__UFGenerateArgs_FPropertyValueFactory_PropertyViewer_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  local_res8 = (FName)FEnumProperty::StaticClass();
  if (local_res8 != (FName)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_80,(FReadAccessScope *)&local_68);
    if (((local_78.DelegateSize != 0) &&
        (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
       (cVar4 = (**(code **)((longlong)*(atomic<unsigned___int64> *)local_78.DelegateAllocator +
                            0x38))(), cVar4 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_68);
      iVar11 = Generator + 1;
      local_50.AccessType = Reader;
      local_50._4_4_ = 0;
      local_50.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
      local_50._16_4_ = 0;
      local_38 = (FDelegateAllocation *)((ulonglong)local_38 & 0xffffffff00000000);
      Generator = iVar11;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_80,(FWriteAccessScope *)&local_68);
      iVar3 = local_78.DelegateSize;
      FVar2 = local_78.DelegateAllocator;
      local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_78.DelegateSize = 0;
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_50,
                 (FWriteAccessScope *)&local_68);
      if (local_50._16_4_ == 0) {
LAB_14d836c1a:
        if (local_50.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
          FMemory::Free(local_50.Accessor);
        }
      }
      else if (local_50.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
        (**(code **)(local_50.Accessor)->State)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50.Accessor,0,0,0x10);
        local_50._16_4_ = 0;
        goto LAB_14d836c1a;
      }
      local_50.Accessor = (FMRSWRecursiveAccessDetector *)FVar2;
      local_50._16_4_ = iVar3;
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      local_38 = (FDelegateAllocation *)CONCAT44(local_38._4_4_,iVar11);
      uVar10 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4))
               * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      pFVar8 = TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
               ::FindOrAddImpl<FFieldClass_const_*_const_&>
                         ((TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                           *)(this->Impl).Ptr,uVar10 >> 0x10 ^ uVar10,(FFieldClass **)&local_res8);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_50);
      (pFVar8->Handle).Id = (int)local_38;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_50,
                 (FWriteAccessScope *)&local_68);
      if ((local_50._16_4_ != 0) &&
         ((ForElementType<TAlignedBytes<16,16>_>)local_50.Accessor !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(local_50.Accessor)->State)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50.Accessor,0,0,0x10);
        local_50._16_4_ = 0;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if ((ForElementType<TAlignedBytes<16,16>_>)local_50.Accessor !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(local_50.Accessor);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_50);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_80,(FWriteAccessScope *)&local_68);
      goto joined_r0x00014d836d28;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)&local_68);
joined_r0x00014d836d28:
  if ((local_78.DelegateSize != 0) &&
     (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_78.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_78,0,0,0x10);
    local_78.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_78.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
  ::CreateStatic<>((TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
                    *)&local_68,SStringPropertyValue::CreateInstance);
  pFVar9 = FStrProperty::StaticClass();
  Register(this,(FFieldClass *)&local_res8,
           (TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
            *)pFVar9);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
  ::CreateStatic<>((TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
                    *)&local_68,SStringPropertyValue::CreateInstance);
  pFVar9 = FTextProperty::StaticClass();
  Register(this,(FFieldClass *)&local_res8,
           (TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
            *)pFVar9);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
  ::CreateStatic<>((TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
                    *)&local_68,SStringPropertyValue::CreateInstance);
  pFVar9 = FNameProperty::StaticClass();
  Register(this,(FFieldClass *)&local_res8,
           (TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
            *)pFVar9);
  return this;
}

// Generate @ 14d861e10

/* WARNING: Type propagation algorithm not settling */

TSharedPtr<SWidget,1> * __thiscall
UE::PropertyViewer::FPropertyValueFactory::Generate
          (FPropertyValueFactory *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FGenerateArgs *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  EClassCastFlags EVar4;
  FPropertyValueFactoryImpl *pFVar5;
  undefined1 *puVar6;
  ForElementType<FProperty_const_*> FVar7;
  code *pcVar8;
  FPropertyValueFactoryImpl *pFVar9;
  bool bVar10;
  FProperty *pFVar11;
  FTopLevelAssetPath *pFVar12;
  FPropertyViewerMapItem *this_00;
  TSharedPtr<SWidget,1> *pTVar13;
  FGenerateArgs *pFVar14;
  longlong lVar15;
  undefined1 *puVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 local_1d8 [8];
  TSharedPtr<SWidget,1> *local_1d0;
  FPropertyValueFactoryImpl *local_1c8;
  int iStack_1c0;
  uint uStack_1bc;
  undefined1 *local_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  int local_198;
  int local_194;
  FPropertyValueFactoryImpl *local_190;
  FPropertyValueFactoryImpl *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  FTopLevelAssetPath local_158;
  FTopLevelAssetPath local_148;
  FGenerateArgs local_138;
  FGenerateArgs local_f8;
  FGenerateArgs local_b8;
  FGenerateArgs local_78;
  
  pFVar14 = &local_f8;
  local_1d0 = __return_storage_ptr__;
  pFVar11 = FPropertyPath::GetLastProperty(&param_1->Path);
  if (((pFVar11 == (FProperty *)0x0) ||
      ((pFVar11->PropertyFlags & CPF_BlueprintVisible) == CPF_None)) || (pFVar11->ArrayDim != 1)) {
LAB_14d862243:
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if ((pFVar11->PropertyFlags & CPF_BlueprintReadOnly) != CPF_None) {
      param_1->bCanEditValue = false;
    }
    EVar4 = ((FFieldClass *)pFVar11->_padding_)->CastFlags;
    if ((EVar4 >> 0x1a & 1) == 0) {
      if ((EVar4 >> 0x14 & 1) == 0) {
        pFVar5 = (this->Impl).Ptr;
        local_190 = pFVar5;
        this_00 = TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                  ::Find((TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                          *)pFVar5,(FFieldClass *)pFVar11->_padding_);
        if (this_00 == (FPropertyViewerMapItem *)0x0) {
          iVar17 = *(int *)&(((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                               *)&pFVar5->RegisteredFieldClassEditor)->Elements).field_0x28;
          puVar1 = &(((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                       *)&pFVar5->RegisteredFieldClassEditor)->Elements).field_0x10;
          iStack_1c0 = 0;
          local_1a8 = 0;
          uStack_1bc = 1;
          iStack_1ac = 0;
          if (iVar17 != 0) {
            puVar21 = *(uint **)&(((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                                    *)&pFVar5->RegisteredFieldClassEditor)->Elements).field_0x20;
            if (puVar21 == (uint *)0x0) {
              puVar21 = (uint *)puVar1;
            }
            uVar20 = *puVar21;
            while (uVar20 == 0) {
              lVar15 = (longlong)iStack_1c0;
              local_1a8 = local_1a8 + 0x20;
              iStack_1c0 = iStack_1c0 + 1;
              iStack_1ac = iVar17;
              if ((int)((iVar17 + -1 >> 0x1f & 0x1fU) + iVar17 + -1) >> 5 < iStack_1c0)
              goto LAB_14d86203e;
              uVar20 = puVar21[lVar15 + 1];
            }
            uStack_1bc = -uVar20 & uVar20;
            uVar2 = (ulonglong)uStack_1bc * 2 + 1;
            lVar15 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_198 = (int)lVar15;
            iStack_1ac = local_1a8 + -1 + local_198;
            if (iVar17 < iStack_1ac) {
              iStack_1ac = iVar17;
            }
          }
LAB_14d86203e:
          uVar20 = *(uint *)&(((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                                *)&pFVar5->RegisteredFieldClassEditor)->Elements).field_0x28;
          iStack_1a0 = *(int *)&(((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                                   *)&pFVar5->RegisteredFieldClassEditor)->Elements).field_0x8 -
                       *(int *)&(((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                                   *)&pFVar5->RegisteredFieldClassEditor)->Elements).field_0x34;
          uVar19 = uVar20 & 0xffffffe0;
          TStack_180._padding_ = CONCAT44(uStack_1bc,iStack_1c0);
          uStack_1b0 = 0xffffffff;
          TStack_180.CurrentBitIndex = iStack_1ac;
          TStack_180.UnvisitedBitMask = 0xffffffff;
          iVar17 = (int)uVar20 >> 5;
          TStack_180._28_4_ = iStack_1ac;
          TStack_180.BaseBitIndex = local_1a8;
          uStack_160 = CONCAT44(uStack_19c,iStack_1a0);
          local_1c8 = pFVar5;
          local_1b8 = puVar1;
          iStack_1a4 = iStack_1ac;
          local_188 = pFVar5;
          TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if (((int)uVar20 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            pTVar13 = (TSharedPtr<SWidget,1> *)(*pcVar8)();
            return pTVar13;
          }
          pFVar9 = local_190;
          uVar3 = *(uint *)&(((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                               *)&pFVar5->RegisteredFieldClassEditor)->Elements).field_0x28;
          if (uVar20 != uVar3) {
            puVar6 = *(undefined1 **)
                      &(((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                          *)&pFVar5->RegisteredFieldClassEditor)->Elements).field_0x20;
            puVar16 = puVar1;
            if (puVar6 != (undefined1 *)0x0) {
              puVar16 = puVar6;
            }
            uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar17 * 4);
            while (uVar20 == 0) {
              lVar15 = (longlong)iVar17;
              uVar19 = uVar19 + 0x20;
              iVar17 = iVar17 + 1;
              uVar20 = uVar3;
              if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar17)
              goto LAB_14d862150;
              uVar20 = *(uint *)(puVar16 + lVar15 * 4 + 4);
            }
            uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_194 = (int)lVar15;
            uVar20 = local_194 + -1 + uVar19;
            if ((int)uVar3 < (int)uVar20) {
              uVar20 = uVar3;
            }
          }
LAB_14d862150:
          do {
            pFVar5 = local_188;
            if (*(int *)&(((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                            *)&local_188->RegisteredFieldClassEditor)->Elements).field_0x8 -
                *(int *)&(((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                            *)&local_188->RegisteredFieldClassEditor)->Elements).field_0x34 !=
                (int)uStack_160) {
              local_1d8[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
            }
            if (((TStack_180.CurrentBitIndex == uVar20) &&
                (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
               (__return_storage_ptr__ = local_1d0, pFVar5 == pFVar9)) goto LAB_14d862243;
            lVar15 = pFVar11->_padding_;
            plVar18 = (longlong *)
                      (*(longlong *)
                        &((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                           *)&pFVar5->RegisteredFieldClassEditor)->Elements +
                      (longlong)TStack_180.CurrentBitIndex * 0x30);
            uVar2 = *(ulonglong *)(*plVar18 + 0x10);
            if (uVar2 == 0) {
              for (; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x20)) {
                if (lVar15 == *plVar18) {
                  bVar10 = true;
                  goto LAB_14d8621c3;
                }
              }
              bVar10 = false;
            }
            else {
              bVar10 = (*(ulonglong *)(lVar15 + 0x18) & uVar2) != 0;
            }
LAB_14d8621c3:
            if (bVar10) goto LAB_14d8621e6;
            TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
          } while( true );
        }
        bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
        if ((!bVar10) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("FoundOnGenerate->OnGenerate.IsBound()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Framework\\PropertyViewer\\PropertyValueFactory.cpp"
                                ,0x61,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar13 = (TSharedPtr<SWidget,1> *)(*pcVar8)();
          return pTVar13;
        }
        pFVar14 = &local_b8;
      }
      else {
        pFVar5 = (this->Impl).Ptr;
        pFVar12 = UStruct::GetStructPathName((UStruct *)pFVar11[1]._padding_,&local_148);
        this_00 = TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                  ::Find((TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                          *)&pFVar5->RegisteredFieldEditor,pFVar12);
        if (this_00 == (FPropertyViewerMapItem *)0x0) goto LAB_14d862243;
        bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
        if ((!bVar10) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("FoundOnGenerate->OnGenerate.IsBound()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Framework\\PropertyViewer\\PropertyValueFactory.cpp"
                                ,0x59,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar13 = (TSharedPtr<SWidget,1> *)(*pcVar8)();
          return pTVar13;
        }
      }
    }
    else {
      pFVar5 = (this->Impl).Ptr;
      pFVar12 = UStruct::GetStructPathName((UStruct *)pFVar11[1]._padding_,&local_158);
      this_00 = TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                ::Find((TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                        *)&pFVar5->RegisteredFieldEditor,pFVar12);
      if (this_00 == (FPropertyViewerMapItem *)0x0) goto LAB_14d862243;
      bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      if ((!bVar10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FoundOnGenerate->OnGenerate.IsBound()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Framework\\PropertyViewer\\PropertyValueFactory.cpp"
                              ,0x51,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TSharedPtr<SWidget,1> *)(*pcVar8)();
        return pTVar13;
      }
      pFVar14 = &local_138;
    }
    pFVar14 = FGenerateArgs::FGenerateArgs(pFVar14,param_1);
    TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
    ::Execute(&this_00->OnGenerate,__return_storage_ptr__,pFVar14);
  }
LAB_14d862252:
  FVar7 = (param_1->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  return __return_storage_ptr__;
LAB_14d8621e6:
  bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                     ((TDelegateBase<FNotThreadSafeDelegateMode> *)(plVar18 + 1));
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClassEditor.Value.OnGenerate.IsBound()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Framework\\PropertyViewer\\PropertyValueFactory.cpp"
                          ,0x68,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pTVar13 = (TSharedPtr<SWidget,1> *)(*pcVar8)();
    return pTVar13;
  }
  pFVar14 = FGenerateArgs::FGenerateArgs(&local_78,param_1);
  __return_storage_ptr__ = local_1d0;
  TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
  ::Execute((TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
             *)(plVar18 + 1),local_1d0,pFVar14);
  goto LAB_14d862252;
}

// GenerateDefault @ 14d863040

TSharedPtr<SWidget,1> * __thiscall
UE::PropertyViewer::FPropertyValueFactory::GenerateDefault
          (FPropertyValueFactory *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FGenerateArgs *param_1)

{
  ForElementType<FProperty_const_*> FVar1;
  FProperty *pFVar2;
  FGenerateArgs local_48;
  
  pFVar2 = FPropertyPath::GetLastProperty(&param_1->Path);
  if ((pFVar2 == (FProperty *)0x0) || ((pFVar2->PropertyFlags & CPF_BlueprintVisible) == CPF_None))
  {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if ((pFVar2->PropertyFlags & CPF_BlueprintReadOnly) != CPF_None) {
      param_1->bCanEditValue = false;
    }
    FPropertyPath::FPropertyPath(&local_48.Path,&param_1->Path);
    local_48.NotifyHook = param_1->NotifyHook;
    local_48.bCanEditValue = param_1->bCanEditValue;
    SDefaultPropertyValue::CreateInstance(__return_storage_ptr__,&local_48);
  }
  FVar1 = (param_1->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return __return_storage_ptr__;
}

// HasCustomPropertyValue @ 14d8704a0

bool __thiscall
UE::PropertyViewer::FPropertyValueFactory::HasCustomPropertyValue
          (FPropertyValueFactory *this,FFieldClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPropertyViewerMapItem *pFVar4;
  
  if (param_1 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Framework\\PropertyViewer\\PropertyValueFactory.cpp"
                       ,0x88,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar4 = TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
           ::Find((TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                   *)(this->Impl).Ptr,param_1);
  return pFVar4 != (FPropertyViewerMapItem *)0x0;
}

// HasCustomPropertyValue @ 14d870500

bool __thiscall
UE::PropertyViewer::FPropertyValueFactory::HasCustomPropertyValue
          (FPropertyValueFactory *this,UStruct *param_1)

{
  FPropertyValueFactoryImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FTopLevelAssetPath *pFVar5;
  FPropertyViewerMapItem *pFVar6;
  FTopLevelAssetPath local_18;
  
  if (param_1 == (UStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Framework\\PropertyViewer\\PropertyValueFactory.cpp"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Impl).Ptr;
  pFVar5 = UStruct::GetStructPathName(param_1,&local_18);
  pFVar6 = TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
           ::Find((TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                   *)&pFVar1->RegisteredFieldEditor,pFVar5);
  return pFVar6 != (FPropertyViewerMapItem *)0x0;
}

// MakeHandle @ 14d872f00

FHandle __cdecl UE::PropertyViewer::FPropertyValueFactory::MakeHandle(void)

{
  int *in_RCX;
  
  Generator = Generator + 1;
  *in_RCX = Generator;
  return (FHandle)(int)in_RCX;
}

// Register @ 14d8831e0

FHandle __thiscall
UE::PropertyViewer::FPropertyValueFactory::Register
          (FPropertyValueFactory *this,FFieldClass *param_1,
          TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
          *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  FPropertyViewerMapItem *this_00;
  uint uVar4;
  void *pvVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R9;
  uint uVar6;
  FFieldClass *local_res18 [2];
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  int local_50;
  uint local_48;
  
  local_res18[0] = (FFieldClass *)param_2;
  if (param_2 !=
      (TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
       *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R9,
               (FReadAccessScope *)&local_78);
    if (((*(int *)&in_R9->field_0x10 != 0) && (*(longlong **)&in_R9->field_0x8 != (longlong *)0x0))
       && (cVar3 = (**(code **)(**(longlong **)&in_R9->field_0x8 + 0x38))(), cVar3 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_78);
      uVar6 = Generator + 1;
      local_60 = (undefined1  [8])0x0;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      local_48 = 0;
      Generator = uVar6;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R9,
                 (FWriteAccessScope *)&local_78);
      pFVar2 = *(FScriptContainerElement **)&in_R9->field_0x8;
      *(undefined8 *)&in_R9->field_0x8 = 0;
      iVar1 = *(int *)&in_R9->field_0x10;
      *(undefined4 *)&in_R9->field_0x10 = 0;
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                 (FWriteAccessScope *)&local_78);
      if (local_50 == 0) {
LAB_14d8832e9:
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
      }
      else if (local_58.Data != (FScriptContainerElement *)0x0) {
        (*(code *)**(undefined8 **)local_58.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
        local_50 = 0;
        goto LAB_14d8832e9;
      }
      local_58.Data = pFVar2;
      local_50 = iVar1;
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      uVar4 = ((uint)((ulonglong)local_res18[0] >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res18[0] >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      local_48 = uVar6;
      this_00 = TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                ::FindOrAddImpl<FFieldClass_const_*_const_&>
                          ((TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                            *)(this->Impl).Ptr,uVar4 >> 0x10 ^ uVar4,local_res18);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
      (this_00->Handle).Id = local_48;
      (param_1->Name).ComparisonIndex.Value = uVar6;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                 (FWriteAccessScope *)&local_78);
      if ((local_50 != 0) && (local_58.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_58.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
        local_50 = 0;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_60);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R9,
                 (FWriteAccessScope *)&local_78);
      if ((*(int *)&in_R9->field_0x10 != 0) &&
         (*(undefined8 **)&in_R9->field_0x8 != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)&in_R9->field_0x8)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&in_R9->field_0x8,0,0,0x10);
        *(undefined4 *)&in_R9->field_0x10 = 0;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      pvVar5 = *(void **)&in_R9->field_0x8;
      goto LAB_14d88344c;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
  }
  (param_1->Name).ComparisonIndex.Value = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(in_R9);
  pvVar5 = *(void **)&in_R9->field_0x8;
LAB_14d88344c:
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)in_R9)
  ;
  return (FHandle)(int)param_1;
}

// Register @ 14d883480

FHandle __thiscall
UE::PropertyViewer::FPropertyValueFactory::Register
          (FPropertyValueFactory *this,UStruct *param_1,
          TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
          *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FPropertyValueFactoryImpl *pFVar3;
  FName FVar4;
  FName FVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  FTopLevelAssetPath *pFVar9;
  FPropertyViewerMapItem *this_00;
  int iVar10;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R9;
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_48;
  
  if (param_2 !=
      (TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
       *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R9,
               (FReadAccessScope *)&local_78);
    if (((*(int *)&in_R9->field_0x10 != 0) && (*(longlong **)&in_R9->field_0x8 != (longlong *)0x0))
       && (cVar6 = (**(code **)(**(longlong **)&in_R9->field_0x8 + 0x38))(), cVar6 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_78);
      iVar10 = Generator + 1;
      local_60 = (undefined1  [8])0x0;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      local_48 = 0;
      Generator = iVar10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R9,
                 (FWriteAccessScope *)&local_78);
      pFVar2 = *(FScriptContainerElement **)&in_R9->field_0x8;
      *(undefined8 *)&in_R9->field_0x8 = 0;
      iVar1 = *(int *)&in_R9->field_0x10;
      *(undefined4 *)&in_R9->field_0x10 = 0;
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                 (FWriteAccessScope *)&local_78);
      if (local_50 == 0) {
LAB_14d88358e:
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
      }
      else if (local_58.Data != (FScriptContainerElement *)0x0) {
        (*(code *)**(undefined8 **)local_58.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
        local_50 = 0;
        goto LAB_14d88358e;
      }
      local_58.Data = pFVar2;
      local_50 = iVar1;
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      pFVar3 = (this->Impl).Ptr;
      local_48 = iVar10;
      pFVar9 = UStruct::GetStructPathName((UStruct *)param_2,(FTopLevelAssetPath *)&local_78);
      FVar4 = pFVar9->AssetName;
      uVar7 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      FVar5 = pFVar9->PackageName;
      uVar8 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
      uVar8 = uVar8 + FVar5.Number;
      this_00 = TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                ::FindOrAddImpl<FTopLevelAssetPath>
                          ((TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
                            *)&pFVar3->RegisteredFieldEditor,
                           (uVar8 >> 2) + uVar8 * 0x40 + -0x61c88647 + uVar7 + FVar4.Number ^ uVar8,
                           pFVar9);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
      (this_00->Handle).Id = local_48;
      *(int *)&param_1->_padding_ = iVar10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                 (FWriteAccessScope *)&local_78);
      if ((local_50 != 0) && (local_58.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_58.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
        local_50 = 0;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_60);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R9,
                 (FWriteAccessScope *)&local_78);
      if ((*(int *)&in_R9->field_0x10 != 0) &&
         (*(undefined8 **)&in_R9->field_0x8 != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)&in_R9->field_0x8)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&in_R9->field_0x8,0,0,0x10);
        *(undefined4 *)&in_R9->field_0x10 = 0;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      if (*(void **)&in_R9->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&in_R9->field_0x8);
      }
      goto LAB_14d883737;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
  }
  *(undefined4 *)&param_1->_padding_ = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(in_R9);
  if (*(void **)&in_R9->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&in_R9->field_0x8);
  }
LAB_14d883737:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)in_R9)
  ;
  return (FHandle)(int)param_1;
}

// Unregister @ 14d88bc80

void __thiscall
UE::PropertyViewer::FPropertyValueFactory::Unregister(FPropertyValueFactory *this,FHandle param_1)

{
  FPropertyValueFactoryImpl *pFVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  TMap<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
  *pTVar6;
  uint uVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
  *pTStack_20;
  FPropertyValueFactoryImpl *local_18;
  undefined2 local_10;
  
  pTVar6 = &((this->Impl).Ptr)->RegisteredFieldEditor;
  TSet<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
              *)pTVar6);
  iVar5 = 1;
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  uVar7 = local_78._28_4_;
  local_18 = (FPropertyValueFactoryImpl *)pTVar6;
  if ((int)uVar7 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      if (*(int *)((longlong)(int)uVar4 * 0x38 + 0x28 + *local_48) == param_1.Id) {
        TSet<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar7);
        if (local_10._1_1_ == '\0') {
          return;
        }
        uVar7 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)&local_18->RegisteredFieldClassEditor)->field_0x8 -
                *(int *)&((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)&local_18->RegisteredFieldClassEditor)->field_0x34;
        if (3 < uVar7) {
          uVar4 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar2 & 0x1f);
        }
        if ((((int)uVar7 < 1) || (iVar5 <= *(int *)((longlong)local_18 + 0x48))) &&
           (*(int *)((longlong)local_18 + 0x48) <= iVar5)) {
          return;
        }
        *(int *)((longlong)local_18 + 0x48) = iVar5;
        TSet<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                  *)local_18);
        return;
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
      uVar7 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar7 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&local_18->RegisteredFieldClassEditor)->field_0x8 -
              *(int *)&((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&local_18->RegisteredFieldClassEditor)->field_0x34;
      if (uVar7 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar7) && (*(int *)((longlong)local_18 + 0x48) < iVar3)) ||
         (iVar3 < *(int *)((longlong)local_18 + 0x48))) {
        *(int *)((longlong)local_18 + 0x48) = iVar3;
        TSet<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                  *)local_18);
      }
    }
  }
  pFVar1 = (this->Impl).Ptr;
  TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
              *)pFVar1);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  uVar7 = local_78._28_4_;
  local_18 = pFVar1;
  if ((int)uVar7 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      if (*(int *)(*local_48 + 0x20 + (longlong)(int)uVar4 * 0x30) == param_1.Id) {
        TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                         *)pTStack_20,uVar7);
        goto LAB_14d88beaf;
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
      uVar7 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((char)local_10 != '\0') {
LAB_14d88beaf:
      if (local_10._1_1_ != '\0') {
        uVar7 = *(int *)&(local_18->RegisteredFieldClassEditor).field_0x8 -
                *(int *)&(local_18->RegisteredFieldClassEditor).field_0x34;
        if (3 < uVar7) {
          uVar4 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar7) &&
            (*(int *)&(local_18->RegisteredFieldClassEditor).field_0x48 < iVar5)) ||
           (iVar5 < *(int *)&(local_18->RegisteredFieldClassEditor).field_0x48)) {
          *(int *)&(local_18->RegisteredFieldClassEditor).field_0x48 = iVar5;
          TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
                    *)local_18);
        }
      }
    }
  }
  return;
}

