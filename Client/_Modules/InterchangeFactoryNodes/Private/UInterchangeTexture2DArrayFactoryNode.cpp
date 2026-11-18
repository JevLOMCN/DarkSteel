// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 12

// StaticClass @ 14e5128b0

UClass * __cdecl UInterchangeTexture2DArrayFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeTexture2DArrayFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTexture2DArrayFactoryNode,0x490,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTexture2DArrayFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeTexture2DArrayFactoryNode>,local_res8,
               UInterchangeTextureFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.InnerSingleton;
}

// UInterchangeTexture2DArrayFactoryNode @ 14e534440

UInterchangeTexture2DArrayFactoryNode * __thiscall
UInterchangeTexture2DArrayFactoryNode::UInterchangeTexture2DArrayFactoryNode
          (UInterchangeTexture2DArrayFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeTextureFactoryNode::UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeTexture2DArrayFactoryNode__6B_;
  (this->Macro_CustomAddressXKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddressXKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddressXKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAddressXKey).Key,L"AddressX");
  (this->Macro_CustomAddressYKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddressYKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddressYKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAddressYKey).Key,L"AddressY");
  (this->Macro_CustomAddressZKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddressZKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddressZKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAddressZKey).Key,L"AddressZ");
  return this;
}

// UInterchangeTexture2DArrayFactoryNode @ 14e5344c0

UInterchangeTexture2DArrayFactoryNode * __thiscall
UInterchangeTexture2DArrayFactoryNode::UInterchangeTexture2DArrayFactoryNode
          (UInterchangeTexture2DArrayFactoryNode *this)

{
  UInterchangeTextureFactoryNode::UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeTexture2DArrayFactoryNode__6B_;
  (this->Macro_CustomAddressXKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddressXKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddressXKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAddressXKey).Key,L"AddressX");
  (this->Macro_CustomAddressYKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddressYKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddressYKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAddressYKey).Key,L"AddressY");
  (this->Macro_CustomAddressZKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddressZKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddressZKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAddressZKey).Key,L"AddressZ");
  return this;
}

// ~UInterchangeTexture2DArrayFactoryNode @ 14e536750

void __thiscall
UInterchangeTexture2DArrayFactoryNode::~UInterchangeTexture2DArrayFactoryNode
          (UInterchangeTexture2DArrayFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeTexture2DArrayFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomAddressZKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAddressYKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAddressXKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeTextureFactoryNode::~UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this);
  return;
}

// CopyWithObject @ 14e548450

void __thiscall
UInterchangeTexture2DArrayFactoryNode::CopyWithObject
          (UInterchangeTexture2DArrayFactoryNode *this,UInterchangeFactoryBaseNode *param_1,
          UObject *param_2)

