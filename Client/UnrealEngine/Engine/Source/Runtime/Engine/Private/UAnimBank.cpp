// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 1473ca040

UClass * __cdecl UAnimBank::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBank.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBank",&Z_Registration_Info_UClass_UAnimBank.InnerSingleton,
               StaticRegisterNativesUAnimBank,0x110,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBank>,InternalVTableHelperCtorCaller<UAnimBank>,local_res8,
               UAnimationAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBank.InnerSingleton;
}

// UAnimBank @ 1473d7c80

UAnimBank * __thiscall UAnimBank::UAnimBank(UAnimBank *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bIsInitialized = false;
  (this->Data).Mapping.MeshGlobalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.MeshGlobalRefPose.ArrayNum = 0;
  (this->Data).Mapping.MeshGlobalRefPose.ArrayMax = 0;
  (this->Data).Mapping.AnimGlobalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.AnimGlobalRefPose.ArrayNum = 0;
  (this->Data).Mapping.AnimGlobalRefPose.ArrayMax = 0;
  (this->Data).Mapping.MeshToAnimIndexMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.MeshToAnimIndexMap.ArrayNum = 0;
  (this->Data).Mapping.MeshToAnimIndexMap.ArrayMax = 0;
  (this->Data).Mapping.RetargetingTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.RetargetingTable.ArrayNum = 0;
  (this->Data).Mapping.RetargetingTable.ArrayMax = 0;
  (this->Data).Mapping.PositionKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.PositionKeys.ArrayNum = 0;
  (this->Data).Mapping.PositionKeys.ArrayMax = 0;
  (this->Data).Mapping.RotationKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.RotationKeys.ArrayNum = 0;
  (this->Data).Mapping.RotationKeys.ArrayMax = 0;
  (this->Data).Mapping.BoneCount = 0;
  (this->Data).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Entries.ArrayNum = 0;
  (this->Data).Entries.ArrayMax = 0;
  this->_padding_ = (longlong)&___7UAnimBank__6B_;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  return this;
}

// UAnimBank @ 1473d7d70

UAnimBank * __thiscall UAnimBank::UAnimBank(UAnimBank *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bIsInitialized = false;
  (this->Data).Mapping.MeshGlobalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.MeshGlobalRefPose.ArrayNum = 0;
  (this->Data).Mapping.MeshGlobalRefPose.ArrayMax = 0;
  (this->Data).Mapping.AnimGlobalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.AnimGlobalRefPose.ArrayNum = 0;
  (this->Data).Mapping.AnimGlobalRefPose.ArrayMax = 0;
  (this->Data).Mapping.MeshToAnimIndexMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.MeshToAnimIndexMap.ArrayNum = 0;
  (this->Data).Mapping.MeshToAnimIndexMap.ArrayMax = 0;
  (this->Data).Mapping.RetargetingTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.RetargetingTable.ArrayNum = 0;
  (this->Data).Mapping.RetargetingTable.ArrayMax = 0;
  (this->Data).Mapping.PositionKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.PositionKeys.ArrayNum = 0;
  (this->Data).Mapping.PositionKeys.ArrayMax = 0;
  (this->Data).Mapping.RotationKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Mapping.RotationKeys.ArrayNum = 0;
  (this->Data).Mapping.RotationKeys.ArrayMax = 0;
  (this->Data).Mapping.BoneCount = 0;
  (this->Data).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Entries.ArrayNum = 0;
  (this->Data).Entries.ArrayMax = 0;
  this->_padding_ = (longlong)&___7UAnimBank__6B_;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  return this;
}

// ~UAnimBank @ 1473dafd0

void __thiscall UAnimBank::~UAnimBank(UAnimBank *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&___7UAnimBank__6B_;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  DestructItems<FAnimBankEntry,int>
            ((FAnimBankEntry *)(this->Data).Entries.AllocatorInstance.Data,
             (this->Data).Entries.ArrayNum);
  pFVar1 = (this->Data).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSkinnedAssetMapping::~FSkinnedAssetMapping(&(this->Data).Mapping);
  this->_padding_ = (longlong)&___7IInterface_AsyncCompilation__6B_;
  UAnimationAsset::~UAnimationAsset((UAnimationAsset *)this);
  return;
}

