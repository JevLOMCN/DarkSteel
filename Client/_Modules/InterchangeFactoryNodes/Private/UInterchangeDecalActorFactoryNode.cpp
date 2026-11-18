// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 24

// StaticClass @ 14e51e1d0

UClass * __cdecl UInterchangeDecalActorFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDecalActorFactoryNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeDecalActorFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeDecalActorFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeDecalActorFactoryNode,0x2b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeDecalActorFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeDecalActorFactoryNode>,local_res8,
               UInterchangeActorFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDecalActorFactoryNode.InnerSingleton;
}

// UInterchangeDecalActorFactoryNode @ 14e52fc20

UInterchangeDecalActorFactoryNode * __thiscall
UInterchangeDecalActorFactoryNode::UInterchangeDecalActorFactoryNode
          (UInterchangeDecalActorFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeActorFactoryNode::UInterchangeActorFactoryNode
            ((UInterchangeActorFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeDecalActorFactoryNode__6B_;
  (this->Macro_CustomSortOrderKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomSortOrderKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSortOrderKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSortOrderKey).Key,L"SortOrder");
  (this->Macro_CustomDecalSizeKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomDecalSizeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDecalSizeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomDecalSizeKey).Key,L"DecalSize");
  (this->Macro_CustomDecalMaterialPathNameKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDecalMaterialPathNameKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDecalMaterialPathNameKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomDecalMaterialPathNameKey).Key,L"DecalMaterialPathName");
  return this;
}

// UInterchangeDecalActorFactoryNode @ 14e52fca0

UInterchangeDecalActorFactoryNode * __thiscall
UInterchangeDecalActorFactoryNode::UInterchangeDecalActorFactoryNode
          (UInterchangeDecalActorFactoryNode *this)

{
  UInterchangeActorFactoryNode::UInterchangeActorFactoryNode((UInterchangeActorFactoryNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeDecalActorFactoryNode__6B_;
  (this->Macro_CustomSortOrderKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomSortOrderKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSortOrderKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSortOrderKey).Key,L"SortOrder");
  (this->Macro_CustomDecalSizeKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomDecalSizeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDecalSizeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomDecalSizeKey).Key,L"DecalSize");
  (this->Macro_CustomDecalMaterialPathNameKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDecalMaterialPathNameKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDecalMaterialPathNameKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomDecalMaterialPathNameKey).Key,L"DecalMaterialPathName");
  return this;
}

// ~UInterchangeDecalActorFactoryNode @ 14e5354d0

void __thiscall
UInterchangeDecalActorFactoryNode::~UInterchangeDecalActorFactoryNode
          (UInterchangeDecalActorFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeDecalActorFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomDecalMaterialPathNameKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomDecalSizeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomSortOrderKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeActorFactoryNode::~UInterchangeActorFactoryNode((UInterchangeActorFactoryNode *)this);
  return;
}

// ApplyCustomDecalSizeToAsset @ 14e53a0c0

bool __thiscall
UInterchangeDecalActorFactoryNode::ApplyCustomDecalSizeToAsset
          (UInterchangeDecalActorFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"DecalSize");
  bVar1 = UInterchangeFactoryBaseNode::ApplyAttributeToObject<UE::Math::TVector<double>_>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomDecalSizeKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// ApplyCustomSortOrderToAsset @ 14e53a8e0

bool __thiscall
UInterchangeDecalActorFactoryNode::ApplyCustomSortOrderToAsset
          (UInterchangeDecalActorFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"SortOrder");
  bVar1 = UInterchangeFactoryBaseNode::ApplyAttributeToObject<int>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomSortOrderKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// CopyWithObject @ 14e53d8c0

void __thiscall
UInterchangeDecalActorFactoryNode::CopyWithObject
          (UInterchangeDecalActorFactoryNode *this,UInterchangeFactoryBaseNode *param_1,
          UObject *param_2)

