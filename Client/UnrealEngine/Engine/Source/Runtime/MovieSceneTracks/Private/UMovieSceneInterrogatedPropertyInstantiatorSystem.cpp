// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 17

// StaticClass @ 14658f8c0

UClass * __cdecl UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneInterrogatedPropertyInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.
                InnerSingleton,
               StaticRegisterNativesUMovieSceneInterrogatedPropertyInstantiatorSystem,0x210,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneInterrogatedPropertyInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneInterrogatedPropertyInstantiatorSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.InnerSingleton
  ;
}

// UMovieSceneInterrogatedPropertyInstantiatorSystem @ 14661b3a0

UMovieSceneInterrogatedPropertyInstantiatorSystem * __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::UMovieSceneInterrogatedPropertyInstantiatorSystem
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneInterrogatedPropertyInstantiatorSystem__6B_;
  UE::MovieScene::
  TOverlappingEntityTracker_NoGarbage<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
  ::
  TOverlappingEntityTracker_NoGarbage<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
            (&this->PropertyTracker);
  (this->CleanFastPathMask).Bits.MaxBits = 0x180;
  (this->CleanFastPathMask).Bits.NumBits = 0;
  *(undefined8 *)&(this->RecomposerImpl).OnGetPropertyInfo = 0;
  *(undefined8 *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8 = 0;
  *(undefined4 *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x10 = 0;
  return this;
}

// UMovieSceneInterrogatedPropertyInstantiatorSystem @ 14661b400

UMovieSceneInterrogatedPropertyInstantiatorSystem * __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::UMovieSceneInterrogatedPropertyInstantiatorSystem
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  void *pvVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  int iVar4;
  FBuiltInComponentTypes *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UMovieSceneInterrogatedPropertyInstantiatorSystem *local_res8;
  UObject *local_res18 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneInterrogatedPropertyInstantiatorSystem__6B_;
  UE::MovieScene::
  TOverlappingEntityTracker_NoGarbage<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
  ::
  TOverlappingEntityTracker_NoGarbage<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
            (&this->PropertyTracker);
  (this->CleanFastPathMask).Bits.MaxBits = 0x180;
  (this->CleanFastPathMask).Bits.NumBits = 0;
  *(undefined8 *)&(this->RecomposerImpl).OnGetPropertyInfo = 0;
  *(undefined8 *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8 = 0;
  *(undefined4 *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x10 = 0;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  this->BuiltInComponents = pFVar5;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  local_48 = &local_70;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_23_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMovieSceneInterrogatedPropertyInstantiatorSystem____A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_34_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
    puVar6[4] = FindPropertyFromSource;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  iVar4 = local_70.DelegateSize;
  FVar3 = local_70.DelegateAllocator;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->RecomposerImpl,
             (FWriteAccessScope *)&local_60);
  if ((*(int *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x10 != 0) &&
     (puVar6 = *(undefined8 **)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8,
     puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8,0,0,0x10);
    *(undefined4 *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x10 = 0;
  }
  pvVar2 = *(void **)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8 =
       FVar3;
  *(int *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x10 = iVar4;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  pvVar2 = ThreadLocalStoragePointer;
  *(TComponentTypeID<UE::MovieScene::FInterrogationKey> *)&this->_padding_ =
       (this->BuiltInComponents->Interrogation).InputKey;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Interrogation = UMovieSceneEntitySystem::RegisterCustomSystemCategory();
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(EEntitySystemCategory *)&this->_padding_ =
       (EEntitySystemCategory)this->_padding_ | Interrogation;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UMovieSceneInterrogatedPropertyInstantiatorSystem *)this->_padding_;
    FVar1.Value = *(ushort *)&this->BuiltInComponents->BlendChannelInput;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8 != (UMovieSceneInterrogatedPropertyInstantiatorSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UMovieSceneInterrogatedPropertyInstantiatorSystem *)this->_padding_;
    FVar1.Value = (this->BuiltInComponents->SymbolicTags).CreatesEntities.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8 != (UMovieSceneInterrogatedPropertyInstantiatorSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UMovieSceneInterrogatedPropertyInstantiatorSystem *)
                 Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8 != (UMovieSceneInterrogatedPropertyInstantiatorSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  UE::MovieScene::FComponentMask::Set
            (&this->CleanFastPathMask,
             (FComponentTypeID)*(ushort *)&(this->BuiltInComponents->Interrogation).OutputKey);
  return this;
}

// ~UMovieSceneInterrogatedPropertyInstantiatorSystem @ 146621c90

void __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::
~UMovieSceneInterrogatedPropertyInstantiatorSystem
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneInterrogatedPropertyInstantiatorSystem__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RecomposerImpl);
  UE::MovieScene::
  TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
  ::
  ~TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
            ((TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
              *)&this->PropertyTracker);
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// DestroyOutput @ 146659f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::DestroyOutput
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,FInterrogationKey param_1,
          FPropertyInfo *param_2,FEntityOutputAggregate param_3)

{
  ushort uVar1;
  FMovieSceneBlenderSystemID FVar2;
  UMovieSceneBlenderSystem *this_00;
  undefined7 extraout_var;
  FMovieSceneBlendChannelID local_res18;
  
  if (param_2->BlendChannel != 0xffff) {
    this_00 = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
    if (this_00 != (UMovieSceneBlenderSystem *)0x0) {
      uVar1 = param_2->BlendChannel;
      FVar2 = UMovieSceneBlenderSystem::GetBlenderSystemID(this_00);
      local_res18.SystemID.Value = *(undefined1 *)CONCAT71(extraout_var,FVar2.Value);
      local_res18.ChannelID = uVar1;
      UMovieSceneBlenderSystem::ReleaseBlendChannel(this_00,local_res18);
    }
    UE::MovieScene::FEntityManager::AddComponents
              ((FEntityManager *)(this->_padding_ + 0x28),
               (FMovieSceneEntityID)(param_2->PropertyEntityID).Value,
               &this->BuiltInComponents->FinishedMask);
  }
  return;
}

// FindPropertyFromSource @ 146672570

FPropertyRecomposerPropertyInfo * __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::FindPropertyFromSource
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,
          FPropertyRecomposerPropertyInfo *__return_storage_ptr__,FMovieSceneEntityID param_1,
          UObject *param_2)

{
  FPropertyInfo *this_00;
  UMovieSceneBlenderSystem *pUVar1;
  undefined6 uStack_26;
  undefined6 uStack_16;
  
  this_00 = UE::MovieScene::
            TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
            ::FindOutput((TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
                          *)&this->PropertyTracker,param_1);
  if (this_00 != (FPropertyInfo *)0x0) {
    __return_storage_ptr__->BlendChannel = this_00->BlendChannel;
    pUVar1 = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    __return_storage_ptr__->BlenderSystem = pUVar1;
    (__return_storage_ptr__->PropertyEntityID).Value = (this_00->PropertyEntityID).Value;
    return __return_storage_ptr__;
  }
  *(ulonglong *)__return_storage_ptr__ = CONCAT62(uStack_26,0xffff);
  __return_storage_ptr__->BlenderSystem = (UMovieSceneBlenderSystem *)0x0;
  *(ulonglong *)&__return_storage_ptr__->PropertyEntityID = CONCAT62(uStack_16,0xffff);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1466967b0

UClass * __cdecl UMovieSceneInterrogatedPropertyInstantiatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneInterrogatedPropertyInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.
                InnerSingleton,
               StaticRegisterNativesUMovieSceneInterrogatedPropertyInstantiatorSystem,0x210,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneInterrogatedPropertyInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneInterrogatedPropertyInstantiatorSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.InnerSingleton
  ;
}

// InitializeOutput @ 1466a37c0

void __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::InitializeOutput
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,FInterrogationKey param_1,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_2,FPropertyInfo *param_3
          ,FEntityOutputAggregate param_4)

