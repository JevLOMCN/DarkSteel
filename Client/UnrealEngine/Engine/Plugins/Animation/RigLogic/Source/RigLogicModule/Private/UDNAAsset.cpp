// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 18

// StaticClass @ 14a65b190

UClass * __cdecl UDNAAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDNAAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigLogicModule",L"DNAAsset",
               &Z_Registration_Info_UClass_UDNAAsset.InnerSingleton,StaticRegisterNativesUDNAAsset,
               0x140,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDNAAsset>,
               InternalVTableHelperCtorCaller<UDNAAsset>,local_res8,UAssetUserData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDNAAsset.InnerSingleton;
}

// UDNAAsset @ 14a660bd0

UDNAAsset * __thiscall UDNAAsset::UDNAAsset(UDNAAsset *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UDNAAsset__6B_;
  (this->DnaFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DnaFileName).Data.ArrayNum = 0;
  (this->DnaFileName).Data.ArrayMax = 0;
  *(undefined8 *)&this->MetaData = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  (this->RigLogicConfiguration).CalculationType = AnyVector;
  (this->RigLogicConfiguration).LoadJoints = true;
  (this->RigLogicConfiguration).LoadBlendShapes = true;
  (this->RigLogicConfiguration).LoadAnimatedMaps = true;
  (this->RigLogicConfiguration).LoadMachineLearnedBehavior = true;
  (this->RigLogicConfiguration).LoadRBFBehavior = true;
  (this->RigLogicConfiguration).LoadTwistSwingBehavior = true;
  (this->RigLogicConfiguration).TranslationType = Vector;
  (this->RigLogicConfiguration).RotationType = Quaternions;
  (this->RigLogicConfiguration).RotationOrder = ZYX;
  (this->RigLogicConfiguration).ScaleType = Vector;
  (this->RigLogicConfiguration).TranslationPruningThreshold = 0.0;
  (this->RigLogicConfiguration).RotationPruningThreshold = 0.0;
  (this->RigLogicConfiguration).ScalePruningThreshold = 0.0;
  (this->DNAUpdateLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->RigRuntimeContextUpdateLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->DNAIndexMappingUpdateLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->BehaviorReader).Object = (IDNAReader *)0x0;
  (this->BehaviorReader).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GeometryReader).Object = (IDNAReader *)0x0;
  (this->GeometryReader).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RigRuntimeContext).Object = (FSharedRigRuntimeContext *)0x0;
  (this->RigRuntimeContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->DNAIndexMappingContainer = 0;
  *(undefined8 *)&(this->DNAIndexMappingContainer).field_0x8 = 0;
  *(undefined8 *)&(this->DNAIndexMappingContainer).field_0x20 = 0;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x28 = 0;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x2c = 0x80;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x34 = 0;
  *(undefined8 *)&(this->DNAIndexMappingContainer).field_0x40 = 0;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x48 = 0;
  return this;
}

// UDNAAsset @ 14a660cf0

UDNAAsset * __thiscall UDNAAsset::UDNAAsset(UDNAAsset *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UAssetUserData::UAssetUserData((UAssetUserData *)this,pFVar1);
  this->_padding_ = (longlong)&___7UDNAAsset__6B_;
  (this->DnaFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DnaFileName).Data.ArrayNum = 0;
  (this->DnaFileName).Data.ArrayMax = 0;
  *(undefined8 *)&this->MetaData = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  (this->RigLogicConfiguration).CalculationType = AnyVector;
  (this->RigLogicConfiguration).LoadJoints = true;
  (this->RigLogicConfiguration).LoadBlendShapes = true;
  (this->RigLogicConfiguration).LoadAnimatedMaps = true;
  (this->RigLogicConfiguration).LoadMachineLearnedBehavior = true;
  (this->RigLogicConfiguration).LoadRBFBehavior = true;
  (this->RigLogicConfiguration).LoadTwistSwingBehavior = true;
  (this->RigLogicConfiguration).TranslationType = Vector;
  (this->RigLogicConfiguration).RotationType = Quaternions;
  (this->RigLogicConfiguration).RotationOrder = ZYX;
  (this->RigLogicConfiguration).ScaleType = Vector;
  (this->RigLogicConfiguration).TranslationPruningThreshold = 0.0;
  (this->RigLogicConfiguration).RotationPruningThreshold = 0.0;
  (this->RigLogicConfiguration).ScalePruningThreshold = 0.0;
  (this->DNAUpdateLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->RigRuntimeContextUpdateLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->DNAIndexMappingUpdateLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->BehaviorReader).Object = (IDNAReader *)0x0;
  (this->BehaviorReader).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GeometryReader).Object = (IDNAReader *)0x0;
  (this->GeometryReader).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RigRuntimeContext).Object = (FSharedRigRuntimeContext *)0x0;
  (this->RigRuntimeContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->DNAIndexMappingContainer = 0;
  *(undefined8 *)&(this->DNAIndexMappingContainer).field_0x8 = 0;
  *(undefined8 *)&(this->DNAIndexMappingContainer).field_0x20 = 0;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x28 = 0;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x2c = 0x80;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x34 = 0;
  *(undefined8 *)&(this->DNAIndexMappingContainer).field_0x40 = 0;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x48 = 0;
  return this;
}

// ~UDNAAsset @ 14a6614d0