{
  FAttributeStorage *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FString *pFVar7;
  EAttributeStorageResult EVar8;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  int local_res10 [4];
  UClass *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2c8;
  FDelegateAllocation local_2c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b0;
  FDelegateAllocation local_2a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_298;
  FDelegateAllocation local_290;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_280;
  FDelegateAllocation local_278;
  UInterchangeDecalActorFactoryNode *local_268;
  UInterchangeDecalActorFactoryNode *local_260;
  UInterchangeDecalActorFactoryNode *local_258;
  UInterchangeDecalActorFactoryNode *local_250;
  TAttributeHandle<int,void> local_248;
  TAttributeHandle<UE::Math::TVector<double>,void> local_230;
  FString local_218;
  FString local_208;
  FDestructionSentinel local_1f8;
  FDestructionSentinel local_1e0;
  FDestructionSentinel local_1c8;
  FDestructionSentinel local_1b0;
  FDestructionSentinel local_198;
  FDestructionSentinel local_180;
  FDestructionSentinel local_168;
  FDestructionSentinel local_150;
  FDestructionSentinel local_138;
  FDelegateAllocation *local_120;
  FDestructionSentinel local_118;
  FDelegateAllocation *local_100;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  void *local_b8 [2];
  FString local_a8;
  void *local_98 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  TVector<double> local_58;
  
  UInterchangeActorFactoryNode::CopyWithObject((UInterchangeActorFactoryNode *)this,param_1,param_2)
  ;
  if (param_1 == (UInterchangeFactoryBaseNode *)0x0) {
    return;
  }
  pUVar6 = StaticClass();
  iVar5 = (int)pUVar6->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar5) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
      != &pUVar6->_padding_) {
    return;
  }
  local_res20 = Z_Construct_UClass_UDecalComponent_NoRegister();
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_b8);
  ::FString::ConcatFC(&local_218,pFVar7,L".GetSortOrder");
  if (local_b8[0] != (void *)0x0) {
    FMemory::Free(local_b8[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomSortOrderKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<int,void>
              (pFVar1,&local_248,&this->Macro_CustomSortOrderKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::IsValid(&local_248);
    if (bVar4) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::Get
                        (&local_248,local_res10);
      if ((EVar8 & Operation_Success) != None) {
        if (local_248.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar13 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res20 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar14 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar14 = &this->_padding_;
          }
          iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar13) * 4);
          if (iVar5 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar5 * 0x20 + lVar12) == local_res20) {
                if ((iVar5 != -1) && (lVar12 = (longlong)iVar5 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar9 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                            *)(lVar12 + 8);
                  goto LAB_14e53db11;
                }
                break;
              }
              iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar12);
            } while (iVar5 != -1);
          }
        }
        pTVar9 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                 ::EmplaceByHash<UClass_*_const_&>
                           ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                             *)&this->_padding_,uVar13,&local_res20);
LAB_14e53db11:
        local_2c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_2c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_2c0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2c8,(FWriteAccessScope *)&local_138);
        local_120 = &local_2c0;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_2c0);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[3] = 0;
          local_268 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_268);
          puVar10[4] = ApplyCustomSortOrderToAsset;
        }
        if (local_138.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
        }
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_2c8) &&
            ((FScriptContainerElement *)&local_2c8 < pFVar2 + (longlong)pTVar9->ArrayMax * 0x18)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = pTVar9->ArrayNum;
        if (iVar5 == pTVar9->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        lVar12 = (longlong)iVar5;
        pTVar9->ArrayNum = iVar5 + 1;
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar12 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2c8,(FWriteAccessScope *)&local_1f8);
        if (*(void **)(pFVar2 + lVar12 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar12 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar12 * 0x18 + 8) =
             local_2c0.DelegateAllocator;
        local_2c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar12 * 0x18 + 0x10) = local_2c0.DelegateSize;
        local_2c0.DelegateSize = 0;
        if (local_1f8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2c8,(FWriteAccessScope *)&local_1e0);
        if ((local_2c0.DelegateSize != 0) &&
           (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_2c0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_2c0,0,0,0x10);
          local_2c0.DelegateSize = 0;
        }
        if (local_1e0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
        }
        if (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_2c0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c8.AccessDetector);
        uVar13 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res20 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar14 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar14 = &this->_padding_;
          }
          iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar13) * 4);
          if (iVar5 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar5 * 0x20 + lVar12) == local_res20) {
                if ((iVar5 != -1) && (lVar12 = (longlong)iVar5 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar9 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                            *)(lVar12 + 8);
                  goto LAB_14e53ddc2;
                }
                break;
              }
              iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar12);
            } while (iVar5 != -1);
          }
        }
        pTVar9 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                 ::EmplaceByHash<UClass_*_const_&>
                           ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                             *)&this->_padding_,uVar13,&local_res20);