{
  FAttributeStorage *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FString *pFVar7;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  longlong lVar11;
  EAttributeStorageResult EVar12;
  uint uVar13;
  longlong *plVar14;
  bool abStackX_10 [16];
  uchar auStackX_20 [8];
  uchar uStack_498;
  uchar uStack_497;
  uchar uStack_496;
  uchar uStack_495;
  bool abStack_494 [4];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_490;
  FDelegateAllocation FStack_488;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_478;
  FDelegateAllocation FStack_470;
  float fStack_460;
  int iStack_45c;
  FName FStack_458;
  FName FStack_450;
  UClass *pUStack_448;
  UInterchangeTexture2DArrayFactoryNode *pUStack_440;
  UClass *pUStack_438;
  UInterchangeTexture2DArrayFactoryNode *pUStack_430;
  FName FStack_428;
  FName FStack_420;
  FName FStack_418;
  FName FStack_410;
  FName FStack_408;
  FName FStack_400;
  TAttributeHandle<unsigned_char,void> TStack_3f8;
  TAttributeHandle<unsigned_char,void> TStack_3e0;
  TAttributeHandle<unsigned_char,void> TStack_3c8;
  TAttributeHandle<float,void> TStack_3b0;
  TAttributeHandle<unsigned_char,void> TStack_398;
  TAttributeHandle<bool,void> TStack_380;
  TAttributeHandle<int,void> TStack_368;
  TAttributeHandle<unsigned_char,void> TStack_350;
  TAttributeHandle<bool,void> TStack_338;
  FString FStack_320;
  FString FStack_310;
  FString FStack_300;
  FString FStack_2f0;
  FString FStack_2e0;
  FString FStack_2d0;
  FString FStack_2c0;
  FString FStack_2b0;
  FString FStack_2a0;
  FDestructionSentinel FStack_290;
  FDestructionSentinel FStack_278;
  FDestructionSentinel FStack_260;
  FDestructionSentinel FStack_248;
  FDestructionSentinel FStack_230;
  FDelegateAllocation *pFStack_218;
  FDestructionSentinel FStack_210;
  FDelegateAllocation *pFStack_1f8;
  FString FStack_1f0;
  FString FStack_1e0;
  void *apvStack_1d0 [2];
  FString FStack_1c0;
  void *apvStack_1b0 [2];
  FString FStack_1a0;
  void *apvStack_190 [2];
  FString FStack_180;
  void *apvStack_170 [2];
  void *apvStack_160 [2];
  FString FStack_150;
  void *apvStack_140 [2];
  FString FStack_130;
  void *apvStack_120 [2];
  FString FStack_110;
  void *apvStack_100 [2];
  FString FStack_f0;
  void *apvStack_e0 [2];
  FString FStack_d0;
  FString FStack_c0;
  FString FStack_b0;
  FString FStack_a0;
  FString FStack_90;
  FString FStack_80;
  FString FStack_70;
  FString FStack_60;
  FString FStack_50;
  
  UInterchangeBaseNode::CopyStorage((UInterchangeBaseNode *)param_1,(UInterchangeBaseNode *)this);
  if (param_1 == (UInterchangeFactoryBaseNode *)0x0) {
    return;
  }
  pUVar6 = UInterchangeTextureFactoryNode::StaticClass();
  iVar5 = (int)pUVar6->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar5) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
      != &pUVar6->_padding_) {
    return;
  }
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,apvStack_170);
  ::FString::ConcatFC(&FStack_2e0,pFVar7,L".GetVirtualTextureStreaming");
  if (apvStack_170[0] != (void *)0x0) {
    FMemory::Free(apvStack_170[0]);
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
                    (pFVar1,(FAttributeKey *)&this->_padding_);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&TStack_380,(FAttributeKey *)&this->_padding_);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&TStack_380);
    if (bVar4) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&TStack_380,abStackX_10);
      if ((EVar12 & Operation_Success) != None) {
        if (TStack_380.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_380.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&FStack_458,L"VirtualTextureStreaming");
        pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
                  ((UInterchangeFactoryBaseNode *)this,(FString *)&this->_padding_,pUVar6,FStack_458
                  );
        goto LAB_14e54895e;
      }
      ::FString::FString(&FStack_180,(FString *)&this->_padding_);
      pFVar7 = ::FString::FString(&FStack_d0,&FStack_2e0);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar7,(FAttributeKey *)&FStack_180);
    }
    if (TStack_380.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_380.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e54895e:
  if (FStack_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e0.Data.AllocatorInstance.Data);
  }
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,apvStack_190);
  ::FString::ConcatFC(&FStack_2f0,pFVar7,L".GetCompressionSettings");
  if (apvStack_190[0] != (void *)0x0) {
    FMemory::Free(apvStack_190[0]);
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
                    (pFVar1,(FAttributeKey *)&this->_padding_);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
              (pFVar1,&TStack_398,(FAttributeKey *)&this->_padding_);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&TStack_398);
    if (bVar4) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                         (&TStack_398,auStackX_20);
      if ((EVar12 & Operation_Success) != None) {
        if (TStack_398.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_398.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&FStack_450,L"CompressionSettings");
        pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned_char>
                  ((UInterchangeFactoryBaseNode *)this,(FString *)&this->_padding_,pUVar6,FStack_450
                  );
        goto LAB_14e548ab5;
      }
      ::FString::FString(&FStack_1a0,(FString *)&this->_padding_);
      pFVar7 = ::FString::FString(&FStack_c0,&FStack_2f0);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar7,(FAttributeKey *)&FStack_1a0);
    }
    if (TStack_398.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_398.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e548ab5:
  if (FStack_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2f0.Data.AllocatorInstance.Data);
  }
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,apvStack_1b0);
  ::FString::ConcatFC(&FStack_2b0,pFVar7,L".GetDownscale");
  if (apvStack_1b0[0] != (void *)0x0) {
    FMemory::Free(apvStack_1b0[0]);
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
                    (pFVar1,(FAttributeKey *)&this->_padding_);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar1,&TStack_3b0,(FAttributeKey *)&this->_padding_);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&TStack_3b0);
    if (bVar4) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                         (&TStack_3b0,&fStack_460);
      if ((EVar12 & Operation_Success) != None) {
        if (TStack_3b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_3b0.Key.Key.Data.AllocatorInstance.Data);
        }
        pUStack_448 = Z_Construct_UClass_UTexture_NoRegister();
        uVar13 = ((uint)((ulonglong)pUStack_448 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)pUStack_448 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar14 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar14 = &this->_padding_;
          }
          iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar13) * 4);
          if (iVar5 != -1) {
            lVar11 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar5 * 0x20 + lVar11) == pUStack_448) {
                if ((iVar5 != -1) && (lVar11 = (longlong)iVar5 * 0x20 + lVar11, lVar11 != 0)) {
                  pTVar8 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                            *)(lVar11 + 8);
                  goto LAB_14e548c8e;
                }
                break;
              }
              iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar11);
            } while (iVar5 != -1);
          }
        }
        pTVar8 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                 ::EmplaceByHash<UClass_*>
                           ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                             *)&this->_padding_,uVar13,&pUStack_448);
