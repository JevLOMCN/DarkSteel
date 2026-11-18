// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 27

// StaticClass @ 14e520140

UClass * __cdecl UInterchangePhysicalCameraFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePhysicalCameraFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangePhysicalCameraFactoryNode",
               &Z_Registration_Info_UClass_UInterchangePhysicalCameraFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangePhysicalCameraFactoryNode,0x2c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePhysicalCameraFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangePhysicalCameraFactoryNode>,local_res8,
               UInterchangeActorFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePhysicalCameraFactoryNode.InnerSingleton;
}

// UInterchangePhysicalCameraFactoryNode @ 14e5320c0

UInterchangePhysicalCameraFactoryNode * __thiscall
UInterchangePhysicalCameraFactoryNode::UInterchangePhysicalCameraFactoryNode
          (UInterchangePhysicalCameraFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeActorFactoryNode::UInterchangeActorFactoryNode
            ((UInterchangeActorFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangePhysicalCameraFactoryNode__6B_;
  (this->Macro_CustomFocalLengthKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomFocalLengthKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomFocalLengthKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomFocalLengthKey).Key,L"FocalLength");
  (this->Macro_CustomSensorWidthKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSensorWidthKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSensorWidthKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSensorWidthKey).Key,L"SensorWidth");
  (this->Macro_CustomSensorHeightKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSensorHeightKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSensorHeightKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSensorHeightKey).Key,L"SensorHeight");
  (this->Macro_CustomFocusMethodKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomFocusMethodKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomFocusMethodKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomFocusMethodKey).Key,L"FocusMethod");
  return this;
}

// UInterchangePhysicalCameraFactoryNode @ 14e532160

UInterchangePhysicalCameraFactoryNode * __thiscall
UInterchangePhysicalCameraFactoryNode::UInterchangePhysicalCameraFactoryNode
          (UInterchangePhysicalCameraFactoryNode *this)

{
  UInterchangeActorFactoryNode::UInterchangeActorFactoryNode((UInterchangeActorFactoryNode *)this);
  this->_padding_ = (longlong)&___7UInterchangePhysicalCameraFactoryNode__6B_;
  (this->Macro_CustomFocalLengthKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomFocalLengthKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomFocalLengthKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomFocalLengthKey).Key,L"FocalLength");
  (this->Macro_CustomSensorWidthKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSensorWidthKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSensorWidthKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSensorWidthKey).Key,L"SensorWidth");
  (this->Macro_CustomSensorHeightKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSensorHeightKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSensorHeightKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSensorHeightKey).Key,L"SensorHeight");
  (this->Macro_CustomFocusMethodKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomFocusMethodKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomFocusMethodKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomFocusMethodKey).Key,L"FocusMethod");
  return this;
}

// ~UInterchangePhysicalCameraFactoryNode @ 14e535ec0

void __thiscall
UInterchangePhysicalCameraFactoryNode::~UInterchangePhysicalCameraFactoryNode
          (UInterchangePhysicalCameraFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangePhysicalCameraFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomFocusMethodKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomSensorHeightKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomSensorWidthKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomFocalLengthKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeActorFactoryNode::~UInterchangeActorFactoryNode((UInterchangeActorFactoryNode *)this);
  return;
}

// ApplyCustomFocalLengthToAsset @ 14e53a260

bool __thiscall
UInterchangePhysicalCameraFactoryNode::ApplyCustomFocalLengthToAsset
          (UInterchangePhysicalCameraFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"CurrentFocalLength");
  bVar1 = UInterchangeFactoryBaseNode::ApplyAttributeToObject<float>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomFocalLengthKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// ApplyCustomFocusMethodToAsset @ 14e53a2b0

bool __thiscall
UInterchangePhysicalCameraFactoryNode::ApplyCustomFocusMethodToAsset
          (UInterchangePhysicalCameraFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"FocusSettings.FocusMethod");
  bVar1 = UInterchangeFactoryBaseNode::ApplyAttributeToObject<enum_ECameraFocusMethod>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomFocusMethodKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// ApplyCustomSensorHeightToAsset @ 14e53a840

bool __thiscall
UInterchangePhysicalCameraFactoryNode::ApplyCustomSensorHeightToAsset
          (UInterchangePhysicalCameraFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"Filmback.SensorHeight");
  bVar1 = UInterchangeFactoryBaseNode::ApplyAttributeToObject<float>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomSensorHeightKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// ApplyCustomSensorWidthToAsset @ 14e53a890