LAB_14e53ddc2:
        local_2b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_2a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_2a8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2b0,(FWriteAccessScope *)&local_118);
        local_100 = &local_2a8;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_2a8);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[3] = 0;
          local_260 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_260);
          puVar10[4] = FillCustomSortOrderFromAsset;
        }
        if (local_118.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
        }
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_2b0) &&
            ((FScriptContainerElement *)&local_2b0 < pFVar2 + (longlong)pTVar9->ArrayMax * 0x18)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = pTVar9->ArrayNum;
        if (iVar5 == pTVar9->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        lVar12 = (longlong)iVar5;
        pTVar9->ArrayNum = iVar5 + 1;
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar12 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2b0,(FWriteAccessScope *)&local_1c8);
        if (*(void **)(pFVar2 + lVar12 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar12 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar12 * 0x18 + 8) =
             local_2a8.DelegateAllocator;
        local_2a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar12 * 0x18 + 0x10) = local_2a8.DelegateSize;
        local_2a8.DelegateSize = 0;
        if (local_1c8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2b0,(FWriteAccessScope *)&local_1b0);
        if ((local_2a8.DelegateSize != 0) &&
           (local_2a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_2a8.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_2a8,0,0,0x10);
          local_2a8.DelegateSize = 0;
        }
        if (local_1b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
        }
        if (local_2a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_2a8.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b0.AccessDetector);
        goto LAB_14e53dfde;
      }
      ::FString::FString(&local_a8,&(this->Macro_CustomSortOrderKey).Key);
      pFVar7 = ::FString::FString(&local_78,&local_218);
      UE::Interchange::LogAttributeStorageErrors(EVar8,pFVar7,(FAttributeKey *)&local_a8);
    }
    if (local_248.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53dfde:
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_98);
  ::FString::ConcatFC(&local_208,pFVar7,L".GetDecalSize");
  if (local_98[0] != (void *)0x0) {
    FMemory::Free(local_98[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomDecalSizeKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TVector<double>,void>
              (pFVar1,&local_230,&this->Macro_CustomDecalSizeKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<double>,void>::
            IsValid(&local_230);
    if (bVar4) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<double>,void>::
              Get(&local_230,&local_58);
      if ((EVar8 & Operation_Success) != None) {
        if (local_230.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar13 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res20 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar14 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar14 = &this->_padding_;
          }
          iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar13) * 4);
          if (iVar5 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar5 * 0x20 + lVar12) == local_res20) {
                if ((iVar5 != -1) && (lVar12 = (longlong)iVar5 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar9 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                            *)(lVar12 + 8);
                  goto LAB_14e53e1e2;
                }
                break;
              }
              iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar12);
            } while (iVar5 != -1);
          }
        }
        pTVar9 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                 ::EmplaceByHash<UClass_*_const_&>
                           ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                             *)&this->_padding_,uVar13,&local_res20);
LAB_14e53e1e2:
        local_298.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_290.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_290.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_298,(FWriteAccessScope *)&local_f8);
        local_e0 = &local_290;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_290);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[3] = 0;
          local_258 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_258);
          puVar10[4] = ApplyCustomDecalSizeToAsset;
        }
        if (local_f8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
        }
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_298) &&
            ((FScriptContainerElement *)&local_298 < pFVar2 + (longlong)pTVar9->ArrayMax * 0x18)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = pTVar9->ArrayNum;
        if (iVar5 == pTVar9->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        lVar12 = (longlong)iVar5;
        pTVar9->ArrayNum = iVar5 + 1;
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar12 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_298,(FWriteAccessScope *)&local_198);
        if (*(void **)(pFVar2 + lVar12 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar12 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar12 * 0x18 + 8) =
             local_290.DelegateAllocator;
        local_290.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar12 * 0x18 + 0x10) = local_290.DelegateSize;
        local_290.DelegateSize = 0;
        if (local_198.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_298,(FWriteAccessScope *)&local_180);
        if ((local_290.DelegateSize != 0) &&
           (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_290.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_290,0,0,0x10);
          local_290.DelegateSize = 0;
        }
        if (local_180.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
        }
        if (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_290.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_298.AccessDetector);
        uVar13 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res20 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar14 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar14 = &this->_padding_;
          }
          iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar13) * 4);
          if (iVar5 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar5 * 0x20 + lVar12) == local_res20) {
                if ((iVar5 != -1) && (lVar12 = (longlong)iVar5 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar9 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                            *)(lVar12 + 8);
                  goto LAB_14e53e491;
                }
                break;
              }
              iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar12);
            } while (iVar5 != -1);
          }
        }
        pTVar9 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                 ::EmplaceByHash<UClass_*_const_&>
                           ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                             *)&this->_padding_,uVar13,&local_res20);