LAB_14e548c8e:
        TStack_490.AccessDetector.State =
             (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_488.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        FStack_488.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_490,(FWriteAccessScope *)&FStack_210);
        pFStack_1f8 = &FStack_488;
        puVar9 = UE::Core::Private::DelegateAllocate(0x28,&FStack_488);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeTextureFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[3] = 0;
          pUStack_440 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&pUStack_440);
          puVar9[4] = UInterchangeTextureFactoryNode::ApplyCustomDownscaleToAsset;
        }
        if (FStack_210.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_210.Accessor,&FStack_210);
        }
        pFVar2 = (pTVar8->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&TStack_490) &&
            ((FScriptContainerElement *)&TStack_490 < pFVar2 + (longlong)pTVar8->ArrayMax * 0x18))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = pTVar8->ArrayNum;
        if (iVar5 == pTVar8->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        lVar11 = (longlong)iVar5;
        pTVar8->ArrayNum = iVar5 + 1;
        pFVar2 = (pTVar8->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar11 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar11 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar11 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_490,(FWriteAccessScope *)&FStack_290);
        if (*(void **)(pFVar2 + lVar11 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar11 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar11 * 0x18 + 8) =
             FStack_488.DelegateAllocator;
        FStack_488.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar11 * 0x18 + 0x10) = FStack_488.DelegateSize;
        FStack_488.DelegateSize = 0;
        if (FStack_290.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_290.Accessor,&FStack_290);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_490,(FWriteAccessScope *)&FStack_278);
        if ((FStack_488.DelegateSize != 0) &&
           (FStack_488.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)FStack_488.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&FStack_488,0,0,0x10);
          FStack_488.DelegateSize = 0;
        }
        if (FStack_278.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_278.Accessor,&FStack_278);
        }
        if (FStack_488.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_488.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_490.AccessDetector);
        pUStack_438 = Z_Construct_UClass_UTexture_NoRegister();
        uVar13 = ((uint)((ulonglong)pUStack_438 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)pUStack_438 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar14 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar14 = &this->_padding_;
          }
          iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar13) * 4);
          if (iVar5 != -1) {
            lVar11 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar5 * 0x20 + lVar11) == pUStack_438) {
                if ((iVar5 != -1) && (lVar11 = (longlong)iVar5 * 0x20 + lVar11, lVar11 != 0)) {
                  pTVar8 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                            *)(lVar11 + 8);
                  goto LAB_14e548f6e;
                }
                break;
              }
              iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar11);
            } while (iVar5 != -1);
          }
        }
        pTVar8 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                 ::EmplaceByHash<UClass_*>
                           ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                             *)&this->_padding_,uVar13,&pUStack_438);