bool __thiscall
UInterchangePhysicalCameraFactoryNode::ApplyCustomSensorWidthToAsset
          (UInterchangePhysicalCameraFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"Filmback.SensorWidth");
  bVar1 = UInterchangeFactoryBaseNode::ApplyAttributeToObject<float>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomSensorWidthKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// CopyWithObject @ 14e540ad0

void __thiscall
UInterchangePhysicalCameraFactoryNode::CopyWithObject
          (UInterchangePhysicalCameraFactoryNode *this,UInterchangeFactoryBaseNode *param_1,
          UObject *param_2)

{
  FAttributeStorage *pFVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  FString *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  longlong lVar12;
  TAttributeHandle<unsigned_char,void> *pTVar13;
  EAttributeStorageResult EVar14;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar15;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *pTVar16;
  longlong *plVar17;
  uchar local_res10 [16];
  float local_res20 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3d8;
  FDelegateAllocation local_3d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3c0;
  FDelegateAllocation local_3b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3a8;
  FDelegateAllocation local_3a0;
  undefined1 local_390 [8];
  ForAnyElementType local_388;
  int local_380;
  float local_378;
  float local_374;
  UClass *local_370;
  UInterchangePhysicalCameraFactoryNode *local_368;
  UClass *local_360;
  UClass *local_358;
  UClass *local_350;
  UInterchangePhysicalCameraFactoryNode *local_348;
  UClass *local_340;
  UInterchangePhysicalCameraFactoryNode *local_338;
  UClass *local_330;
  UClass *local_328;
  UClass *local_320;
  TAttributeHandle<unsigned_char,void> local_318;
  TAttributeHandle<float,void> local_300;
  TAttributeHandle<float,void> local_2e8;
  TAttributeHandle<float,void> local_2d0;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FDestructionSentinel local_278;
  FDestructionSentinel local_260;
  FDestructionSentinel local_248;
  FDestructionSentinel local_230;
  FDestructionSentinel local_218;
  FDestructionSentinel local_200;
  FDestructionSentinel local_1e8;
  FDestructionSentinel local_1d0;
  FDelegateAllocation *local_1b8;
  FDestructionSentinel local_1b0;
  FDelegateAllocation *local_198;
  FDestructionSentinel local_190;
  FDelegateAllocation *local_178;
  void *local_170 [2];
  FString local_160;
  void *local_150 [2];
  FString local_140;
  void *local_130 [2];
  FString local_120;
  FString local_110;
  void *local_100 [2];
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_f0;
  TAttributeHandle<unsigned_char,void> local_d8;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_c0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_a8;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_90;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  UInterchangeActorFactoryNode::CopyWithObject((UInterchangeActorFactoryNode *)this,param_1,param_2)
  ;
  if (param_1 == (UInterchangeFactoryBaseNode *)0x0) {
    return;
  }
  pUVar8 = StaticClass();
  iVar7 = (int)pUVar8->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar7) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar7 * 8)
      != &pUVar8->_padding_) {
    return;
  }
  pFVar9 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_150);
  ::FString::ConcatFC(&local_2b8,pFVar9,L".GetFocalLength");
  if (local_150[0] != (void *)0x0) {
    FMemory::Free(local_150[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomFocalLengthKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar1,&local_2d0,&this->Macro_CustomFocalLengthKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_2d0);
    if (bVar5) {
      EVar14 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                         (&local_2d0,local_res20);
      if ((EVar14 & Operation_Success) != None) {
        if (local_2d0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Key.Key.Data.AllocatorInstance.Data);
        }
        local_370 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_370 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_370 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar17 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar17 = &this->_padding_;
          }
          iVar7 = *(int *)((longlong)plVar17 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar7 * 0x20 + lVar12) == local_370) {
                if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar15 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar12 + 8);
                  goto LAB_14e540d0e;
                }
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar12);
            } while (iVar7 != -1);
          }
        }
        pTVar15 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6,&local_370);