{
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  UpdateOutput(this,param_1,&local_18,param_3,param_4);
  return;
}

// IsRelevantImpl @ 1466a5c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::IsRelevantImpl
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,
          UMovieSceneEntitySystemLinker *param_1)

{
  bool bVar1;
  undefined1 auStack_d8 [32];
  FComponentTypeID local_b8;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> local_b6;
  FComponentTypeID local_b4 [6];
  initializer_list<UE::MovieScene::FComponentTypeID> local_a8;
  FEntityComponentFilter local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_98.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ComplexMasks.ArrayNum = 0;
  local_98.ComplexMasks.ArrayMax = 0;
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_98.AllMask.Bits.NumBits = 0;
  local_98.AllMask.Bits.MaxBits = 0x180;
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_98.NoneMask.Bits.NumBits = 0;
  local_98.NoneMask.Bits.MaxBits = 0x180;
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_b8.Value = *(ushort *)&this->BuiltInComponents->PropertyBinding;
  local_b6 = (this->BuiltInComponents->Interrogation).InputKey;
  local_a8._First = &local_b8;
  local_a8._Last = local_b4;
  UE::MovieScene::FComponentMask::SetAll(&local_98.AllMask,&local_a8);
  bVar1 = UE::MovieScene::FEntityManager::Contains(&param_1->EntityManager,&local_98);
  if (local_98.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ComplexMasks.AllocatorInstance.Data);
  }
  return bVar1;
}

// OnRun @ 1466aa900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::OnRun
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,FSystemTaskPrerequisites *param_1
          ,FSystemSubsequentTasks *param_2)

{
  int iVar1;
  FPropertyDefinition *pFVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  FEntityAllocation *pFVar6;
  FComponentHeader *pFVar7;
  FEntityManager *this_00;
  FEntityAllocation *pFVar8;
  FComponentTypeID *pFVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_3b8 [32];
  FComponentTypeID local_398;
  FComponentTypeID local_396;
  FComponentTypeID local_394;
  ushort local_392;
  FEntityAllocationIteratorProxy local_390;
  FEntityAllocationIterator local_380;
  undefined8 local_368;
  undefined8 uStack_360;
  TStatIdData *local_358;
  byte bStack_350;
  undefined7 uStack_34f;
  undefined4 local_348;
  uint uStack_344;
  undefined8 local_338;
  TStatIdData *pTStack_330;
  byte local_328;
  undefined7 uStack_327;
  undefined4 uStack_320;
  uint uStack_31c;
  FPropertyDefinition *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_308;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2f8;
  FEntityAllocationProxy local_2e8;
  FEntityAllocationIterator local_2d8;
  FEntityAllocationWriteContext local_2c0;
  <lambda_1> local_2b8;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> local_2a0;
  undefined6 uStack_29e;
  undefined8 uStack_298;
  TStatIdData *pTStack_290;
  ulonglong uStack_288;
  undefined8 uStack_280;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>_>
  local_278;
  FEntityComponentFilter local_250;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_158;
  undefined8 uStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  (this->PropertyTracker).field_0x168 = 1;
  iVar1 = (this->BuiltInComponents->PropertyRegistry).Properties.ArrayNum;
  pFVar2 = (FPropertyDefinition *)
           (this->BuiltInComponents->PropertyRegistry).Properties.AllocatorInstance.Data;
  local_318 = pFVar2;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_2b8.AllProperties._12_4_ = uStack_30c;
  local_2b8.AllProperties.ArrayNum = iVar1;
  local_2a0 = (this->BuiltInComponents->Interrogation).InputKey;
  local_398.Value = (this->BuiltInComponents->Tags).NeedsLink.Value;
  local_2b8.AllProperties.DataPtr = local_318;
  local_338 = 0;
  pTStack_330 = &TStatId::TStatId_NAME_None;
  uStack_320 = 0x6ff;
  uStack_31c = uStack_31c & 0xffffff00;
  uStack_288 = CONCAT71(uStack_327,local_328) & 0xffffffffffffffe0;
  uStack_280._4_4_ = uStack_31c;
  uStack_280._0_4_ = AnyHiPriThreadHiPriTask;
  uStack_298 = 0;
  pTStack_290 = &TStatId::TStatId_NAME_None;
  local_278._2_6_ = uStack_29e;
  local_278.Accessors =
       (TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>_>)local_2a0;
  local_250.AllMask.Bits.NumBits = 0;
  local_250.AllMask.Bits.MaxBits = 0x180;
  local_250.NoneMask.Bits.NumBits = 0;
  local_278.CommonParams.TaskParams.DebugName = (wchar_t *)0x0;
  local_278.CommonParams.TaskParams.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
  local_250.NoneMask.Bits.MaxBits = 0x180;
  local_250.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ComplexMasks.ArrayNum = 0;
  local_250.ComplexMasks.ArrayMax = 0;
  local_1a0 = 0;
  local_19c = 0x180;
  local_168 = 0;
  local_164 = 0x180;
  local_328 = local_328 & 0xe0;
  iStack_310 = iVar1;
  local_2b8.__this = this;
  local_278.CommonParams.TaskParams._16_8_ = uStack_288;
  local_278.CommonParams._24_8_ = uStack_280;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)&local_278,&local_250);
  local_308._First = &local_398;
  local_308._Last = &local_396;
  UE::MovieScene::FComponentMask::SetAll(&local_250.AllMask,&local_308);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>_>
  ::
  Iterate_PerAllocationImpl<_UMovieSceneInterrogatedPropertyInstantiatorSystem::OnRun_::__l3::<lambda_1>_&>
            (&local_278,(FEntityManager *)(this->_padding_ + 0x28),&local_250,&local_2b8);
  if (local_250.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.ComplexMasks.AllocatorInstance.Data);
  }
  uStack_360 = 0;
  local_394.Value = *(ushort *)&(this->BuiltInComponents->Interrogation).InputKey;
  local_392 = (this->BuiltInComponents->Tags).NeedsUnlink.Value;
  local_2f8._First = &local_394;
  local_2f8._Last = (FComponentTypeID *)&local_390;
  local_158 = local_368;
  uStack_150 = 0;
  local_358 = &TStatId::TStatId_NAME_None;
  uStack_140 = CONCAT71(uStack_34f,bStack_350) & 0xffffffffffffffe0;
  local_348 = 0x6ff;
  uStack_344 = uStack_344 & 0xffffff00;
  local_138 = CONCAT44(uStack_344,0x6ff);
  local_148 = &TStatId::TStatId_NAME_None;
  local_130.AllMask.Bits.NumBits = 0;
  local_130.AllMask.Bits.MaxBits = 0x180;
  local_130.NoneMask.Bits.NumBits = 0;
  local_130.NoneMask.Bits.MaxBits = 0x180;
  local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ComplexMasks.ArrayNum = 0;
  local_130.ComplexMasks.ArrayMax = 0;
  local_80 = 0;
  local_7c = 0x180;
  local_48 = 0;
  local_44 = 0x180;
  bStack_350 = bStack_350 & 0xe0;
  UE::MovieScene::FComponentMask::SetAll(&local_130.AllMask,&local_2f8);
  this_00 = (FEntityManager *)(this->_padding_ + 0x28);
  UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_2c0,this_00);
  EVar5 = UE::MovieScene::FEntityManager::GetThreadingModel(this_00);
  UE::MovieScene::FEntityManager::Iterate(this_00,&local_390,&local_130);
  UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
            (&local_380,local_390.Manager,local_390.Filter);
  UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator(&local_2d8,local_390.Manager)
  ;
  bVar4 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_380,&local_2d8);
  if (bVar4) {
    do {
      pFVar8 = (FEntityAllocation *)0x0;
      UE::MovieScene::FEntityAllocationIterator::operator*(&local_380,&local_2e8);
      pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_2e8);
      if (EVar5 == NoThreading) {
        pFVar6->LockMode = LockFree;
        pFVar8 = pFVar6;
      }
      pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_2e8);
      iVar11 = 0;
      lVar10 = 0;
      if (0 < (longlong)iVar1) {
        pFVar9 = &pFVar2->PropertyType;
        do {
          for (pFVar7 = pFVar6->ComponentHeaders;
              pFVar7 != pFVar6->ComponentHeaders + pFVar6->NumComponents; pFVar7 = pFVar7 + 1) {
            if ((pFVar7->ComponentType).Value == pFVar9->Value) {
              if (iVar11 != -1) {
                UE::MovieScene::
                TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
                ::VisitUnlinkedAllocationImpl
                          ((TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
                            *)&this->PropertyTracker,pFVar6);
              }
              goto LAB_1466aac72;
            }
          }
          iVar11 = iVar11 + 1;
          lVar10 = lVar10 + 1;
          pFVar9 = pFVar9 + 0x38;
        } while (lVar10 < iVar1);
      }