LAB_14e548f6e:
        TStack_478.AccessDetector.State =
             (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_470.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        FStack_470.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_478,(FWriteAccessScope *)&FStack_230);
        pFStack_218 = &FStack_470;
        puVar9 = UE::Core::Private::DelegateAllocate(0x28,&FStack_470);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeTextureFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[3] = 0;
          pUStack_430 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&pUStack_430);
          puVar9[4] = UInterchangeTextureFactoryNode::FillCustomDownscaleFromAsset;
        }
        if (FStack_230.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_230.Accessor,&FStack_230);
        }
        pFVar2 = (pTVar8->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&TStack_478) &&
            ((FScriptContainerElement *)&TStack_478 < pFVar2 + (longlong)pTVar8->ArrayMax * 0x18))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = pTVar8->ArrayNum;
        if (iVar5 == pTVar8->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        lVar11 = (longlong)iVar5;
        pTVar8->ArrayNum = iVar5 + 1;
        pFVar2 = (pTVar8->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar11 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar11 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar11 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_478,(FWriteAccessScope *)&FStack_260);
        if (*(void **)(pFVar2 + lVar11 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar11 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar11 * 0x18 + 8) =
             FStack_470.DelegateAllocator;
        FStack_470.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar11 * 0x18 + 0x10) = FStack_470.DelegateSize;
        FStack_470.DelegateSize = 0;
        if (FStack_260.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_260.Accessor,&FStack_260);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_478,(FWriteAccessScope *)&FStack_248);
        if ((FStack_470.DelegateSize != 0) &&
           (FStack_470.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)FStack_470.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&FStack_470,0,0,0x10);
          FStack_470.DelegateSize = 0;
        }
        if (FStack_248.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_248.Accessor,&FStack_248);
        }
        if (FStack_470.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_470.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_478.AccessDetector);
        goto LAB_14e5491ae;
      }
      ::FString::FString(&FStack_1c0,(FString *)&this->_padding_);
      pFVar7 = ::FString::FString(&FStack_b0,&FStack_2b0);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar7,(FAttributeKey *)&FStack_1c0);
    }
    if (TStack_3b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_3b0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e5491ae:
  if (FStack_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b0.Data.AllocatorInstance.Data);
  }
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,apvStack_1d0);
  ::FString::ConcatFC(&FStack_2c0,pFVar7,L".GetDownscaleOptions");
  if (apvStack_1d0[0] != (void *)0x0) {
    FMemory::Free(apvStack_1d0[0]);
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
                    (pFVar1,(FAttributeKey *)&this->_padding_);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
              (pFVar1,&TStack_3c8,(FAttributeKey *)&this->_padding_);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&TStack_3c8);
    if (bVar4) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                         (&TStack_3c8,&uStack_498);
      if ((EVar12 & Operation_Success) != None) {
        if (TStack_3c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_3c8.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&FStack_428,L"DownscaleOptions");
        pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned_char>
                  ((UInterchangeFactoryBaseNode *)this,(FString *)&this->_padding_,pUVar6,FStack_428
                  );
        goto LAB_14e54934c;
      }
      ::FString::FString(&FStack_1e0,(FString *)&this->_padding_);
      pFVar7 = ::FString::FString(&FStack_a0,&FStack_2c0);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar7,(FAttributeKey *)&FStack_1e0);
    }
    if (TStack_3c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_3c8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e54934c:
  if (FStack_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c0.Data.AllocatorInstance.Data);
  }
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,apvStack_160);
  ::FString::ConcatFC(&FStack_2a0,pFVar7,L".GetFilter");
  if (apvStack_160[0] != (void *)0x0) {
    FMemory::Free(apvStack_160[0]);
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
                    (pFVar1,(FAttributeKey *)&this->_padding_);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
              (pFVar1,&TStack_3e0,(FAttributeKey *)&this->_padding_);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&TStack_3e0);
    if (bVar4) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                         (&TStack_3e0,&uStack_497);
      if ((EVar12 & Operation_Success) != None) {
        if (TStack_3e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_3e0.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&FStack_420,L"Filter");
        pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned_char>
                  ((UInterchangeFactoryBaseNode *)this,(FString *)&this->_padding_,pUVar6,FStack_420
                  );
        goto LAB_14e5494a1;
      }
      ::FString::FString(&FStack_150,(FString *)&this->_padding_);
      pFVar7 = ::FString::FString(&FStack_90,&FStack_2a0);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar7,(FAttributeKey *)&FStack_150);
    }
    if (TStack_3e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_3e0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e5494a1:
  if (FStack_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data.AllocatorInstance.Data);
  }
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,apvStack_140);
  ::FString::ConcatFC(&FStack_320,pFVar7,L".GetLODBias");
  if (apvStack_140[0] != (void *)0x0) {
    FMemory::Free(apvStack_140[0]);
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
                    (pFVar1,(FAttributeKey *)&this->_padding_);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<int,void>
              (pFVar1,&TStack_368,(FAttributeKey *)&this->_padding_);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::IsValid(&TStack_368);
    if (bVar4) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::Get
                         (&TStack_368,&iStack_45c);
      if ((EVar12 & Operation_Success) != None) {
        if (TStack_368.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_368.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&FStack_418,L"LODBias");
        pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
                  ((UInterchangeFactoryBaseNode *)this,(FString *)&this->_padding_,pUVar6,FStack_418
                  );
        goto LAB_14e549604;
      }
      ::FString::FString(&FStack_130,(FString *)&this->_padding_);
      pFVar7 = ::FString::FString(&FStack_80,&FStack_320);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar7,(FAttributeKey *)&FStack_130);
    }
    if (TStack_368.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_368.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e549604:
  if (FStack_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_320.Data.AllocatorInstance.Data);
  }
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,apvStack_120);
  ::FString::ConcatFC(&FStack_310,pFVar7,L".GetLODGroup");
  if (apvStack_120[0] != (void *)0x0) {
    FMemory::Free(apvStack_120[0]);
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
                    (pFVar1,(FAttributeKey *)&this->_padding_);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
              (pFVar1,&TStack_350,(FAttributeKey *)&this->_padding_);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&TStack_350);
    if (bVar4) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                         (&TStack_350,&uStack_496);
      if ((EVar12 & Operation_Success) != None) {
        if (TStack_350.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_350.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&FStack_410,L"LODGroup");
        pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned_char>
                  ((UInterchangeFactoryBaseNode *)this,(FString *)&this->_padding_,pUVar6,FStack_410
                  );
        goto LAB_14e549768;
      }
      ::FString::FString(&FStack_110,(FString *)&this->_padding_);
      pFVar7 = ::FString::FString(&FStack_70,&FStack_310);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar7,(FAttributeKey *)&FStack_110);
    }
    if (TStack_350.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_350.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e549768:
  if (FStack_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_310.Data.AllocatorInstance.Data);
  }
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,apvStack_100);
  ::FString::ConcatFC(&FStack_300,pFVar7,L".GetMipLoadOptions");
  if (apvStack_100[0] != (void *)0x0) {
    FMemory::Free(apvStack_100[0]);
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
                    (pFVar1,(FAttributeKey *)&this->_padding_);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
              (pFVar1,&TStack_3f8,(FAttributeKey *)&this->_padding_);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&TStack_3f8);
    if (bVar4) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                         (&TStack_3f8,&uStack_495);
      if ((EVar12 & Operation_Success) != None) {
        if (TStack_3f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_3f8.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&FStack_408,L"MipLoadOptions");
        pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned_char>
                  ((UInterchangeFactoryBaseNode *)this,(FString *)&this->_padding_,pUVar6,FStack_408
                  );
        goto LAB_14e5498bd;
      }
      ::FString::FString(&FStack_f0,(FString *)&this->_padding_);
      pFVar7 = ::FString::FString(&FStack_50,&FStack_300);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar7,(FAttributeKey *)&FStack_f0);
    }
    if (TStack_3f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_3f8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e5498bd:
  if (FStack_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_300.Data.AllocatorInstance.Data);
  }
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,apvStack_e0);
  ::FString::ConcatFC(&FStack_2d0,pFVar7,L".GetSRGB");
  if (apvStack_e0[0] != (void *)0x0) {
    FMemory::Free(apvStack_e0[0]);
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
                    (pFVar1,(FAttributeKey *)&this->_padding_);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&TStack_338,(FAttributeKey *)&this->_padding_);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&TStack_338);
    if (bVar4) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&TStack_338,abStack_494);
      if ((EVar12 & Operation_Success) != None) {
        if (TStack_338.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_338.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&FStack_400,L"SRGB");
        pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
                  ((UInterchangeFactoryBaseNode *)this,(FString *)&this->_padding_,pUVar6,FStack_400
                  );
        goto LAB_14e549a21;
      }
      ::FString::FString(&FStack_1f0,(FString *)&this->_padding_);
      pFVar7 = ::FString::FString(&FStack_60,&FStack_2d0);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar7,(FAttributeKey *)&FStack_1f0);
    }
    if (TStack_338.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_338.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e549a21:
  if (FStack_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d0.Data.AllocatorInstance.Data);
  }
  return;
}