LAB_14e540d0e:
        local_3a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_3a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_3a0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3a8,(FWriteAccessScope *)&local_1b0);
        local_198 = &local_3a0;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_3a0);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[3] = 0;
          local_368 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_368);
          puVar10[4] = ApplyCustomFocalLengthToAsset;
        }
        if (local_1b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
        }
        pFVar2 = (pTVar15->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_3a8) &&
            ((FScriptContainerElement *)&local_3a8 < pFVar2 + (longlong)pTVar15->ArrayMax * 0x18))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar15->ArrayNum;
        if (iVar7 == pTVar15->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
        }
        lVar12 = (longlong)iVar7;
        pTVar15->ArrayNum = iVar7 + 1;
        pFVar2 = (pTVar15->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar12 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3a8,(FWriteAccessScope *)&local_278);
        if (*(void **)(pFVar2 + lVar12 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar12 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar12 * 0x18 + 8) =
             local_3a0.DelegateAllocator;
        local_3a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar12 * 0x18 + 0x10) = local_3a0.DelegateSize;
        local_3a0.DelegateSize = 0;
        if (local_278.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3a8,(FWriteAccessScope *)&local_260);
        if ((local_3a0.DelegateSize != 0) &&
           (local_3a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_3a0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_3a0,0,0,0x10);
          local_3a0.DelegateSize = 0;
        }
        if (local_260.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_260.Accessor,&local_260);
        }
        if (local_3a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_3a0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a8.AccessDetector);
        local_360 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_360 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_360 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar17 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar17 = &this->_padding_;
          }
          iVar7 = *(int *)((longlong)plVar17 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar7 * 0x20 + lVar12) == local_360) {
                if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar15 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar12 + 8);
                  goto LAB_14e540fbe;
                }
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar12);
            } while (iVar7 != -1);
          }
        }
        pTVar15 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6,&local_360);
LAB_14e540fbe:
        pTVar16 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangePhysicalCameraFactoryNode>
                            (&local_f0,this,(pmf_24216b0c)0x14e54ef40);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar15->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar16) && (pTVar16 < pTVar3 + pTVar15->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar15->ArrayNum;
        if (iVar7 == pTVar15->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
        }
        pTVar15->ArrayNum = iVar7 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar15->AllocatorInstance).Data + (longlong)iVar7 * 0x18),pTVar16);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_f0);
        goto LAB_14e541077;
      }
      ::FString::FString(&local_160,&(this->Macro_CustomFocalLengthKey).Key);
      pFVar9 = ::FString::FString(&local_58,&local_2b8);
      UE::Interchange::LogAttributeStorageErrors(EVar14,pFVar9,(FAttributeKey *)&local_160);
    }
    if (local_2d0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e541077:
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  pFVar9 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_170);
  ::FString::ConcatFC(&local_2a8,pFVar9,L".GetSensorWidth");
  if (local_170[0] != (void *)0x0) {
    FMemory::Free(local_170[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomSensorWidthKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar1,&local_2e8,&this->Macro_CustomSensorWidthKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_2e8);
    if (bVar5) {
      EVar14 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                         (&local_2e8,&local_378);
      if ((EVar14 & Operation_Success) != None) {
        if (local_2e8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.Key.Key.Data.AllocatorInstance.Data);
        }
        local_358 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_358 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_358 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        pTVar15 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6 >> 0x10 ^ uVar6,&local_358);
        pTVar16 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangePhysicalCameraFactoryNode>
                            ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                             local_390,this,(pmf_107317fb)0x14e53a890);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar15->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar16) && (pTVar16 < pTVar3 + pTVar15->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar15->ArrayNum;
        if (iVar7 == pTVar15->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
        }
        pTVar15->ArrayNum = iVar7 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar15->AllocatorInstance).Data + (longlong)iVar7 * 0x18),pTVar16);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_390,
                   (FWriteAccessScope *)&local_248);
        if ((local_380 != 0) && (local_388.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_388.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_388,0,0,0x10);
          local_380 = 0;
        }
        if (local_248.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
        }
        if (local_388.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_388.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_390);
        local_350 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_350 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_350 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar17 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar17 = &this->_padding_;
          }
          iVar7 = *(int *)((longlong)plVar17 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar7 * 0x20 + lVar12) == local_350) {
                if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar15 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar12 + 8);
                  goto LAB_14e5413de;
                }
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar12);
            } while (iVar7 != -1);
          }
        }
        pTVar15 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6,&local_350);