LAB_1466aac72:
      if (pFVar8 != (FEntityAllocation *)0x0) {
        pFVar8->LockMode = Mutex;
      }
      UE::MovieScene::FEntityAllocationIterator::operator++(&local_380);
      bVar4 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_380,&local_2d8);
    } while (bVar4);
  }
  UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_2d8);
  UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_380);
  if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
  }
  UE::MovieScene::
  TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
  ::ProcessInvalidatedOutputs<UMovieSceneInterrogatedPropertyInstantiatorSystem_&>
            ((TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
              *)&this->PropertyTracker,(UMovieSceneEntitySystemLinker *)this->_padding_,this);
  return;
}

// PropertySupportsFastPath @ 1466b3820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::PropertySupportsFastPath
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_1,FPropertyInfo *param_2
          )

{
  FMovieSceneEntityID *pFVar1;
  ushort uVar2;
  TComponentTypeID<double> TVar3;
  bool bVar4;
  TBitArray<TFixedAllocator<12>_> *pTVar5;
  FMovieSceneEntityID *pFVar6;
  undefined1 auStack_98 [32];
  TBitArray<TFixedAllocator<12>_> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((param_2->BlendChannel == 0xffff) && ((param_2->PropertyEntityID).Value == 0xffff)) &&
     (param_1->ArrayNum < 2)) {
    pFVar6 = param_1->DataPtr;
    pFVar1 = pFVar6 + param_1->ArrayNum;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 1) {
      pTVar5 = &UE::MovieScene::FEntityManager::GetEntityType
                          ((FEntityManager *)(this->_padding_ + 0x28),
                           (FMovieSceneEntityID)pFVar6->Value)->Bits;
      local_78.NumBits = 0;
      local_78.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_78,pTVar5);
      uVar2 = (this->BuiltInComponents->Tags).RelativeBlend.Value;
      if (((uVar2 != 0xffff) && ((int)(uint)uVar2 < local_78.NumBits)) &&
         ((*(uint *)local_78.AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1) !=
          0)) goto LAB_1466b399e;
      uVar2 = (this->BuiltInComponents->Tags).AdditiveBlend.Value;
      if (((uVar2 != 0xffff) && ((int)(uint)uVar2 < local_78.NumBits)) &&
         ((*(uint *)local_78.AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1) !=
          0)) goto LAB_1466b399e;
      uVar2 = (this->BuiltInComponents->Tags).OverrideBlend.Value;
      if (((uVar2 != 0xffff) && ((int)(uint)uVar2 < local_78.NumBits)) &&
         ((*(uint *)local_78.AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1) !=
          0)) goto LAB_1466b399e;
      uVar2 = (this->BuiltInComponents->Tags).AdditiveFromBaseBlend.Value;
      if ((((uVar2 != 0xffff) && ((int)(uint)uVar2 < local_78.NumBits)) &&
          ((*(uint *)local_78.AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1) !=
           0)) || (((TVar3 = this->BuiltInComponents->WeightAndEasingResult,
                    TVar3 != (TComponentTypeID<double>)0xffff &&
                    ((int)(uint)(ushort)TVar3 < local_78.NumBits)) &&
                   ((*(uint *)local_78.AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
                     ((ushort)TVar3 & 0x1f) & 1) != 0)))) goto LAB_1466b399e;
    }
    bVar4 = true;
  }
  else {
LAB_1466b399e:
    bVar4 = false;
  }
  return bVar4;
}