// BeginDestroy @ 1473e29a0

void __thiscall UAnimBank::BeginDestroy(UAnimBank *this)

{
  if (this->bIsInitialized != false) {
    FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
    this->bIsInitialized = false;
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1474035e0

UClass * __cdecl UAnimBank::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBank.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBank",&Z_Registration_Info_UClass_UAnimBank.InnerSingleton,
               StaticRegisterNativesUAnimBank,0x110,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBank>,InternalVTableHelperCtorCaller<UAnimBank>,local_res8,
               UAnimationAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBank.InnerSingleton;
}

// GetResourceSizeEx @ 147404240

void __thiscall UAnimBank::GetResourceSizeEx(UAnimBank *this,FResourceSizeEx *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->Data).Mapping.MeshGlobalRefPose.ArrayMax * 0x60);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->Data).Mapping.AnimGlobalRefPose.ArrayMax * 0x60);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->Data).Mapping.MeshToAnimIndexMap.ArrayMax << 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->Data).Mapping.RetargetingTable.ArrayMax << 6);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->Data).Mapping.PositionKeys.ArrayMax * 0xc);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->Data).Mapping.RotationKeys.ArrayMax << 4);
  iVar1 = (this->Data).Entries.ArrayNum;
  pFVar2 = (this->Data).Entries.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x80;
  while( true ) {
    if ((this->Data).Entries.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimBankEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x80);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)*(int *)(pFVar2 + 0xc) * 0xc);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)*(int *)(pFVar2 + 0x1c) << 4);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)*(int *)(pFVar2 + 0x2c) * 0xc);
    pFVar2 = pFVar2 + 0x80;
  }
  return;
}

// InitResources @ 147406870

void __thiscall UAnimBank::InitResources(UAnimBank *this)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    this->bIsInitialized = true;
  }
  return;
}

// IsReadyForFinishDestroy @ 147407f10

bool __thiscall UAnimBank::IsReadyForFinishDestroy(UAnimBank *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseResourcesFence);
  return bVar1;
}

// NeedsLoadForTargetPlatform @ 14740c0f0

bool __thiscall UAnimBank::NeedsLoadForTargetPlatform(UAnimBank *this,ITargetPlatform *param_1)

{
  bool bVar1;
  
  bVar1 = DoesTargetPlatformSupportNanite(param_1);
  return bVar1;
}