LAB_14e5413de:
        local_3c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_3b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_3b8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3c0,(FWriteAccessScope *)&local_190);
        local_178 = &local_3b8;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_3b8);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[3] = 0;
          local_348 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_348);
          puVar10[4] = FillCustomSensorWidthFromAsset;
        }
        if (local_190.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
        }
        pFVar2 = (pTVar15->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_3c0) &&
            ((FScriptContainerElement *)&local_3c0 < pFVar2 + (longlong)pTVar15->ArrayMax * 0x18))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar15->ArrayNum;
        if (iVar7 == pTVar15->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
        }
        lVar12 = (longlong)iVar7;
        pTVar15->ArrayNum = iVar7 + 1;
        pFVar2 = (pTVar15->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar12 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3c0,(FWriteAccessScope *)&local_230);
        if (*(void **)(pFVar2 + lVar12 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar12 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar12 * 0x18 + 8) =
             local_3b8.DelegateAllocator;
        local_3b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar12 * 0x18 + 0x10) = local_3b8.DelegateSize;
        local_3b8.DelegateSize = 0;
        if (local_230.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_230.Accessor,&local_230);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3c0,(FWriteAccessScope *)&local_218);
        if ((local_3b8.DelegateSize != 0) &&
           (local_3b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_3b8.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_3b8,0,0,0x10);
          local_3b8.DelegateSize = 0;
        }
        if (local_218.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
        }
        if (local_3b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_3b8.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3c0.AccessDetector);
        goto LAB_14e54160b;
      }
      ::FString::FString(&local_120,&(this->Macro_CustomSensorWidthKey).Key);
      pFVar9 = ::FString::FString(&local_48,&local_2a8);
      UE::Interchange::LogAttributeStorageErrors(EVar14,pFVar9,(FAttributeKey *)&local_120);
    }
    if (local_2e8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e54160b:
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  pFVar9 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_100);
  ::FString::ConcatFC(&local_298,pFVar9,L".GetSensorHeight");
  if (local_100[0] != (void *)0x0) {
    FMemory::Free(local_100[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomSensorHeightKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar1,&local_300,&this->Macro_CustomSensorHeightKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_300);
    if (bVar5) {
      EVar14 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                         (&local_300,&local_374);
      if ((EVar14 & Operation_Success) != None) {
        if (local_300.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_300.Key.Key.Data.AllocatorInstance.Data);
        }
        local_340 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_340 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_340 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar17 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar17 = &this->_padding_;
          }
          iVar7 = *(int *)((longlong)plVar17 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar7 * 0x20 + lVar12) == local_340) {
                if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar15 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar12 + 8);
                  goto LAB_14e5417f1;
                }
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar12);
            } while (iVar7 != -1);
          }
        }
        pTVar15 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6,&local_340);
LAB_14e5417f1:
        local_3d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_3d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_3d0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3d8,(FWriteAccessScope *)&local_1d0);
        local_1b8 = &local_3d0;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_3d0);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[3] = 0;
          local_338 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_338);
          puVar10[4] = ApplyCustomSensorHeightToAsset;
        }
        if (local_1d0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
        }
        pFVar2 = (pTVar15->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_3d8) &&
            ((FScriptContainerElement *)&local_3d8 < pFVar2 + (longlong)pTVar15->ArrayMax * 0x18))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar15->ArrayNum;
        if (iVar7 == pTVar15->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
        }
        lVar12 = (longlong)iVar7;
        pTVar15->ArrayNum = iVar7 + 1;
        pFVar2 = (pTVar15->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar12 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3d8,(FWriteAccessScope *)&local_200);
        if (*(void **)(pFVar2 + lVar12 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar12 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar12 * 0x18 + 8) =
             local_3d0.DelegateAllocator;
        local_3d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar12 * 0x18 + 0x10) = local_3d0.DelegateSize;
        local_3d0.DelegateSize = 0;
        if (local_200.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3d8,(FWriteAccessScope *)&local_1e8);
        if ((local_3d0.DelegateSize != 0) &&
           (local_3d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_3d0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_3d0,0,0,0x10);
          local_3d0.DelegateSize = 0;
        }
        if (local_1e8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
        }
        if (local_3d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_3d0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3d8.AccessDetector);
        local_330 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_330 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_330 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar17 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar17 = &this->_padding_;
          }
          iVar7 = *(int *)((longlong)plVar17 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar7 * 0x20 + lVar12) == local_330) {
                if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar15 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar12 + 8);
                  goto LAB_14e541abe;
                }
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar12);
            } while (iVar7 != -1);
          }
        }
        pTVar15 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6,&local_330);