// RecomposeBlendChannel @ 1466c11c0

TRecompositionResult<double> * __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::RecomposeBlendChannel
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,
          TRecompositionResult<double> *__return_storage_ptr__,FPropertyDefinition *param_1,
          int param_2,FDecompositionQuery *param_3,double param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ForElementType<double> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<double> FVar9;
  TRecompositionResult<double> *pTVar10;
  FMovieSceneEntityID *pFVar11;
  FPropertyInfo *this_00;
  UObject *pUVar12;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar13;
  undefined4 uStack_8c;
  ForElementType<double> local_78;
  undefined8 uStack_70;
  FScriptContainerElement *local_68;
  uint uStack_60;
  FMovieSceneEntityID *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  UObject *pUStack_40;
  ushort local_38;
  ushort local_36;
  undefined2 local_34;
  ushort local_32;
  
  iVar3 = (param_3->Entities).ArrayNum;
  (__return_storage_ptr__->Values).AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
  (__return_storage_ptr__->Values).ArrayNum = 0;
  (__return_storage_ptr__->Values).ArrayMax = 1;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    FVar4 = (__return_storage_ptr__->Values).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<double>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<double>)0x0) {
      FVar9 = FVar4;
    }
    if ((ulonglong)FVar9 <= &param_4) {
      FVar9 = (ForElementType<double>)__return_storage_ptr__;
      if (FVar4 != (ForElementType<double>)0x0) {
        FVar9 = FVar4;
      }
      if ((&param_4 <
           (double *)((longlong)FVar9 + (longlong)(__return_storage_ptr__->Values).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TRecompositionResult<double> *)(*pcVar6)();
        return pTVar10;
      }
    }
    iVar8 = (__return_storage_ptr__->Values).ArrayNum;
    if (iVar8 == (__return_storage_ptr__->Values).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                        (0x808,(ForElementType<double> *)__return_storage_ptr__,
                         &(__return_storage_ptr__->Values).ArrayMax);
    }
    (__return_storage_ptr__->Values).ArrayNum = iVar8 + 1;
    FVar4 = (__return_storage_ptr__->Values).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<double>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<double>)0x0) {
      FVar9 = FVar4;
    }
    *(double *)((longlong)FVar9 + (longlong)iVar8 * 8) = param_4;
  }
  if ((param_3->Entities).ArrayNum != 0) {
    pFVar11 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[]
                        (&param_3->Entities,0);
    this_00 = UE::MovieScene::
              TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
              ::FindOutput((TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
                            *)&this->PropertyTracker,(FMovieSceneEntityID)pFVar11->Value);
    if (((this_00 != (FPropertyInfo *)0x0) && (this_00->BlendChannel != 0xffff)) &&
       (pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00), pUVar12 != (UObject *)0x0)) {
      local_32 = (param_1->PropertyType).Value;
      uVar1 = param_1->VariableSizeCompositeOffset;
      local_34 = 0xffff;
      local_58 = (param_3->Entities).DataPtr;
      uStack_50 = *(undefined8 *)&(param_3->Entities).ArrayNum;
      local_48 = *(undefined8 *)&param_3->bConvertFromSourceEntityIDs;
      pUStack_40 = param_3->Object;
      local_36 = (this_00->PropertyEntityID).Value;
      local_38 = this_00->BlendChannel;
      pFVar5 = (this->BuiltInComponents->PropertyRegistry).CompositeDefinitions.AllocatorInstance.
               Data;
      uVar2 = param_1->CompositeSize;
      if (((param_2 < 0) || ((int)(uint)uVar2 <= param_2)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Composites.IsValidIndex(ChannelCompositeIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\EntitySystem\\Interrogation\\MovieSceneInterrogatedPropertyInstantiator.cpp"
                             ,0x5a,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TRecompositionResult<double> *)(*pcVar6)();
        return pTVar10;
      }
      pTVar13 = &param_1->Handler;
      if ((!(param_1->Handler).bIsValid) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TRecompositionResult<double> *)(*pcVar6)();
        return pTVar10;
      }
      if (!(param_1->Handler).bInline) {
        pTVar13 = *(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar13->Data).Pad;
      }
      iVar3 = (__return_storage_ptr__->Values).ArrayNum;
      pcVar6 = *(code **)(*(longlong *)(pTVar13->Data).Pad + 0x48);
      FVar4 = (__return_storage_ptr__->Values).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<double>)__return_storage_ptr__;
      if (FVar4 != (ForElementType<double>)0x0) {
        FVar9 = FVar4;
      }
      if ((iVar3 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TRecompositionResult<double> *)(*pcVar6)();
        return pTVar10;
      }
      uStack_70 = CONCAT44(uStack_8c,iVar3);
      local_78 = FVar9;
      uStack_60 = (uint)uVar2;
      local_68 = pFVar5 + (ulonglong)uVar1 * 4;
      (*pcVar6)(pTVar13,param_1,&local_68,param_2,&local_58,pUVar12,param_4,&local_78);
    }
  }
  return __return_storage_ptr__;
}

// ResolveBlenderClass @ 1466da6a0

/* WARNING: Enum "Type": Some values do not have unique names */

UClass * __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::ResolveBlenderClass
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_2)