LAB_14e53e491:
        local_280.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_278.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_278.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_280,(FWriteAccessScope *)&local_d8);
        local_c0 = &local_278;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_278);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[3] = 0;
          local_250 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_250);
          puVar10[4] = FillCustomDecalSizeFromAsset;
        }
        if (local_d8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
        }
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_280) &&
            ((FScriptContainerElement *)&local_280 < pFVar2 + (longlong)pTVar9->ArrayMax * 0x18)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = pTVar9->ArrayNum;
        if (iVar5 == pTVar9->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        lVar12 = (longlong)iVar5;
        pTVar9->ArrayNum = iVar5 + 1;
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar12 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_280,(FWriteAccessScope *)&local_168);
        if (*(void **)(pFVar2 + lVar12 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar12 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar12 * 0x18 + 8) =
             local_278.DelegateAllocator;
        local_278.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar12 * 0x18 + 0x10) = local_278.DelegateSize;
        local_278.DelegateSize = 0;
        if (local_168.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_280,(FWriteAccessScope *)&local_150);
        if ((local_278.DelegateSize != 0) &&
           (local_278.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_278.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_278,0,0,0x10);
          local_278.DelegateSize = 0;
        }
        if (local_150.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
        }
        if (local_278.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_278.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_280.AccessDetector);
        goto LAB_14e53e6b0;
      }
      ::FString::FString(&local_88,&(this->Macro_CustomDecalSizeKey).Key);
      pFVar7 = ::FString::FString(&local_68,&local_208);
      UE::Interchange::LogAttributeStorageErrors(EVar8,pFVar7,(FAttributeKey *)&local_88);
    }
    if (local_230.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53e6b0:
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  return;
}

// FillCustomDecalSizeFromAsset @ 14e54edb0

bool __thiscall
UInterchangeDecalActorFactoryNode::FillCustomDecalSizeFromAsset
          (UInterchangeDecalActorFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"DecalSize");
  bVar1 = UInterchangeFactoryBaseNode::FillAttributeFromObject<UE::Math::TVector<double>_>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomDecalSizeKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// FillCustomSortOrderFromAsset @ 14e54f320

bool __thiscall
UInterchangeDecalActorFactoryNode::FillCustomSortOrderFromAsset
          (UInterchangeDecalActorFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"SortOrder");
  bVar1 = UInterchangeFactoryBaseNode::FillAttributeFromObject<int>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomSortOrderKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// GetCustomDecalMaterialPathName @ 14e551d80

bool __thiscall
UInterchangeDecalActorFactoryNode::GetCustomDecalMaterialPathName
          (UInterchangeDecalActorFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetDecalMaterialPathName");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDecalMaterialPathNameKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomDecalSize @ 14e551e30

bool __thiscall
UInterchangeDecalActorFactoryNode::GetCustomDecalSize
          (UInterchangeDecalActorFactoryNode *this,TVector<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetDecalSize");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TVector<double>_>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomDecalSizeKey,&local_28,
                     param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomSortOrder @ 14e5566a0

bool __thiscall
UInterchangeDecalActorFactoryNode::GetCustomSortOrder
          (UInterchangeDecalActorFactoryNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSortOrder");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSortOrderKey,&local_28,
                     param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetObjectClass @ 14e558d80

UClass * __thiscall
UInterchangeDecalActorFactoryNode::GetObjectClass(UInterchangeDecalActorFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ADecalActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DecalActor",
               &Z_Registration_Info_UClass_ADecalActor.InnerSingleton,
               ADecalActor::StaticRegisterNativesADecalActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADecalActor>,
               InternalVTableHelperCtorCaller<ADecalActor>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADecalActor.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55a0d0

UClass * __cdecl UInterchangeDecalActorFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDecalActorFactoryNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeDecalActorFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeDecalActorFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeDecalActorFactoryNode,0x2b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeDecalActorFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeDecalActorFactoryNode>,local_res8,
               UInterchangeActorFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDecalActorFactoryNode.InnerSingleton;
}

// SetCustomDecalMaterialPathName @ 14e5662a0

bool __thiscall
UInterchangeDecalActorFactoryNode::SetCustomDecalMaterialPathName
          (UInterchangeDecalActorFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetDecalMaterialPathName");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDecalMaterialPathNameKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomDecalMaterialPathNameKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomDecalSize @ 14e5663f0

bool __thiscall
UInterchangeDecalActorFactoryNode::SetCustomDecalSize
          (UInterchangeDecalActorFactoryNode *this,TVector<double> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  UClass *local_res8;
  UInterchangeDecalActorFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UInterchangeDecalActorFactoryNode *local_108;
  FString local_100;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  void *local_50 [2];
  FString local_40;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_50);
  ::FString::ConcatFC(&local_100,pFVar6,L".SetDecalSize");
  if (local_50[0] != (void *)0x0) {
    FMemory::Free(local_50[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TVector<double>,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomDecalSizeKey,param_1,
                     None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_40,&(this->Macro_CustomDecalSizeKey).Key);
    _Src.Data = local_100.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_100.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
                 local_100.Data.ArrayNum,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_100.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_40);
    goto LAB_14e566af4;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e566550:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeDecalActorFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeDecalActorFactoryNode.cpp"
                         ,0x35,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e566550;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomDecalSizeKey).Key);
    local_res8 = Z_Construct_UClass_UDecalComponent_NoRegister();
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e566630;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e566630:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_90);
    local_78 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomDecalSizeToAsset;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_f0);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d8);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e5668e1;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e5668e1:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_70);
    local_58 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_108 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_108);
      puVar11[4] = FillCustomDecalSizeFromAsset;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_c0);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a8);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e566af4:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomSortOrder @ 14e577620