LAB_14e541abe:
        pTVar16 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangePhysicalCameraFactoryNode>
                            (&local_90,this,(pmf_24216b0c)0x14e54f280);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar15->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar16) && (pTVar16 < pTVar3 + pTVar15->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar15->ArrayNum;
        if (iVar7 == pTVar15->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
        }
        pTVar15->ArrayNum = iVar7 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar15->AllocatorInstance).Data + (longlong)iVar7 * 0x18),pTVar16);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_90);
        goto LAB_14e541b77;
      }
      ::FString::FString(&local_110,&(this->Macro_CustomSensorHeightKey).Key);
      pFVar9 = ::FString::FString(&local_78,&local_298);
      UE::Interchange::LogAttributeStorageErrors(EVar14,pFVar9,(FAttributeKey *)&local_110);
    }
    if (local_300.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e541b77:
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  pFVar9 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_130);
  ::FString::ConcatFC(&local_288,pFVar9,L".GetFocusMethod");
  if (local_130[0] != (void *)0x0) {
    FMemory::Free(local_130[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomFocusMethodKey);
  if (bVar5) {
    pTVar13 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                        (pFVar1,&local_d8,&this->Macro_CustomFocusMethodKey);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_318,&pTVar13->Key,pTVar13->AttributeStorage);
    if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&local_318);
    if (bVar5) {
      EVar14 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                         (&local_318,local_res10);
      if ((EVar14 & Operation_Success) != None) {
        if (local_318.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Key.Key.Data.AllocatorInstance.Data);
        }
        local_328 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_328 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_328 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        pTVar15 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6 >> 0x10 ^ uVar6,&local_328);
        pTVar16 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangePhysicalCameraFactoryNode>
                            (&local_c0,this,(pmf_107317fb)0x14e53a2b0);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar15->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar16) && (pTVar16 < pTVar3 + pTVar15->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar15->ArrayNum;
        if (iVar7 == pTVar15->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
        }
        pTVar15->ArrayNum = iVar7 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar15->AllocatorInstance).Data + (longlong)iVar7 * 0x18),pTVar16);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c0);
        local_320 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_320 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_320 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        pTVar15 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6 >> 0x10 ^ uVar6,&local_320);
        pTVar16 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangePhysicalCameraFactoryNode>
                            (&local_a8,this,(pmf_24216b0c)0x14e54ef90);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar15->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar16) && (pTVar16 < pTVar3 + pTVar15->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar15->ArrayNum;
        if (iVar7 == pTVar15->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
        }
        pTVar15->ArrayNum = iVar7 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar15->AllocatorInstance).Data + (longlong)iVar7 * 0x18),pTVar16);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a8);
        goto LAB_14e541f19;
      }
      ::FString::FString(&local_140,&(this->Macro_CustomFocusMethodKey).Key);
      pFVar9 = ::FString::FString(&local_68,&local_288);
      UE::Interchange::LogAttributeStorageErrors(EVar14,pFVar9,(FAttributeKey *)&local_140);
    }
    if (local_318.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e541f19:
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  return;
}

// FillCustomFocalLengthFromAsset @ 14e54ef40

bool __thiscall
UInterchangePhysicalCameraFactoryNode::FillCustomFocalLengthFromAsset
          (UInterchangePhysicalCameraFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"CurrentFocalLength");
  bVar1 = UInterchangeFactoryBaseNode::FillAttributeFromObject<float>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomFocalLengthKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// FillCustomFocusMethodFromAsset @ 14e54ef90

bool __thiscall
UInterchangePhysicalCameraFactoryNode::FillCustomFocusMethodFromAsset
          (UInterchangePhysicalCameraFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"FocusSettings.FocusMethod");
  bVar1 = UInterchangeFactoryBaseNode::FillAttributeFromObject<enum_ECameraFocusMethod>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomFocusMethodKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// FillCustomSensorHeightFromAsset @ 14e54f280