{
  ushort uVar1;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> TVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  EEntityThreadingModel EVar8;
  UClass *pUVar9;
  longlong *plVar10;
  FMovieSceneEntityID *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FMovieSceneEntityID *pFVar14;
  ulonglong uVar15;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  undefined2 local_res1c;
  FMovieSceneEntityID *local_res20;
  
  pUVar9 = param_1->BlenderSystemClass;
  pFVar14 = param_2->DataPtr;
  pFVar11 = pFVar14 + param_2->ArrayNum;
  local_res20 = pFVar11;
  if (pFVar14 != pFVar11) {
    do {
      uVar1 = pFVar14->Value;
      lVar12 = this->_padding_;
      TVar2 = this->BuiltInComponents->BlenderType;
      if ((uVar1 == 0xffff) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Entity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                             ,0x1a8,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UClass *)(*pcVar5)();
        return pUVar9;
      }
      if (TVar2 != (TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_>)0xffff) {
        uVar3 = *(uint *)(*(longlong *)(lVar12 + 0xc0) + (ulonglong)uVar1 * 8);
        local_res1c = *(undefined2 *)(*(longlong *)(lVar12 + 0xc0) + 4 + (ulonglong)uVar1 * 8);
        local_res18 = uVar3;
        if ((short)uVar3 != -1) {
          lVar13 = (ulonglong)(uVar3 & 0xffff) * 0x38 + *(longlong *)(lVar12 + 0x30);
          if (((int)(uint)(ushort)TVar2 < *(int *)(lVar13 + 0x30)) &&
             ((*(uint *)(lVar13 + (ulonglong)((ushort)TVar2 >> 5) * 4) >> ((ushort)TVar2 & 0x1f) & 1
              ) != 0)) {
            local_res18._2_2_ = (ushort)(uVar3 >> 0x10);
            uVar15 = (ulonglong)local_res18._2_2_;
            lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x88) + (ulonglong)(uVar3 & 0xffff) * 8);
            EVar8 = UE::MovieScene::FEntityManager::GetThreadingModel
                              ((FEntityManager *)(lVar12 + 0x28));
            lVar12 = *(longlong *)(lVar13 + 0x28);
            bVar7 = EVar8 != NoThreading;
            lVar13 = (ulonglong)*(ushort *)(lVar13 + 0xc) * 0x38 + lVar12;
            for (; pFVar11 = local_res20, lVar12 != lVar13; lVar12 = lVar12 + 0x38) {
              if (*(TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> *)(lVar12 + 0x36) ==
                  TVar2) {
                if (EVar8 != NoThreading) {
                  AcquireSRWLockShared((PSRWLOCK)(lVar12 + 0x20));
                }
                LOCK();
                *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
                UNLOCK();
                plVar10 = (longlong *)(*(longlong *)(lVar12 + 0x18) + uVar15 * 8);
                pFVar11 = local_res20;
                goto LAB_1466da7f5;
              }
            }
          }
        }
      }
      lVar12 = 0;
      bVar7 = false;
      plVar10 = (longlong *)0x0;