// GetObjectClass @ 14e559680

UClass * __thiscall
UInterchangeTexture2DArrayFactoryNode::GetObjectClass(UInterchangeTexture2DArrayFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture2DArray",
               &Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton,
               UTexture2DArray::StaticRegisterNativesUTexture2DArray,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTexture2DArray>,
               InternalVTableHelperCtorCaller<UTexture2DArray>,aFStackX_8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55bc90

UClass * __cdecl UInterchangeTexture2DArrayFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeTexture2DArrayFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTexture2DArrayFactoryNode,0x490,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTexture2DArrayFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeTexture2DArrayFactoryNode>,local_res8,
               UInterchangeTextureFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.InnerSingleton;
}

// StaticRegisterNativesUInterchangeTexture2DArrayFactoryNode @ 14e57fad0

void __cdecl
UInterchangeTexture2DArrayFactoryNode::StaticRegisterNativesUInterchangeTexture2DArrayFactoryNode
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomAddressX @ 14e588db0

void __cdecl
UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressX
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = '\0';
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
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetAddressX");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<unsigned_char>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x1c),
                     &local_38,puVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomAddressY @ 14e589010

void __cdecl
UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressY
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = '\0';
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
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetAddressY");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<unsigned_char>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1c].field_0x10
                     ,&local_38,puVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomAddressZ @ 14e589270

void __cdecl
UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressZ
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = '\0';
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
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetAddressZ");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<unsigned_char>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1c].field_0x20
                     ,&local_38,puVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execSetCustomAddressZ @ 14e59f770

void __cdecl
UInterchangeTexture2DArrayFactoryNode::execSetCustomAddressZ
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  uchar local_res8 [8];
  uchar local_res10 [8];
  undefined4 local_res18 [4];
  FString local_68;
  FString local_58;
  void *local_48 [2];
  FString local_38;
  
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
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
  local_res10[0] = local_res8[0];
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_48);
  ::FString::ConcatFC(&local_58,pFVar4,L".SetAddressZ");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if ((*(longlong *)(param_1 + 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1c].field_0x20
                     ,local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_38,(FString *)&param_1[0x1c].field_0x20);
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_58.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_68,(FAttributeKey *)&local_38);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