bool __thiscall
UInterchangePhysicalCameraFactoryNode::FillCustomSensorHeightFromAsset
          (UInterchangePhysicalCameraFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"Filmback.SensorHeight");
  bVar1 = UInterchangeFactoryBaseNode::FillAttributeFromObject<float>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomSensorHeightKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// FillCustomSensorWidthFromAsset @ 14e54f2d0

bool __thiscall
UInterchangePhysicalCameraFactoryNode::FillCustomSensorWidthFromAsset
          (UInterchangePhysicalCameraFactoryNode *this,UObject *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"Filmback.SensorWidth");
  bVar1 = UInterchangeFactoryBaseNode::FillAttributeFromObject<float>
                    ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomSensorWidthKey).Key,
                     param_1,*pFVar2);
  return bVar1;
}

// GetPrivateStaticClass @ 14e55afd0

UClass * __cdecl UInterchangePhysicalCameraFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePhysicalCameraFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangePhysicalCameraFactoryNode",
               &Z_Registration_Info_UClass_UInterchangePhysicalCameraFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangePhysicalCameraFactoryNode,0x2c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePhysicalCameraFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangePhysicalCameraFactoryNode>,local_res8,
               UInterchangeActorFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePhysicalCameraFactoryNode.InnerSingleton;
}

// SetCustomFocalLength @ 14e56a530

bool __thiscall
UInterchangePhysicalCameraFactoryNode::SetCustomFocalLength
          (UInterchangePhysicalCameraFactoryNode *this,float *param_1,bool param_2)

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
  UInterchangePhysicalCameraFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UInterchangePhysicalCameraFactoryNode *local_108;
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
  ::FString::ConcatFC(&local_100,pFVar6,L".SetFocalLength");
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
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomFocalLengthKey,param_1,
                     None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_40,&(this->Macro_CustomFocalLengthKey).Key);
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
    goto LAB_14e56ac34;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e56a690:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangePhysicalCameraFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Public\\InterchangeCameraFactoryNode.h"
                         ,0x1d,L"");
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
      if (!bVar3) goto LAB_14e56a690;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomFocalLengthKey).Key);
    local_res8 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
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
              goto LAB_14e56a770;
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
LAB_14e56a770:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomFocalLengthToAsset;
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
              goto LAB_14e56aa21;
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
LAB_14e56aa21:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomFocalLengthFromAsset;
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
LAB_14e56ac34:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomFocusMethod @ 14e56aca0

bool __thiscall
UInterchangePhysicalCameraFactoryNode::SetCustomFocusMethod
          (UInterchangePhysicalCameraFactoryNode *this,ECameraFocusMethod *param_1,bool param_2)

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
  UInterchangePhysicalCameraFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UInterchangePhysicalCameraFactoryNode *local_108;
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
  ::FString::ConcatFC(&local_100,pFVar6,L".SetFocusMethod");
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
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomFocusMethodKey,param_1,
                     None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_40,&(this->Macro_CustomFocusMethodKey).Key);
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
    goto LAB_14e56b3a4;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e56ae00:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangePhysicalCameraFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Public\\InterchangeCameraFactoryNode.h"
                         ,0x41,L"");
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
      if (!bVar3) goto LAB_14e56ae00;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomFocusMethodKey).Key);
    local_res8 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
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
              goto LAB_14e56aee0;
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
LAB_14e56aee0:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomFocusMethodToAsset;
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
              goto LAB_14e56b191;
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
LAB_14e56b191:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomFocusMethodFromAsset;
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
LAB_14e56b3a4:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomSensorHeight @ 14e575f00

bool __thiscall
UInterchangePhysicalCameraFactoryNode::SetCustomSensorHeight
          (UInterchangePhysicalCameraFactoryNode *this,float *param_1,bool param_2)

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
  UInterchangePhysicalCameraFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UInterchangePhysicalCameraFactoryNode *local_108;
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
  ::FString::ConcatFC(&local_100,pFVar6,L".SetSensorHeight");
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
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSensorHeightKey,param_1
                     ,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_40,&(this->Macro_CustomSensorHeightKey).Key);
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
    goto LAB_14e576604;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e576060:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangePhysicalCameraFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Public\\InterchangeCameraFactoryNode.h"
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
      if (!bVar3) goto LAB_14e576060;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomSensorHeightKey).Key);
    local_res8 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
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
              goto LAB_14e576140;
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
LAB_14e576140:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomSensorHeightToAsset;
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
              goto LAB_14e5763f1;
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
LAB_14e5763f1:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomSensorHeightFromAsset;
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
LAB_14e576604:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomSensorWidth @ 14e576670