bool __thiscall
UInterchangeDecalActorFactoryNode::SetCustomSortOrder
          (UInterchangeDecalActorFactoryNode *this,int *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  UClass *local_res8;
  UInterchangeDecalActorFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UInterchangeDecalActorFactoryNode *local_108;
  FString local_100;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  void *local_50 [2];
  FString local_40;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_50);
  ::FString::ConcatFC(&local_100,pFVar6,L".SetSortOrder");
  if (local_50[0] != (void *)0x0) {
    FMemory::Free(local_50[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSortOrderKey,param_1,
                     None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_40,&(this->Macro_CustomSortOrderKey).Key);
    _Src.Data = local_100.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_100.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
                 local_100.Data.ArrayNum,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_100.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_40);
    goto LAB_14e577d24;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e577780:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeDecalActorFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeDecalActorFactoryNode.cpp"
                         ,0x29,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e577780;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomSortOrderKey).Key);
    local_res8 = Z_Construct_UClass_UDecalComponent_NoRegister();
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e577860;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e577860:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_90);
    local_78 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomSortOrderToAsset;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_f0);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d8);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e577b11;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e577b11:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_70);
    local_58 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_108 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_108);
      puVar11[4] = FillCustomSortOrderFromAsset;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_c0);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a8);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e577d24:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// StaticRegisterNativesUInterchangeDecalActorFactoryNode @ 14e57f220

void __cdecl
UInterchangeDecalActorFactoryNode::StaticRegisterNativesUInterchangeDecalActorFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeDecalActorFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomDecalMaterialPathName @ 14e58cf50

void __cdecl
UInterchangeDecalActorFactoryNode::execGetCustomDecalMaterialPathName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar5 = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar5 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetDecalMaterialPathName");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x10].field_0x20
                     ,&local_28,pFVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomDecalSize @ 14e58d0a0

void __cdecl
UInterchangeDecalActorFactoryNode::execGetCustomDecalSize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TVector<double> *pTVar5;
  FString local_48;
  void *local_38 [2];
  TVector<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar5 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar5 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".GetDecalSize");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TVector<double>_>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x10].field_0x10
                     ,&local_48,pTVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomSortOrder @ 14e5956d0

void __cdecl
UInterchangeDecalActorFactoryNode::execGetCustomSortOrder
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int *piVar5;
  int local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  piVar5 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar5 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetSortOrder");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x10),
                     &local_38,piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execSetCustomDecalMaterialPathName @ 14e5a4f40

void __cdecl
UInterchangeDecalActorFactoryNode::execSetCustomDecalMaterialPathName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetDecalMaterialPathName");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x10].field_0x20
                     ,&local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[0x10].field_0x20);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_18);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomDecalSize @ 14e5a5130

void __cdecl
UInterchangeDecalActorFactoryNode::execSetCustomDecalSize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  int local_res10 [2];
  TVector<double> local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pTVar3 = &local_38;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomDecalSize((UInterchangeDecalActorFactoryNode *)param_1,pTVar3,local_res10[0] != 0
                            );
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomSortOrder @ 14e5b0830

void __cdecl
UInterchangeDecalActorFactoryNode::execSetCustomSortOrder
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomSortOrder((UInterchangeDecalActorFactoryNode *)param_1,piVar3,local_res18[0] != 0
                            );
  *(bool *)param_3 = bVar2;
  return;
}