void __thiscall UDNAAsset::~UDNAAsset(UDNAAsset *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7UDNAAsset__6B_;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DNAIndexMappingContainer).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DNAIndexMappingContainer);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RigRuntimeContext).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GeometryReader).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BehaviorReader).SharedReferenceCount.ReferenceController);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DNAIndexMappingUpdateLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DNAIndexMappingUpdateLock);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RigRuntimeContextUpdateLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RigRuntimeContextUpdateLock);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DNAUpdateLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DNAUpdateLock);
  }
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetaData);
  pFVar2 = (this->DnaFileName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetBehaviorReader @ 14a66d910

TSharedPtr<IDNAReader,1> * __thiscall
UDNAAsset::GetBehaviorReader(UDNAAsset *this,TSharedPtr<IDNAReader,1> *__return_storage_ptr__)

{
  FPlatformRWLock *SRWLock;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<IDNAReader,1> *pTVar4;
  
  SRWLock = &this->DNAUpdateLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IDNAReader,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  __return_storage_ptr__->Object = (this->BehaviorReader).Object;
  pTVar1 = (this->BehaviorReader).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return __return_storage_ptr__;
}

// GetDNAIndexMapping @ 14a66f860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FDNAIndexMapping,1> * __thiscall
UDNAAsset::GetDNAIndexMapping
          (UDNAAsset *this,TSharedPtr<FDNAIndexMapping,1> *__return_storage_ptr__,USkeleton *param_1
          ,USkeletalMesh *param_2)

{
  FPlatformRWLock *SRWLock;
  longlong lVar1;
  FGuid FVar2;
  FDNAIndexMapping *pFVar3;
  IDNAReader *pIVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  USkeleton *pUVar8;
  longlong *plVar9;
  bool bVar10;
  int iVar11;
  TSharedPtr<FDNAIndexMapping,1> *pTVar12;
  USkeleton *pUVar13;
  TMap<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>_>
  *pTVar14;
  FPlatformRWLock *SRWLock_00;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  ulonglong uVar17;
  FLLMScope local_res10 [2];
  USkeleton *local_res18;
  TSharedPtr<FDNAIndexMapping,1> local_118;
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_100;
  longlong *local_f8;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
  *local_c8;
  char local_c0;
  char cStack_bf;
  undefined4 local_b8;
  undefined1 local_b4 [20];
  USkeleton *local_a0;
  TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
  *local_98;
  FMemScope local_90;
  FWeakObjectPtr *local_88;
  TSharedPtr<FDNAIndexMapping,1> *local_80;
  FDNAIndexMapping *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  local_res18 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name245,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name245,false,None,Default,true);
  FMemScope::FMemScope(&local_90,&LLMScope_Name245,true);
  SRWLock_00 = &this->DNAUpdateLock;
  local_b4._4_8_ = SRWLock_00;
  if ((SRWLock_00 == (FPlatformRWLock *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x1c,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedPtr<FDNAIndexMapping,1> *)(*pcVar5)();
    return pTVar12;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock_00);
  SRWLock = &this->DNAIndexMappingUpdateLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedPtr<FDNAIndexMapping,1> *)(*pcVar5)();
    return pTVar12;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pTVar14 = &this->DNAIndexMappingContainer;
  __return_storage_ptr__->Object = (FDNAIndexMapping *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_98 = (TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
              *)pTVar14;
  TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
              *)pTVar14);
  pUVar8 = local_res18;
  local_c0 = '\0';
  cStack_bf = '\0';
  stack0xffffffffffffff18 = local_68._16_16_;
  local_f8 = (longlong *)local_68._0_8_;
  auStack_f0._0_8_ = local_68._8_8_;
  local_d8 = local_48;
  pTStack_d0 = pTStack_40;
  uVar17 = local_68._24_8_ >> 0x20;
  local_c8 = (TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
              *)pTVar14;
  if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      plVar9 = local_f8;
      lVar1 = (longlong)(int)uVar17 * 0x28;
      bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_f8 + lVar1));
      if ((bVar10) &&
         (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*plVar9 + 8 + lVar1)), bVar10)) {
        bVar10 = TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
                           ((TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr> *)(*plVar9 + lVar1)
                            ,param_2);
        if ((bVar10) &&
           (bVar10 = TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>::UEOpEquals<USkeleton,bool>
                               ((TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr> *)
                                (*plVar9 + 8 + lVar1),pUVar8), bVar10)) {
          pTVar16 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18 + *plVar9);
          pFVar3 = *(FDNAIndexMapping **)(lVar1 + 0x10 + *plVar9);
          if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_78 = __return_storage_ptr__->Object;
          pTStack_70 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
          __return_storage_ptr__->Object = pFVar3;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar16;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_70);
        }
      }
      else {
        TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_d0,(int)uVar17);
        local_c0 = '\x01';
      }
      uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
      SRWLock_00 = (FPlatformRWLock *)local_b4._4_8_;
      uVar17 = (ulonglong)uStack_dc;
    } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
    if ((local_c0 != '\0') && (cStack_bf != '\0')) {
      uVar15 = *(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34;
      if (uVar15 < 4) {
        iVar11 = 1;
      }
      else {
        uVar17 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        local_b8 = (undefined4)lVar1;
        iVar11 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar15) && (local_c8->HashSize < iVar11)) || (iVar11 < local_c8->HashSize)) {
        local_c8->HashSize = iVar11;
        TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_c8);
      }
    }
  }
  pUVar8 = local_res18;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = __return_storage_ptr__->Object;
  FVar2 = local_res18->Guid;
  if ((pFVar3 == (FDNAIndexMapping *)0x0) ||
     (((FVar2.C != (pFVar3->SkeletonGuid).C || FVar2.D != (pFVar3->SkeletonGuid).D) ||
      FVar2.B != (pFVar3->SkeletonGuid).B) || FVar2.A != (pFVar3->SkeletonGuid).A)) {
    local_118.SharedReferenceCount.ReferenceController = ::operator_new(0xa0);
    if (local_118.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      pUVar13 = (USkeleton *)&DAT_00000010;
      local_118.Object = (FDNAIndexMapping *)___xmm_00000000000000000000000000000010;
      local_118.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_118.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_118.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFDNAIndexMapping___00_SharedPointerInternals__6B_;
      *(undefined4 *)
       ((longlong)&local_118.SharedReferenceCount.ReferenceController[3]._padding_ + 1) = 0;
      *(undefined2 *)
       ((longlong)&local_118.SharedReferenceCount.ReferenceController[3]._padding_ + 5) = 0;
      *(undefined1 *)
       ((longlong)&local_118.SharedReferenceCount.ReferenceController[3]._padding_ + 7) = 0;
      *(undefined4 *)
       ((longlong)&local_118.SharedReferenceCount.ReferenceController[5]._padding_ + 1) = 0;
      *(undefined2 *)
       ((longlong)&local_118.SharedReferenceCount.ReferenceController[5]._padding_ + 5) = 0;
      *(undefined1 *)
       ((longlong)&local_118.SharedReferenceCount.ReferenceController[5]._padding_ + 7) = 0;
      local_118.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
      local_118.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&local_118.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
      local_118.SharedReferenceCount.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&local_118.SharedReferenceCount.ReferenceController[5]._padding_ = 0;
      local_118.SharedReferenceCount.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[7].SharedReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[7].WeakReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[8].SharedReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[8].WeakReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[9].SharedReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[9].WeakReferenceCount = (atomic<int>)0x0;
      local_res18 = (USkeleton *)(local_118.SharedReferenceCount.ReferenceController + 1);
      local_118.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
      local_118.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
      local_118.SharedReferenceCount.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
      local_118.SharedReferenceCount.ReferenceController[6]._padding_ = 0;
      local_118.SharedReferenceCount.ReferenceController[7]._padding_ = 0;
      local_118.SharedReferenceCount.ReferenceController[8]._padding_ = 0;
      local_118.SharedReferenceCount.ReferenceController[9]._padding_ = 0;
      if ((local_res18 == (USkeleton *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedPtr<FDNAIndexMapping,1> *)(*pcVar5)();
        return pTVar12;
      }
      LOCK();
      (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pUVar13 = local_res18;
      pTVar16 = local_118.SharedReferenceCount.ReferenceController;
      local_118.Object = (FDNAIndexMapping *)local_res18;
    }
    if (__return_storage_ptr__ != &local_118) {
      __return_storage_ptr__->Object = (FDNAIndexMapping *)pUVar13;
      local_118.Object = (FDNAIndexMapping *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_118.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    if ((__return_storage_ptr__->Object == (FDNAIndexMapping *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedPtr<FDNAIndexMapping,1> *)(*pcVar5)();
      return pTVar12;
    }
    pFVar3 = __return_storage_ptr__->Object;
    uVar15 = (pUVar8->Guid).B;
    uVar6 = (pUVar8->Guid).C;
    uVar7 = (pUVar8->Guid).D;
    pIVar4 = (this->BehaviorReader).Object;
    (pFVar3->SkeletonGuid).A = (pUVar8->Guid).A;
    (pFVar3->SkeletonGuid).B = uVar15;
    (pFVar3->SkeletonGuid).C = uVar6;
    (pFVar3->SkeletonGuid).D = uVar7;
    FDNAIndexMapping::MapControlCurves(pFVar3,pIVar4,pUVar8);
    FDNAIndexMapping::MapNeuralNetworkMaskCurves(pFVar3,pIVar4,pUVar8);
    FDNAIndexMapping::MapJoints(pFVar3,pIVar4,param_2);
    FDNAIndexMapping::MapDriverJoints(pFVar3,pIVar4,param_2);
    FDNAIndexMapping::MapMorphTargets(pFVar3,pIVar4,pUVar8,param_2);
    FDNAIndexMapping::MapMaskMultipliers(pFVar3,pIVar4,pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_108.ObjectIndex = 0;
    local_108.ObjectSerialNumber = 0;
    local_b4._12_8_ = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_108,(FObjectPtr)((longlong)local_b4 + 0xc));
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    local_100.ObjectIndex = 0;
    local_100.ObjectSerialNumber = 0;
    local_a0 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_a0);
    local_88 = &local_108;
    local_80 = __return_storage_ptr__;
    TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey_&&,TSharedPtr<FDNAIndexMapping,1>_const_&>_>
              (local_98,(TPairInitializer<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey_&&,TSharedPtr<FDNAIndexMapping,1>_const_&>
                         *)local_b4,(bool *)&local_88);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  if (SRWLock_00 != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock_00);
  }
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

// GetDnaReaderFromAsset @ 14a66fe70

TSharedRef<IDNAReader,1> * __thiscall
UDNAAsset::GetDnaReaderFromAsset(UDNAAsset *this,TSharedRef<IDNAReader,1> *__return_storage_ptr__)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  IDNAReader *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  MemoryStream *pMVar5;
  BinaryStreamWriter *pBVar6;
  TSharedRef<IDNAReader,1> *pTVar7;
  undefined8 uVar8;
  BinaryStreamReader *pBVar9;
  TSharedRef<FDNAReader<dna::BinaryStreamReader>,1> *pTVar10;
  BinaryStreamReader *local_res8;
  TSharedRef<FDNAReader<dna::BinaryStreamReader>,1> local_38;
  
  pMVar5 = trio::MemoryStream::create((MemoryResource *)0x0);
  pBVar6 = dna::BinaryStreamWriter::create((BoundedIOStream *)pMVar5,(MemoryResource *)0x0);
  SRWLock = &this->DNAUpdateLock;
  pcVar1 = *(code **)(*(longlong *)pBVar6 + 200);
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TSharedRef<IDNAReader,1> *)(*pcVar1)();
      return pTVar7;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pIVar2 = (this->BehaviorReader).Object;
  pTVar3 = (this->BehaviorReader).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (pIVar2 == (IDNAReader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TSharedRef<IDNAReader,1> *)(*pcVar1)();
      return pTVar7;
    }
  }
  uVar8 = (**(code **)(*(longlong *)
                        (&pIVar2->field_0x8 + *(int *)(*(longlong *)&pIVar2->field_0x8 + 4)) + 8))()
  ;
  (*pcVar1)(pBVar6,uVar8,0x1ef,0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  (**(code **)(*(longlong *)pBVar6 + 0xd0))(pBVar6);
  pBVar9 = dna::BinaryStreamReader::create
                     ((BoundedIOStream *)pMVar5,All,Preserve,0,(MemoryResource *)0x0);
  (**(code **)(*(longlong *)pBVar9 + 0xe0))(pBVar9);
  local_res8 = pBVar9;
  pTVar10 = MakeShared<FDNAReader<dna::BinaryStreamReader>,1,dna::BinaryStreamReader_*>
                      (&local_38,&local_res8);
  __return_storage_ptr__->Object = (IDNAReader *)pTVar10->Object;
  pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  dna::BinaryStreamWriter::destroy(pBVar6);
  if (pMVar5 != (MemoryStream *)0x0) {
    trio::MemoryStream::destroy(pMVar5);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a676660

UClass * __cdecl UDNAAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDNAAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigLogicModule",L"DNAAsset",
               &Z_Registration_Info_UClass_UDNAAsset.InnerSingleton,StaticRegisterNativesUDNAAsset,
               0x140,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDNAAsset>,
               InternalVTableHelperCtorCaller<UDNAAsset>,local_res8,UAssetUserData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDNAAsset.InnerSingleton;
}

// GetRigRuntimeContext @ 14a678ca0

TSharedPtr<FSharedRigRuntimeContext,1> * __thiscall
UDNAAsset::GetRigRuntimeContext
          (UDNAAsset *this,TSharedPtr<FSharedRigRuntimeContext,1> *__return_storage_ptr__)

{
  FPlatformRWLock *SRWLock;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FSharedRigRuntimeContext,1> *pTVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name237,L"Animation/RigLogic");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name237,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name237,true);
  SRWLock = &this->RigRuntimeContextUpdateLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FSharedRigRuntimeContext,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  __return_storage_ptr__->Object = (this->RigRuntimeContext).Object;
  pTVar1 = (this->RigRuntimeContext).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Init @ 14a67aaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDNAAsset::Init(UDNAAsset *this,FString *param_1)

{
  FString *pFVar1;
  FPlatformRWLock *SRWLock;
  TSharedPtr<IDNAReader,1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char *_Str;
  bool bVar5;
  undefined1 uVar6;
  StatusCode *pSVar7;
  size_t sVar8;
  FString *pFVar9;
  TSharedPtr<IDNAReader,1> *pTVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_1c8 [32];
  FLLMScope local_198 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_190;
  FMemScope local_180;
  FString local_178;
  TSharedPtr<IDNAReader,1> local_168;
  StatusCode local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name281,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_198,LLMScope_Name281,false,None,Default,true);
  FMemScope::FMemScope(&local_180,&LLMScope_Name281,true);
  bVar5 = sc::Status::isOk();
  if ((!bVar5) && (2 < (byte)LogDNAAsset._0_1_)) {
    pSVar7 = sc::Status::get(&local_158);
    _Str = pSVar7->message;
    local_148._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_148.Ptr = (wchar_t *)0x0;
      local_148.StringLength = 0;
    }
    else {
      sVar8 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,_Str,(int)sVar8,Yes);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDNAAsset);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  pFVar9 = FPaths::GetCleanFilename(&local_178,param_1);
  pFVar1 = &this->DnaFileName;
  if (pFVar1 != pFVar9) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DnaFileName).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (this->DnaFileName).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  bVar5 = FPaths::FileExists(param_1);
  if (bVar5) {
    local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.ArrayNum = 0;
    local_190.ArrayMax = 0;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar5 = FFileHelper::LoadFileToArray(&local_190,pwVar11,0);
    if (bVar5) {
      SRWLock = &this->DNAUpdateLock;
      if ((SRWLock == (FPlatformRWLock *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x43,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      pTVar10 = ReadDNAFromBuffer(&local_168,&local_190,0x67,0);
      pTVar2 = &this->BehaviorReader;
      if (pTVar2 != pTVar10) {
        pTVar2->Object = pTVar10->Object;
        pTVar10->Object = (IDNAReader *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->BehaviorReader).SharedReferenceCount,&pTVar10->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      bVar5 = pTVar2->Object != (IDNAReader *)0x0;
      if (bVar5) {
        InvalidateRigRuntimeContext(this);
        InitializeRigRuntimeContext(this);
      }
      if (SRWLock != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
    }
    else {
      if (1 < (byte)LogDNAAsset._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDNAAsset);
      }
      bVar5 = false;
    }
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
  }
  else {
    if (1 < (byte)LogDNAAsset._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDNAAsset);
    }
    bVar5 = false;
  }
  FMemScope::~FMemScope(&local_180);
  FLLMScope::~FLLMScope(local_198);
  return bVar5;
}

// InitializeForRuntimeFrom @ 14a67ae60

void __thiscall UDNAAsset::InitializeForRuntimeFrom(UDNAAsset *this,UDNAAsset *param_1)

{
  FPlatformRWLock *SRWLock;
  FPlatformRWLock *SRWLock_00;
  FPlatformRWLock *SRWLock_01;
  TSharedPtr<FSharedRigRuntimeContext,1> *pTVar1;
  TMap<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>_>
  *this_00;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  IDNAReader *pIVar4;
  code *pcVar5;
  bool bVar6;
  TSharedPtr<FSharedRigRuntimeContext,1> *pTVar7;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<FSharedRigRuntimeContext,1> local_38;
  IDNAReader *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  SRWLock = &this->DNAUpdateLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  SRWLock_00 = &this->RigRuntimeContextUpdateLock;
  if ((SRWLock_00 == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
  SRWLock_01 = &this->DNAIndexMappingUpdateLock;
  if ((SRWLock_01 == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock_01);
  pTVar7 = GetRigRuntimeContext(param_1,&local_38);
  pTVar1 = &this->RigRuntimeContext;
  if (pTVar1 != pTVar7) {
    pTVar1->Object = pTVar7->Object;
    pTVar7->Object = (FSharedRigRuntimeContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RigRuntimeContext).SharedReferenceCount,&pTVar7->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if ((pTVar1->Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar3 = (pTVar1->Object->BehaviorReader).SharedReferenceCount.ReferenceController;
  pIVar4 = (pTVar1->Object->BehaviorReader).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = (this->BehaviorReader).Object;
  pTStack_20 = (this->BehaviorReader).SharedReferenceCount.ReferenceController;
  (this->BehaviorReader).Object = pIVar4;
  (this->BehaviorReader).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  this_00 = &this->DNAIndexMappingContainer;
  this->bKeepDNAAfterInitialization = param_1->bKeepDNAAfterInitialization;
  bVar6 = *(int *)&(this->DNAIndexMappingContainer).field_0x48 != 1;
  if (!bVar6) {
    TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->DNAIndexMappingContainer).field_0x8);
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x8 = 0;
  if (*(int *)&(this->DNAIndexMappingContainer).field_0xc != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,1,(ForAnyElementType *)this_00,0,
               (int *)&(this->DNAIndexMappingContainer).field_0xc);
  }
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x34 = 0;
  iVar2 = *(int *)&(this->DNAIndexMappingContainer).field_0x2c;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x28 = 0;
  if ((iVar2 < 0x20) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DNAIndexMappingContainer).field_0x10,
               0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x48 = 1;
    TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  ::FString::Empty(&this->DnaFileName);
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->GeometryReader != (TSharedPtr<IDNAReader,1> *)&local_48) {
    (this->GeometryReader).Object = (IDNAReader *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GeometryReader).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  if (SRWLock_01 != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_01);
  }
  if (SRWLock_00 != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// InitializeRigRuntimeContext @ 14a67b790

void __thiscall UDNAAsset::InitializeRigRuntimeContext(UDNAAsset *this)

{
  TSharedPtr<IDNAReader,1> *this_00;
  FPlatformRWLock *SRWLock;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  TReferenceControllerBase<1> *pTVar5;
  TIntrusiveReferenceController<FRigLogic,1> *pTVar6;
  IDNAReader *pIVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSharedRigRuntimeContext *this_01;
  FLLMScope local_res8 [2];
  FDNAReader<RigLogicDNAReader> *local_res10;
  FMemScope local_res18;
  TTypeCompatibleBytes<FRigLogic> *local_1a8;
  FSharedReferencer<1> local_1a0;
  undefined1 local_198 [8];
  undefined **local_190 [4];
  undefined8 *local_170;
  undefined **local_168;
  undefined8 *local_160;
  undefined **local_158;
  undefined8 *local_150;
  TSharedPtr<FMemoryResource,1> local_148;
  undefined ***local_138;
  undefined **local_128;
  undefined **local_118;
  undefined1 *local_110;
  undefined **local_108;
  undefined1 *local_100;
  undefined **local_f8;
  undefined *local_f0;
  undefined **local_e8;
  undefined *local_e0;
  undefined **local_d8;
  undefined *local_d0;
  undefined **local_c8;
  undefined *local_c0;
  undefined1 local_b8 [8];
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_84;
  DefinitionReader local_80;
  undefined4 local_74;
  undefined **local_70;
  undefined1 *local_68;
  undefined1 local_60 [16];
  TReferenceControllerBase<1> *pTStack_50;
  FSharedRigRuntimeContext *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name201,L"Animation/RigLogic");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name201,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name201,true);
  pTVar5 = ::operator_new(0x50);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    this_01 = (FSharedRigRuntimeContext *)&DAT_00000010;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    this_01 = (FSharedRigRuntimeContext *)(pTVar5 + 1);
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSharedRigRuntimeContext___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    if (this_01 == (FSharedRigRuntimeContext *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  this_00 = &this->BehaviorReader;
  pIVar7 = this_00->Object;
  if (pIVar7 == (IDNAReader *)0x0) goto LAB_14a67bd8d;
  sVar4 = (**(code **)(*(longlong *)
                        (&pIVar7->field_0x8 + *(int *)(*(longlong *)&pIVar7->field_0x8 + 4)) + 0xb8)
          )();
  if (sVar4 == 0) goto LAB_14a67bd8d;
  if (this_01 == (FSharedRigRuntimeContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = (this->BehaviorReader).SharedReferenceCount.ReferenceController;
  pIVar7 = this_00->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60._8_8_ = (this_01->BehaviorReader).Object;
  pTStack_50 = (this_01->BehaviorReader).SharedReferenceCount.ReferenceController;
  (this_01->BehaviorReader).Object = pIVar7;
  (this_01->BehaviorReader).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  if (this_00->Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_b8 = (undefined1  [8])
             (**(code **)(*(longlong *)
                           (&this_00->Object->field_0x8 +
                           *(int *)(*(longlong *)&this_00->Object->field_0x8 + 4)) + 8))();
  local_84 = 0;
  local_100 = &RigLogicDNAReader::_vbtable__for__dna__RBFBehaviorReader__;
  local_f0 = &RigLogicDNAReader::_vbtable__for__dna__GeometryReader__;
  local_190[0] = (undefined **)&FDNAReader<RigLogicDNAReader>::_vbtable__for__IRBFBehaviorReader__;
  local_e0 = &RigLogicDNAReader::_vbtable__for__dna__MachineLearnedBehaviorReader__;
  local_190[2] = (undefined **)&FDNAReader<RigLogicDNAReader>::_vbtable__for__IGeometryReader__;
  local_d0 = &RigLogicDNAReader::_vbtable__for__dna__JointBehaviorMetadataReader__;
  local_170 = &FDNAReader<RigLogicDNAReader>::_vbtable__for__IMachineLearnedBehaviorReader__;
  local_c0 = &RigLogicDNAReader::_vbtable__for__dna__TwistSwingBehaviorReader__;
  local_160 = &FDNAReader<RigLogicDNAReader>::_vbtable__for__IJointBehaviorMetadataReader__;
  local_68 = &RigLogicDNAReader::_vbtable__for__dna__BehaviorReader__;
  local_150 = &FDNAReader<RigLogicDNAReader>::_vbtable__for__ITwistSwingBehaviorReader__;
  local_108 = &___7RigLogicDNAReader__6B_;
  local_110 = &FDNAReader<RigLogicDNAReader>::_vbtable__for__IBehaviorReader__;
  local_f8 = &RigLogicDNAReader::_vftable__for__dna__GeometryReader__;
  local_118 = &IBehaviorReader::_vftable__for__IBehaviorReader__;
  local_e8 = &RigLogicDNAReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  local_74 = 0;
  local_d8 = &RigLogicDNAReader::_vftable__for__dna__JointBehaviorMetadataReader__;
  local_c8 = &RigLogicDNAReader::_vftable__for__dna__TwistSwingBehaviorReader__;
  local_80 = (DefinitionReader)&RigLogicDNAReader::_vftable__for__dna__DefinitionReader__;
  local_70 = &RigLogicDNAReader::_vftable__for__dna__BehaviorReader__;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = 0;
  local_8c = 0;
  local_128 = &IBehaviorReader::_vftable__for__IDefinitionReader__;
  IDNAReader::IDNAReader((IDNAReader *)local_198);
  local_198 = (undefined1  [8])&___7__FDNAReader_VRigLogicDNAReader____6B_;
  local_190[1] = &FDNAReader<RigLogicDNAReader>::_vftable__for__IGeometryReader__;
  local_190[3] = &FDNAReader<RigLogicDNAReader>::_vftable__for__IMachineLearnedBehaviorReader__;
  local_168 = &FDNAReader<RigLogicDNAReader>::_vftable__for__IJointBehaviorMetadataReader__;
  local_158 = &FDNAReader<RigLogicDNAReader>::_vftable__for__ITwistSwingBehaviorReader__;
  *(undefined ***)((longlong)local_190 + (longlong)*(int *)((longlong)local_190[0] + 4)) =
       &FDNAReader<RigLogicDNAReader>::_vftable__for__IDefinitionReader__;
  *(undefined ***)((longlong)local_190 + (longlong)*(int *)(local_190[0] + 1)) =
       &FDNAReader<RigLogicDNAReader>::_vftable__for__IBehaviorReader__;
  *(int *)(local_198 + (longlong)*(int *)((longlong)local_190[0] + 4) + 4) =
       *(int *)((longlong)local_190[0] + 4) + -0x68;
  *(int *)(local_198 + (longlong)*(int *)(local_190[0] + 1) + 4) =
       *(int *)(local_190[0] + 1) + -0x78;
  FMemoryResource::SharedInstance(&local_148);
  local_138 = &local_108;
  local_res10 = (FDNAReader<RigLogicDNAReader> *)local_198;
  pTVar6 = SharedPointerInternals::
           NewIntrusiveReferenceController<1,FRigLogic,FDNAReader<RigLogicDNAReader>_*,FRigLogicConfiguration_&>
                     (&local_res10,&this->RigLogicConfiguration);
  local_1a8 = &pTVar6->ObjectStorage;
  if (local_1a8 == (TTypeCompatibleBytes<FRigLogic> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pTVar6 != (TIntrusiveReferenceController<FRigLogic,1> *)0x0) {
    LOCK();
    *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + 1;
    UNLOCK();
  }
  local_1a0.ReferenceController = (TReferenceControllerBase<1> *)pTVar6;
  if (&this_01->RigLogic != (TSharedPtr<FRigLogic,1> *)&local_1a8) {
    (this_01->RigLogic).Object = (FRigLogic *)local_1a8;
    local_1a8 = (TTypeCompatibleBytes<FRigLogic> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this_01->RigLogic).SharedReferenceCount,&local_1a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar6);
  FSharedRigRuntimeContext::CacheVariableJointIndices(this_01);
  if (this_00->Object == (IDNAReader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  sVar4 = (**(code **)(*(longlong *)this_00->Object + 0x60))();
  if (sVar4 == 0) {
    pIVar7 = TSharedPtr<IDNAReader,1>::operator->(this_00);
    sVar4 = (**(code **)(*(longlong *)&pIVar7->field_0x40 + 0x28))(&pIVar7->field_0x40);
    if (sVar4 != 0) goto LAB_14a67bc48;
    pIVar7 = TSharedPtr<IDNAReader,1>::operator->(this_00);
    sVar4 = (*(code *)**(undefined8 **)&pIVar7->field_0x40)(&pIVar7->field_0x40);
    if (sVar4 != 0) goto LAB_14a67bc48;
  }
  else {
LAB_14a67bc48:
    FSharedRigRuntimeContext::CacheInverseNeutralJointRotations(this_01);
  }
  SRWLock = &this->RigRuntimeContextUpdateLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (this->RigRuntimeContext).Object;
  pTStack_40 = (this->RigRuntimeContext).SharedReferenceCount.ReferenceController;
  (this->RigRuntimeContext).Object = this_01;
  (this->RigRuntimeContext).SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  if (this->bKeepDNAAfterInitialization == false) {
    pIVar7 = TSharedPtr<IDNAReader,1>::operator->(this_00);
    iVar1 = *(int *)(*(longlong *)&pIVar7->field_0x8 + 4);
    (**(code **)(*(longlong *)(&pIVar7->field_0x8 + iVar1) + 0x10))
              (&pIVar7->field_0x8 + iVar1,CONCAT71((int7)(int3)((uint)iVar1 >> 8),7));
    pIVar7 = TSharedPtr<IDNAReader,1>::operator->(this_00);
    iVar1 = *(int *)(*(longlong *)&pIVar7->field_0x8 + 4);
    (**(code **)(*(longlong *)(&pIVar7->field_0x8 + iVar1) + 0x10))
              (&pIVar7->field_0x8 + iVar1,CONCAT71((int7)(int3)((uint)iVar1 >> 8),0xb));
    pIVar7 = TSharedPtr<IDNAReader,1>::operator->(this_00);
    (**(code **)(*(longlong *)(&pIVar7->field_0x8 + *(int *)(*(longlong *)&pIVar7->field_0x8 + 4)) +
                0x10))(&pIVar7->field_0x8 + *(int *)(*(longlong *)&pIVar7->field_0x8 + 4),
                       CONCAT71((int7)((ulonglong)*(longlong *)&pIVar7->field_0x8 >> 8),0x23));
    pIVar7 = TSharedPtr<IDNAReader,1>::operator->(this_00);
    iVar1 = *(int *)(*(longlong *)&pIVar7->field_0x8 + 4);
    (**(code **)(*(longlong *)(&pIVar7->field_0x8 + iVar1) + 0x10))
              (&pIVar7->field_0x8 + iVar1,CONCAT71((int7)(int3)((uint)iVar1 >> 8),0x47));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  dna::Reader::~Reader((Reader *)local_b8);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)local_60);
  dna::DefinitionReader::~DefinitionReader(&local_80);
LAB_14a67bd8d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// InvalidateRigRuntimeContext @ 14a67c220

void __thiscall UDNAAsset::InvalidateRigRuntimeContext(UDNAAsset *this)

{
  FPlatformRWLock *SRWLock;
  FPlatformRWLock *SRWLock_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TMap<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>_>
  *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  SRWLock = &this->RigRuntimeContextUpdateLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  SRWLock_00 = &this->DNAIndexMappingUpdateLock;
  if ((SRWLock_00 == (FPlatformRWLock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->RigRuntimeContext != (TSharedPtr<FSharedRigRuntimeContext,1> *)&local_18) {
    (this->RigRuntimeContext).Object = (FSharedRigRuntimeContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RigRuntimeContext).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this_00 = &this->DNAIndexMappingContainer;
  bVar3 = *(int *)&(this->DNAIndexMappingContainer).field_0x48 != 1;
  if (!bVar3) {
    TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->DNAIndexMappingContainer).field_0x8);
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x8 = 0;
  if (*(int *)&(this->DNAIndexMappingContainer).field_0xc != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,1,(ForAnyElementType *)this_00,0,
               (int *)&(this->DNAIndexMappingContainer).field_0xc);
  }
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x34 = 0;
  iVar1 = *(int *)&(this->DNAIndexMappingContainer).field_0x2c;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x28 = 0;
  if ((iVar1 < 0x20) || (0x80 < iVar1)) {
    *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DNAIndexMappingContainer).field_0x10,
               0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x48 = 1;
    TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>,TDefaultMapHashableKeyFuncs<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if (SRWLock_00 != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// Serialize @ 14a681ce0

void __thiscall UDNAAsset::Serialize(UDNAAsset *this,FArchive *param_1)

{
  FPlatformRWLock *SRWLock;
  MemoryResource *pMVar1;
  FMemoryResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<IDNAReader,1> *pTVar6;
  TSharedPtr<FMemoryResource,1> *pTVar7;
  BinaryStreamWriter *pBVar8;
  undefined8 uVar9;
  IDNAReader *pIVar10;
  IDNAReader *pIVar11;
  IDNAReader *pIVar12;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_208;
  TSharedPtr<IDNAReader,1> local_1f8;
  undefined **local_1e8;
  undefined **local_1e0;
  undefined **local_1d8;
  undefined **local_1d0;
  undefined **local_1c8;
  undefined **local_1c0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_1b8;
  undefined8 local_1b0;
  undefined **local_1a8;
  undefined **local_1a0;
  undefined **local_198;
  undefined **local_190;
  undefined **local_188;
  undefined **local_180;
  FArchive *local_178;
  undefined8 local_170;
  undefined **local_168;
  undefined **local_160;
  undefined **local_158;
  undefined **local_150;
  undefined **local_148;
  undefined **local_140;
  FArchive *local_138;
  undefined8 local_130;
  undefined **local_128;
  undefined **local_120;
  undefined **local_118;
  undefined **local_110;
  undefined **local_108;
  undefined **local_100;
  FArchive *local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined **local_e0;
  undefined **local_d8;
  undefined **local_d0;
  undefined **local_c8;
  undefined **local_c0;
  FArchive *local_b8;
  undefined8 local_b0;
  TSharedPtr<IDNAReader,1> local_a8;
  TSharedPtr<IDNAReader,1> local_98;
  TSharedPtr<FMemoryResource,1> local_88;
  TSharedPtr<FMemoryResource,1> local_78;
  TSharedPtr<FMemoryResource,1> local_68;
  TSharedPtr<FMemoryResource,1> local_58;
  TSharedPtr<FMemoryResource,1> local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name347,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name347,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name347,true);
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FDNAAssetCustomVersion::GUID);
  SRWLock = &this->DNAUpdateLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDNAAssetCustomVersion::GUID);
  if (-1 < iVar5) {
    if ((param_1->field_0x28 & 1) != 0) {
      local_150 = &FArchiveMemoryStream::_vftable__for__trio__Writable__;
      local_148 = &FArchiveMemoryStream::_vftable__for__trio__Seekable__;
      local_168 = &FArchiveMemoryStream::_vftable__for__trio__Openable__;
      local_160 = &FArchiveMemoryStream::_vftable__for__trio__Closeable__;
      local_158 = &FArchiveMemoryStream::_vftable__for__trio__Readable__;
      local_140 = &FArchiveMemoryStream::_vftable__for__trio__Bounded__;
      local_138 = param_1;
      local_130 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      pTVar6 = ReadDNAFromStream(&local_a8,(BoundedIOStream *)&local_168,0x67,0);
      if (&this->BehaviorReader != pTVar6) {
        (this->BehaviorReader).Object = pTVar6->Object;
        pTVar6->Object = (IDNAReader *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->BehaviorReader).SharedReferenceCount,&pTVar6->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      local_1a8 = &FArchiveMemoryStream::_vftable__for__trio__Openable__;
      local_190 = &FArchiveMemoryStream::_vftable__for__trio__Writable__;
      local_1a0 = &FArchiveMemoryStream::_vftable__for__trio__Closeable__;
      local_188 = &FArchiveMemoryStream::_vftable__for__trio__Seekable__;
      local_180 = &FArchiveMemoryStream::_vftable__for__trio__Bounded__;
      local_198 = &FArchiveMemoryStream::_vftable__for__trio__Readable__;
      local_178 = param_1;
      local_170 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      ReadDNAFromStream(&local_98,(BoundedIOStream *)&local_1a8,Geometry,0);
      InvalidateRigRuntimeContext(this);
      InitializeRigRuntimeContext(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      trio::BoundedIOStream::~BoundedIOStream((BoundedIOStream *)&local_1a8);
      trio::BoundedIOStream::~BoundedIOStream((BoundedIOStream *)&local_168);
    }
    if ((param_1->field_0x28 & 4) != 0) {
      local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.ArrayNum = 0;
      local_208.ArrayMax = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x1000,&local_208.AllocatorInstance,0,&local_208.ArrayMax);
      local_1e8 = &FRigLogicMemoryStream::_vftable__for__trio__Openable__;
      local_1b0 = 0;
      local_1e0 = &FRigLogicMemoryStream::_vftable__for__trio__Closeable__;
      local_1d8 = &FRigLogicMemoryStream::_vftable__for__trio__Readable__;
      local_1d0 = &FRigLogicMemoryStream::_vftable__for__trio__Writable__;
      local_1c8 = &FRigLogicMemoryStream::_vftable__for__trio__Seekable__;
      local_1c0 = &FRigLogicMemoryStream::_vftable__for__trio__Bounded__;
      local_1b8 = &local_208;
      pTVar7 = FMemoryResource::SharedInstance(&local_88);
      pMVar1 = (MemoryResource *)pTVar7->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      pBVar8 = dna::BinaryStreamWriter::create((BoundedIOStream *)&local_1e8,pMVar1);
      (**(code **)(*(longlong *)pBVar8 + 0xd0))(pBVar8);
      dna::BinaryStreamWriter::destroy(pBVar8);
      local_1b0 = 0;
      ReadDNAFromBuffer(&local_1f8,&local_208,All,0);
      trio::BoundedIOStream::~BoundedIOStream((BoundedIOStream *)&local_1e8);
      if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.AllocatorInstance.Data);
      }
      pIVar10 = local_1f8.Object;
      pIVar12 = (this->BehaviorReader).Object;
      local_e8 = &FArchiveMemoryStream::_vftable__for__trio__Openable__;
      pIVar11 = local_1f8.Object;
      if (pIVar12 != (IDNAReader *)0x0) {
        pIVar11 = pIVar12;
      }
      local_e0 = &FArchiveMemoryStream::_vftable__for__trio__Closeable__;
      local_d8 = &FArchiveMemoryStream::_vftable__for__trio__Readable__;
      local_d0 = &FArchiveMemoryStream::_vftable__for__trio__Writable__;
      local_c8 = &FArchiveMemoryStream::_vftable__for__trio__Seekable__;
      local_c0 = &FArchiveMemoryStream::_vftable__for__trio__Bounded__;
      local_b8 = param_1;
      local_b0 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      pTVar7 = FMemoryResource::SharedInstance(&local_78);
      pMVar1 = (MemoryResource *)pTVar7->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      pBVar8 = dna::BinaryStreamWriter::create((BoundedIOStream *)&local_e8,pMVar1);
      if (pIVar11 != (IDNAReader *)0x0) {
        pcVar3 = *(code **)(*(longlong *)pBVar8 + 200);
        pTVar7 = FMemoryResource::SharedInstance(&local_68);
        pFVar2 = pTVar7->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        uVar9 = (**(code **)(*(longlong *)
                              (&pIVar11->field_0x8 + *(int *)(*(longlong *)&pIVar11->field_0x8 + 4))
                            + 8))();
        (*pcVar3)(pBVar8,uVar9,0x1e7,0,pFVar2);
        pIVar10 = local_1f8.Object;
      }
      (**(code **)(*(longlong *)pBVar8 + 0xd0))(pBVar8);
      dna::BinaryStreamWriter::destroy(pBVar8);
      pIVar12 = (this->GeometryReader).Object;
      if ((pIVar12 == (IDNAReader *)0x0) ||
         ((*(longlong *)&param_1->field_0x68 != 0 &&
          (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)))) {
        pIVar12 = pIVar10;
      }
      local_128 = &FArchiveMemoryStream::_vftable__for__trio__Openable__;
      local_120 = &FArchiveMemoryStream::_vftable__for__trio__Closeable__;
      local_118 = &FArchiveMemoryStream::_vftable__for__trio__Readable__;
      local_110 = &FArchiveMemoryStream::_vftable__for__trio__Writable__;
      local_108 = &FArchiveMemoryStream::_vftable__for__trio__Seekable__;
      local_100 = &FArchiveMemoryStream::_vftable__for__trio__Bounded__;
      local_f8 = param_1;
      local_f0 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      pTVar7 = FMemoryResource::SharedInstance(&local_58);
      pMVar1 = (MemoryResource *)pTVar7->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      pBVar8 = dna::BinaryStreamWriter::create((BoundedIOStream *)&local_128,pMVar1);
      if (pIVar12 != (IDNAReader *)0x0) {
        pcVar3 = *(code **)(*(longlong *)pBVar8 + 200);
        pTVar7 = FMemoryResource::SharedInstance(&local_48);
        pFVar2 = pTVar7->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        uVar9 = (**(code **)(*(longlong *)
                              (&pIVar12->field_0x8 + *(int *)(*(longlong *)&pIVar12->field_0x8 + 4))
                            + 8))();
        (*pcVar3)(pBVar8,uVar9,0xb,0,pFVar2);
      }
      (**(code **)(*(longlong *)pBVar8 + 0xd0))(pBVar8);
      dna::BinaryStreamWriter::destroy(pBVar8);
      trio::BoundedIOStream::~BoundedIOStream((BoundedIOStream *)&local_128);
      trio::BoundedIOStream::~BoundedIOStream((BoundedIOStream *)&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.SharedReferenceCount.ReferenceController);
    }
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Serialize @ 14a682300

void __thiscall UDNAAsset::Serialize(UDNAAsset *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetBehaviorReader @ 14a682330

void __thiscall UDNAAsset::SetBehaviorReader(UDNAAsset *this,TSharedPtr<IDNAReader,1> *param_1)

{
  FPlatformRWLock *SRWLock;
  IDNAReader *pIVar1;
  MemoryResource *pMVar2;
  FMemoryResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  short sVar6;
  TSharedPtr<FMemoryResource,1> *pTVar7;
  BinaryStreamWriter *pBVar8;
  undefined8 uVar9;
  int iVar10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_a8;
  TSharedPtr<IDNAReader,1> local_98;
  TSharedPtr<FMemoryResource,1> local_88;
  TSharedPtr<FMemoryResource,1> local_78;
  undefined **local_68;
  undefined **local_60;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  undefined **local_40;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  
  SRWLock = &this->DNAUpdateLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (param_1->Object == (IDNAReader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  sVar6 = (**(code **)(*(longlong *)&param_1->Object->field_0x20 + 0x10))();
  pIVar1 = param_1->Object;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  iVar10 = 0x500000;
  if (sVar6 != 0) {
    iVar10 = 0xa00000;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar10,&local_a8.AllocatorInstance,0,&local_a8.ArrayMax);
  local_30 = 0;
  local_68 = &FRigLogicMemoryStream::_vftable__for__trio__Openable__;
  local_60 = &FRigLogicMemoryStream::_vftable__for__trio__Closeable__;
  local_58 = &FRigLogicMemoryStream::_vftable__for__trio__Readable__;
  local_50 = &FRigLogicMemoryStream::_vftable__for__trio__Writable__;
  local_48 = &FRigLogicMemoryStream::_vftable__for__trio__Seekable__;
  local_40 = &FRigLogicMemoryStream::_vftable__for__trio__Bounded__;
  local_38 = &local_a8;
  pTVar7 = FMemoryResource::SharedInstance(&local_88);
  pMVar2 = (MemoryResource *)pTVar7->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  pBVar8 = dna::BinaryStreamWriter::create((BoundedIOStream *)&local_68,pMVar2);
  if (pIVar1 != (IDNAReader *)0x0) {
    pcVar4 = *(code **)(*(longlong *)pBVar8 + 200);
    pTVar7 = FMemoryResource::SharedInstance(&local_78);
    pFVar3 = pTVar7->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    uVar9 = (**(code **)(*(longlong *)
                          (&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 4)) + 8))
                      ();
    (*pcVar4)(pBVar8,uVar9,0x1e7,0,pFVar3);
  }
  (**(code **)(*(longlong *)pBVar8 + 0xd0))(pBVar8);
  dna::BinaryStreamWriter::destroy(pBVar8);
  local_30 = 0;
  ReadDNAFromBuffer(&local_98,&local_a8,0x67,0);
  trio::BoundedIOStream::~BoundedIOStream((BoundedIOStream *)&local_68);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (&this->BehaviorReader != &local_98) {
    (this->BehaviorReader).Object = local_98.Object;
    local_98.Object = (IDNAReader *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BehaviorReader).SharedReferenceCount,&local_98.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  InvalidateRigRuntimeContext(this);
  InitializeRigRuntimeContext(this);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetGeometryReader @ 14a6827b0

void __thiscall UDNAAsset::SetGeometryReader(UDNAAsset *this,TSharedPtr<IDNAReader,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUDNAAsset @ 14a683040

void __cdecl UDNAAsset::StaticRegisterNativesUDNAAsset(void)

{
  return;
}