bool __thiscall
UInterchangePhysicalCameraFactoryNode::SetCustomSensorWidth
          (UInterchangePhysicalCameraFactoryNode *this,float *param_1,bool param_2)

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
  UInterchangePhysicalCameraFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UInterchangePhysicalCameraFactoryNode *local_108;
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
  ::FString::ConcatFC(&local_100,pFVar6,L".SetSensorWidth");
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
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSensorWidthKey,param_1,
                     None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_40,&(this->Macro_CustomSensorWidthKey).Key);
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
    goto LAB_14e576d74;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e5767d0:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangePhysicalCameraFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Public\\InterchangeCameraFactoryNode.h"
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
      if (!bVar3) goto LAB_14e5767d0;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomSensorWidthKey).Key);
    local_res8 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
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
              goto LAB_14e5768b0;
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
LAB_14e5768b0:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomSensorWidthToAsset;
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
              goto LAB_14e576b61;
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
LAB_14e576b61:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomSensorWidthFromAsset;
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
LAB_14e576d74:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// StaticRegisterNativesUInterchangePhysicalCameraFactoryNode @ 14e57f6c0

void __cdecl
UInterchangePhysicalCameraFactoryNode::StaticRegisterNativesUInterchangePhysicalCameraFactoryNode
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomFocalLength @ 14e58e850

void __cdecl
UInterchangePhysicalCameraFactoryNode::execGetCustomFocalLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  float *pfVar5;
  float local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0.0;
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
  pfVar5 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetFocalLength");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x10),
                     &local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomFocusMethod @ 14e58e980

void __cdecl
UInterchangePhysicalCameraFactoryNode::execGetCustomFocusMethod
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  ECameraFocusMethod *pEVar5;
  ECameraFocusMethod local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = DoNotOverride;
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
  pEVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (ECameraFocusMethod *)0x0) {
    pEVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetFocusMethod");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<enum_ECameraFocusMethod>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x11].field_0x8,
                     &local_38,pEVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomSensorHeight @ 14e594970

void __cdecl
UInterchangePhysicalCameraFactoryNode::execGetCustomSensorHeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  float *pfVar5;
  float local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0.0;
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
  pfVar5 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetSensorHeight");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x10].field_0x20
                     ,&local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomSensorWidth @ 14e594aa0

void __cdecl
UInterchangePhysicalCameraFactoryNode::execGetCustomSensorWidth
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  float *pfVar5;
  float local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0.0;
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
  pfVar5 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetSensorWidth");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x10].field_0x10
                     ,&local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execSetCustomFocalLength @ 14e5a70c0

void __cdecl
UInterchangePhysicalCameraFactoryNode::execSetCustomFocalLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float *pfVar3;
  float local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0.0;
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
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
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
  bVar2 = SetCustomFocalLength
                    ((UInterchangePhysicalCameraFactoryNode *)param_1,pfVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomFocusMethod @ 14e5a71c0

void __cdecl
UInterchangePhysicalCameraFactoryNode::execSetCustomFocusMethod
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  ECameraFocusMethod *pEVar3;
  ECameraFocusMethod local_res10 [8];
  int local_res18 [2];
  
  local_res10[0] = DoNotOverride;
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
  pEVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (ECameraFocusMethod *)0x0) {
    pEVar3 = param_2->MostRecentPropertyAddress;
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
  bVar2 = SetCustomFocusMethod
                    ((UInterchangePhysicalCameraFactoryNode *)param_1,pEVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomSensorHeight @ 14e5af6c0

void __cdecl
UInterchangePhysicalCameraFactoryNode::execSetCustomSensorHeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float *pfVar3;
  float local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0.0;
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
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
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
  bVar2 = SetCustomSensorHeight
                    ((UInterchangePhysicalCameraFactoryNode *)param_1,pfVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomSensorWidth @ 14e5af7c0

void __cdecl
UInterchangePhysicalCameraFactoryNode::execSetCustomSensorWidth
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float *pfVar3;
  float local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0.0;
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
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
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
  bVar2 = SetCustomSensorWidth
                    ((UInterchangePhysicalCameraFactoryNode *)param_1,pfVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