LAB_1466da7f5:
      if (plVar10 != (longlong *)0x0) {
        lVar13 = *plVar10;
        if ((lVar13 == 0) ||
           (pUVar9 = Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister(),
           pUVar9 == (UClass *)0x0)) {
LAB_1466da88f:
          pUVar9 = (UClass *)0x0;
        }
        else {
          iVar4 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar13 + 0x38) < iVar4) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar4 * 8) !=
              &pUVar9->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_1466da88f;
          pUVar9 = (UClass *)*plVar10;
        }
        if (lVar12 != 0) {
          LOCK();
          *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + -1;
          UNLOCK();
          if (bVar7) {
            ReleaseSRWLockShared((PSRWLOCK)(lVar12 + 0x20));
          }
        }
        break;
      }
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + -1;
        UNLOCK();
        if (bVar7) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar12 + 0x20));
        }
      }
      pFVar14 = pFVar14 + 1;
    } while (pFVar14 != pFVar11);
  }
  if ((pUVar9 == (UClass *)0x0) &&
     (bVar7 = `UMovieSceneInterrogatedPropertyInstantiatorSystem::ResolveBlenderClass'::__l10::
              <lambda_1>::operator()(local_res10), !bVar7)) {
    pUVar9 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
    return pUVar9;
  }
  return pUVar9;
}

// StaticRegisterNativesUMovieSceneInterrogatedPropertyInstantiatorSystem @ 1466fe7e0

void __cdecl
UMovieSceneInterrogatedPropertyInstantiatorSystem::
StaticRegisterNativesUMovieSceneInterrogatedPropertyInstantiatorSystem(void)

{
  return;
}

// UpdateOutput @ 1467026d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::UpdateOutput
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,FInterrogationKey param_1,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_2,FPropertyInfo *param_3
          ,FEntityOutputAggregate param_4)

{
  atomic<int> *paVar1;
  FComponentTypeID *pFVar2;
  TTypeCompatibleBytes<unsigned_int> *pTVar3;
  atomic<int> aVar4;
  FMovieSceneEntityID FVar5;
  FComponentTypeID FVar6;
  ushort uVar7;
  EComponentHeaderLockMode EVar8;
  longlong lVar9;
  UMovieSceneEntitySystemLinker *this_00;
  FBuiltInComponentTypes *pFVar10;
  code *pcVar11;
  bool bVar12;
  FMovieSceneBlenderSystemID FVar13;
  uint uVar14;
  FMovieSceneEntityID *pFVar15;
  FInterrogationKey *pFVar16;
  UClass *pUVar17;
  UMovieSceneBlenderSystem *pUVar18;
  undefined7 extraout_var;
  UMovieSceneEntitySystem *pUVar19;
  undefined7 extraout_var_00;
  TBitArray<TFixedAllocator<12>_> *pTVar20;
  undefined7 extraout_var_01;
  uint *puVar21;
  ulong64 uVar22;
  FString *pFVar23;
  uint uVar24;
  FComponentHeader *pFVar25;
  FComponentHeader *pFVar26;
  FPropertyInfo *pFVar27;
  wchar_t *pwVar28;
  FPropertyDefinition *pFVar29;
  FComponentTypeID *pFVar30;
  FMovieSceneEntityID *pFVar31;
  wchar_t *pwVar32;
  int iVar33;
  int iVar34;
  FScriptContainerElement *pFVar35;
  FPropertyDefinition *pFVar36;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  longlong local_230;
  undefined4 local_228;
  FMovieSceneBlendChannelID local_224;
  FPropertyInfo *local_220;
  FMovieSceneEntityID local_214;
  FMovieSceneBlendChannelID local_210 [2];
  FPropertyDefinition *local_208;
  UMovieSceneEntitySystem *local_200;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *local_1f8;
  FInterrogationKey local_1f0;
  ushort local_1e6;
  FEntityBuilderImplBase local_1e0;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> local_1d8;
  FInterrogationKey local_1d4;
  uchar local_1cc;
  TComponentTypeID<FMovieSceneBlendChannelID> local_1c8;
  FMovieSceneBlendChannelID local_1c6;
  undefined1 local_1c2;
  ushort local_1c0;
  undefined2 local_1be;
  undefined1 local_1bc;
  UClass *local_1b8;
  UMovieSceneEntitySystem *local_1b0;
  FEntityInfo local_1a8;
  FEntityInfo local_190;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_178;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_168;
  TBitArray<TFixedAllocator<12>_> local_158;
  FString local_120;
  FString local_110;
  FString local_100;
  TBitArray<TFixedAllocator<12>_> local_f0;
  TBitArray<TFixedAllocator<12>_> local_b8;
  TBitArray<TFixedAllocator<12>_> local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_220 = param_3;
  local_1f8 = param_2;
  local_1f0 = param_1;
  if ((param_2->ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Inputs.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\EntitySystem\\Interrogation\\MovieSceneInterrogatedPropertyInstantiator.cpp"
                          ,0xa2,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (param_2->ArrayNum < 1) {
    local_238 = 0;
    local_230 = (longlong)param_2->ArrayNum;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  iVar33 = (this->BuiltInComponents->PropertyRegistry).Properties.ArrayNum;
  FVar5.Value = param_2->DataPtr->Value;
  pFVar36 = (FPropertyDefinition *)
            (this->BuiltInComponents->PropertyRegistry).Properties.AllocatorInstance.Data;
  if ((iVar33 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar29 = pFVar36 + iVar33;
  for (; pFVar36 != pFVar29; pFVar36 = pFVar36 + 1) {
    bVar12 = UE::MovieScene::FEntityManager::HasComponent
                       ((FEntityManager *)(this->_padding_ + 0x28),FVar5,
                        (FComponentTypeID)(pFVar36->PropertyType).Value);
    if (bVar12) {
      if (pFVar36 == (FPropertyDefinition *)0x0) goto LAB_1467027f9;
      goto LAB_14670281b;
    }
  }
  pFVar36 = (FPropertyDefinition *)0x0;
LAB_1467027f9:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("PropertyDefinition",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\EntitySystem\\Interrogation\\MovieSceneInterrogatedPropertyInstantiator.cpp"
                      ,0xab,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_14670281b:
  pFVar27 = local_220;
  local_178.DataPtr = param_2->DataPtr;
  local_178.ArrayNum = param_2->ArrayNum;
  local_178._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar12 = PropertySupportsFastPath(this,&local_178,local_220);
  if (bVar12) {
    lVar9 = this->_padding_;
    FVar6.Value = *(ushort *)&(this->BuiltInComponents->Interrogation).OutputKey;
    pFVar15 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[](param_2,0);
    FVar5.Value = pFVar15->Value;
    UE::MovieScene::FEntityManager::AddComponent((FEntityManager *)(lVar9 + 0x28),FVar5,FVar6);
    UE::MovieScene::FEntityManager::GetEntity((FEntityManager *)(lVar9 + 0x28),&local_1a8,FVar5);
    if (local_1a8.Data.Allocation != (FEntityAllocation *)0x0) {
      pFVar26 = (local_1a8.Data.Allocation)->ComponentHeaders;
      pFVar25 = pFVar26 + (local_1a8.Data.Allocation)->NumComponents;
      for (; pFVar26 != pFVar25; pFVar26 = pFVar26 + 1) {
        if ((pFVar26->ComponentType).Value == FVar6.Value) {
          if (pFVar26 == (FComponentHeader *)0x0) goto LAB_1467028b6;
          goto LAB_1467028e0;
        }
      }
      pFVar26 = (FComponentHeader *)0x0;
LAB_1467028b6:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2db,L"");
      if (bVar12) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
LAB_1467028e0:
      EVar8 = (local_1a8.Data.Allocation)->LockMode;
      if (EVar8 == Mutex) {
        AcquireSRWLockExclusive((PSRWLOCK)&pFVar26->ReadWriteLock);
      }
      LOCK();
      paVar1 = &pFVar26->ScheduledAccessCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      if ((aVar4 != (atomic<int>)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("PreviousAccessCount == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                              ,0x487,
                              L"Component header is still in use when it is being opened for write!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar16 = UE::MovieScene::FComponentHeader::GetValuePtr
                          (pFVar26,local_1a8.Data.ComponentOffset);
      *pFVar16 = param_1;
      if (pFVar26 != (FComponentHeader *)0x0) {
        uVar22 = 0;
        if (pFVar26->SerialNumber != 0) {
          uVar22 = pFVar26->SerialNumber;
        }
        pFVar26->SerialNumber = uVar22;
        LOCK();
        pFVar26->ScheduledAccessCount = (atomic<int>)((int)pFVar26->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar8 == Mutex) {
          ReleaseSRWLockExclusive((PSRWLOCK)&pFVar26->ReadWriteLock);
        }
      }
    }
    if (0 < (pFVar36->MetaDataTypes).ArrayNum) {
      pFVar30 = (pFVar36->MetaDataTypes).DataPtr;
      local_80.NumBits._0_1_ = '\0';
      local_80.NumBits._1_1_ = '\0';
      local_80.NumBits._2_1_ = '\0';
      local_80.NumBits._3_1_ = '\0';
      local_80.MaxBits._0_1_ = 0x80;
      local_80.MaxBits._1_1_ = '\x01';
      local_80.MaxBits._2_1_ = '\0';
      local_80.MaxBits._3_1_ = '\0';
      pFVar2 = pFVar30 + (pFVar36->MetaDataTypes).ArrayNum;
      for (; pFVar30 != pFVar2; pFVar30 = pFVar30 + 1) {
        uVar7 = pFVar30->Value;
        iVar33 = ((uint)uVar7 - local_80.NumBits) + 1;
        if (0 < iVar33) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_80,false,iVar33);
        }
        if ((local_80.NumBits <= (int)(uint)uVar7) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar3 = local_80.AllocatorInstance.InlineData + (uVar7 >> 5);
        *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar7 & 0x1f);
      }
      lVar9 = this->_padding_;
      if (param_2->ArrayNum < 1) {
        local_238 = 0;
        local_230 = (longlong)param_2->ArrayNum;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      UE::MovieScene::FEntityManager::AddComponents
                ((FEntityManager *)(lVar9 + 0x28),(FMovieSceneEntityID)param_2->DataPtr->Value,
                 (FComponentMask *)&local_80);
    }
  }
  else {
    local_228 = (uint)pFVar36->CompositeSize;
    pFVar35 = (this->BuiltInComponents->PropertyRegistry).CompositeDefinitions.AllocatorInstance.
              Data + (ulonglong)pFVar36->VariableSizeCompositeOffset * 4;
    local_168.DataPtr = local_1f8->DataPtr;
    local_168.ArrayNum = local_1f8->ArrayNum;
    local_168._12_4_ = *(undefined4 *)&local_1f8->field_0xc;
    pUVar17 = ResolveBlenderClass(this,pFVar36,&local_168);
    pUVar18 = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar27);
    if ((pUVar18 != (UMovieSceneBlenderSystem *)0x0) && (pUVar17 != (UClass *)pUVar18->_padding_)) {
      uVar7 = pFVar27->BlendChannel;
      FVar13 = UMovieSceneBlenderSystem::GetBlenderSystemID(pUVar18);
      local_224.ChannelID = uVar7;
      local_224.SystemID.Value = *(uchar *)CONCAT71(extraout_var,FVar13.Value);
      UMovieSceneBlenderSystem::ReleaseBlendChannel(pUVar18,local_224);
      local_220->BlendChannel = 0xffff;
      pFVar27 = local_220;
    }
    this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
    local_1b8 = pUVar17;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    pUVar19 = UMovieSceneEntitySystemLinker::LinkSystem
                        (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_1b8);
    if (pUVar19 == (UMovieSceneEntitySystem *)0x0) {
      pFVar23 = GetTypeName<UMovieSceneBlenderSystem>(&local_120);
      if ((pFVar23->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar28);
    }
    pUVar17 = Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister();
    iVar33 = (int)pUVar17->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar33) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar33 * 8) !=
        &pUVar17->_padding_)) {
      pFVar23 = GetTypeName<UMovieSceneBlenderSystem>(&local_110);
      pwVar28 = L"";
      if ((pFVar23->Data).ArrayNum == 0) {
        pwVar32 = L"";
      }
      else {
        pwVar32 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
      }
      pFVar23 = GetFullNameForCastLogError<UMovieSceneEntitySystem>(&local_100,pUVar19);
      if ((pFVar23->Data).ArrayNum != 0) {
        pwVar28 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar28,pwVar32);
    }
    local_1b0 = pUVar19;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)pFVar27,(FObjectPtr)&local_1b0);
    local_224._0_2_ = pFVar27->BlendChannel;
    if (pFVar27->BlendChannel == 0xffff) {
      pUVar18 = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar27);
      UMovieSceneBlenderSystem::AllocateBlendChannel(pUVar18);
      pFVar27->BlendChannel = local_1e6;
    }
    local_f0.MaxBits = 0x180;
    local_f0.NumBits = 0;
    local_208 = pFVar36;
    local_200 = pUVar19;
    if (0 < (pFVar36->MetaDataTypes).ArrayNum) {
      pFVar30 = (pFVar36->MetaDataTypes).DataPtr;
      pFVar2 = pFVar30 + (pFVar36->MetaDataTypes).ArrayNum;
      for (; pFVar30 != pFVar2; pFVar30 = pFVar30 + 1) {
        uVar7 = pFVar30->Value;
        iVar33 = ((uint)uVar7 - local_f0.NumBits) + 1;
        if (0 < iVar33) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_f0,false,iVar33);
        }
        if ((local_f0.NumBits <= (int)(uint)uVar7) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar3 = local_f0.AllocatorInstance.InlineData + (uVar7 >> 5);
        *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar7 & 0x1f);
        param_1 = local_1f0;
      }
    }
    pFVar27 = local_220;
    if (local_224._0_2_ == -1) {
      uVar7 = (pFVar36->InitialValueType).Value;
      iVar33 = ((uint)uVar7 - local_f0.NumBits) + 1;
      if (0 < iVar33) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_f0,false,iVar33);
      }
      if ((local_f0.NumBits <= (int)(uint)uVar7) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar3 = local_f0.AllocatorInstance.InlineData + (uVar7 >> 5);
      iVar33 = 0;
      *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar7 & 0x1f);
      if (local_228 != 0) {
        do {
          FVar6.Value = *(ushort *)pFVar35;
          pFVar31 = local_1f8->DataPtr;
          pFVar15 = pFVar31 + local_1f8->ArrayNum;
          for (; pFVar31 != pFVar15; pFVar31 = pFVar31 + 1) {
            bVar12 = UE::MovieScene::FEntityManager::HasComponent
                               ((FEntityManager *)(this->_padding_ + 0x28),
                                (FMovieSceneEntityID)pFVar31->Value,FVar6);
            if (bVar12) {
              iVar34 = ((uint)FVar6.Value - local_f0.NumBits) + 1;
              if (0 < iVar34) {
                TBitArray<TFixedAllocator<12>_>::Add(&local_f0,false,iVar34);
              }
              if ((local_f0.NumBits <= (int)(uint)FVar6.Value) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pTVar3 = local_f0.AllocatorInstance.InlineData + (FVar6.Value >> 5);
              *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)FVar6.Value & 0x1f);
              break;
            }
          }
          iVar33 = iVar33 + 1;
          pFVar35 = pFVar35 + 4;
          param_1 = local_1f0;
        } while (iVar33 < (int)local_228);
      }
      uVar7 = (local_208->PropertyType).Value;
      iVar33 = ((uint)uVar7 - local_f0.NumBits) + 1;
      if (0 < iVar33) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_f0,false,iVar33);
      }
      if ((local_f0.NumBits <= (int)(uint)uVar7) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar3 = local_f0.AllocatorInstance.InlineData + (uVar7 >> 5);
      *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar7 & 0x1f);
      uVar7 = local_220->BlendChannel;
      pUVar18 = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_220);
      FVar13 = UMovieSceneBlenderSystem::GetBlenderSystemID(pUVar18);
      pFVar10 = this->BuiltInComponents;
      local_210[0].ChannelID = uVar7;
      local_1d8 = (pFVar10->Interrogation).OutputKey;
      local_1c0 = (pFVar10->Tags).NeedsLink.Value;
      local_210[0].SystemID.Value = *(uchar *)CONCAT71(extraout_var_00,FVar13.Value);
      local_1c8 = pFVar10->BlendChannelOutput;
      local_1c6 = local_210[0];
      local_1cc = '\x01';
      local_1be = *(undefined2 *)((longlong)&local_200[1]._padding_ + 6);
      local_1e0 = (FEntityBuilderImplBase)
                  &
                  ___7__TEntityBuilder_U__TAdd_UFInterrogationKey_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___23_UFAdd_23_U523__MovieScene_UE__6B_
      ;
      local_1c2 = 1;
      local_1bc = 1;
      local_158.NumBits = 0;
      local_158.MaxBits = 0;
      local_1d4 = param_1;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_158,&local_f0);
      UE::MovieScene::FEntityBuilderImplBase::CreateEntity
                (&local_1e0,(FEntityManager *)&local_214,(FComponentMask *)(this->_padding_ + 0x28))
      ;
      pFVar27 = local_220;
      local_1e0 = (FEntityBuilderImplBase)&___7IEntityBuilder_MovieScene_UE__6B_;
      FVar5.Value = (local_220->PropertyEntityID).Value;
      if (FVar5.Value != 0xffff) {
        UE::MovieScene::FEntityManager::CopyComponents
                  ((FEntityManager *)(this->_padding_ + 0x28),FVar5,local_214,
                   (FComponentMask *)(*(longlong *)(this->_padding_ + 0x288) + 0x1f8));
        UE::MovieScene::FEntityManager::
        AddComponent<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_const_&>
                  ((FEntityManager *)(this->_padding_ + 0x28),
                   (FMovieSceneEntityID)(pFVar27->PropertyEntityID).Value,
                   this->BuiltInComponents->BlendChannelInput,local_210);
        UE::MovieScene::FEntityManager::RemoveComponents
                  ((FEntityManager *)(this->_padding_ + 0x28),
                   (FMovieSceneEntityID)(pFVar27->PropertyEntityID).Value,&this->CleanFastPathMask);
      }
      (pFVar27->PropertyEntityID).Value = local_214.Value;
    }
    else {
      pTVar20 = &UE::MovieScene::FEntityManager::GetEntityType
                           ((FEntityManager *)(this->_padding_ + 0x28),
                            (FMovieSceneEntityID)(local_220->PropertyEntityID).Value)->Bits;
      local_b8.NumBits = 0;
      local_b8.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_b8,pTVar20);
      iVar33 = 0;
      if (local_228 != 0) {
        do {
          FVar6.Value = *(ushort *)pFVar35;
          pFVar31 = local_1f8->DataPtr;
          pFVar15 = pFVar31 + local_1f8->ArrayNum;
          for (; pFVar31 != pFVar15; pFVar31 = pFVar31 + 1) {
            bVar12 = UE::MovieScene::FEntityManager::HasComponent
                               ((FEntityManager *)(this->_padding_ + 0x28),
                                (FMovieSceneEntityID)pFVar31->Value,FVar6);
            if (bVar12) goto LAB_146703063;
          }
          pFVar31 = (FMovieSceneEntityID *)0x0;
LAB_146703063:
          if ((local_b8.NumBits <= (int)(uint)FVar6.Value) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar14 = 1 << ((byte)FVar6.Value & 0x1f);
          uVar24 = *(uint *)local_b8.AllocatorInstance.InlineData[FVar6.Value >> 5].Pad;
          if (pFVar31 == (FMovieSceneEntityID *)0x0) {
            uVar24 = uVar24 & ~uVar14;
          }
          else {
            uVar24 = uVar24 | uVar14;
          }
          iVar33 = iVar33 + 1;
          *(uint *)local_b8.AllocatorInstance.InlineData[FVar6.Value >> 5].Pad = uVar24;
          pFVar35 = pFVar35 + 4;
          pFVar27 = local_220;
        } while (iVar33 < (int)local_228);
      }
      uVar7 = (local_208->PropertyType).Value;
      iVar33 = ((uint)uVar7 - local_b8.NumBits) + 1;
      if (0 < iVar33) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_b8,false,iVar33);
      }
      if ((local_b8.NumBits <= (int)(uint)uVar7) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar3 = local_b8.AllocatorInstance.InlineData + (uVar7 >> 5);
      *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar7 & 0x1f);
      UE::MovieScene::FEntityManager::ChangeEntityType
                ((FEntityManager *)(this->_padding_ + 0x28),
                 (FMovieSceneEntityID)(pFVar27->PropertyEntityID).Value,(FComponentMask *)&local_b8)
      ;
    }
    pFVar31 = local_1f8->DataPtr;
    pFVar15 = pFVar31 + local_1f8->ArrayNum;
    for (; pFVar31 != pFVar15; pFVar31 = pFVar31 + 1) {
      FVar5.Value = pFVar31->Value;
      uVar7 = pFVar27->BlendChannel;
      pUVar18 = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar27);
      FVar13 = UMovieSceneBlenderSystem::GetBlenderSystemID(pUVar18);
      lVar9 = this->_padding_;
      local_228 = CONCAT22(uVar7,(undefined2)local_228);
      local_228 = CONCAT31(local_228._1_3_,*(undefined1 *)CONCAT71(extraout_var_01,FVar13.Value));
      FVar6.Value = *(ushort *)&this->BuiltInComponents->BlendChannelInput;
      UE::MovieScene::FEntityManager::AddComponent((FEntityManager *)(lVar9 + 0x28),FVar5,FVar6);
      UE::MovieScene::FEntityManager::GetEntity((FEntityManager *)(lVar9 + 0x28),&local_190,FVar5);
      if (local_190.Data.Allocation != (FEntityAllocation *)0x0) {
        pFVar26 = (local_190.Data.Allocation)->ComponentHeaders;
        pFVar25 = pFVar26 + (local_190.Data.Allocation)->NumComponents;
        for (; pFVar26 != pFVar25; pFVar26 = pFVar26 + 1) {
          if ((pFVar26->ComponentType).Value == FVar6.Value) {
            if (pFVar26 == (FComponentHeader *)0x0) goto LAB_146703225;
            goto LAB_14670324f;
          }
        }
        pFVar26 = (FComponentHeader *)0x0;
LAB_146703225:
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2db,L"");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
LAB_14670324f:
        EVar8 = (local_190.Data.Allocation)->LockMode;
        if (EVar8 == Mutex) {
          AcquireSRWLockExclusive((PSRWLOCK)&pFVar26->ReadWriteLock);
        }
        LOCK();
        paVar1 = &pFVar26->ScheduledAccessCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if ((aVar4 != (atomic<int>)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("PreviousAccessCount == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                ,0x487,
                                L"Component header is still in use when it is being opened for write!"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar21 = UE::MovieScene::FComponentHeader::GetValuePtr
                            (pFVar26,local_190.Data.ComponentOffset);
        *puVar21 = local_228;
        if (pFVar26 != (FComponentHeader *)0x0) {
          uVar22 = 0;
          if (pFVar26->SerialNumber != 0) {
            uVar22 = pFVar26->SerialNumber;
          }
          pFVar26->SerialNumber = uVar22;
          LOCK();
          pFVar26->ScheduledAccessCount = (atomic<int>)((int)pFVar26->ScheduledAccessCount + -1);
          UNLOCK();
          if (EVar8 == Mutex) {
            ReleaseSRWLockExclusive((PSRWLOCK)&pFVar26->ReadWriteLock);
          }
        }
      }
      UE::MovieScene::FEntityManager::AddComponent
                ((FEntityManager *)(this->_padding_ + 0x28),FVar5,
                 (FComponentTypeID)*(ushort *)((longlong)&local_200[1]._padding_ + 6));
      UE::MovieScene::FEntityManager::RemoveComponents
                ((FEntityManager *)(this->_padding_ + 0x28),FVar5,&this->CleanFastPathMask);
      pFVar27 = local_220;
    }
  }
  return;
}

// RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits> @ 146898f30

TRecompositionResult<double> * __thiscall
UMovieSceneInterrogatedPropertyInstantiatorSystem::
RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
          (UMovieSceneInterrogatedPropertyInstantiatorSystem *this,
          TRecompositionResult<double> *__return_storage_ptr__,
          TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *param_1,
          FDecompositionQuery *param_2,double *param_3)

{
  UE::MovieScene::FPropertyRecomposerImpl::
  RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (&this->RecomposerImpl,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// operator() @ 1504f04b0

bool __thiscall
`UMovieSceneInterrogatedPropertyInstantiatorSystem::ResolveBlenderClass'::__l10::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7048268334642495631>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7048268334642495631>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