// PostLoad @ 14740d6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimBank::PostLoad(UAnimBank *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  int *piVar5;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FString local_18;
  
  FLLMScope::FLLMScope(local_res8,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Animation,true);
  UObject::PostLoad((UObject *)this);
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UObject::ConditionalPreload((UObject *)this->_padding_);
    UObject::ConditionalPostLoad((UObject *)this->_padding_);
  }
  lVar1 = this->_padding_;
  if (((lVar1 != 0) &&
      ((((int)((ulonglong)*(undefined8 *)(lVar1 + 0x160) >> 0x20) !=
         *(int *)((longlong)&this->_padding_ + 4) ||
        (int)((ulonglong)*(undefined8 *)(lVar1 + 0x168) >> 0x20) !=
        *(int *)((longlong)&this->_padding_ + 4)) ||
       (int)*(undefined8 *)(lVar1 + 0x168) != (int)this->_padding_) ||
       (int)*(undefined8 *)(lVar1 + 0x160) != (int)this->_padding_)) &&
     (2 < (byte)LogAnimation._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->_padding_ != 0) &&
      (((*(int *)((longlong)&this->_padding_ + 4) == 0 && (int)this->_padding_ == 0) &&
       *(int *)((longlong)&this->_padding_ + 4) == 0) && (int)this->_padding_ == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Skeleton==0 || SkeletonGuid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AnimationAsset.cpp"
                         ,0x14d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                 _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__ ==
     -1)) {
    pwVar4 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar4,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && (0 < (this->Data).Entries.ArrayNum)) {
    if ((*piVar5 < `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                   _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar4 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar4,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      this->bIsInitialized = true;
    }
  }
  return;
}

// PreSave @ 14740dc40

void __thiscall UAnimBank::PreSave(UAnimBank *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// ReleaseResources @ 14740e890

void __thiscall UAnimBank::ReleaseResources(UAnimBank *this)

{
  if (this->bIsInitialized != false) {
    FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
    this->bIsInitialized = false;
  }
  return;
}

// Serialize @ 147417c10

void __thiscall UAnimBank::Serialize(UAnimBank *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,Animation,false,None,Default,true);
  FMemScope::FMemScope(local_res18,Animation,true);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  UAnimationAsset::Serialize((UAnimationAsset *)this,param_1);
  if ((param_1->field_0x2b & 0x19) == 0x10) {
    TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                       &this->Data);
    TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
              (param_1,&(this->Data).Mapping.AnimGlobalRefPose);
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
              (param_1,&(this->Data).Mapping.MeshToAnimIndexMap);
    TArrayPrivateFriend::
    Serialize<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>
              (param_1,&(this->Data).Mapping.RetargetingTable);
    TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
              (param_1,&(this->Data).Mapping.PositionKeys);
    TArrayPrivateFriend::Serialize<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>
              (param_1,&(this->Data).Mapping.RotationKeys);
    puVar1 = &(this->Data).Mapping.BoneCount;
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    TArrayPrivateFriend::Serialize<FAnimBankEntry,TSizedDefaultAllocator<32>_>
              (param_1,&(this->Data).Entries);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Serialize @ 147417d50

void __thiscall UAnimBank::Serialize(UAnimBank *this,FStructuredArchiveRecord param_1)

{
  uint *puVar1;
  uint *puVar2;
  FArchive *this_00;
  FLLMScope local_res10 [2];
  FSlotBase local_res18;
  FMemScope local_res20;
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  FLLMScope::FLLMScope(local_res10,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Animation,true);
  (**(code **)(*(longlong *)this_00 + 0x230))(this_00,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)this_00 + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  UAnimationAsset::Serialize((UAnimationAsset *)this,this_00);
  if ((this_00->field_0x2b & 0x19) == 0x10) {
    TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
              (this_00,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                       &this->Data);
    TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
              (this_00,&(this->Data).Mapping.AnimGlobalRefPose);
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
              (this_00,&(this->Data).Mapping.MeshToAnimIndexMap);
    TArrayPrivateFriend::
    Serialize<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>
              (this_00,&(this->Data).Mapping.RetargetingTable);
    TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
              (this_00,&(this->Data).Mapping.PositionKeys);
    TArrayPrivateFriend::Serialize<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>
              (this_00,&(this->Data).Mapping.RotationKeys);
    puVar1 = &(this->Data).Mapping.BoneCount;
    puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
    if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,puVar1);
      }
    }
    else {
      *puVar1 = *puVar2;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    }
    TArrayPrivateFriend::Serialize<FAnimBankEntry,TSizedDefaultAllocator<32>_>
              (this_00,&(this->Data).Entries);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// StaticRegisterNativesUAnimBank @ 147419b70

void __cdecl UAnimBank::StaticRegisterNativesUAnimBank(void)

{
  return;
}

// _getUObject @ 14741d9d0

UObject * __thiscall UAnimBank::_getUObject(UAnimBank *this)

{
  return (UObject *)&this[-1].Data.Mapping.RotationKeys.ArrayNum;
}

// _getUObject`adjustor{8}' @ 14741d9dc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UAnimBank::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UAnimBank::_getUObject_adjustor_8__(UAnimBank *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAnimBank *)&this[-1].ReleaseResourcesFence);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{88}' @ 14741d9ec

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UAnimBank::_getUObject`adjustor{88}'
   (void)const __ptr64 */

UObject * __thiscall UAnimBank::_getUObject_adjustor_88__(UAnimBank *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAnimBank *)&this[-1].Data.Mapping.MeshToAnimIndexMap.ArrayNum);
  return (UObject *)pUVar1;
}

